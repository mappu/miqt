package charts6

/*

#include "gen_qabstractseries.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractSeries__SeriesType int

const (
	QAbstractSeries__SeriesTypeLine                 QAbstractSeries__SeriesType = 0
	QAbstractSeries__SeriesTypeArea                 QAbstractSeries__SeriesType = 1
	QAbstractSeries__SeriesTypeBar                  QAbstractSeries__SeriesType = 2
	QAbstractSeries__SeriesTypeStackedBar           QAbstractSeries__SeriesType = 3
	QAbstractSeries__SeriesTypePercentBar           QAbstractSeries__SeriesType = 4
	QAbstractSeries__SeriesTypePie                  QAbstractSeries__SeriesType = 5
	QAbstractSeries__SeriesTypeScatter              QAbstractSeries__SeriesType = 6
	QAbstractSeries__SeriesTypeSpline               QAbstractSeries__SeriesType = 7
	QAbstractSeries__SeriesTypeHorizontalBar        QAbstractSeries__SeriesType = 8
	QAbstractSeries__SeriesTypeHorizontalStackedBar QAbstractSeries__SeriesType = 9
	QAbstractSeries__SeriesTypeHorizontalPercentBar QAbstractSeries__SeriesType = 10
	QAbstractSeries__SeriesTypeBoxPlot              QAbstractSeries__SeriesType = 11
	QAbstractSeries__SeriesTypeCandlestick          QAbstractSeries__SeriesType = 12
)

type QAbstractSeries struct {
	h  *C.QAbstractSeries
	gc *[1]unsafe.Pointer
	*qt6.QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAbstractSeries) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAbstractSeries) cPointer() *C.QAbstractSeries {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractSeries) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractSeries constructs the type using only CGO pointers.
func newQAbstractSeries(h *C.QAbstractSeries) *QAbstractSeries {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAbstractSeries_virtbase(h, &outptr_QObject)

	return &QAbstractSeries{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQAbstractSeries constructs the type using only unsafe pointers.
func UnsafeNewQAbstractSeries(h unsafe.Pointer) *QAbstractSeries {
	return newQAbstractSeries((*C.QAbstractSeries)(h))
}

func (this *QAbstractSeries) MetaObject() *qt6.QMetaObject {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractSeries_metaObject(this.h)))
}

func (this *QAbstractSeries) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractSeries_metacast(this.h, param1_Cstring))
}

func QAbstractSeries_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSeries_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSeries) Type() QAbstractSeries__SeriesType {
	defer runtime.KeepAlive(this)
	return (QAbstractSeries__SeriesType)(C.QAbstractSeries_type(this.h))
}

func (this *QAbstractSeries) SetName(name string) {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QAbstractSeries_setName(this.h, name_ms)
}

func (this *QAbstractSeries) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAbstractSeries_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSeries) SetVisible() {
	defer runtime.KeepAlive(this)
	C.QAbstractSeries_setVisible(this.h)
}

func (this *QAbstractSeries) IsVisible() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAbstractSeries_isVisible(this.h))
}

func (this *QAbstractSeries) Opacity() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QAbstractSeries_opacity(this.h))
}

func (this *QAbstractSeries) SetOpacity(opacity float64) {
	defer runtime.KeepAlive(this)
	C.QAbstractSeries_setOpacity(this.h, (C.double)(opacity))
}

func (this *QAbstractSeries) SetUseOpenGL() {
	defer runtime.KeepAlive(this)
	C.QAbstractSeries_setUseOpenGL(this.h)
}

func (this *QAbstractSeries) UseOpenGL() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAbstractSeries_useOpenGL(this.h))
}

func (this *QAbstractSeries) Chart() *QChart {
	defer runtime.KeepAlive(this)
	return newQChart(C.QAbstractSeries_chart(this.h))
}

func (this *QAbstractSeries) AttachAxis(axis *QAbstractAxis) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(axis)
	return (bool)(C.QAbstractSeries_attachAxis(this.h, axis.cPointer()))
}

func (this *QAbstractSeries) DetachAxis(axis *QAbstractAxis) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(axis)
	return (bool)(C.QAbstractSeries_detachAxis(this.h, axis.cPointer()))
}

func (this *QAbstractSeries) AttachedAxes() []*QAbstractAxis {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QAbstractSeries_attachedAxes(this.h)
	_ret := make([]*QAbstractAxis, int(_ma.len))
	_outCast := unsafe.Slice((**C.QAbstractAxis)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractAxis(_outCast[i])
	}
	return _ret
}

func (this *QAbstractSeries) Show() {
	defer runtime.KeepAlive(this)
	C.QAbstractSeries_show(this.h)
}

func (this *QAbstractSeries) Hide() {
	defer runtime.KeepAlive(this)
	C.QAbstractSeries_hide(this.h)
}

func (this *QAbstractSeries) NameChanged() {
	defer runtime.KeepAlive(this)
	C.QAbstractSeries_nameChanged(this.h)
}
func (this *QAbstractSeries) OnNameChanged(slot func()) {
	C.QAbstractSeries_connect_nameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSeries_nameChanged
func miqt_exec_callback_QAbstractSeries_nameChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractSeries) VisibleChanged() {
	defer runtime.KeepAlive(this)
	C.QAbstractSeries_visibleChanged(this.h)
}
func (this *QAbstractSeries) OnVisibleChanged(slot func()) {
	C.QAbstractSeries_connect_visibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSeries_visibleChanged
func miqt_exec_callback_QAbstractSeries_visibleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractSeries) OpacityChanged() {
	defer runtime.KeepAlive(this)
	C.QAbstractSeries_opacityChanged(this.h)
}
func (this *QAbstractSeries) OnOpacityChanged(slot func()) {
	C.QAbstractSeries_connect_opacityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSeries_opacityChanged
func miqt_exec_callback_QAbstractSeries_opacityChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractSeries) UseOpenGLChanged() {
	defer runtime.KeepAlive(this)
	C.QAbstractSeries_useOpenGLChanged(this.h)
}
func (this *QAbstractSeries) OnUseOpenGLChanged(slot func()) {
	C.QAbstractSeries_connect_useOpenGLChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSeries_useOpenGLChanged
func miqt_exec_callback_QAbstractSeries_useOpenGLChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QAbstractSeries_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSeries_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractSeries_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSeries_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSeries) SetVisibleWithVisible(visible bool) {
	defer runtime.KeepAlive(this)
	C.QAbstractSeries_setVisibleWithVisible(this.h, (C.bool)(visible))
}

func (this *QAbstractSeries) SetUseOpenGLWithEnable(enable bool) {
	defer runtime.KeepAlive(this)
	C.QAbstractSeries_setUseOpenGLWithEnable(this.h, (C.bool)(enable))
}

// Delete this object from C++ memory.
func (this *QAbstractSeries) Delete() {
	C.QAbstractSeries_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAbstractSeries) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAbstractSeries_delete((*C.QAbstractSeries)(gc[0]))
	})
	this.miqtSetGC(gc)
}
