package qt6

import (
	"fmt"
	"os"
	"os/exec"
	"runtime"
	"strings"
	"testing"
	"unicode/utf16"
)

func TestStringViewOwnedInput(t *testing.T) {
	for i, want := range []string{"", "a", "café-位置-😀", "embedded\x00NUL", strings.Repeat("café-位置-", 1024)} {
		for _, bytes := range []bool{false, true} {
			t.Run(fmt.Sprintf("%d/UTF8=%t", i, bytes), func(t *testing.T) {
				var view *QAnyStringView
				if bytes {
					input := []byte(want)
					view = NewQAnyStringView2(input)
					for i := range input {
						input[i] = '!'
					}
				} else {
					view = NewQAnyStringView3(want)
				}
				if view == nil {
					t.Fatal("nil view")
				}
				defer view.Delete()
				runtime.GC()
				if got := view.ToString(); got != want {
					t.Fatalf("ToString = %q, want %q", got, want)
				}
				size, sizeBytes := int64(len(utf16.Encode([]rune(want)))), int64(2*len(utf16.Encode([]rune(want))))
				if bytes {
					size, sizeBytes = int64(len(want)), int64(len(want))
				}
				if view.Size() != size || view.SizeBytes() != sizeBytes {
					t.Fatalf("sizes = %d/%d, want %d/%d", view.Size(), view.SizeBytes(), size, sizeBytes)
				}
				if view.IsEmpty() != (want == "") {
					t.Fatal("incorrect empty state")
				}
			})
		}
	}
	view := NewQAnyStringView()
	defer view.Delete()
	if !view.IsNull() || !view.IsEmpty() || view.ToString() != "" {
		t.Fatal("default view must be null and empty")
	}
}

func TestStringViewCopyOutlivesSource(t *testing.T) {
	for _, bytes := range []bool{false, true} {
		const want = "copy-café-位置-\x00-😀"
		var source *QAnyStringView
		if bytes {
			source = NewQAnyStringView2([]byte(want))
		} else {
			source = NewQAnyStringView3(want)
		}
		copy := NewQAnyStringView5(source)
		size, sizeBytes := source.Size(), source.SizeBytes()
		source.Delete()
		runtime.GC()
		if got := copy.ToString(); got != want {
			t.Fatalf("copy = %q, want %q", got, want)
		}
		if copy.Size() != size || copy.SizeBytes() != sizeBytes {
			t.Fatal("copy changed encoding")
		}
		copy.Delete()
	}
	source := NewQAnyStringView()
	copy := NewQAnyStringView5(source)
	source.Delete()
	defer copy.Delete()
	if !copy.IsNull() || !copy.IsEmpty() {
		t.Fatal("null copy lost null state")
	}
}

func TestStringViewCharOutlivesSource(t *testing.T) {
	char := NewQChar(0x4f4d)
	view := NewQAnyStringView4(char)
	char.Delete()
	runtime.GC()
	defer view.Delete()
	if got := view.ToString(); got != "位" {
		t.Fatalf("char view = %q", got)
	}
}

func TestStringViewQtConsumers(t *testing.T) {
	for _, want := range []string{"short", "café-位置-😀", "embedded\x00NUL", strings.Repeat("long-", 256)} {
		view := NewQAnyStringView3(want)
		if !checkQtConsumers(view, want, t.TempDir()+"/settings.ini") {
			t.Fatal("QObject/QSettings string mismatch")
		}
		view.Delete()
	}
}

func TestStringViewUnsafeNativePointer(t *testing.T) {
	view := UnsafeNewQAnyStringView(externalView())
	if got := view.ToString(); got != "native" {
		t.Fatalf("external view = %q", got)
	}
	view.Delete()
}

func TestStringViewFinalizerCopy(t *testing.T) {
	copy := func() *QAnyStringView {
		source := NewQAnyStringView3("finalizer-café-位置")
		source.GoGC()
		return NewQAnyStringView5(source)
	}()
	defer copy.Delete()
	for i := 0; i < 5; i++ {
		runtime.GC()
		runtime.Gosched()
	}
	if got := copy.ToString(); got != "finalizer-café-位置" {
		t.Fatalf("finalized source corrupted copy: %q", got)
	}
}

func TestStringViewDeleteWithFinalizer(t *testing.T) {
	view := NewQAnyStringView3("explicit-delete")
	view.GoGC()
	view.Delete()
	view.Delete()
	view = nil
	for i := 0; i < 5; i++ {
		runtime.GC()
		runtime.Gosched()
	}
}

func TestStringViewNativeKeyboard(t *testing.T) {
	if os.Getenv("MIQT_TEST_GUI") != "1" {
		t.Skip("set MIQT_TEST_GUI=1 on an isolated X11 display")
	}
	// Other consumers create QObjects on test goroutines. Use a fresh process
	// so QApplication establishes its own native thread before any QObject.
	if os.Getenv("MIQT_STRINGVIEW_GUI_CHILD") != "1" {
		cmd := exec.Command(os.Args[0], "-test.run=^TestStringViewNativeKeyboard$", "-test.v")
		cmd.Env = append(os.Environ(), "MIQT_STRINGVIEW_GUI_CHILD=1")
		out, err := cmd.CombinedOutput()
		if err != nil {
			t.Fatalf("isolated native keyboard: %v\n%s", err, out)
		}
		if !strings.Contains(string(out), "--- PASS: TestStringViewNativeKeyboard") {
			t.Fatalf("missing native keyboard completion: %s", out)
		}
		t.Logf("%s", out)
		return
	}
	runtime.LockOSThread()
	defer runtime.UnlockOSThread()
	const want = "button-café-位置-😀" + "\x00" + "suffix"
	view := NewQAnyStringView3(want)
	defer view.Delete()
	if !checkNativeKeyboard(view, want, t.TempDir()+"/click.ini") {
		t.Fatal("native Space input lost the exact object name or settings key")
	}
}

func TestStringViewCopyPreservesLatin1(t *testing.T) {
	source := UnsafeNewQAnyStringView(externalLatin1View())
	copy := NewQAnyStringView5(source)
	source.Delete()
	defer copy.Delete()
	if got := copy.ToString(); got != "é"+"\x00"+"Z" {
		t.Fatalf("Latin1 copy = %q", got)
	}
	if copy.Size() != 3 || copy.SizeBytes() != 3 {
		t.Fatal("Latin1 copy changed encoding")
	}
}

func TestStringViewInvalidUTF8(t *testing.T) {
	source := NewQAnyStringView2([]byte{0xff, 0, 'A'})
	copy := NewQAnyStringView5(source)
	source.Delete()
	defer copy.Delete()
	if got := copy.ToString(); got != "�"+"\x00"+"A" {
		t.Fatalf("invalid UTF8 copy = %q", got)
	}
	if copy.Size() != 3 || copy.SizeBytes() != 3 {
		t.Fatal("invalid UTF8 copy changed native size")
	}
}

func TestStringViewCopyPreservesEmptyState(t *testing.T) {
	for _, source := range []*QAnyStringView{NewQAnyStringView(), NewQAnyStringView2(nil), NewQAnyStringView3("")} {
		null := source.IsNull()
		copy := NewQAnyStringView5(source)
		source.Delete()
		if copy.IsNull() != null || !copy.IsEmpty() || copy.Size() != 0 {
			t.Fatal("empty copy changed null state")
		}
		copy.Delete()
	}
}

func TestStringViewDefaultUnsafeOwnership(t *testing.T) {
	// The default Qt value has no backing characters. Rewrapping its native
	// allocation must still allow a single deletion through the public API.
	view := UnsafeNewQAnyStringView(NewQAnyStringView().UnsafePointer())
	if !view.IsNull() {
		t.Fatal("default native view is not null")
	}
	view.Delete()
}
