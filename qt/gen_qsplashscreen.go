package qt

/*

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
	if h == nil {
		return nil
	}
	return &QSplashScreen{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQSplashScreen_U(h unsafe.Pointer) *QSplashScreen {
	return newQSplashScreen((*C.QSplashScreen)(h))
}

// NewQSplashScreen constructs a new QSplashScreen object.
func NewQSplashScreen() *QSplashScreen {
	ret := C.QSplashScreen_new()
	return newQSplashScreen(ret)
}

// NewQSplashScreen2 constructs a new QSplashScreen object.
func NewQSplashScreen2(screen *QScreen) *QSplashScreen {
	ret := C.QSplashScreen_new2(screen.cPointer())
	return newQSplashScreen(ret)
}

// NewQSplashScreen3 constructs a new QSplashScreen object.
func NewQSplashScreen3(parent *QWidget) *QSplashScreen {
	ret := C.QSplashScreen_new3(parent.cPointer())
	return newQSplashScreen(ret)
}

// NewQSplashScreen4 constructs a new QSplashScreen object.
func NewQSplashScreen4(pixmap *QPixmap) *QSplashScreen {
	ret := C.QSplashScreen_new4(pixmap.cPointer())
	return newQSplashScreen(ret)
}

// NewQSplashScreen5 constructs a new QSplashScreen object.
func NewQSplashScreen5(pixmap *QPixmap, f int) *QSplashScreen {
	ret := C.QSplashScreen_new5(pixmap.cPointer(), (C.int)(f))
	return newQSplashScreen(ret)
}

// NewQSplashScreen6 constructs a new QSplashScreen object.
func NewQSplashScreen6(screen *QScreen, pixmap *QPixmap) *QSplashScreen {
	ret := C.QSplashScreen_new6(screen.cPointer(), pixmap.cPointer())
	return newQSplashScreen(ret)
}

// NewQSplashScreen7 constructs a new QSplashScreen object.
func NewQSplashScreen7(screen *QScreen, pixmap *QPixmap, f int) *QSplashScreen {
	ret := C.QSplashScreen_new7(screen.cPointer(), pixmap.cPointer(), (C.int)(f))
	return newQSplashScreen(ret)
}

// NewQSplashScreen8 constructs a new QSplashScreen object.
func NewQSplashScreen8(parent *QWidget, pixmap *QPixmap) *QSplashScreen {
	ret := C.QSplashScreen_new8(parent.cPointer(), pixmap.cPointer())
	return newQSplashScreen(ret)
}

// NewQSplashScreen9 constructs a new QSplashScreen object.
func NewQSplashScreen9(parent *QWidget, pixmap *QPixmap, f int) *QSplashScreen {
	ret := C.QSplashScreen_new9(parent.cPointer(), pixmap.cPointer(), (C.int)(f))
	return newQSplashScreen(ret)
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
	C.QSplashScreen_ShowMessage(this.h, message_Cstring, C.size_t(len(message)))
}

func (this *QSplashScreen) ClearMessage() {
	C.QSplashScreen_ClearMessage(this.h)
}

func (this *QSplashScreen) MessageChanged(message string) {
	message_Cstring := C.CString(message)
	defer C.free(unsafe.Pointer(message_Cstring))
	C.QSplashScreen_MessageChanged(this.h, message_Cstring, C.size_t(len(message)))
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
	C.QSplashScreen_ShowMessage2(this.h, message_Cstring, C.size_t(len(message)), (C.int)(alignment))
}

func (this *QSplashScreen) ShowMessage3(message string, alignment int, color *QColor) {
	message_Cstring := C.CString(message)
	defer C.free(unsafe.Pointer(message_Cstring))
	C.QSplashScreen_ShowMessage3(this.h, message_Cstring, C.size_t(len(message)), (C.int)(alignment), color.cPointer())
}

func (this *QSplashScreen) Delete() {
	C.QSplashScreen_Delete(this.h)
}
