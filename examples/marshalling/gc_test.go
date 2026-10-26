package main

import (
	"fmt"
	"runtime"
	"sync/atomic"
	"testing"

	"github.com/mappu/miqt/qt"
)

// TestGoGCKeepAlive is a regression test for issue #366. Values that Qt
// returns by value get a finalizer (GoGC). The finalizer must not delete the
// C++ object while a call is still using it:
//   - as the receiver, e.g. w.Grab().Width()
//   - as an argument, e.g. w.SetFont(w.Font())
//   - as the owner of a returned reference, e.g. Palette().Color().Name()
//   - as a value returned from a virtual override, which C++ copies after the
//     Go callback has returned
//
// The use-after-free only happens if a GC cycle ends during the call, so this
// collects garbage continuously and repeats each call many times. A
// regression shows up as a crash (SIGSEGV or heap corruption) or as a wrong
// value, but not on every run.
func TestGoGCKeepAlive(t *testing.T) {
	ensureApplication()

	const rows = 20

	model := qt.NewQStandardItemModel2(rows, 1)
	proxy := qt.NewQIdentityProxyModel()
	proxy.SetSourceModel(model.QAbstractItemModel)

	cellText := func(row int) string {
		return fmt.Sprintf("row %d", row)
	}

	proxy.OnData(func(super func(proxyIndex *qt.QModelIndex, role int) *qt.QVariant, proxyIndex *qt.QModelIndex, role int) *qt.QVariant {
		v := qt.NewQVariant14(cellText(proxyIndex.Row()))
		v.GoGC()
		return v
	})
	proxy.OnItemData(func(super func(index *qt.QModelIndex) map[int]qt.QVariant, index *qt.QModelIndex) map[int]qt.QVariant {
		v := qt.NewQVariant14(cellText(index.Row()))
		v.GoGC()
		return map[int]qt.QVariant{int(qt.DisplayRole): *v}
	})
	proxy.OnMatch(func(super func(start *qt.QModelIndex, role int, value *qt.QVariant, hits int, flags qt.MatchFlag) []qt.QModelIndex, start *qt.QModelIndex, role int, value *qt.QVariant, hits int, flags qt.MatchFlag) []qt.QModelIndex {
		// Index() returns values that have a finalizer
		return []qt.QModelIndex{*proxy.Index(start.Row(), 0, qt.NewQModelIndex())}
	})

	w := qt.NewQLabel3("Hello")
	w.Resize(200, 50)
	defer w.Delete()

	var stop atomic.Bool
	gcDone := make(chan struct{})
	go func() {
		defer close(gcDone)
		for !stop.Load() {
			runtime.GC()
		}
	}()
	defer func() {
		stop.Store(true)
		<-gcDone
	}()

	root := qt.NewQModelIndex()
	defer root.Delete()

	for i := 0; i < 20000; i++ {
		row := i % rows

		// Receiver
		if got := w.Grab().Width(); got != 200 {
			t.Fatalf("Grab().Width(): expected 200, got %d", got)
		}

		// Argument
		w.SetFont(w.Font())

		// Owner of a returned reference
		_ = qt.QGuiApplication_Palette().Color(qt.QPalette__Active, qt.QPalette__Window).Name()

		// Values returned from virtual overrides
		index := proxy.Index(row, 0, root)

		if got := proxy.Data(index, int(qt.DisplayRole)).ToString(); got != cellText(row) {
			t.Fatalf("OnData: expected %q, got %q", cellText(row), got)
		}

		itemData := proxy.ItemData(index)
		if got := itemData[int(qt.DisplayRole)]; got.ToString() != cellText(row) {
			t.Fatalf("OnItemData: expected %q, got %q", cellText(row), got.ToString())
		}

		matches := proxy.Match(index, int(qt.DisplayRole), qt.NewQVariant14(cellText(row)), 1, qt.MatchExactly)
		if len(matches) != 1 || matches[0].Row() != row {
			t.Fatalf("OnMatch: expected row %d, got %d matches", row, len(matches))
		}
	}
}
