package qt6

/*

#include "gen_qimageiohandler.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QImageIOHandler__ImageOption int

const (
	QImageIOHandler__Size                 QImageIOHandler__ImageOption = 0
	QImageIOHandler__ClipRect             QImageIOHandler__ImageOption = 1
	QImageIOHandler__Description          QImageIOHandler__ImageOption = 2
	QImageIOHandler__ScaledClipRect       QImageIOHandler__ImageOption = 3
	QImageIOHandler__ScaledSize           QImageIOHandler__ImageOption = 4
	QImageIOHandler__CompressionRatio     QImageIOHandler__ImageOption = 5
	QImageIOHandler__Gamma                QImageIOHandler__ImageOption = 6
	QImageIOHandler__Quality              QImageIOHandler__ImageOption = 7
	QImageIOHandler__Name                 QImageIOHandler__ImageOption = 8
	QImageIOHandler__SubType              QImageIOHandler__ImageOption = 9
	QImageIOHandler__IncrementalReading   QImageIOHandler__ImageOption = 10
	QImageIOHandler__Endianness           QImageIOHandler__ImageOption = 11
	QImageIOHandler__Animation            QImageIOHandler__ImageOption = 12
	QImageIOHandler__BackgroundColor      QImageIOHandler__ImageOption = 13
	QImageIOHandler__ImageFormat          QImageIOHandler__ImageOption = 14
	QImageIOHandler__SupportedSubTypes    QImageIOHandler__ImageOption = 15
	QImageIOHandler__OptimizedWrite       QImageIOHandler__ImageOption = 16
	QImageIOHandler__ProgressiveScanWrite QImageIOHandler__ImageOption = 17
	QImageIOHandler__ImageTransformation  QImageIOHandler__ImageOption = 18
)

type QImageIOHandler__Transformation int

const (
	QImageIOHandler__TransformationNone              QImageIOHandler__Transformation = 0
	QImageIOHandler__TransformationMirror            QImageIOHandler__Transformation = 1
	QImageIOHandler__TransformationFlip              QImageIOHandler__Transformation = 2
	QImageIOHandler__TransformationRotate180         QImageIOHandler__Transformation = 3
	QImageIOHandler__TransformationRotate90          QImageIOHandler__Transformation = 4
	QImageIOHandler__TransformationMirrorAndRotate90 QImageIOHandler__Transformation = 5
	QImageIOHandler__TransformationFlipAndRotate90   QImageIOHandler__Transformation = 6
	QImageIOHandler__TransformationRotate270         QImageIOHandler__Transformation = 7
)

type QImageIOPlugin__Capability int

const (
	QImageIOPlugin__CanRead            QImageIOPlugin__Capability = 1
	QImageIOPlugin__CanWrite           QImageIOPlugin__Capability = 2
	QImageIOPlugin__CanReadIncremental QImageIOPlugin__Capability = 4
)

type QImageIOHandler struct {
	h *C.QImageIOHandler
}

func (this *QImageIOHandler) cPointer() *C.QImageIOHandler {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QImageIOHandler) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQImageIOHandler constructs the type using only CGO pointers.
func newQImageIOHandler(h *C.QImageIOHandler) *QImageIOHandler {
	if h == nil {
		return nil
	}

	return &QImageIOHandler{h: h}
}

// UnsafeNewQImageIOHandler constructs the type using only unsafe pointers.
func UnsafeNewQImageIOHandler(h unsafe.Pointer) *QImageIOHandler {
	return newQImageIOHandler((*C.QImageIOHandler)(h))
}

// NewQImageIOHandler constructs a new QImageIOHandler object.
func NewQImageIOHandler() *QImageIOHandler {

	return newQImageIOHandler(C.QImageIOHandler_new())
}

func (this *QImageIOHandler) SetDevice(device *QIODevice) {
	C.QImageIOHandler_setDevice(this.h, device.cPointer())
}

func (this *QImageIOHandler) Device() *QIODevice {
	return newQIODevice(C.QImageIOHandler_device(this.h))
}

func (this *QImageIOHandler) SetFormat(format []byte) {
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))
	C.QImageIOHandler_setFormat(this.h, format_alias)
}

func (this *QImageIOHandler) SetFormatWithFormat(format []byte) {
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))
	C.QImageIOHandler_setFormatWithFormat(this.h, format_alias)
}

func (this *QImageIOHandler) Format() []byte {
	var _bytearray C.struct_miqt_string = C.QImageIOHandler_format(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QImageIOHandler) CanRead() bool {
	return (bool)(C.QImageIOHandler_canRead(this.h))
}

func (this *QImageIOHandler) Read(image *QImage) bool {
	return (bool)(C.QImageIOHandler_read(this.h, image.cPointer()))
}

func (this *QImageIOHandler) Write(image *QImage) bool {
	return (bool)(C.QImageIOHandler_write(this.h, image.cPointer()))
}

func (this *QImageIOHandler) Option(option QImageIOHandler__ImageOption) *QVariant {
	_goptr := newQVariant(C.QImageIOHandler_option(this.h, (C.int)(option)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageIOHandler) SetOption(option QImageIOHandler__ImageOption, value *QVariant) {
	C.QImageIOHandler_setOption(this.h, (C.int)(option), value.cPointer())
}

func (this *QImageIOHandler) SupportsOption(option QImageIOHandler__ImageOption) bool {
	return (bool)(C.QImageIOHandler_supportsOption(this.h, (C.int)(option)))
}

func (this *QImageIOHandler) JumpToNextImage() bool {
	return (bool)(C.QImageIOHandler_jumpToNextImage(this.h))
}

func (this *QImageIOHandler) JumpToImage(imageNumber int) bool {
	return (bool)(C.QImageIOHandler_jumpToImage(this.h, (C.int)(imageNumber)))
}

func (this *QImageIOHandler) LoopCount() int {
	return (int)(C.QImageIOHandler_loopCount(this.h))
}

func (this *QImageIOHandler) ImageCount() int {
	return (int)(C.QImageIOHandler_imageCount(this.h))
}

func (this *QImageIOHandler) NextImageDelay() int {
	return (int)(C.QImageIOHandler_nextImageDelay(this.h))
}

func (this *QImageIOHandler) CurrentImageNumber() int {
	return (int)(C.QImageIOHandler_currentImageNumber(this.h))
}

func (this *QImageIOHandler) CurrentImageRect() *QRect {
	_goptr := newQRect(C.QImageIOHandler_currentImageRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QImageIOHandler_AllocateImage(size QSize, format QImage__Format, image *QImage) bool {
	return (bool)(C.QImageIOHandler_allocateImage(size.cPointer(), (C.int)(format), image.cPointer()))
}
func (this *QImageIOHandler) OnCanRead(slot func() bool) {
	ok := C.QImageIOHandler_override_virtual_canRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOHandler_canRead
func miqt_exec_callback_QImageIOHandler_canRead(self *C.QImageIOHandler, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QImageIOHandler) OnRead(slot func(image *QImage) bool) {
	ok := C.QImageIOHandler_override_virtual_read(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOHandler_read
func miqt_exec_callback_QImageIOHandler_read(self *C.QImageIOHandler, cb C.intptr_t, image *C.QImage) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(image *QImage) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQImage(image)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QImageIOHandler) callVirtualBase_Write(image *QImage) bool {

	return (bool)(C.QImageIOHandler_virtualbase_write(unsafe.Pointer(this.h), image.cPointer()))

}
func (this *QImageIOHandler) OnWrite(slot func(super func(image *QImage) bool, image *QImage) bool) {
	ok := C.QImageIOHandler_override_virtual_write(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOHandler_write
func miqt_exec_callback_QImageIOHandler_write(self *C.QImageIOHandler, cb C.intptr_t, image *C.QImage) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(image *QImage) bool, image *QImage) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQImage(image)

	virtualReturn := gofunc((&QImageIOHandler{h: self}).callVirtualBase_Write, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QImageIOHandler) callVirtualBase_Option(option QImageIOHandler__ImageOption) *QVariant {

	_goptr := newQVariant(C.QImageIOHandler_virtualbase_option(unsafe.Pointer(this.h), (C.int)(option)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QImageIOHandler) OnOption(slot func(super func(option QImageIOHandler__ImageOption) *QVariant, option QImageIOHandler__ImageOption) *QVariant) {
	ok := C.QImageIOHandler_override_virtual_option(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOHandler_option
func miqt_exec_callback_QImageIOHandler_option(self *C.QImageIOHandler, cb C.intptr_t, option C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QImageIOHandler__ImageOption) *QVariant, option QImageIOHandler__ImageOption) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QImageIOHandler__ImageOption)(option)

	virtualReturn := gofunc((&QImageIOHandler{h: self}).callVirtualBase_Option, slotval1)

	return virtualReturn.cPointer()

}

func (this *QImageIOHandler) callVirtualBase_SetOption(option QImageIOHandler__ImageOption, value *QVariant) {

	C.QImageIOHandler_virtualbase_setOption(unsafe.Pointer(this.h), (C.int)(option), value.cPointer())

}
func (this *QImageIOHandler) OnSetOption(slot func(super func(option QImageIOHandler__ImageOption, value *QVariant), option QImageIOHandler__ImageOption, value *QVariant)) {
	ok := C.QImageIOHandler_override_virtual_setOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOHandler_setOption
func miqt_exec_callback_QImageIOHandler_setOption(self *C.QImageIOHandler, cb C.intptr_t, option C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QImageIOHandler__ImageOption, value *QVariant), option QImageIOHandler__ImageOption, value *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QImageIOHandler__ImageOption)(option)

	slotval2 := newQVariant(value)

	gofunc((&QImageIOHandler{h: self}).callVirtualBase_SetOption, slotval1, slotval2)

}

func (this *QImageIOHandler) callVirtualBase_SupportsOption(option QImageIOHandler__ImageOption) bool {

	return (bool)(C.QImageIOHandler_virtualbase_supportsOption(unsafe.Pointer(this.h), (C.int)(option)))

}
func (this *QImageIOHandler) OnSupportsOption(slot func(super func(option QImageIOHandler__ImageOption) bool, option QImageIOHandler__ImageOption) bool) {
	ok := C.QImageIOHandler_override_virtual_supportsOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOHandler_supportsOption
func miqt_exec_callback_QImageIOHandler_supportsOption(self *C.QImageIOHandler, cb C.intptr_t, option C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option QImageIOHandler__ImageOption) bool, option QImageIOHandler__ImageOption) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QImageIOHandler__ImageOption)(option)

	virtualReturn := gofunc((&QImageIOHandler{h: self}).callVirtualBase_SupportsOption, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QImageIOHandler) callVirtualBase_JumpToNextImage() bool {

	return (bool)(C.QImageIOHandler_virtualbase_jumpToNextImage(unsafe.Pointer(this.h)))

}
func (this *QImageIOHandler) OnJumpToNextImage(slot func(super func() bool) bool) {
	ok := C.QImageIOHandler_override_virtual_jumpToNextImage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOHandler_jumpToNextImage
func miqt_exec_callback_QImageIOHandler_jumpToNextImage(self *C.QImageIOHandler, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QImageIOHandler{h: self}).callVirtualBase_JumpToNextImage)

	return (C.bool)(virtualReturn)

}

func (this *QImageIOHandler) callVirtualBase_JumpToImage(imageNumber int) bool {

	return (bool)(C.QImageIOHandler_virtualbase_jumpToImage(unsafe.Pointer(this.h), (C.int)(imageNumber)))

}
func (this *QImageIOHandler) OnJumpToImage(slot func(super func(imageNumber int) bool, imageNumber int) bool) {
	ok := C.QImageIOHandler_override_virtual_jumpToImage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOHandler_jumpToImage
func miqt_exec_callback_QImageIOHandler_jumpToImage(self *C.QImageIOHandler, cb C.intptr_t, imageNumber C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(imageNumber int) bool, imageNumber int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(imageNumber)

	virtualReturn := gofunc((&QImageIOHandler{h: self}).callVirtualBase_JumpToImage, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QImageIOHandler) callVirtualBase_LoopCount() int {

	return (int)(C.QImageIOHandler_virtualbase_loopCount(unsafe.Pointer(this.h)))

}
func (this *QImageIOHandler) OnLoopCount(slot func(super func() int) int) {
	ok := C.QImageIOHandler_override_virtual_loopCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOHandler_loopCount
func miqt_exec_callback_QImageIOHandler_loopCount(self *C.QImageIOHandler, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QImageIOHandler{h: self}).callVirtualBase_LoopCount)

	return (C.int)(virtualReturn)

}

func (this *QImageIOHandler) callVirtualBase_ImageCount() int {

	return (int)(C.QImageIOHandler_virtualbase_imageCount(unsafe.Pointer(this.h)))

}
func (this *QImageIOHandler) OnImageCount(slot func(super func() int) int) {
	ok := C.QImageIOHandler_override_virtual_imageCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOHandler_imageCount
func miqt_exec_callback_QImageIOHandler_imageCount(self *C.QImageIOHandler, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QImageIOHandler{h: self}).callVirtualBase_ImageCount)

	return (C.int)(virtualReturn)

}

func (this *QImageIOHandler) callVirtualBase_NextImageDelay() int {

	return (int)(C.QImageIOHandler_virtualbase_nextImageDelay(unsafe.Pointer(this.h)))

}
func (this *QImageIOHandler) OnNextImageDelay(slot func(super func() int) int) {
	ok := C.QImageIOHandler_override_virtual_nextImageDelay(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOHandler_nextImageDelay
func miqt_exec_callback_QImageIOHandler_nextImageDelay(self *C.QImageIOHandler, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QImageIOHandler{h: self}).callVirtualBase_NextImageDelay)

	return (C.int)(virtualReturn)

}

func (this *QImageIOHandler) callVirtualBase_CurrentImageNumber() int {

	return (int)(C.QImageIOHandler_virtualbase_currentImageNumber(unsafe.Pointer(this.h)))

}
func (this *QImageIOHandler) OnCurrentImageNumber(slot func(super func() int) int) {
	ok := C.QImageIOHandler_override_virtual_currentImageNumber(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOHandler_currentImageNumber
func miqt_exec_callback_QImageIOHandler_currentImageNumber(self *C.QImageIOHandler, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QImageIOHandler{h: self}).callVirtualBase_CurrentImageNumber)

	return (C.int)(virtualReturn)

}

func (this *QImageIOHandler) callVirtualBase_CurrentImageRect() *QRect {

	_goptr := newQRect(C.QImageIOHandler_virtualbase_currentImageRect(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QImageIOHandler) OnCurrentImageRect(slot func(super func() *QRect) *QRect) {
	ok := C.QImageIOHandler_override_virtual_currentImageRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOHandler_currentImageRect
func miqt_exec_callback_QImageIOHandler_currentImageRect(self *C.QImageIOHandler, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QImageIOHandler{h: self}).callVirtualBase_CurrentImageRect)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QImageIOHandler) Delete() {
	C.QImageIOHandler_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QImageIOHandler) GoGC() {
	runtime.SetFinalizer(this, func(this *QImageIOHandler) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QImageIOPlugin struct {
	h *C.QImageIOPlugin
	*QObject
}

func (this *QImageIOPlugin) cPointer() *C.QImageIOPlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QImageIOPlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQImageIOPlugin constructs the type using only CGO pointers.
func newQImageIOPlugin(h *C.QImageIOPlugin) *QImageIOPlugin {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QImageIOPlugin_virtbase(h, &outptr_QObject)

	return &QImageIOPlugin{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQImageIOPlugin constructs the type using only unsafe pointers.
func UnsafeNewQImageIOPlugin(h unsafe.Pointer) *QImageIOPlugin {
	return newQImageIOPlugin((*C.QImageIOPlugin)(h))
}

func (this *QImageIOPlugin) MetaObject() *QMetaObject {
	return newQMetaObject(C.QImageIOPlugin_metaObject(this.h))
}

func (this *QImageIOPlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QImageIOPlugin_metacast(this.h, param1_Cstring))
}

func QImageIOPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QImageIOPlugin_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageIOPlugin) Capabilities(device *QIODevice, format []byte) QImageIOPlugin__Capability {
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))
	return (QImageIOPlugin__Capability)(C.QImageIOPlugin_capabilities(this.h, device.cPointer(), format_alias))
}

func (this *QImageIOPlugin) Create(device *QIODevice, format []byte) *QImageIOHandler {
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))
	return newQImageIOHandler(C.QImageIOPlugin_create(this.h, device.cPointer(), format_alias))
}

func QImageIOPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QImageIOPlugin_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QImageIOPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QImageIOPlugin_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QImageIOPlugin) Delete() {
	C.QImageIOPlugin_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QImageIOPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QImageIOPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
