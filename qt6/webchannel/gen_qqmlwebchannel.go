package webchannel

/*

#include "gen_qqmlwebchannel.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QQmlWebChannel struct {
	h          *C.QQmlWebChannel
	isSubclass bool
	*QWebChannel
}

func (this *QQmlWebChannel) cPointer() *C.QQmlWebChannel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlWebChannel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlWebChannel constructs the type using only CGO pointers.
func newQQmlWebChannel(h *C.QQmlWebChannel, h_QWebChannel *C.QWebChannel, h_QObject *C.QObject) *QQmlWebChannel {
	if h == nil {
		return nil
	}
	return &QQmlWebChannel{h: h,
		QWebChannel: newQWebChannel(h_QWebChannel, h_QObject)}
}

// UnsafeNewQQmlWebChannel constructs the type using only unsafe pointers.
func UnsafeNewQQmlWebChannel(h unsafe.Pointer, h_QWebChannel unsafe.Pointer, h_QObject unsafe.Pointer) *QQmlWebChannel {
	if h == nil {
		return nil
	}

	return &QQmlWebChannel{h: (*C.QQmlWebChannel)(h),
		QWebChannel: UnsafeNewQWebChannel(h_QWebChannel, h_QObject)}
}

// NewQQmlWebChannel constructs a new QQmlWebChannel object.
func NewQQmlWebChannel() *QQmlWebChannel {
	var outptr_QQmlWebChannel *C.QQmlWebChannel = nil
	var outptr_QWebChannel *C.QWebChannel = nil
	var outptr_QObject *C.QObject = nil

	C.QQmlWebChannel_new(&outptr_QQmlWebChannel, &outptr_QWebChannel, &outptr_QObject)
	ret := newQQmlWebChannel(outptr_QQmlWebChannel, outptr_QWebChannel, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQQmlWebChannel2 constructs a new QQmlWebChannel object.
func NewQQmlWebChannel2(parent *qt6.QObject) *QQmlWebChannel {
	var outptr_QQmlWebChannel *C.QQmlWebChannel = nil
	var outptr_QWebChannel *C.QWebChannel = nil
	var outptr_QObject *C.QObject = nil

	C.QQmlWebChannel_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QQmlWebChannel, &outptr_QWebChannel, &outptr_QObject)
	ret := newQQmlWebChannel(outptr_QQmlWebChannel, outptr_QWebChannel, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QQmlWebChannel) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QQmlWebChannel_MetaObject(this.h)))
}

func (this *QQmlWebChannel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QQmlWebChannel_Metacast(this.h, param1_Cstring))
}

func QQmlWebChannel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QQmlWebChannel_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlWebChannel) RegisterObjects(objects map[string]qt6.QVariant) {
	objects_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(objects))))
	defer C.free(unsafe.Pointer(objects_Keys_CArray))
	objects_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(objects))))
	defer C.free(unsafe.Pointer(objects_Values_CArray))
	objects_ctr := 0
	for objects_k, objects_v := range objects {
		objects_k_ms := C.struct_miqt_string{}
		objects_k_ms.data = C.CString(objects_k)
		objects_k_ms.len = C.size_t(len(objects_k))
		defer C.free(unsafe.Pointer(objects_k_ms.data))
		objects_Keys_CArray[objects_ctr] = objects_k_ms
		objects_Values_CArray[objects_ctr] = (*C.QVariant)(objects_v.UnsafePointer())
		objects_ctr++
	}
	objects_mm := C.struct_miqt_map{
		len:    C.size_t(len(objects)),
		keys:   unsafe.Pointer(objects_Keys_CArray),
		values: unsafe.Pointer(objects_Values_CArray),
	}
	C.QQmlWebChannel_RegisterObjects(this.h, objects_mm)
}

func (this *QQmlWebChannel) ConnectTo(transport *qt6.QObject) {
	C.QQmlWebChannel_ConnectTo(this.h, (*C.QObject)(transport.UnsafePointer()))
}

func (this *QQmlWebChannel) DisconnectFrom(transport *qt6.QObject) {
	C.QQmlWebChannel_DisconnectFrom(this.h, (*C.QObject)(transport.UnsafePointer()))
}

func QQmlWebChannel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlWebChannel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QQmlWebChannel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlWebChannel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QQmlWebChannel) Delete() {
	C.QQmlWebChannel_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlWebChannel) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlWebChannel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
