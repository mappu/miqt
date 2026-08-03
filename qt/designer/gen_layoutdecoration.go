package designer

/*

#include "gen_layoutdecoration.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QDesignerLayoutDecorationExtension__InsertMode int

const (
	QDesignerLayoutDecorationExtension__InsertWidgetMode QDesignerLayoutDecorationExtension__InsertMode = 0
	QDesignerLayoutDecorationExtension__InsertRowMode    QDesignerLayoutDecorationExtension__InsertMode = 1
	QDesignerLayoutDecorationExtension__InsertColumnMode QDesignerLayoutDecorationExtension__InsertMode = 2
)

type QDesignerLayoutDecorationExtension struct {
	h *C.QDesignerLayoutDecorationExtension
}

func (this *QDesignerLayoutDecorationExtension) cPointer() *C.QDesignerLayoutDecorationExtension {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerLayoutDecorationExtension) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerLayoutDecorationExtension constructs the type using only CGO pointers.
func newQDesignerLayoutDecorationExtension(h *C.QDesignerLayoutDecorationExtension) *QDesignerLayoutDecorationExtension {
	if h == nil {
		return nil
	}

	return &QDesignerLayoutDecorationExtension{h: h}
}

// UnsafeNewQDesignerLayoutDecorationExtension constructs the type using only unsafe pointers.
func UnsafeNewQDesignerLayoutDecorationExtension(h unsafe.Pointer) *QDesignerLayoutDecorationExtension {
	return newQDesignerLayoutDecorationExtension((*C.QDesignerLayoutDecorationExtension)(h))
}

func (this *QDesignerLayoutDecorationExtension) Widgets(layout *qt.QLayout) []*qt.QWidget {
	var _ma C.struct_miqt_array = C.QDesignerLayoutDecorationExtension_widgets(this.h, (*C.QLayout)(layout.UnsafePointer()))
	_ret := make([]*qt.QWidget, int(_ma.len))
	_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt.UnsafeNewQWidget(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QDesignerLayoutDecorationExtension) ItemInfo(index int) *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QDesignerLayoutDecorationExtension_itemInfo(this.h, (C.int)(index))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerLayoutDecorationExtension) IndexOf(widget *qt.QWidget) int {
	return (int)(C.QDesignerLayoutDecorationExtension_indexOf(this.h, (*C.QWidget)(widget.UnsafePointer())))
}

func (this *QDesignerLayoutDecorationExtension) IndexOfWithItem(item *qt.QLayoutItem) int {
	return (int)(C.QDesignerLayoutDecorationExtension_indexOfWithItem(this.h, (*C.QLayoutItem)(item.UnsafePointer())))
}

func (this *QDesignerLayoutDecorationExtension) CurrentInsertMode() QDesignerLayoutDecorationExtension__InsertMode {
	return (QDesignerLayoutDecorationExtension__InsertMode)(C.QDesignerLayoutDecorationExtension_currentInsertMode(this.h))
}

func (this *QDesignerLayoutDecorationExtension) CurrentIndex() int {
	return (int)(C.QDesignerLayoutDecorationExtension_currentIndex(this.h))
}

func (this *QDesignerLayoutDecorationExtension) CurrentCell() struct {
	First  int
	Second int
} {
	var _mm C.struct_miqt_map = C.QDesignerLayoutDecorationExtension_currentCell(this.h)
	_First_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.values))
	_entry_First := (int)(_First_CArray[0])

	_entry_Second := (int)(_Second_CArray[0])

	return struct {
		First  int
		Second int
	}{First: _entry_First, Second: _entry_Second}
}

func (this *QDesignerLayoutDecorationExtension) InsertWidget(widget *qt.QWidget, cell struct {
	First  int
	Second int
}) {
	cell_First_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8)))
	defer C.free(unsafe.Pointer(cell_First_CArray))
	cell_Second_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8)))
	defer C.free(unsafe.Pointer(cell_Second_CArray))
	cell_First_CArray[0] = (C.int)(cell.First)
	cell_Second_CArray[0] = (C.int)(cell.Second)
	cell_pair := C.struct_miqt_map{
		len:    1,
		keys:   unsafe.Pointer(cell_First_CArray),
		values: unsafe.Pointer(cell_Second_CArray),
	}
	C.QDesignerLayoutDecorationExtension_insertWidget(this.h, (*C.QWidget)(widget.UnsafePointer()), cell_pair)
}

func (this *QDesignerLayoutDecorationExtension) RemoveWidget(widget *qt.QWidget) {
	C.QDesignerLayoutDecorationExtension_removeWidget(this.h, (*C.QWidget)(widget.UnsafePointer()))
}

func (this *QDesignerLayoutDecorationExtension) InsertRow(row int) {
	C.QDesignerLayoutDecorationExtension_insertRow(this.h, (C.int)(row))
}

func (this *QDesignerLayoutDecorationExtension) InsertColumn(column int) {
	C.QDesignerLayoutDecorationExtension_insertColumn(this.h, (C.int)(column))
}

func (this *QDesignerLayoutDecorationExtension) Simplify() {
	C.QDesignerLayoutDecorationExtension_simplify(this.h)
}

func (this *QDesignerLayoutDecorationExtension) FindItemAt(pos *qt.QPoint) int {
	return (int)(C.QDesignerLayoutDecorationExtension_findItemAt(this.h, (*C.QPoint)(pos.UnsafePointer())))
}

func (this *QDesignerLayoutDecorationExtension) FindItemAt2(row int, column int) int {
	return (int)(C.QDesignerLayoutDecorationExtension_findItemAt2(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QDesignerLayoutDecorationExtension) AdjustIndicator(pos *qt.QPoint, index int) {
	C.QDesignerLayoutDecorationExtension_adjustIndicator(this.h, (*C.QPoint)(pos.UnsafePointer()), (C.int)(index))
}

func (this *QDesignerLayoutDecorationExtension) OperatorAssign(param1 *QDesignerLayoutDecorationExtension) {
	C.QDesignerLayoutDecorationExtension_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDesignerLayoutDecorationExtension) Delete() {
	C.QDesignerLayoutDecorationExtension_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerLayoutDecorationExtension) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerLayoutDecorationExtension) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
