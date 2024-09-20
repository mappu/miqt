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
	return newQIODevice_U(unsafe.Pointer(C.QImageIOHandler_Device(this.h)))
}

func (this *QImageIOHandler) SetFormat(format *QByteArray) {
	C.QImageIOHandler_SetFormat(this.h, format.cPointer())
}

func (this *QImageIOHandler) SetFormatWithFormat(format *QByteArray) {
	C.QImageIOHandler_SetFormatWithFormat(this.h, format.cPointer())
}

func (this *QImageIOHandler) Format() *QByteArray {
	_ret := C.QImageIOHandler_Format(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageIOHandler) Name() *QByteArray {
	_ret := C.QImageIOHandler_Name(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageIOHandler) CanRead() bool {
	return (bool)(C.QImageIOHandler_CanRead(this.h))
}

func (this *QImageIOHandler) Read(image *QImage) bool {
	return (bool)(C.QImageIOHandler_Read(this.h, image.cPointer()))
}

func (this *QImageIOHandler) Write(image *QImage) bool {
	return (bool)(C.QImageIOHandler_Write(this.h, image.cPointer()))
}

func (this *QImageIOHandler) Option(option QImageIOHandler__ImageOption) *QVariant {
	_ret := C.QImageIOHandler_Option(this.h, (C.int)(option))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageIOHandler) SetOption(option QImageIOHandler__ImageOption, value *QVariant) {
	C.QImageIOHandler_SetOption(this.h, (C.int)(option), value.cPointer())
}

func (this *QImageIOHandler) SupportsOption(option QImageIOHandler__ImageOption) bool {
	return (bool)(C.QImageIOHandler_SupportsOption(this.h, (C.int)(option)))
}

func (this *QImageIOHandler) JumpToNextImage() bool {
	return (bool)(C.QImageIOHandler_JumpToNextImage(this.h))
}

func (this *QImageIOHandler) JumpToImage(imageNumber int) bool {
	return (bool)(C.QImageIOHandler_JumpToImage(this.h, (C.int)(imageNumber)))
}

func (this *QImageIOHandler) LoopCount() int {
	return (int)(C.QImageIOHandler_LoopCount(this.h))
}

func (this *QImageIOHandler) ImageCount() int {
	return (int)(C.QImageIOHandler_ImageCount(this.h))
}

func (this *QImageIOHandler) NextImageDelay() int {
	return (int)(C.QImageIOHandler_NextImageDelay(this.h))
}

func (this *QImageIOHandler) CurrentImageNumber() int {
	return (int)(C.QImageIOHandler_CurrentImageNumber(this.h))
}

func (this *QImageIOHandler) CurrentImageRect() *QRect {
	_ret := C.QImageIOHandler_CurrentImageRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QImageIOHandler) Delete() {
	C.QImageIOHandler_Delete(this.h)
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
	return newQMetaObject_U(unsafe.Pointer(C.QImageIOPlugin_MetaObject(this.h)))
}

func QImageIOPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QImageIOPlugin_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QImageIOPlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QImageIOPlugin_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QImageIOPlugin) Capabilities(device *QIODevice, format *QByteArray) QImageIOPlugin__Capability {
	return (QImageIOPlugin__Capability)(C.QImageIOPlugin_Capabilities(this.h, device.cPointer(), format.cPointer()))
}

func (this *QImageIOPlugin) Create(device *QIODevice) *QImageIOHandler {
	return newQImageIOHandler_U(unsafe.Pointer(C.QImageIOPlugin_Create(this.h, device.cPointer())))
}

func QImageIOPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QImageIOPlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QImageIOPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QImageIOPlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QImageIOPlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QImageIOPlugin_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QImageIOPlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QImageIOPlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QImageIOPlugin) Create2(device *QIODevice, format *QByteArray) *QImageIOHandler {
	return newQImageIOHandler_U(unsafe.Pointer(C.QImageIOPlugin_Create2(this.h, device.cPointer(), format.cPointer())))
}

// Delete this object from C++ memory.
func (this *QImageIOPlugin) Delete() {
	C.QImageIOPlugin_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QImageIOPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QImageIOPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
