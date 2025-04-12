package qt6

/*

#include "gen_qfile.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFile struct {
	h *C.QFile
	*QFileDevice
}

func (this *QFile) cPointer() *C.QFile {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFile) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFile constructs the type using only CGO pointers.
func newQFile(h *C.QFile) *QFile {
	if h == nil {
		return nil
	}
	var outptr_QFileDevice *C.QFileDevice = nil
	C.QFile_virtbase(h, &outptr_QFileDevice)

	return &QFile{h: h,
		QFileDevice: newQFileDevice(outptr_QFileDevice)}
}

// UnsafeNewQFile constructs the type using only unsafe pointers.
func UnsafeNewQFile(h unsafe.Pointer) *QFile {
	return newQFile((*C.QFile)(h))
}

// NewQFile constructs a new QFile object.
func NewQFile() *QFile {

	return newQFile(C.QFile_new())
}

// NewQFile2 constructs a new QFile object.
func NewQFile2(name string) *QFile {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQFile(C.QFile_new2(name_ms))
}

// NewQFile3 constructs a new QFile object.
func NewQFile3(parent *QObject) *QFile {

	return newQFile(C.QFile_new3(parent.cPointer()))
}

// NewQFile4 constructs a new QFile object.
func NewQFile4(name string, parent *QObject) *QFile {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQFile(C.QFile_new4(name_ms, parent.cPointer()))
}

func (this *QFile) MetaObject() *QMetaObject {
	return newQMetaObject(C.QFile_metaObject(this.h))
}

func (this *QFile) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFile_metacast(this.h, param1_Cstring))
}

func QFile_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFile_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFile) FileName() string {
	var _ms C.struct_miqt_string = C.QFile_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFile) SetFileName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QFile_setFileName(this.h, name_ms)
}

func QFile_EncodeName(fileName string) []byte {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _bytearray C.struct_miqt_string = C.QFile_encodeName(fileName_ms)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QFile_DecodeName(localFileName []byte) string {
	localFileName_alias := C.struct_miqt_string{}
	if len(localFileName) > 0 {
		localFileName_alias.data = (*C.char)(unsafe.Pointer(&localFileName[0]))
	} else {
		localFileName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	localFileName_alias.len = C.size_t(len(localFileName))
	var _ms C.struct_miqt_string = C.QFile_decodeName(localFileName_alias)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFile_DecodeNameWithLocalFileName(localFileName string) string {
	localFileName_Cstring := C.CString(localFileName)
	defer C.free(unsafe.Pointer(localFileName_Cstring))
	var _ms C.struct_miqt_string = C.QFile_decodeNameWithLocalFileName(localFileName_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFile) Exists() bool {
	return (bool)(C.QFile_exists(this.h))
}

func QFile_ExistsWithFileName(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QFile_existsWithFileName(fileName_ms))
}

func (this *QFile) SymLinkTarget() string {
	var _ms C.struct_miqt_string = C.QFile_symLinkTarget(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFile_SymLinkTargetWithFileName(fileName string) string {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _ms C.struct_miqt_string = C.QFile_symLinkTargetWithFileName(fileName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFile) Remove() bool {
	return (bool)(C.QFile_remove(this.h))
}

func QFile_RemoveWithFileName(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QFile_removeWithFileName(fileName_ms))
}

func (this *QFile) MoveToTrash() bool {
	return (bool)(C.QFile_moveToTrash(this.h))
}

func QFile_MoveToTrashWithFileName(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QFile_moveToTrashWithFileName(fileName_ms))
}

func (this *QFile) Rename(newName string) bool {
	newName_ms := C.struct_miqt_string{}
	newName_ms.data = C.CString(newName)
	newName_ms.len = C.size_t(len(newName))
	defer C.free(unsafe.Pointer(newName_ms.data))
	return (bool)(C.QFile_rename(this.h, newName_ms))
}

func QFile_Rename2(oldName string, newName string) bool {
	oldName_ms := C.struct_miqt_string{}
	oldName_ms.data = C.CString(oldName)
	oldName_ms.len = C.size_t(len(oldName))
	defer C.free(unsafe.Pointer(oldName_ms.data))
	newName_ms := C.struct_miqt_string{}
	newName_ms.data = C.CString(newName)
	newName_ms.len = C.size_t(len(newName))
	defer C.free(unsafe.Pointer(newName_ms.data))
	return (bool)(C.QFile_rename2(oldName_ms, newName_ms))
}

func (this *QFile) Link(newName string) bool {
	newName_ms := C.struct_miqt_string{}
	newName_ms.data = C.CString(newName)
	newName_ms.len = C.size_t(len(newName))
	defer C.free(unsafe.Pointer(newName_ms.data))
	return (bool)(C.QFile_link(this.h, newName_ms))
}

func QFile_Link2(fileName string, newName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	newName_ms := C.struct_miqt_string{}
	newName_ms.data = C.CString(newName)
	newName_ms.len = C.size_t(len(newName))
	defer C.free(unsafe.Pointer(newName_ms.data))
	return (bool)(C.QFile_link2(fileName_ms, newName_ms))
}

func (this *QFile) Copy(newName string) bool {
	newName_ms := C.struct_miqt_string{}
	newName_ms.data = C.CString(newName)
	newName_ms.len = C.size_t(len(newName))
	defer C.free(unsafe.Pointer(newName_ms.data))
	return (bool)(C.QFile_copy(this.h, newName_ms))
}

func QFile_Copy2(fileName string, newName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	newName_ms := C.struct_miqt_string{}
	newName_ms.data = C.CString(newName)
	newName_ms.len = C.size_t(len(newName))
	defer C.free(unsafe.Pointer(newName_ms.data))
	return (bool)(C.QFile_copy2(fileName_ms, newName_ms))
}

func (this *QFile) Open(flags QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QFile_open(this.h, (C.int)(flags)))
}

func (this *QFile) Open2(flags QIODeviceBase__OpenModeFlag, permissions QFileDevice__Permission) bool {
	return (bool)(C.QFile_open2(this.h, (C.int)(flags), (C.int)(permissions)))
}

func (this *QFile) Open4(fd int, ioFlags QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QFile_open4(this.h, (C.int)(fd), (C.int)(ioFlags)))
}

func (this *QFile) Size() int64 {
	return (int64)(C.QFile_size(this.h))
}

func (this *QFile) Resize(sz int64) bool {
	return (bool)(C.QFile_resize(this.h, (C.longlong)(sz)))
}

func QFile_Resize2(filename string, sz int64) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QFile_resize2(filename_ms, (C.longlong)(sz)))
}

func (this *QFile) Permissions() QFileDevice__Permission {
	return (QFileDevice__Permission)(C.QFile_permissions(this.h))
}

func QFile_PermissionsWithFilename(filename string) QFileDevice__Permission {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (QFileDevice__Permission)(C.QFile_permissionsWithFilename(filename_ms))
}

func (this *QFile) SetPermissions(permissionSpec QFileDevice__Permission) bool {
	return (bool)(C.QFile_setPermissions(this.h, (C.int)(permissionSpec)))
}

func QFile_SetPermissions2(filename string, permissionSpec QFileDevice__Permission) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QFile_setPermissions2(filename_ms, (C.int)(permissionSpec)))
}

func QFile_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFile_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFile_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFile_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFile) Open6(fd int, ioFlags QIODeviceBase__OpenModeFlag, handleFlags QFileDevice__FileHandleFlag) bool {
	return (bool)(C.QFile_open6(this.h, (C.int)(fd), (C.int)(ioFlags), (C.int)(handleFlags)))
}

// SetOpenMode can only be called from a QFile that was directly constructed.
func (this *QFile) SetOpenMode(openMode QIODeviceBase__OpenModeFlag) {

	var _dynamic_cast_ok C.bool = false
	C.QFile_protectedbase_setOpenMode(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(openMode))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetErrorString can only be called from a QFile that was directly constructed.
func (this *QFile) SetErrorString(errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))

	var _dynamic_cast_ok C.bool = false
	C.QFile_protectedbase_setErrorString(&_dynamic_cast_ok, unsafe.Pointer(this.h), errorString_ms)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QFile that was directly constructed.
func (this *QFile) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QFile_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QFile that was directly constructed.
func (this *QFile) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QFile_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QFile that was directly constructed.
func (this *QFile) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QFile_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QFile that was directly constructed.
func (this *QFile) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QFile_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QFile) callVirtualBase_FileName() string {

	var _ms C.struct_miqt_string = C.QFile_virtualbase_fileName(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QFile) OnFileName(slot func(super func() string) string) {
	ok := C.QFile_override_virtual_fileName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_fileName
func miqt_exec_callback_QFile_fileName(self *C.QFile, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_FileName)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QFile) callVirtualBase_Open(flags QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QFile_virtualbase_open(unsafe.Pointer(this.h), (C.int)(flags)))

}
func (this *QFile) OnOpen(slot func(super func(flags QIODeviceBase__OpenModeFlag) bool, flags QIODeviceBase__OpenModeFlag) bool) {
	ok := C.QFile_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_open
func miqt_exec_callback_QFile_open(self *C.QFile, cb C.intptr_t, flags C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(flags QIODeviceBase__OpenModeFlag) bool, flags QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QIODeviceBase__OpenModeFlag)(flags)

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFile) callVirtualBase_Size() int64 {

	return (int64)(C.QFile_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QFile) OnSize(slot func(super func() int64) int64) {
	ok := C.QFile_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_size
func miqt_exec_callback_QFile_size(self *C.QFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QFile) callVirtualBase_Resize(sz int64) bool {

	return (bool)(C.QFile_virtualbase_resize(unsafe.Pointer(this.h), (C.longlong)(sz)))

}
func (this *QFile) OnResize(slot func(super func(sz int64) bool, sz int64) bool) {
	ok := C.QFile_override_virtual_resize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_resize
func miqt_exec_callback_QFile_resize(self *C.QFile, cb C.intptr_t, sz C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sz int64) bool, sz int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(sz)

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_Resize, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFile) callVirtualBase_Permissions() QFileDevice__Permission {

	return (QFileDevice__Permission)(C.QFile_virtualbase_permissions(unsafe.Pointer(this.h)))

}
func (this *QFile) OnPermissions(slot func(super func() QFileDevice__Permission) QFileDevice__Permission) {
	ok := C.QFile_override_virtual_permissions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_permissions
func miqt_exec_callback_QFile_permissions(self *C.QFile, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QFileDevice__Permission) QFileDevice__Permission)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_Permissions)

	return (C.int)(virtualReturn)

}

func (this *QFile) callVirtualBase_SetPermissions(permissionSpec QFileDevice__Permission) bool {

	return (bool)(C.QFile_virtualbase_setPermissions(unsafe.Pointer(this.h), (C.int)(permissionSpec)))

}
func (this *QFile) OnSetPermissions(slot func(super func(permissionSpec QFileDevice__Permission) bool, permissionSpec QFileDevice__Permission) bool) {
	ok := C.QFile_override_virtual_setPermissions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_setPermissions
func miqt_exec_callback_QFile_setPermissions(self *C.QFile, cb C.intptr_t, permissionSpec C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(permissionSpec QFileDevice__Permission) bool, permissionSpec QFileDevice__Permission) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QFileDevice__Permission)(permissionSpec)

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_SetPermissions, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFile) callVirtualBase_Close() {

	C.QFile_virtualbase_close(unsafe.Pointer(this.h))

}
func (this *QFile) OnClose(slot func(super func())) {
	ok := C.QFile_override_virtual_close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_close
func miqt_exec_callback_QFile_close(self *C.QFile, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFile{h: self}).callVirtualBase_Close)

}

func (this *QFile) callVirtualBase_IsSequential() bool {

	return (bool)(C.QFile_virtualbase_isSequential(unsafe.Pointer(this.h)))

}
func (this *QFile) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QFile_override_virtual_isSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_isSequential
func miqt_exec_callback_QFile_isSequential(self *C.QFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QFile) callVirtualBase_Pos() int64 {

	return (int64)(C.QFile_virtualbase_pos(unsafe.Pointer(this.h)))

}
func (this *QFile) OnPos(slot func(super func() int64) int64) {
	ok := C.QFile_override_virtual_pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_pos
func miqt_exec_callback_QFile_pos(self *C.QFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QFile) callVirtualBase_Seek(offset int64) bool {

	return (bool)(C.QFile_virtualbase_seek(unsafe.Pointer(this.h), (C.longlong)(offset)))

}
func (this *QFile) OnSeek(slot func(super func(offset int64) bool, offset int64) bool) {
	ok := C.QFile_override_virtual_seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_seek
func miqt_exec_callback_QFile_seek(self *C.QFile, cb C.intptr_t, offset C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset int64) bool, offset int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(offset)

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFile) callVirtualBase_AtEnd() bool {

	return (bool)(C.QFile_virtualbase_atEnd(unsafe.Pointer(this.h)))

}
func (this *QFile) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QFile_override_virtual_atEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_atEnd
func miqt_exec_callback_QFile_atEnd(self *C.QFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QFile) callVirtualBase_ReadData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QFile_virtualbase_readData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QFile) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QFile_override_virtual_readData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_readData
func miqt_exec_callback_QFile_readData(self *C.QFile, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_ReadData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QFile) callVirtualBase_WriteData(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QFile_virtualbase_writeData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QFile) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QFile_override_virtual_writeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_writeData
func miqt_exec_callback_QFile_writeData(self *C.QFile, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(lenVal)

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_WriteData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QFile) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QFile_virtualbase_readLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QFile) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QFile_override_virtual_readLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_readLineData
func miqt_exec_callback_QFile_readLineData(self *C.QFile, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QFile) callVirtualBase_Reset() bool {

	return (bool)(C.QFile_virtualbase_reset(unsafe.Pointer(this.h)))

}
func (this *QFile) OnReset(slot func(super func() bool) bool) {
	ok := C.QFile_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_reset
func miqt_exec_callback_QFile_reset(self *C.QFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QFile) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QFile_virtualbase_bytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QFile) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QFile_override_virtual_bytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_bytesAvailable
func miqt_exec_callback_QFile_bytesAvailable(self *C.QFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QFile) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QFile_virtualbase_bytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QFile) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QFile_override_virtual_bytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_bytesToWrite
func miqt_exec_callback_QFile_bytesToWrite(self *C.QFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QFile) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QFile_virtualbase_canReadLine(unsafe.Pointer(this.h)))

}
func (this *QFile) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QFile_override_virtual_canReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_canReadLine
func miqt_exec_callback_QFile_canReadLine(self *C.QFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QFile) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QFile_virtualbase_waitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QFile) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QFile_override_virtual_waitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_waitForReadyRead
func miqt_exec_callback_QFile_waitForReadyRead(self *C.QFile, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFile) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QFile_virtualbase_waitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QFile) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QFile_override_virtual_waitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_waitForBytesWritten
func miqt_exec_callback_QFile_waitForBytesWritten(self *C.QFile, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFile) callVirtualBase_SkipData(maxSize int64) int64 {

	return (int64)(C.QFile_virtualbase_skipData(unsafe.Pointer(this.h), (C.longlong)(maxSize)))

}
func (this *QFile) OnSkipData(slot func(super func(maxSize int64) int64, maxSize int64) int64) {
	ok := C.QFile_override_virtual_skipData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_skipData
func miqt_exec_callback_QFile_skipData(self *C.QFile, cb C.intptr_t, maxSize C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(maxSize int64) int64, maxSize int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(maxSize)

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_SkipData, slotval1)

	return (C.longlong)(virtualReturn)

}

func (this *QFile) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QFile_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QFile) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QFile_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_event
func miqt_exec_callback_QFile_event(self *C.QFile, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFile) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QFile_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QFile) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QFile_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_eventFilter
func miqt_exec_callback_QFile_eventFilter(self *C.QFile, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QFile) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QFile_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFile) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QFile_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_timerEvent
func miqt_exec_callback_QFile_timerEvent(self *C.QFile, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QFile{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QFile) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QFile_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFile) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QFile_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_childEvent
func miqt_exec_callback_QFile_childEvent(self *C.QFile, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QFile{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QFile) callVirtualBase_CustomEvent(event *QEvent) {

	C.QFile_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFile) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFile_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_customEvent
func miqt_exec_callback_QFile_customEvent(self *C.QFile, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFile{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QFile) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QFile_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFile) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFile_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_connectNotify
func miqt_exec_callback_QFile_connectNotify(self *C.QFile, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFile{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QFile) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QFile_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFile) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFile_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_disconnectNotify
func miqt_exec_callback_QFile_disconnectNotify(self *C.QFile, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFile{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QFile) Delete() {
	C.QFile_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFile) GoGC() {
	runtime.SetFinalizer(this, func(this *QFile) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
