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
	return newQMetaObject(C.QSaveFile_metaObject(this.h))
}

func (this *QSaveFile) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSaveFile_metacast(this.h, param1_Cstring))
}

func QSaveFile_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSaveFile_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSaveFile) FileName() string {
	var _ms C.struct_miqt_string = C.QSaveFile_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSaveFile) SetFileName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QSaveFile_setFileName(this.h, name_ms)
}

func (this *QSaveFile) Open(flags QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QSaveFile_open(this.h, (C.int)(flags)))
}

func (this *QSaveFile) Commit() bool {
	return (bool)(C.QSaveFile_commit(this.h))
}

func (this *QSaveFile) CancelWriting() {
	C.QSaveFile_cancelWriting(this.h)
}

func (this *QSaveFile) SetDirectWriteFallback(enabled bool) {
	C.QSaveFile_setDirectWriteFallback(this.h, (C.bool)(enabled))
}

func (this *QSaveFile) DirectWriteFallback() bool {
	return (bool)(C.QSaveFile_directWriteFallback(this.h))
}

func QSaveFile_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSaveFile_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSaveFile_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSaveFile_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetOpenMode can only be called from a QSaveFile that was directly constructed.
func (this *QSaveFile) SetOpenMode(openMode QIODeviceBase__OpenModeFlag) {

	var _dynamic_cast_ok C.bool = false
	C.QSaveFile_protectedbase_setOpenMode(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(openMode))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetErrorString can only be called from a QSaveFile that was directly constructed.
func (this *QSaveFile) SetErrorString(errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))

	var _dynamic_cast_ok C.bool = false
	C.QSaveFile_protectedbase_setErrorString(&_dynamic_cast_ok, unsafe.Pointer(this.h), errorString_ms)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QSaveFile that was directly constructed.
func (this *QSaveFile) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QSaveFile_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSaveFile that was directly constructed.
func (this *QSaveFile) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSaveFile_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSaveFile that was directly constructed.
func (this *QSaveFile) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSaveFile_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSaveFile that was directly constructed.
func (this *QSaveFile) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSaveFile_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSaveFile) callVirtualBase_FileName() string {

	var _ms C.struct_miqt_string = C.QSaveFile_virtualbase_fileName(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QSaveFile) OnFileName(slot func(super func() string) string) {
	ok := C.QSaveFile_override_virtual_fileName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_fileName
func miqt_exec_callback_QSaveFile_fileName(self *C.QSaveFile, cb C.intptr_t) C.struct_miqt_string {
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

	return (bool)(C.QSaveFile_virtualbase_open(unsafe.Pointer(this.h), (C.int)(flags)))

}
func (this *QSaveFile) OnOpen(slot func(super func(flags QIODeviceBase__OpenModeFlag) bool, flags QIODeviceBase__OpenModeFlag) bool) {
	ok := C.QSaveFile_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_open
func miqt_exec_callback_QSaveFile_open(self *C.QSaveFile, cb C.intptr_t, flags C.int) C.bool {
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

	return (int64)(C.QSaveFile_virtualbase_writeData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QSaveFile) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QSaveFile_override_virtual_writeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_writeData
func miqt_exec_callback_QSaveFile_writeData(self *C.QSaveFile, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
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

	return (bool)(C.QSaveFile_virtualbase_isSequential(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QSaveFile_override_virtual_isSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_isSequential
func miqt_exec_callback_QSaveFile_isSequential(self *C.QSaveFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_Pos() int64 {

	return (int64)(C.QSaveFile_virtualbase_pos(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnPos(slot func(super func() int64) int64) {
	ok := C.QSaveFile_override_virtual_pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_pos
func miqt_exec_callback_QSaveFile_pos(self *C.QSaveFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_Seek(offset int64) bool {

	return (bool)(C.QSaveFile_virtualbase_seek(unsafe.Pointer(this.h), (C.longlong)(offset)))

}
func (this *QSaveFile) OnSeek(slot func(super func(offset int64) bool, offset int64) bool) {
	ok := C.QSaveFile_override_virtual_seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_seek
func miqt_exec_callback_QSaveFile_seek(self *C.QSaveFile, cb C.intptr_t, offset C.longlong) C.bool {
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

	return (bool)(C.QSaveFile_virtualbase_atEnd(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QSaveFile_override_virtual_atEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_atEnd
func miqt_exec_callback_QSaveFile_atEnd(self *C.QSaveFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_Size() int64 {

	return (int64)(C.QSaveFile_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnSize(slot func(super func() int64) int64) {
	ok := C.QSaveFile_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_size
func miqt_exec_callback_QSaveFile_size(self *C.QSaveFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_Resize(sz int64) bool {

	return (bool)(C.QSaveFile_virtualbase_resize(unsafe.Pointer(this.h), (C.longlong)(sz)))

}
func (this *QSaveFile) OnResize(slot func(super func(sz int64) bool, sz int64) bool) {
	ok := C.QSaveFile_override_virtual_resize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_resize
func miqt_exec_callback_QSaveFile_resize(self *C.QSaveFile, cb C.intptr_t, sz C.longlong) C.bool {
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

	return (QFileDevice__Permission)(C.QSaveFile_virtualbase_permissions(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnPermissions(slot func(super func() QFileDevice__Permission) QFileDevice__Permission) {
	ok := C.QSaveFile_override_virtual_permissions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_permissions
func miqt_exec_callback_QSaveFile_permissions(self *C.QSaveFile, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QFileDevice__Permission) QFileDevice__Permission)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_Permissions)

	return (C.int)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_SetPermissions(permissionSpec QFileDevice__Permission) bool {

	return (bool)(C.QSaveFile_virtualbase_setPermissions(unsafe.Pointer(this.h), (C.int)(permissionSpec)))

}
func (this *QSaveFile) OnSetPermissions(slot func(super func(permissionSpec QFileDevice__Permission) bool, permissionSpec QFileDevice__Permission) bool) {
	ok := C.QSaveFile_override_virtual_setPermissions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_setPermissions
func miqt_exec_callback_QSaveFile_setPermissions(self *C.QSaveFile, cb C.intptr_t, permissionSpec C.int) C.bool {
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

	return (int64)(C.QSaveFile_virtualbase_readData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QSaveFile) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QSaveFile_override_virtual_readData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_readData
func miqt_exec_callback_QSaveFile_readData(self *C.QSaveFile, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

	return (int64)(C.QSaveFile_virtualbase_readLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QSaveFile) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QSaveFile_override_virtual_readLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_readLineData
func miqt_exec_callback_QSaveFile_readLineData(self *C.QSaveFile, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

	return (bool)(C.QSaveFile_virtualbase_reset(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnReset(slot func(super func() bool) bool) {
	ok := C.QSaveFile_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_reset
func miqt_exec_callback_QSaveFile_reset(self *C.QSaveFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QSaveFile_virtualbase_bytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QSaveFile_override_virtual_bytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_bytesAvailable
func miqt_exec_callback_QSaveFile_bytesAvailable(self *C.QSaveFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QSaveFile_virtualbase_bytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QSaveFile_override_virtual_bytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_bytesToWrite
func miqt_exec_callback_QSaveFile_bytesToWrite(self *C.QSaveFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QSaveFile_virtualbase_canReadLine(unsafe.Pointer(this.h)))

}
func (this *QSaveFile) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QSaveFile_override_virtual_canReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_canReadLine
func miqt_exec_callback_QSaveFile_canReadLine(self *C.QSaveFile, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSaveFile{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QSaveFile) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QSaveFile_virtualbase_waitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSaveFile) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSaveFile_override_virtual_waitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_waitForReadyRead
func miqt_exec_callback_QSaveFile_waitForReadyRead(self *C.QSaveFile, cb C.intptr_t, msecs C.int) C.bool {
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

	return (bool)(C.QSaveFile_virtualbase_waitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QSaveFile) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QSaveFile_override_virtual_waitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_waitForBytesWritten
func miqt_exec_callback_QSaveFile_waitForBytesWritten(self *C.QSaveFile, cb C.intptr_t, msecs C.int) C.bool {
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

	return (int64)(C.QSaveFile_virtualbase_skipData(unsafe.Pointer(this.h), (C.longlong)(maxSize)))

}
func (this *QSaveFile) OnSkipData(slot func(super func(maxSize int64) int64, maxSize int64) int64) {
	ok := C.QSaveFile_override_virtual_skipData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_skipData
func miqt_exec_callback_QSaveFile_skipData(self *C.QSaveFile, cb C.intptr_t, maxSize C.longlong) C.longlong {
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

	return (bool)(C.QSaveFile_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSaveFile) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QSaveFile_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_event
func miqt_exec_callback_QSaveFile_event(self *C.QSaveFile, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QSaveFile_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSaveFile) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSaveFile_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_eventFilter
func miqt_exec_callback_QSaveFile_eventFilter(self *C.QSaveFile, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QSaveFile_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSaveFile) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSaveFile_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_timerEvent
func miqt_exec_callback_QSaveFile_timerEvent(self *C.QSaveFile, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSaveFile{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSaveFile) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSaveFile_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSaveFile) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSaveFile_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_childEvent
func miqt_exec_callback_QSaveFile_childEvent(self *C.QSaveFile, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSaveFile{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSaveFile) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSaveFile_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSaveFile) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSaveFile_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_customEvent
func miqt_exec_callback_QSaveFile_customEvent(self *C.QSaveFile, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSaveFile{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSaveFile) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSaveFile_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSaveFile) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSaveFile_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_connectNotify
func miqt_exec_callback_QSaveFile_connectNotify(self *C.QSaveFile, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSaveFile{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSaveFile) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSaveFile_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSaveFile) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSaveFile_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSaveFile_disconnectNotify
func miqt_exec_callback_QSaveFile_disconnectNotify(self *C.QSaveFile, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QSaveFile_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSaveFile) GoGC() {
	runtime.SetFinalizer(this, func(this *QSaveFile) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
