package qt

/*

#include "gen_qsignalmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSignalMapper struct {
	h *C.QSignalMapper
	*QObject
}

func (this *QSignalMapper) cPointer() *C.QSignalMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSignalMapper(h *C.QSignalMapper) *QSignalMapper {
	if h == nil {
		return nil
	}
	return &QSignalMapper{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQSignalMapper_U(h unsafe.Pointer) *QSignalMapper {
	return newQSignalMapper((*C.QSignalMapper)(h))
}

// NewQSignalMapper constructs a new QSignalMapper object.
func NewQSignalMapper() *QSignalMapper {
	ret := C.QSignalMapper_new()
	return newQSignalMapper(ret)
}

// NewQSignalMapper2 constructs a new QSignalMapper object.
func NewQSignalMapper2(parent *QObject) *QSignalMapper {
	ret := C.QSignalMapper_new2(parent.cPointer())
	return newQSignalMapper(ret)
}

func (this *QSignalMapper) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QSignalMapper_MetaObject(this.h)))
}

func (this *QSignalMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QSignalMapper_Metacast(this.h, param1_Cstring)
}

func QSignalMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSignalMapper_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSignalMapper_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSignalMapper_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSignalMapper) SetMapping(sender *QObject, id int) {
	C.QSignalMapper_SetMapping(this.h, sender.cPointer(), (C.int)(id))
}

func (this *QSignalMapper) SetMapping2(sender *QObject, text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QSignalMapper_SetMapping2(this.h, sender.cPointer(), (*C.struct_miqt_string)(text_ms))
}

func (this *QSignalMapper) SetMapping3(sender *QObject, widget *QWidget) {
	C.QSignalMapper_SetMapping3(this.h, sender.cPointer(), widget.cPointer())
}

func (this *QSignalMapper) SetMapping4(sender *QObject, object *QObject) {
	C.QSignalMapper_SetMapping4(this.h, sender.cPointer(), object.cPointer())
}

func (this *QSignalMapper) RemoveMappings(sender *QObject) {
	C.QSignalMapper_RemoveMappings(this.h, sender.cPointer())
}

func (this *QSignalMapper) Mapping(id int) *QObject {
	return newQObject_U(unsafe.Pointer(C.QSignalMapper_Mapping(this.h, (C.int)(id))))
}

func (this *QSignalMapper) MappingWithText(text string) *QObject {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return newQObject_U(unsafe.Pointer(C.QSignalMapper_MappingWithText(this.h, (*C.struct_miqt_string)(text_ms))))
}

func (this *QSignalMapper) MappingWithWidget(widget *QWidget) *QObject {
	return newQObject_U(unsafe.Pointer(C.QSignalMapper_MappingWithWidget(this.h, widget.cPointer())))
}

func (this *QSignalMapper) MappingWithObject(object *QObject) *QObject {
	return newQObject_U(unsafe.Pointer(C.QSignalMapper_MappingWithObject(this.h, object.cPointer())))
}

func (this *QSignalMapper) Mapped(param1 int) {
	C.QSignalMapper_Mapped(this.h, (C.int)(param1))
}
func (this *QSignalMapper) OnMapped(slot func(param1 int)) {
	C.QSignalMapper_connect_Mapped(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_Mapped
func miqt_exec_callback_QSignalMapper_Mapped(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedWithQString(param1 string) {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	C.QSignalMapper_MappedWithQString(this.h, (*C.struct_miqt_string)(param1_ms))
}
func (this *QSignalMapper) OnMappedWithQString(slot func(param1 string)) {
	C.QSignalMapper_connect_MappedWithQString(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_MappedWithQString
func miqt_exec_callback_QSignalMapper_MappedWithQString(cb C.intptr_t, param1 *C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms *C.struct_miqt_string = param1
	param1_ret := C.GoStringN(&param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedWithQWidget(param1 *QWidget) {
	C.QSignalMapper_MappedWithQWidget(this.h, param1.cPointer())
}
func (this *QSignalMapper) OnMappedWithQWidget(slot func(param1 *QWidget)) {
	C.QSignalMapper_connect_MappedWithQWidget(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_MappedWithQWidget
func miqt_exec_callback_QSignalMapper_MappedWithQWidget(cb C.intptr_t, param1 *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget_U(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedWithQObject(param1 *QObject) {
	C.QSignalMapper_MappedWithQObject(this.h, param1.cPointer())
}
func (this *QSignalMapper) OnMappedWithQObject(slot func(param1 *QObject)) {
	C.QSignalMapper_connect_MappedWithQObject(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_MappedWithQObject
func miqt_exec_callback_QSignalMapper_MappedWithQObject(cb C.intptr_t, param1 *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject_U(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedInt(param1 int) {
	C.QSignalMapper_MappedInt(this.h, (C.int)(param1))
}
func (this *QSignalMapper) OnMappedInt(slot func(param1 int)) {
	C.QSignalMapper_connect_MappedInt(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_MappedInt
func miqt_exec_callback_QSignalMapper_MappedInt(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedString(param1 string) {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	C.QSignalMapper_MappedString(this.h, (*C.struct_miqt_string)(param1_ms))
}
func (this *QSignalMapper) OnMappedString(slot func(param1 string)) {
	C.QSignalMapper_connect_MappedString(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_MappedString
func miqt_exec_callback_QSignalMapper_MappedString(cb C.intptr_t, param1 *C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms *C.struct_miqt_string = param1
	param1_ret := C.GoStringN(&param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedWidget(param1 *QWidget) {
	C.QSignalMapper_MappedWidget(this.h, param1.cPointer())
}
func (this *QSignalMapper) OnMappedWidget(slot func(param1 *QWidget)) {
	C.QSignalMapper_connect_MappedWidget(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_MappedWidget
func miqt_exec_callback_QSignalMapper_MappedWidget(cb C.intptr_t, param1 *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget_U(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QSignalMapper) MappedObject(param1 *QObject) {
	C.QSignalMapper_MappedObject(this.h, param1.cPointer())
}
func (this *QSignalMapper) OnMappedObject(slot func(param1 *QObject)) {
	C.QSignalMapper_connect_MappedObject(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSignalMapper_MappedObject
func miqt_exec_callback_QSignalMapper_MappedObject(cb C.intptr_t, param1 *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject_U(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QSignalMapper) Map() {
	C.QSignalMapper_Map(this.h)
}

func (this *QSignalMapper) MapWithSender(sender *QObject) {
	C.QSignalMapper_MapWithSender(this.h, sender.cPointer())
}

func QSignalMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSignalMapper_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSignalMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSignalMapper_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSignalMapper_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSignalMapper_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSignalMapper_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSignalMapper_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSignalMapper) Delete() {
	C.QSignalMapper_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSignalMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QSignalMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
