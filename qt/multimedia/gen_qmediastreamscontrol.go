package multimedia

/*

#include "gen_qmediastreamscontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMediaStreamsControl__StreamType int

const (
	QMediaStreamsControl__UnknownStream    QMediaStreamsControl__StreamType = 0
	QMediaStreamsControl__VideoStream      QMediaStreamsControl__StreamType = 1
	QMediaStreamsControl__AudioStream      QMediaStreamsControl__StreamType = 2
	QMediaStreamsControl__SubPictureStream QMediaStreamsControl__StreamType = 3
	QMediaStreamsControl__DataStream       QMediaStreamsControl__StreamType = 4
)

type QMediaStreamsControl struct {
	h *C.QMediaStreamsControl
	*QMediaControl
}

func (this *QMediaStreamsControl) cPointer() *C.QMediaStreamsControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaStreamsControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMediaStreamsControl(h *C.QMediaStreamsControl) *QMediaStreamsControl {
	if h == nil {
		return nil
	}
	return &QMediaStreamsControl{h: h, QMediaControl: UnsafeNewQMediaControl(unsafe.Pointer(h))}
}

func UnsafeNewQMediaStreamsControl(h unsafe.Pointer) *QMediaStreamsControl {
	return newQMediaStreamsControl((*C.QMediaStreamsControl)(h))
}

func (this *QMediaStreamsControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaStreamsControl_MetaObject(this.h)))
}

func (this *QMediaStreamsControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaStreamsControl_Metacast(this.h, param1_Cstring))
}

func QMediaStreamsControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaStreamsControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaStreamsControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaStreamsControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaStreamsControl) StreamCount() int {
	return (int)(C.QMediaStreamsControl_StreamCount(this.h))
}

func (this *QMediaStreamsControl) StreamType(streamNumber int) QMediaStreamsControl__StreamType {
	return (QMediaStreamsControl__StreamType)(C.QMediaStreamsControl_StreamType(this.h, (C.int)(streamNumber)))
}

func (this *QMediaStreamsControl) MetaData(streamNumber int, key string) *qt.QVariant {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_ret := C.QMediaStreamsControl_MetaData(this.h, (C.int)(streamNumber), key_ms)
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaStreamsControl) IsActive(streamNumber int) bool {
	return (bool)(C.QMediaStreamsControl_IsActive(this.h, (C.int)(streamNumber)))
}

func (this *QMediaStreamsControl) SetActive(streamNumber int, state bool) {
	C.QMediaStreamsControl_SetActive(this.h, (C.int)(streamNumber), (C.bool)(state))
}

func (this *QMediaStreamsControl) StreamsChanged() {
	C.QMediaStreamsControl_StreamsChanged(this.h)
}
func (this *QMediaStreamsControl) OnStreamsChanged(slot func()) {
	C.QMediaStreamsControl_connect_StreamsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaStreamsControl_StreamsChanged
func miqt_exec_callback_QMediaStreamsControl_StreamsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaStreamsControl) ActiveStreamsChanged() {
	C.QMediaStreamsControl_ActiveStreamsChanged(this.h)
}
func (this *QMediaStreamsControl) OnActiveStreamsChanged(slot func()) {
	C.QMediaStreamsControl_connect_ActiveStreamsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaStreamsControl_ActiveStreamsChanged
func miqt_exec_callback_QMediaStreamsControl_ActiveStreamsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QMediaStreamsControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaStreamsControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaStreamsControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaStreamsControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaStreamsControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaStreamsControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaStreamsControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaStreamsControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaStreamsControl) Delete() {
	C.QMediaStreamsControl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaStreamsControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaStreamsControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
