package qt6

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

type QFileIconProvider struct {
	h          *C.QFileIconProvider
	isSubclass bool
	*QAbstractFileIconProvider
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
func newQFileIconProvider(h *C.QFileIconProvider, h_QAbstractFileIconProvider *C.QAbstractFileIconProvider) *QFileIconProvider {
	if h == nil {
		return nil
	}
	return &QFileIconProvider{h: h,
		QAbstractFileIconProvider: newQAbstractFileIconProvider(h_QAbstractFileIconProvider)}
}

// UnsafeNewQFileIconProvider constructs the type using only unsafe pointers.
func UnsafeNewQFileIconProvider(h unsafe.Pointer, h_QAbstractFileIconProvider unsafe.Pointer) *QFileIconProvider {
	if h == nil {
		return nil
	}

	return &QFileIconProvider{h: (*C.QFileIconProvider)(h),
		QAbstractFileIconProvider: UnsafeNewQAbstractFileIconProvider(h_QAbstractFileIconProvider)}
}

// NewQFileIconProvider constructs a new QFileIconProvider object.
func NewQFileIconProvider() *QFileIconProvider {
	var outptr_QFileIconProvider *C.QFileIconProvider = nil
	var outptr_QAbstractFileIconProvider *C.QAbstractFileIconProvider = nil

	C.QFileIconProvider_new(&outptr_QFileIconProvider, &outptr_QAbstractFileIconProvider)
	ret := newQFileIconProvider(outptr_QFileIconProvider, outptr_QAbstractFileIconProvider)
	ret.isSubclass = true
	return ret
}

func (this *QFileIconProvider) Icon(typeVal QAbstractFileIconProvider__IconType) *QIcon {
	_ret := C.QFileIconProvider_Icon(this.h, (C.int)(typeVal))
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileIconProvider) IconWithInfo(info *QFileInfo) *QIcon {
	_ret := C.QFileIconProvider_IconWithInfo(this.h, info.cPointer())
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileIconProvider) callVirtualBase_Icon(typeVal QAbstractFileIconProvider__IconType) *QIcon {

	_ret := C.QFileIconProvider_virtualbase_Icon(unsafe.Pointer(this.h), (C.int)(typeVal))
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFileIconProvider) OnIcon(slot func(super func(typeVal QAbstractFileIconProvider__IconType) *QIcon, typeVal QAbstractFileIconProvider__IconType) *QIcon) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFileIconProvider_override_virtual_Icon(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileIconProvider_Icon
func miqt_exec_callback_QFileIconProvider_Icon(self *C.QFileIconProvider, cb C.intptr_t, typeVal C.int) *C.QIcon {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(typeVal QAbstractFileIconProvider__IconType) *QIcon, typeVal QAbstractFileIconProvider__IconType) *QIcon)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractFileIconProvider__IconType)(typeVal)

	virtualReturn := gofunc((&QFileIconProvider{h: self}).callVirtualBase_Icon, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFileIconProvider) callVirtualBase_IconWithInfo(info *QFileInfo) *QIcon {

	_ret := C.QFileIconProvider_virtualbase_IconWithInfo(unsafe.Pointer(this.h), info.cPointer())
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFileIconProvider) OnIconWithInfo(slot func(super func(info *QFileInfo) *QIcon, info *QFileInfo) *QIcon) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFileIconProvider_override_virtual_IconWithInfo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileIconProvider_IconWithInfo
func miqt_exec_callback_QFileIconProvider_IconWithInfo(self *C.QFileIconProvider, cb C.intptr_t, info *C.QFileInfo) *C.QIcon {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(info *QFileInfo) *QIcon, info *QFileInfo) *QIcon)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFileInfo(unsafe.Pointer(info))

	virtualReturn := gofunc((&QFileIconProvider{h: self}).callVirtualBase_IconWithInfo, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFileIconProvider) callVirtualBase_Type(param1 *QFileInfo) string {

	var _ms C.struct_miqt_string = C.QFileIconProvider_virtualbase_Type(unsafe.Pointer(this.h), param1.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QFileIconProvider) OnType(slot func(super func(param1 *QFileInfo) string, param1 *QFileInfo) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFileIconProvider_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileIconProvider_Type
func miqt_exec_callback_QFileIconProvider_Type(self *C.QFileIconProvider, cb C.intptr_t, param1 *C.QFileInfo) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFileInfo) string, param1 *QFileInfo) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFileInfo(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QFileIconProvider{h: self}).callVirtualBase_Type, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QFileIconProvider) callVirtualBase_SetOptions(options QAbstractFileIconProvider__Option) {

	C.QFileIconProvider_virtualbase_SetOptions(unsafe.Pointer(this.h), (C.int)(options))

}
func (this *QFileIconProvider) OnSetOptions(slot func(super func(options QAbstractFileIconProvider__Option), options QAbstractFileIconProvider__Option)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFileIconProvider_override_virtual_SetOptions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileIconProvider_SetOptions
func miqt_exec_callback_QFileIconProvider_SetOptions(self *C.QFileIconProvider, cb C.intptr_t, options C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(options QAbstractFileIconProvider__Option), options QAbstractFileIconProvider__Option))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractFileIconProvider__Option)(options)

	gofunc((&QFileIconProvider{h: self}).callVirtualBase_SetOptions, slotval1)

}

func (this *QFileIconProvider) callVirtualBase_Options() QAbstractFileIconProvider__Option {

	return (QAbstractFileIconProvider__Option)(C.QFileIconProvider_virtualbase_Options(unsafe.Pointer(this.h)))

}
func (this *QFileIconProvider) OnOptions(slot func(super func() QAbstractFileIconProvider__Option) QAbstractFileIconProvider__Option) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFileIconProvider_override_virtual_Options(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileIconProvider_Options
func miqt_exec_callback_QFileIconProvider_Options(self *C.QFileIconProvider, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractFileIconProvider__Option) QAbstractFileIconProvider__Option)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileIconProvider{h: self}).callVirtualBase_Options)

	return (C.int)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QFileIconProvider) Delete() {
	C.QFileIconProvider_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileIconProvider) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileIconProvider) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
