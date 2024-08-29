package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qimageiohandler.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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

func (this *QImageIOHandler) Option(option uintptr) *QVariant {
	ret := C.QImageIOHandler_Option(this.h, (C.uintptr_t)(option))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImageIOHandler) SetOption(option uintptr, value *QVariant) {
	C.QImageIOHandler_SetOption(this.h, (C.uintptr_t)(option), value.cPointer())
}

func (this *QImageIOHandler) SupportsOption(option uintptr) bool {
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
