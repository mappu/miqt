package qt

/*

#include "gen_qpicture.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPicture struct {
	h          *C.QPicture
	isSubclass bool
	*QPaintDevice
}

func (this *QPicture) cPointer() *C.QPicture {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPicture) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPicture constructs the type using only CGO pointers.
func newQPicture(h *C.QPicture, h_QPaintDevice *C.QPaintDevice) *QPicture {
	if h == nil {
		return nil
	}
	return &QPicture{h: h,
		QPaintDevice: newQPaintDevice(h_QPaintDevice)}
}

// UnsafeNewQPicture constructs the type using only unsafe pointers.
func UnsafeNewQPicture(h unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QPicture {
	if h == nil {
		return nil
	}

	return &QPicture{h: (*C.QPicture)(h),
		QPaintDevice: UnsafeNewQPaintDevice(h_QPaintDevice)}
}

// NewQPicture constructs a new QPicture object.
func NewQPicture() *QPicture {
	var outptr_QPicture *C.QPicture = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPicture_new(&outptr_QPicture, &outptr_QPaintDevice)
	ret := newQPicture(outptr_QPicture, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQPicture2 constructs a new QPicture object.
func NewQPicture2(param1 *QPicture) *QPicture {
	var outptr_QPicture *C.QPicture = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPicture_new2(param1.cPointer(), &outptr_QPicture, &outptr_QPaintDevice)
	ret := newQPicture(outptr_QPicture, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQPicture3 constructs a new QPicture object.
func NewQPicture3(formatVersion int) *QPicture {
	var outptr_QPicture *C.QPicture = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPicture_new3((C.int)(formatVersion), &outptr_QPicture, &outptr_QPaintDevice)
	ret := newQPicture(outptr_QPicture, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QPicture) IsNull() bool {
	return (bool)(C.QPicture_IsNull(this.h))
}

func (this *QPicture) DevType() int {
	return (int)(C.QPicture_DevType(this.h))
}

func (this *QPicture) Size() uint {
	return (uint)(C.QPicture_Size(this.h))
}

func (this *QPicture) Data() string {
	_ret := C.QPicture_Data(this.h)
	return C.GoString(_ret)
}

func (this *QPicture) SetData(data string, size uint) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QPicture_SetData(this.h, data_Cstring, (C.uint)(size))
}

func (this *QPicture) Play(p *QPainter) bool {
	return (bool)(C.QPicture_Play(this.h, p.cPointer()))
}

func (this *QPicture) Load(dev *QIODevice) bool {
	return (bool)(C.QPicture_Load(this.h, dev.cPointer()))
}

func (this *QPicture) LoadWithFileName(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QPicture_LoadWithFileName(this.h, fileName_ms))
}

func (this *QPicture) Save(dev *QIODevice) bool {
	return (bool)(C.QPicture_Save(this.h, dev.cPointer()))
}

func (this *QPicture) SaveWithFileName(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QPicture_SaveWithFileName(this.h, fileName_ms))
}

func (this *QPicture) BoundingRect() *QRect {
	_goptr := newQRect(C.QPicture_BoundingRect(this.h))
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
	return (bool)(C.QPicture_IsDetached(this.h))
}

func QPicture_PictureFormat(fileName string) string {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	_ret := C.QPicture_PictureFormat(fileName_ms)
	return C.GoString(_ret)
}

func QPicture_InputFormats() [][]byte {
	var _ma C.struct_miqt_array = C.QPicture_InputFormats()
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QPicture_OutputFormats() [][]byte {
	var _ma C.struct_miqt_array = C.QPicture_OutputFormats()
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QPicture_InputFormatList() []string {
	var _ma C.struct_miqt_array = C.QPicture_InputFormatList()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QPicture_OutputFormatList() []string {
	var _ma C.struct_miqt_array = C.QPicture_OutputFormatList()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QPicture) PaintEngine() *QPaintEngine {
	return newQPaintEngine(C.QPicture_PaintEngine(this.h))
}

func (this *QPicture) Load2(dev *QIODevice, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPicture_Load2(this.h, dev.cPointer(), format_Cstring))
}

func (this *QPicture) Load22(fileName string, format string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPicture_Load22(this.h, fileName_ms, format_Cstring))
}

func (this *QPicture) Save2(dev *QIODevice, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPicture_Save2(this.h, dev.cPointer(), format_Cstring))
}

func (this *QPicture) Save22(fileName string, format string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPicture_Save22(this.h, fileName_ms, format_Cstring))
}

func (this *QPicture) callVirtualBase_DevType() int {

	return (int)(C.QPicture_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QPicture) OnDevType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPicture_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPicture_DevType
func miqt_exec_callback_QPicture_DevType(self *C.QPicture, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPicture{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPicture) callVirtualBase_SetData(data string, size uint) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	C.QPicture_virtualbase_SetData(unsafe.Pointer(this.h), data_Cstring, (C.uint)(size))

}
func (this *QPicture) OnSetData(slot func(super func(data string, size uint), data string, size uint)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPicture_override_virtual_SetData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPicture_SetData
func miqt_exec_callback_QPicture_SetData(self *C.QPicture, cb C.intptr_t, data *C.const_char, size C.uint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, size uint), data string, size uint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (uint)(size)

	gofunc((&QPicture{h: self}).callVirtualBase_SetData, slotval1, slotval2)

}

func (this *QPicture) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QPicture_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QPicture) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPicture_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPicture_PaintEngine
func miqt_exec_callback_QPicture_PaintEngine(self *C.QPicture, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPicture{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QPicture) callVirtualBase_Metric(m QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPicture_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(m)))

}
func (this *QPicture) OnMetric(slot func(super func(m QPaintDevice__PaintDeviceMetric) int, m QPaintDevice__PaintDeviceMetric) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPicture_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPicture_Metric
func miqt_exec_callback_QPicture_Metric(self *C.QPicture, cb C.intptr_t, m C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(m QPaintDevice__PaintDeviceMetric) int, m QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(m)

	virtualReturn := gofunc((&QPicture{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPicture) callVirtualBase_InitPainter(painter *QPainter) {

	C.QPicture_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QPicture) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPicture_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPicture_InitPainter
func miqt_exec_callback_QPicture_InitPainter(self *C.QPicture, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QPicture{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPicture) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QPicture_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QPicture) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPicture_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPicture_Redirected
func miqt_exec_callback_QPicture_Redirected(self *C.QPicture, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QPicture{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QPicture) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QPicture_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QPicture) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPicture_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPicture_SharedPainter
func miqt_exec_callback_QPicture_SharedPainter(self *C.QPicture, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPicture{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QPicture) Delete() {
	C.QPicture_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QPictureIO
	isSubclass bool
}

func (this *QPictureIO) cPointer() *C.QPictureIO {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPictureIO) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPictureIO constructs the type using only CGO pointers.
func newQPictureIO(h *C.QPictureIO) *QPictureIO {
	if h == nil {
		return nil
	}
	return &QPictureIO{h: h}
}

// UnsafeNewQPictureIO constructs the type using only unsafe pointers.
func UnsafeNewQPictureIO(h unsafe.Pointer) *QPictureIO {
	if h == nil {
		return nil
	}

	return &QPictureIO{h: (*C.QPictureIO)(h)}
}

// NewQPictureIO constructs a new QPictureIO object.
func NewQPictureIO() *QPictureIO {
	var outptr_QPictureIO *C.QPictureIO = nil

	C.QPictureIO_new(&outptr_QPictureIO)
	ret := newQPictureIO(outptr_QPictureIO)
	ret.isSubclass = true
	return ret
}

// NewQPictureIO2 constructs a new QPictureIO object.
func NewQPictureIO2(ioDevice *QIODevice, format string) *QPictureIO {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	var outptr_QPictureIO *C.QPictureIO = nil

	C.QPictureIO_new2(ioDevice.cPointer(), format_Cstring, &outptr_QPictureIO)
	ret := newQPictureIO(outptr_QPictureIO)
	ret.isSubclass = true
	return ret
}

// NewQPictureIO3 constructs a new QPictureIO object.
func NewQPictureIO3(fileName string, format string) *QPictureIO {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	var outptr_QPictureIO *C.QPictureIO = nil

	C.QPictureIO_new3(fileName_ms, format_Cstring, &outptr_QPictureIO)
	ret := newQPictureIO(outptr_QPictureIO)
	ret.isSubclass = true
	return ret
}

func (this *QPictureIO) Picture() *QPicture {
	return newQPicture(C.QPictureIO_Picture(this.h), nil)
}

func (this *QPictureIO) Status() int {
	return (int)(C.QPictureIO_Status(this.h))
}

func (this *QPictureIO) Format() string {
	_ret := C.QPictureIO_Format(this.h)
	return C.GoString(_ret)
}

func (this *QPictureIO) IoDevice() *QIODevice {
	return newQIODevice(C.QPictureIO_IoDevice(this.h), nil)
}

func (this *QPictureIO) FileName() string {
	var _ms C.struct_miqt_string = C.QPictureIO_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPictureIO) Quality() int {
	return (int)(C.QPictureIO_Quality(this.h))
}

func (this *QPictureIO) Description() string {
	var _ms C.struct_miqt_string = C.QPictureIO_Description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPictureIO) Parameters() string {
	_ret := C.QPictureIO_Parameters(this.h)
	return C.GoString(_ret)
}

func (this *QPictureIO) Gamma() float32 {
	return (float32)(C.QPictureIO_Gamma(this.h))
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
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QPictureIO_SetFileName(this.h, fileName_ms)
}

func (this *QPictureIO) SetQuality(quality int) {
	C.QPictureIO_SetQuality(this.h, (C.int)(quality))
}

func (this *QPictureIO) SetDescription(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QPictureIO_SetDescription(this.h, description_ms)
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
	return (bool)(C.QPictureIO_Read(this.h))
}

func (this *QPictureIO) Write() bool {
	return (bool)(C.QPictureIO_Write(this.h))
}

func QPictureIO_PictureFormat(fileName string) []byte {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _bytearray C.struct_miqt_string = C.QPictureIO_PictureFormat(fileName_ms)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QPictureIO_PictureFormatWithQIODevice(param1 *QIODevice) []byte {
	var _bytearray C.struct_miqt_string = C.QPictureIO_PictureFormatWithQIODevice(param1.cPointer())
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QPictureIO_InputFormats() [][]byte {
	var _ma C.struct_miqt_array = C.QPictureIO_InputFormats()
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QPictureIO_OutputFormats() [][]byte {
	var _ma C.struct_miqt_array = C.QPictureIO_OutputFormats()
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QPictureIO) Delete() {
	C.QPictureIO_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPictureIO) GoGC() {
	runtime.SetFinalizer(this, func(this *QPictureIO) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
