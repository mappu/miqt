package qt6

/*

#include "gen_qtextlist.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTextList struct {
	h          *C.QTextList
	isSubclass bool
	*QTextBlockGroup
}

func (this *QTextList) cPointer() *C.QTextList {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextList) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextList constructs the type using only CGO pointers.
func newQTextList(h *C.QTextList, h_QTextBlockGroup *C.QTextBlockGroup, h_QTextObject *C.QTextObject, h_QObject *C.QObject) *QTextList {
	if h == nil {
		return nil
	}
	return &QTextList{h: h,
		QTextBlockGroup: newQTextBlockGroup(h_QTextBlockGroup, h_QTextObject, h_QObject)}
}

// UnsafeNewQTextList constructs the type using only unsafe pointers.
func UnsafeNewQTextList(h unsafe.Pointer, h_QTextBlockGroup unsafe.Pointer, h_QTextObject unsafe.Pointer, h_QObject unsafe.Pointer) *QTextList {
	if h == nil {
		return nil
	}

	return &QTextList{h: (*C.QTextList)(h),
		QTextBlockGroup: UnsafeNewQTextBlockGroup(h_QTextBlockGroup, h_QTextObject, h_QObject)}
}

// NewQTextList constructs a new QTextList object.
func NewQTextList(doc *QTextDocument) *QTextList {
	var outptr_QTextList *C.QTextList = nil
	var outptr_QTextBlockGroup *C.QTextBlockGroup = nil
	var outptr_QTextObject *C.QTextObject = nil
	var outptr_QObject *C.QObject = nil

	C.QTextList_new(doc.cPointer(), &outptr_QTextList, &outptr_QTextBlockGroup, &outptr_QTextObject, &outptr_QObject)
	ret := newQTextList(outptr_QTextList, outptr_QTextBlockGroup, outptr_QTextObject, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QTextList) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QTextList_MetaObject(this.h)))
}

func (this *QTextList) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTextList_Metacast(this.h, param1_Cstring))
}

func QTextList_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextList_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextList) Count() int {
	return (int)(C.QTextList_Count(this.h))
}

func (this *QTextList) Item(i int) *QTextBlock {
	_ret := C.QTextList_Item(this.h, (C.int)(i))
	_goptr := newQTextBlock(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextList) ItemNumber(param1 *QTextBlock) int {
	return (int)(C.QTextList_ItemNumber(this.h, param1.cPointer()))
}

func (this *QTextList) ItemText(param1 *QTextBlock) string {
	var _ms C.struct_miqt_string = C.QTextList_ItemText(this.h, param1.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextList) RemoveItem(i int) {
	C.QTextList_RemoveItem(this.h, (C.int)(i))
}

func (this *QTextList) Remove(param1 *QTextBlock) {
	C.QTextList_Remove(this.h, param1.cPointer())
}

func (this *QTextList) Add(block *QTextBlock) {
	C.QTextList_Add(this.h, block.cPointer())
}

func (this *QTextList) SetFormat(format *QTextListFormat) {
	C.QTextList_SetFormat(this.h, format.cPointer())
}

func (this *QTextList) Format() *QTextListFormat {
	_ret := C.QTextList_Format(this.h)
	_goptr := newQTextListFormat(_ret, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTextList_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextList_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextList_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextList_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextList) callVirtualBase_BlockInserted(block *QTextBlock) {

	C.QTextList_virtualbase_BlockInserted(unsafe.Pointer(this.h), block.cPointer())

}
func (this *QTextList) OnBlockInserted(slot func(super func(block *QTextBlock), block *QTextBlock)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextList_override_virtual_BlockInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextList_BlockInserted
func miqt_exec_callback_QTextList_BlockInserted(self *C.QTextList, cb C.intptr_t, block *C.QTextBlock) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(block *QTextBlock), block *QTextBlock))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTextBlock(unsafe.Pointer(block))

	gofunc((&QTextList{h: self}).callVirtualBase_BlockInserted, slotval1)

}

func (this *QTextList) callVirtualBase_BlockRemoved(block *QTextBlock) {

	C.QTextList_virtualbase_BlockRemoved(unsafe.Pointer(this.h), block.cPointer())

}
func (this *QTextList) OnBlockRemoved(slot func(super func(block *QTextBlock), block *QTextBlock)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextList_override_virtual_BlockRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextList_BlockRemoved
func miqt_exec_callback_QTextList_BlockRemoved(self *C.QTextList, cb C.intptr_t, block *C.QTextBlock) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(block *QTextBlock), block *QTextBlock))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTextBlock(unsafe.Pointer(block))

	gofunc((&QTextList{h: self}).callVirtualBase_BlockRemoved, slotval1)

}

func (this *QTextList) callVirtualBase_BlockFormatChanged(block *QTextBlock) {

	C.QTextList_virtualbase_BlockFormatChanged(unsafe.Pointer(this.h), block.cPointer())

}
func (this *QTextList) OnBlockFormatChanged(slot func(super func(block *QTextBlock), block *QTextBlock)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextList_override_virtual_BlockFormatChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextList_BlockFormatChanged
func miqt_exec_callback_QTextList_BlockFormatChanged(self *C.QTextList, cb C.intptr_t, block *C.QTextBlock) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(block *QTextBlock), block *QTextBlock))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTextBlock(unsafe.Pointer(block))

	gofunc((&QTextList{h: self}).callVirtualBase_BlockFormatChanged, slotval1)

}

// Delete this object from C++ memory.
func (this *QTextList) Delete() {
	C.QTextList_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextList) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextList) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
