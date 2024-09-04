package qt

/*

#include "gen_qimageiohandler.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QImageIOHandler__ImageOption int

const (
	QImageIOHandler__ImageOption__Size                 QImageIOHandler__ImageOption = 0
	QImageIOHandler__ImageOption__ClipRect             QImageIOHandler__ImageOption = 1
	QImageIOHandler__ImageOption__Description          QImageIOHandler__ImageOption = 2
	QImageIOHandler__ImageOption__ScaledClipRect       QImageIOHandler__ImageOption = 3
	QImageIOHandler__ImageOption__ScaledSize           QImageIOHandler__ImageOption = 4
	QImageIOHandler__ImageOption__CompressionRatio     QImageIOHandler__ImageOption = 5
	QImageIOHandler__ImageOption__Gamma                QImageIOHandler__ImageOption = 6
	QImageIOHandler__ImageOption__Quality              QImageIOHandler__ImageOption = 7
	QImageIOHandler__ImageOption__Name                 QImageIOHandler__ImageOption = 8
	QImageIOHandler__ImageOption__SubType              QImageIOHandler__ImageOption = 9
	QImageIOHandler__ImageOption__IncrementalReading   QImageIOHandler__ImageOption = 10
	QImageIOHandler__ImageOption__Endianness           QImageIOHandler__ImageOption = 11
	QImageIOHandler__ImageOption__Animation            QImageIOHandler__ImageOption = 12
	QImageIOHandler__ImageOption__BackgroundColor      QImageIOHandler__ImageOption = 13
	QImageIOHandler__ImageOption__ImageFormat          QImageIOHandler__ImageOption = 14
	QImageIOHandler__ImageOption__SupportedSubTypes    QImageIOHandler__ImageOption = 15
	QImageIOHandler__ImageOption__OptimizedWrite       QImageIOHandler__ImageOption = 16
	QImageIOHandler__ImageOption__ProgressiveScanWrite QImageIOHandler__ImageOption = 17
	QImageIOHandler__ImageOption__ImageTransformation  QImageIOHandler__ImageOption = 18
	QImageIOHandler__ImageOption__TransformedByDefault QImageIOHandler__ImageOption = 19
)

type QImageIOHandler__Transformation int

const (
	QImageIOHandler__Transformation__TransformationNone              QImageIOHandler__Transformation = 0
	QImageIOHandler__Transformation__TransformationMirror            QImageIOHandler__Transformation = 1
	QImageIOHandler__Transformation__TransformationFlip              QImageIOHandler__Transformation = 2
	QImageIOHandler__Transformation__TransformationRotate180         QImageIOHandler__Transformation = 3
	QImageIOHandler__Transformation__TransformationRotate90          QImageIOHandler__Transformation = 4
	QImageIOHandler__Transformation__TransformationMirrorAndRotate90 QImageIOHandler__Transformation = 5
	QImageIOHandler__Transformation__TransformationFlipAndRotate90   QImageIOHandler__Transformation = 6
	QImageIOHandler__Transformation__TransformationRotate270         QImageIOHandler__Transformation = 7
)

type QImageIOPlugin__Capability int

const (
	QImageIOPlugin__Capability__CanRead            QImageIOPlugin__Capability = 1
	QImageIOPlugin__Capability__CanWrite           QImageIOPlugin__Capability = 2
	QImageIOPlugin__Capability__CanReadIncremental QImageIOPlugin__Capability = 4
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

func newQImageIOHandler(h *C.QImageIOHandler) *QImageIOHandler {
	if h == nil {
		return nil
	}
	return &QImageIOHandler{h: h}
}

func newQImageIOHandler_U(h unsafe.Pointer) *QImageIOHandler {
	return newQImageIOHandler((*C.QImageIOHandler)(h))
}

func (this *QImageIOHandler) SetDevice(device *QIODevice) {
	C.QImageIOHandler_SetDevice(this.h, device.cPointer())
}

func (this *QImageIOHandler) Device() *QIODevice {
	ret := C.QImageIOHandler_Device(this.h)
	return newQIODevice_U(unsafe.Pointer(ret))
}

func (this *QImageIOHandler) SetFormat(format *QByteArray) {
	C.QImageIOHandler_SetFormat(this.h, format.cPointer())
}

func (this *QImageIOHandler) SetFormatWithFormat(format *QByteArray) {
	C.QImageIOHandler_SetFormatWithFormat(this.h, format.cPointer())
}

func (this *QImageIOHandler) Format() *QByteArray {
	ret := C.QImageIOHandler_Format(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageIOHandler) Name() *QByteArray {
	ret := C.QImageIOHandler_Name(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageIOHandler) CanRead() bool {
	ret := C.QImageIOHandler_CanRead(this.h)
	return (bool)(ret)
}

func (this *QImageIOHandler) Read(image *QImage) bool {
	ret := C.QImageIOHandler_Read(this.h, image.cPointer())
	return (bool)(ret)
}

func (this *QImageIOHandler) Write(image *QImage) bool {
	ret := C.QImageIOHandler_Write(this.h, image.cPointer())
	return (bool)(ret)
}

func (this *QImageIOHandler) Option(option QImageIOHandler__ImageOption) *QVariant {
	ret := C.QImageIOHandler_Option(this.h, (C.uintptr_t)(option))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageIOHandler) SetOption(option QImageIOHandler__ImageOption, value *QVariant) {
	C.QImageIOHandler_SetOption(this.h, (C.uintptr_t)(option), value.cPointer())
}

func (this *QImageIOHandler) SupportsOption(option QImageIOHandler__ImageOption) bool {
	ret := C.QImageIOHandler_SupportsOption(this.h, (C.uintptr_t)(option))
	return (bool)(ret)
}

func (this *QImageIOHandler) JumpToNextImage() bool {
	ret := C.QImageIOHandler_JumpToNextImage(this.h)
	return (bool)(ret)
}

func (this *QImageIOHandler) JumpToImage(imageNumber int) bool {
	ret := C.QImageIOHandler_JumpToImage(this.h, (C.int)(imageNumber))
	return (bool)(ret)
}

func (this *QImageIOHandler) LoopCount() int {
	ret := C.QImageIOHandler_LoopCount(this.h)
	return (int)(ret)
}

func (this *QImageIOHandler) ImageCount() int {
	ret := C.QImageIOHandler_ImageCount(this.h)
	return (int)(ret)
}

func (this *QImageIOHandler) NextImageDelay() int {
	ret := C.QImageIOHandler_NextImageDelay(this.h)
	return (int)(ret)
}

func (this *QImageIOHandler) CurrentImageNumber() int {
	ret := C.QImageIOHandler_CurrentImageNumber(this.h)
	return (int)(ret)
}

func (this *QImageIOHandler) CurrentImageRect() *QRect {
	ret := C.QImageIOHandler_CurrentImageRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageIOHandler) Delete() {
	C.QImageIOHandler_Delete(this.h)
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

func newQImageIOPlugin(h *C.QImageIOPlugin) *QImageIOPlugin {
	if h == nil {
		return nil
	}
	return &QImageIOPlugin{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQImageIOPlugin_U(h unsafe.Pointer) *QImageIOPlugin {
	return newQImageIOPlugin((*C.QImageIOPlugin)(h))
}

func (this *QImageIOPlugin) MetaObject() *QMetaObject {
	ret := C.QImageIOPlugin_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QImageIOPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageIOPlugin_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageIOPlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageIOPlugin_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImageIOPlugin) Capabilities(device *QIODevice, format *QByteArray) int {
	ret := C.QImageIOPlugin_Capabilities(this.h, device.cPointer(), format.cPointer())
	return (int)(ret)
}

func (this *QImageIOPlugin) Create(device *QIODevice) *QImageIOHandler {
	ret := C.QImageIOPlugin_Create(this.h, device.cPointer())
	return newQImageIOHandler_U(unsafe.Pointer(ret))
}

func QImageIOPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageIOPlugin_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageIOPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageIOPlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageIOPlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageIOPlugin_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QImageIOPlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImageIOPlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImageIOPlugin) Create2(device *QIODevice, format *QByteArray) *QImageIOHandler {
	ret := C.QImageIOPlugin_Create2(this.h, device.cPointer(), format.cPointer())
	return newQImageIOHandler_U(unsafe.Pointer(ret))
}

func (this *QImageIOPlugin) Delete() {
	C.QImageIOPlugin_Delete(this.h)
}
