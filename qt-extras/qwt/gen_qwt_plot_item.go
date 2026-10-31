package qwt

/*

#include "gen_qwt_plot_item.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotItem__RttiValues int

const (
	QwtPlotItem__Rtti_PlotItem          QwtPlotItem__RttiValues = 0
	QwtPlotItem__Rtti_PlotGrid          QwtPlotItem__RttiValues = 1
	QwtPlotItem__Rtti_PlotScale         QwtPlotItem__RttiValues = 2
	QwtPlotItem__Rtti_PlotLegend        QwtPlotItem__RttiValues = 3
	QwtPlotItem__Rtti_PlotMarker        QwtPlotItem__RttiValues = 4
	QwtPlotItem__Rtti_PlotCurve         QwtPlotItem__RttiValues = 5
	QwtPlotItem__Rtti_PlotSpectroCurve  QwtPlotItem__RttiValues = 6
	QwtPlotItem__Rtti_PlotIntervalCurve QwtPlotItem__RttiValues = 7
	QwtPlotItem__Rtti_PlotHistogram     QwtPlotItem__RttiValues = 8
	QwtPlotItem__Rtti_PlotSpectrogram   QwtPlotItem__RttiValues = 9
	QwtPlotItem__Rtti_PlotSVG           QwtPlotItem__RttiValues = 10
	QwtPlotItem__Rtti_PlotTradingCurve  QwtPlotItem__RttiValues = 11
	QwtPlotItem__Rtti_PlotBarChart      QwtPlotItem__RttiValues = 12
	QwtPlotItem__Rtti_PlotMultiBarChart QwtPlotItem__RttiValues = 13
	QwtPlotItem__Rtti_PlotShape         QwtPlotItem__RttiValues = 14
	QwtPlotItem__Rtti_PlotTextLabel     QwtPlotItem__RttiValues = 15
	QwtPlotItem__Rtti_PlotZone          QwtPlotItem__RttiValues = 16
	QwtPlotItem__Rtti_PlotUserItem      QwtPlotItem__RttiValues = 1000
)

type QwtPlotItem__ItemAttribute int

const (
	QwtPlotItem__Legend    QwtPlotItem__ItemAttribute = 1
	QwtPlotItem__AutoScale QwtPlotItem__ItemAttribute = 2
	QwtPlotItem__Margins   QwtPlotItem__ItemAttribute = 4
)

type QwtPlotItem__ItemInterest int

const (
	QwtPlotItem__ScaleInterest  QwtPlotItem__ItemInterest = 1
	QwtPlotItem__LegendInterest QwtPlotItem__ItemInterest = 2
)

type QwtPlotItem__RenderHint int

const (
	QwtPlotItem__RenderAntialiased QwtPlotItem__RenderHint = 1
)

type QwtPlotItem struct {
	h  *C.QwtPlotItem
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotItem) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QwtPlotItem) cPointer() *C.QwtPlotItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotItem constructs the type using only CGO pointers.
func newQwtPlotItem(h *C.QwtPlotItem) *QwtPlotItem {
	if h == nil {
		return nil
	}

	return &QwtPlotItem{h: h}
}

// UnsafeNewQwtPlotItem constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotItem(h unsafe.Pointer) *QwtPlotItem {
	return newQwtPlotItem((*C.QwtPlotItem)(h))
}

func (this *QwtPlotItem) Attach(plot *QwtPlot) {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_attach(this.h, plot.cPointer())
}

func (this *QwtPlotItem) Detach() {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_detach(this.h)
}

func (this *QwtPlotItem) Plot() *QwtPlot {
	defer runtime.KeepAlive(this)
	return newQwtPlot(C.QwtPlotItem_plot(this.h))
}

func (this *QwtPlotItem) SetTitle(title string) {
	defer runtime.KeepAlive(this)
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QwtPlotItem_setTitle(this.h, title_ms)
}

func (this *QwtPlotItem) SetTitleWithTitle(title *QwtText) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(title)
	C.QwtPlotItem_setTitleWithTitle(this.h, title.cPointer())
}

func (this *QwtPlotItem) Title() *QwtText {
	defer runtime.KeepAlive(this)
	_ret := newQwtText(C.QwtPlotItem_title(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QwtPlotItem) Rtti() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotItem_rtti(this.h))
}

func (this *QwtPlotItem) SetItemAttribute(param1 QwtPlotItem__ItemAttribute) {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_setItemAttribute(this.h, (C.int)(param1))
}

func (this *QwtPlotItem) TestItemAttribute(param1 QwtPlotItem__ItemAttribute) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPlotItem_testItemAttribute(this.h, (C.int)(param1)))
}

func (this *QwtPlotItem) SetItemInterest(param1 QwtPlotItem__ItemInterest) {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_setItemInterest(this.h, (C.int)(param1))
}

func (this *QwtPlotItem) TestItemInterest(param1 QwtPlotItem__ItemInterest) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPlotItem_testItemInterest(this.h, (C.int)(param1)))
}

func (this *QwtPlotItem) SetRenderHint(param1 QwtPlotItem__RenderHint) {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_setRenderHint(this.h, (C.int)(param1))
}

func (this *QwtPlotItem) TestRenderHint(param1 QwtPlotItem__RenderHint) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPlotItem_testRenderHint(this.h, (C.int)(param1)))
}

func (this *QwtPlotItem) SetRenderThreadCount(numThreads uint) {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_setRenderThreadCount(this.h, (C.uint)(numThreads))
}

func (this *QwtPlotItem) RenderThreadCount() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QwtPlotItem_renderThreadCount(this.h))
}

func (this *QwtPlotItem) SetLegendIconSize(legendIconSize qt.QSize) {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_setLegendIconSize(this.h, libmiqt.ValueCast[C.struct_miqt_qsize](legendIconSize))
}

func (this *QwtPlotItem) LegendIconSize() qt.QSize {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QSize](C.QwtPlotItem_legendIconSize(this.h))
}

func (this *QwtPlotItem) Z() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtPlotItem_z(this.h))
}

func (this *QwtPlotItem) SetZ(z float64) {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_setZ(this.h, (C.double)(z))
}

func (this *QwtPlotItem) Show() {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_show(this.h)
}

func (this *QwtPlotItem) Hide() {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_hide(this.h)
}

func (this *QwtPlotItem) SetVisible(visible bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_setVisible(this.h, (C.bool)(visible))
}

func (this *QwtPlotItem) IsVisible() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPlotItem_isVisible(this.h))
}

func (this *QwtPlotItem) SetAxes(xAxis int, yAxis int) {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_setAxes(this.h, (C.int)(xAxis), (C.int)(yAxis))
}

func (this *QwtPlotItem) SetXAxis(axis int) {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_setXAxis(this.h, (C.int)(axis))
}

func (this *QwtPlotItem) XAxis() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotItem_xAxis(this.h))
}

func (this *QwtPlotItem) SetYAxis(axis int) {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_setYAxis(this.h, (C.int)(axis))
}

func (this *QwtPlotItem) YAxis() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotItem_yAxis(this.h))
}

func (this *QwtPlotItem) ItemChanged() {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_itemChanged(this.h)
}

func (this *QwtPlotItem) LegendChanged() {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_legendChanged(this.h)
}

func (this *QwtPlotItem) BoundingRect() qt.QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QRectF](C.QwtPlotItem_boundingRect(this.h))
}

func (this *QwtPlotItem) UpdateScaleDiv(param1 *QwtScaleDiv, param2 *QwtScaleDiv) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	defer runtime.KeepAlive(param2)
	C.QwtPlotItem_updateScaleDiv(this.h, param1.cPointer(), param2.cPointer())
}

func (this *QwtPlotItem) UpdateLegend(param1 *QwtPlotItem, param2 []QwtLegendData) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	defer runtime.KeepAlive(param2)
	param2_CArray_ptr := (**C.QwtLegendData)(C.malloc(C.size_t(8 * len(param2))))
	defer C.free(unsafe.Pointer(param2_CArray_ptr))
	param2_CArray := unsafe.Slice(param2_CArray_ptr, len(param2))
	for i := range param2 {
		param2_CArray[i] = param2[i].cPointer()
	}
	param2_ma := C.struct_miqt_array{len: C.size_t(len(param2)), data: unsafe.Pointer(param2_CArray_ptr)}
	C.QwtPlotItem_updateLegend(this.h, param1.cPointer(), param2_ma)
}

func (this *QwtPlotItem) LegendData() []QwtLegendData {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QwtPlotItem_legendData(this.h)
	_ret := make([]QwtLegendData, int(_ma.len))
	_outCast := unsafe.Slice((**C.QwtLegendData)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQwtLegendData(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QwtPlotItem) LegendIcon(index int, param2 qt.QSizeF) *QwtGraphic {
	defer runtime.KeepAlive(this)
	_goptr := newQwtGraphic(C.QwtPlotItem_legendIcon(this.h, (C.int)(index), libmiqt.ValueCast[C.struct_miqt_qsizef](param2)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotItem) SetItemAttribute2(param1 QwtPlotItem__ItemAttribute, on bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_setItemAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotItem) SetItemInterest2(param1 QwtPlotItem__ItemInterest, on bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_setItemInterest2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotItem) SetRenderHint2(param1 QwtPlotItem__RenderHint, on bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotItem_setRenderHint2(this.h, (C.int)(param1), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QwtPlotItem) Delete() {
	C.QwtPlotItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotItem) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotItem_delete((*C.QwtPlotItem)(gc[0]))
	})
	this.miqtSetGC(gc)
}
