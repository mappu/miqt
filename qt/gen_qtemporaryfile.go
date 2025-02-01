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
	return newQMetaObject(C.QTemporaryFile_metaObject(this.h))
}

func (this *QTemporaryFile) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTemporaryFile_metacast(this.h, param1_Cstring))
}

func QTemporaryFile_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTemporaryFile_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTemporaryFile_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTemporaryFile_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryFile) AutoRemove() bool {
	return (bool)(C.QTemporaryFile_autoRemove(this.h))
}

func (this *QTemporaryFile) SetAutoRemove(b bool) {
	C.QTemporaryFile_setAutoRemove(this.h, (C.bool)(b))
}

func (this *QTemporaryFile) Open() bool {
	return (bool)(C.QTemporaryFile_open(this.h))
}

func (this *QTemporaryFile) FileName() string {
	var _ms C.struct_miqt_string = C.QTemporaryFile_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryFile) FileTemplate() string {
	var _ms C.struct_miqt_string = C.QTemporaryFile_fileTemplate(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryFile) SetFileTemplate(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTemporaryFile_setFileTemplate(this.h, name_ms)
}

func (this *QTemporaryFile) Rename(newName string) bool {
	newName_ms := C.struct_miqt_string{}
	newName_ms.data = C.CString(newName)
	newName_ms.len = C.size_t(len(newName))
	defer C.free(unsafe.Pointer(newName_ms.data))
	return (bool)(C.QTemporaryFile_rename(this.h, newName_ms))
}

func QTemporaryFile_CreateLocalFile(fileName string) *QTemporaryFile {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return newQTemporaryFile(C.QTemporaryFile_createLocalFile(fileName_ms))
}

func QTemporaryFile_CreateLocalFileWithFile(file *QFile) *QTemporaryFile {
	return newQTemporaryFile(C.QTemporaryFile_createLocalFileWithFile(file.cPointer()))
}

func QTemporaryFile_CreateNativeFile(fileName string) *QTemporaryFile {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return newQTemporaryFile(C.QTemporaryFile_createNativeFile(fileName_ms))
}

func QTemporaryFile_CreateNativeFileWithFile(file *QFile) *QTemporaryFile {
	return newQTemporaryFile(C.QTemporaryFile_createNativeFileWithFile(file.cPointer()))
}

func QTemporaryFile_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTemporaryFile_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTemporaryFile_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTemporaryFile_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTemporaryFile_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTemporaryFile_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTemporaryFile_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTemporaryFile_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryFile) callVirtualBase_FileName() string {

	var _ms C.struct_miqt_string = C.QTemporaryFile_virtualbase_fileName(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QTemporaryFile) OnfileName(slot func(super func() string) string) {
	ok := C.QTemporaryFile_override_virtual_fileName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_fileName
func miqt_exec_callback_QTemporaryFile_fileName(self *C.QTemporaryFile, cb C.intptr_t) C.struct_miqt_string {
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

	return (bool)(C.QTemporaryFile_virtualbase_openWithFlags(unsafe.Pointer(this.h), (C.int)(flags)))

}
func (this *QTemporaryFile) OnopenWithFlags(slot func(super func(flags QIODevice__OpenModeFlag) bool, flags QIODevice__OpenModeFlag) bool) {
	ok := C.QTemporaryFile_override_virtual_openWithFlags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_openWithFlags
func miqt_exec_callback_QTemporaryFile_openWithFlags(self *C.QTemporaryFile, cb C.intptr_t, flags C.int) C.bool {
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

	return (int64)(C.QTemporaryFile_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) Onsize(slot func(super func() int64) int64) {
	ok := C.QTemporaryFile_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_size
func miqt_exec_callback_QTemporaryFile_size(self *C.QTemporaryFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_Resize(sz int64) bool {

	return (bool)(C.QTemporaryFile_virtualbase_resize(unsafe.Pointer(this.h), (C.longlong)(sz)))

}
func (this *QTemporaryFile) Onresize(slot func(super func(sz int64) bool, sz int64) bool) {
	ok := C.QTemporaryFile_override_virtual_resize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_resize
func miqt_exec_callback_QTemporaryFile_resize(self *C.QTemporaryFile, cb C.intptr_t, sz C.longlong) C.bool {
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

	return (QFileDevice__Permission)(C.QTemporaryFile_virtualbase_permissions(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) Onpermissions(slot func(super func() QFileDevice__Permission) QFileDevice__Permission) {
	ok := C.QTemporaryFile_override_virtual_permissions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_permissions
func miqt_exec_callback_QTemporaryFile_permissions(self *C.QTemporaryFile, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QFileDevice__Permission) QFileDevice__Permission)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_Permissions)

	return (C.int)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_SetPermissions(permissionSpec QFileDevice__Permission) bool {

	return (bool)(C.QTemporaryFile_virtualbase_setPermissions(unsafe.Pointer(this.h), (C.int)(permissionSpec)))

}
func (this *QTemporaryFile) OnsetPermissions(slot func(super func(permissionSpec QFileDevice__Permission) bool, permissionSpec QFileDevice__Permission) bool) {
	ok := C.QTemporaryFile_override_virtual_setPermissions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_setPermissions
func miqt_exec_callback_QTemporaryFile_setPermissions(self *C.QTemporaryFile, cb C.intptr_t, permissionSpec C.int) C.bool {
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

	C.QTemporaryFile_virtualbase_close(unsafe.Pointer(this.h))

}
func (this *QTemporaryFile) Onclose(slot func(super func())) {
	ok := C.QTemporaryFile_override_virtual_close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_close
func miqt_exec_callback_QTemporaryFile_close(self *C.QTemporaryFile, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTemporaryFile{h: self}).callVirtualBase_Close)

}

func (this *QTemporaryFile) callVirtualBase_IsSequential() bool {

	return (bool)(C.QTemporaryFile_virtualbase_isSequential(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OnisSequential(slot func(super func() bool) bool) {
	ok := C.QTemporaryFile_override_virtual_isSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_isSequential
func miqt_exec_callback_QTemporaryFile_isSequential(self *C.QTemporaryFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_Pos() int64 {

	return (int64)(C.QTemporaryFile_virtualbase_pos(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) Onpos(slot func(super func() int64) int64) {
	ok := C.QTemporaryFile_override_virtual_pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_pos
func miqt_exec_callback_QTemporaryFile_pos(self *C.QTemporaryFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_Seek(offset int64) bool {

	return (bool)(C.QTemporaryFile_virtualbase_seek(unsafe.Pointer(this.h), (C.longlong)(offset)))

}
func (this *QTemporaryFile) Onseek(slot func(super func(offset int64) bool, offset int64) bool) {
	ok := C.QTemporaryFile_override_virtual_seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_seek
func miqt_exec_callback_QTemporaryFile_seek(self *C.QTemporaryFile, cb C.intptr_t, offset C.longlong) C.bool {
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

	return (bool)(C.QTemporaryFile_virtualbase_atEnd(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OnatEnd(slot func(super func() bool) bool) {
	ok := C.QTemporaryFile_override_virtual_atEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_atEnd
func miqt_exec_callback_QTemporaryFile_atEnd(self *C.QTemporaryFile, cb C.intptr_t) C.bool {
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

	return (int64)(C.QTemporaryFile_virtualbase_readData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QTemporaryFile) OnreadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QTemporaryFile_override_virtual_readData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_readData
func miqt_exec_callback_QTemporaryFile_readData(self *C.QTemporaryFile, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

	return (int64)(C.QTemporaryFile_virtualbase_writeData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QTemporaryFile) OnwriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QTemporaryFile_override_virtual_writeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_writeData
func miqt_exec_callback_QTemporaryFile_writeData(self *C.QTemporaryFile, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
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

	return (int64)(C.QTemporaryFile_virtualbase_readLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QTemporaryFile) OnreadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QTemporaryFile_override_virtual_readLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_readLineData
func miqt_exec_callback_QTemporaryFile_readLineData(self *C.QTemporaryFile, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

	return (bool)(C.QTemporaryFile_virtualbase_reset(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) Onreset(slot func(super func() bool) bool) {
	ok := C.QTemporaryFile_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_reset
func miqt_exec_callback_QTemporaryFile_reset(self *C.QTemporaryFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QTemporaryFile_virtualbase_bytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OnbytesAvailable(slot func(super func() int64) int64) {
	ok := C.QTemporaryFile_override_virtual_bytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_bytesAvailable
func miqt_exec_callback_QTemporaryFile_bytesAvailable(self *C.QTemporaryFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QTemporaryFile_virtualbase_bytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OnbytesToWrite(slot func(super func() int64) int64) {
	ok := C.QTemporaryFile_override_virtual_bytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_bytesToWrite
func miqt_exec_callback_QTemporaryFile_bytesToWrite(self *C.QTemporaryFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QTemporaryFile_virtualbase_canReadLine(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OncanReadLine(slot func(super func() bool) bool) {
	ok := C.QTemporaryFile_override_virtual_canReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_canReadLine
func miqt_exec_callback_QTemporaryFile_canReadLine(self *C.QTemporaryFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QTemporaryFile_virtualbase_waitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QTemporaryFile) OnwaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QTemporaryFile_override_virtual_waitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_waitForReadyRead
func miqt_exec_callback_QTemporaryFile_waitForReadyRead(self *C.QTemporaryFile, cb C.intptr_t, msecs C.int) C.bool {
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

	return (bool)(C.QTemporaryFile_virtualbase_waitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QTemporaryFile) OnwaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QTemporaryFile_override_virtual_waitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_waitForBytesWritten
func miqt_exec_callback_QTemporaryFile_waitForBytesWritten(self *C.QTemporaryFile, cb C.intptr_t, msecs C.int) C.bool {
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

	return (bool)(C.QTemporaryFile_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTemporaryFile) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTemporaryFile_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_event
func miqt_exec_callback_QTemporaryFile_event(self *C.QTemporaryFile, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QTemporaryFile_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTemporaryFile) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QTemporaryFile_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_eventFilter
func miqt_exec_callback_QTemporaryFile_eventFilter(self *C.QTemporaryFile, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QTemporaryFile_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTemporaryFile) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTemporaryFile_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_timerEvent
func miqt_exec_callback_QTemporaryFile_timerEvent(self *C.QTemporaryFile, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTemporaryFile{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTemporaryFile) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTemporaryFile_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTemporaryFile) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTemporaryFile_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_childEvent
func miqt_exec_callback_QTemporaryFile_childEvent(self *C.QTemporaryFile, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTemporaryFile{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTemporaryFile) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTemporaryFile_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTemporaryFile) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTemporaryFile_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_customEvent
func miqt_exec_callback_QTemporaryFile_customEvent(self *C.QTemporaryFile, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTemporaryFile{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTemporaryFile) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTemporaryFile_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTemporaryFile) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTemporaryFile_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_connectNotify
func miqt_exec_callback_QTemporaryFile_connectNotify(self *C.QTemporaryFile, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTemporaryFile{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTemporaryFile) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTemporaryFile_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTemporaryFile) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTemporaryFile_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTemporaryFile_disconnectNotify
func miqt_exec_callback_QTemporaryFile_disconnectNotify(self *C.QTemporaryFile, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QTemporaryFile_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTemporaryFile) GoGC() {
	runtime.SetFinalizer(this, func(this *QTemporaryFile) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
