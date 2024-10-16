package qt

/*

#include "gen_qsplashscreen.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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

func (this *QSplashScreen) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSplashScreen(h *C.QSplashScreen) *QSplashScreen {
	if h == nil {
		return nil
	}
	return &QSplashScreen{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQSplashScreen(h unsafe.Pointer) *QSplashScreen {
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
func NewQSplashScreen5(pixmap *QPixmap, f WindowType) *QSplashScreen {
	ret := C.QSplashScreen_new5(pixmap.cPointer(), (C.int)(f))
	return newQSplashScreen(ret)
}

// NewQSplashScreen6 constructs a new QSplashScreen object.
func NewQSplashScreen6(screen *QScreen, pixmap *QPixmap) *QSplashScreen {
	ret := C.QSplashScreen_new6(screen.cPointer(), pixmap.cPointer())
	return newQSplashScreen(ret)
}

// NewQSplashScreen7 constructs a new QSplashScreen object.
func NewQSplashScreen7(screen *QScreen, pixmap *QPixmap, f WindowType) *QSplashScreen {
	ret := C.QSplashScreen_new7(screen.cPointer(), pixmap.cPointer(), (C.int)(f))
	return newQSplashScreen(ret)
}

// NewQSplashScreen8 constructs a new QSplashScreen object.
func NewQSplashScreen8(parent *QWidget, pixmap *QPixmap) *QSplashScreen {
	ret := C.QSplashScreen_new8(parent.cPointer(), pixmap.cPointer())
	return newQSplashScreen(ret)
}

// NewQSplashScreen9 constructs a new QSplashScreen object.
func NewQSplashScreen9(parent *QWidget, pixmap *QPixmap, f WindowType) *QSplashScreen {
	ret := C.QSplashScreen_new9(parent.cPointer(), pixmap.cPointer(), (C.int)(f))
	return newQSplashScreen(ret)
}

func (this *QSplashScreen) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QSplashScreen_MetaObject(this.h)))
}

func (this *QSplashScreen) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QSplashScreen_Metacast(this.h, param1_Cstring)
}

func QSplashScreen_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSplashScreen_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSplashScreen_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSplashScreen_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSplashScreen) SetPixmap(pixmap *QPixmap) {
	C.QSplashScreen_SetPixmap(this.h, pixmap.cPointer())
}

func (this *QSplashScreen) Pixmap() *QPixmap {
	_ret := C.QSplashScreen_Pixmap(this.h)
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSplashScreen) Finish(w *QWidget) {
	C.QSplashScreen_Finish(this.h, w.cPointer())
}

func (this *QSplashScreen) Repaint() {
	C.QSplashScreen_Repaint(this.h)
}

func (this *QSplashScreen) Message() string {
	var _ms *C.struct_miqt_string = C.QSplashScreen_Message(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSplashScreen) ShowMessage(message string) {
	message_ms := libmiqt.Strdupg(message)
	defer C.free(message_ms)
	C.QSplashScreen_ShowMessage(this.h, (*C.struct_miqt_string)(message_ms))
}

func (this *QSplashScreen) ClearMessage() {
	C.QSplashScreen_ClearMessage(this.h)
}

func (this *QSplashScreen) MessageChanged(message string) {
	message_ms := libmiqt.Strdupg(message)
	defer C.free(message_ms)
	C.QSplashScreen_MessageChanged(this.h, (*C.struct_miqt_string)(message_ms))
}
func (this *QSplashScreen) OnMessageChanged(slot func(message string)) {
	C.QSplashScreen_connect_MessageChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_MessageChanged
func miqt_exec_callback_QSplashScreen_MessageChanged(cb C.intptr_t, message *C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(message string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var message_ms *C.struct_miqt_string = message
	message_ret := C.GoStringN(&message_ms.data, C.int(int64(message_ms.len)))
	C.free(unsafe.Pointer(message_ms))
	slotval1 := message_ret

	gofunc(slotval1)
}

func QSplashScreen_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSplashScreen_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSplashScreen_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSplashScreen_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSplashScreen_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSplashScreen_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSplashScreen_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSplashScreen_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSplashScreen) ShowMessage2(message string, alignment int) {
	message_ms := libmiqt.Strdupg(message)
	defer C.free(message_ms)
	C.QSplashScreen_ShowMessage2(this.h, (*C.struct_miqt_string)(message_ms), (C.int)(alignment))
}

func (this *QSplashScreen) ShowMessage3(message string, alignment int, color *QColor) {
	message_ms := libmiqt.Strdupg(message)
	defer C.free(message_ms)
	C.QSplashScreen_ShowMessage3(this.h, (*C.struct_miqt_string)(message_ms), (C.int)(alignment), color.cPointer())
}

// Delete this object from C++ memory.
func (this *QSplashScreen) Delete() {
	C.QSplashScreen_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSplashScreen) GoGC() {
	runtime.SetFinalizer(this, func(this *QSplashScreen) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
