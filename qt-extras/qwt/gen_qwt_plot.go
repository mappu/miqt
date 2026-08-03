package qwt

/*

#include "gen_qwt_plot.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtPlot__Axis int

const (
	QwtPlot__yLeft   QwtPlot__Axis = 0
	QwtPlot__yRight  QwtPlot__Axis = 1
	QwtPlot__xBottom QwtPlot__Axis = 2
	QwtPlot__xTop    QwtPlot__Axis = 3
	QwtPlot__axisCnt QwtPlot__Axis = 4
)

type QwtPlot__LegendPosition int

const (
	QwtPlot__LeftLegend   QwtPlot__LegendPosition = 0
	QwtPlot__RightLegend  QwtPlot__LegendPosition = 1
	QwtPlot__BottomLegend QwtPlot__LegendPosition = 2
	QwtPlot__TopLegend    QwtPlot__LegendPosition = 3
)

type QwtPlot struct {
	h *C.QwtPlot
	*qt.QFrame
	*QwtPlotDict
}

func (this *QwtPlot) cPointer() *C.QwtPlot {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlot) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlot constructs the type using only CGO pointers.
func newQwtPlot(h *C.QwtPlot) *QwtPlot {
	if h == nil {
		return nil
	}
	var outptr_QFrame *C.QFrame = nil
	var outptr_QwtPlotDict *C.QwtPlotDict = nil
	C.QwtPlot_virtbase(h, &outptr_QFrame, &outptr_QwtPlotDict)

	return &QwtPlot{h: h,
		QFrame:      qt.UnsafeNewQFrame(unsafe.Pointer(outptr_QFrame)),
		QwtPlotDict: newQwtPlotDict(outptr_QwtPlotDict)}
}

// UnsafeNewQwtPlot constructs the type using only unsafe pointers.
func UnsafeNewQwtPlot(h unsafe.Pointer) *QwtPlot {
	return newQwtPlot((*C.QwtPlot)(h))
}

// NewQwtPlot constructs a new QwtPlot object.
func NewQwtPlot(param1 *qt.QWidget) *QwtPlot {

	return newQwtPlot(C.QwtPlot_new((*C.QWidget)(param1.UnsafePointer())))
}

// NewQwtPlot2 constructs a new QwtPlot object.
func NewQwtPlot2() *QwtPlot {

	return newQwtPlot(C.QwtPlot_new2())
}

// NewQwtPlot3 constructs a new QwtPlot object.
func NewQwtPlot3(title *QwtText) *QwtPlot {

	return newQwtPlot(C.QwtPlot_new3(title.cPointer()))
}

// NewQwtPlot4 constructs a new QwtPlot object.
func NewQwtPlot4(title *QwtText, param2 *qt.QWidget) *QwtPlot {

	return newQwtPlot(C.QwtPlot_new4(title.cPointer(), (*C.QWidget)(param2.UnsafePointer())))
}

func (this *QwtPlot) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtPlot_metaObject(this.h)))
}

func (this *QwtPlot) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtPlot_metacast(this.h, param1_Cstring))
}

func QwtPlot_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlot_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlot_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlot_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtPlot) ApplyProperties(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QwtPlot_applyProperties(this.h, param1_ms)
}

func (this *QwtPlot) GrabProperties() string {
	var _ms C.struct_miqt_string = C.QwtPlot_grabProperties(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtPlot) SetAutoReplot() {
	C.QwtPlot_setAutoReplot(this.h)
}

func (this *QwtPlot) AutoReplot() bool {
	return (bool)(C.QwtPlot_autoReplot(this.h))
}

func (this *QwtPlot) SetPlotLayout(plotLayout *QwtPlotLayout) {
	C.QwtPlot_setPlotLayout(this.h, plotLayout.cPointer())
}

func (this *QwtPlot) PlotLayout() *QwtPlotLayout {
	return newQwtPlotLayout(C.QwtPlot_plotLayout(this.h))
}

func (this *QwtPlot) PlotLayout2() *QwtPlotLayout {
	return newQwtPlotLayout(C.QwtPlot_plotLayout2(this.h))
}

func (this *QwtPlot) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QwtPlot_setTitle(this.h, title_ms)
}

func (this *QwtPlot) SetTitleWithTitle(title *QwtText) {
	C.QwtPlot_setTitleWithTitle(this.h, title.cPointer())
}

func (this *QwtPlot) Title() *QwtText {
	_goptr := newQwtText(C.QwtPlot_title(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlot) TitleLabel() *QwtTextLabel {
	return newQwtTextLabel(C.QwtPlot_titleLabel(this.h))
}

func (this *QwtPlot) TitleLabel2() *QwtTextLabel {
	return newQwtTextLabel(C.QwtPlot_titleLabel2(this.h))
}

func (this *QwtPlot) SetFooter(footer string) {
	footer_ms := C.struct_miqt_string{}
	footer_ms.data = C.CString(footer)
	footer_ms.len = C.size_t(len(footer))
	defer C.free(unsafe.Pointer(footer_ms.data))
	C.QwtPlot_setFooter(this.h, footer_ms)
}

func (this *QwtPlot) SetFooterWithFooter(footer *QwtText) {
	C.QwtPlot_setFooterWithFooter(this.h, footer.cPointer())
}

func (this *QwtPlot) Footer() *QwtText {
	_goptr := newQwtText(C.QwtPlot_footer(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlot) FooterLabel() *QwtTextLabel {
	return newQwtTextLabel(C.QwtPlot_footerLabel(this.h))
}

func (this *QwtPlot) FooterLabel2() *QwtTextLabel {
	return newQwtTextLabel(C.QwtPlot_footerLabel2(this.h))
}

func (this *QwtPlot) SetCanvas(canvas *qt.QWidget) {
	C.QwtPlot_setCanvas(this.h, (*C.QWidget)(canvas.UnsafePointer()))
}

func (this *QwtPlot) Canvas() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtPlot_canvas(this.h)))
}

func (this *QwtPlot) Canvas2() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtPlot_canvas2(this.h)))
}

func (this *QwtPlot) SetCanvasBackground(canvasBackground *qt.QBrush) {
	C.QwtPlot_setCanvasBackground(this.h, (*C.QBrush)(canvasBackground.UnsafePointer()))
}

func (this *QwtPlot) CanvasBackground() *qt.QBrush {
	_goptr := qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtPlot_canvasBackground(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlot) InvTransform(axisId int, pos int) float64 {
	return (float64)(C.QwtPlot_invTransform(this.h, (C.int)(axisId), (C.int)(pos)))
}

func (this *QwtPlot) Transform(axisId int, value float64) float64 {
	return (float64)(C.QwtPlot_transform(this.h, (C.int)(axisId), (C.double)(value)))
}

func (this *QwtPlot) AxisScaleEngine(axisId int) *QwtScaleEngine {
	return newQwtScaleEngine(C.QwtPlot_axisScaleEngine(this.h, (C.int)(axisId)))
}

func (this *QwtPlot) AxisScaleEngineWithAxisId(axisId int) *QwtScaleEngine {
	return newQwtScaleEngine(C.QwtPlot_axisScaleEngineWithAxisId(this.h, (C.int)(axisId)))
}

func (this *QwtPlot) SetAxisScaleEngine(axisId int, param2 *QwtScaleEngine) {
	C.QwtPlot_setAxisScaleEngine(this.h, (C.int)(axisId), param2.cPointer())
}

func (this *QwtPlot) SetAxisAutoScale(axisId int) {
	C.QwtPlot_setAxisAutoScale(this.h, (C.int)(axisId))
}

func (this *QwtPlot) AxisAutoScale(axisId int) bool {
	return (bool)(C.QwtPlot_axisAutoScale(this.h, (C.int)(axisId)))
}

func (this *QwtPlot) EnableAxis(axisId int) {
	C.QwtPlot_enableAxis(this.h, (C.int)(axisId))
}

func (this *QwtPlot) AxisEnabled(axisId int) bool {
	return (bool)(C.QwtPlot_axisEnabled(this.h, (C.int)(axisId)))
}

func (this *QwtPlot) SetAxisFont(axisId int, param2 *qt.QFont) {
	C.QwtPlot_setAxisFont(this.h, (C.int)(axisId), (*C.QFont)(param2.UnsafePointer()))
}

func (this *QwtPlot) AxisFont(axisId int) *qt.QFont {
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QwtPlot_axisFont(this.h, (C.int)(axisId))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlot) SetAxisScale(axisId int, min float64, max float64) {
	C.QwtPlot_setAxisScale(this.h, (C.int)(axisId), (C.double)(min), (C.double)(max))
}

func (this *QwtPlot) SetAxisScaleDiv(axisId int, param2 *QwtScaleDiv) {
	C.QwtPlot_setAxisScaleDiv(this.h, (C.int)(axisId), param2.cPointer())
}

func (this *QwtPlot) SetAxisScaleDraw(axisId int, param2 *QwtScaleDraw) {
	C.QwtPlot_setAxisScaleDraw(this.h, (C.int)(axisId), param2.cPointer())
}

func (this *QwtPlot) AxisStepSize(axisId int) float64 {
	return (float64)(C.QwtPlot_axisStepSize(this.h, (C.int)(axisId)))
}

func (this *QwtPlot) AxisInterval(axisId int) *QwtInterval {
	_goptr := newQwtInterval(C.QwtPlot_axisInterval(this.h, (C.int)(axisId)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlot) AxisScaleDiv(axisId int) *QwtScaleDiv {
	return newQwtScaleDiv(C.QwtPlot_axisScaleDiv(this.h, (C.int)(axisId)))
}

func (this *QwtPlot) AxisScaleDraw(axisId int) *QwtScaleDraw {
	return newQwtScaleDraw(C.QwtPlot_axisScaleDraw(this.h, (C.int)(axisId)))
}

func (this *QwtPlot) AxisScaleDrawWithAxisId(axisId int) *QwtScaleDraw {
	return newQwtScaleDraw(C.QwtPlot_axisScaleDrawWithAxisId(this.h, (C.int)(axisId)))
}

func (this *QwtPlot) AxisWidget(axisId int) *QwtScaleWidget {
	return newQwtScaleWidget(C.QwtPlot_axisWidget(this.h, (C.int)(axisId)))
}

func (this *QwtPlot) AxisWidgetWithAxisId(axisId int) *QwtScaleWidget {
	return newQwtScaleWidget(C.QwtPlot_axisWidgetWithAxisId(this.h, (C.int)(axisId)))
}

func (this *QwtPlot) SetAxisLabelAlignment(axisId int, param2 qt.AlignmentFlag) {
	C.QwtPlot_setAxisLabelAlignment(this.h, (C.int)(axisId), (C.int)(param2))
}

func (this *QwtPlot) SetAxisLabelRotation(axisId int, rotation float64) {
	C.QwtPlot_setAxisLabelRotation(this.h, (C.int)(axisId), (C.double)(rotation))
}

func (this *QwtPlot) SetAxisTitle(axisId int, param2 string) {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	C.QwtPlot_setAxisTitle(this.h, (C.int)(axisId), param2_ms)
}

func (this *QwtPlot) SetAxisTitle2(axisId int, param2 *QwtText) {
	C.QwtPlot_setAxisTitle2(this.h, (C.int)(axisId), param2.cPointer())
}

func (this *QwtPlot) AxisTitle(axisId int) *QwtText {
	_goptr := newQwtText(C.QwtPlot_axisTitle(this.h, (C.int)(axisId)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlot) SetAxisMaxMinor(axisId int, maxMinor int) {
	C.QwtPlot_setAxisMaxMinor(this.h, (C.int)(axisId), (C.int)(maxMinor))
}

func (this *QwtPlot) AxisMaxMinor(axisId int) int {
	return (int)(C.QwtPlot_axisMaxMinor(this.h, (C.int)(axisId)))
}

func (this *QwtPlot) SetAxisMaxMajor(axisId int, maxMajor int) {
	C.QwtPlot_setAxisMaxMajor(this.h, (C.int)(axisId), (C.int)(maxMajor))
}

func (this *QwtPlot) AxisMaxMajor(axisId int) int {
	return (int)(C.QwtPlot_axisMaxMajor(this.h, (C.int)(axisId)))
}

func (this *QwtPlot) InsertLegend(param1 *QwtAbstractLegend) {
	C.QwtPlot_insertLegend(this.h, param1.cPointer())
}

func (this *QwtPlot) Legend() *QwtAbstractLegend {
	return newQwtAbstractLegend(C.QwtPlot_legend(this.h))
}

func (this *QwtPlot) Legend2() *QwtAbstractLegend {
	return newQwtAbstractLegend(C.QwtPlot_legend2(this.h))
}

func (this *QwtPlot) UpdateLegend() {
	C.QwtPlot_updateLegend(this.h)
}

func (this *QwtPlot) UpdateLegendWithQwtPlotItem(param1 *QwtPlotItem) {
	C.QwtPlot_updateLegendWithQwtPlotItem(this.h, param1.cPointer())
}

func (this *QwtPlot) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtPlot_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlot) MinimumSizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtPlot_minimumSizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlot) UpdateLayout() {
	C.QwtPlot_updateLayout(this.h)
}

func (this *QwtPlot) DrawCanvas(param1 *qt.QPainter) {
	C.QwtPlot_drawCanvas(this.h, (*C.QPainter)(param1.UnsafePointer()))
}

func (this *QwtPlot) UpdateAxes() {
	C.QwtPlot_updateAxes(this.h)
}

func (this *QwtPlot) UpdateCanvasMargins() {
	C.QwtPlot_updateCanvasMargins(this.h)
}

func (this *QwtPlot) Event(param1 *qt.QEvent) bool {
	return (bool)(C.QwtPlot_event(this.h, (*C.QEvent)(param1.UnsafePointer())))
}

func (this *QwtPlot) EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {
	return (bool)(C.QwtPlot_eventFilter(this.h, (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))
}

func (this *QwtPlot) ItemToInfo(param1 *QwtPlotItem) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtPlot_itemToInfo(this.h, param1.cPointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlot) InfoToItem(param1 *qt.QVariant) *QwtPlotItem {
	return newQwtPlotItem(C.QwtPlot_infoToItem(this.h, (*C.QVariant)(param1.UnsafePointer())))
}

func (this *QwtPlot) ItemAttached(plotItem *QwtPlotItem, on bool) {
	C.QwtPlot_itemAttached(this.h, plotItem.cPointer(), (C.bool)(on))
}
func (this *QwtPlot) OnItemAttached(slot func(plotItem *QwtPlotItem, on bool)) {
	C.QwtPlot_connect_itemAttached(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtPlot_itemAttached
func miqt_exec_callback_QwtPlot_itemAttached(cb C.intptr_t, plotItem *C.QwtPlotItem, on C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(plotItem *QwtPlotItem, on bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtPlotItem(plotItem)

	slotval2 := (bool)(on)

	gofunc(slotval1, slotval2)
}

func (this *QwtPlot) LegendDataChanged(itemInfo *qt.QVariant, data []QwtLegendData) {
	data_CArray := (*[0xffff]*C.QwtLegendData)(C.malloc(C.size_t(8 * len(data))))
	defer C.free(unsafe.Pointer(data_CArray))
	for i := range data {
		data_CArray[i] = data[i].cPointer()
	}
	data_ma := C.struct_miqt_array{len: C.size_t(len(data)), data: unsafe.Pointer(data_CArray)}
	C.QwtPlot_legendDataChanged(this.h, (*C.QVariant)(itemInfo.UnsafePointer()), data_ma)
}
func (this *QwtPlot) OnLegendDataChanged(slot func(itemInfo *qt.QVariant, data []QwtLegendData)) {
	C.QwtPlot_connect_legendDataChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtPlot_legendDataChanged
func miqt_exec_callback_QwtPlot_legendDataChanged(cb C.intptr_t, itemInfo *C.QVariant, data C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(itemInfo *qt.QVariant, data []QwtLegendData))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQVariant(unsafe.Pointer(itemInfo))

	var data_ma C.struct_miqt_array = data
	data_ret := make([]QwtLegendData, int(data_ma.len))
	data_outCast := (*[0xffff]*C.QwtLegendData)(unsafe.Pointer(data_ma.data)) // hey ya
	for i := 0; i < int(data_ma.len); i++ {
		data_lv_goptr := newQwtLegendData(data_outCast[i])
		data_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		data_ret[i] = *data_lv_goptr
	}
	slotval2 := data_ret

	gofunc(slotval1, slotval2)
}

func (this *QwtPlot) Replot() {
	C.QwtPlot_replot(this.h)
}

func (this *QwtPlot) AutoRefresh() {
	C.QwtPlot_autoRefresh(this.h)
}

func QwtPlot_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlot_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlot_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlot_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlot_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlot_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlot_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlot_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtPlot) SetAutoReplotWithAutoReplot(autoReplot bool) {
	C.QwtPlot_setAutoReplotWithAutoReplot(this.h, (C.bool)(autoReplot))
}

func (this *QwtPlot) SetAxisAutoScale2(axisId int, on bool) {
	C.QwtPlot_setAxisAutoScale2(this.h, (C.int)(axisId), (C.bool)(on))
}

func (this *QwtPlot) EnableAxis2(axisId int, tf bool) {
	C.QwtPlot_enableAxis2(this.h, (C.int)(axisId), (C.bool)(tf))
}

func (this *QwtPlot) SetAxisScale2(axisId int, min float64, max float64, stepSize float64) {
	C.QwtPlot_setAxisScale2(this.h, (C.int)(axisId), (C.double)(min), (C.double)(max), (C.double)(stepSize))
}

func (this *QwtPlot) InsertLegend2(param1 *QwtAbstractLegend, param2 QwtPlot__LegendPosition) {
	C.QwtPlot_insertLegend2(this.h, param1.cPointer(), (C.int)(param2))
}

func (this *QwtPlot) InsertLegend3(param1 *QwtAbstractLegend, param2 QwtPlot__LegendPosition, ratio float64) {
	C.QwtPlot_insertLegend3(this.h, param1.cPointer(), (C.int)(param2), (C.double)(ratio))
}

// DrawFrame can only be called from a QwtPlot that was directly constructed.
func (this *QwtPlot) DrawFrame(param1 *qt.QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlot_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// InitStyleOption can only be called from a QwtPlot that was directly constructed.
func (this *QwtPlot) InitStyleOption(option *qt.QStyleOptionFrame) {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlot_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QStyleOptionFrame)(option.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QwtPlot that was directly constructed.
func (this *QwtPlot) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlot_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtPlot that was directly constructed.
func (this *QwtPlot) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlot_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtPlot that was directly constructed.
func (this *QwtPlot) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlot_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtPlot that was directly constructed.
func (this *QwtPlot) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlot_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtPlot that was directly constructed.
func (this *QwtPlot) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlot_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtPlot that was directly constructed.
func (this *QwtPlot) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtPlot_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtPlot that was directly constructed.
func (this *QwtPlot) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlot_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtPlot that was directly constructed.
func (this *QwtPlot) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlot_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtPlot that was directly constructed.
func (this *QwtPlot) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlot_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// InsertItem can only be called from a QwtPlot that was directly constructed.
func (this *QwtPlot) InsertItem(param1 *QwtPlotItem) {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlot_protectedbase_insertItem(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveItem can only be called from a QwtPlot that was directly constructed.
func (this *QwtPlot) RemoveItem(param1 *QwtPlotItem) {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlot_protectedbase_removeItem(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QwtPlot) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtPlot_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlot) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtPlot_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_sizeHint
func miqt_exec_callback_QwtPlot_sizeHint(self *C.QwtPlot, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtPlot) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtPlot_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlot) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtPlot_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_minimumSizeHint
func miqt_exec_callback_QwtPlot_minimumSizeHint(self *C.QwtPlot, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtPlot) callVirtualBase_UpdateLayout() {

	C.QwtPlot_virtualbase_updateLayout(unsafe.Pointer(this.h))

}
func (this *QwtPlot) OnUpdateLayout(slot func(super func())) {
	ok := C.QwtPlot_override_virtual_updateLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_updateLayout
func miqt_exec_callback_QwtPlot_updateLayout(self *C.QwtPlot, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlot{h: self}).callVirtualBase_UpdateLayout)

}

func (this *QwtPlot) callVirtualBase_DrawCanvas(param1 *qt.QPainter) {

	C.QwtPlot_virtualbase_drawCanvas(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtPlot) OnDrawCanvas(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtPlot_override_virtual_drawCanvas(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_drawCanvas
func miqt_exec_callback_QwtPlot_drawCanvas(self *C.QwtPlot, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtPlot{h: self}).callVirtualBase_DrawCanvas, slotval1)

}

func (this *QwtPlot) callVirtualBase_Event(param1 *qt.QEvent) bool {

	return (bool)(C.QwtPlot_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QwtPlot) OnEvent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	ok := C.QwtPlot_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_event
func miqt_exec_callback_QwtPlot_event(self *C.QwtPlot, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlot) callVirtualBase_EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {

	return (bool)(C.QwtPlot_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QwtPlot) OnEventFilter(slot func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool) {
	ok := C.QwtPlot_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_eventFilter
func miqt_exec_callback_QwtPlot_eventFilter(self *C.QwtPlot, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlot) callVirtualBase_ItemToInfo(param1 *QwtPlotItem) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtPlot_virtualbase_itemToInfo(unsafe.Pointer(this.h), param1.cPointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlot) OnItemToInfo(slot func(super func(param1 *QwtPlotItem) *qt.QVariant, param1 *QwtPlotItem) *qt.QVariant) {
	ok := C.QwtPlot_override_virtual_itemToInfo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_itemToInfo
func miqt_exec_callback_QwtPlot_itemToInfo(self *C.QwtPlot, cb C.intptr_t, param1 *C.QwtPlotItem) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtPlotItem) *qt.QVariant, param1 *QwtPlotItem) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtPlotItem(param1)

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_ItemToInfo, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtPlot) callVirtualBase_InfoToItem(param1 *qt.QVariant) *QwtPlotItem {

	return newQwtPlotItem(C.QwtPlot_virtualbase_infoToItem(unsafe.Pointer(this.h), (*C.QVariant)(param1.UnsafePointer())))

}
func (this *QwtPlot) OnInfoToItem(slot func(super func(param1 *qt.QVariant) *QwtPlotItem, param1 *qt.QVariant) *QwtPlotItem) {
	ok := C.QwtPlot_override_virtual_infoToItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_infoToItem
func miqt_exec_callback_QwtPlot_infoToItem(self *C.QwtPlot, cb C.intptr_t, param1 *C.QVariant) *C.QwtPlotItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QVariant) *QwtPlotItem, param1 *qt.QVariant) *QwtPlotItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQVariant(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_InfoToItem, slotval1)

	return virtualReturn.cPointer()

}

func (this *QwtPlot) callVirtualBase_Replot() {

	C.QwtPlot_virtualbase_replot(unsafe.Pointer(this.h))

}
func (this *QwtPlot) OnReplot(slot func(super func())) {
	ok := C.QwtPlot_override_virtual_replot(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_replot
func miqt_exec_callback_QwtPlot_replot(self *C.QwtPlot, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlot{h: self}).callVirtualBase_Replot)

}

func (this *QwtPlot) callVirtualBase_ResizeEvent(e *qt.QResizeEvent) {

	C.QwtPlot_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(e.UnsafePointer()))

}
func (this *QwtPlot) OnResizeEvent(slot func(super func(e *qt.QResizeEvent), e *qt.QResizeEvent)) {
	ok := C.QwtPlot_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_resizeEvent
func miqt_exec_callback_QwtPlot_resizeEvent(self *C.QwtPlot, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QResizeEvent), e *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(e))

	gofunc((&QwtPlot{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QwtPlot_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QwtPlot) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QwtPlot_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_paintEvent
func miqt_exec_callback_QwtPlot_paintEvent(self *C.QwtPlot, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlot{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtPlot_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtPlot) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtPlot_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_changeEvent
func miqt_exec_callback_QwtPlot_changeEvent(self *C.QwtPlot, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlot{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_DevType() int {

	return (int)(C.QwtPlot_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtPlot) OnDevType(slot func(super func() int) int) {
	ok := C.QwtPlot_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_devType
func miqt_exec_callback_QwtPlot_devType(self *C.QwtPlot, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtPlot) callVirtualBase_SetVisible(visible bool) {

	C.QwtPlot_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtPlot) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtPlot_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_setVisible
func miqt_exec_callback_QwtPlot_setVisible(self *C.QwtPlot, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtPlot{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtPlot) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtPlot_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtPlot) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtPlot_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_heightForWidth
func miqt_exec_callback_QwtPlot_heightForWidth(self *C.QwtPlot, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtPlot) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtPlot_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtPlot) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtPlot_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_hasHeightForWidth
func miqt_exec_callback_QwtPlot_hasHeightForWidth(self *C.QwtPlot, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlot) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtPlot_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtPlot) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtPlot_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_paintEngine
func miqt_exec_callback_QwtPlot_paintEngine(self *C.QwtPlot, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtPlot) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QwtPlot_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtPlot_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_mousePressEvent
func miqt_exec_callback_QwtPlot_mousePressEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QwtPlot_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtPlot_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_mouseReleaseEvent
func miqt_exec_callback_QwtPlot_mouseReleaseEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtPlot_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtPlot_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_mouseDoubleClickEvent
func miqt_exec_callback_QwtPlot_mouseDoubleClickEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QwtPlot_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtPlot_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_mouseMoveEvent
func miqt_exec_callback_QwtPlot_mouseMoveEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QwtPlot_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QwtPlot_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_wheelEvent
func miqt_exec_callback_QwtPlot_wheelEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QwtPlot_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtPlot_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_keyPressEvent
func miqt_exec_callback_QwtPlot_keyPressEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtPlot_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtPlot_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_keyReleaseEvent
func miqt_exec_callback_QwtPlot_keyReleaseEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtPlot_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtPlot_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_focusInEvent
func miqt_exec_callback_QwtPlot_focusInEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtPlot_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtPlot_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_focusOutEvent
func miqt_exec_callback_QwtPlot_focusOutEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtPlot_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPlot_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_enterEvent
func miqt_exec_callback_QwtPlot_enterEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtPlot_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPlot_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_leaveEvent
func miqt_exec_callback_QwtPlot_leaveEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtPlot_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtPlot_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_moveEvent
func miqt_exec_callback_QwtPlot_moveEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtPlot_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtPlot_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_closeEvent
func miqt_exec_callback_QwtPlot_closeEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtPlot_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtPlot_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_contextMenuEvent
func miqt_exec_callback_QwtPlot_contextMenuEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtPlot_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtPlot_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_tabletEvent
func miqt_exec_callback_QwtPlot_tabletEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtPlot_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtPlot_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_actionEvent
func miqt_exec_callback_QwtPlot_actionEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtPlot_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtPlot_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_dragEnterEvent
func miqt_exec_callback_QwtPlot_dragEnterEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtPlot_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtPlot_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_dragMoveEvent
func miqt_exec_callback_QwtPlot_dragMoveEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtPlot_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtPlot_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_dragLeaveEvent
func miqt_exec_callback_QwtPlot_dragLeaveEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtPlot_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtPlot_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_dropEvent
func miqt_exec_callback_QwtPlot_dropEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtPlot_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtPlot_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_showEvent
func miqt_exec_callback_QwtPlot_showEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtPlot_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtPlot_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_hideEvent
func miqt_exec_callback_QwtPlot_hideEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtPlot_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtPlot) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtPlot_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_nativeEvent
func miqt_exec_callback_QwtPlot_nativeEvent(self *C.QwtPlot, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlot) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtPlot_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtPlot) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtPlot_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_metric
func miqt_exec_callback_QwtPlot_metric(self *C.QwtPlot, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtPlot) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtPlot_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtPlot) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtPlot_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_initPainter
func miqt_exec_callback_QwtPlot_initPainter(self *C.QwtPlot, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtPlot{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtPlot) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtPlot_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtPlot) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtPlot_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_redirected
func miqt_exec_callback_QwtPlot_redirected(self *C.QwtPlot, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtPlot) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtPlot_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtPlot) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtPlot_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_sharedPainter
func miqt_exec_callback_QwtPlot_sharedPainter(self *C.QwtPlot, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtPlot) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtPlot_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtPlot) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtPlot_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_inputMethodEvent
func miqt_exec_callback_QwtPlot_inputMethodEvent(self *C.QwtPlot, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlot{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtPlot_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlot) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtPlot_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_inputMethodQuery
func miqt_exec_callback_QwtPlot_inputMethodQuery(self *C.QwtPlot, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtPlot) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtPlot_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtPlot) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtPlot_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_focusNextPrevChild
func miqt_exec_callback_QwtPlot_focusNextPrevChild(self *C.QwtPlot, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtPlot{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlot) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtPlot_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtPlot_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_timerEvent
func miqt_exec_callback_QwtPlot_timerEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtPlot_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtPlot_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_childEvent
func miqt_exec_callback_QwtPlot_childEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtPlot_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPlot) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPlot_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_customEvent
func miqt_exec_callback_QwtPlot_customEvent(self *C.QwtPlot, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPlot{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtPlot) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtPlot_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlot) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlot_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_connectNotify
func miqt_exec_callback_QwtPlot_connectNotify(self *C.QwtPlot, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlot{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtPlot) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtPlot_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlot) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlot_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlot_disconnectNotify
func miqt_exec_callback_QwtPlot_disconnectNotify(self *C.QwtPlot, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlot{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtPlot) Delete() {
	C.QwtPlot_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlot) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlot) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
