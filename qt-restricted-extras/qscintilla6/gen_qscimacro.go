package qscintilla6

/*

#include "gen_qscimacro.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciMacro struct {
	h *C.QsciMacro
	*qt6.QObject
}

func (this *QsciMacro) cPointer() *C.QsciMacro {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciMacro) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciMacro(h *C.QsciMacro) *QsciMacro {
	if h == nil {
		return nil
	}
	return &QsciMacro{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQsciMacro(h unsafe.Pointer) *QsciMacro {
	return newQsciMacro((*C.QsciMacro)(h))
}

// NewQsciMacro constructs a new QsciMacro object.
func NewQsciMacro(parent *QsciScintilla) *QsciMacro {
	ret := C.QsciMacro_new(parent.cPointer())
	return newQsciMacro(ret)
}

// NewQsciMacro2 constructs a new QsciMacro object.
func NewQsciMacro2(asc string, parent *QsciScintilla) *QsciMacro {
	asc_ms := C.struct_miqt_string{}
	asc_ms.data = C.CString(asc)
	asc_ms.len = C.size_t(len(asc))
	defer C.free(unsafe.Pointer(asc_ms.data))
	ret := C.QsciMacro_new2(asc_ms, parent.cPointer())
	return newQsciMacro(ret)
}

func (this *QsciMacro) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciMacro_MetaObject(this.h)))
}

func (this *QsciMacro) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciMacro_Metacast(this.h, param1_Cstring))
}

func QsciMacro_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciMacro_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciMacro) Clear() {
	C.QsciMacro_Clear(this.h)
}

func (this *QsciMacro) Load(asc string) bool {
	asc_ms := C.struct_miqt_string{}
	asc_ms.data = C.CString(asc)
	asc_ms.len = C.size_t(len(asc))
	defer C.free(unsafe.Pointer(asc_ms.data))
	return (bool)(C.QsciMacro_Load(this.h, asc_ms))
}

func (this *QsciMacro) Save() string {
	var _ms C.struct_miqt_string = C.QsciMacro_Save(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciMacro) Play() {
	C.QsciMacro_Play(this.h)
}

func (this *QsciMacro) StartRecording() {
	C.QsciMacro_StartRecording(this.h)
}

func (this *QsciMacro) EndRecording() {
	C.QsciMacro_EndRecording(this.h)
}

func QsciMacro_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciMacro_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciMacro_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciMacro_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciMacro) Delete() {
	C.QsciMacro_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciMacro) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciMacro) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
