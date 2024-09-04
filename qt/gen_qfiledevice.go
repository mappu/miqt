package qt

/*

#include "gen_qfiledevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFileDevice__FileError int

const (
	QFileDevice__FileError__NoError          QFileDevice__FileError = 0
	QFileDevice__FileError__ReadError        QFileDevice__FileError = 1
	QFileDevice__FileError__WriteError       QFileDevice__FileError = 2
	QFileDevice__FileError__FatalError       QFileDevice__FileError = 3
	QFileDevice__FileError__ResourceError    QFileDevice__FileError = 4
	QFileDevice__FileError__OpenError        QFileDevice__FileError = 5
	QFileDevice__FileError__AbortError       QFileDevice__FileError = 6
	QFileDevice__FileError__TimeOutError     QFileDevice__FileError = 7
	QFileDevice__FileError__UnspecifiedError QFileDevice__FileError = 8
	QFileDevice__FileError__RemoveError      QFileDevice__FileError = 9
	QFileDevice__FileError__RenameError      QFileDevice__FileError = 10
	QFileDevice__FileError__PositionError    QFileDevice__FileError = 11
	QFileDevice__FileError__ResizeError      QFileDevice__FileError = 12
	QFileDevice__FileError__PermissionsError QFileDevice__FileError = 13
	QFileDevice__FileError__CopyError        QFileDevice__FileError = 14
)

type QFileDevice__FileTime int

const (
	QFileDevice__FileTime__FileAccessTime         QFileDevice__FileTime = 0
	QFileDevice__FileTime__FileBirthTime          QFileDevice__FileTime = 1
	QFileDevice__FileTime__FileMetadataChangeTime QFileDevice__FileTime = 2
	QFileDevice__FileTime__FileModificationTime   QFileDevice__FileTime = 3
)

type QFileDevice__Permission int

const (
	QFileDevice__Permission__ReadOwner  QFileDevice__Permission = 16384
	QFileDevice__Permission__WriteOwner QFileDevice__Permission = 8192
	QFileDevice__Permission__ExeOwner   QFileDevice__Permission = 4096
	QFileDevice__Permission__ReadUser   QFileDevice__Permission = 1024
	QFileDevice__Permission__WriteUser  QFileDevice__Permission = 512
	QFileDevice__Permission__ExeUser    QFileDevice__Permission = 256
	QFileDevice__Permission__ReadGroup  QFileDevice__Permission = 64
	QFileDevice__Permission__WriteGroup QFileDevice__Permission = 32
	QFileDevice__Permission__ExeGroup   QFileDevice__Permission = 16
	QFileDevice__Permission__ReadOther  QFileDevice__Permission = 4
	QFileDevice__Permission__WriteOther QFileDevice__Permission = 2
	QFileDevice__Permission__ExeOther   QFileDevice__Permission = 1
)

type QFileDevice__FileHandleFlag int

const (
	QFileDevice__FileHandleFlag__AutoCloseHandle QFileDevice__FileHandleFlag = 1
	QFileDevice__FileHandleFlag__DontCloseHandle QFileDevice__FileHandleFlag = 0
)

type QFileDevice__MemoryMapFlags int

const (
	QFileDevice__MemoryMapFlags__NoOptions        QFileDevice__MemoryMapFlags = 0
	QFileDevice__MemoryMapFlags__MapPrivateOption QFileDevice__MemoryMapFlags = 1
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
	if h == nil {
		return nil
	}
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

func (this *QFileDevice) Error() QFileDevice__FileError {
	ret := C.QFileDevice_Error(this.h)
	return (QFileDevice__FileError)(ret)
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

func (this *QFileDevice) FileTime(time QFileDevice__FileTime) *QDateTime {
	ret := C.QFileDevice_FileTime(this.h, (C.uintptr_t)(time))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileDevice) SetFileTime(newDate *QDateTime, fileTime QFileDevice__FileTime) bool {
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

func (this *QFileDevice) Map3(offset int64, size int64, flags QFileDevice__MemoryMapFlags) *byte {
	ret := C.QFileDevice_Map3(this.h, (C.longlong)(offset), (C.longlong)(size), (C.uintptr_t)(flags))
	return (*byte)(ret)
}

func (this *QFileDevice) Delete() {
	C.QFileDevice_Delete(this.h)
}
