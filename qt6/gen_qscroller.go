package qt6

/*

#include "gen_qscroller.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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
	h  *C.QScroller
	gc *[1]unsafe.Pointer
	*QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QScroller) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QObject.miqtSetGC(gc)
}

func (this *QScroller) cPointer() *C.QScroller {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScroller) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScroller constructs the type using only CGO pointers.
func newQScroller(h *C.QScroller) *QScroller {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QScroller_virtbase(h, &outptr_QObject)

	return &QScroller{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQScroller constructs the type using only unsafe pointers.
func UnsafeNewQScroller(h unsafe.Pointer) *QScroller {
	return newQScroller((*C.QScroller)(h))
}

func (this *QScroller) MetaObject() *QMetaObject {
	return newQMetaObject(C.QScroller_metaObject(this.h))
}

func (this *QScroller) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScroller_metacast(this.h, param1_Cstring))
}

func QScroller_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScroller_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScroller_HasScroller(target *QObject) bool {
	return (bool)(C.QScroller_hasScroller(target.cPointer()))
}

func QScroller_Scroller(target *QObject) *QScroller {
	return newQScroller(C.QScroller_scroller(target.cPointer()))
}

func QScroller_ScrollerWithTarget(target *QObject) *QScroller {
	return newQScroller(C.QScroller_scrollerWithTarget(target.cPointer()))
}

func QScroller_GrabGesture(target *QObject) GestureType {
	return (GestureType)(C.QScroller_grabGesture(target.cPointer()))
}

func QScroller_GrabbedGesture(target *QObject) GestureType {
	return (GestureType)(C.QScroller_grabbedGesture(target.cPointer()))
}

func QScroller_UngrabGesture(target *QObject) {
	C.QScroller_ungrabGesture(target.cPointer())
}

func QScroller_ActiveScrollers() []*QScroller {
	var _ma C.struct_miqt_array = C.QScroller_activeScrollers()
	_ret := make([]*QScroller, int(_ma.len))
	_outCast := unsafe.Slice((**C.QScroller)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQScroller(_outCast[i])
	}
	return _ret
}

func (this *QScroller) Target() *QObject {
	return newQObject(C.QScroller_target(this.h))
}

func (this *QScroller) State() QScroller__State {
	return (QScroller__State)(C.QScroller_state(this.h))
}

func (this *QScroller) HandleInput(input QScroller__Input, position QPointF) bool {
	return (bool)(C.QScroller_handleInput(this.h, (C.int)(input), libmiqt.ValueCast[C.struct_miqt_qpointf](position)))
}

func (this *QScroller) Stop() {
	C.QScroller_stop(this.h)
}

func (this *QScroller) Velocity() QPointF {
	return libmiqt.ValueCast[QPointF](C.QScroller_velocity(this.h))
}

func (this *QScroller) FinalPosition() QPointF {
	return libmiqt.ValueCast[QPointF](C.QScroller_finalPosition(this.h))
}

func (this *QScroller) PixelPerMeter() QPointF {
	return libmiqt.ValueCast[QPointF](C.QScroller_pixelPerMeter(this.h))
}

func (this *QScroller) ScrollerProperties() *QScrollerProperties {
	_goptr := newQScrollerProperties(C.QScroller_scrollerProperties(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScroller) SetSnapPositionsX(positions []float64) {
	positions_CArray_ptr := (*C.double)(C.malloc(C.size_t(8 * len(positions))))
	defer C.free(unsafe.Pointer(positions_CArray_ptr))
	positions_CArray := unsafe.Slice(positions_CArray_ptr, len(positions))
	for i := range positions {
		positions_CArray[i] = (C.double)(positions[i])
	}
	positions_ma := C.struct_miqt_array{len: C.size_t(len(positions)), data: unsafe.Pointer(positions_CArray_ptr)}
	C.QScroller_setSnapPositionsX(this.h, positions_ma)
}

func (this *QScroller) SetSnapPositionsX2(first float64, interval float64) {
	C.QScroller_setSnapPositionsX2(this.h, (C.double)(first), (C.double)(interval))
}

func (this *QScroller) SetSnapPositionsY(positions []float64) {
	positions_CArray_ptr := (*C.double)(C.malloc(C.size_t(8 * len(positions))))
	defer C.free(unsafe.Pointer(positions_CArray_ptr))
	positions_CArray := unsafe.Slice(positions_CArray_ptr, len(positions))
	for i := range positions {
		positions_CArray[i] = (C.double)(positions[i])
	}
	positions_ma := C.struct_miqt_array{len: C.size_t(len(positions)), data: unsafe.Pointer(positions_CArray_ptr)}
	C.QScroller_setSnapPositionsY(this.h, positions_ma)
}

func (this *QScroller) SetSnapPositionsY2(first float64, interval float64) {
	C.QScroller_setSnapPositionsY2(this.h, (C.double)(first), (C.double)(interval))
}

func (this *QScroller) SetScrollerProperties(prop *QScrollerProperties) {
	defer runtime.KeepAlive(prop)
	C.QScroller_setScrollerProperties(this.h, prop.cPointer())
}

func (this *QScroller) ScrollTo(pos QPointF) {
	C.QScroller_scrollTo(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](pos))
}

func (this *QScroller) ScrollTo2(pos QPointF, scrollTime int) {
	C.QScroller_scrollTo2(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](pos), (C.int)(scrollTime))
}

func (this *QScroller) EnsureVisible(rect QRectF, xmargin float64, ymargin float64) {
	C.QScroller_ensureVisible(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect), (C.double)(xmargin), (C.double)(ymargin))
}

func (this *QScroller) EnsureVisible2(rect QRectF, xmargin float64, ymargin float64, scrollTime int) {
	C.QScroller_ensureVisible2(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect), (C.double)(xmargin), (C.double)(ymargin), (C.int)(scrollTime))
}

func (this *QScroller) ResendPrepareEvent() {
	C.QScroller_resendPrepareEvent(this.h)
}

func (this *QScroller) StateChanged(newstate QScroller__State) {
	C.QScroller_stateChanged(this.h, (C.int)(newstate))
}
func (this *QScroller) OnStateChanged(slot func(newstate QScroller__State)) {
	C.QScroller_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScroller_stateChanged
func miqt_exec_callback_QScroller_stateChanged(cb C.intptr_t, newstate C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newstate QScroller__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QScroller__State)(newstate)

	gofunc(slotval1)
}

func (this *QScroller) ScrollerPropertiesChanged(param1 *QScrollerProperties) {
	defer runtime.KeepAlive(param1)
	C.QScroller_scrollerPropertiesChanged(this.h, param1.cPointer())
}
func (this *QScroller) OnScrollerPropertiesChanged(slot func(param1 *QScrollerProperties)) {
	C.QScroller_connect_scrollerPropertiesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScroller_scrollerPropertiesChanged
func miqt_exec_callback_QScroller_scrollerPropertiesChanged(cb C.intptr_t, param1 *C.QScrollerProperties) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QScrollerProperties))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScrollerProperties(param1)

	gofunc(slotval1)
}

func QScroller_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScroller_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScroller_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScroller_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScroller_GrabGesture2(target *QObject, gestureType QScroller__ScrollerGestureType) GestureType {
	return (GestureType)(C.QScroller_grabGesture2(target.cPointer(), (C.int)(gestureType)))
}

func (this *QScroller) HandleInput2(input QScroller__Input, position QPointF, timestamp int64) bool {
	return (bool)(C.QScroller_handleInput2(this.h, (C.int)(input), libmiqt.ValueCast[C.struct_miqt_qpointf](position), (C.longlong)(timestamp)))
}
