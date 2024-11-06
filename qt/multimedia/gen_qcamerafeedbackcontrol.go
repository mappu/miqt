package multimedia

/*

#include "gen_qcamerafeedbackcontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QCameraFeedbackControl__EventType int

const (
	QCameraFeedbackControl__ViewfinderStarted   QCameraFeedbackControl__EventType = 1
	QCameraFeedbackControl__ViewfinderStopped   QCameraFeedbackControl__EventType = 2
	QCameraFeedbackControl__ImageCaptured       QCameraFeedbackControl__EventType = 3
	QCameraFeedbackControl__ImageSaved          QCameraFeedbackControl__EventType = 4
	QCameraFeedbackControl__ImageError          QCameraFeedbackControl__EventType = 5
	QCameraFeedbackControl__RecordingStarted    QCameraFeedbackControl__EventType = 6
	QCameraFeedbackControl__RecordingInProgress QCameraFeedbackControl__EventType = 7
	QCameraFeedbackControl__RecordingStopped    QCameraFeedbackControl__EventType = 8
	QCameraFeedbackControl__AutoFocusInProgress QCameraFeedbackControl__EventType = 9
	QCameraFeedbackControl__AutoFocusLocked     QCameraFeedbackControl__EventType = 10
	QCameraFeedbackControl__AutoFocusFailed     QCameraFeedbackControl__EventType = 11
)

type QCameraFeedbackControl struct {
	h *C.QCameraFeedbackControl
	*QMediaControl
}

func (this *QCameraFeedbackControl) cPointer() *C.QCameraFeedbackControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraFeedbackControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQCameraFeedbackControl(h *C.QCameraFeedbackControl) *QCameraFeedbackControl {
	if h == nil {
		return nil
	}
	return &QCameraFeedbackControl{h: h, QMediaControl: UnsafeNewQMediaControl(unsafe.Pointer(h))}
}

func UnsafeNewQCameraFeedbackControl(h unsafe.Pointer) *QCameraFeedbackControl {
	return newQCameraFeedbackControl((*C.QCameraFeedbackControl)(h))
}

func (this *QCameraFeedbackControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraFeedbackControl_MetaObject(this.h)))
}

func (this *QCameraFeedbackControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraFeedbackControl_Metacast(this.h, param1_Cstring))
}

func QCameraFeedbackControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFeedbackControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFeedbackControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFeedbackControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraFeedbackControl) IsEventFeedbackLocked(param1 QCameraFeedbackControl__EventType) bool {
	return (bool)(C.QCameraFeedbackControl_IsEventFeedbackLocked(this.h, (C.int)(param1)))
}

func (this *QCameraFeedbackControl) IsEventFeedbackEnabled(param1 QCameraFeedbackControl__EventType) bool {
	return (bool)(C.QCameraFeedbackControl_IsEventFeedbackEnabled(this.h, (C.int)(param1)))
}

func (this *QCameraFeedbackControl) SetEventFeedbackEnabled(param1 QCameraFeedbackControl__EventType, param2 bool) bool {
	return (bool)(C.QCameraFeedbackControl_SetEventFeedbackEnabled(this.h, (C.int)(param1), (C.bool)(param2)))
}

func (this *QCameraFeedbackControl) ResetEventFeedback(param1 QCameraFeedbackControl__EventType) {
	C.QCameraFeedbackControl_ResetEventFeedback(this.h, (C.int)(param1))
}

func (this *QCameraFeedbackControl) SetEventFeedbackSound(param1 QCameraFeedbackControl__EventType, filePath string) bool {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	return (bool)(C.QCameraFeedbackControl_SetEventFeedbackSound(this.h, (C.int)(param1), filePath_ms))
}

func QCameraFeedbackControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFeedbackControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFeedbackControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFeedbackControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFeedbackControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFeedbackControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFeedbackControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFeedbackControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraFeedbackControl) Delete() {
	C.QCameraFeedbackControl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraFeedbackControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraFeedbackControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
