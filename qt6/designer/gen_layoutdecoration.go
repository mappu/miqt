package designer

/*

#include "gen_layoutdecoration.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
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

// NewQDesignerLayoutDecorationExtension constructs a new QDesignerLayoutDecorationExtension object.
func NewQDesignerLayoutDecorationExtension() *QDesignerLayoutDecorationExtension {

	return newQDesignerLayoutDecorationExtension(C.QDesignerLayoutDecorationExtension_new())
}

func (this *QDesignerLayoutDecorationExtension) Widgets(layout *qt6.QLayout) []*qt6.QWidget {
	var _ma C.struct_miqt_array = C.QDesignerLayoutDecorationExtension_widgets(this.h, (*C.QLayout)(layout.UnsafePointer()))
	_ret := make([]*qt6.QWidget, int(_ma.len))
	_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt6.UnsafeNewQWidget(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QDesignerLayoutDecorationExtension) ItemInfo(index int) *qt6.QRect {
	_goptr := qt6.UnsafeNewQRect(unsafe.Pointer(C.QDesignerLayoutDecorationExtension_itemInfo(this.h, (C.int)(index))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerLayoutDecorationExtension) IndexOf(widget *qt6.QWidget) int {
	return (int)(C.QDesignerLayoutDecorationExtension_indexOf(this.h, (*C.QWidget)(widget.UnsafePointer())))
}

func (this *QDesignerLayoutDecorationExtension) IndexOfWithItem(item *qt6.QLayoutItem) int {
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

func (this *QDesignerLayoutDecorationExtension) InsertWidget(widget *qt6.QWidget, cell struct {
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

func (this *QDesignerLayoutDecorationExtension) RemoveWidget(widget *qt6.QWidget) {
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

func (this *QDesignerLayoutDecorationExtension) FindItemAt(pos *qt6.QPoint) int {
	return (int)(C.QDesignerLayoutDecorationExtension_findItemAt(this.h, (*C.QPoint)(pos.UnsafePointer())))
}

func (this *QDesignerLayoutDecorationExtension) FindItemAt2(row int, column int) int {
	return (int)(C.QDesignerLayoutDecorationExtension_findItemAt2(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QDesignerLayoutDecorationExtension) AdjustIndicator(pos *qt6.QPoint, index int) {
	C.QDesignerLayoutDecorationExtension_adjustIndicator(this.h, (*C.QPoint)(pos.UnsafePointer()), (C.int)(index))
}
func (this *QDesignerLayoutDecorationExtension) OnWidgets(slot func(layout *qt6.QLayout) []*qt6.QWidget) {
	ok := C.QDesignerLayoutDecorationExtension_override_virtual_widgets(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerLayoutDecorationExtension_widgets
func miqt_exec_callback_QDesignerLayoutDecorationExtension_widgets(self *C.QDesignerLayoutDecorationExtension, cb C.intptr_t, layout *C.QLayout) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(layout *qt6.QLayout) []*qt6.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQLayout(unsafe.Pointer(layout))

	virtualReturn := gofunc(slotval1)
	virtualReturn_CArray := (*[0xffff]*C.QWidget)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (*C.QWidget)(virtualReturn[i].UnsafePointer())
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}
func (this *QDesignerLayoutDecorationExtension) OnItemInfo(slot func(index int) *qt6.QRect) {
	ok := C.QDesignerLayoutDecorationExtension_override_virtual_itemInfo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerLayoutDecorationExtension_itemInfo
func miqt_exec_callback_QDesignerLayoutDecorationExtension_itemInfo(self *C.QDesignerLayoutDecorationExtension, cb C.intptr_t, index C.int) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) *qt6.QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (*C.QRect)(virtualReturn.UnsafePointer())

}
func (this *QDesignerLayoutDecorationExtension) OnIndexOf(slot func(widget *qt6.QWidget) int) {
	ok := C.QDesignerLayoutDecorationExtension_override_virtual_indexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerLayoutDecorationExtension_indexOf
func miqt_exec_callback_QDesignerLayoutDecorationExtension_indexOf(self *C.QDesignerLayoutDecorationExtension, cb C.intptr_t, widget *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(widget *qt6.QWidget) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	virtualReturn := gofunc(slotval1)

	return (C.int)(virtualReturn)

}
func (this *QDesignerLayoutDecorationExtension) OnIndexOfWithItem(slot func(item *qt6.QLayoutItem) int) {
	ok := C.QDesignerLayoutDecorationExtension_override_virtual_indexOfWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerLayoutDecorationExtension_indexOfWithItem
func miqt_exec_callback_QDesignerLayoutDecorationExtension_indexOfWithItem(self *C.QDesignerLayoutDecorationExtension, cb C.intptr_t, item *C.QLayoutItem) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *qt6.QLayoutItem) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQLayoutItem(unsafe.Pointer(item))

	virtualReturn := gofunc(slotval1)

	return (C.int)(virtualReturn)

}
func (this *QDesignerLayoutDecorationExtension) OnCurrentInsertMode(slot func() QDesignerLayoutDecorationExtension__InsertMode) {
	ok := C.QDesignerLayoutDecorationExtension_override_virtual_currentInsertMode(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerLayoutDecorationExtension_currentInsertMode
func miqt_exec_callback_QDesignerLayoutDecorationExtension_currentInsertMode(self *C.QDesignerLayoutDecorationExtension, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() QDesignerLayoutDecorationExtension__InsertMode)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QDesignerLayoutDecorationExtension) OnCurrentIndex(slot func() int) {
	ok := C.QDesignerLayoutDecorationExtension_override_virtual_currentIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerLayoutDecorationExtension_currentIndex
func miqt_exec_callback_QDesignerLayoutDecorationExtension_currentIndex(self *C.QDesignerLayoutDecorationExtension, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QDesignerLayoutDecorationExtension) OnCurrentCell(slot func() struct {
	First  int
	Second int
}) {
	ok := C.QDesignerLayoutDecorationExtension_override_virtual_currentCell(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerLayoutDecorationExtension_currentCell
func miqt_exec_callback_QDesignerLayoutDecorationExtension_currentCell(self *C.QDesignerLayoutDecorationExtension, cb C.intptr_t) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func() struct {
		First  int
		Second int
	})
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_First_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8)))
	defer C.free(unsafe.Pointer(virtualReturn_First_CArray))
	virtualReturn_Second_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8)))
	defer C.free(unsafe.Pointer(virtualReturn_Second_CArray))
	virtualReturn_First_CArray[0] = (C.int)(virtualReturn.First)
	virtualReturn_Second_CArray[0] = (C.int)(virtualReturn.Second)
	virtualReturn_pair := C.struct_miqt_map{
		len:    1,
		keys:   unsafe.Pointer(virtualReturn_First_CArray),
		values: unsafe.Pointer(virtualReturn_Second_CArray),
	}

	return virtualReturn_pair

}
func (this *QDesignerLayoutDecorationExtension) OnInsertWidget(slot func(widget *qt6.QWidget, cell struct {
	First  int
	Second int
})) {
	ok := C.QDesignerLayoutDecorationExtension_override_virtual_insertWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerLayoutDecorationExtension_insertWidget
func miqt_exec_callback_QDesignerLayoutDecorationExtension_insertWidget(self *C.QDesignerLayoutDecorationExtension, cb C.intptr_t, widget *C.QWidget, cell C.struct_miqt_map) {
	gofunc, ok := cgo.Handle(cb).Value().(func(widget *qt6.QWidget, cell struct {
		First  int
		Second int
	}))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	var cell_mm C.struct_miqt_map = cell
	cell_First_CArray := (*[0xffff]C.int)(unsafe.Pointer(cell_mm.keys))
	cell_Second_CArray := (*[0xffff]C.int)(unsafe.Pointer(cell_mm.values))
	cell_entry_First := (int)(cell_First_CArray[0])

	cell_entry_Second := (int)(cell_Second_CArray[0])

	slotval2 := struct {
		First  int
		Second int
	}{First: cell_entry_First, Second: cell_entry_Second}

	gofunc(slotval1, slotval2)

}
func (this *QDesignerLayoutDecorationExtension) OnRemoveWidget(slot func(widget *qt6.QWidget)) {
	ok := C.QDesignerLayoutDecorationExtension_override_virtual_removeWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerLayoutDecorationExtension_removeWidget
func miqt_exec_callback_QDesignerLayoutDecorationExtension_removeWidget(self *C.QDesignerLayoutDecorationExtension, cb C.intptr_t, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(widget *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc(slotval1)

}
func (this *QDesignerLayoutDecorationExtension) OnInsertRow(slot func(row int)) {
	ok := C.QDesignerLayoutDecorationExtension_override_virtual_insertRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerLayoutDecorationExtension_insertRow
func miqt_exec_callback_QDesignerLayoutDecorationExtension_insertRow(self *C.QDesignerLayoutDecorationExtension, cb C.intptr_t, row C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(row int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	gofunc(slotval1)

}
func (this *QDesignerLayoutDecorationExtension) OnInsertColumn(slot func(column int)) {
	ok := C.QDesignerLayoutDecorationExtension_override_virtual_insertColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerLayoutDecorationExtension_insertColumn
func miqt_exec_callback_QDesignerLayoutDecorationExtension_insertColumn(self *C.QDesignerLayoutDecorationExtension, cb C.intptr_t, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	gofunc(slotval1)

}
func (this *QDesignerLayoutDecorationExtension) OnSimplify(slot func()) {
	ok := C.QDesignerLayoutDecorationExtension_override_virtual_simplify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerLayoutDecorationExtension_simplify
func miqt_exec_callback_QDesignerLayoutDecorationExtension_simplify(self *C.QDesignerLayoutDecorationExtension, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QDesignerLayoutDecorationExtension) OnFindItemAt(slot func(pos *qt6.QPoint) int) {
	ok := C.QDesignerLayoutDecorationExtension_override_virtual_findItemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerLayoutDecorationExtension_findItemAt
func miqt_exec_callback_QDesignerLayoutDecorationExtension_findItemAt(self *C.QDesignerLayoutDecorationExtension, cb C.intptr_t, pos *C.QPoint) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos *qt6.QPoint) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(pos))

	virtualReturn := gofunc(slotval1)

	return (C.int)(virtualReturn)

}
func (this *QDesignerLayoutDecorationExtension) OnFindItemAt2(slot func(row int, column int) int) {
	ok := C.QDesignerLayoutDecorationExtension_override_virtual_findItemAt2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerLayoutDecorationExtension_findItemAt2
func miqt_exec_callback_QDesignerLayoutDecorationExtension_findItemAt2(self *C.QDesignerLayoutDecorationExtension, cb C.intptr_t, row C.int, column C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(row int, column int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	virtualReturn := gofunc(slotval1, slotval2)

	return (C.int)(virtualReturn)

}
func (this *QDesignerLayoutDecorationExtension) OnAdjustIndicator(slot func(pos *qt6.QPoint, index int)) {
	ok := C.QDesignerLayoutDecorationExtension_override_virtual_adjustIndicator(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerLayoutDecorationExtension_adjustIndicator
func miqt_exec_callback_QDesignerLayoutDecorationExtension_adjustIndicator(self *C.QDesignerLayoutDecorationExtension, cb C.intptr_t, pos *C.QPoint, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos *qt6.QPoint, index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(pos))

	slotval2 := (int)(index)

	gofunc(slotval1, slotval2)

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
