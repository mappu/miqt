package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qscroller.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScroller struct {
	h *C.QScroller
	*QObject
}

func (this *QScroller) cPointer() *C.QScroller {
	if this == nil {
		return nil
	}
	return this.h
}

func newQScroller(h *C.QScroller) *QScroller {
	return &QScroller{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQScroller_U(h unsafe.Pointer) *QScroller {
	return newQScroller((*C.QScroller)(h))
}

func (this *QScroller) MetaObject() *QMetaObject {
	ret := C.QScroller_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QScroller_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScroller_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QScroller_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScroller_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QScroller_HasScroller(target *QObject) bool {
	ret := C.QScroller_HasScroller(target.cPointer())
	return (bool)(ret)
}

func QScroller_Scroller(target *QObject) *QScroller {
	ret := C.QScroller_Scroller(target.cPointer())
	return newQScroller_U(unsafe.Pointer(ret))
}

func QScroller_ScrollerWithTarget(target *QObject) *QScroller {
	ret := C.QScroller_ScrollerWithTarget(target.cPointer())
	return newQScroller_U(unsafe.Pointer(ret))
}

func QScroller_GrabGesture(target *QObject) uintptr {
	ret := C.QScroller_GrabGesture(target.cPointer())
	return (uintptr)(ret)
}

func QScroller_GrabbedGesture(target *QObject) uintptr {
	ret := C.QScroller_GrabbedGesture(target.cPointer())
	return (uintptr)(ret)
}

func QScroller_UngrabGesture(target *QObject) {
	C.QScroller_UngrabGesture(target.cPointer())
}

func QScroller_ActiveScrollers() []*QScroller {
	var _out **C.QScroller = nil
	var _out_len C.size_t = 0
	C.QScroller_ActiveScrollers(&_out, &_out_len)
	ret := make([]*QScroller, int(_out_len))
	_outCast := (*[0xffff]*C.QScroller)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQScroller(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QScroller) Target() *QObject {
	ret := C.QScroller_Target(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QScroller) State() uintptr {
	ret := C.QScroller_State(this.h)
	return (uintptr)(ret)
}

func (this *QScroller) HandleInput(input uintptr, position *QPointF) bool {
	ret := C.QScroller_HandleInput(this.h, (C.uintptr_t)(input), position.cPointer())
	return (bool)(ret)
}

func (this *QScroller) Stop() {
	C.QScroller_Stop(this.h)
}

func (this *QScroller) Velocity() *QPointF {
	ret := C.QScroller_Velocity(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScroller) FinalPosition() *QPointF {
	ret := C.QScroller_FinalPosition(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScroller) PixelPerMeter() *QPointF {
	ret := C.QScroller_PixelPerMeter(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScroller) ScrollerProperties() *QScrollerProperties {
	ret := C.QScroller_ScrollerProperties(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQScrollerProperties(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QScrollerProperties) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScroller) SetSnapPositionsX(positions []float64) {
	// For the C ABI, malloc a C array of raw pointers
	positions_CArray := (*[0xffff]C.double)(C.malloc(C.ulong(8 * len(positions))))
	defer C.free(unsafe.Pointer(positions_CArray))
	for i := range positions {
		positions_CArray[i] = (C.double)(positions[i])
	}
	C.QScroller_SetSnapPositionsX(this.h, &positions_CArray[0], C.ulong(len(positions)))
}

func (this *QScroller) SetSnapPositionsX2(first float64, interval float64) {
	C.QScroller_SetSnapPositionsX2(this.h, (C.double)(first), (C.double)(interval))
}

func (this *QScroller) SetSnapPositionsY(positions []float64) {
	// For the C ABI, malloc a C array of raw pointers
	positions_CArray := (*[0xffff]C.double)(C.malloc(C.ulong(8 * len(positions))))
	defer C.free(unsafe.Pointer(positions_CArray))
	for i := range positions {
		positions_CArray[i] = (C.double)(positions[i])
	}
	C.QScroller_SetSnapPositionsY(this.h, &positions_CArray[0], C.ulong(len(positions)))
}

func (this *QScroller) SetSnapPositionsY2(first float64, interval float64) {
	C.QScroller_SetSnapPositionsY2(this.h, (C.double)(first), (C.double)(interval))
}

func (this *QScroller) SetScrollerProperties(prop *QScrollerProperties) {
	C.QScroller_SetScrollerProperties(this.h, prop.cPointer())
}

func (this *QScroller) ScrollTo(pos *QPointF) {
	C.QScroller_ScrollTo(this.h, pos.cPointer())
}

func (this *QScroller) ScrollTo2(pos *QPointF, scrollTime int) {
	C.QScroller_ScrollTo2(this.h, pos.cPointer(), (C.int)(scrollTime))
}

func (this *QScroller) EnsureVisible(rect *QRectF, xmargin float64, ymargin float64) {
	C.QScroller_EnsureVisible(this.h, rect.cPointer(), (C.double)(xmargin), (C.double)(ymargin))
}

func (this *QScroller) EnsureVisible2(rect *QRectF, xmargin float64, ymargin float64, scrollTime int) {
	C.QScroller_EnsureVisible2(this.h, rect.cPointer(), (C.double)(xmargin), (C.double)(ymargin), (C.int)(scrollTime))
}

func (this *QScroller) ResendPrepareEvent() {
	C.QScroller_ResendPrepareEvent(this.h)
}

func (this *QScroller) StateChanged(newstate uintptr) {
	C.QScroller_StateChanged(this.h, (C.uintptr_t)(newstate))
}

func (this *QScroller) OnStateChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QScroller_connect_StateChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QScroller) ScrollerPropertiesChanged(param1 *QScrollerProperties) {
	C.QScroller_ScrollerPropertiesChanged(this.h, param1.cPointer())
}

func (this *QScroller) OnScrollerPropertiesChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QScroller_connect_ScrollerPropertiesChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QScroller_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScroller_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QScroller_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScroller_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QScroller_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScroller_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QScroller_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScroller_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QScroller_GrabGesture2(target *QObject, gestureType uintptr) uintptr {
	ret := C.QScroller_GrabGesture2(target.cPointer(), (C.uintptr_t)(gestureType))
	return (uintptr)(ret)
}

func (this *QScroller) HandleInput3(input uintptr, position *QPointF, timestamp int64) bool {
	ret := C.QScroller_HandleInput3(this.h, (C.uintptr_t)(input), position.cPointer(), (C.longlong)(timestamp))
	return (bool)(ret)
}
