package qt

/*

#include "gen_qwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWidget__RenderFlag int

const (
	QWidget__DrawWindowBackground QWidget__RenderFlag = 1
	QWidget__DrawChildren         QWidget__RenderFlag = 2
	QWidget__IgnoreMask           QWidget__RenderFlag = 4
)

type QWidgetData struct {
	h *C.QWidgetData
}

func (this *QWidgetData) cPointer() *C.QWidgetData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWidgetData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWidgetData constructs the type using only CGO pointers.
func newQWidgetData(h *C.QWidgetData) *QWidgetData {
	if h == nil {
		return nil
	}

	return &QWidgetData{h: h}
}

// UnsafeNewQWidgetData constructs the type using only unsafe pointers.
func UnsafeNewQWidgetData(h unsafe.Pointer) *QWidgetData {
	return newQWidgetData((*C.QWidgetData)(h))
}

// NewQWidgetData constructs a new QWidgetData object.
func NewQWidgetData(param1 *QWidgetData) *QWidgetData {

	return newQWidgetData(C.QWidgetData_new(param1.cPointer()))
}

func (this *QWidgetData) OperatorAssign(param1 *QWidgetData) {
	C.QWidgetData_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QWidgetData) Delete() {
	C.QWidgetData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWidgetData) GoGC() {
	runtime.SetFinalizer(this, func(this *QWidgetData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWidget struct {
	h *C.QWidget
	*QObject
	*QPaintDevice
}

func (this *QWidget) cPointer() *C.QWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWidget constructs the type using only CGO pointers.
func newQWidget(h *C.QWidget) *QWidget {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil
	C.QWidget_virtbase(h, &outptr_QObject, &outptr_QPaintDevice)

	return &QWidget{h: h,
		QObject:      newQObject(outptr_QObject),
		QPaintDevice: newQPaintDevice(outptr_QPaintDevice)}
}

// UnsafeNewQWidget constructs the type using only unsafe pointers.
func UnsafeNewQWidget(h unsafe.Pointer) *QWidget {
	return newQWidget((*C.QWidget)(h))
}

// NewQWidget constructs a new QWidget object.
func NewQWidget(parent *QWidget) *QWidget {

	return newQWidget(C.QWidget_new(parent.cPointer()))
}

// NewQWidget2 constructs a new QWidget object.
func NewQWidget2() *QWidget {

	return newQWidget(C.QWidget_new2())
}

// NewQWidget3 constructs a new QWidget object.
func NewQWidget3(parent *QWidget, f WindowType) *QWidget {

	return newQWidget(C.QWidget_new3(parent.cPointer(), (C.int)(f)))
}

func (this *QWidget) MetaObject() *QMetaObject {
	return newQMetaObject(C.QWidget_MetaObject(this.h))
}

func (this *QWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWidget_Metacast(this.h, param1_Cstring))
}

func QWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) DevType() int {
	return (int)(C.QWidget_DevType(this.h))
}

func (this *QWidget) WinId() uintptr {
	return (uintptr)(C.QWidget_WinId(this.h))
}

func (this *QWidget) CreateWinId() {
	C.QWidget_CreateWinId(this.h)
}

func (this *QWidget) InternalWinId() uintptr {
	return (uintptr)(C.QWidget_InternalWinId(this.h))
}

func (this *QWidget) EffectiveWinId() uintptr {
	return (uintptr)(C.QWidget_EffectiveWinId(this.h))
}

func (this *QWidget) Style() *QStyle {
	return newQStyle(C.QWidget_Style(this.h))
}

func (this *QWidget) SetStyle(style *QStyle) {
	C.QWidget_SetStyle(this.h, style.cPointer())
}

func (this *QWidget) IsTopLevel() bool {
	return (bool)(C.QWidget_IsTopLevel(this.h))
}

func (this *QWidget) IsWindow() bool {
	return (bool)(C.QWidget_IsWindow(this.h))
}

func (this *QWidget) IsModal() bool {
	return (bool)(C.QWidget_IsModal(this.h))
}

func (this *QWidget) WindowModality() WindowModality {
	return (WindowModality)(C.QWidget_WindowModality(this.h))
}

func (this *QWidget) SetWindowModality(windowModality WindowModality) {
	C.QWidget_SetWindowModality(this.h, (C.int)(windowModality))
}

func (this *QWidget) IsEnabled() bool {
	return (bool)(C.QWidget_IsEnabled(this.h))
}

func (this *QWidget) IsEnabledTo(param1 *QWidget) bool {
	return (bool)(C.QWidget_IsEnabledTo(this.h, param1.cPointer()))
}

func (this *QWidget) IsEnabledToTLW() bool {
	return (bool)(C.QWidget_IsEnabledToTLW(this.h))
}

func (this *QWidget) SetEnabled(enabled bool) {
	C.QWidget_SetEnabled(this.h, (C.bool)(enabled))
}

func (this *QWidget) SetDisabled(disabled bool) {
	C.QWidget_SetDisabled(this.h, (C.bool)(disabled))
}

func (this *QWidget) SetWindowModified(windowModified bool) {
	C.QWidget_SetWindowModified(this.h, (C.bool)(windowModified))
}

func (this *QWidget) FrameGeometry() *QRect {
	_goptr := newQRect(C.QWidget_FrameGeometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Geometry() *QRect {
	return newQRect(C.QWidget_Geometry(this.h))
}

func (this *QWidget) NormalGeometry() *QRect {
	_goptr := newQRect(C.QWidget_NormalGeometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) X() int {
	return (int)(C.QWidget_X(this.h))
}

func (this *QWidget) Y() int {
	return (int)(C.QWidget_Y(this.h))
}

func (this *QWidget) Pos() *QPoint {
	_goptr := newQPoint(C.QWidget_Pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) FrameSize() *QSize {
	_goptr := newQSize(C.QWidget_FrameSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Size() *QSize {
	_goptr := newQSize(C.QWidget_Size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Width() int {
	return (int)(C.QWidget_Width(this.h))
}

func (this *QWidget) Height() int {
	return (int)(C.QWidget_Height(this.h))
}

func (this *QWidget) Rect() *QRect {
	_goptr := newQRect(C.QWidget_Rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) ChildrenRect() *QRect {
	_goptr := newQRect(C.QWidget_ChildrenRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) ChildrenRegion() *QRegion {
	_goptr := newQRegion(C.QWidget_ChildrenRegion(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MinimumSize() *QSize {
	_goptr := newQSize(C.QWidget_MinimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MaximumSize() *QSize {
	_goptr := newQSize(C.QWidget_MaximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MinimumWidth() int {
	return (int)(C.QWidget_MinimumWidth(this.h))
}

func (this *QWidget) MinimumHeight() int {
	return (int)(C.QWidget_MinimumHeight(this.h))
}

func (this *QWidget) MaximumWidth() int {
	return (int)(C.QWidget_MaximumWidth(this.h))
}

func (this *QWidget) MaximumHeight() int {
	return (int)(C.QWidget_MaximumHeight(this.h))
}

func (this *QWidget) SetMinimumSize(minimumSize *QSize) {
	C.QWidget_SetMinimumSize(this.h, minimumSize.cPointer())
}

func (this *QWidget) SetMinimumSize2(minw int, minh int) {
	C.QWidget_SetMinimumSize2(this.h, (C.int)(minw), (C.int)(minh))
}

func (this *QWidget) SetMaximumSize(maximumSize *QSize) {
	C.QWidget_SetMaximumSize(this.h, maximumSize.cPointer())
}

func (this *QWidget) SetMaximumSize2(maxw int, maxh int) {
	C.QWidget_SetMaximumSize2(this.h, (C.int)(maxw), (C.int)(maxh))
}

func (this *QWidget) SetMinimumWidth(minw int) {
	C.QWidget_SetMinimumWidth(this.h, (C.int)(minw))
}

func (this *QWidget) SetMinimumHeight(minh int) {
	C.QWidget_SetMinimumHeight(this.h, (C.int)(minh))
}

func (this *QWidget) SetMaximumWidth(maxw int) {
	C.QWidget_SetMaximumWidth(this.h, (C.int)(maxw))
}

func (this *QWidget) SetMaximumHeight(maxh int) {
	C.QWidget_SetMaximumHeight(this.h, (C.int)(maxh))
}

func (this *QWidget) SizeIncrement() *QSize {
	_goptr := newQSize(C.QWidget_SizeIncrement(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SetSizeIncrement(sizeIncrement *QSize) {
	C.QWidget_SetSizeIncrement(this.h, sizeIncrement.cPointer())
}

func (this *QWidget) SetSizeIncrement2(w int, h int) {
	C.QWidget_SetSizeIncrement2(this.h, (C.int)(w), (C.int)(h))
}

func (this *QWidget) BaseSize() *QSize {
	_goptr := newQSize(C.QWidget_BaseSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SetBaseSize(baseSize *QSize) {
	C.QWidget_SetBaseSize(this.h, baseSize.cPointer())
}

func (this *QWidget) SetBaseSize2(basew int, baseh int) {
	C.QWidget_SetBaseSize2(this.h, (C.int)(basew), (C.int)(baseh))
}

func (this *QWidget) SetFixedSize(fixedSize *QSize) {
	C.QWidget_SetFixedSize(this.h, fixedSize.cPointer())
}

func (this *QWidget) SetFixedSize2(w int, h int) {
	C.QWidget_SetFixedSize2(this.h, (C.int)(w), (C.int)(h))
}

func (this *QWidget) SetFixedWidth(w int) {
	C.QWidget_SetFixedWidth(this.h, (C.int)(w))
}

func (this *QWidget) SetFixedHeight(h int) {
	C.QWidget_SetFixedHeight(this.h, (C.int)(h))
}

func (this *QWidget) MapToGlobal(param1 *QPoint) *QPoint {
	_goptr := newQPoint(C.QWidget_MapToGlobal(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MapFromGlobal(param1 *QPoint) *QPoint {
	_goptr := newQPoint(C.QWidget_MapFromGlobal(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MapToParent(param1 *QPoint) *QPoint {
	_goptr := newQPoint(C.QWidget_MapToParent(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MapFromParent(param1 *QPoint) *QPoint {
	_goptr := newQPoint(C.QWidget_MapFromParent(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MapTo(param1 *QWidget, param2 *QPoint) *QPoint {
	_goptr := newQPoint(C.QWidget_MapTo(this.h, param1.cPointer(), param2.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MapFrom(param1 *QWidget, param2 *QPoint) *QPoint {
	_goptr := newQPoint(C.QWidget_MapFrom(this.h, param1.cPointer(), param2.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Window() *QWidget {
	return newQWidget(C.QWidget_Window(this.h))
}

func (this *QWidget) NativeParentWidget() *QWidget {
	return newQWidget(C.QWidget_NativeParentWidget(this.h))
}

func (this *QWidget) TopLevelWidget() *QWidget {
	return newQWidget(C.QWidget_TopLevelWidget(this.h))
}

func (this *QWidget) Palette() *QPalette {
	return newQPalette(C.QWidget_Palette(this.h))
}

func (this *QWidget) SetPalette(palette *QPalette) {
	C.QWidget_SetPalette(this.h, palette.cPointer())
}

func (this *QWidget) SetBackgroundRole(backgroundRole QPalette__ColorRole) {
	C.QWidget_SetBackgroundRole(this.h, (C.int)(backgroundRole))
}

func (this *QWidget) BackgroundRole() QPalette__ColorRole {
	return (QPalette__ColorRole)(C.QWidget_BackgroundRole(this.h))
}

func (this *QWidget) SetForegroundRole(foregroundRole QPalette__ColorRole) {
	C.QWidget_SetForegroundRole(this.h, (C.int)(foregroundRole))
}

func (this *QWidget) ForegroundRole() QPalette__ColorRole {
	return (QPalette__ColorRole)(C.QWidget_ForegroundRole(this.h))
}

func (this *QWidget) Font() *QFont {
	return newQFont(C.QWidget_Font(this.h))
}

func (this *QWidget) SetFont(font *QFont) {
	C.QWidget_SetFont(this.h, font.cPointer())
}

func (this *QWidget) FontMetrics() *QFontMetrics {
	_goptr := newQFontMetrics(C.QWidget_FontMetrics(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) FontInfo() *QFontInfo {
	_goptr := newQFontInfo(C.QWidget_FontInfo(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Cursor() *QCursor {
	_goptr := newQCursor(C.QWidget_Cursor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SetCursor(cursor *QCursor) {
	C.QWidget_SetCursor(this.h, cursor.cPointer())
}

func (this *QWidget) UnsetCursor() {
	C.QWidget_UnsetCursor(this.h)
}

func (this *QWidget) SetMouseTracking(enable bool) {
	C.QWidget_SetMouseTracking(this.h, (C.bool)(enable))
}

func (this *QWidget) HasMouseTracking() bool {
	return (bool)(C.QWidget_HasMouseTracking(this.h))
}

func (this *QWidget) UnderMouse() bool {
	return (bool)(C.QWidget_UnderMouse(this.h))
}

func (this *QWidget) SetTabletTracking(enable bool) {
	C.QWidget_SetTabletTracking(this.h, (C.bool)(enable))
}

func (this *QWidget) HasTabletTracking() bool {
	return (bool)(C.QWidget_HasTabletTracking(this.h))
}

func (this *QWidget) SetMask(mask *QBitmap) {
	C.QWidget_SetMask(this.h, mask.cPointer())
}

func (this *QWidget) SetMaskWithMask(mask *QRegion) {
	C.QWidget_SetMaskWithMask(this.h, mask.cPointer())
}

func (this *QWidget) Mask() *QRegion {
	_goptr := newQRegion(C.QWidget_Mask(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) ClearMask() {
	C.QWidget_ClearMask(this.h)
}

func (this *QWidget) Render(target *QPaintDevice) {
	C.QWidget_Render(this.h, target.cPointer())
}

func (this *QWidget) RenderWithPainter(painter *QPainter) {
	C.QWidget_RenderWithPainter(this.h, painter.cPointer())
}

func (this *QWidget) Grab() *QPixmap {
	_goptr := newQPixmap(C.QWidget_Grab(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) GraphicsEffect() *QGraphicsEffect {
	return newQGraphicsEffect(C.QWidget_GraphicsEffect(this.h))
}

func (this *QWidget) SetGraphicsEffect(effect *QGraphicsEffect) {
	C.QWidget_SetGraphicsEffect(this.h, effect.cPointer())
}

func (this *QWidget) GrabGesture(typeVal GestureType) {
	C.QWidget_GrabGesture(this.h, (C.int)(typeVal))
}

func (this *QWidget) UngrabGesture(typeVal GestureType) {
	C.QWidget_UngrabGesture(this.h, (C.int)(typeVal))
}

func (this *QWidget) SetWindowTitle(windowTitle string) {
	windowTitle_ms := C.struct_miqt_string{}
	windowTitle_ms.data = C.CString(windowTitle)
	windowTitle_ms.len = C.size_t(len(windowTitle))
	defer C.free(unsafe.Pointer(windowTitle_ms.data))
	C.QWidget_SetWindowTitle(this.h, windowTitle_ms)
}

func (this *QWidget) SetStyleSheet(styleSheet string) {
	styleSheet_ms := C.struct_miqt_string{}
	styleSheet_ms.data = C.CString(styleSheet)
	styleSheet_ms.len = C.size_t(len(styleSheet))
	defer C.free(unsafe.Pointer(styleSheet_ms.data))
	C.QWidget_SetStyleSheet(this.h, styleSheet_ms)
}

func (this *QWidget) StyleSheet() string {
	var _ms C.struct_miqt_string = C.QWidget_StyleSheet(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) WindowTitle() string {
	var _ms C.struct_miqt_string = C.QWidget_WindowTitle(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetWindowIcon(icon *QIcon) {
	C.QWidget_SetWindowIcon(this.h, icon.cPointer())
}

func (this *QWidget) WindowIcon() *QIcon {
	_goptr := newQIcon(C.QWidget_WindowIcon(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SetWindowIconText(windowIconText string) {
	windowIconText_ms := C.struct_miqt_string{}
	windowIconText_ms.data = C.CString(windowIconText)
	windowIconText_ms.len = C.size_t(len(windowIconText))
	defer C.free(unsafe.Pointer(windowIconText_ms.data))
	C.QWidget_SetWindowIconText(this.h, windowIconText_ms)
}

func (this *QWidget) WindowIconText() string {
	var _ms C.struct_miqt_string = C.QWidget_WindowIconText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetWindowRole(windowRole string) {
	windowRole_ms := C.struct_miqt_string{}
	windowRole_ms.data = C.CString(windowRole)
	windowRole_ms.len = C.size_t(len(windowRole))
	defer C.free(unsafe.Pointer(windowRole_ms.data))
	C.QWidget_SetWindowRole(this.h, windowRole_ms)
}

func (this *QWidget) WindowRole() string {
	var _ms C.struct_miqt_string = C.QWidget_WindowRole(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetWindowFilePath(filePath string) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QWidget_SetWindowFilePath(this.h, filePath_ms)
}

func (this *QWidget) WindowFilePath() string {
	var _ms C.struct_miqt_string = C.QWidget_WindowFilePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetWindowOpacity(level float64) {
	C.QWidget_SetWindowOpacity(this.h, (C.double)(level))
}

func (this *QWidget) WindowOpacity() float64 {
	return (float64)(C.QWidget_WindowOpacity(this.h))
}

func (this *QWidget) IsWindowModified() bool {
	return (bool)(C.QWidget_IsWindowModified(this.h))
}

func (this *QWidget) SetToolTip(toolTip string) {
	toolTip_ms := C.struct_miqt_string{}
	toolTip_ms.data = C.CString(toolTip)
	toolTip_ms.len = C.size_t(len(toolTip))
	defer C.free(unsafe.Pointer(toolTip_ms.data))
	C.QWidget_SetToolTip(this.h, toolTip_ms)
}

func (this *QWidget) ToolTip() string {
	var _ms C.struct_miqt_string = C.QWidget_ToolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetToolTipDuration(msec int) {
	C.QWidget_SetToolTipDuration(this.h, (C.int)(msec))
}

func (this *QWidget) ToolTipDuration() int {
	return (int)(C.QWidget_ToolTipDuration(this.h))
}

func (this *QWidget) SetStatusTip(statusTip string) {
	statusTip_ms := C.struct_miqt_string{}
	statusTip_ms.data = C.CString(statusTip)
	statusTip_ms.len = C.size_t(len(statusTip))
	defer C.free(unsafe.Pointer(statusTip_ms.data))
	C.QWidget_SetStatusTip(this.h, statusTip_ms)
}

func (this *QWidget) StatusTip() string {
	var _ms C.struct_miqt_string = C.QWidget_StatusTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetWhatsThis(whatsThis string) {
	whatsThis_ms := C.struct_miqt_string{}
	whatsThis_ms.data = C.CString(whatsThis)
	whatsThis_ms.len = C.size_t(len(whatsThis))
	defer C.free(unsafe.Pointer(whatsThis_ms.data))
	C.QWidget_SetWhatsThis(this.h, whatsThis_ms)
}

func (this *QWidget) WhatsThis() string {
	var _ms C.struct_miqt_string = C.QWidget_WhatsThis(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) AccessibleName() string {
	var _ms C.struct_miqt_string = C.QWidget_AccessibleName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetAccessibleName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWidget_SetAccessibleName(this.h, name_ms)
}

func (this *QWidget) AccessibleDescription() string {
	var _ms C.struct_miqt_string = C.QWidget_AccessibleDescription(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetAccessibleDescription(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QWidget_SetAccessibleDescription(this.h, description_ms)
}

func (this *QWidget) SetLayoutDirection(direction LayoutDirection) {
	C.QWidget_SetLayoutDirection(this.h, (C.int)(direction))
}

func (this *QWidget) LayoutDirection() LayoutDirection {
	return (LayoutDirection)(C.QWidget_LayoutDirection(this.h))
}

func (this *QWidget) UnsetLayoutDirection() {
	C.QWidget_UnsetLayoutDirection(this.h)
}

func (this *QWidget) SetLocale(locale *QLocale) {
	C.QWidget_SetLocale(this.h, locale.cPointer())
}

func (this *QWidget) Locale() *QLocale {
	_goptr := newQLocale(C.QWidget_Locale(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) UnsetLocale() {
	C.QWidget_UnsetLocale(this.h)
}

func (this *QWidget) IsRightToLeft() bool {
	return (bool)(C.QWidget_IsRightToLeft(this.h))
}

func (this *QWidget) IsLeftToRight() bool {
	return (bool)(C.QWidget_IsLeftToRight(this.h))
}

func (this *QWidget) SetFocus() {
	C.QWidget_SetFocus(this.h)
}

func (this *QWidget) IsActiveWindow() bool {
	return (bool)(C.QWidget_IsActiveWindow(this.h))
}

func (this *QWidget) ActivateWindow() {
	C.QWidget_ActivateWindow(this.h)
}

func (this *QWidget) ClearFocus() {
	C.QWidget_ClearFocus(this.h)
}

func (this *QWidget) SetFocusWithReason(reason FocusReason) {
	C.QWidget_SetFocusWithReason(this.h, (C.int)(reason))
}

func (this *QWidget) FocusPolicy() FocusPolicy {
	return (FocusPolicy)(C.QWidget_FocusPolicy(this.h))
}

func (this *QWidget) SetFocusPolicy(policy FocusPolicy) {
	C.QWidget_SetFocusPolicy(this.h, (C.int)(policy))
}

func (this *QWidget) HasFocus() bool {
	return (bool)(C.QWidget_HasFocus(this.h))
}

func QWidget_SetTabOrder(param1 *QWidget, param2 *QWidget) {
	C.QWidget_SetTabOrder(param1.cPointer(), param2.cPointer())
}

func (this *QWidget) SetFocusProxy(focusProxy *QWidget) {
	C.QWidget_SetFocusProxy(this.h, focusProxy.cPointer())
}

func (this *QWidget) FocusProxy() *QWidget {
	return newQWidget(C.QWidget_FocusProxy(this.h))
}

func (this *QWidget) ContextMenuPolicy() ContextMenuPolicy {
	return (ContextMenuPolicy)(C.QWidget_ContextMenuPolicy(this.h))
}

func (this *QWidget) SetContextMenuPolicy(policy ContextMenuPolicy) {
	C.QWidget_SetContextMenuPolicy(this.h, (C.int)(policy))
}

func (this *QWidget) GrabMouse() {
	C.QWidget_GrabMouse(this.h)
}

func (this *QWidget) GrabMouseWithQCursor(param1 *QCursor) {
	C.QWidget_GrabMouseWithQCursor(this.h, param1.cPointer())
}

func (this *QWidget) ReleaseMouse() {
	C.QWidget_ReleaseMouse(this.h)
}

func (this *QWidget) GrabKeyboard() {
	C.QWidget_GrabKeyboard(this.h)
}

func (this *QWidget) ReleaseKeyboard() {
	C.QWidget_ReleaseKeyboard(this.h)
}

func (this *QWidget) GrabShortcut(key *QKeySequence) int {
	return (int)(C.QWidget_GrabShortcut(this.h, key.cPointer()))
}

func (this *QWidget) ReleaseShortcut(id int) {
	C.QWidget_ReleaseShortcut(this.h, (C.int)(id))
}

func (this *QWidget) SetShortcutEnabled(id int) {
	C.QWidget_SetShortcutEnabled(this.h, (C.int)(id))
}

func (this *QWidget) SetShortcutAutoRepeat(id int) {
	C.QWidget_SetShortcutAutoRepeat(this.h, (C.int)(id))
}

func QWidget_MouseGrabber() *QWidget {
	return newQWidget(C.QWidget_MouseGrabber())
}

func QWidget_KeyboardGrabber() *QWidget {
	return newQWidget(C.QWidget_KeyboardGrabber())
}

func (this *QWidget) UpdatesEnabled() bool {
	return (bool)(C.QWidget_UpdatesEnabled(this.h))
}

func (this *QWidget) SetUpdatesEnabled(enable bool) {
	C.QWidget_SetUpdatesEnabled(this.h, (C.bool)(enable))
}

func (this *QWidget) GraphicsProxyWidget() *QGraphicsProxyWidget {
	return newQGraphicsProxyWidget(C.QWidget_GraphicsProxyWidget(this.h))
}

func (this *QWidget) Update() {
	C.QWidget_Update(this.h)
}

func (this *QWidget) Repaint() {
	C.QWidget_Repaint(this.h)
}

func (this *QWidget) Update2(x int, y int, w int, h int) {
	C.QWidget_Update2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QWidget) UpdateWithQRect(param1 *QRect) {
	C.QWidget_UpdateWithQRect(this.h, param1.cPointer())
}

func (this *QWidget) UpdateWithQRegion(param1 *QRegion) {
	C.QWidget_UpdateWithQRegion(this.h, param1.cPointer())
}

func (this *QWidget) Repaint2(x int, y int, w int, h int) {
	C.QWidget_Repaint2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QWidget) RepaintWithQRect(param1 *QRect) {
	C.QWidget_RepaintWithQRect(this.h, param1.cPointer())
}

func (this *QWidget) RepaintWithQRegion(param1 *QRegion) {
	C.QWidget_RepaintWithQRegion(this.h, param1.cPointer())
}

func (this *QWidget) SetVisible(visible bool) {
	C.QWidget_SetVisible(this.h, (C.bool)(visible))
}

func (this *QWidget) SetHidden(hidden bool) {
	C.QWidget_SetHidden(this.h, (C.bool)(hidden))
}

func (this *QWidget) Show() {
	C.QWidget_Show(this.h)
}

func (this *QWidget) Hide() {
	C.QWidget_Hide(this.h)
}

func (this *QWidget) ShowMinimized() {
	C.QWidget_ShowMinimized(this.h)
}

func (this *QWidget) ShowMaximized() {
	C.QWidget_ShowMaximized(this.h)
}

func (this *QWidget) ShowFullScreen() {
	C.QWidget_ShowFullScreen(this.h)
}

func (this *QWidget) ShowNormal() {
	C.QWidget_ShowNormal(this.h)
}

func (this *QWidget) Close() bool {
	return (bool)(C.QWidget_Close(this.h))
}

func (this *QWidget) Raise() {
	C.QWidget_Raise(this.h)
}

func (this *QWidget) Lower() {
	C.QWidget_Lower(this.h)
}

func (this *QWidget) StackUnder(param1 *QWidget) {
	C.QWidget_StackUnder(this.h, param1.cPointer())
}

func (this *QWidget) Move(x int, y int) {
	C.QWidget_Move(this.h, (C.int)(x), (C.int)(y))
}

func (this *QWidget) MoveWithQPoint(param1 *QPoint) {
	C.QWidget_MoveWithQPoint(this.h, param1.cPointer())
}

func (this *QWidget) Resize(w int, h int) {
	C.QWidget_Resize(this.h, (C.int)(w), (C.int)(h))
}

func (this *QWidget) ResizeWithQSize(param1 *QSize) {
	C.QWidget_ResizeWithQSize(this.h, param1.cPointer())
}

func (this *QWidget) SetGeometry(x int, y int, w int, h int) {
	C.QWidget_SetGeometry(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QWidget) SetGeometryWithGeometry(geometry *QRect) {
	C.QWidget_SetGeometryWithGeometry(this.h, geometry.cPointer())
}

func (this *QWidget) SaveGeometry() []byte {
	var _bytearray C.struct_miqt_string = C.QWidget_SaveGeometry(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QWidget) RestoreGeometry(geometry []byte) bool {
	geometry_alias := C.struct_miqt_string{}
	geometry_alias.data = (*C.char)(unsafe.Pointer(&geometry[0]))
	geometry_alias.len = C.size_t(len(geometry))
	return (bool)(C.QWidget_RestoreGeometry(this.h, geometry_alias))
}

func (this *QWidget) AdjustSize() {
	C.QWidget_AdjustSize(this.h)
}

func (this *QWidget) IsVisible() bool {
	return (bool)(C.QWidget_IsVisible(this.h))
}

func (this *QWidget) IsVisibleTo(param1 *QWidget) bool {
	return (bool)(C.QWidget_IsVisibleTo(this.h, param1.cPointer()))
}

func (this *QWidget) IsHidden() bool {
	return (bool)(C.QWidget_IsHidden(this.h))
}

func (this *QWidget) IsMinimized() bool {
	return (bool)(C.QWidget_IsMinimized(this.h))
}

func (this *QWidget) IsMaximized() bool {
	return (bool)(C.QWidget_IsMaximized(this.h))
}

func (this *QWidget) IsFullScreen() bool {
	return (bool)(C.QWidget_IsFullScreen(this.h))
}

func (this *QWidget) WindowState() WindowState {
	return (WindowState)(C.QWidget_WindowState(this.h))
}

func (this *QWidget) SetWindowState(state WindowState) {
	C.QWidget_SetWindowState(this.h, (C.int)(state))
}

func (this *QWidget) OverrideWindowState(state WindowState) {
	C.QWidget_OverrideWindowState(this.h, (C.int)(state))
}

func (this *QWidget) SizeHint() *QSize {
	_goptr := newQSize(C.QWidget_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QWidget_MinimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SizePolicy() *QSizePolicy {
	_goptr := newQSizePolicy(C.QWidget_SizePolicy(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SetSizePolicy(sizePolicy QSizePolicy) {
	C.QWidget_SetSizePolicy(this.h, sizePolicy.cPointer())
}

func (this *QWidget) SetSizePolicy2(horizontal QSizePolicy__Policy, vertical QSizePolicy__Policy) {
	C.QWidget_SetSizePolicy2(this.h, (C.int)(horizontal), (C.int)(vertical))
}

func (this *QWidget) HeightForWidth(param1 int) int {
	return (int)(C.QWidget_HeightForWidth(this.h, (C.int)(param1)))
}

func (this *QWidget) HasHeightForWidth() bool {
	return (bool)(C.QWidget_HasHeightForWidth(this.h))
}

func (this *QWidget) VisibleRegion() *QRegion {
	_goptr := newQRegion(C.QWidget_VisibleRegion(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SetContentsMargins(left int, top int, right int, bottom int) {
	C.QWidget_SetContentsMargins(this.h, (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))
}

func (this *QWidget) SetContentsMarginsWithMargins(margins *QMargins) {
	C.QWidget_SetContentsMarginsWithMargins(this.h, margins.cPointer())
}

func (this *QWidget) GetContentsMargins(left *int, top *int, right *int, bottom *int) {
	C.QWidget_GetContentsMargins(this.h, (*C.int)(unsafe.Pointer(left)), (*C.int)(unsafe.Pointer(top)), (*C.int)(unsafe.Pointer(right)), (*C.int)(unsafe.Pointer(bottom)))
}

func (this *QWidget) ContentsMargins() *QMargins {
	_goptr := newQMargins(C.QWidget_ContentsMargins(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) ContentsRect() *QRect {
	_goptr := newQRect(C.QWidget_ContentsRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Layout() *QLayout {
	return newQLayout(C.QWidget_Layout(this.h))
}

func (this *QWidget) SetLayout(layout *QLayout) {
	C.QWidget_SetLayout(this.h, layout.cPointer())
}

func (this *QWidget) UpdateGeometry() {
	C.QWidget_UpdateGeometry(this.h)
}

func (this *QWidget) SetParent(parent *QWidget) {
	C.QWidget_SetParent(this.h, parent.cPointer())
}

func (this *QWidget) SetParent2(parent *QWidget, f WindowType) {
	C.QWidget_SetParent2(this.h, parent.cPointer(), (C.int)(f))
}

func (this *QWidget) Scroll(dx int, dy int) {
	C.QWidget_Scroll(this.h, (C.int)(dx), (C.int)(dy))
}

func (this *QWidget) Scroll2(dx int, dy int, param3 *QRect) {
	C.QWidget_Scroll2(this.h, (C.int)(dx), (C.int)(dy), param3.cPointer())
}

func (this *QWidget) FocusWidget() *QWidget {
	return newQWidget(C.QWidget_FocusWidget(this.h))
}

func (this *QWidget) NextInFocusChain() *QWidget {
	return newQWidget(C.QWidget_NextInFocusChain(this.h))
}

func (this *QWidget) PreviousInFocusChain() *QWidget {
	return newQWidget(C.QWidget_PreviousInFocusChain(this.h))
}

func (this *QWidget) AcceptDrops() bool {
	return (bool)(C.QWidget_AcceptDrops(this.h))
}

func (this *QWidget) SetAcceptDrops(on bool) {
	C.QWidget_SetAcceptDrops(this.h, (C.bool)(on))
}

func (this *QWidget) AddAction(action *QAction) {
	C.QWidget_AddAction(this.h, action.cPointer())
}

func (this *QWidget) AddActions(actions []*QAction) {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	C.QWidget_AddActions(this.h, actions_ma)
}

func (this *QWidget) InsertActions(before *QAction, actions []*QAction) {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	C.QWidget_InsertActions(this.h, before.cPointer(), actions_ma)
}

func (this *QWidget) InsertAction(before *QAction, action *QAction) {
	C.QWidget_InsertAction(this.h, before.cPointer(), action.cPointer())
}

func (this *QWidget) RemoveAction(action *QAction) {
	C.QWidget_RemoveAction(this.h, action.cPointer())
}

func (this *QWidget) Actions() []*QAction {
	var _ma C.struct_miqt_array = C.QWidget_Actions(this.h)
	_ret := make([]*QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAction(_outCast[i])
	}
	return _ret
}

func (this *QWidget) ParentWidget() *QWidget {
	return newQWidget(C.QWidget_ParentWidget(this.h))
}

func (this *QWidget) SetWindowFlags(typeVal WindowType) {
	C.QWidget_SetWindowFlags(this.h, (C.int)(typeVal))
}

func (this *QWidget) WindowFlags() WindowType {
	return (WindowType)(C.QWidget_WindowFlags(this.h))
}

func (this *QWidget) SetWindowFlag(param1 WindowType) {
	C.QWidget_SetWindowFlag(this.h, (C.int)(param1))
}

func (this *QWidget) OverrideWindowFlags(typeVal WindowType) {
	C.QWidget_OverrideWindowFlags(this.h, (C.int)(typeVal))
}

func (this *QWidget) WindowType() WindowType {
	return (WindowType)(C.QWidget_WindowType(this.h))
}

func QWidget_Find(param1 uintptr) *QWidget {
	return newQWidget(C.QWidget_Find((C.uintptr_t)(param1)))
}

func (this *QWidget) ChildAt(x int, y int) *QWidget {
	return newQWidget(C.QWidget_ChildAt(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QWidget) ChildAtWithQPoint(p *QPoint) *QWidget {
	return newQWidget(C.QWidget_ChildAtWithQPoint(this.h, p.cPointer()))
}

func (this *QWidget) SetAttribute(param1 WidgetAttribute) {
	C.QWidget_SetAttribute(this.h, (C.int)(param1))
}

func (this *QWidget) TestAttribute(param1 WidgetAttribute) bool {
	return (bool)(C.QWidget_TestAttribute(this.h, (C.int)(param1)))
}

func (this *QWidget) PaintEngine() *QPaintEngine {
	return newQPaintEngine(C.QWidget_PaintEngine(this.h))
}

func (this *QWidget) EnsurePolished() {
	C.QWidget_EnsurePolished(this.h)
}

func (this *QWidget) IsAncestorOf(child *QWidget) bool {
	return (bool)(C.QWidget_IsAncestorOf(this.h, child.cPointer()))
}

func (this *QWidget) AutoFillBackground() bool {
	return (bool)(C.QWidget_AutoFillBackground(this.h))
}

func (this *QWidget) SetAutoFillBackground(enabled bool) {
	C.QWidget_SetAutoFillBackground(this.h, (C.bool)(enabled))
}

func (this *QWidget) BackingStore() *QBackingStore {
	return newQBackingStore(C.QWidget_BackingStore(this.h))
}

func (this *QWidget) WindowHandle() *QWindow {
	return newQWindow(C.QWidget_WindowHandle(this.h))
}

func (this *QWidget) Screen() *QScreen {
	return newQScreen(C.QWidget_Screen(this.h))
}

func QWidget_CreateWindowContainer(window *QWindow) *QWidget {
	return newQWidget(C.QWidget_CreateWindowContainer(window.cPointer()))
}

func (this *QWidget) WindowTitleChanged(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QWidget_WindowTitleChanged(this.h, title_ms)
}
func (this *QWidget) OnWindowTitleChanged(slot func(title string)) {
	C.QWidget_connect_WindowTitleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWidget_WindowTitleChanged
func miqt_exec_callback_QWidget_WindowTitleChanged(cb C.intptr_t, title C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(title string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var title_ms C.struct_miqt_string = title
	title_ret := C.GoStringN(title_ms.data, C.int(int64(title_ms.len)))
	C.free(unsafe.Pointer(title_ms.data))
	slotval1 := title_ret

	gofunc(slotval1)
}

func (this *QWidget) WindowIconChanged(icon *QIcon) {
	C.QWidget_WindowIconChanged(this.h, icon.cPointer())
}
func (this *QWidget) OnWindowIconChanged(slot func(icon *QIcon)) {
	C.QWidget_connect_WindowIconChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWidget_WindowIconChanged
func miqt_exec_callback_QWidget_WindowIconChanged(cb C.intptr_t, icon *C.QIcon) {
	gofunc, ok := cgo.Handle(cb).Value().(func(icon *QIcon))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQIcon(icon)

	gofunc(slotval1)
}

func (this *QWidget) WindowIconTextChanged(iconText string) {
	iconText_ms := C.struct_miqt_string{}
	iconText_ms.data = C.CString(iconText)
	iconText_ms.len = C.size_t(len(iconText))
	defer C.free(unsafe.Pointer(iconText_ms.data))
	C.QWidget_WindowIconTextChanged(this.h, iconText_ms)
}
func (this *QWidget) OnWindowIconTextChanged(slot func(iconText string)) {
	C.QWidget_connect_WindowIconTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWidget_WindowIconTextChanged
func miqt_exec_callback_QWidget_WindowIconTextChanged(cb C.intptr_t, iconText C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(iconText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var iconText_ms C.struct_miqt_string = iconText
	iconText_ret := C.GoStringN(iconText_ms.data, C.int(int64(iconText_ms.len)))
	C.free(unsafe.Pointer(iconText_ms.data))
	slotval1 := iconText_ret

	gofunc(slotval1)
}

func (this *QWidget) CustomContextMenuRequested(pos *QPoint) {
	C.QWidget_CustomContextMenuRequested(this.h, pos.cPointer())
}
func (this *QWidget) OnCustomContextMenuRequested(slot func(pos *QPoint)) {
	C.QWidget_connect_CustomContextMenuRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWidget_CustomContextMenuRequested
func miqt_exec_callback_QWidget_CustomContextMenuRequested(cb C.intptr_t, pos *C.QPoint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos *QPoint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(pos)

	gofunc(slotval1)
}

func (this *QWidget) InputMethodQuery(param1 InputMethodQuery) *QVariant {
	_goptr := newQVariant(C.QWidget_InputMethodQuery(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) InputMethodHints() InputMethodHint {
	return (InputMethodHint)(C.QWidget_InputMethodHints(this.h))
}

func (this *QWidget) SetInputMethodHints(hints InputMethodHint) {
	C.QWidget_SetInputMethodHints(this.h, (C.int)(hints))
}

func QWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) Render2(target *QPaintDevice, targetOffset *QPoint) {
	C.QWidget_Render2(this.h, target.cPointer(), targetOffset.cPointer())
}

func (this *QWidget) Render3(target *QPaintDevice, targetOffset *QPoint, sourceRegion *QRegion) {
	C.QWidget_Render3(this.h, target.cPointer(), targetOffset.cPointer(), sourceRegion.cPointer())
}

func (this *QWidget) Render4(target *QPaintDevice, targetOffset *QPoint, sourceRegion *QRegion, renderFlags QWidget__RenderFlag) {
	C.QWidget_Render4(this.h, target.cPointer(), targetOffset.cPointer(), sourceRegion.cPointer(), (C.int)(renderFlags))
}

func (this *QWidget) Render22(painter *QPainter, targetOffset *QPoint) {
	C.QWidget_Render22(this.h, painter.cPointer(), targetOffset.cPointer())
}

func (this *QWidget) Render32(painter *QPainter, targetOffset *QPoint, sourceRegion *QRegion) {
	C.QWidget_Render32(this.h, painter.cPointer(), targetOffset.cPointer(), sourceRegion.cPointer())
}

func (this *QWidget) Render42(painter *QPainter, targetOffset *QPoint, sourceRegion *QRegion, renderFlags QWidget__RenderFlag) {
	C.QWidget_Render42(this.h, painter.cPointer(), targetOffset.cPointer(), sourceRegion.cPointer(), (C.int)(renderFlags))
}

func (this *QWidget) Grab1(rectangle *QRect) *QPixmap {
	_goptr := newQPixmap(C.QWidget_Grab1(this.h, rectangle.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) GrabGesture2(typeVal GestureType, flags GestureFlag) {
	C.QWidget_GrabGesture2(this.h, (C.int)(typeVal), (C.int)(flags))
}

func (this *QWidget) GrabShortcut2(key *QKeySequence, context ShortcutContext) int {
	return (int)(C.QWidget_GrabShortcut2(this.h, key.cPointer(), (C.int)(context)))
}

func (this *QWidget) SetShortcutEnabled2(id int, enable bool) {
	C.QWidget_SetShortcutEnabled2(this.h, (C.int)(id), (C.bool)(enable))
}

func (this *QWidget) SetShortcutAutoRepeat2(id int, enable bool) {
	C.QWidget_SetShortcutAutoRepeat2(this.h, (C.int)(id), (C.bool)(enable))
}

func (this *QWidget) SetWindowFlag2(param1 WindowType, on bool) {
	C.QWidget_SetWindowFlag2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QWidget) SetAttribute2(param1 WidgetAttribute, on bool) {
	C.QWidget_SetAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

func QWidget_CreateWindowContainer2(window *QWindow, parent *QWidget) *QWidget {
	return newQWidget(C.QWidget_CreateWindowContainer2(window.cPointer(), parent.cPointer()))
}

func QWidget_CreateWindowContainer3(window *QWindow, parent *QWidget, flags WindowType) *QWidget {
	return newQWidget(C.QWidget_CreateWindowContainer3(window.cPointer(), parent.cPointer(), (C.int)(flags)))
}

func (this *QWidget) callVirtualBase_DevType() int {

	return (int)(C.QWidget_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QWidget_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_DevType
func miqt_exec_callback_QWidget_DevType(self *C.QWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QWidget) callVirtualBase_SetVisible(visible bool) {

	C.QWidget_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QWidget_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_SetVisible
func miqt_exec_callback_QWidget_SetVisible(self *C.QWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QWidget_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidget) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QWidget_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_SizeHint
func miqt_exec_callback_QWidget_SizeHint(self *C.QWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QWidget) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QWidget_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidget) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QWidget_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_MinimumSizeHint
func miqt_exec_callback_QWidget_MinimumSizeHint(self *C.QWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QWidget_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QWidget_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_HeightForWidth
func miqt_exec_callback_QWidget_HeightForWidth(self *C.QWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QWidget_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QWidget_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_HasHeightForWidth
func miqt_exec_callback_QWidget_HasHeightForWidth(self *C.QWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QWidget_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QWidget) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QWidget_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_PaintEngine
func miqt_exec_callback_QWidget_PaintEngine(self *C.QWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QWidget) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QWidget_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QWidget) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_Event
func miqt_exec_callback_QWidget_Event(self *C.QWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWidget) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QWidget_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWidget_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_MousePressEvent
func miqt_exec_callback_QWidget_MousePressEvent(self *C.QWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QWidget) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QWidget_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWidget_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_MouseReleaseEvent
func miqt_exec_callback_QWidget_MouseReleaseEvent(self *C.QWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QWidget_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWidget_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_MouseDoubleClickEvent
func miqt_exec_callback_QWidget_MouseDoubleClickEvent(self *C.QWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QWidget) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QWidget_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWidget_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_MouseMoveEvent
func miqt_exec_callback_QWidget_MouseMoveEvent(self *C.QWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QWidget) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QWidget_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QWidget_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_WheelEvent
func miqt_exec_callback_QWidget_WheelEvent(self *C.QWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QWidget_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QWidget_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_KeyPressEvent
func miqt_exec_callback_QWidget_KeyPressEvent(self *C.QWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QWidget_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QWidget_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_KeyReleaseEvent
func miqt_exec_callback_QWidget_KeyReleaseEvent(self *C.QWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QWidget_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QWidget_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_FocusInEvent
func miqt_exec_callback_QWidget_FocusInEvent(self *C.QWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QWidget_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QWidget_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_FocusOutEvent
func miqt_exec_callback_QWidget_FocusOutEvent(self *C.QWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QWidget) callVirtualBase_EnterEvent(event *QEvent) {

	C.QWidget_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QWidget_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_EnterEvent
func miqt_exec_callback_QWidget_EnterEvent(self *C.QWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QWidget_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QWidget_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_LeaveEvent
func miqt_exec_callback_QWidget_LeaveEvent(self *C.QWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QWidget) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QWidget_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QWidget_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_PaintEvent
func miqt_exec_callback_QWidget_PaintEvent(self *C.QWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QWidget_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QWidget_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_MoveEvent
func miqt_exec_callback_QWidget_MoveEvent(self *C.QWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QWidget) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QWidget_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QWidget_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_ResizeEvent
func miqt_exec_callback_QWidget_ResizeEvent(self *C.QWidget, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QWidget_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QWidget_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_CloseEvent
func miqt_exec_callback_QWidget_CloseEvent(self *C.QWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QWidget) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QWidget_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QWidget_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_ContextMenuEvent
func miqt_exec_callback_QWidget_ContextMenuEvent(self *C.QWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QWidget_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QWidget_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_TabletEvent
func miqt_exec_callback_QWidget_TabletEvent(self *C.QWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QWidget_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QWidget_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_ActionEvent
func miqt_exec_callback_QWidget_ActionEvent(self *C.QWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QWidget_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QWidget_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_DragEnterEvent
func miqt_exec_callback_QWidget_DragEnterEvent(self *C.QWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QWidget) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QWidget_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QWidget_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_DragMoveEvent
func miqt_exec_callback_QWidget_DragMoveEvent(self *C.QWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QWidget) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QWidget_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QWidget_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_DragLeaveEvent
func miqt_exec_callback_QWidget_DragLeaveEvent(self *C.QWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QWidget_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QWidget_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_DropEvent
func miqt_exec_callback_QWidget_DropEvent(self *C.QWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QWidget_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QWidget_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_ShowEvent
func miqt_exec_callback_QWidget_ShowEvent(self *C.QWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QWidget_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QWidget_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_HideEvent
func miqt_exec_callback_QWidget_HideEvent(self *C.QWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QWidget_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QWidget_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_NativeEvent
func miqt_exec_callback_QWidget_NativeEvent(self *C.QWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QWidget) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QWidget_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWidget) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QWidget_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_ChangeEvent
func miqt_exec_callback_QWidget_ChangeEvent(self *C.QWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QWidget) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QWidget_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWidget) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QWidget_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_Metric
func miqt_exec_callback_QWidget_Metric(self *C.QWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWidget) callVirtualBase_InitPainter(painter *QPainter) {

	C.QWidget_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QWidget) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QWidget_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_InitPainter
func miqt_exec_callback_QWidget_InitPainter(self *C.QWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QWidget_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QWidget) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QWidget_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_Redirected
func miqt_exec_callback_QWidget_Redirected(self *C.QWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QWidget) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QWidget_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QWidget) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QWidget_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_SharedPainter
func miqt_exec_callback_QWidget_SharedPainter(self *C.QWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QWidget) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QWidget_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWidget) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QWidget_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_InputMethodEvent
func miqt_exec_callback_QWidget_InputMethodEvent(self *C.QWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QWidget) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QWidget_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidget) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QWidget_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_InputMethodQuery
func miqt_exec_callback_QWidget_InputMethodQuery(self *C.QWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QWidget_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QWidget_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_FocusNextPrevChild
func miqt_exec_callback_QWidget_FocusNextPrevChild(self *C.QWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWidget) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QWidget_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QWidget) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QWidget_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_EventFilter
func miqt_exec_callback_QWidget_EventFilter(self *C.QWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWidget) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QWidget_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QWidget_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_TimerEvent
func miqt_exec_callback_QWidget_TimerEvent(self *C.QWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QWidget_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QWidget_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_ChildEvent
func miqt_exec_callback_QWidget_ChildEvent(self *C.QWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QWidget_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QWidget_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_CustomEvent
func miqt_exec_callback_QWidget_CustomEvent(self *C.QWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QWidget_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QWidget) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QWidget_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_ConnectNotify
func miqt_exec_callback_QWidget_ConnectNotify(self *C.QWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QWidget_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QWidget) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QWidget_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_DisconnectNotify
func miqt_exec_callback_QWidget_DisconnectNotify(self *C.QWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWidget) Delete() {
	C.QWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
