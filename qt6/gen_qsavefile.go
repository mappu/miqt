package qt6

/*

#include "gen_qsavefile.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSaveFile struct {
	h *C.QSaveFile
	*QFileDevice
}

func (this *QSaveFile) cPointer() *C.QSaveFile {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSaveFile) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSaveFile constructs the type using only CGO pointers.
func newQSaveFile(h *C.QSaveFile) *QSaveFile {
	if h == nil {
		return nil
	}
	var outptr_QFileDevice *C.QFileDevice = nil
	C.QSaveFile_virtbase(h, &outptr_QFileDevice)

	return &QSaveFile{h: h,
		QFileDevice: newQFileDevice(outptr_QFileDevice)}
}

// UnsafeNewQSaveFile constructs the type using only unsafe pointers.
func UnsafeNewQSaveFile(h unsafe.Pointer) *QSaveFile {
	return newQSaveFile((*C.QSaveFile)(h))
}

// NewQSaveFile constructs a new QSaveFile object.
func NewQSaveFile(name string) *QSaveFile {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQSaveFile(C.QSaveFile_new(name_ms))
}

// NewQSaveFile2 constructs a new QSaveFile object.
func NewQSaveFile2() *QSaveFile {

	return newQSaveFile(C.QSaveFile_new2())
}

// NewQSaveFile3 constructs a new QSaveFile object.
func NewQSaveFile3(name string, parent *QObject) *QSaveFile {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQSaveFile(C.QSaveFile_new3(name_ms, parent.cPointer()))
}

// NewQSaveFile4 constructs a new QSaveFile object.
func NewQSaveFile4(parent *QObject) *QSaveFile {

	return newQSaveFile(C.QSaveFile_new4(parent.cPointer()))
}

func (this *QSaveFile) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSaveFile_MetaObject(this.h))
}

func (this *QSaveFile) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSaveFile_Metacast(this.h, param1_Cstring))
}

func QSaveFile_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSaveFile_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSaveFile) FileName() string {
	var _ms C.struct_miqt_string = C.QSaveFile_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSaveFile) SetFileName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QSaveFile_SetFileName(this.h, name_ms)
}

func (this *QSaveFile) Open(flags QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QSaveFile_Open(this.h, (C.int)(flags)))
}

func (this *QSaveFile) Commit() bool {
	return (bool)(C.QSaveFile_Commit(this.h))
}

func (this *QSaveFile) CancelWriting() {
	C.QSaveFile_CancelWriting(this.h)
}

func (this *QSaveFile) SetDirectWriteFallback(enabled bool) {
	C.QSaveFile_SetDirectWriteFallback(this.h, (C.bool)(enabled))
}

func (this *QSaveFile) DirectWriteFallback() bool {
	return (bool)(C.QSaveFile_DirectWriteFallback(this.h))
}

func QSaveFile_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSaveFile_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSaveFile_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSaveFile_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSaveFile) callVirtualBase_FileName() string {

	var _ms C.struct_miqt_string = C.QSaveFile_virtualbase_FileName(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QSaveFile) OnFileName(slot func(super func() string) string) {
	ok := C.QSaveFile_override_virtual_FileName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_FileName
func miqt_exec_callback_QSaveFile_FileName(self *C.QSaveFile, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_FileName)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QSaveFile) callVirtualBase_Open(flags QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QSaveFile_virtualbase_Open(unsafe.Pointer(this.h), (C.int)(flags)))

}
func (this *QSaveFile) OnOpen(slot func(super func(flags QIODeviceBase__OpenModeFlag) bool, flags QIODeviceBase__OpenModeFlag) bool) {
	ok := C.QSaveFile_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_Open
func miqt_exec_callback_QSaveFile_Open(self *C.QSaveFile, cb C.intptr_t, flags C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(flags QIODeviceBase__OpenModeFlag) bool, flags QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QIODeviceBase__OpenModeFlag)(flags)

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_WriteData(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QSaveFile_virtualbase_WriteData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QSaveFile) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QSaveFile_override_virtual_WriteData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_WriteData
func miqt_exec_callback_QSaveFile_WriteData(self *C.QSaveFile, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(lenVal)

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_WriteData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_IsSequential() bool {

	return (bool)(C.QSaveFile_virtualbase_IsSequential(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QSaveFile_override_virtual_IsSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_IsSequential
func miqt_exec_callback_QSaveFile_IsSequential(self *C.QSaveFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_Pos() int64 {

	return (int64)(C.QSaveFile_virtualbase_Pos(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnPos(slot func(super func() int64) int64) {
	ok := C.QSaveFile_override_virtual_Pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_Pos
func miqt_exec_callback_QSaveFile_Pos(self *C.QSaveFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_Seek(offset int64) bool {

	return (bool)(C.QSaveFile_virtualbase_Seek(unsafe.Pointer(this.h), (C.longlong)(offset)))

}
func (this *QSaveFile) OnSeek(slot func(super func(offset int64) bool, offset int64) bool) {
	ok := C.QSaveFile_override_virtual_Seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_Seek
func miqt_exec_callback_QSaveFile_Seek(self *C.QSaveFile, cb C.intptr_t, offset C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset int64) bool, offset int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(offset)

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_AtEnd() bool {

	return (bool)(C.QSaveFile_virtualbase_AtEnd(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QSaveFile_override_virtual_AtEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_AtEnd
func miqt_exec_callback_QSaveFile_AtEnd(self *C.QSaveFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_Size() int64 {

	return (int64)(C.QSaveFile_virtualbase_Size(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnSize(slot func(super func() int64) int64) {
	ok := C.QSaveFile_override_virtual_Size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_Size
func miqt_exec_callback_QSaveFile_Size(self *C.QSaveFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_Resize(sz int64) bool {

	return (bool)(C.QSaveFile_virtualbase_Resize(unsafe.Pointer(this.h), (C.longlong)(sz)))

}
func (this *QSaveFile) OnResize(slot func(super func(sz int64) bool, sz int64) bool) {
	ok := C.QSaveFile_override_virtual_Resize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_Resize
func miqt_exec_callback_QSaveFile_Resize(self *C.QSaveFile, cb C.intptr_t, sz C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sz int64) bool, sz int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(sz)

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_Resize, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_Permissions() QFileDevice__Permission {

	return (QFileDevice__Permission)(C.QSaveFile_virtualbase_Permissions(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnPermissions(slot func(super func() QFileDevice__Permission) QFileDevice__Permission) {
	ok := C.QSaveFile_override_virtual_Permissions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_Permissions
func miqt_exec_callback_QSaveFile_Permissions(self *C.QSaveFile, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QFileDevice__Permission) QFileDevice__Permission)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_Permissions)

	return (C.int)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_SetPermissions(permissionSpec QFileDevice__Permission) bool {

	return (bool)(C.QSaveFile_virtualbase_SetPermissions(unsafe.Pointer(this.h), (C.int)(permissionSpec)))

}
func (this *QSaveFile) OnSetPermissions(slot func(super func(permissionSpec QFileDevice__Permission) bool, permissionSpec QFileDevice__Permission) bool) {
	ok := C.QSaveFile_override_virtual_SetPermissions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_SetPermissions
func miqt_exec_callback_QSaveFile_SetPermissions(self *C.QSaveFile, cb C.intptr_t, permissionSpec C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(permissionSpec QFileDevice__Permission) bool, permissionSpec QFileDevice__Permission) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QFileDevice__Permission)(permissionSpec)

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_SetPermissions, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_ReadData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QSaveFile_virtualbase_ReadData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QSaveFile) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QSaveFile_override_virtual_ReadData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_ReadData
func miqt_exec_callback_QSaveFile_ReadData(self *C.QSaveFile, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_ReadData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QSaveFile_virtualbase_ReadLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QSaveFile) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QSaveFile_override_virtual_ReadLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_ReadLineData
func miqt_exec_callback_QSaveFile_ReadLineData(self *C.QSaveFile, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_Reset() bool {

	return (bool)(C.QSaveFile_virtualbase_Reset(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnReset(slot func(super func() bool) bool) {
	ok := C.QSaveFile_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_Reset
func miqt_exec_callback_QSaveFile_Reset(self *C.QSaveFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QSaveFile_virtualbase_BytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QSaveFile_override_virtual_BytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_BytesAvailable
func miqt_exec_callback_QSaveFile_BytesAvailable(self *C.QSaveFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QSaveFile_virtualbase_BytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QSaveFile_override_virtual_BytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_BytesToWrite
func miqt_exec_callback_QSaveFile_BytesToWrite(self *C.QSaveFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QSaveFile_virtualbase_CanReadLine(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QSaveFile_override_virtual_CanReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_CanReadLine
func miqt_exec_callback_QSaveFile_CanReadLine(self *C.QSaveFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QSaveFile_virtualbase_WaitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSaveFile) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSaveFile_override_virtual_WaitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_WaitForReadyRead
func miqt_exec_callback_QSaveFile_WaitForReadyRead(self *C.QSaveFile, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QSaveFile_virtualbase_WaitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSaveFile) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSaveFile_override_virtual_WaitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_WaitForBytesWritten
func miqt_exec_callback_QSaveFile_WaitForBytesWritten(self *C.QSaveFile, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_SkipData(maxSize int64) int64 {

	return (int64)(C.QSaveFile_virtualbase_SkipData(unsafe.Pointer(this.h), (C.longlong)(maxSize)))

}
func (this *QSaveFile) OnSkipData(slot func(super func(maxSize int64) int64, maxSize int64) int64) {
	ok := C.QSaveFile_override_virtual_SkipData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_SkipData
func miqt_exec_callback_QSaveFile_SkipData(self *C.QSaveFile, cb C.intptr_t, maxSize C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(maxSize int64) int64, maxSize int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(maxSize)

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_SkipData, slotval1)

	return (C.longlong)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QSaveFile_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSaveFile) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QSaveFile_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_Event
func miqt_exec_callback_QSaveFile_Event(self *C.QSaveFile, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSaveFile_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSaveFile) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSaveFile_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_EventFilter
func miqt_exec_callback_QSaveFile_EventFilter(self *C.QSaveFile, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSaveFile_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSaveFile) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSaveFile_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_TimerEvent
func miqt_exec_callback_QSaveFile_TimerEvent(self *C.QSaveFile, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSaveFile{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSaveFile) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSaveFile_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSaveFile) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSaveFile_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_ChildEvent
func miqt_exec_callback_QSaveFile_ChildEvent(self *C.QSaveFile, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSaveFile{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSaveFile) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSaveFile_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSaveFile) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSaveFile_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_CustomEvent
func miqt_exec_callback_QSaveFile_CustomEvent(self *C.QSaveFile, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSaveFile{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSaveFile) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSaveFile_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSaveFile) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSaveFile_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_ConnectNotify
func miqt_exec_callback_QSaveFile_ConnectNotify(self *C.QSaveFile, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSaveFile{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSaveFile) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSaveFile_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSaveFile) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSaveFile_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_DisconnectNotify
func miqt_exec_callback_QSaveFile_DisconnectNotify(self *C.QSaveFile, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSaveFile{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSaveFile) Delete() {
	C.QSaveFile_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSaveFile) GoGC() {
	runtime.SetFinalizer(this, func(this *QSaveFile) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
