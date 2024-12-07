package qt6

/*

#include "gen_qabstractfileiconprovider.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractFileIconProvider__IconType int

const (
	QAbstractFileIconProvider__Computer QAbstractFileIconProvider__IconType = 0
	QAbstractFileIconProvider__Desktop  QAbstractFileIconProvider__IconType = 1
	QAbstractFileIconProvider__Trashcan QAbstractFileIconProvider__IconType = 2
	QAbstractFileIconProvider__Network  QAbstractFileIconProvider__IconType = 3
	QAbstractFileIconProvider__Drive    QAbstractFileIconProvider__IconType = 4
	QAbstractFileIconProvider__Folder   QAbstractFileIconProvider__IconType = 5
	QAbstractFileIconProvider__File     QAbstractFileIconProvider__IconType = 6
)

type QAbstractFileIconProvider__Option int

const (
	QAbstractFileIconProvider__DontUseCustomDirectoryIcons QAbstractFileIconProvider__Option = 1
)

type QAbstractFileIconProvider struct {
	h          *C.QAbstractFileIconProvider
	isSubclass bool
}

func (this *QAbstractFileIconProvider) cPointer() *C.QAbstractFileIconProvider {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractFileIconProvider) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractFileIconProvider constructs the type using only CGO pointers.
func newQAbstractFileIconProvider(h *C.QAbstractFileIconProvider) *QAbstractFileIconProvider {
	if h == nil {
		return nil
	}
	return &QAbstractFileIconProvider{h: h}
}

// UnsafeNewQAbstractFileIconProvider constructs the type using only unsafe pointers.
func UnsafeNewQAbstractFileIconProvider(h unsafe.Pointer) *QAbstractFileIconProvider {
	if h == nil {
		return nil
	}

	return &QAbstractFileIconProvider{h: (*C.QAbstractFileIconProvider)(h)}
}

// NewQAbstractFileIconProvider constructs a new QAbstractFileIconProvider object.
func NewQAbstractFileIconProvider() *QAbstractFileIconProvider {
	var outptr_QAbstractFileIconProvider *C.QAbstractFileIconProvider = nil

	C.QAbstractFileIconProvider_new(&outptr_QAbstractFileIconProvider)
	ret := newQAbstractFileIconProvider(outptr_QAbstractFileIconProvider)
	ret.isSubclass = true
	return ret
}

func (this *QAbstractFileIconProvider) Icon(param1 QAbstractFileIconProvider__IconType) *QIcon {
	_goptr := newQIcon(C.QAbstractFileIconProvider_Icon(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractFileIconProvider) IconWithQFileInfo(param1 *QFileInfo) *QIcon {
	_goptr := newQIcon(C.QAbstractFileIconProvider_IconWithQFileInfo(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractFileIconProvider) Type(param1 *QFileInfo) string {
	var _ms C.struct_miqt_string = C.QAbstractFileIconProvider_Type(this.h, param1.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractFileIconProvider) SetOptions(options QAbstractFileIconProvider__Option) {
	C.QAbstractFileIconProvider_SetOptions(this.h, (C.int)(options))
}

func (this *QAbstractFileIconProvider) Options() QAbstractFileIconProvider__Option {
	return (QAbstractFileIconProvider__Option)(C.QAbstractFileIconProvider_Options(this.h))
}

func (this *QAbstractFileIconProvider) callVirtualBase_Icon(param1 QAbstractFileIconProvider__IconType) *QIcon {

	_goptr := newQIcon(C.QAbstractFileIconProvider_virtualbase_Icon(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractFileIconProvider) OnIcon(slot func(super func(param1 QAbstractFileIconProvider__IconType) *QIcon, param1 QAbstractFileIconProvider__IconType) *QIcon) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractFileIconProvider_override_virtual_Icon(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractFileIconProvider_Icon
func miqt_exec_callback_QAbstractFileIconProvider_Icon(self *C.QAbstractFileIconProvider, cb C.intptr_t, param1 C.int) *C.QIcon {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QAbstractFileIconProvider__IconType) *QIcon, param1 QAbstractFileIconProvider__IconType) *QIcon)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractFileIconProvider__IconType)(param1)

	virtualReturn := gofunc((&QAbstractFileIconProvider{h: self}).callVirtualBase_Icon, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractFileIconProvider) callVirtualBase_IconWithQFileInfo(param1 *QFileInfo) *QIcon {

	_goptr := newQIcon(C.QAbstractFileIconProvider_virtualbase_IconWithQFileInfo(unsafe.Pointer(this.h), param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractFileIconProvider) OnIconWithQFileInfo(slot func(super func(param1 *QFileInfo) *QIcon, param1 *QFileInfo) *QIcon) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractFileIconProvider_override_virtual_IconWithQFileInfo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractFileIconProvider_IconWithQFileInfo
func miqt_exec_callback_QAbstractFileIconProvider_IconWithQFileInfo(self *C.QAbstractFileIconProvider, cb C.intptr_t, param1 *C.QFileInfo) *C.QIcon {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFileInfo) *QIcon, param1 *QFileInfo) *QIcon)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFileInfo(param1)

	virtualReturn := gofunc((&QAbstractFileIconProvider{h: self}).callVirtualBase_IconWithQFileInfo, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractFileIconProvider) callVirtualBase_Type(param1 *QFileInfo) string {

	var _ms C.struct_miqt_string = C.QAbstractFileIconProvider_virtualbase_Type(unsafe.Pointer(this.h), param1.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QAbstractFileIconProvider) OnType(slot func(super func(param1 *QFileInfo) string, param1 *QFileInfo) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractFileIconProvider_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractFileIconProvider_Type
func miqt_exec_callback_QAbstractFileIconProvider_Type(self *C.QAbstractFileIconProvider, cb C.intptr_t, param1 *C.QFileInfo) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFileInfo) string, param1 *QFileInfo) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFileInfo(param1)

	virtualReturn := gofunc((&QAbstractFileIconProvider{h: self}).callVirtualBase_Type, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QAbstractFileIconProvider) callVirtualBase_SetOptions(options QAbstractFileIconProvider__Option) {

	C.QAbstractFileIconProvider_virtualbase_SetOptions(unsafe.Pointer(this.h), (C.int)(options))

}
func (this *QAbstractFileIconProvider) OnSetOptions(slot func(super func(options QAbstractFileIconProvider__Option), options QAbstractFileIconProvider__Option)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractFileIconProvider_override_virtual_SetOptions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractFileIconProvider_SetOptions
func miqt_exec_callback_QAbstractFileIconProvider_SetOptions(self *C.QAbstractFileIconProvider, cb C.intptr_t, options C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(options QAbstractFileIconProvider__Option), options QAbstractFileIconProvider__Option))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractFileIconProvider__Option)(options)

	gofunc((&QAbstractFileIconProvider{h: self}).callVirtualBase_SetOptions, slotval1)

}

func (this *QAbstractFileIconProvider) callVirtualBase_Options() QAbstractFileIconProvider__Option {

	return (QAbstractFileIconProvider__Option)(C.QAbstractFileIconProvider_virtualbase_Options(unsafe.Pointer(this.h)))

}
func (this *QAbstractFileIconProvider) OnOptions(slot func(super func() QAbstractFileIconProvider__Option) QAbstractFileIconProvider__Option) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractFileIconProvider_override_virtual_Options(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractFileIconProvider_Options
func miqt_exec_callback_QAbstractFileIconProvider_Options(self *C.QAbstractFileIconProvider, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractFileIconProvider__Option) QAbstractFileIconProvider__Option)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractFileIconProvider{h: self}).callVirtualBase_Options)

	return (C.int)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QAbstractFileIconProvider) Delete() {
	C.QAbstractFileIconProvider_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractFileIconProvider) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractFileIconProvider) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
