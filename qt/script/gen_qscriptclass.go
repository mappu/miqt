package script

/*

#include "gen_qscriptclass.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScriptClass__QueryFlag int

const (
	QScriptClass__HandlesReadAccess  QScriptClass__QueryFlag = 1
	QScriptClass__HandlesWriteAccess QScriptClass__QueryFlag = 2
)

type QScriptClass__Extension int

const (
	QScriptClass__Callable    QScriptClass__Extension = 0
	QScriptClass__HasInstance QScriptClass__Extension = 1
)

type QScriptClass struct {
	h          *C.QScriptClass
	isSubclass bool
}

func (this *QScriptClass) cPointer() *C.QScriptClass {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScriptClass) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScriptClass constructs the type using only CGO pointers.
func newQScriptClass(h *C.QScriptClass) *QScriptClass {
	if h == nil {
		return nil
	}

	return &QScriptClass{h: h}
}

// UnsafeNewQScriptClass constructs the type using only unsafe pointers.
func UnsafeNewQScriptClass(h unsafe.Pointer) *QScriptClass {
	return newQScriptClass((*C.QScriptClass)(h))
}

// NewQScriptClass constructs a new QScriptClass object.
func NewQScriptClass(engine *QScriptEngine) *QScriptClass {

	ret := newQScriptClass(C.QScriptClass_new(engine.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QScriptClass) Engine() *QScriptEngine {
	return newQScriptEngine(C.QScriptClass_Engine(this.h))
}

func (this *QScriptClass) QueryProperty(object *QScriptValue, name *QScriptString, flags QScriptClass__QueryFlag, id *uint) QScriptClass__QueryFlag {
	return (QScriptClass__QueryFlag)(C.QScriptClass_QueryProperty(this.h, object.cPointer(), name.cPointer(), (C.int)(flags), (*C.uint)(unsafe.Pointer(id))))
}

func (this *QScriptClass) Property(object *QScriptValue, name *QScriptString, id uint) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptClass_Property(this.h, object.cPointer(), name.cPointer(), (C.uint)(id)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptClass) SetProperty(object *QScriptValue, name *QScriptString, id uint, value *QScriptValue) {
	C.QScriptClass_SetProperty(this.h, object.cPointer(), name.cPointer(), (C.uint)(id), value.cPointer())
}

func (this *QScriptClass) PropertyFlags(object *QScriptValue, name *QScriptString, id uint) QScriptValue__PropertyFlag {
	return (QScriptValue__PropertyFlag)(C.QScriptClass_PropertyFlags(this.h, object.cPointer(), name.cPointer(), (C.uint)(id)))
}

func (this *QScriptClass) NewIterator(object *QScriptValue) *QScriptClassPropertyIterator {
	return newQScriptClassPropertyIterator(C.QScriptClass_NewIterator(this.h, object.cPointer()))
}

func (this *QScriptClass) Prototype() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptClass_Prototype(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptClass) Name() string {
	var _ms C.struct_miqt_string = C.QScriptClass_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScriptClass) SupportsExtension(extension QScriptClass__Extension) bool {
	return (bool)(C.QScriptClass_SupportsExtension(this.h, (C.int)(extension)))
}

func (this *QScriptClass) Extension(extension QScriptClass__Extension, argument *qt.QVariant) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QScriptClass_Extension(this.h, (C.int)(extension), (*C.QVariant)(argument.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptClass) callVirtualBase_QueryProperty(object *QScriptValue, name *QScriptString, flags QScriptClass__QueryFlag, id *uint) QScriptClass__QueryFlag {

	return (QScriptClass__QueryFlag)(C.QScriptClass_virtualbase_QueryProperty(unsafe.Pointer(this.h), object.cPointer(), name.cPointer(), (C.int)(flags), (*C.uint)(unsafe.Pointer(id))))

}
func (this *QScriptClass) OnQueryProperty(slot func(super func(object *QScriptValue, name *QScriptString, flags QScriptClass__QueryFlag, id *uint) QScriptClass__QueryFlag, object *QScriptValue, name *QScriptString, flags QScriptClass__QueryFlag, id *uint) QScriptClass__QueryFlag) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptClass_override_virtual_QueryProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptClass_QueryProperty
func miqt_exec_callback_QScriptClass_QueryProperty(self *C.QScriptClass, cb C.intptr_t, object *C.QScriptValue, name *C.QScriptString, flags C.int, id *C.uint) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QScriptValue, name *QScriptString, flags QScriptClass__QueryFlag, id *uint) QScriptClass__QueryFlag, object *QScriptValue, name *QScriptString, flags QScriptClass__QueryFlag, id *uint) QScriptClass__QueryFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScriptValue(object)

	slotval2 := newQScriptString(name)

	slotval3 := (QScriptClass__QueryFlag)(flags)

	slotval4 := (*uint)(unsafe.Pointer(id))

	virtualReturn := gofunc((&QScriptClass{h: self}).callVirtualBase_QueryProperty, slotval1, slotval2, slotval3, slotval4)

	return (C.int)(virtualReturn)

}

func (this *QScriptClass) callVirtualBase_Property(object *QScriptValue, name *QScriptString, id uint) *QScriptValue {

	_goptr := newQScriptValue(C.QScriptClass_virtualbase_Property(unsafe.Pointer(this.h), object.cPointer(), name.cPointer(), (C.uint)(id)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScriptClass) OnProperty(slot func(super func(object *QScriptValue, name *QScriptString, id uint) *QScriptValue, object *QScriptValue, name *QScriptString, id uint) *QScriptValue) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptClass_override_virtual_Property(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptClass_Property
func miqt_exec_callback_QScriptClass_Property(self *C.QScriptClass, cb C.intptr_t, object *C.QScriptValue, name *C.QScriptString, id C.uint) *C.QScriptValue {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QScriptValue, name *QScriptString, id uint) *QScriptValue, object *QScriptValue, name *QScriptString, id uint) *QScriptValue)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScriptValue(object)

	slotval2 := newQScriptString(name)

	slotval3 := (uint)(id)

	virtualReturn := gofunc((&QScriptClass{h: self}).callVirtualBase_Property, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QScriptClass) callVirtualBase_SetProperty(object *QScriptValue, name *QScriptString, id uint, value *QScriptValue) {

	C.QScriptClass_virtualbase_SetProperty(unsafe.Pointer(this.h), object.cPointer(), name.cPointer(), (C.uint)(id), value.cPointer())

}
func (this *QScriptClass) OnSetProperty(slot func(super func(object *QScriptValue, name *QScriptString, id uint, value *QScriptValue), object *QScriptValue, name *QScriptString, id uint, value *QScriptValue)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptClass_override_virtual_SetProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptClass_SetProperty
func miqt_exec_callback_QScriptClass_SetProperty(self *C.QScriptClass, cb C.intptr_t, object *C.QScriptValue, name *C.QScriptString, id C.uint, value *C.QScriptValue) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QScriptValue, name *QScriptString, id uint, value *QScriptValue), object *QScriptValue, name *QScriptString, id uint, value *QScriptValue))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScriptValue(object)

	slotval2 := newQScriptString(name)

	slotval3 := (uint)(id)

	slotval4 := newQScriptValue(value)

	gofunc((&QScriptClass{h: self}).callVirtualBase_SetProperty, slotval1, slotval2, slotval3, slotval4)

}

func (this *QScriptClass) callVirtualBase_PropertyFlags(object *QScriptValue, name *QScriptString, id uint) QScriptValue__PropertyFlag {

	return (QScriptValue__PropertyFlag)(C.QScriptClass_virtualbase_PropertyFlags(unsafe.Pointer(this.h), object.cPointer(), name.cPointer(), (C.uint)(id)))

}
func (this *QScriptClass) OnPropertyFlags(slot func(super func(object *QScriptValue, name *QScriptString, id uint) QScriptValue__PropertyFlag, object *QScriptValue, name *QScriptString, id uint) QScriptValue__PropertyFlag) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptClass_override_virtual_PropertyFlags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptClass_PropertyFlags
func miqt_exec_callback_QScriptClass_PropertyFlags(self *C.QScriptClass, cb C.intptr_t, object *C.QScriptValue, name *C.QScriptString, id C.uint) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QScriptValue, name *QScriptString, id uint) QScriptValue__PropertyFlag, object *QScriptValue, name *QScriptString, id uint) QScriptValue__PropertyFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScriptValue(object)

	slotval2 := newQScriptString(name)

	slotval3 := (uint)(id)

	virtualReturn := gofunc((&QScriptClass{h: self}).callVirtualBase_PropertyFlags, slotval1, slotval2, slotval3)

	return (C.int)(virtualReturn)

}

func (this *QScriptClass) callVirtualBase_NewIterator(object *QScriptValue) *QScriptClassPropertyIterator {

	return newQScriptClassPropertyIterator(C.QScriptClass_virtualbase_NewIterator(unsafe.Pointer(this.h), object.cPointer()))

}
func (this *QScriptClass) OnNewIterator(slot func(super func(object *QScriptValue) *QScriptClassPropertyIterator, object *QScriptValue) *QScriptClassPropertyIterator) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptClass_override_virtual_NewIterator(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptClass_NewIterator
func miqt_exec_callback_QScriptClass_NewIterator(self *C.QScriptClass, cb C.intptr_t, object *C.QScriptValue) *C.QScriptClassPropertyIterator {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QScriptValue) *QScriptClassPropertyIterator, object *QScriptValue) *QScriptClassPropertyIterator)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScriptValue(object)

	virtualReturn := gofunc((&QScriptClass{h: self}).callVirtualBase_NewIterator, slotval1)

	return virtualReturn.cPointer()

}

func (this *QScriptClass) callVirtualBase_Prototype() *QScriptValue {

	_goptr := newQScriptValue(C.QScriptClass_virtualbase_Prototype(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScriptClass) OnPrototype(slot func(super func() *QScriptValue) *QScriptValue) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptClass_override_virtual_Prototype(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptClass_Prototype
func miqt_exec_callback_QScriptClass_Prototype(self *C.QScriptClass, cb C.intptr_t) *C.QScriptValue {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QScriptValue) *QScriptValue)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScriptClass{h: self}).callVirtualBase_Prototype)

	return virtualReturn.cPointer()

}

func (this *QScriptClass) callVirtualBase_Name() string {

	var _ms C.struct_miqt_string = C.QScriptClass_virtualbase_Name(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QScriptClass) OnName(slot func(super func() string) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptClass_override_virtual_Name(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptClass_Name
func miqt_exec_callback_QScriptClass_Name(self *C.QScriptClass, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScriptClass{h: self}).callVirtualBase_Name)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QScriptClass) callVirtualBase_SupportsExtension(extension QScriptClass__Extension) bool {

	return (bool)(C.QScriptClass_virtualbase_SupportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QScriptClass) OnSupportsExtension(slot func(super func(extension QScriptClass__Extension) bool, extension QScriptClass__Extension) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptClass_override_virtual_SupportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptClass_SupportsExtension
func miqt_exec_callback_QScriptClass_SupportsExtension(self *C.QScriptClass, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QScriptClass__Extension) bool, extension QScriptClass__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QScriptClass__Extension)(extension)

	virtualReturn := gofunc((&QScriptClass{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScriptClass) callVirtualBase_Extension(extension QScriptClass__Extension, argument *qt.QVariant) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QScriptClass_virtualbase_Extension(unsafe.Pointer(this.h), (C.int)(extension), (*C.QVariant)(argument.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScriptClass) OnExtension(slot func(super func(extension QScriptClass__Extension, argument *qt.QVariant) *qt.QVariant, extension QScriptClass__Extension, argument *qt.QVariant) *qt.QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScriptClass_override_virtual_Extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptClass_Extension
func miqt_exec_callback_QScriptClass_Extension(self *C.QScriptClass, cb C.intptr_t, extension C.int, argument *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QScriptClass__Extension, argument *qt.QVariant) *qt.QVariant, extension QScriptClass__Extension, argument *qt.QVariant) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QScriptClass__Extension)(extension)

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(argument))

	virtualReturn := gofunc((&QScriptClass{h: self}).callVirtualBase_Extension, slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QScriptClass) Delete() {
	C.QScriptClass_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScriptClass) GoGC() {
	runtime.SetFinalizer(this, func(this *QScriptClass) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
