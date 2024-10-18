package main

import (
	"os"
	"reflect"
	"testing"

	"github.com/mappu/miqt/qt"
)

func TestMarshalling(t *testing.T) {

	qt.NewQApplication(os.Args)

	// Bool
	t.Run("Bool", func(t *testing.T) {
		b := qt.NewQCheckBox()
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
		w := qt.NewQWidget()
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
		c := qt.NewQInputDialog()
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

	t.Run("QByteArray", func(t *testing.T) {

		input := "foo bar baz"
		ba := qt.QFile_EncodeName(input)
		got := qt.QFile_DecodeName(ba)

		if input != got {
			t.Fatalf("QByteArray: expected %q, got %q", input, got)
		}

	})

}
