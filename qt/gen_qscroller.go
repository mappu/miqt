package qt

/*

#include "gen_qscroller.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScroller__State int

const (
	QScroller__Inactive  QScroller__State = 0
	QScroller__Pressed   QScroller__State = 1
	QScroller__Dragging  QScroller__State = 2
	QScroller__Scrolling QScroller__State = 3
)

type QScroller__ScrollerGestureType int

const (
	QScroller__TouchGesture             QScroller__ScrollerGestureType = 0
	QScroller__LeftMouseButtonGesture   QScroller__ScrollerGestureType = 1
	QScroller__RightMouseButtonGesture  QScroller__ScrollerGestureType = 2
	QScroller__MiddleMouseButtonGesture QScroller__ScrollerGestureType = 3
)

type QScroller__Input int

const (
	QScroller__InputPress   QScroller__Input = 1
	QScroller__InputMove    QScroller__Input = 2
	QScroller__InputRelease QScroller__Input = 3
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
	if h == nil {
		return nil
	}
	return &QScroller{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQScroller_U(h unsafe.Pointer) *QScroller {
	return newQScroller((*C.QScroller)(h))
}

func (this *QScroller) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QScroller_MetaObject(this.h)))
}

func (this *QScroller) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QScroller_Metacast(this.h, param1_Cstring)
}

func QScroller_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QScroller_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QScroller_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QScroller_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QScroller_HasScroller(target *QObject) bool {
	return (bool)(C.QScroller_HasScroller(target.cPointer()))
}

func QScroller_Scroller(target *QObject) *QScroller {
	return newQScroller_U(unsafe.Pointer(C.QScroller_Scroller(target.cPointer())))
}

func QScroller_ScrollerWithTarget(target *QObject) *QScroller {
	return newQScroller_U(unsafe.Pointer(C.QScroller_ScrollerWithTarget(target.cPointer())))
}

func QScroller_GrabGesture(target *QObject) GestureType {
	return (GestureType)(C.QScroller_GrabGesture(target.cPointer()))
}

func QScroller_GrabbedGesture(target *QObject) GestureType {
	return (GestureType)(C.QScroller_GrabbedGesture(target.cPointer()))
}

func QScroller_UngrabGesture(target *QObject) {
	C.QScroller_UngrabGesture(target.cPointer())
}

func QScroller_ActiveScrollers() []*QScroller {
	var _ma *C.struct_miqt_array = C.QScroller_ActiveScrollers()
	_ret := make([]*QScroller, int(_ma.len))
	_outCast := (*[0xffff]*C.QScroller)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQScroller_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QScroller) Target() *QObject {
	return newQObject_U(unsafe.Pointer(C.QScroller_Target(this.h)))
}

func (this *QScroller) State() QScroller__State {
	return (QScroller__State)(C.QScroller_State(this.h))
}

func (this *QScroller) HandleInput(input QScroller__Input, position *QPointF) bool {
	return (bool)(C.QScroller_HandleInput(this.h, (C.int)(input), position.cPointer()))
}

func (this *QScroller) Stop() {
	C.QScroller_Stop(this.h)
}

func (this *QScroller) Velocity() *QPointF {
	_ret := C.QScroller_Velocity(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScroller) FinalPosition() *QPointF {
	_ret := C.QScroller_FinalPosition(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScroller) PixelPerMeter() *QPointF {
	_ret := C.QScroller_PixelPerMeter(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScroller) ScrollerProperties() *QScrollerProperties {
	_ret := C.QScroller_ScrollerProperties(this.h)
	_goptr := newQScrollerProperties(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScroller) SetSnapPositionsX(positions []float64) {
	// For the C ABI, malloc a C array of raw pointers
	positions_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(positions))))
	defer C.free(unsafe.Pointer(positions_CArray))
	for i := range positions {
		positions_CArray[i] = (C.double)(positions[i])
	}
	positions_ma := &C.struct_miqt_array{len: C.size_t(len(positions)), data: unsafe.Pointer(positions_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(positions_ma))
	C.QScroller_SetSnapPositionsX(this.h, positions_ma)
}

func (this *QScroller) SetSnapPositionsX2(first float64, interval float64) {
	C.QScroller_SetSnapPositionsX2(this.h, (C.double)(first), (C.double)(interval))
}

func (this *QScroller) SetSnapPositionsY(positions []float64) {
	// For the C ABI, malloc a C array of raw pointers
	positions_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(positions))))
	defer C.free(unsafe.Pointer(positions_CArray))
	for i := range positions {
		positions_CArray[i] = (C.double)(positions[i])
	}
	positions_ma := &C.struct_miqt_array{len: C.size_t(len(positions)), data: unsafe.Pointer(positions_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(positions_ma))
	C.QScroller_SetSnapPositionsY(this.h, positions_ma)
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

func (this *QScroller) StateChanged(newstate QScroller__State) {
	C.QScroller_StateChanged(this.h, (C.int)(newstate))
}
func (this *QScroller) OnStateChanged(slot func(newstate QScroller__State)) {
	C.QScroller_connect_StateChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QScroller_StateChanged
func miqt_exec_callback_QScroller_StateChanged(cb *C.void, newstate C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(newstate QScroller__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QScroller__State)(newstate)

	gofunc(slotval1)
}

func (this *QScroller) ScrollerPropertiesChanged(param1 *QScrollerProperties) {
	C.QScroller_ScrollerPropertiesChanged(this.h, param1.cPointer())
}
func (this *QScroller) OnScrollerPropertiesChanged(slot func(param1 *QScrollerProperties)) {
	C.QScroller_connect_ScrollerPropertiesChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QScroller_ScrollerPropertiesChanged
func miqt_exec_callback_QScroller_ScrollerPropertiesChanged(cb *C.void, param1 *C.QScrollerProperties) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 *QScrollerProperties))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScrollerProperties_U(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func QScroller_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QScroller_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QScroller_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QScroller_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QScroller_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QScroller_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QScroller_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QScroller_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QScroller_GrabGesture2(target *QObject, gestureType QScroller__ScrollerGestureType) GestureType {
	return (GestureType)(C.QScroller_GrabGesture2(target.cPointer(), (C.int)(gestureType)))
}

func (this *QScroller) HandleInput3(input QScroller__Input, position *QPointF, timestamp int64) bool {
	return (bool)(C.QScroller_HandleInput3(this.h, (C.int)(input), position.cPointer(), (C.longlong)(timestamp)))
}
