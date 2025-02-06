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
	C.QWidgetData_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QWidgetData) Delete() {
	C.QWidgetData_delete(this.h)
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
	return newQMetaObject(C.QWidget_metaObject(this.h))
}

func (this *QWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWidget_metacast(this.h, param1_Cstring))
}

func QWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWidget_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) DevType() int {
	return (int)(C.QWidget_devType(this.h))
}

func (this *QWidget) WinId() uintptr {
	return (uintptr)(C.QWidget_winId(this.h))
}

func (this *QWidget) CreateWinId() {
	C.QWidget_createWinId(this.h)
}

func (this *QWidget) InternalWinId() uintptr {
	return (uintptr)(C.QWidget_internalWinId(this.h))
}

func (this *QWidget) EffectiveWinId() uintptr {
	return (uintptr)(C.QWidget_effectiveWinId(this.h))
}

func (this *QWidget) Style() *QStyle {
	return newQStyle(C.QWidget_style(this.h))
}

func (this *QWidget) SetStyle(style *QStyle) {
	C.QWidget_setStyle(this.h, style.cPointer())
}

func (this *QWidget) IsTopLevel() bool {
	return (bool)(C.QWidget_isTopLevel(this.h))
}

func (this *QWidget) IsWindow() bool {
	return (bool)(C.QWidget_isWindow(this.h))
}

func (this *QWidget) IsModal() bool {
	return (bool)(C.QWidget_isModal(this.h))
}

func (this *QWidget) WindowModality() WindowModality {
	return (WindowModality)(C.QWidget_windowModality(this.h))
}

func (this *QWidget) SetWindowModality(windowModality WindowModality) {
	C.QWidget_setWindowModality(this.h, (C.int)(windowModality))
}

func (this *QWidget) IsEnabled() bool {
	return (bool)(C.QWidget_isEnabled(this.h))
}

func (this *QWidget) IsEnabledTo(param1 *QWidget) bool {
	return (bool)(C.QWidget_isEnabledTo(this.h, param1.cPointer()))
}

func (this *QWidget) IsEnabledToTLW() bool {
	return (bool)(C.QWidget_isEnabledToTLW(this.h))
}

func (this *QWidget) SetEnabled(enabled bool) {
	C.QWidget_setEnabled(this.h, (C.bool)(enabled))
}

func (this *QWidget) SetDisabled(disabled bool) {
	C.QWidget_setDisabled(this.h, (C.bool)(disabled))
}

func (this *QWidget) SetWindowModified(windowModified bool) {
	C.QWidget_setWindowModified(this.h, (C.bool)(windowModified))
}

func (this *QWidget) FrameGeometry() *QRect {
	_goptr := newQRect(C.QWidget_frameGeometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Geometry() *QRect {
	return newQRect(C.QWidget_geometry(this.h))
}

func (this *QWidget) NormalGeometry() *QRect {
	_goptr := newQRect(C.QWidget_normalGeometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) X() int {
	return (int)(C.QWidget_x(this.h))
}

func (this *QWidget) Y() int {
	return (int)(C.QWidget_y(this.h))
}

func (this *QWidget) Pos() *QPoint {
	_goptr := newQPoint(C.QWidget_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) FrameSize() *QSize {
	_goptr := newQSize(C.QWidget_frameSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Size() *QSize {
	_goptr := newQSize(C.QWidget_size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Width() int {
	return (int)(C.QWidget_width(this.h))
}

func (this *QWidget) Height() int {
	return (int)(C.QWidget_height(this.h))
}

func (this *QWidget) Rect() *QRect {
	_goptr := newQRect(C.QWidget_rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) ChildrenRect() *QRect {
	_goptr := newQRect(C.QWidget_childrenRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) ChildrenRegion() *QRegion {
	_goptr := newQRegion(C.QWidget_childrenRegion(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MinimumSize() *QSize {
	_goptr := newQSize(C.QWidget_minimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MaximumSize() *QSize {
	_goptr := newQSize(C.QWidget_maximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MinimumWidth() int {
	return (int)(C.QWidget_minimumWidth(this.h))
}

func (this *QWidget) MinimumHeight() int {
	return (int)(C.QWidget_minimumHeight(this.h))
}

func (this *QWidget) MaximumWidth() int {
	return (int)(C.QWidget_maximumWidth(this.h))
}

func (this *QWidget) MaximumHeight() int {
	return (int)(C.QWidget_maximumHeight(this.h))
}

func (this *QWidget) SetMinimumSize(minimumSize *QSize) {
	C.QWidget_setMinimumSize(this.h, minimumSize.cPointer())
}

func (this *QWidget) SetMinimumSize2(minw int, minh int) {
	C.QWidget_setMinimumSize2(this.h, (C.int)(minw), (C.int)(minh))
}

func (this *QWidget) SetMaximumSize(maximumSize *QSize) {
	C.QWidget_setMaximumSize(this.h, maximumSize.cPointer())
}

func (this *QWidget) SetMaximumSize2(maxw int, maxh int) {
	C.QWidget_setMaximumSize2(this.h, (C.int)(maxw), (C.int)(maxh))
}

func (this *QWidget) SetMinimumWidth(minw int) {
	C.QWidget_setMinimumWidth(this.h, (C.int)(minw))
}

func (this *QWidget) SetMinimumHeight(minh int) {
	C.QWidget_setMinimumHeight(this.h, (C.int)(minh))
}

func (this *QWidget) SetMaximumWidth(maxw int) {
	C.QWidget_setMaximumWidth(this.h, (C.int)(maxw))
}

func (this *QWidget) SetMaximumHeight(maxh int) {
	C.QWidget_setMaximumHeight(this.h, (C.int)(maxh))
}

func (this *QWidget) SizeIncrement() *QSize {
	_goptr := newQSize(C.QWidget_sizeIncrement(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SetSizeIncrement(sizeIncrement *QSize) {
	C.QWidget_setSizeIncrement(this.h, sizeIncrement.cPointer())
}

func (this *QWidget) SetSizeIncrement2(w int, h int) {
	C.QWidget_setSizeIncrement2(this.h, (C.int)(w), (C.int)(h))
}

func (this *QWidget) BaseSize() *QSize {
	_goptr := newQSize(C.QWidget_baseSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SetBaseSize(baseSize *QSize) {
	C.QWidget_setBaseSize(this.h, baseSize.cPointer())
}

func (this *QWidget) SetBaseSize2(basew int, baseh int) {
	C.QWidget_setBaseSize2(this.h, (C.int)(basew), (C.int)(baseh))
}

func (this *QWidget) SetFixedSize(fixedSize *QSize) {
	C.QWidget_setFixedSize(this.h, fixedSize.cPointer())
}

func (this *QWidget) SetFixedSize2(w int, h int) {
	C.QWidget_setFixedSize2(this.h, (C.int)(w), (C.int)(h))
}

func (this *QWidget) SetFixedWidth(w int) {
	C.QWidget_setFixedWidth(this.h, (C.int)(w))
}

func (this *QWidget) SetFixedHeight(h int) {
	C.QWidget_setFixedHeight(this.h, (C.int)(h))
}

func (this *QWidget) MapToGlobal(param1 *QPoint) *QPoint {
	_goptr := newQPoint(C.QWidget_mapToGlobal(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MapFromGlobal(param1 *QPoint) *QPoint {
	_goptr := newQPoint(C.QWidget_mapFromGlobal(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MapToParent(param1 *QPoint) *QPoint {
	_goptr := newQPoint(C.QWidget_mapToParent(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MapFromParent(param1 *QPoint) *QPoint {
	_goptr := newQPoint(C.QWidget_mapFromParent(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MapTo(param1 *QWidget, param2 *QPoint) *QPoint {
	_goptr := newQPoint(C.QWidget_mapTo(this.h, param1.cPointer(), param2.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MapFrom(param1 *QWidget, param2 *QPoint) *QPoint {
	_goptr := newQPoint(C.QWidget_mapFrom(this.h, param1.cPointer(), param2.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Window() *QWidget {
	return newQWidget(C.QWidget_window(this.h))
}

func (this *QWidget) NativeParentWidget() *QWidget {
	return newQWidget(C.QWidget_nativeParentWidget(this.h))
}

func (this *QWidget) TopLevelWidget() *QWidget {
	return newQWidget(C.QWidget_topLevelWidget(this.h))
}

func (this *QWidget) Palette() *QPalette {
	return newQPalette(C.QWidget_palette(this.h))
}

func (this *QWidget) SetPalette(palette *QPalette) {
	C.QWidget_setPalette(this.h, palette.cPointer())
}

func (this *QWidget) SetBackgroundRole(backgroundRole QPalette__ColorRole) {
	C.QWidget_setBackgroundRole(this.h, (C.int)(backgroundRole))
}

func (this *QWidget) BackgroundRole() QPalette__ColorRole {
	return (QPalette__ColorRole)(C.QWidget_backgroundRole(this.h))
}

func (this *QWidget) SetForegroundRole(foregroundRole QPalette__ColorRole) {
	C.QWidget_setForegroundRole(this.h, (C.int)(foregroundRole))
}

func (this *QWidget) ForegroundRole() QPalette__ColorRole {
	return (QPalette__ColorRole)(C.QWidget_foregroundRole(this.h))
}

func (this *QWidget) Font() *QFont {
	return newQFont(C.QWidget_font(this.h))
}

func (this *QWidget) SetFont(font *QFont) {
	C.QWidget_setFont(this.h, font.cPointer())
}

func (this *QWidget) FontMetrics() *QFontMetrics {
	_goptr := newQFontMetrics(C.QWidget_fontMetrics(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) FontInfo() *QFontInfo {
	_goptr := newQFontInfo(C.QWidget_fontInfo(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Cursor() *QCursor {
	_goptr := newQCursor(C.QWidget_cursor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SetCursor(cursor *QCursor) {
	C.QWidget_setCursor(this.h, cursor.cPointer())
}

func (this *QWidget) UnsetCursor() {
	C.QWidget_unsetCursor(this.h)
}

func (this *QWidget) SetMouseTracking(enable bool) {
	C.QWidget_setMouseTracking(this.h, (C.bool)(enable))
}

func (this *QWidget) HasMouseTracking() bool {
	return (bool)(C.QWidget_hasMouseTracking(this.h))
}

func (this *QWidget) UnderMouse() bool {
	return (bool)(C.QWidget_underMouse(this.h))
}

func (this *QWidget) SetTabletTracking(enable bool) {
	C.QWidget_setTabletTracking(this.h, (C.bool)(enable))
}

func (this *QWidget) HasTabletTracking() bool {
	return (bool)(C.QWidget_hasTabletTracking(this.h))
}

func (this *QWidget) SetMask(mask *QBitmap) {
	C.QWidget_setMask(this.h, mask.cPointer())
}

func (this *QWidget) SetMaskWithMask(mask *QRegion) {
	C.QWidget_setMaskWithMask(this.h, mask.cPointer())
}

func (this *QWidget) Mask() *QRegion {
	_goptr := newQRegion(C.QWidget_mask(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) ClearMask() {
	C.QWidget_clearMask(this.h)
}

func (this *QWidget) Render(target *QPaintDevice) {
	C.QWidget_render(this.h, target.cPointer())
}

func (this *QWidget) RenderWithPainter(painter *QPainter) {
	C.QWidget_renderWithPainter(this.h, painter.cPointer())
}

func (this *QWidget) Grab() *QPixmap {
	_goptr := newQPixmap(C.QWidget_grab(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) GraphicsEffect() *QGraphicsEffect {
	return newQGraphicsEffect(C.QWidget_graphicsEffect(this.h))
}

func (this *QWidget) SetGraphicsEffect(effect *QGraphicsEffect) {
	C.QWidget_setGraphicsEffect(this.h, effect.cPointer())
}

func (this *QWidget) GrabGesture(typeVal GestureType) {
	C.QWidget_grabGesture(this.h, (C.int)(typeVal))
}

func (this *QWidget) UngrabGesture(typeVal GestureType) {
	C.QWidget_ungrabGesture(this.h, (C.int)(typeVal))
}

func (this *QWidget) SetWindowTitle(windowTitle string) {
	windowTitle_ms := C.struct_miqt_string{}
	windowTitle_ms.data = C.CString(windowTitle)
	windowTitle_ms.len = C.size_t(len(windowTitle))
	defer C.free(unsafe.Pointer(windowTitle_ms.data))
	C.QWidget_setWindowTitle(this.h, windowTitle_ms)
}

func (this *QWidget) SetStyleSheet(styleSheet string) {
	styleSheet_ms := C.struct_miqt_string{}
	styleSheet_ms.data = C.CString(styleSheet)
	styleSheet_ms.len = C.size_t(len(styleSheet))
	defer C.free(unsafe.Pointer(styleSheet_ms.data))
	C.QWidget_setStyleSheet(this.h, styleSheet_ms)
}

func (this *QWidget) StyleSheet() string {
	var _ms C.struct_miqt_string = C.QWidget_styleSheet(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) WindowTitle() string {
	var _ms C.struct_miqt_string = C.QWidget_windowTitle(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetWindowIcon(icon *QIcon) {
	C.QWidget_setWindowIcon(this.h, icon.cPointer())
}

func (this *QWidget) WindowIcon() *QIcon {
	_goptr := newQIcon(C.QWidget_windowIcon(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SetWindowIconText(windowIconText string) {
	windowIconText_ms := C.struct_miqt_string{}
	windowIconText_ms.data = C.CString(windowIconText)
	windowIconText_ms.len = C.size_t(len(windowIconText))
	defer C.free(unsafe.Pointer(windowIconText_ms.data))
	C.QWidget_setWindowIconText(this.h, windowIconText_ms)
}

func (this *QWidget) WindowIconText() string {
	var _ms C.struct_miqt_string = C.QWidget_windowIconText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetWindowRole(windowRole string) {
	windowRole_ms := C.struct_miqt_string{}
	windowRole_ms.data = C.CString(windowRole)
	windowRole_ms.len = C.size_t(len(windowRole))
	defer C.free(unsafe.Pointer(windowRole_ms.data))
	C.QWidget_setWindowRole(this.h, windowRole_ms)
}

func (this *QWidget) WindowRole() string {
	var _ms C.struct_miqt_string = C.QWidget_windowRole(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetWindowFilePath(filePath string) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QWidget_setWindowFilePath(this.h, filePath_ms)
}

func (this *QWidget) WindowFilePath() string {
	var _ms C.struct_miqt_string = C.QWidget_windowFilePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetWindowOpacity(level float64) {
	C.QWidget_setWindowOpacity(this.h, (C.double)(level))
}

func (this *QWidget) WindowOpacity() float64 {
	return (float64)(C.QWidget_windowOpacity(this.h))
}

func (this *QWidget) IsWindowModified() bool {
	return (bool)(C.QWidget_isWindowModified(this.h))
}

func (this *QWidget) SetToolTip(toolTip string) {
	toolTip_ms := C.struct_miqt_string{}
	toolTip_ms.data = C.CString(toolTip)
	toolTip_ms.len = C.size_t(len(toolTip))
	defer C.free(unsafe.Pointer(toolTip_ms.data))
	C.QWidget_setToolTip(this.h, toolTip_ms)
}

func (this *QWidget) ToolTip() string {
	var _ms C.struct_miqt_string = C.QWidget_toolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetToolTipDuration(msec int) {
	C.QWidget_setToolTipDuration(this.h, (C.int)(msec))
}

func (this *QWidget) ToolTipDuration() int {
	return (int)(C.QWidget_toolTipDuration(this.h))
}

func (this *QWidget) SetStatusTip(statusTip string) {
	statusTip_ms := C.struct_miqt_string{}
	statusTip_ms.data = C.CString(statusTip)
	statusTip_ms.len = C.size_t(len(statusTip))
	defer C.free(unsafe.Pointer(statusTip_ms.data))
	C.QWidget_setStatusTip(this.h, statusTip_ms)
}

func (this *QWidget) StatusTip() string {
	var _ms C.struct_miqt_string = C.QWidget_statusTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetWhatsThis(whatsThis string) {
	whatsThis_ms := C.struct_miqt_string{}
	whatsThis_ms.data = C.CString(whatsThis)
	whatsThis_ms.len = C.size_t(len(whatsThis))
	defer C.free(unsafe.Pointer(whatsThis_ms.data))
	C.QWidget_setWhatsThis(this.h, whatsThis_ms)
}

func (this *QWidget) WhatsThis() string {
	var _ms C.struct_miqt_string = C.QWidget_whatsThis(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) AccessibleName() string {
	var _ms C.struct_miqt_string = C.QWidget_accessibleName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetAccessibleName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWidget_setAccessibleName(this.h, name_ms)
}

func (this *QWidget) AccessibleDescription() string {
	var _ms C.struct_miqt_string = C.QWidget_accessibleDescription(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) SetAccessibleDescription(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QWidget_setAccessibleDescription(this.h, description_ms)
}

func (this *QWidget) SetLayoutDirection(direction LayoutDirection) {
	C.QWidget_setLayoutDirection(this.h, (C.int)(direction))
}

func (this *QWidget) LayoutDirection() LayoutDirection {
	return (LayoutDirection)(C.QWidget_layoutDirection(this.h))
}

func (this *QWidget) UnsetLayoutDirection() {
	C.QWidget_unsetLayoutDirection(this.h)
}

func (this *QWidget) SetLocale(locale *QLocale) {
	C.QWidget_setLocale(this.h, locale.cPointer())
}

func (this *QWidget) Locale() *QLocale {
	_goptr := newQLocale(C.QWidget_locale(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) UnsetLocale() {
	C.QWidget_unsetLocale(this.h)
}

func (this *QWidget) IsRightToLeft() bool {
	return (bool)(C.QWidget_isRightToLeft(this.h))
}

func (this *QWidget) IsLeftToRight() bool {
	return (bool)(C.QWidget_isLeftToRight(this.h))
}

func (this *QWidget) SetFocus() {
	C.QWidget_setFocus(this.h)
}

func (this *QWidget) IsActiveWindow() bool {
	return (bool)(C.QWidget_isActiveWindow(this.h))
}

func (this *QWidget) ActivateWindow() {
	C.QWidget_activateWindow(this.h)
}

func (this *QWidget) ClearFocus() {
	C.QWidget_clearFocus(this.h)
}

func (this *QWidget) SetFocusWithReason(reason FocusReason) {
	C.QWidget_setFocusWithReason(this.h, (C.int)(reason))
}

func (this *QWidget) FocusPolicy() FocusPolicy {
	return (FocusPolicy)(C.QWidget_focusPolicy(this.h))
}

func (this *QWidget) SetFocusPolicy(policy FocusPolicy) {
	C.QWidget_setFocusPolicy(this.h, (C.int)(policy))
}

func (this *QWidget) HasFocus() bool {
	return (bool)(C.QWidget_hasFocus(this.h))
}

func QWidget_SetTabOrder(param1 *QWidget, param2 *QWidget) {
	C.QWidget_setTabOrder(param1.cPointer(), param2.cPointer())
}

func (this *QWidget) SetFocusProxy(focusProxy *QWidget) {
	C.QWidget_setFocusProxy(this.h, focusProxy.cPointer())
}

func (this *QWidget) FocusProxy() *QWidget {
	return newQWidget(C.QWidget_focusProxy(this.h))
}

func (this *QWidget) ContextMenuPolicy() ContextMenuPolicy {
	return (ContextMenuPolicy)(C.QWidget_contextMenuPolicy(this.h))
}

func (this *QWidget) SetContextMenuPolicy(policy ContextMenuPolicy) {
	C.QWidget_setContextMenuPolicy(this.h, (C.int)(policy))
}

func (this *QWidget) GrabMouse() {
	C.QWidget_grabMouse(this.h)
}

func (this *QWidget) GrabMouseWithQCursor(param1 *QCursor) {
	C.QWidget_grabMouseWithQCursor(this.h, param1.cPointer())
}

func (this *QWidget) ReleaseMouse() {
	C.QWidget_releaseMouse(this.h)
}

func (this *QWidget) GrabKeyboard() {
	C.QWidget_grabKeyboard(this.h)
}

func (this *QWidget) ReleaseKeyboard() {
	C.QWidget_releaseKeyboard(this.h)
}

func (this *QWidget) GrabShortcut(key *QKeySequence) int {
	return (int)(C.QWidget_grabShortcut(this.h, key.cPointer()))
}

func (this *QWidget) ReleaseShortcut(id int) {
	C.QWidget_releaseShortcut(this.h, (C.int)(id))
}

func (this *QWidget) SetShortcutEnabled(id int) {
	C.QWidget_setShortcutEnabled(this.h, (C.int)(id))
}

func (this *QWidget) SetShortcutAutoRepeat(id int) {
	C.QWidget_setShortcutAutoRepeat(this.h, (C.int)(id))
}

func QWidget_MouseGrabber() *QWidget {
	return newQWidget(C.QWidget_mouseGrabber())
}

func QWidget_KeyboardGrabber() *QWidget {
	return newQWidget(C.QWidget_keyboardGrabber())
}

func (this *QWidget) UpdatesEnabled() bool {
	return (bool)(C.QWidget_updatesEnabled(this.h))
}

func (this *QWidget) SetUpdatesEnabled(enable bool) {
	C.QWidget_setUpdatesEnabled(this.h, (C.bool)(enable))
}

func (this *QWidget) GraphicsProxyWidget() *QGraphicsProxyWidget {
	return newQGraphicsProxyWidget(C.QWidget_graphicsProxyWidget(this.h))
}

func (this *QWidget) Update() {
	C.QWidget_update(this.h)
}

func (this *QWidget) Repaint() {
	C.QWidget_repaint(this.h)
}

func (this *QWidget) Update2(x int, y int, w int, h int) {
	C.QWidget_update2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QWidget) UpdateWithQRect(param1 *QRect) {
	C.QWidget_updateWithQRect(this.h, param1.cPointer())
}

func (this *QWidget) UpdateWithQRegion(param1 *QRegion) {
	C.QWidget_updateWithQRegion(this.h, param1.cPointer())
}

func (this *QWidget) Repaint2(x int, y int, w int, h int) {
	C.QWidget_repaint2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QWidget) RepaintWithQRect(param1 *QRect) {
	C.QWidget_repaintWithQRect(this.h, param1.cPointer())
}

func (this *QWidget) RepaintWithQRegion(param1 *QRegion) {
	C.QWidget_repaintWithQRegion(this.h, param1.cPointer())
}

func (this *QWidget) SetVisible(visible bool) {
	C.QWidget_setVisible(this.h, (C.bool)(visible))
}

func (this *QWidget) SetHidden(hidden bool) {
	C.QWidget_setHidden(this.h, (C.bool)(hidden))
}

func (this *QWidget) Show() {
	C.QWidget_show(this.h)
}

func (this *QWidget) Hide() {
	C.QWidget_hide(this.h)
}

func (this *QWidget) ShowMinimized() {
	C.QWidget_showMinimized(this.h)
}

func (this *QWidget) ShowMaximized() {
	C.QWidget_showMaximized(this.h)
}

func (this *QWidget) ShowFullScreen() {
	C.QWidget_showFullScreen(this.h)
}

func (this *QWidget) ShowNormal() {
	C.QWidget_showNormal(this.h)
}

func (this *QWidget) Close() bool {
	return (bool)(C.QWidget_close(this.h))
}

func (this *QWidget) Raise() {
	C.QWidget_raise(this.h)
}

func (this *QWidget) Lower() {
	C.QWidget_lower(this.h)
}

func (this *QWidget) StackUnder(param1 *QWidget) {
	C.QWidget_stackUnder(this.h, param1.cPointer())
}

func (this *QWidget) Move(x int, y int) {
	C.QWidget_move(this.h, (C.int)(x), (C.int)(y))
}

func (this *QWidget) MoveWithQPoint(param1 *QPoint) {
	C.QWidget_moveWithQPoint(this.h, param1.cPointer())
}

func (this *QWidget) Resize(w int, h int) {
	C.QWidget_resize(this.h, (C.int)(w), (C.int)(h))
}

func (this *QWidget) ResizeWithQSize(param1 *QSize) {
	C.QWidget_resizeWithQSize(this.h, param1.cPointer())
}

func (this *QWidget) SetGeometry(x int, y int, w int, h int) {
	C.QWidget_setGeometry(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QWidget) SetGeometryWithGeometry(geometry *QRect) {
	C.QWidget_setGeometryWithGeometry(this.h, geometry.cPointer())
}

func (this *QWidget) SaveGeometry() []byte {
	var _bytearray C.struct_miqt_string = C.QWidget_saveGeometry(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QWidget) RestoreGeometry(geometry []byte) bool {
	geometry_alias := C.struct_miqt_string{}
	if len(geometry) > 0 {
		geometry_alias.data = (*C.char)(unsafe.Pointer(&geometry[0]))
	} else {
		geometry_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	geometry_alias.len = C.size_t(len(geometry))
	return (bool)(C.QWidget_restoreGeometry(this.h, geometry_alias))
}

func (this *QWidget) AdjustSize() {
	C.QWidget_adjustSize(this.h)
}

func (this *QWidget) IsVisible() bool {
	return (bool)(C.QWidget_isVisible(this.h))
}

func (this *QWidget) IsVisibleTo(param1 *QWidget) bool {
	return (bool)(C.QWidget_isVisibleTo(this.h, param1.cPointer()))
}

func (this *QWidget) IsHidden() bool {
	return (bool)(C.QWidget_isHidden(this.h))
}

func (this *QWidget) IsMinimized() bool {
	return (bool)(C.QWidget_isMinimized(this.h))
}

func (this *QWidget) IsMaximized() bool {
	return (bool)(C.QWidget_isMaximized(this.h))
}

func (this *QWidget) IsFullScreen() bool {
	return (bool)(C.QWidget_isFullScreen(this.h))
}

func (this *QWidget) WindowState() WindowState {
	return (WindowState)(C.QWidget_windowState(this.h))
}

func (this *QWidget) SetWindowState(state WindowState) {
	C.QWidget_setWindowState(this.h, (C.int)(state))
}

func (this *QWidget) OverrideWindowState(state WindowState) {
	C.QWidget_overrideWindowState(this.h, (C.int)(state))
}

func (this *QWidget) SizeHint() *QSize {
	_goptr := newQSize(C.QWidget_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QWidget_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SizePolicy() *QSizePolicy {
	_goptr := newQSizePolicy(C.QWidget_sizePolicy(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SetSizePolicy(sizePolicy QSizePolicy) {
	C.QWidget_setSizePolicy(this.h, sizePolicy.cPointer())
}

func (this *QWidget) SetSizePolicy2(horizontal QSizePolicy__Policy, vertical QSizePolicy__Policy) {
	C.QWidget_setSizePolicy2(this.h, (C.int)(horizontal), (C.int)(vertical))
}

func (this *QWidget) HeightForWidth(param1 int) int {
	return (int)(C.QWidget_heightForWidth(this.h, (C.int)(param1)))
}

func (this *QWidget) HasHeightForWidth() bool {
	return (bool)(C.QWidget_hasHeightForWidth(this.h))
}

func (this *QWidget) VisibleRegion() *QRegion {
	_goptr := newQRegion(C.QWidget_visibleRegion(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SetContentsMargins(left int, top int, right int, bottom int) {
	C.QWidget_setContentsMargins(this.h, (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))
}

func (this *QWidget) SetContentsMarginsWithMargins(margins *QMargins) {
	C.QWidget_setContentsMarginsWithMargins(this.h, margins.cPointer())
}

func (this *QWidget) GetContentsMargins(left *int, top *int, right *int, bottom *int) {
	C.QWidget_getContentsMargins(this.h, (*C.int)(unsafe.Pointer(left)), (*C.int)(unsafe.Pointer(top)), (*C.int)(unsafe.Pointer(right)), (*C.int)(unsafe.Pointer(bottom)))
}

func (this *QWidget) ContentsMargins() *QMargins {
	_goptr := newQMargins(C.QWidget_contentsMargins(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) ContentsRect() *QRect {
	_goptr := newQRect(C.QWidget_contentsRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Layout() *QLayout {
	return newQLayout(C.QWidget_layout(this.h))
}

func (this *QWidget) SetLayout(layout *QLayout) {
	C.QWidget_setLayout(this.h, layout.cPointer())
}

func (this *QWidget) UpdateGeometry() {
	C.QWidget_updateGeometry(this.h)
}

func (this *QWidget) SetParent(parent *QWidget) {
	C.QWidget_setParent(this.h, parent.cPointer())
}

func (this *QWidget) SetParent2(parent *QWidget, f WindowType) {
	C.QWidget_setParent2(this.h, parent.cPointer(), (C.int)(f))
}

func (this *QWidget) Scroll(dx int, dy int) {
	C.QWidget_scroll(this.h, (C.int)(dx), (C.int)(dy))
}

func (this *QWidget) Scroll2(dx int, dy int, param3 *QRect) {
	C.QWidget_scroll2(this.h, (C.int)(dx), (C.int)(dy), param3.cPointer())
}

func (this *QWidget) FocusWidget() *QWidget {
	return newQWidget(C.QWidget_focusWidget(this.h))
}

func (this *QWidget) NextInFocusChain() *QWidget {
	return newQWidget(C.QWidget_nextInFocusChain(this.h))
}

func (this *QWidget) PreviousInFocusChain() *QWidget {
	return newQWidget(C.QWidget_previousInFocusChain(this.h))
}

func (this *QWidget) AcceptDrops() bool {
	return (bool)(C.QWidget_acceptDrops(this.h))
}

func (this *QWidget) SetAcceptDrops(on bool) {
	C.QWidget_setAcceptDrops(this.h, (C.bool)(on))
}

func (this *QWidget) AddAction(action *QAction) {
	C.QWidget_addAction(this.h, action.cPointer())
}

func (this *QWidget) AddActions(actions []*QAction) {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	C.QWidget_addActions(this.h, actions_ma)
}

func (this *QWidget) InsertActions(before *QAction, actions []*QAction) {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	C.QWidget_insertActions(this.h, before.cPointer(), actions_ma)
}

func (this *QWidget) InsertAction(before *QAction, action *QAction) {
	C.QWidget_insertAction(this.h, before.cPointer(), action.cPointer())
}

func (this *QWidget) RemoveAction(action *QAction) {
	C.QWidget_removeAction(this.h, action.cPointer())
}

func (this *QWidget) Actions() []*QAction {
	var _ma C.struct_miqt_array = C.QWidget_actions(this.h)
	_ret := make([]*QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAction(_outCast[i])
	}
	return _ret
}

func (this *QWidget) ParentWidget() *QWidget {
	return newQWidget(C.QWidget_parentWidget(this.h))
}

func (this *QWidget) SetWindowFlags(typeVal WindowType) {
	C.QWidget_setWindowFlags(this.h, (C.int)(typeVal))
}

func (this *QWidget) WindowFlags() WindowType {
	return (WindowType)(C.QWidget_windowFlags(this.h))
}

func (this *QWidget) SetWindowFlag(param1 WindowType) {
	C.QWidget_setWindowFlag(this.h, (C.int)(param1))
}

func (this *QWidget) OverrideWindowFlags(typeVal WindowType) {
	C.QWidget_overrideWindowFlags(this.h, (C.int)(typeVal))
}

func (this *QWidget) WindowType() WindowType {
	return (WindowType)(C.QWidget_windowType(this.h))
}

func QWidget_Find(param1 uintptr) *QWidget {
	return newQWidget(C.QWidget_find((C.uintptr_t)(param1)))
}

func (this *QWidget) ChildAt(x int, y int) *QWidget {
	return newQWidget(C.QWidget_childAt(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QWidget) ChildAtWithQPoint(p *QPoint) *QWidget {
	return newQWidget(C.QWidget_childAtWithQPoint(this.h, p.cPointer()))
}

func (this *QWidget) SetAttribute(param1 WidgetAttribute) {
	C.QWidget_setAttribute(this.h, (C.int)(param1))
}

func (this *QWidget) TestAttribute(param1 WidgetAttribute) bool {
	return (bool)(C.QWidget_testAttribute(this.h, (C.int)(param1)))
}

func (this *QWidget) PaintEngine() *QPaintEngine {
	return newQPaintEngine(C.QWidget_paintEngine(this.h))
}

func (this *QWidget) EnsurePolished() {
	C.QWidget_ensurePolished(this.h)
}

func (this *QWidget) IsAncestorOf(child *QWidget) bool {
	return (bool)(C.QWidget_isAncestorOf(this.h, child.cPointer()))
}

func (this *QWidget) AutoFillBackground() bool {
	return (bool)(C.QWidget_autoFillBackground(this.h))
}

func (this *QWidget) SetAutoFillBackground(enabled bool) {
	C.QWidget_setAutoFillBackground(this.h, (C.bool)(enabled))
}

func (this *QWidget) BackingStore() *QBackingStore {
	return newQBackingStore(C.QWidget_backingStore(this.h))
}

func (this *QWidget) WindowHandle() *QWindow {
	return newQWindow(C.QWidget_windowHandle(this.h))
}

func (this *QWidget) Screen() *QScreen {
	return newQScreen(C.QWidget_screen(this.h))
}

func QWidget_CreateWindowContainer(window *QWindow) *QWidget {
	return newQWidget(C.QWidget_createWindowContainer(window.cPointer()))
}

func (this *QWidget) WindowTitleChanged(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QWidget_windowTitleChanged(this.h, title_ms)
}
func (this *QWidget) OnWindowTitleChanged(slot func(title string)) {
	C.QWidget_connect_windowTitleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWidget_windowTitleChanged
func miqt_exec_callback_QWidget_windowTitleChanged(cb C.intptr_t, title C.struct_miqt_string) {
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
	C.QWidget_windowIconChanged(this.h, icon.cPointer())
}
func (this *QWidget) OnWindowIconChanged(slot func(icon *QIcon)) {
	C.QWidget_connect_windowIconChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWidget_windowIconChanged
func miqt_exec_callback_QWidget_windowIconChanged(cb C.intptr_t, icon *C.QIcon) {
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
	C.QWidget_windowIconTextChanged(this.h, iconText_ms)
}
func (this *QWidget) OnWindowIconTextChanged(slot func(iconText string)) {
	C.QWidget_connect_windowIconTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWidget_windowIconTextChanged
func miqt_exec_callback_QWidget_windowIconTextChanged(cb C.intptr_t, iconText C.struct_miqt_string) {
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
	C.QWidget_customContextMenuRequested(this.h, pos.cPointer())
}
func (this *QWidget) OnCustomContextMenuRequested(slot func(pos *QPoint)) {
	C.QWidget_connect_customContextMenuRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWidget_customContextMenuRequested
func miqt_exec_callback_QWidget_customContextMenuRequested(cb C.intptr_t, pos *C.QPoint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos *QPoint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(pos)

	gofunc(slotval1)
}

func (this *QWidget) InputMethodQuery(param1 InputMethodQuery) *QVariant {
	_goptr := newQVariant(C.QWidget_inputMethodQuery(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) InputMethodHints() InputMethodHint {
	return (InputMethodHint)(C.QWidget_inputMethodHints(this.h))
}

func (this *QWidget) SetInputMethodHints(hints InputMethodHint) {
	C.QWidget_setInputMethodHints(this.h, (C.int)(hints))
}

func QWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWidget_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWidget_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidget) Render2(target *QPaintDevice, targetOffset *QPoint) {
	C.QWidget_render2(this.h, target.cPointer(), targetOffset.cPointer())
}

func (this *QWidget) Render3(target *QPaintDevice, targetOffset *QPoint, sourceRegion *QRegion) {
	C.QWidget_render3(this.h, target.cPointer(), targetOffset.cPointer(), sourceRegion.cPointer())
}

func (this *QWidget) Render4(target *QPaintDevice, targetOffset *QPoint, sourceRegion *QRegion, renderFlags QWidget__RenderFlag) {
	C.QWidget_render4(this.h, target.cPointer(), targetOffset.cPointer(), sourceRegion.cPointer(), (C.int)(renderFlags))
}

func (this *QWidget) Render22(painter *QPainter, targetOffset *QPoint) {
	C.QWidget_render22(this.h, painter.cPointer(), targetOffset.cPointer())
}

func (this *QWidget) Render32(painter *QPainter, targetOffset *QPoint, sourceRegion *QRegion) {
	C.QWidget_render32(this.h, painter.cPointer(), targetOffset.cPointer(), sourceRegion.cPointer())
}

func (this *QWidget) Render42(painter *QPainter, targetOffset *QPoint, sourceRegion *QRegion, renderFlags QWidget__RenderFlag) {
	C.QWidget_render42(this.h, painter.cPointer(), targetOffset.cPointer(), sourceRegion.cPointer(), (C.int)(renderFlags))
}

func (this *QWidget) Grab1(rectangle *QRect) *QPixmap {
	_goptr := newQPixmap(C.QWidget_grab1(this.h, rectangle.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) GrabGesture2(typeVal GestureType, flags GestureFlag) {
	C.QWidget_grabGesture2(this.h, (C.int)(typeVal), (C.int)(flags))
}

func (this *QWidget) GrabShortcut2(key *QKeySequence, context ShortcutContext) int {
	return (int)(C.QWidget_grabShortcut2(this.h, key.cPointer(), (C.int)(context)))
}

func (this *QWidget) SetShortcutEnabled2(id int, enable bool) {
	C.QWidget_setShortcutEnabled2(this.h, (C.int)(id), (C.bool)(enable))
}

func (this *QWidget) SetShortcutAutoRepeat2(id int, enable bool) {
	C.QWidget_setShortcutAutoRepeat2(this.h, (C.int)(id), (C.bool)(enable))
}

func (this *QWidget) SetWindowFlag2(param1 WindowType, on bool) {
	C.QWidget_setWindowFlag2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QWidget) SetAttribute2(param1 WidgetAttribute, on bool) {
	C.QWidget_setAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

func QWidget_CreateWindowContainer2(window *QWindow, parent *QWidget) *QWidget {
	return newQWidget(C.QWidget_createWindowContainer2(window.cPointer(), parent.cPointer()))
}

func QWidget_CreateWindowContainer3(window *QWindow, parent *QWidget, flags WindowType) *QWidget {
	return newQWidget(C.QWidget_createWindowContainer3(window.cPointer(), parent.cPointer(), (C.int)(flags)))
}

// UpdateMicroFocus can only be called from a QWidget that was directly constructed.
func (this *QWidget) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QWidget_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QWidget that was directly constructed.
func (this *QWidget) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QWidget_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QWidget that was directly constructed.
func (this *QWidget) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QWidget_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QWidget that was directly constructed.
func (this *QWidget) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWidget_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QWidget that was directly constructed.
func (this *QWidget) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWidget_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Create1 can only be called from a QWidget that was directly constructed.
func (this *QWidget) Create1(param1 uintptr) {

	var _dynamic_cast_ok C.bool = false
	C.QWidget_protectedbase_create1(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.uintptr_t)(param1))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create2 can only be called from a QWidget that was directly constructed.
func (this *QWidget) Create2(param1 uintptr, initializeWindow bool) {

	var _dynamic_cast_ok C.bool = false
	C.QWidget_protectedbase_create2(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.uintptr_t)(param1), (C.bool)(initializeWindow))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create3 can only be called from a QWidget that was directly constructed.
func (this *QWidget) Create3(param1 uintptr, initializeWindow bool, destroyOldWindow bool) {

	var _dynamic_cast_ok C.bool = false
	C.QWidget_protectedbase_create3(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.uintptr_t)(param1), (C.bool)(initializeWindow), (C.bool)(destroyOldWindow))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy1 can only be called from a QWidget that was directly constructed.
func (this *QWidget) Destroy1(destroyWindow bool) {

	var _dynamic_cast_ok C.bool = false
	C.QWidget_protectedbase_destroy1(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(destroyWindow))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy2 can only be called from a QWidget that was directly constructed.
func (this *QWidget) Destroy2(destroyWindow bool, destroySubWindows bool) {

	var _dynamic_cast_ok C.bool = false
	C.QWidget_protectedbase_destroy2(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(destroyWindow), (C.bool)(destroySubWindows))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QWidget that was directly constructed.
func (this *QWidget) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QWidget_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QWidget that was directly constructed.
func (this *QWidget) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWidget_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QWidget that was directly constructed.
func (this *QWidget) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWidget_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QWidget that was directly constructed.
func (this *QWidget) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWidget_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QWidget) callVirtualBase_DevType() int {

	return (int)(C.QWidget_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QWidget_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_devType
func miqt_exec_callback_QWidget_devType(self *C.QWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QWidget) callVirtualBase_SetVisible(visible bool) {

	C.QWidget_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QWidget_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_setVisible
func miqt_exec_callback_QWidget_setVisible(self *C.QWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QWidget_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidget) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_sizeHint
func miqt_exec_callback_QWidget_sizeHint(self *C.QWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QWidget) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QWidget_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidget) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QWidget_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_minimumSizeHint
func miqt_exec_callback_QWidget_minimumSizeHint(self *C.QWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QWidget_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QWidget_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_heightForWidth
func miqt_exec_callback_QWidget_heightForWidth(self *C.QWidget, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QWidget_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QWidget_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_hasHeightForWidth
func miqt_exec_callback_QWidget_hasHeightForWidth(self *C.QWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QWidget_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QWidget) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QWidget_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_paintEngine
func miqt_exec_callback_QWidget_paintEngine(self *C.QWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QWidget) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QWidget_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QWidget) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_event
func miqt_exec_callback_QWidget_event(self *C.QWidget, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_mousePressEvent
func miqt_exec_callback_QWidget_mousePressEvent(self *C.QWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QWidget) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_mouseReleaseEvent
func miqt_exec_callback_QWidget_mouseReleaseEvent(self *C.QWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_mouseDoubleClickEvent
func miqt_exec_callback_QWidget_mouseDoubleClickEvent(self *C.QWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QWidget) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_mouseMoveEvent
func miqt_exec_callback_QWidget_mouseMoveEvent(self *C.QWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QWidget) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_wheelEvent
func miqt_exec_callback_QWidget_wheelEvent(self *C.QWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_keyPressEvent
func miqt_exec_callback_QWidget_keyPressEvent(self *C.QWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_keyReleaseEvent
func miqt_exec_callback_QWidget_keyReleaseEvent(self *C.QWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_focusInEvent
func miqt_exec_callback_QWidget_focusInEvent(self *C.QWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_focusOutEvent
func miqt_exec_callback_QWidget_focusOutEvent(self *C.QWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QWidget) callVirtualBase_EnterEvent(event *QEvent) {

	C.QWidget_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QWidget_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_enterEvent
func miqt_exec_callback_QWidget_enterEvent(self *C.QWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QWidget_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QWidget_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_leaveEvent
func miqt_exec_callback_QWidget_leaveEvent(self *C.QWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QWidget) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QWidget_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QWidget_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_paintEvent
func miqt_exec_callback_QWidget_paintEvent(self *C.QWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_moveEvent
func miqt_exec_callback_QWidget_moveEvent(self *C.QWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QWidget) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_resizeEvent
func miqt_exec_callback_QWidget_resizeEvent(self *C.QWidget, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_closeEvent
func miqt_exec_callback_QWidget_closeEvent(self *C.QWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QWidget) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_contextMenuEvent
func miqt_exec_callback_QWidget_contextMenuEvent(self *C.QWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QWidget_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QWidget_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_tabletEvent
func miqt_exec_callback_QWidget_tabletEvent(self *C.QWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QWidget_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QWidget_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_actionEvent
func miqt_exec_callback_QWidget_actionEvent(self *C.QWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_dragEnterEvent
func miqt_exec_callback_QWidget_dragEnterEvent(self *C.QWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QWidget) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_dragMoveEvent
func miqt_exec_callback_QWidget_dragMoveEvent(self *C.QWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QWidget) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_dragLeaveEvent
func miqt_exec_callback_QWidget_dragLeaveEvent(self *C.QWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_dropEvent
func miqt_exec_callback_QWidget_dropEvent(self *C.QWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QWidget_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_showEvent
func miqt_exec_callback_QWidget_showEvent(self *C.QWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_hideEvent
func miqt_exec_callback_QWidget_hideEvent(self *C.QWidget, cb C.intptr_t, event *C.QHideEvent) {
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
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QWidget_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QWidget_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_nativeEvent
func miqt_exec_callback_QWidget_nativeEvent(self *C.QWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	C.QWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWidget) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_changeEvent
func miqt_exec_callback_QWidget_changeEvent(self *C.QWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QWidget) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QWidget_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWidget) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QWidget_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_metric
func miqt_exec_callback_QWidget_metric(self *C.QWidget, cb C.intptr_t, param1 C.int) C.int {
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

	C.QWidget_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QWidget) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QWidget_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_initPainter
func miqt_exec_callback_QWidget_initPainter(self *C.QWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QWidget_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QWidget) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QWidget_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_redirected
func miqt_exec_callback_QWidget_redirected(self *C.QWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QWidget_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QWidget) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QWidget_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_sharedPainter
func miqt_exec_callback_QWidget_sharedPainter(self *C.QWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QWidget) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWidget) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_inputMethodEvent
func miqt_exec_callback_QWidget_inputMethodEvent(self *C.QWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QWidget) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidget) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_inputMethodQuery
func miqt_exec_callback_QWidget_inputMethodQuery(self *C.QWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_focusNextPrevChild
func miqt_exec_callback_QWidget_focusNextPrevChild(self *C.QWidget, cb C.intptr_t, next C.bool) C.bool {
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

	return (bool)(C.QWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QWidget) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_eventFilter
func miqt_exec_callback_QWidget_eventFilter(self *C.QWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_timerEvent
func miqt_exec_callback_QWidget_timerEvent(self *C.QWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QWidget_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_childEvent
func miqt_exec_callback_QWidget_childEvent(self *C.QWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QWidget_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidget) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_customEvent
func miqt_exec_callback_QWidget_customEvent(self *C.QWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QWidget) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_connectNotify
func miqt_exec_callback_QWidget_connectNotify(self *C.QWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QWidget) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidget_disconnectNotify
func miqt_exec_callback_QWidget_disconnectNotify(self *C.QWidget, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
