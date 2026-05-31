package qwt

/*

#include "gen_qwt_plot_item.h"
#include <stdlib.h>

*/
import "C"

import (
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
	h *C.QwtPlotItem
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
	C.QwtPlotItem_attach(this.h, plot.cPointer())
}

func (this *QwtPlotItem) Detach() {
	C.QwtPlotItem_detach(this.h)
}

func (this *QwtPlotItem) Plot() *QwtPlot {
	return newQwtPlot(C.QwtPlotItem_plot(this.h))
}

func (this *QwtPlotItem) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QwtPlotItem_setTitle(this.h, title_ms)
}

func (this *QwtPlotItem) SetTitleWithTitle(title *QwtText) {
	C.QwtPlotItem_setTitleWithTitle(this.h, title.cPointer())
}

func (this *QwtPlotItem) Title() *QwtText {
	return newQwtText(C.QwtPlotItem_title(this.h))
}

func (this *QwtPlotItem) Rtti() int {
	return (int)(C.QwtPlotItem_rtti(this.h))
}

func (this *QwtPlotItem) SetItemAttribute(param1 QwtPlotItem__ItemAttribute) {
	C.QwtPlotItem_setItemAttribute(this.h, (C.int)(param1))
}

func (this *QwtPlotItem) TestItemAttribute(param1 QwtPlotItem__ItemAttribute) bool {
	return (bool)(C.QwtPlotItem_testItemAttribute(this.h, (C.int)(param1)))
}

func (this *QwtPlotItem) SetItemInterest(param1 QwtPlotItem__ItemInterest) {
	C.QwtPlotItem_setItemInterest(this.h, (C.int)(param1))
}

func (this *QwtPlotItem) TestItemInterest(param1 QwtPlotItem__ItemInterest) bool {
	return (bool)(C.QwtPlotItem_testItemInterest(this.h, (C.int)(param1)))
}

func (this *QwtPlotItem) SetRenderHint(param1 QwtPlotItem__RenderHint) {
	C.QwtPlotItem_setRenderHint(this.h, (C.int)(param1))
}

func (this *QwtPlotItem) TestRenderHint(param1 QwtPlotItem__RenderHint) bool {
	return (bool)(C.QwtPlotItem_testRenderHint(this.h, (C.int)(param1)))
}

func (this *QwtPlotItem) SetRenderThreadCount(numThreads uint) {
	C.QwtPlotItem_setRenderThreadCount(this.h, (C.uint)(numThreads))
}

func (this *QwtPlotItem) RenderThreadCount() uint {
	return (uint)(C.QwtPlotItem_renderThreadCount(this.h))
}

func (this *QwtPlotItem) SetLegendIconSize(legendIconSize *qt.QSize) {
	C.QwtPlotItem_setLegendIconSize(this.h, (*C.QSize)(legendIconSize.UnsafePointer()))
}

func (this *QwtPlotItem) LegendIconSize() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtPlotItem_legendIconSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotItem) Z() float64 {
	return (float64)(C.QwtPlotItem_z(this.h))
}

func (this *QwtPlotItem) SetZ(z float64) {
	C.QwtPlotItem_setZ(this.h, (C.double)(z))
}

func (this *QwtPlotItem) Show() {
	C.QwtPlotItem_show(this.h)
}

func (this *QwtPlotItem) Hide() {
	C.QwtPlotItem_hide(this.h)
}

func (this *QwtPlotItem) SetVisible(visible bool) {
	C.QwtPlotItem_setVisible(this.h, (C.bool)(visible))
}

func (this *QwtPlotItem) IsVisible() bool {
	return (bool)(C.QwtPlotItem_isVisible(this.h))
}

func (this *QwtPlotItem) SetAxes(xAxis int, yAxis int) {
	C.QwtPlotItem_setAxes(this.h, (C.int)(xAxis), (C.int)(yAxis))
}

func (this *QwtPlotItem) SetXAxis(axis int) {
	C.QwtPlotItem_setXAxis(this.h, (C.int)(axis))
}

func (this *QwtPlotItem) XAxis() int {
	return (int)(C.QwtPlotItem_xAxis(this.h))
}

func (this *QwtPlotItem) SetYAxis(axis int) {
	C.QwtPlotItem_setYAxis(this.h, (C.int)(axis))
}

func (this *QwtPlotItem) YAxis() int {
	return (int)(C.QwtPlotItem_yAxis(this.h))
}

func (this *QwtPlotItem) ItemChanged() {
	C.QwtPlotItem_itemChanged(this.h)
}

func (this *QwtPlotItem) LegendChanged() {
	C.QwtPlotItem_legendChanged(this.h)
}

func (this *QwtPlotItem) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotItem_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotItem) UpdateScaleDiv(param1 *QwtScaleDiv, param2 *QwtScaleDiv) {
	C.QwtPlotItem_updateScaleDiv(this.h, param1.cPointer(), param2.cPointer())
}

func (this *QwtPlotItem) UpdateLegend(param1 *QwtPlotItem, param2 []QwtLegendData) {
	param2_CArray := (*[0xffff]*C.QwtLegendData)(C.malloc(C.size_t(8 * len(param2))))
	defer C.free(unsafe.Pointer(param2_CArray))
	for i := range param2 {
		param2_CArray[i] = param2[i].cPointer()
	}
	param2_ma := C.struct_miqt_array{len: C.size_t(len(param2)), data: unsafe.Pointer(param2_CArray)}
	C.QwtPlotItem_updateLegend(this.h, param1.cPointer(), param2_ma)
}

func (this *QwtPlotItem) LegendData() []QwtLegendData {
	var _ma C.struct_miqt_array = C.QwtPlotItem_legendData(this.h)
	_ret := make([]QwtLegendData, int(_ma.len))
	_outCast := (*[0xffff]*C.QwtLegendData)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQwtLegendData(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QwtPlotItem) LegendIcon(index int, param2 *qt.QSizeF) *QwtGraphic {
	_goptr := newQwtGraphic(C.QwtPlotItem_legendIcon(this.h, (C.int)(index), (*C.QSizeF)(param2.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotItem) SetItemAttribute2(param1 QwtPlotItem__ItemAttribute, on bool) {
	C.QwtPlotItem_setItemAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotItem) SetItemInterest2(param1 QwtPlotItem__ItemInterest, on bool) {
	C.QwtPlotItem_setItemInterest2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtPlotItem) SetRenderHint2(param1 QwtPlotItem__RenderHint, on bool) {
	C.QwtPlotItem_setRenderHint2(this.h, (C.int)(param1), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QwtPlotItem) Delete() {
	C.QwtPlotItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
