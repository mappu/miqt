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
	return newQMetaObject_U(unsafe.Pointer(C.QFileDevice_MetaObject(this.h)))
}

func QFileDevice_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFileDevice_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileDevice_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFileDevice_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFileDevice) Error() QFileDevice__FileError {
	return (QFileDevice__FileError)(C.QFileDevice_Error(this.h))
}

func (this *QFileDevice) UnsetError() {
	C.QFileDevice_UnsetError(this.h)
}

func (this *QFileDevice) Close() {
	C.QFileDevice_Close(this.h)
}

func (this *QFileDevice) IsSequential() bool {
	return (bool)(C.QFileDevice_IsSequential(this.h))
}

func (this *QFileDevice) Handle() int {
	return (int)(C.QFileDevice_Handle(this.h))
}

func (this *QFileDevice) FileName() string {
	var _ms *C.struct_miqt_string = C.QFileDevice_FileName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFileDevice) Pos() int64 {
	return (int64)(C.QFileDevice_Pos(this.h))
}

func (this *QFileDevice) Seek(offset int64) bool {
	return (bool)(C.QFileDevice_Seek(this.h, (C.longlong)(offset)))
}

func (this *QFileDevice) AtEnd() bool {
	return (bool)(C.QFileDevice_AtEnd(this.h))
}

func (this *QFileDevice) Flush() bool {
	return (bool)(C.QFileDevice_Flush(this.h))
}

func (this *QFileDevice) Size() int64 {
	return (int64)(C.QFileDevice_Size(this.h))
}

func (this *QFileDevice) Resize(sz int64) bool {
	return (bool)(C.QFileDevice_Resize(this.h, (C.longlong)(sz)))
}

func (this *QFileDevice) Permissions() QFileDevice__Permission {
	return (QFileDevice__Permission)(C.QFileDevice_Permissions(this.h))
}

func (this *QFileDevice) SetPermissions(permissionSpec QFileDevice__Permission) bool {
	return (bool)(C.QFileDevice_SetPermissions(this.h, (C.int)(permissionSpec)))
}

func (this *QFileDevice) Map(offset int64, size int64) *byte {
	return (*byte)(C.QFileDevice_Map(this.h, (C.longlong)(offset), (C.longlong)(size)))
}

func (this *QFileDevice) Unmap(address *byte) bool {
	return (bool)(C.QFileDevice_Unmap(this.h, (*C.uchar)(unsafe.Pointer(address))))
}

func (this *QFileDevice) FileTime(time QFileDevice__FileTime) *QDateTime {
	_ret := C.QFileDevice_FileTime(this.h, (C.int)(time))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileDevice) SetFileTime(newDate *QDateTime, fileTime QFileDevice__FileTime) bool {
	return (bool)(C.QFileDevice_SetFileTime(this.h, newDate.cPointer(), (C.int)(fileTime)))
}

func QFileDevice_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileDevice_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileDevice_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileDevice_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileDevice_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileDevice_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileDevice_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileDevice_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFileDevice) Map3(offset int64, size int64, flags QFileDevice__MemoryMapFlags) *byte {
	return (*byte)(C.QFileDevice_Map3(this.h, (C.longlong)(offset), (C.longlong)(size), (C.int)(flags)))
}

// Delete this object from C++ memory.
func (this *QFileDevice) Delete() {
	C.QFileDevice_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileDevice) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileDevice) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
