package qt6

/*

#include "gen_qvalidator.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QValidator__State int

const (
	QValidator__Invalid      QValidator__State = 0
	QValidator__Intermediate QValidator__State = 1
	QValidator__Acceptable   QValidator__State = 2
)

type QDoubleValidator__Notation int

const (
	QDoubleValidator__StandardNotation   QDoubleValidator__Notation = 0
	QDoubleValidator__ScientificNotation QDoubleValidator__Notation = 1
)

type QValidator struct {
	h *C.QValidator
	*QObject
}

func (this *QValidator) cPointer() *C.QValidator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QValidator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQValidator(h *C.QValidator) *QValidator {
	if h == nil {
		return nil
	}
	return &QValidator{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQValidator(h unsafe.Pointer) *QValidator {
	return newQValidator((*C.QValidator)(h))
}

func (this *QValidator) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QValidator_MetaObject(this.h)))
}

func (this *QValidator) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QValidator_Metacast(this.h, param1_Cstring))
}

func QValidator_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QValidator_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QValidator) SetLocale(locale *QLocale) {
	C.QValidator_SetLocale(this.h, locale.cPointer())
}

func (this *QValidator) Locale() *QLocale {
	_ret := C.QValidator_Locale(this.h)
	_goptr := newQLocale(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QValidator) Validate(param1 string, param2 *int) QValidator__State {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return (QValidator__State)(C.QValidator_Validate(this.h, param1_ms, (*C.int)(unsafe.Pointer(param2))))
}

func (this *QValidator) Fixup(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QValidator_Fixup(this.h, param1_ms)
}

func (this *QValidator) Changed() {
	C.QValidator_Changed(this.h)
}
func (this *QValidator) OnChanged(slot func()) {
	C.QValidator_connect_Changed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QValidator_Changed
func miqt_exec_callback_QValidator_Changed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QValidator_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QValidator_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QValidator_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QValidator_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QValidator) Delete() {
	C.QValidator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QValidator) GoGC() {
	runtime.SetFinalizer(this, func(this *QValidator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QIntValidator struct {
	h *C.QIntValidator
	*QValidator
}

func (this *QIntValidator) cPointer() *C.QIntValidator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QIntValidator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQIntValidator(h *C.QIntValidator) *QIntValidator {
	if h == nil {
		return nil
	}
	return &QIntValidator{h: h, QValidator: UnsafeNewQValidator(unsafe.Pointer(h))}
}

func UnsafeNewQIntValidator(h unsafe.Pointer) *QIntValidator {
	return newQIntValidator((*C.QIntValidator)(h))
}

// NewQIntValidator constructs a new QIntValidator object.
func NewQIntValidator() *QIntValidator {
	ret := C.QIntValidator_new()
	return newQIntValidator(ret)
}

// NewQIntValidator2 constructs a new QIntValidator object.
func NewQIntValidator2(bottom int, top int) *QIntValidator {
	ret := C.QIntValidator_new2((C.int)(bottom), (C.int)(top))
	return newQIntValidator(ret)
}

// NewQIntValidator3 constructs a new QIntValidator object.
func NewQIntValidator3(parent *QObject) *QIntValidator {
	ret := C.QIntValidator_new3(parent.cPointer())
	return newQIntValidator(ret)
}

// NewQIntValidator4 constructs a new QIntValidator object.
func NewQIntValidator4(bottom int, top int, parent *QObject) *QIntValidator {
	ret := C.QIntValidator_new4((C.int)(bottom), (C.int)(top), parent.cPointer())
	return newQIntValidator(ret)
}

func (this *QIntValidator) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QIntValidator_MetaObject(this.h)))
}

func (this *QIntValidator) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QIntValidator_Metacast(this.h, param1_Cstring))
}

func QIntValidator_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QIntValidator_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QIntValidator) Validate(param1 string, param2 *int) QValidator__State {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return (QValidator__State)(C.QIntValidator_Validate(this.h, param1_ms, (*C.int)(unsafe.Pointer(param2))))
}

func (this *QIntValidator) Fixup(input string) {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))
	C.QIntValidator_Fixup(this.h, input_ms)
}

func (this *QIntValidator) SetBottom(bottom int) {
	C.QIntValidator_SetBottom(this.h, (C.int)(bottom))
}

func (this *QIntValidator) SetTop(top int) {
	C.QIntValidator_SetTop(this.h, (C.int)(top))
}

func (this *QIntValidator) SetRange(bottom int, top int) {
	C.QIntValidator_SetRange(this.h, (C.int)(bottom), (C.int)(top))
}

func (this *QIntValidator) Bottom() int {
	return (int)(C.QIntValidator_Bottom(this.h))
}

func (this *QIntValidator) Top() int {
	return (int)(C.QIntValidator_Top(this.h))
}

func (this *QIntValidator) BottomChanged(bottom int) {
	C.QIntValidator_BottomChanged(this.h, (C.int)(bottom))
}
func (this *QIntValidator) OnBottomChanged(slot func(bottom int)) {
	C.QIntValidator_connect_BottomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIntValidator_BottomChanged
func miqt_exec_callback_QIntValidator_BottomChanged(cb C.intptr_t, bottom C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(bottom int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(bottom)

	gofunc(slotval1)
}

func (this *QIntValidator) TopChanged(top int) {
	C.QIntValidator_TopChanged(this.h, (C.int)(top))
}
func (this *QIntValidator) OnTopChanged(slot func(top int)) {
	C.QIntValidator_connect_TopChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QIntValidator_TopChanged
func miqt_exec_callback_QIntValidator_TopChanged(cb C.intptr_t, top C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(top int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(top)

	gofunc(slotval1)
}

func QIntValidator_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIntValidator_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIntValidator_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QIntValidator_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QIntValidator) Delete() {
	C.QIntValidator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QIntValidator) GoGC() {
	runtime.SetFinalizer(this, func(this *QIntValidator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDoubleValidator struct {
	h *C.QDoubleValidator
	*QValidator
}

func (this *QDoubleValidator) cPointer() *C.QDoubleValidator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDoubleValidator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQDoubleValidator(h *C.QDoubleValidator) *QDoubleValidator {
	if h == nil {
		return nil
	}
	return &QDoubleValidator{h: h, QValidator: UnsafeNewQValidator(unsafe.Pointer(h))}
}

func UnsafeNewQDoubleValidator(h unsafe.Pointer) *QDoubleValidator {
	return newQDoubleValidator((*C.QDoubleValidator)(h))
}

// NewQDoubleValidator constructs a new QDoubleValidator object.
func NewQDoubleValidator() *QDoubleValidator {
	ret := C.QDoubleValidator_new()
	return newQDoubleValidator(ret)
}

// NewQDoubleValidator2 constructs a new QDoubleValidator object.
func NewQDoubleValidator2(bottom float64, top float64, decimals int) *QDoubleValidator {
	ret := C.QDoubleValidator_new2((C.double)(bottom), (C.double)(top), (C.int)(decimals))
	return newQDoubleValidator(ret)
}

// NewQDoubleValidator3 constructs a new QDoubleValidator object.
func NewQDoubleValidator3(parent *QObject) *QDoubleValidator {
	ret := C.QDoubleValidator_new3(parent.cPointer())
	return newQDoubleValidator(ret)
}

// NewQDoubleValidator4 constructs a new QDoubleValidator object.
func NewQDoubleValidator4(bottom float64, top float64, decimals int, parent *QObject) *QDoubleValidator {
	ret := C.QDoubleValidator_new4((C.double)(bottom), (C.double)(top), (C.int)(decimals), parent.cPointer())
	return newQDoubleValidator(ret)
}

func (this *QDoubleValidator) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QDoubleValidator_MetaObject(this.h)))
}

func (this *QDoubleValidator) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDoubleValidator_Metacast(this.h, param1_Cstring))
}

func QDoubleValidator_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleValidator_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDoubleValidator) Validate(param1 string, param2 *int) QValidator__State {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return (QValidator__State)(C.QDoubleValidator_Validate(this.h, param1_ms, (*C.int)(unsafe.Pointer(param2))))
}

func (this *QDoubleValidator) Fixup(input string) {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))
	C.QDoubleValidator_Fixup(this.h, input_ms)
}

func (this *QDoubleValidator) SetRange(bottom float64, top float64, decimals int) {
	C.QDoubleValidator_SetRange(this.h, (C.double)(bottom), (C.double)(top), (C.int)(decimals))
}

func (this *QDoubleValidator) SetRange2(bottom float64, top float64) {
	C.QDoubleValidator_SetRange2(this.h, (C.double)(bottom), (C.double)(top))
}

func (this *QDoubleValidator) SetBottom(bottom float64) {
	C.QDoubleValidator_SetBottom(this.h, (C.double)(bottom))
}

func (this *QDoubleValidator) SetTop(top float64) {
	C.QDoubleValidator_SetTop(this.h, (C.double)(top))
}

func (this *QDoubleValidator) SetDecimals(decimals int) {
	C.QDoubleValidator_SetDecimals(this.h, (C.int)(decimals))
}

func (this *QDoubleValidator) SetNotation(notation QDoubleValidator__Notation) {
	C.QDoubleValidator_SetNotation(this.h, (C.int)(notation))
}

func (this *QDoubleValidator) Bottom() float64 {
	return (float64)(C.QDoubleValidator_Bottom(this.h))
}

func (this *QDoubleValidator) Top() float64 {
	return (float64)(C.QDoubleValidator_Top(this.h))
}

func (this *QDoubleValidator) Decimals() int {
	return (int)(C.QDoubleValidator_Decimals(this.h))
}

func (this *QDoubleValidator) Notation() QDoubleValidator__Notation {
	return (QDoubleValidator__Notation)(C.QDoubleValidator_Notation(this.h))
}

func (this *QDoubleValidator) BottomChanged(bottom float64) {
	C.QDoubleValidator_BottomChanged(this.h, (C.double)(bottom))
}
func (this *QDoubleValidator) OnBottomChanged(slot func(bottom float64)) {
	C.QDoubleValidator_connect_BottomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleValidator_BottomChanged
func miqt_exec_callback_QDoubleValidator_BottomChanged(cb C.intptr_t, bottom C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(bottom float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(bottom)

	gofunc(slotval1)
}

func (this *QDoubleValidator) TopChanged(top float64) {
	C.QDoubleValidator_TopChanged(this.h, (C.double)(top))
}
func (this *QDoubleValidator) OnTopChanged(slot func(top float64)) {
	C.QDoubleValidator_connect_TopChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleValidator_TopChanged
func miqt_exec_callback_QDoubleValidator_TopChanged(cb C.intptr_t, top C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(top float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(top)

	gofunc(slotval1)
}

func (this *QDoubleValidator) DecimalsChanged(decimals int) {
	C.QDoubleValidator_DecimalsChanged(this.h, (C.int)(decimals))
}
func (this *QDoubleValidator) OnDecimalsChanged(slot func(decimals int)) {
	C.QDoubleValidator_connect_DecimalsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleValidator_DecimalsChanged
func miqt_exec_callback_QDoubleValidator_DecimalsChanged(cb C.intptr_t, decimals C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(decimals int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(decimals)

	gofunc(slotval1)
}

func (this *QDoubleValidator) NotationChanged(notation QDoubleValidator__Notation) {
	C.QDoubleValidator_NotationChanged(this.h, (C.int)(notation))
}
func (this *QDoubleValidator) OnNotationChanged(slot func(notation QDoubleValidator__Notation)) {
	C.QDoubleValidator_connect_NotationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDoubleValidator_NotationChanged
func miqt_exec_callback_QDoubleValidator_NotationChanged(cb C.intptr_t, notation C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(notation QDoubleValidator__Notation))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QDoubleValidator__Notation)(notation)

	gofunc(slotval1)
}

func QDoubleValidator_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleValidator_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDoubleValidator_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDoubleValidator_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QDoubleValidator) Delete() {
	C.QDoubleValidator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDoubleValidator) GoGC() {
	runtime.SetFinalizer(this, func(this *QDoubleValidator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QRegularExpressionValidator struct {
	h *C.QRegularExpressionValidator
	*QValidator
}

func (this *QRegularExpressionValidator) cPointer() *C.QRegularExpressionValidator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRegularExpressionValidator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQRegularExpressionValidator(h *C.QRegularExpressionValidator) *QRegularExpressionValidator {
	if h == nil {
		return nil
	}
	return &QRegularExpressionValidator{h: h, QValidator: UnsafeNewQValidator(unsafe.Pointer(h))}
}

func UnsafeNewQRegularExpressionValidator(h unsafe.Pointer) *QRegularExpressionValidator {
	return newQRegularExpressionValidator((*C.QRegularExpressionValidator)(h))
}

// NewQRegularExpressionValidator constructs a new QRegularExpressionValidator object.
func NewQRegularExpressionValidator() *QRegularExpressionValidator {
	ret := C.QRegularExpressionValidator_new()
	return newQRegularExpressionValidator(ret)
}

// NewQRegularExpressionValidator2 constructs a new QRegularExpressionValidator object.
func NewQRegularExpressionValidator2(re *QRegularExpression) *QRegularExpressionValidator {
	ret := C.QRegularExpressionValidator_new2(re.cPointer())
	return newQRegularExpressionValidator(ret)
}

// NewQRegularExpressionValidator3 constructs a new QRegularExpressionValidator object.
func NewQRegularExpressionValidator3(parent *QObject) *QRegularExpressionValidator {
	ret := C.QRegularExpressionValidator_new3(parent.cPointer())
	return newQRegularExpressionValidator(ret)
}

// NewQRegularExpressionValidator4 constructs a new QRegularExpressionValidator object.
func NewQRegularExpressionValidator4(re *QRegularExpression, parent *QObject) *QRegularExpressionValidator {
	ret := C.QRegularExpressionValidator_new4(re.cPointer(), parent.cPointer())
	return newQRegularExpressionValidator(ret)
}

func (this *QRegularExpressionValidator) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QRegularExpressionValidator_MetaObject(this.h)))
}

func (this *QRegularExpressionValidator) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRegularExpressionValidator_Metacast(this.h, param1_Cstring))
}

func QRegularExpressionValidator_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRegularExpressionValidator_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegularExpressionValidator) Validate(input string, pos *int) QValidator__State {
	input_ms := C.struct_miqt_string{}
	input_ms.data = C.CString(input)
	input_ms.len = C.size_t(len(input))
	defer C.free(unsafe.Pointer(input_ms.data))
	return (QValidator__State)(C.QRegularExpressionValidator_Validate(this.h, input_ms, (*C.int)(unsafe.Pointer(pos))))
}

func (this *QRegularExpressionValidator) RegularExpression() *QRegularExpression {
	_ret := C.QRegularExpressionValidator_RegularExpression(this.h)
	_goptr := newQRegularExpression(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpressionValidator) SetRegularExpression(re *QRegularExpression) {
	C.QRegularExpressionValidator_SetRegularExpression(this.h, re.cPointer())
}

func (this *QRegularExpressionValidator) RegularExpressionChanged(re *QRegularExpression) {
	C.QRegularExpressionValidator_RegularExpressionChanged(this.h, re.cPointer())
}
func (this *QRegularExpressionValidator) OnRegularExpressionChanged(slot func(re *QRegularExpression)) {
	C.QRegularExpressionValidator_connect_RegularExpressionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRegularExpressionValidator_RegularExpressionChanged
func miqt_exec_callback_QRegularExpressionValidator_RegularExpressionChanged(cb C.intptr_t, re *C.QRegularExpression) {
	gofunc, ok := cgo.Handle(cb).Value().(func(re *QRegularExpression))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRegularExpression(unsafe.Pointer(re))

	gofunc(slotval1)
}

func QRegularExpressionValidator_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRegularExpressionValidator_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRegularExpressionValidator_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRegularExpressionValidator_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QRegularExpressionValidator) Delete() {
	C.QRegularExpressionValidator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRegularExpressionValidator) GoGC() {
	runtime.SetFinalizer(this, func(this *QRegularExpressionValidator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
