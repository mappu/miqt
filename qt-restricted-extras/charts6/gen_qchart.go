package charts6

/*

#include "gen_qchart.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QChart__ChartType int

const (
	QChart__ChartTypeUndefined QChart__ChartType = 0
	QChart__ChartTypeCartesian QChart__ChartType = 1
	QChart__ChartTypePolar     QChart__ChartType = 2
)

type QChart__ChartTheme int

const (
	QChart__ChartThemeLight        QChart__ChartTheme = 0
	QChart__ChartThemeBlueCerulean QChart__ChartTheme = 1
	QChart__ChartThemeDark         QChart__ChartTheme = 2
	QChart__ChartThemeBrownSand    QChart__ChartTheme = 3
	QChart__ChartThemeBlueNcs      QChart__ChartTheme = 4
	QChart__ChartThemeHighContrast QChart__ChartTheme = 5
	QChart__ChartThemeBlueIcy      QChart__ChartTheme = 6
	QChart__ChartThemeQt           QChart__ChartTheme = 7
)

type QChart__AnimationOption int

const (
	QChart__NoAnimation        QChart__AnimationOption = 0
	QChart__GridAxisAnimations QChart__AnimationOption = 1
	QChart__SeriesAnimations   QChart__AnimationOption = 2
	QChart__AllAnimations      QChart__AnimationOption = 3
)

type QChart struct {
	h *C.QChart
	*qt6.QGraphicsWidget
}

func (this *QChart) cPointer() *C.QChart {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QChart) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQChart constructs the type using only CGO pointers.
func newQChart(h *C.QChart) *QChart {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsWidget *C.QGraphicsWidget = nil
	C.QChart_virtbase(h, &outptr_QGraphicsWidget)

	return &QChart{h: h,
		QGraphicsWidget: qt6.UnsafeNewQGraphicsWidget(unsafe.Pointer(outptr_QGraphicsWidget))}
}

// UnsafeNewQChart constructs the type using only unsafe pointers.
func UnsafeNewQChart(h unsafe.Pointer) *QChart {
	return newQChart((*C.QChart)(h))
}

// NewQChart constructs a new QChart object.
func NewQChart() *QChart {

	return newQChart(C.QChart_new())
}

// NewQChart2 constructs a new QChart object.
func NewQChart2(parent *qt6.QGraphicsItem) *QChart {

	return newQChart(C.QChart_new2((*C.QGraphicsItem)(parent.UnsafePointer())))
}

// NewQChart3 constructs a new QChart object.
func NewQChart3(parent *qt6.QGraphicsItem, wFlags qt6.WindowType) *QChart {

	return newQChart(C.QChart_new3((*C.QGraphicsItem)(parent.UnsafePointer()), (C.int)(wFlags)))
}

func (this *QChart) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QChart_metaObject(this.h)))
}

func (this *QChart) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QChart_metacast(this.h, param1_Cstring))
}

func QChart_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QChart_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QChart) AddSeries(series *QAbstractSeries) {
	C.QChart_addSeries(this.h, series.cPointer())
}

func (this *QChart) RemoveSeries(series *QAbstractSeries) {
	C.QChart_removeSeries(this.h, series.cPointer())
}

func (this *QChart) RemoveAllSeries() {
	C.QChart_removeAllSeries(this.h)
}

func (this *QChart) Series() []*QAbstractSeries {
	var _ma C.struct_miqt_array = C.QChart_series(this.h)
	_ret := make([]*QAbstractSeries, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractSeries)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractSeries(_outCast[i])
	}
	return _ret
}

func (this *QChart) SetAxisX(axis *QAbstractAxis) {
	C.QChart_setAxisX(this.h, axis.cPointer())
}

func (this *QChart) SetAxisY(axis *QAbstractAxis) {
	C.QChart_setAxisY(this.h, axis.cPointer())
}

func (this *QChart) AxisX() *QAbstractAxis {
	return newQAbstractAxis(C.QChart_axisX(this.h))
}

func (this *QChart) AxisY() *QAbstractAxis {
	return newQAbstractAxis(C.QChart_axisY(this.h))
}

func (this *QChart) AddAxis(axis *QAbstractAxis, alignment qt6.AlignmentFlag) {
	C.QChart_addAxis(this.h, axis.cPointer(), (C.int)(alignment))
}

func (this *QChart) RemoveAxis(axis *QAbstractAxis) {
	C.QChart_removeAxis(this.h, axis.cPointer())
}

func (this *QChart) Axes() []*QAbstractAxis {
	var _ma C.struct_miqt_array = C.QChart_axes(this.h)
	_ret := make([]*QAbstractAxis, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractAxis)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractAxis(_outCast[i])
	}
	return _ret
}

func (this *QChart) CreateDefaultAxes() {
	C.QChart_createDefaultAxes(this.h)
}

func (this *QChart) SetTheme(theme QChart__ChartTheme) {
	C.QChart_setTheme(this.h, (C.int)(theme))
}

func (this *QChart) Theme() QChart__ChartTheme {
	return (QChart__ChartTheme)(C.QChart_theme(this.h))
}

func (this *QChart) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QChart_setTitle(this.h, title_ms)
}

func (this *QChart) Title() string {
	var _ms C.struct_miqt_string = C.QChart_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QChart) SetTitleFont(font *qt6.QFont) {
	C.QChart_setTitleFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QChart) TitleFont() *qt6.QFont {
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QChart_titleFont(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChart) SetTitleBrush(brush *qt6.QBrush) {
	C.QChart_setTitleBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QChart) TitleBrush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QChart_titleBrush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChart) SetBackgroundBrush(brush *qt6.QBrush) {
	C.QChart_setBackgroundBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QChart) BackgroundBrush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QChart_backgroundBrush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChart) SetBackgroundPen(pen *qt6.QPen) {
	C.QChart_setBackgroundPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QChart) BackgroundPen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QChart_backgroundPen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChart) SetBackgroundVisible() {
	C.QChart_setBackgroundVisible(this.h)
}

func (this *QChart) IsBackgroundVisible() bool {
	return (bool)(C.QChart_isBackgroundVisible(this.h))
}

func (this *QChart) SetDropShadowEnabled() {
	C.QChart_setDropShadowEnabled(this.h)
}

func (this *QChart) IsDropShadowEnabled() bool {
	return (bool)(C.QChart_isDropShadowEnabled(this.h))
}

func (this *QChart) SetBackgroundRoundness(diameter float64) {
	C.QChart_setBackgroundRoundness(this.h, (C.double)(diameter))
}

func (this *QChart) BackgroundRoundness() float64 {
	return (float64)(C.QChart_backgroundRoundness(this.h))
}

func (this *QChart) SetAnimationOptions(options QChart__AnimationOption) {
	C.QChart_setAnimationOptions(this.h, (C.int)(options))
}

func (this *QChart) AnimationOptions() QChart__AnimationOption {
	return (QChart__AnimationOption)(C.QChart_animationOptions(this.h))
}

func (this *QChart) SetAnimationDuration(msecs int) {
	C.QChart_setAnimationDuration(this.h, (C.int)(msecs))
}

func (this *QChart) AnimationDuration() int {
	return (int)(C.QChart_animationDuration(this.h))
}

func (this *QChart) SetAnimationEasingCurve(curve *qt6.QEasingCurve) {
	C.QChart_setAnimationEasingCurve(this.h, (*C.QEasingCurve)(curve.UnsafePointer()))
}

func (this *QChart) AnimationEasingCurve() *qt6.QEasingCurve {
	_goptr := qt6.UnsafeNewQEasingCurve(unsafe.Pointer(C.QChart_animationEasingCurve(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChart) ZoomIn() {
	C.QChart_zoomIn(this.h)
}

func (this *QChart) ZoomOut() {
	C.QChart_zoomOut(this.h)
}

func (this *QChart) ZoomInWithRect(rect *qt6.QRectF) {
	C.QChart_zoomInWithRect(this.h, (*C.QRectF)(rect.UnsafePointer()))
}

func (this *QChart) Zoom(factor float64) {
	C.QChart_zoom(this.h, (C.double)(factor))
}

func (this *QChart) ZoomReset() {
	C.QChart_zoomReset(this.h)
}

func (this *QChart) IsZoomed() bool {
	return (bool)(C.QChart_isZoomed(this.h))
}

func (this *QChart) Scroll(dx float64, dy float64) {
	C.QChart_scroll(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QChart) Legend() *QLegend {
	return newQLegend(C.QChart_legend(this.h))
}

func (this *QChart) SetMargins(margins *qt6.QMargins) {
	C.QChart_setMargins(this.h, (*C.QMargins)(margins.UnsafePointer()))
}

func (this *QChart) Margins() *qt6.QMargins {
	_goptr := qt6.UnsafeNewQMargins(unsafe.Pointer(C.QChart_margins(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChart) PlotArea() *qt6.QRectF {
	_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(C.QChart_plotArea(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChart) SetPlotArea(rect *qt6.QRectF) {
	C.QChart_setPlotArea(this.h, (*C.QRectF)(rect.UnsafePointer()))
}

func (this *QChart) SetPlotAreaBackgroundBrush(brush *qt6.QBrush) {
	C.QChart_setPlotAreaBackgroundBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QChart) PlotAreaBackgroundBrush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QChart_plotAreaBackgroundBrush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChart) SetPlotAreaBackgroundPen(pen *qt6.QPen) {
	C.QChart_setPlotAreaBackgroundPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QChart) PlotAreaBackgroundPen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QChart_plotAreaBackgroundPen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChart) SetPlotAreaBackgroundVisible() {
	C.QChart_setPlotAreaBackgroundVisible(this.h)
}

func (this *QChart) IsPlotAreaBackgroundVisible() bool {
	return (bool)(C.QChart_isPlotAreaBackgroundVisible(this.h))
}

func (this *QChart) SetLocalizeNumbers(localize bool) {
	C.QChart_setLocalizeNumbers(this.h, (C.bool)(localize))
}

func (this *QChart) LocalizeNumbers() bool {
	return (bool)(C.QChart_localizeNumbers(this.h))
}

func (this *QChart) SetLocale(locale *qt6.QLocale) {
	C.QChart_setLocale(this.h, (*C.QLocale)(locale.UnsafePointer()))
}

func (this *QChart) Locale() *qt6.QLocale {
	_goptr := qt6.UnsafeNewQLocale(unsafe.Pointer(C.QChart_locale(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChart) MapToValue(position *qt6.QPointF) *qt6.QPointF {
	_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(C.QChart_mapToValue(this.h, (*C.QPointF)(position.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChart) MapToPosition(value *qt6.QPointF) *qt6.QPointF {
	_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(C.QChart_mapToPosition(this.h, (*C.QPointF)(value.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChart) ChartType() QChart__ChartType {
	return (QChart__ChartType)(C.QChart_chartType(this.h))
}

func (this *QChart) PlotAreaChanged(plotArea *qt6.QRectF) {
	C.QChart_plotAreaChanged(this.h, (*C.QRectF)(plotArea.UnsafePointer()))
}
func (this *QChart) OnPlotAreaChanged(slot func(plotArea *qt6.QRectF)) {
	C.QChart_connect_plotAreaChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QChart_plotAreaChanged
func miqt_exec_callback_QChart_plotAreaChanged(cb C.intptr_t, plotArea *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(plotArea *qt6.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQRectF(unsafe.Pointer(plotArea))

	gofunc(slotval1)
}

func QChart_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QChart_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QChart_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QChart_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QChart) SetAxisX2(axis *QAbstractAxis, series *QAbstractSeries) {
	C.QChart_setAxisX2(this.h, axis.cPointer(), series.cPointer())
}

func (this *QChart) SetAxisY2(axis *QAbstractAxis, series *QAbstractSeries) {
	C.QChart_setAxisY2(this.h, axis.cPointer(), series.cPointer())
}

func (this *QChart) AxisXWithSeries(series *QAbstractSeries) *QAbstractAxis {
	return newQAbstractAxis(C.QChart_axisXWithSeries(this.h, series.cPointer()))
}

func (this *QChart) AxisYWithSeries(series *QAbstractSeries) *QAbstractAxis {
	return newQAbstractAxis(C.QChart_axisYWithSeries(this.h, series.cPointer()))
}

func (this *QChart) AxesWithOrientation(orientation qt6.Orientation) []*QAbstractAxis {
	var _ma C.struct_miqt_array = C.QChart_axesWithOrientation(this.h, (C.int)(orientation))
	_ret := make([]*QAbstractAxis, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractAxis)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractAxis(_outCast[i])
	}
	return _ret
}

func (this *QChart) Axes2(orientation qt6.Orientation, series *QAbstractSeries) []*QAbstractAxis {
	var _ma C.struct_miqt_array = C.QChart_axes2(this.h, (C.int)(orientation), series.cPointer())
	_ret := make([]*QAbstractAxis, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractAxis)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractAxis(_outCast[i])
	}
	return _ret
}

func (this *QChart) SetBackgroundVisibleWithVisible(visible bool) {
	C.QChart_setBackgroundVisibleWithVisible(this.h, (C.bool)(visible))
}

func (this *QChart) SetDropShadowEnabledWithEnabled(enabled bool) {
	C.QChart_setDropShadowEnabledWithEnabled(this.h, (C.bool)(enabled))
}

func (this *QChart) SetPlotAreaBackgroundVisibleWithVisible(visible bool) {
	C.QChart_setPlotAreaBackgroundVisibleWithVisible(this.h, (C.bool)(visible))
}

func (this *QChart) MapToValue2(position *qt6.QPointF, series *QAbstractSeries) *qt6.QPointF {
	_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(C.QChart_mapToValue2(this.h, (*C.QPointF)(position.UnsafePointer()), series.cPointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChart) MapToPosition2(value *qt6.QPointF, series *QAbstractSeries) *qt6.QPointF {
	_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(C.QChart_mapToPosition2(this.h, (*C.QPointF)(value.UnsafePointer()), series.cPointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// UpdateMicroFocus can only be called from a QChart that was directly constructed.
func (this *QChart) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QChart_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QChart that was directly constructed.
func (this *QChart) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QChart_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QChart that was directly constructed.
func (this *QChart) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QChart_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QChart that was directly constructed.
func (this *QChart) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QChart_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QChart that was directly constructed.
func (this *QChart) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QChart_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// AddToIndex can only be called from a QChart that was directly constructed.
func (this *QChart) AddToIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QChart_protectedbase_addToIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveFromIndex can only be called from a QChart that was directly constructed.
func (this *QChart) RemoveFromIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QChart_protectedbase_removeFromIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrepareGeometryChange can only be called from a QChart that was directly constructed.
func (this *QChart) PrepareGeometryChange() {

	var _dynamic_cast_ok C.bool = false
	C.QChart_protectedbase_prepareGeometryChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetGraphicsItem can only be called from a QChart that was directly constructed.
func (this *QChart) SetGraphicsItem(item *qt6.QGraphicsItem) {

	var _dynamic_cast_ok C.bool = false
	C.QChart_protectedbase_setGraphicsItem(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QGraphicsItem)(item.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetOwnedByLayout can only be called from a QChart that was directly constructed.
func (this *QChart) SetOwnedByLayout(ownedByLayout bool) {

	var _dynamic_cast_ok C.bool = false
	C.QChart_protectedbase_setOwnedByLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(ownedByLayout))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QChart) callVirtualBase_SetGeometry(rect *qt6.QRectF) {

	C.QChart_virtualbase_setGeometry(unsafe.Pointer(this.h), (*C.QRectF)(rect.UnsafePointer()))

}
func (this *QChart) OnSetGeometry(slot func(super func(rect *qt6.QRectF), rect *qt6.QRectF)) {
	ok := C.QChart_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_setGeometry
func miqt_exec_callback_QChart_setGeometry(self *C.QChart, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *qt6.QRectF), rect *qt6.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQRectF(unsafe.Pointer(rect))

	gofunc((&QChart{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QChart) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QChart_virtualbase_getContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QChart) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	ok := C.QChart_override_virtual_getContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_getContentsMargins
func miqt_exec_callback_QChart_getContentsMargins(self *C.QChart, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*float64)(unsafe.Pointer(left))

	slotval2 := (*float64)(unsafe.Pointer(top))

	slotval3 := (*float64)(unsafe.Pointer(right))

	slotval4 := (*float64)(unsafe.Pointer(bottom))

	gofunc((&QChart{h: self}).callVirtualBase_GetContentsMargins, slotval1, slotval2, slotval3, slotval4)

}

func (this *QChart) callVirtualBase_Type() int {

	return (int)(C.QChart_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QChart) OnType(slot func(super func() int) int) {
	ok := C.QChart_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_type
func miqt_exec_callback_QChart_type(self *C.QChart, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QChart) callVirtualBase_Paint(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget) {

	C.QChart_virtualbase_paint(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(option.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))

}
func (this *QChart) OnPaint(slot func(super func(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget), painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget)) {
	ok := C.QChart_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_paint
func miqt_exec_callback_QChart_paint(self *C.QChart, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget), painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt6.UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option))

	slotval3 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc((&QChart{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QChart) callVirtualBase_PaintWindowFrame(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget) {

	C.QChart_virtualbase_paintWindowFrame(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(option.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))

}
func (this *QChart) OnPaintWindowFrame(slot func(super func(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget), painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget)) {
	ok := C.QChart_override_virtual_paintWindowFrame(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_paintWindowFrame
func miqt_exec_callback_QChart_paintWindowFrame(self *C.QChart, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget), painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt6.UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option))

	slotval3 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc((&QChart{h: self}).callVirtualBase_PaintWindowFrame, slotval1, slotval2, slotval3)

}

func (this *QChart) callVirtualBase_BoundingRect() *qt6.QRectF {

	_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(C.QChart_virtualbase_boundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QChart) OnBoundingRect(slot func(super func() *qt6.QRectF) *qt6.QRectF) {
	ok := C.QChart_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_boundingRect
func miqt_exec_callback_QChart_boundingRect(self *C.QChart, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QRectF) *qt6.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_BoundingRect)

	return (*C.QRectF)(virtualReturn.UnsafePointer())

}

func (this *QChart) callVirtualBase_Shape() *qt6.QPainterPath {

	_goptr := qt6.UnsafeNewQPainterPath(unsafe.Pointer(C.QChart_virtualbase_shape(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QChart) OnShape(slot func(super func() *qt6.QPainterPath) *qt6.QPainterPath) {
	ok := C.QChart_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_shape
func miqt_exec_callback_QChart_shape(self *C.QChart, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainterPath) *qt6.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_Shape)

	return (*C.QPainterPath)(virtualReturn.UnsafePointer())

}

func (this *QChart) callVirtualBase_InitStyleOption(option *qt6.QStyleOption) {

	C.QChart_virtualbase_initStyleOption(unsafe.Pointer(this.h), (*C.QStyleOption)(option.UnsafePointer()))

}
func (this *QChart) OnInitStyleOption(slot func(super func(option *qt6.QStyleOption), option *qt6.QStyleOption)) {
	ok := C.QChart_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_initStyleOption
func miqt_exec_callback_QChart_initStyleOption(self *C.QChart, cb C.intptr_t, option *C.QStyleOption) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *qt6.QStyleOption), option *qt6.QStyleOption))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQStyleOption(unsafe.Pointer(option))

	gofunc((&QChart{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QChart) callVirtualBase_SizeHint(which qt6.SizeHint, constraint *qt6.QSizeF) *qt6.QSizeF {

	_goptr := qt6.UnsafeNewQSizeF(unsafe.Pointer(C.QChart_virtualbase_sizeHint(unsafe.Pointer(this.h), (C.int)(which), (*C.QSizeF)(constraint.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QChart) OnSizeHint(slot func(super func(which qt6.SizeHint, constraint *qt6.QSizeF) *qt6.QSizeF, which qt6.SizeHint, constraint *qt6.QSizeF) *qt6.QSizeF) {
	ok := C.QChart_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_sizeHint
func miqt_exec_callback_QChart_sizeHint(self *C.QChart, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(which qt6.SizeHint, constraint *qt6.QSizeF) *qt6.QSizeF, which qt6.SizeHint, constraint *qt6.QSizeF) *qt6.QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.SizeHint)(which)

	slotval2 := qt6.UnsafeNewQSizeF(unsafe.Pointer(constraint))

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_SizeHint, slotval1, slotval2)

	return (*C.QSizeF)(virtualReturn.UnsafePointer())

}

func (this *QChart) callVirtualBase_UpdateGeometry() {

	C.QChart_virtualbase_updateGeometry(unsafe.Pointer(this.h))

}
func (this *QChart) OnUpdateGeometry(slot func(super func())) {
	ok := C.QChart_override_virtual_updateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_updateGeometry
func miqt_exec_callback_QChart_updateGeometry(self *C.QChart, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QChart{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QChart) callVirtualBase_ItemChange(change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QChart_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), (*C.QVariant)(value.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QChart) OnItemChange(slot func(super func(change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant, change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant) {
	ok := C.QChart_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_itemChange
func miqt_exec_callback_QChart_itemChange(self *C.QChart, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant, change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QChart) callVirtualBase_PropertyChange(propertyName string, value *qt6.QVariant) *qt6.QVariant {
	propertyName_ms := C.struct_miqt_string{}
	propertyName_ms.data = C.CString(propertyName)
	propertyName_ms.len = C.size_t(len(propertyName))
	defer C.free(unsafe.Pointer(propertyName_ms.data))

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QChart_virtualbase_propertyChange(unsafe.Pointer(this.h), propertyName_ms, (*C.QVariant)(value.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QChart) OnPropertyChange(slot func(super func(propertyName string, value *qt6.QVariant) *qt6.QVariant, propertyName string, value *qt6.QVariant) *qt6.QVariant) {
	ok := C.QChart_override_virtual_propertyChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_propertyChange
func miqt_exec_callback_QChart_propertyChange(self *C.QChart, cb C.intptr_t, propertyName C.struct_miqt_string, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(propertyName string, value *qt6.QVariant) *qt6.QVariant, propertyName string, value *qt6.QVariant) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var propertyName_ms C.struct_miqt_string = propertyName
	propertyName_ret := C.GoStringN(propertyName_ms.data, C.int(int64(propertyName_ms.len)))
	C.free(unsafe.Pointer(propertyName_ms.data))
	slotval1 := propertyName_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_PropertyChange, slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QChart) callVirtualBase_SceneEvent(event *qt6.QEvent) bool {

	return (bool)(C.QChart_virtualbase_sceneEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QChart) OnSceneEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QChart_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_sceneEvent
func miqt_exec_callback_QChart_sceneEvent(self *C.QChart, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QChart) callVirtualBase_WindowFrameEvent(e *qt6.QEvent) bool {

	return (bool)(C.QChart_virtualbase_windowFrameEvent(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QChart) OnWindowFrameEvent(slot func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool) {
	ok := C.QChart_override_virtual_windowFrameEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_windowFrameEvent
func miqt_exec_callback_QChart_windowFrameEvent(self *C.QChart, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_WindowFrameEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QChart) callVirtualBase_WindowFrameSectionAt(pos *qt6.QPointF) qt6.WindowFrameSection {

	return (qt6.WindowFrameSection)(C.QChart_virtualbase_windowFrameSectionAt(unsafe.Pointer(this.h), (*C.QPointF)(pos.UnsafePointer())))

}
func (this *QChart) OnWindowFrameSectionAt(slot func(super func(pos *qt6.QPointF) qt6.WindowFrameSection, pos *qt6.QPointF) qt6.WindowFrameSection) {
	ok := C.QChart_override_virtual_windowFrameSectionAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_windowFrameSectionAt
func miqt_exec_callback_QChart_windowFrameSectionAt(self *C.QChart, cb C.intptr_t, pos *C.QPointF) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *qt6.QPointF) qt6.WindowFrameSection, pos *qt6.QPointF) qt6.WindowFrameSection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(pos))

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_WindowFrameSectionAt, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QChart) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QChart_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QChart) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QChart_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_event
func miqt_exec_callback_QChart_event(self *C.QChart, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QChart) callVirtualBase_ChangeEvent(event *qt6.QEvent) {

	C.QChart_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QChart) OnChangeEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QChart_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_changeEvent
func miqt_exec_callback_QChart_changeEvent(self *C.QChart, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QChart) callVirtualBase_CloseEvent(event *qt6.QCloseEvent) {

	C.QChart_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QChart) OnCloseEvent(slot func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent)) {
	ok := C.QChart_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_closeEvent
func miqt_exec_callback_QChart_closeEvent(self *C.QChart, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QChart) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QChart_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QChart) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QChart_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_focusInEvent
func miqt_exec_callback_QChart_focusInEvent(self *C.QChart, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QChart) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QChart_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QChart) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QChart_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_focusNextPrevChild
func miqt_exec_callback_QChart_focusNextPrevChild(self *C.QChart, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QChart) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QChart_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QChart) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QChart_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_focusOutEvent
func miqt_exec_callback_QChart_focusOutEvent(self *C.QChart, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QChart) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.QChart_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QChart) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.QChart_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_hideEvent
func miqt_exec_callback_QChart_hideEvent(self *C.QChart, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QChart) callVirtualBase_MoveEvent(event *qt6.QGraphicsSceneMoveEvent) {

	C.QChart_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMoveEvent)(event.UnsafePointer()))

}
func (this *QChart) OnMoveEvent(slot func(super func(event *qt6.QGraphicsSceneMoveEvent), event *qt6.QGraphicsSceneMoveEvent)) {
	ok := C.QChart_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_moveEvent
func miqt_exec_callback_QChart_moveEvent(self *C.QChart, cb C.intptr_t, event *C.QGraphicsSceneMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneMoveEvent), event *qt6.QGraphicsSceneMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneMoveEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QChart) callVirtualBase_PolishEvent() {

	C.QChart_virtualbase_polishEvent(unsafe.Pointer(this.h))

}
func (this *QChart) OnPolishEvent(slot func(super func())) {
	ok := C.QChart_override_virtual_polishEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_polishEvent
func miqt_exec_callback_QChart_polishEvent(self *C.QChart, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QChart{h: self}).callVirtualBase_PolishEvent)

}

func (this *QChart) callVirtualBase_ResizeEvent(event *qt6.QGraphicsSceneResizeEvent) {

	C.QChart_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneResizeEvent)(event.UnsafePointer()))

}
func (this *QChart) OnResizeEvent(slot func(super func(event *qt6.QGraphicsSceneResizeEvent), event *qt6.QGraphicsSceneResizeEvent)) {
	ok := C.QChart_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_resizeEvent
func miqt_exec_callback_QChart_resizeEvent(self *C.QChart, cb C.intptr_t, event *C.QGraphicsSceneResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneResizeEvent), event *qt6.QGraphicsSceneResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneResizeEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QChart) callVirtualBase_ShowEvent(event *qt6.QShowEvent) {

	C.QChart_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QChart) OnShowEvent(slot func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent)) {
	ok := C.QChart_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_showEvent
func miqt_exec_callback_QChart_showEvent(self *C.QChart, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QChart) callVirtualBase_HoverMoveEvent(event *qt6.QGraphicsSceneHoverEvent) {

	C.QChart_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QChart) OnHoverMoveEvent(slot func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent)) {
	ok := C.QChart_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_hoverMoveEvent
func miqt_exec_callback_QChart_hoverMoveEvent(self *C.QChart, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QChart) callVirtualBase_HoverLeaveEvent(event *qt6.QGraphicsSceneHoverEvent) {

	C.QChart_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QChart) OnHoverLeaveEvent(slot func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent)) {
	ok := C.QChart_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_hoverLeaveEvent
func miqt_exec_callback_QChart_hoverLeaveEvent(self *C.QChart, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QChart) callVirtualBase_GrabMouseEvent(event *qt6.QEvent) {

	C.QChart_virtualbase_grabMouseEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QChart) OnGrabMouseEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QChart_override_virtual_grabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_grabMouseEvent
func miqt_exec_callback_QChart_grabMouseEvent(self *C.QChart, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_GrabMouseEvent, slotval1)

}

func (this *QChart) callVirtualBase_UngrabMouseEvent(event *qt6.QEvent) {

	C.QChart_virtualbase_ungrabMouseEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QChart) OnUngrabMouseEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QChart_override_virtual_ungrabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_ungrabMouseEvent
func miqt_exec_callback_QChart_ungrabMouseEvent(self *C.QChart, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_UngrabMouseEvent, slotval1)

}

func (this *QChart) callVirtualBase_GrabKeyboardEvent(event *qt6.QEvent) {

	C.QChart_virtualbase_grabKeyboardEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QChart) OnGrabKeyboardEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QChart_override_virtual_grabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_grabKeyboardEvent
func miqt_exec_callback_QChart_grabKeyboardEvent(self *C.QChart, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_GrabKeyboardEvent, slotval1)

}

func (this *QChart) callVirtualBase_UngrabKeyboardEvent(event *qt6.QEvent) {

	C.QChart_virtualbase_ungrabKeyboardEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QChart) OnUngrabKeyboardEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QChart_override_virtual_ungrabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_ungrabKeyboardEvent
func miqt_exec_callback_QChart_ungrabKeyboardEvent(self *C.QChart, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_UngrabKeyboardEvent, slotval1)

}

func (this *QChart) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QChart_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QChart) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QChart_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_eventFilter
func miqt_exec_callback_QChart_eventFilter(self *C.QChart, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QChart) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QChart_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QChart) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QChart_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_timerEvent
func miqt_exec_callback_QChart_timerEvent(self *C.QChart, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QChart) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QChart_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QChart) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QChart_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_childEvent
func miqt_exec_callback_QChart_childEvent(self *C.QChart, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QChart) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QChart_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QChart) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QChart_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_customEvent
func miqt_exec_callback_QChart_customEvent(self *C.QChart, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QChart) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QChart_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QChart) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QChart_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_connectNotify
func miqt_exec_callback_QChart_connectNotify(self *C.QChart, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QChart{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QChart) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QChart_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QChart) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QChart_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_disconnectNotify
func miqt_exec_callback_QChart_disconnectNotify(self *C.QChart, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QChart{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QChart) callVirtualBase_Advance(phase int) {

	C.QChart_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QChart) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QChart_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_advance
func miqt_exec_callback_QChart_advance(self *C.QChart, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QChart{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QChart) callVirtualBase_Contains(point *qt6.QPointF) bool {

	return (bool)(C.QChart_virtualbase_contains(unsafe.Pointer(this.h), (*C.QPointF)(point.UnsafePointer())))

}
func (this *QChart) OnContains(slot func(super func(point *qt6.QPointF) bool, point *qt6.QPointF) bool) {
	ok := C.QChart_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_contains
func miqt_exec_callback_QChart_contains(self *C.QChart, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *qt6.QPointF) bool, point *qt6.QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(point))

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QChart) callVirtualBase_CollidesWithItem(other *qt6.QGraphicsItem, mode qt6.ItemSelectionMode) bool {

	return (bool)(C.QChart_virtualbase_collidesWithItem(unsafe.Pointer(this.h), (*C.QGraphicsItem)(other.UnsafePointer()), (C.int)(mode)))

}
func (this *QChart) OnCollidesWithItem(slot func(super func(other *qt6.QGraphicsItem, mode qt6.ItemSelectionMode) bool, other *qt6.QGraphicsItem, mode qt6.ItemSelectionMode) bool) {
	ok := C.QChart_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_collidesWithItem
func miqt_exec_callback_QChart_collidesWithItem(self *C.QChart, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *qt6.QGraphicsItem, mode qt6.ItemSelectionMode) bool, other *qt6.QGraphicsItem, mode qt6.ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsItem(unsafe.Pointer(other))

	slotval2 := (qt6.ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QChart) callVirtualBase_CollidesWithPath(path *qt6.QPainterPath, mode qt6.ItemSelectionMode) bool {

	return (bool)(C.QChart_virtualbase_collidesWithPath(unsafe.Pointer(this.h), (*C.QPainterPath)(path.UnsafePointer()), (C.int)(mode)))

}
func (this *QChart) OnCollidesWithPath(slot func(super func(path *qt6.QPainterPath, mode qt6.ItemSelectionMode) bool, path *qt6.QPainterPath, mode qt6.ItemSelectionMode) bool) {
	ok := C.QChart_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_collidesWithPath
func miqt_exec_callback_QChart_collidesWithPath(self *C.QChart, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *qt6.QPainterPath, mode qt6.ItemSelectionMode) bool, path *qt6.QPainterPath, mode qt6.ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainterPath(unsafe.Pointer(path))

	slotval2 := (qt6.ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QChart) callVirtualBase_IsObscuredBy(item *qt6.QGraphicsItem) bool {

	return (bool)(C.QChart_virtualbase_isObscuredBy(unsafe.Pointer(this.h), (*C.QGraphicsItem)(item.UnsafePointer())))

}
func (this *QChart) OnIsObscuredBy(slot func(super func(item *qt6.QGraphicsItem) bool, item *qt6.QGraphicsItem) bool) {
	ok := C.QChart_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_isObscuredBy
func miqt_exec_callback_QChart_isObscuredBy(self *C.QChart, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *qt6.QGraphicsItem) bool, item *qt6.QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsItem(unsafe.Pointer(item))

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QChart) callVirtualBase_OpaqueArea() *qt6.QPainterPath {

	_goptr := qt6.UnsafeNewQPainterPath(unsafe.Pointer(C.QChart_virtualbase_opaqueArea(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QChart) OnOpaqueArea(slot func(super func() *qt6.QPainterPath) *qt6.QPainterPath) {
	ok := C.QChart_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_opaqueArea
func miqt_exec_callback_QChart_opaqueArea(self *C.QChart, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainterPath) *qt6.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_OpaqueArea)

	return (*C.QPainterPath)(virtualReturn.UnsafePointer())

}

func (this *QChart) callVirtualBase_SceneEventFilter(watched *qt6.QGraphicsItem, event *qt6.QEvent) bool {

	return (bool)(C.QChart_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), (*C.QGraphicsItem)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QChart) OnSceneEventFilter(slot func(super func(watched *qt6.QGraphicsItem, event *qt6.QEvent) bool, watched *qt6.QGraphicsItem, event *qt6.QEvent) bool) {
	ok := C.QChart_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_sceneEventFilter
func miqt_exec_callback_QChart_sceneEventFilter(self *C.QChart, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QGraphicsItem, event *qt6.QEvent) bool, watched *qt6.QGraphicsItem, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsItem(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QChart) callVirtualBase_ContextMenuEvent(event *qt6.QGraphicsSceneContextMenuEvent) {

	C.QChart_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneContextMenuEvent)(event.UnsafePointer()))

}
func (this *QChart) OnContextMenuEvent(slot func(super func(event *qt6.QGraphicsSceneContextMenuEvent), event *qt6.QGraphicsSceneContextMenuEvent)) {
	ok := C.QChart_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_contextMenuEvent
func miqt_exec_callback_QChart_contextMenuEvent(self *C.QChart, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneContextMenuEvent), event *qt6.QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QChart) callVirtualBase_DragEnterEvent(event *qt6.QGraphicsSceneDragDropEvent) {

	C.QChart_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QChart) OnDragEnterEvent(slot func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent)) {
	ok := C.QChart_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_dragEnterEvent
func miqt_exec_callback_QChart_dragEnterEvent(self *C.QChart, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QChart) callVirtualBase_DragLeaveEvent(event *qt6.QGraphicsSceneDragDropEvent) {

	C.QChart_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QChart) OnDragLeaveEvent(slot func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent)) {
	ok := C.QChart_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_dragLeaveEvent
func miqt_exec_callback_QChart_dragLeaveEvent(self *C.QChart, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QChart) callVirtualBase_DragMoveEvent(event *qt6.QGraphicsSceneDragDropEvent) {

	C.QChart_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QChart) OnDragMoveEvent(slot func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent)) {
	ok := C.QChart_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_dragMoveEvent
func miqt_exec_callback_QChart_dragMoveEvent(self *C.QChart, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QChart) callVirtualBase_DropEvent(event *qt6.QGraphicsSceneDragDropEvent) {

	C.QChart_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QChart) OnDropEvent(slot func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent)) {
	ok := C.QChart_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_dropEvent
func miqt_exec_callback_QChart_dropEvent(self *C.QChart, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QChart) callVirtualBase_HoverEnterEvent(event *qt6.QGraphicsSceneHoverEvent) {

	C.QChart_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QChart) OnHoverEnterEvent(slot func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent)) {
	ok := C.QChart_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_hoverEnterEvent
func miqt_exec_callback_QChart_hoverEnterEvent(self *C.QChart, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QChart) callVirtualBase_KeyPressEvent(event *qt6.QKeyEvent) {

	C.QChart_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QChart) OnKeyPressEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QChart_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_keyPressEvent
func miqt_exec_callback_QChart_keyPressEvent(self *C.QChart, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QChart) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QChart_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QChart) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QChart_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_keyReleaseEvent
func miqt_exec_callback_QChart_keyReleaseEvent(self *C.QChart, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QChart) callVirtualBase_MousePressEvent(event *qt6.QGraphicsSceneMouseEvent) {

	C.QChart_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QChart) OnMousePressEvent(slot func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent)) {
	ok := C.QChart_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_mousePressEvent
func miqt_exec_callback_QChart_mousePressEvent(self *C.QChart, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QChart) callVirtualBase_MouseMoveEvent(event *qt6.QGraphicsSceneMouseEvent) {

	C.QChart_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QChart) OnMouseMoveEvent(slot func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent)) {
	ok := C.QChart_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_mouseMoveEvent
func miqt_exec_callback_QChart_mouseMoveEvent(self *C.QChart, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QChart) callVirtualBase_MouseReleaseEvent(event *qt6.QGraphicsSceneMouseEvent) {

	C.QChart_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QChart) OnMouseReleaseEvent(slot func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent)) {
	ok := C.QChart_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_mouseReleaseEvent
func miqt_exec_callback_QChart_mouseReleaseEvent(self *C.QChart, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QChart) callVirtualBase_MouseDoubleClickEvent(event *qt6.QGraphicsSceneMouseEvent) {

	C.QChart_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QChart) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent)) {
	ok := C.QChart_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_mouseDoubleClickEvent
func miqt_exec_callback_QChart_mouseDoubleClickEvent(self *C.QChart, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QChart) callVirtualBase_WheelEvent(event *qt6.QGraphicsSceneWheelEvent) {

	C.QChart_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneWheelEvent)(event.UnsafePointer()))

}
func (this *QChart) OnWheelEvent(slot func(super func(event *qt6.QGraphicsSceneWheelEvent), event *qt6.QGraphicsSceneWheelEvent)) {
	ok := C.QChart_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_wheelEvent
func miqt_exec_callback_QChart_wheelEvent(self *C.QChart, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneWheelEvent), event *qt6.QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneWheelEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QChart) callVirtualBase_InputMethodEvent(event *qt6.QInputMethodEvent) {

	C.QChart_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(event.UnsafePointer()))

}
func (this *QChart) OnInputMethodEvent(slot func(super func(event *qt6.QInputMethodEvent), event *qt6.QInputMethodEvent)) {
	ok := C.QChart_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_inputMethodEvent
func miqt_exec_callback_QChart_inputMethodEvent(self *C.QChart, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QInputMethodEvent), event *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(event))

	gofunc((&QChart{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QChart) callVirtualBase_InputMethodQuery(query qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QChart_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QChart) OnInputMethodQuery(slot func(super func(query qt6.InputMethodQuery) *qt6.QVariant, query qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QChart_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_inputMethodQuery
func miqt_exec_callback_QChart_inputMethodQuery(self *C.QChart, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query qt6.InputMethodQuery) *qt6.QVariant, query qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(query)

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QChart) callVirtualBase_SupportsExtension(extension qt6.QGraphicsItem__Extension) bool {

	return (bool)(C.QChart_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QChart) OnSupportsExtension(slot func(super func(extension qt6.QGraphicsItem__Extension) bool, extension qt6.QGraphicsItem__Extension) bool) {
	ok := C.QChart_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_supportsExtension
func miqt_exec_callback_QChart_supportsExtension(self *C.QChart, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension qt6.QGraphicsItem__Extension) bool, extension qt6.QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QChart) callVirtualBase_SetExtension(extension qt6.QGraphicsItem__Extension, variant *qt6.QVariant) {

	C.QChart_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), (*C.QVariant)(variant.UnsafePointer()))

}
func (this *QChart) OnSetExtension(slot func(super func(extension qt6.QGraphicsItem__Extension, variant *qt6.QVariant), extension qt6.QGraphicsItem__Extension, variant *qt6.QVariant)) {
	ok := C.QChart_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_setExtension
func miqt_exec_callback_QChart_setExtension(self *C.QChart, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension qt6.QGraphicsItem__Extension, variant *qt6.QVariant), extension qt6.QGraphicsItem__Extension, variant *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QGraphicsItem__Extension)(extension)

	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(variant))

	gofunc((&QChart{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QChart) callVirtualBase_Extension(variant *qt6.QVariant) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QChart_virtualbase_extension(unsafe.Pointer(this.h), (*C.QVariant)(variant.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QChart) OnExtension(slot func(super func(variant *qt6.QVariant) *qt6.QVariant, variant *qt6.QVariant) *qt6.QVariant) {
	ok := C.QChart_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_extension
func miqt_exec_callback_QChart_extension(self *C.QChart, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *qt6.QVariant) *qt6.QVariant, variant *qt6.QVariant) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQVariant(unsafe.Pointer(variant))

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_Extension, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QChart) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QChart_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QChart) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QChart_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QChart_isEmpty
func miqt_exec_callback_QChart_isEmpty(self *C.QChart, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QChart{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QChart) Delete() {
	C.QChart_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QChart) GoGC() {
	runtime.SetFinalizer(this, func(this *QChart) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
