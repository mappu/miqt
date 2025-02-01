package qt

/*

#include "gen_qfileiconprovider.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFileIconProvider__IconType int

const (
	QFileIconProvider__Computer QFileIconProvider__IconType = 0
	QFileIconProvider__Desktop  QFileIconProvider__IconType = 1
	QFileIconProvider__Trashcan QFileIconProvider__IconType = 2
	QFileIconProvider__Network  QFileIconProvider__IconType = 3
	QFileIconProvider__Drive    QFileIconProvider__IconType = 4
	QFileIconProvider__Folder   QFileIconProvider__IconType = 5
	QFileIconProvider__File     QFileIconProvider__IconType = 6
)

type QFileIconProvider__Option int

const (
	QFileIconProvider__DontUseCustomDirectoryIcons QFileIconProvider__Option = 1
)

type QFileIconProvider struct {
	h *C.QFileIconProvider
}

func (this *QFileIconProvider) cPointer() *C.QFileIconProvider {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFileIconProvider) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFileIconProvider constructs the type using only CGO pointers.
func newQFileIconProvider(h *C.QFileIconProvider) *QFileIconProvider {
	if h == nil {
		return nil
	}

	return &QFileIconProvider{h: h}
}

// UnsafeNewQFileIconProvider constructs the type using only unsafe pointers.
func UnsafeNewQFileIconProvider(h unsafe.Pointer) *QFileIconProvider {
	return newQFileIconProvider((*C.QFileIconProvider)(h))
}

// NewQFileIconProvider constructs a new QFileIconProvider object.
func NewQFileIconProvider() *QFileIconProvider {

	return newQFileIconProvider(C.QFileIconProvider_new())
}

func (this *QFileIconProvider) Icon(typeVal QFileIconProvider__IconType) *QIcon {
	_goptr := newQIcon(C.QFileIconProvider_icon(this.h, (C.int)(typeVal)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileIconProvider) IconWithInfo(info *QFileInfo) *QIcon {
	_goptr := newQIcon(C.QFileIconProvider_iconWithInfo(this.h, info.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileIconProvider) Type(info *QFileInfo) string {
	var _ms C.struct_miqt_string = C.QFileIconProvider_type(this.h, info.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileIconProvider) SetOptions(options QFileIconProvider__Option) {
	C.QFileIconProvider_setOptions(this.h, (C.int)(options))
}

func (this *QFileIconProvider) Options() QFileIconProvider__Option {
	return (QFileIconProvider__Option)(C.QFileIconProvider_options(this.h))
}

func (this *QFileIconProvider) callVirtualBase_Icon(typeVal QFileIconProvider__IconType) *QIcon {

	_goptr := newQIcon(C.QFileIconProvider_virtualbase_icon(unsafe.Pointer(this.h), (C.int)(typeVal)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFileIconProvider) Onicon(slot func(super func(typeVal QFileIconProvider__IconType) *QIcon, typeVal QFileIconProvider__IconType) *QIcon) {
	ok := C.QFileIconProvider_override_virtual_icon(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileIconProvider_icon
func miqt_exec_callback_QFileIconProvider_icon(self *C.QFileIconProvider, cb C.intptr_t, typeVal C.int) *C.QIcon {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(typeVal QFileIconProvider__IconType) *QIcon, typeVal QFileIconProvider__IconType) *QIcon)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QFileIconProvider__IconType)(typeVal)

	virtualReturn := gofunc((&QFileIconProvider{h: self}).callVirtualBase_Icon, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFileIconProvider) callVirtualBase_IconWithInfo(info *QFileInfo) *QIcon {

	_goptr := newQIcon(C.QFileIconProvider_virtualbase_iconWithInfo(unsafe.Pointer(this.h), info.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFileIconProvider) OniconWithInfo(slot func(super func(info *QFileInfo) *QIcon, info *QFileInfo) *QIcon) {
	ok := C.QFileIconProvider_override_virtual_iconWithInfo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileIconProvider_iconWithInfo
func miqt_exec_callback_QFileIconProvider_iconWithInfo(self *C.QFileIconProvider, cb C.intptr_t, info *C.QFileInfo) *C.QIcon {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(info *QFileInfo) *QIcon, info *QFileInfo) *QIcon)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFileInfo(info)

	virtualReturn := gofunc((&QFileIconProvider{h: self}).callVirtualBase_IconWithInfo, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFileIconProvider) callVirtualBase_Type(info *QFileInfo) string {

	var _ms C.struct_miqt_string = C.QFileIconProvider_virtualbase_type(unsafe.Pointer(this.h), info.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QFileIconProvider) Ontype(slot func(super func(info *QFileInfo) string, info *QFileInfo) string) {
	ok := C.QFileIconProvider_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileIconProvider_type
func miqt_exec_callback_QFileIconProvider_type(self *C.QFileIconProvider, cb C.intptr_t, info *C.QFileInfo) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(info *QFileInfo) string, info *QFileInfo) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFileInfo(info)

	virtualReturn := gofunc((&QFileIconProvider{h: self}).callVirtualBase_Type, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

// Delete this object from C++ memory.
func (this *QFileIconProvider) Delete() {
	C.QFileIconProvider_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileIconProvider) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileIconProvider) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
