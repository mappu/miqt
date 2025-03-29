package charts6

/*

#include "gen_qxyseries.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QXYSeries__PointConfiguration int

const (
	QXYSeries__Color           QXYSeries__PointConfiguration = 0
	QXYSeries__Size            QXYSeries__PointConfiguration = 1
	QXYSeries__Visibility      QXYSeries__PointConfiguration = 2
	QXYSeries__LabelVisibility QXYSeries__PointConfiguration = 3
)

type QXYSeries struct {
	h *C.QXYSeries
	*QAbstractSeries
}

func (this *QXYSeries) cPointer() *C.QXYSeries {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QXYSeries) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQXYSeries constructs the type using only CGO pointers.
func newQXYSeries(h *C.QXYSeries) *QXYSeries {
	if h == nil {
		return nil
	}
	var outptr_QAbstractSeries *C.QAbstractSeries = nil
	C.QXYSeries_virtbase(h, &outptr_QAbstractSeries)

	return &QXYSeries{h: h,
		QAbstractSeries: newQAbstractSeries(outptr_QAbstractSeries)}
}

// UnsafeNewQXYSeries constructs the type using only unsafe pointers.
func UnsafeNewQXYSeries(h unsafe.Pointer) *QXYSeries {
	return newQXYSeries((*C.QXYSeries)(h))
}

func (this *QXYSeries) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QXYSeries_metaObject(this.h)))
}

func (this *QXYSeries) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QXYSeries_metacast(this.h, param1_Cstring))
}

func QXYSeries_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QXYSeries_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QXYSeries) Append(x float64, y float64) {
	C.QXYSeries_append(this.h, (C.double)(x), (C.double)(y))
}

func (this *QXYSeries) AppendWithPoint(point *qt6.QPointF) {
	C.QXYSeries_appendWithPoint(this.h, (*C.QPointF)(point.UnsafePointer()))
}

func (this *QXYSeries) AppendWithPoints(points []qt6.QPointF) {
	points_CArray := (*[0xffff]*C.QPointF)(C.malloc(C.size_t(8 * len(points))))
	defer C.free(unsafe.Pointer(points_CArray))
	for i := range points {
		points_CArray[i] = (*C.QPointF)(points[i].UnsafePointer())
	}
	points_ma := C.struct_miqt_array{len: C.size_t(len(points)), data: unsafe.Pointer(points_CArray)}
	C.QXYSeries_appendWithPoints(this.h, points_ma)
}

func (this *QXYSeries) Replace(oldX float64, oldY float64, newX float64, newY float64) {
	C.QXYSeries_replace(this.h, (C.double)(oldX), (C.double)(oldY), (C.double)(newX), (C.double)(newY))
}

func (this *QXYSeries) Replace2(oldPoint *qt6.QPointF, newPoint *qt6.QPointF) {
	C.QXYSeries_replace2(this.h, (*C.QPointF)(oldPoint.UnsafePointer()), (*C.QPointF)(newPoint.UnsafePointer()))
}

func (this *QXYSeries) Replace3(index int, newX float64, newY float64) {
	C.QXYSeries_replace3(this.h, (C.int)(index), (C.double)(newX), (C.double)(newY))
}

func (this *QXYSeries) Replace4(index int, newPoint *qt6.QPointF) {
	C.QXYSeries_replace4(this.h, (C.int)(index), (*C.QPointF)(newPoint.UnsafePointer()))
}

func (this *QXYSeries) Remove(x float64, y float64) {
	C.QXYSeries_remove(this.h, (C.double)(x), (C.double)(y))
}

func (this *QXYSeries) RemoveWithPoint(point *qt6.QPointF) {
	C.QXYSeries_removeWithPoint(this.h, (*C.QPointF)(point.UnsafePointer()))
}

func (this *QXYSeries) RemoveWithIndex(index int) {
	C.QXYSeries_removeWithIndex(this.h, (C.int)(index))
}

func (this *QXYSeries) RemovePoints(index int, count int) {
	C.QXYSeries_removePoints(this.h, (C.int)(index), (C.int)(count))
}

func (this *QXYSeries) Insert(index int, point *qt6.QPointF) {
	C.QXYSeries_insert(this.h, (C.int)(index), (*C.QPointF)(point.UnsafePointer()))
}

func (this *QXYSeries) Clear() {
	C.QXYSeries_clear(this.h)
}

func (this *QXYSeries) Count() int {
	return (int)(C.QXYSeries_count(this.h))
}

func (this *QXYSeries) Points() []qt6.QPointF {
	var _ma C.struct_miqt_array = C.QXYSeries_points(this.h)
	_ret := make([]qt6.QPointF, int(_ma.len))
	_outCast := (*[0xffff]*C.QPointF)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QXYSeries) PointsVector() []qt6.QPointF {
	var _ma C.struct_miqt_array = C.QXYSeries_pointsVector(this.h)
	_ret := make([]qt6.QPointF, int(_ma.len))
	_outCast := (*[0xffff]*C.QPointF)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QXYSeries) At(index int) *qt6.QPointF {
	return qt6.UnsafeNewQPointF(unsafe.Pointer(C.QXYSeries_at(this.h, (C.int)(index))))
}

func (this *QXYSeries) OperatorShiftLeft(point *qt6.QPointF) *QXYSeries {
	return newQXYSeries(C.QXYSeries_operatorShiftLeft(this.h, (*C.QPointF)(point.UnsafePointer())))
}

func (this *QXYSeries) OperatorShiftLeftWithPoints(points []qt6.QPointF) *QXYSeries {
	points_CArray := (*[0xffff]*C.QPointF)(C.malloc(C.size_t(8 * len(points))))
	defer C.free(unsafe.Pointer(points_CArray))
	for i := range points {
		points_CArray[i] = (*C.QPointF)(points[i].UnsafePointer())
	}
	points_ma := C.struct_miqt_array{len: C.size_t(len(points)), data: unsafe.Pointer(points_CArray)}
	return newQXYSeries(C.QXYSeries_operatorShiftLeftWithPoints(this.h, points_ma))
}

func (this *QXYSeries) SetPen(pen *qt6.QPen) {
	C.QXYSeries_setPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QXYSeries) Pen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QXYSeries_pen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QXYSeries) SetBrush(brush *qt6.QBrush) {
	C.QXYSeries_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QXYSeries) Brush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QXYSeries_brush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QXYSeries) SetColor(color *qt6.QColor) {
	C.QXYSeries_setColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QXYSeries) Color() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QXYSeries_color(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QXYSeries) SetSelectedColor(color *qt6.QColor) {
	C.QXYSeries_setSelectedColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QXYSeries) SelectedColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QXYSeries_selectedColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QXYSeries) SetPointsVisible() {
	C.QXYSeries_setPointsVisible(this.h)
}

func (this *QXYSeries) PointsVisible() bool {
	return (bool)(C.QXYSeries_pointsVisible(this.h))
}

func (this *QXYSeries) SetPointLabelsFormat(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QXYSeries_setPointLabelsFormat(this.h, format_ms)
}

func (this *QXYSeries) PointLabelsFormat() string {
	var _ms C.struct_miqt_string = C.QXYSeries_pointLabelsFormat(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QXYSeries) SetPointLabelsVisible() {
	C.QXYSeries_setPointLabelsVisible(this.h)
}

func (this *QXYSeries) PointLabelsVisible() bool {
	return (bool)(C.QXYSeries_pointLabelsVisible(this.h))
}

func (this *QXYSeries) SetPointLabelsFont(font *qt6.QFont) {
	C.QXYSeries_setPointLabelsFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QXYSeries) PointLabelsFont() *qt6.QFont {
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QXYSeries_pointLabelsFont(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QXYSeries) SetPointLabelsColor(color *qt6.QColor) {
	C.QXYSeries_setPointLabelsColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QXYSeries) PointLabelsColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QXYSeries_pointLabelsColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QXYSeries) SetPointLabelsClipping() {
	C.QXYSeries_setPointLabelsClipping(this.h)
}

func (this *QXYSeries) PointLabelsClipping() bool {
	return (bool)(C.QXYSeries_pointLabelsClipping(this.h))
}

func (this *QXYSeries) ReplaceWithPoints(points []qt6.QPointF) {
	points_CArray := (*[0xffff]*C.QPointF)(C.malloc(C.size_t(8 * len(points))))
	defer C.free(unsafe.Pointer(points_CArray))
	for i := range points {
		points_CArray[i] = (*C.QPointF)(points[i].UnsafePointer())
	}
	points_ma := C.struct_miqt_array{len: C.size_t(len(points)), data: unsafe.Pointer(points_CArray)}
	C.QXYSeries_replaceWithPoints(this.h, points_ma)
}

func (this *QXYSeries) IsPointSelected(index int) bool {
	return (bool)(C.QXYSeries_isPointSelected(this.h, (C.int)(index)))
}

func (this *QXYSeries) SelectPoint(index int) {
	C.QXYSeries_selectPoint(this.h, (C.int)(index))
}

func (this *QXYSeries) DeselectPoint(index int) {
	C.QXYSeries_deselectPoint(this.h, (C.int)(index))
}

func (this *QXYSeries) SetPointSelected(index int, selected bool) {
	C.QXYSeries_setPointSelected(this.h, (C.int)(index), (C.bool)(selected))
}

func (this *QXYSeries) SelectAllPoints() {
	C.QXYSeries_selectAllPoints(this.h)
}

func (this *QXYSeries) DeselectAllPoints() {
	C.QXYSeries_deselectAllPoints(this.h)
}

func (this *QXYSeries) SelectPoints(indexes []int) {
	indexes_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = (C.int)(indexes[i])
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	C.QXYSeries_selectPoints(this.h, indexes_ma)
}

func (this *QXYSeries) DeselectPoints(indexes []int) {
	indexes_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = (C.int)(indexes[i])
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	C.QXYSeries_deselectPoints(this.h, indexes_ma)
}

func (this *QXYSeries) ToggleSelection(indexes []int) {
	indexes_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = (C.int)(indexes[i])
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	C.QXYSeries_toggleSelection(this.h, indexes_ma)
}

func (this *QXYSeries) SelectedPoints() []int {
	var _ma C.struct_miqt_array = C.QXYSeries_selectedPoints(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QXYSeries) SetLightMarker(lightMarker *qt6.QImage) {
	C.QXYSeries_setLightMarker(this.h, (*C.QImage)(lightMarker.UnsafePointer()))
}

func (this *QXYSeries) LightMarker() *qt6.QImage {
	return qt6.UnsafeNewQImage(unsafe.Pointer(C.QXYSeries_lightMarker(this.h)))
}

func (this *QXYSeries) SetSelectedLightMarker(selectedLightMarker *qt6.QImage) {
	C.QXYSeries_setSelectedLightMarker(this.h, (*C.QImage)(selectedLightMarker.UnsafePointer()))
}

func (this *QXYSeries) SelectedLightMarker() *qt6.QImage {
	return qt6.UnsafeNewQImage(unsafe.Pointer(C.QXYSeries_selectedLightMarker(this.h)))
}

func (this *QXYSeries) SetMarkerSize(size float64) {
	C.QXYSeries_setMarkerSize(this.h, (C.double)(size))
}

func (this *QXYSeries) MarkerSize() float64 {
	return (float64)(C.QXYSeries_markerSize(this.h))
}

func (this *QXYSeries) SetBestFitLineVisible() {
	C.QXYSeries_setBestFitLineVisible(this.h)
}

func (this *QXYSeries) BestFitLineVisible() bool {
	return (bool)(C.QXYSeries_bestFitLineVisible(this.h))
}

func (this *QXYSeries) BestFitLineEquation(ok *bool) struct {
	First  float64
	Second float64
} {
	var _mm C.struct_miqt_map = C.QXYSeries_bestFitLineEquation(this.h, (*C.bool)(unsafe.Pointer(ok)))
	_First_CArray := (*[0xffff]C.double)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]C.double)(unsafe.Pointer(_mm.values))
	_entry_First := (float64)(_First_CArray[0])

	_entry_Second := (float64)(_Second_CArray[0])

	return struct {
		First  float64
		Second float64
	}{First: _entry_First, Second: _entry_Second}
}

func (this *QXYSeries) SetBestFitLinePen(pen *qt6.QPen) {
	C.QXYSeries_setBestFitLinePen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QXYSeries) BestFitLinePen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QXYSeries_bestFitLinePen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QXYSeries) SetBestFitLineColor(color *qt6.QColor) {
	C.QXYSeries_setBestFitLineColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QXYSeries) BestFitLineColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QXYSeries_bestFitLineColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QXYSeries) ClearPointConfiguration(index int) {
	C.QXYSeries_clearPointConfiguration(this.h, (C.int)(index))
}

func (this *QXYSeries) ClearPointConfiguration2(index int, key QXYSeries__PointConfiguration) {
	C.QXYSeries_clearPointConfiguration2(this.h, (C.int)(index), (C.int)(key))
}

func (this *QXYSeries) ClearPointsConfiguration() {
	C.QXYSeries_clearPointsConfiguration(this.h)
}

func (this *QXYSeries) ClearPointsConfigurationWithKey(key QXYSeries__PointConfiguration) {
	C.QXYSeries_clearPointsConfigurationWithKey(this.h, (C.int)(key))
}

func (this *QXYSeries) SetPointConfiguration(index int, configuration map[QXYSeries__PointConfiguration]qt6.QVariant) {
	configuration_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(configuration))))
	defer C.free(unsafe.Pointer(configuration_Keys_CArray))
	configuration_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(configuration))))
	defer C.free(unsafe.Pointer(configuration_Values_CArray))
	configuration_ctr := 0
	for configuration_k, configuration_v := range configuration {
		configuration_Keys_CArray[configuration_ctr] = (C.int)(configuration_k)
		configuration_Values_CArray[configuration_ctr] = (*C.QVariant)(configuration_v.UnsafePointer())
		configuration_ctr++
	}
	configuration_mm := C.struct_miqt_map{
		len:    C.size_t(len(configuration)),
		keys:   unsafe.Pointer(configuration_Keys_CArray),
		values: unsafe.Pointer(configuration_Values_CArray),
	}
	C.QXYSeries_setPointConfiguration(this.h, (C.int)(index), configuration_mm)
}

func (this *QXYSeries) SetPointConfiguration2(index int, key QXYSeries__PointConfiguration, value *qt6.QVariant) {
	C.QXYSeries_setPointConfiguration2(this.h, (C.int)(index), (C.int)(key), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QXYSeries) SetPointsConfiguration(pointsConfiguration map[int]map[QXYSeries__PointConfiguration]qt6.QVariant) {
	pointsConfiguration_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(pointsConfiguration))))
	defer C.free(unsafe.Pointer(pointsConfiguration_Keys_CArray))
	pointsConfiguration_Values_CArray := (*[0xffff]C.struct_miqt_map)(C.malloc(C.size_t(8 * len(pointsConfiguration))))
	defer C.free(unsafe.Pointer(pointsConfiguration_Values_CArray))
	pointsConfiguration_ctr := 0
	for pointsConfiguration_k, pointsConfiguration_v := range pointsConfiguration {
		pointsConfiguration_Keys_CArray[pointsConfiguration_ctr] = (C.int)(pointsConfiguration_k)
		pointsConfiguration_v_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(pointsConfiguration_v))))
		defer C.free(unsafe.Pointer(pointsConfiguration_v_Keys_CArray))
		pointsConfiguration_v_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(pointsConfiguration_v))))
		defer C.free(unsafe.Pointer(pointsConfiguration_v_Values_CArray))
		pointsConfiguration_v_ctr := 0
		for pointsConfiguration_v_k, pointsConfiguration_v_v := range pointsConfiguration_v {
			pointsConfiguration_v_Keys_CArray[pointsConfiguration_v_ctr] = (C.int)(pointsConfiguration_v_k)
			pointsConfiguration_v_Values_CArray[pointsConfiguration_v_ctr] = (*C.QVariant)(pointsConfiguration_v_v.UnsafePointer())
			pointsConfiguration_v_ctr++
		}
		pointsConfiguration_v_mm := C.struct_miqt_map{
			len:    C.size_t(len(pointsConfiguration_v)),
			keys:   unsafe.Pointer(pointsConfiguration_v_Keys_CArray),
			values: unsafe.Pointer(pointsConfiguration_v_Values_CArray),
		}
		pointsConfiguration_Values_CArray[pointsConfiguration_ctr] = pointsConfiguration_v_mm
		pointsConfiguration_ctr++
	}
	pointsConfiguration_mm := C.struct_miqt_map{
		len:    C.size_t(len(pointsConfiguration)),
		keys:   unsafe.Pointer(pointsConfiguration_Keys_CArray),
		values: unsafe.Pointer(pointsConfiguration_Values_CArray),
	}
	C.QXYSeries_setPointsConfiguration(this.h, pointsConfiguration_mm)
}

func (this *QXYSeries) PointConfiguration(index int) map[QXYSeries__PointConfiguration]qt6.QVariant {
	var _mm C.struct_miqt_map = C.QXYSeries_pointConfiguration(this.h, (C.int)(index))
	_ret := make(map[QXYSeries__PointConfiguration]qt6.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (QXYSeries__PointConfiguration)(_Keys[i])

		_hashval_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_hashval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_hashval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QXYSeries) PointsConfiguration() map[int]map[QXYSeries__PointConfiguration]qt6.QVariant {
	var _mm C.struct_miqt_map = C.QXYSeries_pointsConfiguration(this.h)
	_ret := make(map[int]map[QXYSeries__PointConfiguration]qt6.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]C.struct_miqt_map)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		var _hashval_mm C.struct_miqt_map = _Values[i]
		_hashval_ret := make(map[QXYSeries__PointConfiguration]qt6.QVariant, int(_hashval_mm.len))
		_hashval_Keys := (*[0xffff]C.int)(unsafe.Pointer(_hashval_mm.keys))
		_hashval_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_hashval_mm.values))
		for i := 0; i < int(_hashval_mm.len); i++ {
			_hashval_entry_Key := (QXYSeries__PointConfiguration)(_hashval_Keys[i])

			_hashval_hashval_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_hashval_Values[i]))
			_hashval_hashval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
			_hashval_entry_Value := *_hashval_hashval_goptr

			_hashval_ret[_hashval_entry_Key] = _hashval_entry_Value
		}
		_entry_Value := _hashval_ret

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QXYSeries) SizeBy(sourceData []float64, minSize float64, maxSize float64) {
	sourceData_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(sourceData))))
	defer C.free(unsafe.Pointer(sourceData_CArray))
	for i := range sourceData {
		sourceData_CArray[i] = (C.double)(sourceData[i])
	}
	sourceData_ma := C.struct_miqt_array{len: C.size_t(len(sourceData)), data: unsafe.Pointer(sourceData_CArray)}
	C.QXYSeries_sizeBy(this.h, sourceData_ma, (C.double)(minSize), (C.double)(maxSize))
}

func (this *QXYSeries) ColorBy(sourceData []float64) {
	sourceData_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(sourceData))))
	defer C.free(unsafe.Pointer(sourceData_CArray))
	for i := range sourceData {
		sourceData_CArray[i] = (C.double)(sourceData[i])
	}
	sourceData_ma := C.struct_miqt_array{len: C.size_t(len(sourceData)), data: unsafe.Pointer(sourceData_CArray)}
	C.QXYSeries_colorBy(this.h, sourceData_ma)
}

func (this *QXYSeries) Clicked(point *qt6.QPointF) {
	C.QXYSeries_clicked(this.h, (*C.QPointF)(point.UnsafePointer()))
}
func (this *QXYSeries) OnClicked(slot func(point *qt6.QPointF)) {
	C.QXYSeries_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_clicked
func miqt_exec_callback_QXYSeries_clicked(cb C.intptr_t, point *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(point *qt6.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(point))

	gofunc(slotval1)
}

func (this *QXYSeries) Hovered(point *qt6.QPointF, state bool) {
	C.QXYSeries_hovered(this.h, (*C.QPointF)(point.UnsafePointer()), (C.bool)(state))
}
func (this *QXYSeries) OnHovered(slot func(point *qt6.QPointF, state bool)) {
	C.QXYSeries_connect_hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_hovered
func miqt_exec_callback_QXYSeries_hovered(cb C.intptr_t, point *C.QPointF, state C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(point *qt6.QPointF, state bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(point))

	slotval2 := (bool)(state)

	gofunc(slotval1, slotval2)
}

func (this *QXYSeries) Pressed(point *qt6.QPointF) {
	C.QXYSeries_pressed(this.h, (*C.QPointF)(point.UnsafePointer()))
}
func (this *QXYSeries) OnPressed(slot func(point *qt6.QPointF)) {
	C.QXYSeries_connect_pressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_pressed
func miqt_exec_callback_QXYSeries_pressed(cb C.intptr_t, point *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(point *qt6.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(point))

	gofunc(slotval1)
}

func (this *QXYSeries) Released(point *qt6.QPointF) {
	C.QXYSeries_released(this.h, (*C.QPointF)(point.UnsafePointer()))
}
func (this *QXYSeries) OnReleased(slot func(point *qt6.QPointF)) {
	C.QXYSeries_connect_released(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_released
func miqt_exec_callback_QXYSeries_released(cb C.intptr_t, point *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(point *qt6.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(point))

	gofunc(slotval1)
}

func (this *QXYSeries) DoubleClicked(point *qt6.QPointF) {
	C.QXYSeries_doubleClicked(this.h, (*C.QPointF)(point.UnsafePointer()))
}
func (this *QXYSeries) OnDoubleClicked(slot func(point *qt6.QPointF)) {
	C.QXYSeries_connect_doubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_doubleClicked
func miqt_exec_callback_QXYSeries_doubleClicked(cb C.intptr_t, point *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(point *qt6.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(point))

	gofunc(slotval1)
}

func (this *QXYSeries) PointReplaced(index int) {
	C.QXYSeries_pointReplaced(this.h, (C.int)(index))
}
func (this *QXYSeries) OnPointReplaced(slot func(index int)) {
	C.QXYSeries_connect_pointReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_pointReplaced
func miqt_exec_callback_QXYSeries_pointReplaced(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QXYSeries) PointRemoved(index int) {
	C.QXYSeries_pointRemoved(this.h, (C.int)(index))
}
func (this *QXYSeries) OnPointRemoved(slot func(index int)) {
	C.QXYSeries_connect_pointRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_pointRemoved
func miqt_exec_callback_QXYSeries_pointRemoved(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QXYSeries) PointAdded(index int) {
	C.QXYSeries_pointAdded(this.h, (C.int)(index))
}
func (this *QXYSeries) OnPointAdded(slot func(index int)) {
	C.QXYSeries_connect_pointAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_pointAdded
func miqt_exec_callback_QXYSeries_pointAdded(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QXYSeries) ColorChanged(color qt6.QColor) {
	C.QXYSeries_colorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QXYSeries) OnColorChanged(slot func(color qt6.QColor)) {
	C.QXYSeries_connect_colorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_colorChanged
func miqt_exec_callback_QXYSeries_colorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	color_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(color))
	color_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *color_goptr

	gofunc(slotval1)
}

func (this *QXYSeries) SelectedColorChanged(color *qt6.QColor) {
	C.QXYSeries_selectedColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QXYSeries) OnSelectedColorChanged(slot func(color *qt6.QColor)) {
	C.QXYSeries_connect_selectedColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_selectedColorChanged
func miqt_exec_callback_QXYSeries_selectedColorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(color))

	gofunc(slotval1)
}

func (this *QXYSeries) PointsReplaced() {
	C.QXYSeries_pointsReplaced(this.h)
}
func (this *QXYSeries) OnPointsReplaced(slot func()) {
	C.QXYSeries_connect_pointsReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_pointsReplaced
func miqt_exec_callback_QXYSeries_pointsReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QXYSeries) PointLabelsFormatChanged(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QXYSeries_pointLabelsFormatChanged(this.h, format_ms)
}
func (this *QXYSeries) OnPointLabelsFormatChanged(slot func(format string)) {
	C.QXYSeries_connect_pointLabelsFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_pointLabelsFormatChanged
func miqt_exec_callback_QXYSeries_pointLabelsFormatChanged(cb C.intptr_t, format C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var format_ms C.struct_miqt_string = format
	format_ret := C.GoStringN(format_ms.data, C.int(int64(format_ms.len)))
	C.free(unsafe.Pointer(format_ms.data))
	slotval1 := format_ret

	gofunc(slotval1)
}

func (this *QXYSeries) PointLabelsVisibilityChanged(visible bool) {
	C.QXYSeries_pointLabelsVisibilityChanged(this.h, (C.bool)(visible))
}
func (this *QXYSeries) OnPointLabelsVisibilityChanged(slot func(visible bool)) {
	C.QXYSeries_connect_pointLabelsVisibilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_pointLabelsVisibilityChanged
func miqt_exec_callback_QXYSeries_pointLabelsVisibilityChanged(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QXYSeries) PointLabelsFontChanged(font *qt6.QFont) {
	C.QXYSeries_pointLabelsFontChanged(this.h, (*C.QFont)(font.UnsafePointer()))
}
func (this *QXYSeries) OnPointLabelsFontChanged(slot func(font *qt6.QFont)) {
	C.QXYSeries_connect_pointLabelsFontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_pointLabelsFontChanged
func miqt_exec_callback_QXYSeries_pointLabelsFontChanged(cb C.intptr_t, font *C.QFont) {
	gofunc, ok := cgo.Handle(cb).Value().(func(font *qt6.QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFont(unsafe.Pointer(font))

	gofunc(slotval1)
}

func (this *QXYSeries) PointLabelsColorChanged(color *qt6.QColor) {
	C.QXYSeries_pointLabelsColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QXYSeries) OnPointLabelsColorChanged(slot func(color *qt6.QColor)) {
	C.QXYSeries_connect_pointLabelsColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_pointLabelsColorChanged
func miqt_exec_callback_QXYSeries_pointLabelsColorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(color))

	gofunc(slotval1)
}

func (this *QXYSeries) PointLabelsClippingChanged(clipping bool) {
	C.QXYSeries_pointLabelsClippingChanged(this.h, (C.bool)(clipping))
}
func (this *QXYSeries) OnPointLabelsClippingChanged(slot func(clipping bool)) {
	C.QXYSeries_connect_pointLabelsClippingChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_pointLabelsClippingChanged
func miqt_exec_callback_QXYSeries_pointLabelsClippingChanged(cb C.intptr_t, clipping C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(clipping bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(clipping)

	gofunc(slotval1)
}

func (this *QXYSeries) PointsRemoved(index int, count int) {
	C.QXYSeries_pointsRemoved(this.h, (C.int)(index), (C.int)(count))
}
func (this *QXYSeries) OnPointsRemoved(slot func(index int, count int)) {
	C.QXYSeries_connect_pointsRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_pointsRemoved
func miqt_exec_callback_QXYSeries_pointsRemoved(cb C.intptr_t, index C.int, count C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, count int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := (int)(count)

	gofunc(slotval1, slotval2)
}

func (this *QXYSeries) PenChanged(pen *qt6.QPen) {
	C.QXYSeries_penChanged(this.h, (*C.QPen)(pen.UnsafePointer()))
}
func (this *QXYSeries) OnPenChanged(slot func(pen *qt6.QPen)) {
	C.QXYSeries_connect_penChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_penChanged
func miqt_exec_callback_QXYSeries_penChanged(cb C.intptr_t, pen *C.QPen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pen *qt6.QPen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPen(unsafe.Pointer(pen))

	gofunc(slotval1)
}

func (this *QXYSeries) SelectedPointsChanged() {
	C.QXYSeries_selectedPointsChanged(this.h)
}
func (this *QXYSeries) OnSelectedPointsChanged(slot func()) {
	C.QXYSeries_connect_selectedPointsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_selectedPointsChanged
func miqt_exec_callback_QXYSeries_selectedPointsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QXYSeries) LightMarkerChanged(lightMarker *qt6.QImage) {
	C.QXYSeries_lightMarkerChanged(this.h, (*C.QImage)(lightMarker.UnsafePointer()))
}
func (this *QXYSeries) OnLightMarkerChanged(slot func(lightMarker *qt6.QImage)) {
	C.QXYSeries_connect_lightMarkerChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_lightMarkerChanged
func miqt_exec_callback_QXYSeries_lightMarkerChanged(cb C.intptr_t, lightMarker *C.QImage) {
	gofunc, ok := cgo.Handle(cb).Value().(func(lightMarker *qt6.QImage))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQImage(unsafe.Pointer(lightMarker))

	gofunc(slotval1)
}

func (this *QXYSeries) SelectedLightMarkerChanged(selectedLightMarker *qt6.QImage) {
	C.QXYSeries_selectedLightMarkerChanged(this.h, (*C.QImage)(selectedLightMarker.UnsafePointer()))
}
func (this *QXYSeries) OnSelectedLightMarkerChanged(slot func(selectedLightMarker *qt6.QImage)) {
	C.QXYSeries_connect_selectedLightMarkerChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_selectedLightMarkerChanged
func miqt_exec_callback_QXYSeries_selectedLightMarkerChanged(cb C.intptr_t, selectedLightMarker *C.QImage) {
	gofunc, ok := cgo.Handle(cb).Value().(func(selectedLightMarker *qt6.QImage))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQImage(unsafe.Pointer(selectedLightMarker))

	gofunc(slotval1)
}

func (this *QXYSeries) BestFitLineVisibilityChanged(visible bool) {
	C.QXYSeries_bestFitLineVisibilityChanged(this.h, (C.bool)(visible))
}
func (this *QXYSeries) OnBestFitLineVisibilityChanged(slot func(visible bool)) {
	C.QXYSeries_connect_bestFitLineVisibilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_bestFitLineVisibilityChanged
func miqt_exec_callback_QXYSeries_bestFitLineVisibilityChanged(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QXYSeries) BestFitLinePenChanged(pen *qt6.QPen) {
	C.QXYSeries_bestFitLinePenChanged(this.h, (*C.QPen)(pen.UnsafePointer()))
}
func (this *QXYSeries) OnBestFitLinePenChanged(slot func(pen *qt6.QPen)) {
	C.QXYSeries_connect_bestFitLinePenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_bestFitLinePenChanged
func miqt_exec_callback_QXYSeries_bestFitLinePenChanged(cb C.intptr_t, pen *C.QPen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pen *qt6.QPen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPen(unsafe.Pointer(pen))

	gofunc(slotval1)
}

func (this *QXYSeries) BestFitLineColorChanged(color *qt6.QColor) {
	C.QXYSeries_bestFitLineColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QXYSeries) OnBestFitLineColorChanged(slot func(color *qt6.QColor)) {
	C.QXYSeries_connect_bestFitLineColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_bestFitLineColorChanged
func miqt_exec_callback_QXYSeries_bestFitLineColorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(color))

	gofunc(slotval1)
}

func (this *QXYSeries) PointsConfigurationChanged(configuration map[int]map[QXYSeries__PointConfiguration]qt6.QVariant) {
	configuration_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(configuration))))
	defer C.free(unsafe.Pointer(configuration_Keys_CArray))
	configuration_Values_CArray := (*[0xffff]C.struct_miqt_map)(C.malloc(C.size_t(8 * len(configuration))))
	defer C.free(unsafe.Pointer(configuration_Values_CArray))
	configuration_ctr := 0
	for configuration_k, configuration_v := range configuration {
		configuration_Keys_CArray[configuration_ctr] = (C.int)(configuration_k)
		configuration_v_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(configuration_v))))
		defer C.free(unsafe.Pointer(configuration_v_Keys_CArray))
		configuration_v_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(configuration_v))))
		defer C.free(unsafe.Pointer(configuration_v_Values_CArray))
		configuration_v_ctr := 0
		for configuration_v_k, configuration_v_v := range configuration_v {
			configuration_v_Keys_CArray[configuration_v_ctr] = (C.int)(configuration_v_k)
			configuration_v_Values_CArray[configuration_v_ctr] = (*C.QVariant)(configuration_v_v.UnsafePointer())
			configuration_v_ctr++
		}
		configuration_v_mm := C.struct_miqt_map{
			len:    C.size_t(len(configuration_v)),
			keys:   unsafe.Pointer(configuration_v_Keys_CArray),
			values: unsafe.Pointer(configuration_v_Values_CArray),
		}
		configuration_Values_CArray[configuration_ctr] = configuration_v_mm
		configuration_ctr++
	}
	configuration_mm := C.struct_miqt_map{
		len:    C.size_t(len(configuration)),
		keys:   unsafe.Pointer(configuration_Keys_CArray),
		values: unsafe.Pointer(configuration_Values_CArray),
	}
	C.QXYSeries_pointsConfigurationChanged(this.h, configuration_mm)
}
func (this *QXYSeries) OnPointsConfigurationChanged(slot func(configuration map[int]map[QXYSeries__PointConfiguration]qt6.QVariant)) {
	C.QXYSeries_connect_pointsConfigurationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_pointsConfigurationChanged
func miqt_exec_callback_QXYSeries_pointsConfigurationChanged(cb C.intptr_t, configuration C.struct_miqt_map) {
	gofunc, ok := cgo.Handle(cb).Value().(func(configuration map[int]map[QXYSeries__PointConfiguration]qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var configuration_mm C.struct_miqt_map = configuration
	configuration_ret := make(map[int]map[QXYSeries__PointConfiguration]qt6.QVariant, int(configuration_mm.len))
	configuration_Keys := (*[0xffff]C.int)(unsafe.Pointer(configuration_mm.keys))
	configuration_Values := (*[0xffff]C.struct_miqt_map)(unsafe.Pointer(configuration_mm.values))
	for i := 0; i < int(configuration_mm.len); i++ {
		configuration_entry_Key := (int)(configuration_Keys[i])

		var configuration_hashval_mm C.struct_miqt_map = configuration_Values[i]
		configuration_hashval_ret := make(map[QXYSeries__PointConfiguration]qt6.QVariant, int(configuration_hashval_mm.len))
		configuration_hashval_Keys := (*[0xffff]C.int)(unsafe.Pointer(configuration_hashval_mm.keys))
		configuration_hashval_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(configuration_hashval_mm.values))
		for i := 0; i < int(configuration_hashval_mm.len); i++ {
			configuration_hashval_entry_Key := (QXYSeries__PointConfiguration)(configuration_hashval_Keys[i])

			configuration_hashval_hashval_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(configuration_hashval_Values[i]))
			configuration_hashval_hashval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
			configuration_hashval_entry_Value := *configuration_hashval_hashval_goptr

			configuration_hashval_ret[configuration_hashval_entry_Key] = configuration_hashval_entry_Value
		}
		configuration_entry_Value := configuration_hashval_ret

		configuration_ret[configuration_entry_Key] = configuration_entry_Value
	}
	slotval1 := configuration_ret

	gofunc(slotval1)
}

func (this *QXYSeries) MarkerSizeChanged(size float64) {
	C.QXYSeries_markerSizeChanged(this.h, (C.double)(size))
}
func (this *QXYSeries) OnMarkerSizeChanged(slot func(size float64)) {
	C.QXYSeries_connect_markerSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QXYSeries_markerSizeChanged
func miqt_exec_callback_QXYSeries_markerSizeChanged(cb C.intptr_t, size C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(size float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(size)

	gofunc(slotval1)
}

func QXYSeries_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QXYSeries_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QXYSeries_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QXYSeries_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QXYSeries) SetPointsVisible1(visible bool) {
	C.QXYSeries_setPointsVisible1(this.h, (C.bool)(visible))
}

func (this *QXYSeries) SetPointLabelsVisible1(visible bool) {
	C.QXYSeries_setPointLabelsVisible1(this.h, (C.bool)(visible))
}

func (this *QXYSeries) SetPointLabelsClipping1(enabled bool) {
	C.QXYSeries_setPointLabelsClipping1(this.h, (C.bool)(enabled))
}

func (this *QXYSeries) SetBestFitLineVisible1(visible bool) {
	C.QXYSeries_setBestFitLineVisible1(this.h, (C.bool)(visible))
}

func (this *QXYSeries) ColorBy2(sourceData []float64, gradient *qt6.QLinearGradient) {
	sourceData_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(sourceData))))
	defer C.free(unsafe.Pointer(sourceData_CArray))
	for i := range sourceData {
		sourceData_CArray[i] = (C.double)(sourceData[i])
	}
	sourceData_ma := C.struct_miqt_array{len: C.size_t(len(sourceData)), data: unsafe.Pointer(sourceData_CArray)}
	C.QXYSeries_colorBy2(this.h, sourceData_ma, (*C.QLinearGradient)(gradient.UnsafePointer()))
}

// Delete this object from C++ memory.
func (this *QXYSeries) Delete() {
	C.QXYSeries_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QXYSeries) GoGC() {
	runtime.SetFinalizer(this, func(this *QXYSeries) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
