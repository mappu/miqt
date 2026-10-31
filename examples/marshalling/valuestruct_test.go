package main

import (
	"testing"

	qt "github.com/mappu/miqt/qt"
)

func TestValueStructs(t *testing.T) {
	ensureApplication()

	t.Run("Layout", func(t *testing.T) {
		// These read the memory through real Qt getters, so any disagreement
		// with the layout of the Qt class would be visible here
		r := qt.NewQRect4(1, 2, 30, 40)
		if r.X() != 1 || r.Y() != 2 || r.Width() != 30 || r.Height() != 40 {
			t.Errorf("QRect: got %d %d %d %d", r.X(), r.Y(), r.Width(), r.Height())
		}

		rf := qt.NewQRectF4(1.5, 2.5, 30.5, 40.5)
		if rf.X() != 1.5 || rf.Y() != 2.5 || rf.Width() != 30.5 || rf.Height() != 40.5 {
			t.Errorf("QRectF: got %v %v %v %v", rf.X(), rf.Y(), rf.Width(), rf.Height())
		}

		sf := qt.NewQSizeF3(1.5, 2.5)
		if sf.Width() != 1.5 || sf.Height() != 2.5 {
			t.Errorf("QSizeF: got %v %v", sf.Width(), sf.Height())
		}

		pt := qt.NewQPoint2(1, 2)
		if pt.X() != 1 || pt.Y() != 2 {
			t.Errorf("QPoint: got %d %d", pt.X(), pt.Y())
		}

		ptf := qt.NewQPointF3(1.5, 2.5)
		if ptf.X() != 1.5 || ptf.Y() != 2.5 {
			t.Errorf("QPointF: got %v %v", ptf.X(), ptf.Y())
		}

		mg := qt.NewQMargins2(1, 2, 3, 4)
		if mg.Left() != 1 || mg.Top() != 2 || mg.Right() != 3 || mg.Bottom() != 4 {
			t.Errorf("QMargins: got %d %d %d %d", mg.Left(), mg.Top(), mg.Right(), mg.Bottom())
		}

		mgf := qt.NewQMarginsF2(1.5, 2.5, 3.5, 4.5)
		if mgf.Left() != 1.5 || mgf.Top() != 2.5 || mgf.Right() != 3.5 || mgf.Bottom() != 4.5 {
			t.Errorf("QMarginsF: got %v %v %v %v", mgf.Left(), mgf.Top(), mgf.Right(), mgf.Bottom())
		}

		v3 := qt.NewQVector3D3(1.5, 2.5, 3.5)
		if v3.X() != 1.5 || v3.Y() != 2.5 || v3.Z() != 3.5 {
			t.Errorf("QVector3D: got %v %v %v", v3.X(), v3.Y(), v3.Z())
		}

		col := qt.NewQColor11(10, 20, 30, 40)
		if col.Red() != 10 || col.Green() != 20 || col.Blue() != 30 || col.Alpha() != 40 {
			t.Errorf("QColor: got %d %d %d %d", col.Red(), col.Green(), col.Blue(), col.Alpha())
		}

		if got := qt.NewQRect4(1, 2, 30, 40).TopLeft(); got != qt.NewQPoint2(1, 2) {
			t.Errorf("QRect.TopLeft: got %d %d", got.X(), got.Y())
		}

		c := qt.QRgba64_FromRgba64(0x1111222233334444)
		if c.Red() != 0x4444 || c.Green() != 0x3333 || c.Blue() != 0x2222 || c.Alpha() != 0x1111 {
			t.Errorf("QRgba64: got %x %x %x %x", c.Red(), c.Green(), c.Blue(), c.Alpha())
		}
	})

	t.Run("DefaultConstructor", func(t *testing.T) {
		if s := qt.NewQSize(); s.IsValid() {
			t.Errorf("QSize default constructor should be invalid, got %dx%d", s.Width(), s.Height())
		}
	})

	t.Run("QModelIndex", func(t *testing.T) {
		if (qt.QModelIndex{}).IsValid() || qt.NewQModelIndex().IsValid() {
			t.Errorf("zero value and default constructor should be invalid")
		}

		model := qt.NewQStandardItemModel2(3, 2)
		defer model.Delete()

		idx := model.Index(2, 1, qt.NewQModelIndex())
		if !idx.IsValid() || idx.Row() != 2 || idx.Column() != 1 {
			t.Errorf("Index: got valid=%v %d %d", idx.IsValid(), idx.Row(), idx.Column())
		}
		if idx.Model().UnsafePointer() != model.QAbstractItemModel.UnsafePointer() {
			t.Errorf("Model: does not point to the original model")
		}
		if idx != model.Index(2, 1, qt.NewQModelIndex()) || idx == model.Index(1, 1, qt.NewQModelIndex()) {
			t.Errorf("comparison does not match the Qt identity of the index")
		}

		// The struct is enough for C++ to reach back into the model
		val := qt.NewQVariant14("cell")
		defer val.Delete()
		if !model.SetData(idx, val, int(qt.EditRole)) {
			t.Errorf("SetData failed")
		}
		got := idx.Data()
		defer got.Delete()
		if got.ToString() != "cell" {
			t.Errorf("Data: got %q", got.ToString())
		}
	})

	t.Run("Mutation", func(t *testing.T) {
		s := qt.NewQSize2(1, 2)
		copied := s
		s.SetWidth(10)
		if s.Width() != 10 || copied.Width() != 1 {
			t.Errorf("expected value semantics, got %d and %d", s.Width(), copied.Width())
		}

		// A non-const reference return is a pointer to the same object
		ret := s.OperatorPlusAssign(qt.NewQSize2(1, 1))
		ret.SetHeight(100)
		if s.Width() != 11 || s.Height() != 100 {
			t.Errorf("OperatorPlusAssign: got %dx%d", s.Width(), s.Height())
		}
	})

	t.Run("QtRoundTrip", func(t *testing.T) {
		w := qt.NewQWidget2()
		defer w.Delete()

		w.ResizeWithQSize(qt.NewQSize2(123, 45))
		if got := w.Size(); got != qt.NewQSize2(123, 45) {
			t.Errorf("Size: got %dx%d", got.Width(), got.Height())
		}

		v := qt.NewQVariant31(qt.NewQRect4(1, 2, 3, 4))
		defer v.Delete()
		if got := v.ToRect(); got != qt.NewQRect4(1, 2, 3, 4) {
			t.Errorf("QVariant: got %d %d %d %d", got.X(), got.Y(), got.Width(), got.Height())
		}
	})

	t.Run("VirtualOverride", func(t *testing.T) {
		w := qt.NewQWidget2()
		defer w.Delete()

		superValid := false
		w.OnSizeHint(func(super func() qt.QSize) qt.QSize {
			superValid = !super().IsValid() // QWidget without a layout
			return qt.NewQSize2(77, 88)
		})

		if got := w.SizeHint(); got != qt.NewQSize2(77, 88) {
			t.Errorf("SizeHint: got %dx%d", got.Width(), got.Height())
		}
		if !superValid {
			t.Errorf("super() did not return the base class value")
		}
	})

	t.Run("Signal", func(t *testing.T) {
		scene := qt.NewQGraphicsScene()
		defer scene.Delete()

		var got qt.QRectF
		scene.OnSceneRectChanged(func(rect qt.QRectF) {
			got = rect
		})

		expect := qt.NewQRectF4(1, 2, 3, 4)
		scene.SetSceneRect(expect)
		if got != expect {
			t.Errorf("OnSceneRectChanged: got %v %v %v %v", got.X(), got.Y(), got.Width(), got.Height())
		}
	})

	t.Run("List", func(t *testing.T) {
		// C++ to Go
		pm := qt.NewQPixmap2(16, 32)
		defer pm.Delete()
		ic := qt.NewQIcon()
		defer ic.Delete()
		ic.AddPixmap(pm)

		got := ic.AvailableSizes()
		if len(got) != 1 || got[0] != qt.NewQSize2(16, 32) {
			t.Errorf("AvailableSizes: got %v", got)
		}

		// Go to C++
		img := qt.NewQImage3(10, 10, qt.QImage__Format_ARGB32)
		defer img.Delete()
		img.Fill2(qt.Transparent)
		p := qt.NewQPainter2(img.QPaintDevice)
		defer p.Delete()
		p.DrawRects3([]qt.QRect{qt.NewQRect4(1, 1, 2, 2), qt.NewQRect4(5, 5, 2, 2)})
		p.End()
		if img.Pixel(1, 1) == 0 || img.Pixel(5, 5) == 0 || img.Pixel(9, 9) != 0 {
			t.Errorf("DrawRects: unexpected pixels %x %x %x", img.Pixel(1, 1), img.Pixel(5, 5), img.Pixel(9, 9))
		}
	})

	t.Run("ReturnedPointer", func(t *testing.T) {
		// A pointer return views the C++ memory
		rg := qt.NewQRegion3(qt.NewQRect4(0, 0, 10, 10))
		defer rg.Delete()
		if got := rg.Begin(); *got != qt.NewQRect4(0, 0, 10, 10) {
			t.Errorf("Begin: got %d %d %d %d", got.X(), got.Y(), got.Width(), got.Height())
		}
	})

	t.Run("OutputPointer", func(t *testing.T) {
		img := qt.NewQImage3(100, 100, qt.QImage__Format_ARGB32)
		defer img.Delete()
		p := qt.NewQPainter2(img.QPaintDevice)
		defer p.Delete()

		var out qt.QRect
		p.DrawText10(qt.NewQRect4(0, 0, 100, 100), 0, "x", &out)
		p.End()
		if out.Width() <= 0 {
			t.Errorf("output pointer was not written: got width %d", out.Width())
		}
	})

	t.Run("NoAllocations", func(t *testing.T) {
		w := qt.NewQWidget2()
		defer w.Delete()
		s := qt.NewQSize2(1, 2)

		// Calls involving only value structs don't allocate at all
		allocs := testing.AllocsPerRun(100, func() {
			_ = s.BoundedTo(qt.NewQSize2(100, 100)).Width()
		})
		if allocs != 0 {
			t.Errorf("value struct call: expected no Go allocations, got %v", allocs)
		}

		// Returning or passing one costs no more than the same call with an int.
		// (Cgo can allocate for the pointer argument in any call on a QWidget)
		baseline := testing.AllocsPerRun(100, func() {
			_ = w.Width()
		})
		allocs = testing.AllocsPerRun(100, func() {
			_ = w.Size()
		})
		if allocs > baseline {
			t.Errorf("QWidget.Size: expected at most %v Go allocations, got %v", baseline, allocs)
		}
	})
}
