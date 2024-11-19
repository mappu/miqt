package qt6

/*

#include "gen_qproperty.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QtPrivate__BindableWarnings__Reason int

const (
	QtPrivate__BindableWarnings__InvalidInterface     QtPrivate__BindableWarnings__Reason = 0
	QtPrivate__BindableWarnings__NonBindableInterface QtPrivate__BindableWarnings__Reason = 1
	QtPrivate__BindableWarnings__ReadOnlyInterface    QtPrivate__BindableWarnings__Reason = 2
)

type QPropertyBindingError__Type int

const (
	QPropertyBindingError__NoError         QPropertyBindingError__Type = 0
	QPropertyBindingError__BindingLoop     QPropertyBindingError__Type = 1
	QPropertyBindingError__EvaluationError QPropertyBindingError__Type = 2
	QPropertyBindingError__UnknownError    QPropertyBindingError__Type = 3
)

type QPropertyObserverBase__ObserverTag int

const (
	QPropertyObserverBase__ObserverNotifiesBinding       QPropertyObserverBase__ObserverTag = 0
	QPropertyObserverBase__ObserverNotifiesChangeHandler QPropertyObserverBase__ObserverTag = 1
	QPropertyObserverBase__ObserverIsPlaceholder         QPropertyObserverBase__ObserverTag = 2
	QPropertyObserverBase__ObserverIsAlias               QPropertyObserverBase__ObserverTag = 3
)

type QPropertyBindingSourceLocation struct {
	h          *C.QPropertyBindingSourceLocation
	isSubclass bool
}

func (this *QPropertyBindingSourceLocation) cPointer() *C.QPropertyBindingSourceLocation {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPropertyBindingSourceLocation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPropertyBindingSourceLocation constructs the type using only CGO pointers.
func newQPropertyBindingSourceLocation(h *C.QPropertyBindingSourceLocation) *QPropertyBindingSourceLocation {
	if h == nil {
		return nil
	}
	return &QPropertyBindingSourceLocation{h: h}
}

// UnsafeNewQPropertyBindingSourceLocation constructs the type using only unsafe pointers.
func UnsafeNewQPropertyBindingSourceLocation(h unsafe.Pointer) *QPropertyBindingSourceLocation {
	if h == nil {
		return nil
	}

	return &QPropertyBindingSourceLocation{h: (*C.QPropertyBindingSourceLocation)(h)}
}

// NewQPropertyBindingSourceLocation constructs a new QPropertyBindingSourceLocation object.
func NewQPropertyBindingSourceLocation() *QPropertyBindingSourceLocation {
	var outptr_QPropertyBindingSourceLocation *C.QPropertyBindingSourceLocation = nil

	C.QPropertyBindingSourceLocation_new(&outptr_QPropertyBindingSourceLocation)
	ret := newQPropertyBindingSourceLocation(outptr_QPropertyBindingSourceLocation)
	ret.isSubclass = true
	return ret
}

// NewQPropertyBindingSourceLocation2 constructs a new QPropertyBindingSourceLocation object.
func NewQPropertyBindingSourceLocation2(param1 *QPropertyBindingSourceLocation) *QPropertyBindingSourceLocation {
	var outptr_QPropertyBindingSourceLocation *C.QPropertyBindingSourceLocation = nil

	C.QPropertyBindingSourceLocation_new2(param1.cPointer(), &outptr_QPropertyBindingSourceLocation)
	ret := newQPropertyBindingSourceLocation(outptr_QPropertyBindingSourceLocation)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QPropertyBindingSourceLocation) Delete() {
	C.QPropertyBindingSourceLocation_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPropertyBindingSourceLocation) GoGC() {
	runtime.SetFinalizer(this, func(this *QPropertyBindingSourceLocation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPropertyBindingError struct {
	h          *C.QPropertyBindingError
	isSubclass bool
}

func (this *QPropertyBindingError) cPointer() *C.QPropertyBindingError {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPropertyBindingError) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPropertyBindingError constructs the type using only CGO pointers.
func newQPropertyBindingError(h *C.QPropertyBindingError) *QPropertyBindingError {
	if h == nil {
		return nil
	}
	return &QPropertyBindingError{h: h}
}

// UnsafeNewQPropertyBindingError constructs the type using only unsafe pointers.
func UnsafeNewQPropertyBindingError(h unsafe.Pointer) *QPropertyBindingError {
	if h == nil {
		return nil
	}

	return &QPropertyBindingError{h: (*C.QPropertyBindingError)(h)}
}

// NewQPropertyBindingError constructs a new QPropertyBindingError object.
func NewQPropertyBindingError() *QPropertyBindingError {
	var outptr_QPropertyBindingError *C.QPropertyBindingError = nil

	C.QPropertyBindingError_new(&outptr_QPropertyBindingError)
	ret := newQPropertyBindingError(outptr_QPropertyBindingError)
	ret.isSubclass = true
	return ret
}

// NewQPropertyBindingError2 constructs a new QPropertyBindingError object.
func NewQPropertyBindingError2(typeVal QPropertyBindingError__Type) *QPropertyBindingError {
	var outptr_QPropertyBindingError *C.QPropertyBindingError = nil

	C.QPropertyBindingError_new2((C.int)(typeVal), &outptr_QPropertyBindingError)
	ret := newQPropertyBindingError(outptr_QPropertyBindingError)
	ret.isSubclass = true
	return ret
}

// NewQPropertyBindingError3 constructs a new QPropertyBindingError object.
func NewQPropertyBindingError3(other *QPropertyBindingError) *QPropertyBindingError {
	var outptr_QPropertyBindingError *C.QPropertyBindingError = nil

	C.QPropertyBindingError_new3(other.cPointer(), &outptr_QPropertyBindingError)
	ret := newQPropertyBindingError(outptr_QPropertyBindingError)
	ret.isSubclass = true
	return ret
}

// NewQPropertyBindingError4 constructs a new QPropertyBindingError object.
func NewQPropertyBindingError4(typeVal QPropertyBindingError__Type, description string) *QPropertyBindingError {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	var outptr_QPropertyBindingError *C.QPropertyBindingError = nil

	C.QPropertyBindingError_new4((C.int)(typeVal), description_ms, &outptr_QPropertyBindingError)
	ret := newQPropertyBindingError(outptr_QPropertyBindingError)
	ret.isSubclass = true
	return ret
}

func (this *QPropertyBindingError) OperatorAssign(other *QPropertyBindingError) {
	C.QPropertyBindingError_OperatorAssign(this.h, other.cPointer())
}

func (this *QPropertyBindingError) HasError() bool {
	return (bool)(C.QPropertyBindingError_HasError(this.h))
}

func (this *QPropertyBindingError) Type() QPropertyBindingError__Type {
	return (QPropertyBindingError__Type)(C.QPropertyBindingError_Type(this.h))
}

func (this *QPropertyBindingError) Description() string {
	var _ms C.struct_miqt_string = C.QPropertyBindingError_Description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QPropertyBindingError) Delete() {
	C.QPropertyBindingError_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPropertyBindingError) GoGC() {
	runtime.SetFinalizer(this, func(this *QPropertyBindingError) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QUntypedPropertyBinding struct {
	h          *C.QUntypedPropertyBinding
	isSubclass bool
}

func (this *QUntypedPropertyBinding) cPointer() *C.QUntypedPropertyBinding {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUntypedPropertyBinding) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQUntypedPropertyBinding constructs the type using only CGO pointers.
func newQUntypedPropertyBinding(h *C.QUntypedPropertyBinding) *QUntypedPropertyBinding {
	if h == nil {
		return nil
	}
	return &QUntypedPropertyBinding{h: h}
}

// UnsafeNewQUntypedPropertyBinding constructs the type using only unsafe pointers.
func UnsafeNewQUntypedPropertyBinding(h unsafe.Pointer) *QUntypedPropertyBinding {
	if h == nil {
		return nil
	}

	return &QUntypedPropertyBinding{h: (*C.QUntypedPropertyBinding)(h)}
}

// NewQUntypedPropertyBinding constructs a new QUntypedPropertyBinding object.
func NewQUntypedPropertyBinding() *QUntypedPropertyBinding {
	var outptr_QUntypedPropertyBinding *C.QUntypedPropertyBinding = nil

	C.QUntypedPropertyBinding_new(&outptr_QUntypedPropertyBinding)
	ret := newQUntypedPropertyBinding(outptr_QUntypedPropertyBinding)
	ret.isSubclass = true
	return ret
}

// NewQUntypedPropertyBinding2 constructs a new QUntypedPropertyBinding object.
func NewQUntypedPropertyBinding2(other *QUntypedPropertyBinding) *QUntypedPropertyBinding {
	var outptr_QUntypedPropertyBinding *C.QUntypedPropertyBinding = nil

	C.QUntypedPropertyBinding_new2(other.cPointer(), &outptr_QUntypedPropertyBinding)
	ret := newQUntypedPropertyBinding(outptr_QUntypedPropertyBinding)
	ret.isSubclass = true
	return ret
}

func (this *QUntypedPropertyBinding) OperatorAssign(other *QUntypedPropertyBinding) {
	C.QUntypedPropertyBinding_OperatorAssign(this.h, other.cPointer())
}

func (this *QUntypedPropertyBinding) IsNull() bool {
	return (bool)(C.QUntypedPropertyBinding_IsNull(this.h))
}

func (this *QUntypedPropertyBinding) Error() *QPropertyBindingError {
	_ret := C.QUntypedPropertyBinding_Error(this.h)
	_goptr := newQPropertyBindingError(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUntypedPropertyBinding) ValueMetaType() *QMetaType {
	_ret := C.QUntypedPropertyBinding_ValueMetaType(this.h)
	_goptr := newQMetaType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QUntypedPropertyBinding) Delete() {
	C.QUntypedPropertyBinding_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUntypedPropertyBinding) GoGC() {
	runtime.SetFinalizer(this, func(this *QUntypedPropertyBinding) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPropertyObserverBase struct {
	h          *C.QPropertyObserverBase
	isSubclass bool
}

func (this *QPropertyObserverBase) cPointer() *C.QPropertyObserverBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPropertyObserverBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPropertyObserverBase constructs the type using only CGO pointers.
func newQPropertyObserverBase(h *C.QPropertyObserverBase) *QPropertyObserverBase {
	if h == nil {
		return nil
	}
	return &QPropertyObserverBase{h: h}
}

// UnsafeNewQPropertyObserverBase constructs the type using only unsafe pointers.
func UnsafeNewQPropertyObserverBase(h unsafe.Pointer) *QPropertyObserverBase {
	if h == nil {
		return nil
	}

	return &QPropertyObserverBase{h: (*C.QPropertyObserverBase)(h)}
}

// NewQPropertyObserverBase constructs a new QPropertyObserverBase object.
func NewQPropertyObserverBase() *QPropertyObserverBase {
	var outptr_QPropertyObserverBase *C.QPropertyObserverBase = nil

	C.QPropertyObserverBase_new(&outptr_QPropertyObserverBase)
	ret := newQPropertyObserverBase(outptr_QPropertyObserverBase)
	ret.isSubclass = true
	return ret
}

// NewQPropertyObserverBase2 constructs a new QPropertyObserverBase object.
func NewQPropertyObserverBase2(param1 *QPropertyObserverBase) *QPropertyObserverBase {
	var outptr_QPropertyObserverBase *C.QPropertyObserverBase = nil

	C.QPropertyObserverBase_new2(param1.cPointer(), &outptr_QPropertyObserverBase)
	ret := newQPropertyObserverBase(outptr_QPropertyObserverBase)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QPropertyObserverBase) Delete() {
	C.QPropertyObserverBase_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPropertyObserverBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QPropertyObserverBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPropertyObserver struct {
	h          *C.QPropertyObserver
	isSubclass bool
	*QPropertyObserverBase
}

func (this *QPropertyObserver) cPointer() *C.QPropertyObserver {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPropertyObserver) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPropertyObserver constructs the type using only CGO pointers.
func newQPropertyObserver(h *C.QPropertyObserver, h_QPropertyObserverBase *C.QPropertyObserverBase) *QPropertyObserver {
	if h == nil {
		return nil
	}
	return &QPropertyObserver{h: h,
		QPropertyObserverBase: newQPropertyObserverBase(h_QPropertyObserverBase)}
}

// UnsafeNewQPropertyObserver constructs the type using only unsafe pointers.
func UnsafeNewQPropertyObserver(h unsafe.Pointer, h_QPropertyObserverBase unsafe.Pointer) *QPropertyObserver {
	if h == nil {
		return nil
	}

	return &QPropertyObserver{h: (*C.QPropertyObserver)(h),
		QPropertyObserverBase: UnsafeNewQPropertyObserverBase(h_QPropertyObserverBase)}
}

// NewQPropertyObserver constructs a new QPropertyObserver object.
func NewQPropertyObserver() *QPropertyObserver {
	var outptr_QPropertyObserver *C.QPropertyObserver = nil
	var outptr_QPropertyObserverBase *C.QPropertyObserverBase = nil

	C.QPropertyObserver_new(&outptr_QPropertyObserver, &outptr_QPropertyObserverBase)
	ret := newQPropertyObserver(outptr_QPropertyObserver, outptr_QPropertyObserverBase)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QPropertyObserver) Delete() {
	C.QPropertyObserver_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPropertyObserver) GoGC() {
	runtime.SetFinalizer(this, func(this *QPropertyObserver) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPropertyNotifier struct {
	h          *C.QPropertyNotifier
	isSubclass bool
	*QPropertyObserver
}

func (this *QPropertyNotifier) cPointer() *C.QPropertyNotifier {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPropertyNotifier) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPropertyNotifier constructs the type using only CGO pointers.
func newQPropertyNotifier(h *C.QPropertyNotifier, h_QPropertyObserver *C.QPropertyObserver, h_QPropertyObserverBase *C.QPropertyObserverBase) *QPropertyNotifier {
	if h == nil {
		return nil
	}
	return &QPropertyNotifier{h: h,
		QPropertyObserver: newQPropertyObserver(h_QPropertyObserver, h_QPropertyObserverBase)}
}

// UnsafeNewQPropertyNotifier constructs the type using only unsafe pointers.
func UnsafeNewQPropertyNotifier(h unsafe.Pointer, h_QPropertyObserver unsafe.Pointer, h_QPropertyObserverBase unsafe.Pointer) *QPropertyNotifier {
	if h == nil {
		return nil
	}

	return &QPropertyNotifier{h: (*C.QPropertyNotifier)(h),
		QPropertyObserver: UnsafeNewQPropertyObserver(h_QPropertyObserver, h_QPropertyObserverBase)}
}

// NewQPropertyNotifier constructs a new QPropertyNotifier object.
func NewQPropertyNotifier() *QPropertyNotifier {
	var outptr_QPropertyNotifier *C.QPropertyNotifier = nil
	var outptr_QPropertyObserver *C.QPropertyObserver = nil
	var outptr_QPropertyObserverBase *C.QPropertyObserverBase = nil

	C.QPropertyNotifier_new(&outptr_QPropertyNotifier, &outptr_QPropertyObserver, &outptr_QPropertyObserverBase)
	ret := newQPropertyNotifier(outptr_QPropertyNotifier, outptr_QPropertyObserver, outptr_QPropertyObserverBase)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QPropertyNotifier) Delete() {
	C.QPropertyNotifier_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPropertyNotifier) GoGC() {
	runtime.SetFinalizer(this, func(this *QPropertyNotifier) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QUntypedBindable struct {
	h          *C.QUntypedBindable
	isSubclass bool
}

func (this *QUntypedBindable) cPointer() *C.QUntypedBindable {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUntypedBindable) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQUntypedBindable constructs the type using only CGO pointers.
func newQUntypedBindable(h *C.QUntypedBindable) *QUntypedBindable {
	if h == nil {
		return nil
	}
	return &QUntypedBindable{h: h}
}

// UnsafeNewQUntypedBindable constructs the type using only unsafe pointers.
func UnsafeNewQUntypedBindable(h unsafe.Pointer) *QUntypedBindable {
	if h == nil {
		return nil
	}

	return &QUntypedBindable{h: (*C.QUntypedBindable)(h)}
}

// NewQUntypedBindable constructs a new QUntypedBindable object.
func NewQUntypedBindable() *QUntypedBindable {
	var outptr_QUntypedBindable *C.QUntypedBindable = nil

	C.QUntypedBindable_new(&outptr_QUntypedBindable)
	ret := newQUntypedBindable(outptr_QUntypedBindable)
	ret.isSubclass = true
	return ret
}

// NewQUntypedBindable2 constructs a new QUntypedBindable object.
func NewQUntypedBindable2(param1 *QUntypedBindable) *QUntypedBindable {
	var outptr_QUntypedBindable *C.QUntypedBindable = nil

	C.QUntypedBindable_new2(param1.cPointer(), &outptr_QUntypedBindable)
	ret := newQUntypedBindable(outptr_QUntypedBindable)
	ret.isSubclass = true
	return ret
}

func (this *QUntypedBindable) IsValid() bool {
	return (bool)(C.QUntypedBindable_IsValid(this.h))
}

func (this *QUntypedBindable) IsBindable() bool {
	return (bool)(C.QUntypedBindable_IsBindable(this.h))
}

func (this *QUntypedBindable) IsReadOnly() bool {
	return (bool)(C.QUntypedBindable_IsReadOnly(this.h))
}

func (this *QUntypedBindable) MakeBinding() *QUntypedPropertyBinding {
	_ret := C.QUntypedBindable_MakeBinding(this.h)
	_goptr := newQUntypedPropertyBinding(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUntypedBindable) TakeBinding() *QUntypedPropertyBinding {
	_ret := C.QUntypedBindable_TakeBinding(this.h)
	_goptr := newQUntypedPropertyBinding(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUntypedBindable) Observe(observer *QPropertyObserver) {
	C.QUntypedBindable_Observe(this.h, observer.cPointer())
}

func (this *QUntypedBindable) Binding() *QUntypedPropertyBinding {
	_ret := C.QUntypedBindable_Binding(this.h)
	_goptr := newQUntypedPropertyBinding(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUntypedBindable) SetBinding(binding *QUntypedPropertyBinding) bool {
	return (bool)(C.QUntypedBindable_SetBinding(this.h, binding.cPointer()))
}

func (this *QUntypedBindable) HasBinding() bool {
	return (bool)(C.QUntypedBindable_HasBinding(this.h))
}

func (this *QUntypedBindable) MetaType() *QMetaType {
	_ret := C.QUntypedBindable_MetaType(this.h)
	_goptr := newQMetaType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUntypedBindable) MakeBinding1(location *QPropertyBindingSourceLocation) *QUntypedPropertyBinding {
	_ret := C.QUntypedBindable_MakeBinding1(this.h, location.cPointer())
	_goptr := newQUntypedPropertyBinding(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QUntypedBindable) Delete() {
	C.QUntypedBindable_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUntypedBindable) GoGC() {
	runtime.SetFinalizer(this, func(this *QUntypedBindable) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
