package qt

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
	QImageIOHandler__TransformedByDefault QImageIOHandler__ImageOption = 19
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

func (this *QImageIOHandler) Name() []byte {
	var _bytearray C.struct_miqt_string = C.QImageIOHandler_name(this.h)
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

func (this *QImageIOHandler) callVirtualBase_Name() []byte {

	var _bytearray C.struct_miqt_string = C.QImageIOHandler_virtualbase_name(unsafe.Pointer(this.h))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}
func (this *QImageIOHandler) OnName(slot func(super func() []byte) []byte) {
	ok := C.QImageIOHandler_override_virtual_name(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOHandler_name
func miqt_exec_callback_QImageIOHandler_name(self *C.QImageIOHandler, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []byte) []byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QImageIOHandler{h: self}).callVirtualBase_Name)
	virtualReturn_alias := C.struct_miqt_string{}
	if len(virtualReturn) > 0 {
		virtualReturn_alias.data = (*C.char)(unsafe.Pointer(&virtualReturn[0]))
	} else {
		virtualReturn_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	virtualReturn_alias.len = C.size_t(len(virtualReturn))

	return virtualReturn_alias

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

// NewQImageIOPlugin constructs a new QImageIOPlugin object.
func NewQImageIOPlugin() *QImageIOPlugin {

	return newQImageIOPlugin(C.QImageIOPlugin_new())
}

// NewQImageIOPlugin2 constructs a new QImageIOPlugin object.
func NewQImageIOPlugin2(parent *QObject) *QImageIOPlugin {

	return newQImageIOPlugin(C.QImageIOPlugin_new2(parent.cPointer()))
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

func QImageIOPlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QImageIOPlugin_trUtf8(s_Cstring)
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

func QImageIOPlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QImageIOPlugin_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QImageIOPlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QImageIOPlugin_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QImageIOPlugin) OnCapabilities(slot func(device *QIODevice, format []byte) QImageIOPlugin__Capability) {
	ok := C.QImageIOPlugin_override_virtual_capabilities(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOPlugin_capabilities
func miqt_exec_callback_QImageIOPlugin_capabilities(self *C.QImageIOPlugin, cb C.intptr_t, device *C.QIODevice, format C.struct_miqt_string) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(device *QIODevice, format []byte) QImageIOPlugin__Capability)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQIODevice(device)

	var format_bytearray C.struct_miqt_string = format
	format_ret := C.GoBytes(unsafe.Pointer(format_bytearray.data), C.int(int64(format_bytearray.len)))
	C.free(unsafe.Pointer(format_bytearray.data))
	slotval2 := format_ret

	virtualReturn := gofunc(slotval1, slotval2)

	return (C.int)(virtualReturn)

}
func (this *QImageIOPlugin) OnCreate(slot func(device *QIODevice, format []byte) *QImageIOHandler) {
	ok := C.QImageIOPlugin_override_virtual_create(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOPlugin_create
func miqt_exec_callback_QImageIOPlugin_create(self *C.QImageIOPlugin, cb C.intptr_t, device *C.QIODevice, format C.struct_miqt_string) *C.QImageIOHandler {
	gofunc, ok := cgo.Handle(cb).Value().(func(device *QIODevice, format []byte) *QImageIOHandler)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQIODevice(device)

	var format_bytearray C.struct_miqt_string = format
	format_ret := C.GoBytes(unsafe.Pointer(format_bytearray.data), C.int(int64(format_bytearray.len)))
	C.free(unsafe.Pointer(format_bytearray.data))
	slotval2 := format_ret

	virtualReturn := gofunc(slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QImageIOPlugin) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QImageIOPlugin_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QImageIOPlugin) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QImageIOPlugin_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOPlugin_event
func miqt_exec_callback_QImageIOPlugin_event(self *C.QImageIOPlugin, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QImageIOPlugin{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QImageIOPlugin) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QImageIOPlugin_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QImageIOPlugin) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QImageIOPlugin_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOPlugin_eventFilter
func miqt_exec_callback_QImageIOPlugin_eventFilter(self *C.QImageIOPlugin, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QImageIOPlugin{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QImageIOPlugin) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QImageIOPlugin_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QImageIOPlugin) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QImageIOPlugin_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOPlugin_timerEvent
func miqt_exec_callback_QImageIOPlugin_timerEvent(self *C.QImageIOPlugin, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QImageIOPlugin{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QImageIOPlugin) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QImageIOPlugin_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QImageIOPlugin) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QImageIOPlugin_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOPlugin_childEvent
func miqt_exec_callback_QImageIOPlugin_childEvent(self *C.QImageIOPlugin, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QImageIOPlugin{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QImageIOPlugin) callVirtualBase_CustomEvent(event *QEvent) {

	C.QImageIOPlugin_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QImageIOPlugin) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QImageIOPlugin_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOPlugin_customEvent
func miqt_exec_callback_QImageIOPlugin_customEvent(self *C.QImageIOPlugin, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QImageIOPlugin{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QImageIOPlugin) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QImageIOPlugin_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QImageIOPlugin) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QImageIOPlugin_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOPlugin_connectNotify
func miqt_exec_callback_QImageIOPlugin_connectNotify(self *C.QImageIOPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QImageIOPlugin{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QImageIOPlugin) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QImageIOPlugin_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QImageIOPlugin) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QImageIOPlugin_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImageIOPlugin_disconnectNotify
func miqt_exec_callback_QImageIOPlugin_disconnectNotify(self *C.QImageIOPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QImageIOPlugin{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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
