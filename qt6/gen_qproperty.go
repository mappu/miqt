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
	h *C.QPropertyBindingSourceLocation
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

func newQPropertyBindingSourceLocation(h *C.QPropertyBindingSourceLocation) *QPropertyBindingSourceLocation {
	if h == nil {
		return nil
	}
	return &QPropertyBindingSourceLocation{h: h}
}

func UnsafeNewQPropertyBindingSourceLocation(h unsafe.Pointer) *QPropertyBindingSourceLocation {
	return newQPropertyBindingSourceLocation((*C.QPropertyBindingSourceLocation)(h))
}

// NewQPropertyBindingSourceLocation constructs a new QPropertyBindingSourceLocation object.
func NewQPropertyBindingSourceLocation() *QPropertyBindingSourceLocation {
	ret := C.QPropertyBindingSourceLocation_new()
	return newQPropertyBindingSourceLocation(ret)
}

// NewQPropertyBindingSourceLocation2 constructs a new QPropertyBindingSourceLocation object.
func NewQPropertyBindingSourceLocation2(param1 *QPropertyBindingSourceLocation) *QPropertyBindingSourceLocation {
	ret := C.QPropertyBindingSourceLocation_new2(param1.cPointer())
	return newQPropertyBindingSourceLocation(ret)
}

// Delete this object from C++ memory.
func (this *QPropertyBindingSourceLocation) Delete() {
	C.QPropertyBindingSourceLocation_Delete(this.h)
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
	h *C.QPropertyBindingError
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

func newQPropertyBindingError(h *C.QPropertyBindingError) *QPropertyBindingError {
	if h == nil {
		return nil
	}
	return &QPropertyBindingError{h: h}
}

func UnsafeNewQPropertyBindingError(h unsafe.Pointer) *QPropertyBindingError {
	return newQPropertyBindingError((*C.QPropertyBindingError)(h))
}

// NewQPropertyBindingError constructs a new QPropertyBindingError object.
func NewQPropertyBindingError() *QPropertyBindingError {
	ret := C.QPropertyBindingError_new()
	return newQPropertyBindingError(ret)
}

// NewQPropertyBindingError2 constructs a new QPropertyBindingError object.
func NewQPropertyBindingError2(typeVal QPropertyBindingError__Type) *QPropertyBindingError {
	ret := C.QPropertyBindingError_new2((C.int)(typeVal))
	return newQPropertyBindingError(ret)
}

// NewQPropertyBindingError3 constructs a new QPropertyBindingError object.
func NewQPropertyBindingError3(other *QPropertyBindingError) *QPropertyBindingError {
	ret := C.QPropertyBindingError_new3(other.cPointer())
	return newQPropertyBindingError(ret)
}

// NewQPropertyBindingError4 constructs a new QPropertyBindingError object.
func NewQPropertyBindingError4(typeVal QPropertyBindingError__Type, description string) *QPropertyBindingError {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	ret := C.QPropertyBindingError_new4((C.int)(typeVal), description_ms)
	return newQPropertyBindingError(ret)
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
	C.QPropertyBindingError_Delete(this.h)
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
	h *C.QUntypedPropertyBinding
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

func newQUntypedPropertyBinding(h *C.QUntypedPropertyBinding) *QUntypedPropertyBinding {
	if h == nil {
		return nil
	}
	return &QUntypedPropertyBinding{h: h}
}

func UnsafeNewQUntypedPropertyBinding(h unsafe.Pointer) *QUntypedPropertyBinding {
	return newQUntypedPropertyBinding((*C.QUntypedPropertyBinding)(h))
}

// NewQUntypedPropertyBinding constructs a new QUntypedPropertyBinding object.
func NewQUntypedPropertyBinding() *QUntypedPropertyBinding {
	ret := C.QUntypedPropertyBinding_new()
	return newQUntypedPropertyBinding(ret)
}

// NewQUntypedPropertyBinding2 constructs a new QUntypedPropertyBinding object.
func NewQUntypedPropertyBinding2(other *QUntypedPropertyBinding) *QUntypedPropertyBinding {
	ret := C.QUntypedPropertyBinding_new2(other.cPointer())
	return newQUntypedPropertyBinding(ret)
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
	C.QUntypedPropertyBinding_Delete(this.h)
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
	h *C.QPropertyObserverBase
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

func newQPropertyObserverBase(h *C.QPropertyObserverBase) *QPropertyObserverBase {
	if h == nil {
		return nil
	}
	return &QPropertyObserverBase{h: h}
}

func UnsafeNewQPropertyObserverBase(h unsafe.Pointer) *QPropertyObserverBase {
	return newQPropertyObserverBase((*C.QPropertyObserverBase)(h))
}

// NewQPropertyObserverBase constructs a new QPropertyObserverBase object.
func NewQPropertyObserverBase() *QPropertyObserverBase {
	ret := C.QPropertyObserverBase_new()
	return newQPropertyObserverBase(ret)
}

// NewQPropertyObserverBase2 constructs a new QPropertyObserverBase object.
func NewQPropertyObserverBase2(param1 *QPropertyObserverBase) *QPropertyObserverBase {
	ret := C.QPropertyObserverBase_new2(param1.cPointer())
	return newQPropertyObserverBase(ret)
}

// Delete this object from C++ memory.
func (this *QPropertyObserverBase) Delete() {
	C.QPropertyObserverBase_Delete(this.h)
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
	h *C.QPropertyObserver
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

func newQPropertyObserver(h *C.QPropertyObserver) *QPropertyObserver {
	if h == nil {
		return nil
	}
	return &QPropertyObserver{h: h, QPropertyObserverBase: UnsafeNewQPropertyObserverBase(unsafe.Pointer(h))}
}

func UnsafeNewQPropertyObserver(h unsafe.Pointer) *QPropertyObserver {
	return newQPropertyObserver((*C.QPropertyObserver)(h))
}

// NewQPropertyObserver constructs a new QPropertyObserver object.
func NewQPropertyObserver() *QPropertyObserver {
	ret := C.QPropertyObserver_new()
	return newQPropertyObserver(ret)
}

// Delete this object from C++ memory.
func (this *QPropertyObserver) Delete() {
	C.QPropertyObserver_Delete(this.h)
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
	h *C.QPropertyNotifier
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

func newQPropertyNotifier(h *C.QPropertyNotifier) *QPropertyNotifier {
	if h == nil {
		return nil
	}
	return &QPropertyNotifier{h: h, QPropertyObserver: UnsafeNewQPropertyObserver(unsafe.Pointer(h))}
}

func UnsafeNewQPropertyNotifier(h unsafe.Pointer) *QPropertyNotifier {
	return newQPropertyNotifier((*C.QPropertyNotifier)(h))
}

// NewQPropertyNotifier constructs a new QPropertyNotifier object.
func NewQPropertyNotifier() *QPropertyNotifier {
	ret := C.QPropertyNotifier_new()
	return newQPropertyNotifier(ret)
}

// Delete this object from C++ memory.
func (this *QPropertyNotifier) Delete() {
	C.QPropertyNotifier_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPropertyNotifier) GoGC() {
	runtime.SetFinalizer(this, func(this *QPropertyNotifier) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtPrivate__QBindableInterface struct {
	h *C.QtPrivate__QBindableInterface
}

func (this *QtPrivate__QBindableInterface) cPointer() *C.QtPrivate__QBindableInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__QBindableInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtPrivate__QBindableInterface(h *C.QtPrivate__QBindableInterface) *QtPrivate__QBindableInterface {
	if h == nil {
		return nil
	}
	return &QtPrivate__QBindableInterface{h: h}
}

func UnsafeNewQtPrivate__QBindableInterface(h unsafe.Pointer) *QtPrivate__QBindableInterface {
	return newQtPrivate__QBindableInterface((*C.QtPrivate__QBindableInterface)(h))
}

// Delete this object from C++ memory.
func (this *QtPrivate__QBindableInterface) Delete() {
	C.QtPrivate__QBindableInterface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__QBindableInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__QBindableInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QUntypedBindable struct {
	h *C.QUntypedBindable
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

func newQUntypedBindable(h *C.QUntypedBindable) *QUntypedBindable {
	if h == nil {
		return nil
	}
	return &QUntypedBindable{h: h}
}

func UnsafeNewQUntypedBindable(h unsafe.Pointer) *QUntypedBindable {
	return newQUntypedBindable((*C.QUntypedBindable)(h))
}

// NewQUntypedBindable constructs a new QUntypedBindable object.
func NewQUntypedBindable() *QUntypedBindable {
	ret := C.QUntypedBindable_new()
	return newQUntypedBindable(ret)
}

// NewQUntypedBindable2 constructs a new QUntypedBindable object.
func NewQUntypedBindable2(param1 *QUntypedBindable) *QUntypedBindable {
	ret := C.QUntypedBindable_new2(param1.cPointer())
	return newQUntypedBindable(ret)
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
	C.QUntypedBindable_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUntypedBindable) GoGC() {
	runtime.SetFinalizer(this, func(this *QUntypedBindable) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
