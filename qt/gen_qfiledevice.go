package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qfiledevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFileDevice struct {
	h *C.QFileDevice
	*QIODevice
}

func (this *QFileDevice) cPointer() *C.QFileDevice {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFileDevice(h *C.QFileDevice) *QFileDevice {
	return &QFileDevice{h: h, QIODevice: newQIODevice_U(unsafe.Pointer(h))}
}

func newQFileDevice_U(h unsafe.Pointer) *QFileDevice {
	return newQFileDevice((*C.QFileDevice)(h))
}

func (this *QFileDevice) MetaObject() *QMetaObject {
	ret := C.QFileDevice_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QFileDevice_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDevice_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDevice_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDevice_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDevice) Error() uintptr {
	ret := C.QFileDevice_Error(this.h)
	return (uintptr)(ret)
}

func (this *QFileDevice) UnsetError() {
	C.QFileDevice_UnsetError(this.h)
}

func (this *QFileDevice) Close() {
	C.QFileDevice_Close(this.h)
}

func (this *QFileDevice) IsSequential() bool {
	ret := C.QFileDevice_IsSequential(this.h)
	return (bool)(ret)
}

func (this *QFileDevice) Handle() int {
	ret := C.QFileDevice_Handle(this.h)
	return (int)(ret)
}

func (this *QFileDevice) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDevice_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDevice) Pos() int64 {
	ret := C.QFileDevice_Pos(this.h)
	return (int64)(ret)
}

func (this *QFileDevice) Seek(offset int64) bool {
	ret := C.QFileDevice_Seek(this.h, (C.longlong)(offset))
	return (bool)(ret)
}

func (this *QFileDevice) AtEnd() bool {
	ret := C.QFileDevice_AtEnd(this.h)
	return (bool)(ret)
}

func (this *QFileDevice) Flush() bool {
	ret := C.QFileDevice_Flush(this.h)
	return (bool)(ret)
}

func (this *QFileDevice) Size() int64 {
	ret := C.QFileDevice_Size(this.h)
	return (int64)(ret)
}

func (this *QFileDevice) Resize(sz int64) bool {
	ret := C.QFileDevice_Resize(this.h, (C.longlong)(sz))
	return (bool)(ret)
}

func (this *QFileDevice) Permissions() int {
	ret := C.QFileDevice_Permissions(this.h)
	return (int)(ret)
}

func (this *QFileDevice) SetPermissions(permissionSpec int) bool {
	ret := C.QFileDevice_SetPermissions(this.h, (C.int)(permissionSpec))
	return (bool)(ret)
}

func (this *QFileDevice) Map(offset int64, size int64) *byte {
	ret := C.QFileDevice_Map(this.h, (C.longlong)(offset), (C.longlong)(size))
	return (*byte)(ret)
}

func (this *QFileDevice) Unmap(address *byte) bool {
	ret := C.QFileDevice_Unmap(this.h, (*C.uchar)(unsafe.Pointer(address)))
	return (bool)(ret)
}

func (this *QFileDevice) FileTime(time uintptr) *QDateTime {
	ret := C.QFileDevice_FileTime(this.h, (C.uintptr_t)(time))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileDevice) SetFileTime(newDate *QDateTime, fileTime uintptr) bool {
	ret := C.QFileDevice_SetFileTime(this.h, newDate.cPointer(), (C.uintptr_t)(fileTime))
	return (bool)(ret)
}

func QFileDevice_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDevice_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDevice_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDevice_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDevice_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDevice_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDevice_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDevice_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDevice) Map3(offset int64, size int64, flags uintptr) *byte {
	ret := C.QFileDevice_Map3(this.h, (C.longlong)(offset), (C.longlong)(size), (C.uintptr_t)(flags))
	return (*byte)(ret)
}

func (this *QFileDevice) Delete() {
	C.QFileDevice_Delete(this.h)
}
