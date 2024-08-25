package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qsplashscreen.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSplashScreen struct {
	h *C.QSplashScreen
	*QWidget
}

func (this *QSplashScreen) cPointer() *C.QSplashScreen {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSplashScreen(h *C.QSplashScreen) *QSplashScreen {
	return &QSplashScreen{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQSplashScreen_U(h unsafe.Pointer) *QSplashScreen {
	return newQSplashScreen((*C.QSplashScreen)(h))
}

func (this *QSplashScreen) MetaObject() *QMetaObject {
	ret := C.QSplashScreen_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSplashScreen_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplashScreen_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSplashScreen_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplashScreen_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSplashScreen) SetPixmap(pixmap *QPixmap) {
	C.QSplashScreen_SetPixmap(this.h, pixmap.cPointer())
}

func (this *QSplashScreen) Pixmap() *QPixmap {
	ret := C.QSplashScreen_Pixmap(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSplashScreen) Finish(w *QWidget) {
	C.QSplashScreen_Finish(this.h, w.cPointer())
}

func (this *QSplashScreen) Repaint() {
	C.QSplashScreen_Repaint(this.h)
}

func (this *QSplashScreen) Message() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplashScreen_Message(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSplashScreen) ShowMessage(message string) {
	message_Cstring := C.CString(message)
	defer C.free(unsafe.Pointer(message_Cstring))
	C.QSplashScreen_ShowMessage(this.h, message_Cstring, C.ulong(len(message)))
}

func (this *QSplashScreen) ClearMessage() {
	C.QSplashScreen_ClearMessage(this.h)
}

func (this *QSplashScreen) MessageChanged(message string) {
	message_Cstring := C.CString(message)
	defer C.free(unsafe.Pointer(message_Cstring))
	C.QSplashScreen_MessageChanged(this.h, message_Cstring, C.ulong(len(message)))
}

func (this *QSplashScreen) OnMessageChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSplashScreen_connect_MessageChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QSplashScreen_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplashScreen_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSplashScreen_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplashScreen_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSplashScreen_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplashScreen_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSplashScreen_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplashScreen_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSplashScreen) ShowMessage2(message string, alignment int) {
	message_Cstring := C.CString(message)
	defer C.free(unsafe.Pointer(message_Cstring))
	C.QSplashScreen_ShowMessage2(this.h, message_Cstring, C.ulong(len(message)), (C.int)(alignment))
}

func (this *QSplashScreen) ShowMessage3(message string, alignment int, color *QColor) {
	message_Cstring := C.CString(message)
	defer C.free(unsafe.Pointer(message_Cstring))
	C.QSplashScreen_ShowMessage3(this.h, message_Cstring, C.ulong(len(message)), (C.int)(alignment), color.cPointer())
}

func (this *QSplashScreen) Delete() {
	C.QSplashScreen_Delete(this.h)
}
