package qt

/*

#include "gen_qpicture.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPicture struct {
	h *C.QPicture
	*QPaintDevice
}

func (this *QPicture) cPointer() *C.QPicture {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPicture(h *C.QPicture) *QPicture {
	if h == nil {
		return nil
	}
	return &QPicture{h: h, QPaintDevice: newQPaintDevice_U(unsafe.Pointer(h))}
}

func newQPicture_U(h unsafe.Pointer) *QPicture {
	return newQPicture((*C.QPicture)(h))
}

// NewQPicture constructs a new QPicture object.
func NewQPicture() *QPicture {
	ret := C.QPicture_new()
	return newQPicture(ret)
}

// NewQPicture2 constructs a new QPicture object.
func NewQPicture2(param1 *QPicture) *QPicture {
	ret := C.QPicture_new2(param1.cPointer())
	return newQPicture(ret)
}

// NewQPicture3 constructs a new QPicture object.
func NewQPicture3(formatVersion int) *QPicture {
	ret := C.QPicture_new3((C.int)(formatVersion))
	return newQPicture(ret)
}

func (this *QPicture) IsNull() bool {
	_ret := C.QPicture_IsNull(this.h)
	return (bool)(_ret)
}

func (this *QPicture) DevType() int {
	_ret := C.QPicture_DevType(this.h)
	return (int)(_ret)
}

func (this *QPicture) Size() uint {
	_ret := C.QPicture_Size(this.h)
	return (uint)(_ret)
}

func (this *QPicture) Data() unsafe.Pointer {
	_ret := C.QPicture_Data(this.h)
	return (unsafe.Pointer)(_ret)
}

func (this *QPicture) SetData(data string, size uint) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QPicture_SetData(this.h, data_Cstring, (C.uint)(size))
}

func (this *QPicture) Play(p *QPainter) bool {
	_ret := C.QPicture_Play(this.h, p.cPointer())
	return (bool)(_ret)
}

func (this *QPicture) Load(dev *QIODevice) bool {
	_ret := C.QPicture_Load(this.h, dev.cPointer())
	return (bool)(_ret)
}

func (this *QPicture) LoadWithFileName(fileName string) bool {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	_ret := C.QPicture_LoadWithFileName(this.h, (*C.struct_miqt_string)(fileName_ms))
	return (bool)(_ret)
}

func (this *QPicture) Save(dev *QIODevice) bool {
	_ret := C.QPicture_Save(this.h, dev.cPointer())
	return (bool)(_ret)
}

func (this *QPicture) SaveWithFileName(fileName string) bool {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	_ret := C.QPicture_SaveWithFileName(this.h, (*C.struct_miqt_string)(fileName_ms))
	return (bool)(_ret)
}

func (this *QPicture) BoundingRect() *QRect {
	_ret := C.QPicture_BoundingRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPicture) SetBoundingRect(r *QRect) {
	C.QPicture_SetBoundingRect(this.h, r.cPointer())
}

func (this *QPicture) OperatorAssign(p *QPicture) {
	C.QPicture_OperatorAssign(this.h, p.cPointer())
}

func (this *QPicture) Swap(other *QPicture) {
	C.QPicture_Swap(this.h, other.cPointer())
}

func (this *QPicture) Detach() {
	C.QPicture_Detach(this.h)
}

func (this *QPicture) IsDetached() bool {
	_ret := C.QPicture_IsDetached(this.h)
	return (bool)(_ret)
}

func QPicture_PictureFormat(fileName string) unsafe.Pointer {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	_ret := C.QPicture_PictureFormat((*C.struct_miqt_string)(fileName_ms))
	return (unsafe.Pointer)(_ret)
}

func QPicture_InputFormats() []QByteArray {
	var _ma *C.struct_miqt_array = C.QPicture_InputFormats()
	_ret := make([]QByteArray, int(_ma.len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QPicture_OutputFormats() []QByteArray {
	var _ma *C.struct_miqt_array = C.QPicture_OutputFormats()
	_ret := make([]QByteArray, int(_ma.len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QPicture_InputFormatList() []string {
	var _ma *C.struct_miqt_array = C.QPicture_InputFormatList()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))
		C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QPicture_OutputFormatList() []string {
	var _ma *C.struct_miqt_array = C.QPicture_OutputFormatList()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))
		C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QPicture) PaintEngine() *QPaintEngine {
	_ret := C.QPicture_PaintEngine(this.h)
	return newQPaintEngine_U(unsafe.Pointer(_ret))
}

func (this *QPicture) Load2(dev *QIODevice, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	_ret := C.QPicture_Load2(this.h, dev.cPointer(), format_Cstring)
	return (bool)(_ret)
}

func (this *QPicture) Load22(fileName string, format string) bool {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	_ret := C.QPicture_Load22(this.h, (*C.struct_miqt_string)(fileName_ms), format_Cstring)
	return (bool)(_ret)
}

func (this *QPicture) Save2(dev *QIODevice, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	_ret := C.QPicture_Save2(this.h, dev.cPointer(), format_Cstring)
	return (bool)(_ret)
}

func (this *QPicture) Save22(fileName string, format string) bool {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	_ret := C.QPicture_Save22(this.h, (*C.struct_miqt_string)(fileName_ms), format_Cstring)
	return (bool)(_ret)
}

// Delete this object from C++ memory.
func (this *QPicture) Delete() {
	C.QPicture_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPicture) GoGC() {
	runtime.SetFinalizer(this, func(this *QPicture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPictureIO struct {
	h *C.QPictureIO
}

func (this *QPictureIO) cPointer() *C.QPictureIO {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPictureIO(h *C.QPictureIO) *QPictureIO {
	if h == nil {
		return nil
	}
	return &QPictureIO{h: h}
}

func newQPictureIO_U(h unsafe.Pointer) *QPictureIO {
	return newQPictureIO((*C.QPictureIO)(h))
}

// NewQPictureIO constructs a new QPictureIO object.
func NewQPictureIO() *QPictureIO {
	ret := C.QPictureIO_new()
	return newQPictureIO(ret)
}

// NewQPictureIO2 constructs a new QPictureIO object.
func NewQPictureIO2(ioDevice *QIODevice, format string) *QPictureIO {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QPictureIO_new2(ioDevice.cPointer(), format_Cstring)
	return newQPictureIO(ret)
}

// NewQPictureIO3 constructs a new QPictureIO object.
func NewQPictureIO3(fileName string, format string) *QPictureIO {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QPictureIO_new3((*C.struct_miqt_string)(fileName_ms), format_Cstring)
	return newQPictureIO(ret)
}

func (this *QPictureIO) Picture() *QPicture {
	_ret := C.QPictureIO_Picture(this.h)
	return newQPicture_U(unsafe.Pointer(_ret))
}

func (this *QPictureIO) Status() int {
	_ret := C.QPictureIO_Status(this.h)
	return (int)(_ret)
}

func (this *QPictureIO) Format() unsafe.Pointer {
	_ret := C.QPictureIO_Format(this.h)
	return (unsafe.Pointer)(_ret)
}

func (this *QPictureIO) IoDevice() *QIODevice {
	_ret := C.QPictureIO_IoDevice(this.h)
	return newQIODevice_U(unsafe.Pointer(_ret))
}

func (this *QPictureIO) FileName() string {
	var _ms *C.struct_miqt_string = C.QPictureIO_FileName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPictureIO) Quality() int {
	_ret := C.QPictureIO_Quality(this.h)
	return (int)(_ret)
}

func (this *QPictureIO) Description() string {
	var _ms *C.struct_miqt_string = C.QPictureIO_Description(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPictureIO) Parameters() unsafe.Pointer {
	_ret := C.QPictureIO_Parameters(this.h)
	return (unsafe.Pointer)(_ret)
}

func (this *QPictureIO) Gamma() float32 {
	_ret := C.QPictureIO_Gamma(this.h)
	return (float32)(_ret)
}

func (this *QPictureIO) SetPicture(picture *QPicture) {
	C.QPictureIO_SetPicture(this.h, picture.cPointer())
}

func (this *QPictureIO) SetStatus(status int) {
	C.QPictureIO_SetStatus(this.h, (C.int)(status))
}

func (this *QPictureIO) SetFormat(format string) {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	C.QPictureIO_SetFormat(this.h, format_Cstring)
}

func (this *QPictureIO) SetIODevice(iODevice *QIODevice) {
	C.QPictureIO_SetIODevice(this.h, iODevice.cPointer())
}

func (this *QPictureIO) SetFileName(fileName string) {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	C.QPictureIO_SetFileName(this.h, (*C.struct_miqt_string)(fileName_ms))
}

func (this *QPictureIO) SetQuality(quality int) {
	C.QPictureIO_SetQuality(this.h, (C.int)(quality))
}

func (this *QPictureIO) SetDescription(description string) {
	description_ms := miqt_strdupg(description)
	defer C.free(description_ms)
	C.QPictureIO_SetDescription(this.h, (*C.struct_miqt_string)(description_ms))
}

func (this *QPictureIO) SetParameters(parameters string) {
	parameters_Cstring := C.CString(parameters)
	defer C.free(unsafe.Pointer(parameters_Cstring))
	C.QPictureIO_SetParameters(this.h, parameters_Cstring)
}

func (this *QPictureIO) SetGamma(gamma float32) {
	C.QPictureIO_SetGamma(this.h, (C.float)(gamma))
}

func (this *QPictureIO) Read() bool {
	_ret := C.QPictureIO_Read(this.h)
	return (bool)(_ret)
}

func (this *QPictureIO) Write() bool {
	_ret := C.QPictureIO_Write(this.h)
	return (bool)(_ret)
}

func QPictureIO_PictureFormat(fileName string) *QByteArray {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	_ret := C.QPictureIO_PictureFormat((*C.struct_miqt_string)(fileName_ms))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPictureIO_PictureFormatWithQIODevice(param1 *QIODevice) *QByteArray {
	_ret := C.QPictureIO_PictureFormatWithQIODevice(param1.cPointer())
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPictureIO_InputFormats() []QByteArray {
	var _ma *C.struct_miqt_array = C.QPictureIO_InputFormats()
	_ret := make([]QByteArray, int(_ma.len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QPictureIO_OutputFormats() []QByteArray {
	var _ma *C.struct_miqt_array = C.QPictureIO_OutputFormats()
	_ret := make([]QByteArray, int(_ma.len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

// Delete this object from C++ memory.
func (this *QPictureIO) Delete() {
	C.QPictureIO_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPictureIO) GoGC() {
	runtime.SetFinalizer(this, func(this *QPictureIO) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
