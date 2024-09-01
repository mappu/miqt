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
	ret := C.QPicture_IsNull(this.h)
	return (bool)(ret)
}

func (this *QPicture) DevType() int {
	ret := C.QPicture_DevType(this.h)
	return (int)(ret)
}

func (this *QPicture) Size() uint {
	ret := C.QPicture_Size(this.h)
	return (uint)(ret)
}

func (this *QPicture) Data() unsafe.Pointer {
	ret := C.QPicture_Data(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QPicture) SetData(data string, size uint) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QPicture_SetData(this.h, data_Cstring, (C.uint)(size))
}

func (this *QPicture) Play(p *QPainter) bool {
	ret := C.QPicture_Play(this.h, p.cPointer())
	return (bool)(ret)
}

func (this *QPicture) Load(dev *QIODevice) bool {
	ret := C.QPicture_Load(this.h, dev.cPointer())
	return (bool)(ret)
}

func (this *QPicture) LoadWithFileName(fileName string) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QPicture_LoadWithFileName(this.h, fileName_Cstring, C.ulong(len(fileName)))
	return (bool)(ret)
}

func (this *QPicture) Save(dev *QIODevice) bool {
	ret := C.QPicture_Save(this.h, dev.cPointer())
	return (bool)(ret)
}

func (this *QPicture) SaveWithFileName(fileName string) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QPicture_SaveWithFileName(this.h, fileName_Cstring, C.ulong(len(fileName)))
	return (bool)(ret)
}

func (this *QPicture) BoundingRect() *QRect {
	ret := C.QPicture_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
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
	ret := C.QPicture_IsDetached(this.h)
	return (bool)(ret)
}

func QPicture_PictureFormat(fileName string) unsafe.Pointer {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QPicture_PictureFormat(fileName_Cstring, C.ulong(len(fileName)))
	return (unsafe.Pointer)(ret)
}

func QPicture_InputFormats() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QPicture_InputFormats(&_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPicture_OutputFormats() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QPicture_OutputFormats(&_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPicture_InputFormatList() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QPicture_InputFormatList(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPicture_OutputFormatList() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QPicture_OutputFormatList(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPicture) PaintEngine() *QPaintEngine {
	ret := C.QPicture_PaintEngine(this.h)
	return newQPaintEngine_U(unsafe.Pointer(ret))
}

func (this *QPicture) Load2(dev *QIODevice, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QPicture_Load2(this.h, dev.cPointer(), format_Cstring)
	return (bool)(ret)
}

func (this *QPicture) Load22(fileName string, format string) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QPicture_Load22(this.h, fileName_Cstring, C.ulong(len(fileName)), format_Cstring)
	return (bool)(ret)
}

func (this *QPicture) Save2(dev *QIODevice, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QPicture_Save2(this.h, dev.cPointer(), format_Cstring)
	return (bool)(ret)
}

func (this *QPicture) Save22(fileName string, format string) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QPicture_Save22(this.h, fileName_Cstring, C.ulong(len(fileName)), format_Cstring)
	return (bool)(ret)
}

func (this *QPicture) Delete() {
	C.QPicture_Delete(this.h)
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
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QPictureIO_new3(fileName_Cstring, C.ulong(len(fileName)), format_Cstring)
	return newQPictureIO(ret)
}

func (this *QPictureIO) Picture() *QPicture {
	ret := C.QPictureIO_Picture(this.h)
	return newQPicture_U(unsafe.Pointer(ret))
}

func (this *QPictureIO) Status() int {
	ret := C.QPictureIO_Status(this.h)
	return (int)(ret)
}

func (this *QPictureIO) Format() unsafe.Pointer {
	ret := C.QPictureIO_Format(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QPictureIO) IoDevice() *QIODevice {
	ret := C.QPictureIO_IoDevice(this.h)
	return newQIODevice_U(unsafe.Pointer(ret))
}

func (this *QPictureIO) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPictureIO_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPictureIO) Quality() int {
	ret := C.QPictureIO_Quality(this.h)
	return (int)(ret)
}

func (this *QPictureIO) Description() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPictureIO_Description(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPictureIO) Parameters() unsafe.Pointer {
	ret := C.QPictureIO_Parameters(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QPictureIO) Gamma() float32 {
	ret := C.QPictureIO_Gamma(this.h)
	return (float32)(ret)
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
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	C.QPictureIO_SetFileName(this.h, fileName_Cstring, C.ulong(len(fileName)))
}

func (this *QPictureIO) SetQuality(quality int) {
	C.QPictureIO_SetQuality(this.h, (C.int)(quality))
}

func (this *QPictureIO) SetDescription(description string) {
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	C.QPictureIO_SetDescription(this.h, description_Cstring, C.ulong(len(description)))
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
	ret := C.QPictureIO_Read(this.h)
	return (bool)(ret)
}

func (this *QPictureIO) Write() bool {
	ret := C.QPictureIO_Write(this.h)
	return (bool)(ret)
}

func QPictureIO_PictureFormat(fileName string) *QByteArray {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QPictureIO_PictureFormat(fileName_Cstring, C.ulong(len(fileName)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPictureIO_PictureFormatWithQIODevice(param1 *QIODevice) *QByteArray {
	ret := C.QPictureIO_PictureFormatWithQIODevice(param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPictureIO_InputFormats() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QPictureIO_InputFormats(&_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPictureIO_OutputFormats() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QPictureIO_OutputFormats(&_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPictureIO) Delete() {
	C.QPictureIO_Delete(this.h)
}
