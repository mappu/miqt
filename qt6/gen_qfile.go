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
	return newQMetaObject(C.QFile_MetaObject(this.h))
}

func (this *QFile) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFile_Metacast(this.h, param1_Cstring))
}

func QFile_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFile_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFile) FileName() string {
	var _ms C.struct_miqt_string = C.QFile_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFile) SetFileName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QFile_SetFileName(this.h, name_ms)
}

func QFile_EncodeName(fileName string) []byte {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _bytearray C.struct_miqt_string = C.QFile_EncodeName(fileName_ms)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QFile_DecodeName(localFileName []byte) string {
	localFileName_alias := C.struct_miqt_string{}
	localFileName_alias.data = (*C.char)(unsafe.Pointer(&localFileName[0]))
	localFileName_alias.len = C.size_t(len(localFileName))
	var _ms C.struct_miqt_string = C.QFile_DecodeName(localFileName_alias)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFile_DecodeNameWithLocalFileName(localFileName string) string {
	localFileName_Cstring := C.CString(localFileName)
	defer C.free(unsafe.Pointer(localFileName_Cstring))
	var _ms C.struct_miqt_string = C.QFile_DecodeNameWithLocalFileName(localFileName_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFile) Exists() bool {
	return (bool)(C.QFile_Exists(this.h))
}

func QFile_ExistsWithFileName(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QFile_ExistsWithFileName(fileName_ms))
}

func (this *QFile) SymLinkTarget() string {
	var _ms C.struct_miqt_string = C.QFile_SymLinkTarget(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFile_SymLinkTargetWithFileName(fileName string) string {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _ms C.struct_miqt_string = C.QFile_SymLinkTargetWithFileName(fileName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFile) Remove() bool {
	return (bool)(C.QFile_Remove(this.h))
}

func QFile_RemoveWithFileName(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QFile_RemoveWithFileName(fileName_ms))
}

func (this *QFile) MoveToTrash() bool {
	return (bool)(C.QFile_MoveToTrash(this.h))
}

func QFile_MoveToTrashWithFileName(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QFile_MoveToTrashWithFileName(fileName_ms))
}

func (this *QFile) Rename(newName string) bool {
	newName_ms := C.struct_miqt_string{}
	newName_ms.data = C.CString(newName)
	newName_ms.len = C.size_t(len(newName))
	defer C.free(unsafe.Pointer(newName_ms.data))
	return (bool)(C.QFile_Rename(this.h, newName_ms))
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
	return (bool)(C.QFile_Rename2(oldName_ms, newName_ms))
}

func (this *QFile) Link(newName string) bool {
	newName_ms := C.struct_miqt_string{}
	newName_ms.data = C.CString(newName)
	newName_ms.len = C.size_t(len(newName))
	defer C.free(unsafe.Pointer(newName_ms.data))
	return (bool)(C.QFile_Link(this.h, newName_ms))
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
	return (bool)(C.QFile_Link2(fileName_ms, newName_ms))
}

func (this *QFile) Copy(newName string) bool {
	newName_ms := C.struct_miqt_string{}
	newName_ms.data = C.CString(newName)
	newName_ms.len = C.size_t(len(newName))
	defer C.free(unsafe.Pointer(newName_ms.data))
	return (bool)(C.QFile_Copy(this.h, newName_ms))
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
	return (bool)(C.QFile_Copy2(fileName_ms, newName_ms))
}

func (this *QFile) Open(flags QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QFile_Open(this.h, (C.int)(flags)))
}

func (this *QFile) Open2(flags QIODeviceBase__OpenModeFlag, permissions QFileDevice__Permission) bool {
	return (bool)(C.QFile_Open2(this.h, (C.int)(flags), (C.int)(permissions)))
}

func (this *QFile) Open4(fd int, ioFlags QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QFile_Open4(this.h, (C.int)(fd), (C.int)(ioFlags)))
}

func (this *QFile) Size() int64 {
	return (int64)(C.QFile_Size(this.h))
}

func (this *QFile) Resize(sz int64) bool {
	return (bool)(C.QFile_Resize(this.h, (C.longlong)(sz)))
}

func QFile_Resize2(filename string, sz int64) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QFile_Resize2(filename_ms, (C.longlong)(sz)))
}

func (this *QFile) Permissions() QFileDevice__Permission {
	return (QFileDevice__Permission)(C.QFile_Permissions(this.h))
}

func QFile_PermissionsWithFilename(filename string) QFileDevice__Permission {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (QFileDevice__Permission)(C.QFile_PermissionsWithFilename(filename_ms))
}

func (this *QFile) SetPermissions(permissionSpec QFileDevice__Permission) bool {
	return (bool)(C.QFile_SetPermissions(this.h, (C.int)(permissionSpec)))
}

func QFile_SetPermissions2(filename string, permissionSpec QFileDevice__Permission) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QFile_SetPermissions2(filename_ms, (C.int)(permissionSpec)))
}

func QFile_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFile_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFile_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFile_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFile) Open33(fd int, ioFlags QIODeviceBase__OpenModeFlag, handleFlags QFileDevice__FileHandleFlag) bool {
	return (bool)(C.QFile_Open33(this.h, (C.int)(fd), (C.int)(ioFlags), (C.int)(handleFlags)))
}

func (this *QFile) callVirtualBase_FileName() string {

	var _ms C.struct_miqt_string = C.QFile_virtualbase_FileName(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QFile) OnFileName(slot func(super func() string) string) {
	ok := C.QFile_override_virtual_FileName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_FileName
func miqt_exec_callback_QFile_FileName(self *C.QFile, cb C.intptr_t) C.struct_miqt_string {
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

	return (bool)(C.QFile_virtualbase_Open(unsafe.Pointer(this.h), (C.int)(flags)))

}
func (this *QFile) OnOpen(slot func(super func(flags QIODeviceBase__OpenModeFlag) bool, flags QIODeviceBase__OpenModeFlag) bool) {
	ok := C.QFile_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_Open
func miqt_exec_callback_QFile_Open(self *C.QFile, cb C.intptr_t, flags C.int) C.bool {
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

	return (int64)(C.QFile_virtualbase_Size(unsafe.Pointer(this.h)))

}
func (this *QFile) OnSize(slot func(super func() int64) int64) {
	ok := C.QFile_override_virtual_Size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_Size
func miqt_exec_callback_QFile_Size(self *C.QFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QFile) callVirtualBase_Resize(sz int64) bool {

	return (bool)(C.QFile_virtualbase_Resize(unsafe.Pointer(this.h), (C.longlong)(sz)))

}
func (this *QFile) OnResize(slot func(super func(sz int64) bool, sz int64) bool) {
	ok := C.QFile_override_virtual_Resize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_Resize
func miqt_exec_callback_QFile_Resize(self *C.QFile, cb C.intptr_t, sz C.longlong) C.bool {
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

	return (QFileDevice__Permission)(C.QFile_virtualbase_Permissions(unsafe.Pointer(this.h)))

}
func (this *QFile) OnPermissions(slot func(super func() QFileDevice__Permission) QFileDevice__Permission) {
	ok := C.QFile_override_virtual_Permissions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_Permissions
func miqt_exec_callback_QFile_Permissions(self *C.QFile, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QFileDevice__Permission) QFileDevice__Permission)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_Permissions)

	return (C.int)(virtualReturn)

}

func (this *QFile) callVirtualBase_SetPermissions(permissionSpec QFileDevice__Permission) bool {

	return (bool)(C.QFile_virtualbase_SetPermissions(unsafe.Pointer(this.h), (C.int)(permissionSpec)))

}
func (this *QFile) OnSetPermissions(slot func(super func(permissionSpec QFileDevice__Permission) bool, permissionSpec QFileDevice__Permission) bool) {
	ok := C.QFile_override_virtual_SetPermissions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_SetPermissions
func miqt_exec_callback_QFile_SetPermissions(self *C.QFile, cb C.intptr_t, permissionSpec C.int) C.bool {
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

	C.QFile_virtualbase_Close(unsafe.Pointer(this.h))

}
func (this *QFile) OnClose(slot func(super func())) {
	ok := C.QFile_override_virtual_Close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_Close
func miqt_exec_callback_QFile_Close(self *C.QFile, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFile{h: self}).callVirtualBase_Close)

}

func (this *QFile) callVirtualBase_IsSequential() bool {

	return (bool)(C.QFile_virtualbase_IsSequential(unsafe.Pointer(this.h)))

}
func (this *QFile) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QFile_override_virtual_IsSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_IsSequential
func miqt_exec_callback_QFile_IsSequential(self *C.QFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QFile) callVirtualBase_Pos() int64 {

	return (int64)(C.QFile_virtualbase_Pos(unsafe.Pointer(this.h)))

}
func (this *QFile) OnPos(slot func(super func() int64) int64) {
	ok := C.QFile_override_virtual_Pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_Pos
func miqt_exec_callback_QFile_Pos(self *C.QFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QFile) callVirtualBase_Seek(offset int64) bool {

	return (bool)(C.QFile_virtualbase_Seek(unsafe.Pointer(this.h), (C.longlong)(offset)))

}
func (this *QFile) OnSeek(slot func(super func(offset int64) bool, offset int64) bool) {
	ok := C.QFile_override_virtual_Seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_Seek
func miqt_exec_callback_QFile_Seek(self *C.QFile, cb C.intptr_t, offset C.longlong) C.bool {
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

	return (bool)(C.QFile_virtualbase_AtEnd(unsafe.Pointer(this.h)))

}
func (this *QFile) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QFile_override_virtual_AtEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_AtEnd
func miqt_exec_callback_QFile_AtEnd(self *C.QFile, cb C.intptr_t) C.bool {
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

	return (int64)(C.QFile_virtualbase_ReadData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QFile) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QFile_override_virtual_ReadData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_ReadData
func miqt_exec_callback_QFile_ReadData(self *C.QFile, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

	return (int64)(C.QFile_virtualbase_WriteData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QFile) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QFile_override_virtual_WriteData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_WriteData
func miqt_exec_callback_QFile_WriteData(self *C.QFile, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
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

	return (int64)(C.QFile_virtualbase_ReadLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QFile) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QFile_override_virtual_ReadLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_ReadLineData
func miqt_exec_callback_QFile_ReadLineData(self *C.QFile, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

	return (bool)(C.QFile_virtualbase_Reset(unsafe.Pointer(this.h)))

}
func (this *QFile) OnReset(slot func(super func() bool) bool) {
	ok := C.QFile_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_Reset
func miqt_exec_callback_QFile_Reset(self *C.QFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QFile) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QFile_virtualbase_BytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QFile) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QFile_override_virtual_BytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_BytesAvailable
func miqt_exec_callback_QFile_BytesAvailable(self *C.QFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QFile) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QFile_virtualbase_BytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QFile) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QFile_override_virtual_BytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_BytesToWrite
func miqt_exec_callback_QFile_BytesToWrite(self *C.QFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QFile) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QFile_virtualbase_CanReadLine(unsafe.Pointer(this.h)))

}
func (this *QFile) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QFile_override_virtual_CanReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_CanReadLine
func miqt_exec_callback_QFile_CanReadLine(self *C.QFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFile{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QFile) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QFile_virtualbase_WaitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QFile) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QFile_override_virtual_WaitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_WaitForReadyRead
func miqt_exec_callback_QFile_WaitForReadyRead(self *C.QFile, cb C.intptr_t, msecs C.int) C.bool {
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

	return (bool)(C.QFile_virtualbase_WaitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QFile) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QFile_override_virtual_WaitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_WaitForBytesWritten
func miqt_exec_callback_QFile_WaitForBytesWritten(self *C.QFile, cb C.intptr_t, msecs C.int) C.bool {
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

	return (int64)(C.QFile_virtualbase_SkipData(unsafe.Pointer(this.h), (C.longlong)(maxSize)))

}
func (this *QFile) OnSkipData(slot func(super func(maxSize int64) int64, maxSize int64) int64) {
	ok := C.QFile_override_virtual_SkipData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_SkipData
func miqt_exec_callback_QFile_SkipData(self *C.QFile, cb C.intptr_t, maxSize C.longlong) C.longlong {
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

	return (bool)(C.QFile_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QFile) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QFile_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_Event
func miqt_exec_callback_QFile_Event(self *C.QFile, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QFile_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QFile) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QFile_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_EventFilter
func miqt_exec_callback_QFile_EventFilter(self *C.QFile, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QFile_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFile) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QFile_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_TimerEvent
func miqt_exec_callback_QFile_TimerEvent(self *C.QFile, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QFile{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QFile) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QFile_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFile) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QFile_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_ChildEvent
func miqt_exec_callback_QFile_ChildEvent(self *C.QFile, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QFile{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QFile) callVirtualBase_CustomEvent(event *QEvent) {

	C.QFile_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFile) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFile_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_CustomEvent
func miqt_exec_callback_QFile_CustomEvent(self *C.QFile, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFile{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QFile) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QFile_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFile) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFile_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_ConnectNotify
func miqt_exec_callback_QFile_ConnectNotify(self *C.QFile, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFile{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QFile) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QFile_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFile) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFile_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFile_DisconnectNotify
func miqt_exec_callback_QFile_DisconnectNotify(self *C.QFile, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QFile_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFile) GoGC() {
	runtime.SetFinalizer(this, func(this *QFile) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
