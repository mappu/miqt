package qt

/*

#include "gen_qtemporaryfile.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTemporaryFile struct {
	h *C.QTemporaryFile
	*QFile
}

func (this *QTemporaryFile) cPointer() *C.QTemporaryFile {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTemporaryFile) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTemporaryFile constructs the type using only CGO pointers.
func newQTemporaryFile(h *C.QTemporaryFile) *QTemporaryFile {
	if h == nil {
		return nil
	}
	var outptr_QFile *C.QFile = nil
	C.QTemporaryFile_virtbase(h, &outptr_QFile)

	return &QTemporaryFile{h: h,
		QFile: newQFile(outptr_QFile)}
}

// UnsafeNewQTemporaryFile constructs the type using only unsafe pointers.
func UnsafeNewQTemporaryFile(h unsafe.Pointer) *QTemporaryFile {
	return newQTemporaryFile((*C.QTemporaryFile)(h))
}

// NewQTemporaryFile constructs a new QTemporaryFile object.
func NewQTemporaryFile() *QTemporaryFile {

	return newQTemporaryFile(C.QTemporaryFile_new())
}

// NewQTemporaryFile2 constructs a new QTemporaryFile object.
func NewQTemporaryFile2(templateName string) *QTemporaryFile {
	templateName_ms := C.struct_miqt_string{}
	templateName_ms.data = C.CString(templateName)
	templateName_ms.len = C.size_t(len(templateName))
	defer C.free(unsafe.Pointer(templateName_ms.data))

	return newQTemporaryFile(C.QTemporaryFile_new2(templateName_ms))
}

// NewQTemporaryFile3 constructs a new QTemporaryFile object.
func NewQTemporaryFile3(parent *QObject) *QTemporaryFile {

	return newQTemporaryFile(C.QTemporaryFile_new3(parent.cPointer()))
}

// NewQTemporaryFile4 constructs a new QTemporaryFile object.
func NewQTemporaryFile4(templateName string, parent *QObject) *QTemporaryFile {
	templateName_ms := C.struct_miqt_string{}
	templateName_ms.data = C.CString(templateName)
	templateName_ms.len = C.size_t(len(templateName))
	defer C.free(unsafe.Pointer(templateName_ms.data))

	return newQTemporaryFile(C.QTemporaryFile_new4(templateName_ms, parent.cPointer()))
}

func (this *QTemporaryFile) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTemporaryFile_MetaObject(this.h))
}

func (this *QTemporaryFile) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTemporaryFile_Metacast(this.h, param1_Cstring))
}

func QTemporaryFile_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTemporaryFile_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTemporaryFile_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTemporaryFile_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryFile) AutoRemove() bool {
	return (bool)(C.QTemporaryFile_AutoRemove(this.h))
}

func (this *QTemporaryFile) SetAutoRemove(b bool) {
	C.QTemporaryFile_SetAutoRemove(this.h, (C.bool)(b))
}

func (this *QTemporaryFile) Open() bool {
	return (bool)(C.QTemporaryFile_Open(this.h))
}

func (this *QTemporaryFile) FileName() string {
	var _ms C.struct_miqt_string = C.QTemporaryFile_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryFile) FileTemplate() string {
	var _ms C.struct_miqt_string = C.QTemporaryFile_FileTemplate(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryFile) SetFileTemplate(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTemporaryFile_SetFileTemplate(this.h, name_ms)
}

func (this *QTemporaryFile) Rename(newName string) bool {
	newName_ms := C.struct_miqt_string{}
	newName_ms.data = C.CString(newName)
	newName_ms.len = C.size_t(len(newName))
	defer C.free(unsafe.Pointer(newName_ms.data))
	return (bool)(C.QTemporaryFile_Rename(this.h, newName_ms))
}

func QTemporaryFile_CreateLocalFile(fileName string) *QTemporaryFile {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return newQTemporaryFile(C.QTemporaryFile_CreateLocalFile(fileName_ms))
}

func QTemporaryFile_CreateLocalFileWithFile(file *QFile) *QTemporaryFile {
	return newQTemporaryFile(C.QTemporaryFile_CreateLocalFileWithFile(file.cPointer()))
}

func QTemporaryFile_CreateNativeFile(fileName string) *QTemporaryFile {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return newQTemporaryFile(C.QTemporaryFile_CreateNativeFile(fileName_ms))
}

func QTemporaryFile_CreateNativeFileWithFile(file *QFile) *QTemporaryFile {
	return newQTemporaryFile(C.QTemporaryFile_CreateNativeFileWithFile(file.cPointer()))
}

func QTemporaryFile_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTemporaryFile_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTemporaryFile_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTemporaryFile_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTemporaryFile_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTemporaryFile_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTemporaryFile_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTemporaryFile_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryFile) callVirtualBase_FileName() string {

	var _ms C.struct_miqt_string = C.QTemporaryFile_virtualbase_FileName(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QTemporaryFile) OnFileName(slot func(super func() string) string) {
	ok := C.QTemporaryFile_override_virtual_FileName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_FileName
func miqt_exec_callback_QTemporaryFile_FileName(self *C.QTemporaryFile, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_FileName)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QTemporaryFile) callVirtualBase_OpenWithFlags(flags QIODevice__OpenModeFlag) bool {

	return (bool)(C.QTemporaryFile_virtualbase_OpenWithFlags(unsafe.Pointer(this.h), (C.int)(flags)))

}
func (this *QTemporaryFile) OnOpenWithFlags(slot func(super func(flags QIODevice__OpenModeFlag) bool, flags QIODevice__OpenModeFlag) bool) {
	ok := C.QTemporaryFile_override_virtual_OpenWithFlags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_OpenWithFlags
func miqt_exec_callback_QTemporaryFile_OpenWithFlags(self *C.QTemporaryFile, cb C.intptr_t, flags C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(flags QIODevice__OpenModeFlag) bool, flags QIODevice__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QIODevice__OpenModeFlag)(flags)

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_OpenWithFlags, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_Size() int64 {

	return (int64)(C.QTemporaryFile_virtualbase_Size(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OnSize(slot func(super func() int64) int64) {
	ok := C.QTemporaryFile_override_virtual_Size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_Size
func miqt_exec_callback_QTemporaryFile_Size(self *C.QTemporaryFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_Resize(sz int64) bool {

	return (bool)(C.QTemporaryFile_virtualbase_Resize(unsafe.Pointer(this.h), (C.longlong)(sz)))

}
func (this *QTemporaryFile) OnResize(slot func(super func(sz int64) bool, sz int64) bool) {
	ok := C.QTemporaryFile_override_virtual_Resize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_Resize
func miqt_exec_callback_QTemporaryFile_Resize(self *C.QTemporaryFile, cb C.intptr_t, sz C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sz int64) bool, sz int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(sz)

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_Resize, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_Permissions() QFileDevice__Permission {

	return (QFileDevice__Permission)(C.QTemporaryFile_virtualbase_Permissions(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OnPermissions(slot func(super func() QFileDevice__Permission) QFileDevice__Permission) {
	ok := C.QTemporaryFile_override_virtual_Permissions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_Permissions
func miqt_exec_callback_QTemporaryFile_Permissions(self *C.QTemporaryFile, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QFileDevice__Permission) QFileDevice__Permission)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_Permissions)

	return (C.int)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_SetPermissions(permissionSpec QFileDevice__Permission) bool {

	return (bool)(C.QTemporaryFile_virtualbase_SetPermissions(unsafe.Pointer(this.h), (C.int)(permissionSpec)))

}
func (this *QTemporaryFile) OnSetPermissions(slot func(super func(permissionSpec QFileDevice__Permission) bool, permissionSpec QFileDevice__Permission) bool) {
	ok := C.QTemporaryFile_override_virtual_SetPermissions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_SetPermissions
func miqt_exec_callback_QTemporaryFile_SetPermissions(self *C.QTemporaryFile, cb C.intptr_t, permissionSpec C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(permissionSpec QFileDevice__Permission) bool, permissionSpec QFileDevice__Permission) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QFileDevice__Permission)(permissionSpec)

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_SetPermissions, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_Close() {

	C.QTemporaryFile_virtualbase_Close(unsafe.Pointer(this.h))

}
func (this *QTemporaryFile) OnClose(slot func(super func())) {
	ok := C.QTemporaryFile_override_virtual_Close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_Close
func miqt_exec_callback_QTemporaryFile_Close(self *C.QTemporaryFile, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTemporaryFile{h: self}).callVirtualBase_Close)

}

func (this *QTemporaryFile) callVirtualBase_IsSequential() bool {

	return (bool)(C.QTemporaryFile_virtualbase_IsSequential(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QTemporaryFile_override_virtual_IsSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_IsSequential
func miqt_exec_callback_QTemporaryFile_IsSequential(self *C.QTemporaryFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_Pos() int64 {

	return (int64)(C.QTemporaryFile_virtualbase_Pos(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OnPos(slot func(super func() int64) int64) {
	ok := C.QTemporaryFile_override_virtual_Pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_Pos
func miqt_exec_callback_QTemporaryFile_Pos(self *C.QTemporaryFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_Seek(offset int64) bool {

	return (bool)(C.QTemporaryFile_virtualbase_Seek(unsafe.Pointer(this.h), (C.longlong)(offset)))

}
func (this *QTemporaryFile) OnSeek(slot func(super func(offset int64) bool, offset int64) bool) {
	ok := C.QTemporaryFile_override_virtual_Seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_Seek
func miqt_exec_callback_QTemporaryFile_Seek(self *C.QTemporaryFile, cb C.intptr_t, offset C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset int64) bool, offset int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(offset)

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_AtEnd() bool {

	return (bool)(C.QTemporaryFile_virtualbase_AtEnd(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QTemporaryFile_override_virtual_AtEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_AtEnd
func miqt_exec_callback_QTemporaryFile_AtEnd(self *C.QTemporaryFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_ReadData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QTemporaryFile_virtualbase_ReadData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QTemporaryFile) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QTemporaryFile_override_virtual_ReadData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_ReadData
func miqt_exec_callback_QTemporaryFile_ReadData(self *C.QTemporaryFile, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_ReadData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_WriteData(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QTemporaryFile_virtualbase_WriteData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QTemporaryFile) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QTemporaryFile_override_virtual_WriteData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_WriteData
func miqt_exec_callback_QTemporaryFile_WriteData(self *C.QTemporaryFile, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(lenVal)

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_WriteData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QTemporaryFile_virtualbase_ReadLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QTemporaryFile) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QTemporaryFile_override_virtual_ReadLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_ReadLineData
func miqt_exec_callback_QTemporaryFile_ReadLineData(self *C.QTemporaryFile, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_Reset() bool {

	return (bool)(C.QTemporaryFile_virtualbase_Reset(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OnReset(slot func(super func() bool) bool) {
	ok := C.QTemporaryFile_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_Reset
func miqt_exec_callback_QTemporaryFile_Reset(self *C.QTemporaryFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QTemporaryFile_virtualbase_BytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QTemporaryFile_override_virtual_BytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_BytesAvailable
func miqt_exec_callback_QTemporaryFile_BytesAvailable(self *C.QTemporaryFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QTemporaryFile_virtualbase_BytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QTemporaryFile_override_virtual_BytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_BytesToWrite
func miqt_exec_callback_QTemporaryFile_BytesToWrite(self *C.QTemporaryFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QTemporaryFile_virtualbase_CanReadLine(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QTemporaryFile_override_virtual_CanReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_CanReadLine
func miqt_exec_callback_QTemporaryFile_CanReadLine(self *C.QTemporaryFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QTemporaryFile_virtualbase_WaitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QTemporaryFile) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QTemporaryFile_override_virtual_WaitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_WaitForReadyRead
func miqt_exec_callback_QTemporaryFile_WaitForReadyRead(self *C.QTemporaryFile, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QTemporaryFile_virtualbase_WaitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QTemporaryFile) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QTemporaryFile_override_virtual_WaitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_WaitForBytesWritten
func miqt_exec_callback_QTemporaryFile_WaitForBytesWritten(self *C.QTemporaryFile, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QTemporaryFile_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTemporaryFile) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTemporaryFile_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_Event
func miqt_exec_callback_QTemporaryFile_Event(self *C.QTemporaryFile, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QTemporaryFile_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTemporaryFile) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QTemporaryFile_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_EventFilter
func miqt_exec_callback_QTemporaryFile_EventFilter(self *C.QTemporaryFile, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTemporaryFile_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTemporaryFile) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTemporaryFile_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_TimerEvent
func miqt_exec_callback_QTemporaryFile_TimerEvent(self *C.QTemporaryFile, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTemporaryFile{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTemporaryFile) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTemporaryFile_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTemporaryFile) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTemporaryFile_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_ChildEvent
func miqt_exec_callback_QTemporaryFile_ChildEvent(self *C.QTemporaryFile, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTemporaryFile{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTemporaryFile) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTemporaryFile_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTemporaryFile) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTemporaryFile_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_CustomEvent
func miqt_exec_callback_QTemporaryFile_CustomEvent(self *C.QTemporaryFile, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTemporaryFile{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTemporaryFile) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTemporaryFile_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTemporaryFile) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTemporaryFile_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_ConnectNotify
func miqt_exec_callback_QTemporaryFile_ConnectNotify(self *C.QTemporaryFile, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTemporaryFile{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTemporaryFile) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTemporaryFile_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTemporaryFile) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTemporaryFile_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_DisconnectNotify
func miqt_exec_callback_QTemporaryFile_DisconnectNotify(self *C.QTemporaryFile, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTemporaryFile{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTemporaryFile) Delete() {
	C.QTemporaryFile_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTemporaryFile) GoGC() {
	runtime.SetFinalizer(this, func(this *QTemporaryFile) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
