package main

import (
	"os"
	"reflect"
	"strings"
	"testing"

	"github.com/mappu/miqt/qt"
)

func testMarshalling(t *testing.T) {

	// Bool
	t.Run("Bool", func(t *testing.T) {
		b := qt.NewQCheckBox2()
		expect := true
		b.SetChecked(expect)

		got := b.IsChecked()
		if expect != got {
			t.Errorf("Bool: expected %v, got %v", expect, got)
		}
	})

	// Int
	t.Run("Int", func(t *testing.T) {
		s := qt.NewQSize()
		expect := 128
		s.SetWidth(expect)

		// Get
		got := s.Width()
		if expect != got {
			t.Errorf("Int: expected %v, got %v", expect, got)
		}
	})

	// QString
	t.Run("QString", func(t *testing.T) {
		w := qt.NewQWidget2()
		expect := "Sample text"
		w.SetToolTip(expect)

		got := w.ToolTip()
		if got != expect {
			t.Errorf("QString: expected %v, got %v", expect, got)
		}
	})

	// QList<int>
	t.Run("QList<int>", func(t *testing.T) {
		expect := []int{10, 20, 30, 40, 50}
		s := qt.NewQVersionNumber2(expect)

		got := s.Segments()
		if !reflect.DeepEqual(got, expect) {
			t.Errorf("QList<int>: expected %#v, got %#v", expect, got)
		}
	})

	// QStringList
	t.Run("QStringList", func(t *testing.T) {
		c := qt.NewQInputDialog2()
		expect := []string{"foo", "bar", "baz", "quux"}
		c.SetComboBoxItems(expect)

		got := c.ComboBoxItems()
		if !reflect.DeepEqual(got, expect) {
			t.Errorf("QStringList: expected %#v, got %#v", expect, got)
		}
	})

	// QList<Qt type>
	t.Run("QList<Q*>", func(t *testing.T) {

		var expect []qt.QKeySequence
		expect = append(expect, *qt.QKeySequence_FromString("F1"))
		expect = append(expect, *qt.QKeySequence_FromString("F2"))
		expect = append(expect, *qt.QKeySequence_FromString("F3"))

		c := qt.NewQAction()
		c.SetShortcuts(expect)

		got := c.Shortcuts()
		if len(expect) != len(got) {
			t.Fatalf("QList<Q*>: expected len=%d, got len=%d", len(expect), len(got))
		}

		for i := 0; i < len(expect); i++ {
			if got[i].ToString() != expect[i].ToString() {
				t.Errorf("QList<Q*>: expected %#v, got %#v", expect, got)
			}
		}
	})

	// QByteArray
	t.Run("QByteArray", func(t *testing.T) {

		input := "foo bar baz"
		ba := qt.QFile_EncodeName(input)
		got := qt.QFile_DecodeName(ba)

		if input != got {
			t.Fatalf("QByteArray: expected %q, got %q", input, got)
		}
	})

	t.Run("QByteArray of zero length", func(t *testing.T) {

		input := ""
		ba := qt.QFile_EncodeName(input)
		got := qt.QFile_DecodeName(ba)

		if input != got {
			t.Fatalf("QByteArray: expected %q, got %q", input, got)
		}
	})

	// QMap
	t.Run("QMap", func(t *testing.T) {
		input := make(map[string]qt.QVariant)
		input["foo"] = *qt.NewQVariant14("FOO")
		input["bar"] = *qt.NewQVariant14("BAR")
		input["baz"] = *qt.NewQVariant14("BAZ")

		qtobj := qt.QJsonObject_FromVariantMap(input)
		got := qtobj.ToVariantMap()

		if len(got) != len(input) {
			t.Fatalf("QMap: expected len %d, got len %d", len(input), len(got))
		}

		for src_key, _ := range input {
			qvalue, ok := got[src_key]
			if !ok {
				t.Fatalf("QMap: missing entry %q", src_key)
			}

			gotValue := qvalue.ToString()
			expectValue := strings.ToUpper(src_key)
			if gotValue != expectValue {
				t.Fatalf("QMap: single value expected %q, got %q", expectValue, gotValue)
			}
		}
	})

}

func TestMarshalling(t *testing.T) {

	qt.NewQApplication(os.Args)

	// In case of heap corruption, run the whole test multiple times.

	for i := 0; i < 5; i++ {
		testMarshalling(t)
	}

}
