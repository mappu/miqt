package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qsignalmapper.h"
#include <stdlib.h>

*/
import "C"

import (
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
	ret := C.QSignalMapper_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSignalMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSignalMapper_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSignalMapper_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSignalMapper_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSignalMapper) SetMapping(sender *QObject, id int) {
	C.QSignalMapper_SetMapping(this.h, sender.cPointer(), (C.int)(id))
}

func (this *QSignalMapper) SetMapping2(sender *QObject, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QSignalMapper_SetMapping2(this.h, sender.cPointer(), text_Cstring, C.ulong(len(text)))
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
	ret := C.QSignalMapper_Mapping(this.h, (C.int)(id))
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QSignalMapper) MappingWithText(text string) *QObject {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QSignalMapper_MappingWithText(this.h, text_Cstring, C.ulong(len(text)))
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QSignalMapper) MappingWithWidget(widget *QWidget) *QObject {
	ret := C.QSignalMapper_MappingWithWidget(this.h, widget.cPointer())
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QSignalMapper) MappingWithObject(object *QObject) *QObject {
	ret := C.QSignalMapper_MappingWithObject(this.h, object.cPointer())
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QSignalMapper) Mapped(param1 int) {
	C.QSignalMapper_Mapped(this.h, (C.int)(param1))
}

func (this *QSignalMapper) OnMapped(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSignalMapper_connect_Mapped(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSignalMapper) MappedWithQString(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QSignalMapper_MappedWithQString(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QSignalMapper) OnMappedWithQString(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSignalMapper_connect_MappedWithQString(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSignalMapper) MappedWithQWidget(param1 *QWidget) {
	C.QSignalMapper_MappedWithQWidget(this.h, param1.cPointer())
}

func (this *QSignalMapper) OnMappedWithQWidget(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSignalMapper_connect_MappedWithQWidget(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSignalMapper) MappedWithQObject(param1 *QObject) {
	C.QSignalMapper_MappedWithQObject(this.h, param1.cPointer())
}

func (this *QSignalMapper) OnMappedWithQObject(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSignalMapper_connect_MappedWithQObject(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSignalMapper) MappedInt(param1 int) {
	C.QSignalMapper_MappedInt(this.h, (C.int)(param1))
}

func (this *QSignalMapper) OnMappedInt(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSignalMapper_connect_MappedInt(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSignalMapper) MappedString(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QSignalMapper_MappedString(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QSignalMapper) OnMappedString(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSignalMapper_connect_MappedString(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSignalMapper) MappedWidget(param1 *QWidget) {
	C.QSignalMapper_MappedWidget(this.h, param1.cPointer())
}

func (this *QSignalMapper) OnMappedWidget(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSignalMapper_connect_MappedWidget(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSignalMapper) MappedObject(param1 *QObject) {
	C.QSignalMapper_MappedObject(this.h, param1.cPointer())
}

func (this *QSignalMapper) OnMappedObject(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSignalMapper_connect_MappedObject(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSignalMapper_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSignalMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSignalMapper_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSignalMapper_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSignalMapper_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSignalMapper_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSignalMapper_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSignalMapper) Delete() {
	C.QSignalMapper_Delete(this.h)
}
