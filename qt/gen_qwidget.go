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
	QWidget__RenderFlag__DrawWindowBackground QWidget__RenderFlag = 1
	QWidget__RenderFlag__DrawChildren         QWidget__RenderFlag = 2
	QWidget__RenderFlag__IgnoreMask           QWidget__RenderFlag = 4
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

func newQWidgetData(h *C.QWidgetData) *QWidgetData {
	if h == nil {
		return nil
	}
	return &QWidgetData{h: h}
}

func newQWidgetData_U(h unsafe.Pointer) *QWidgetData {
	return newQWidgetData((*C.QWidgetData)(h))
}

// NewQWidgetData constructs a new QWidgetData object.
func NewQWidgetData(param1 *QWidgetData) *QWidgetData {
	ret := C.QWidgetData_new(param1.cPointer())
	return newQWidgetData(ret)
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

func newQWidget(h *C.QWidget) *QWidget {
	if h == nil {
		return nil
	}
	return &QWidget{h: h, QObject: newQObject_U(unsafe.Pointer(h)), QPaintDevice: newQPaintDevice_U(unsafe.Pointer(h))}
}

func newQWidget_U(h unsafe.Pointer) *QWidget {
	return newQWidget((*C.QWidget)(h))
}

// NewQWidget constructs a new QWidget object.
func NewQWidget() *QWidget {
	ret := C.QWidget_new()
	return newQWidget(ret)
}

// NewQWidget2 constructs a new QWidget object.
func NewQWidget2(parent *QWidget) *QWidget {
	ret := C.QWidget_new2(parent.cPointer())
	return newQWidget(ret)
}

// NewQWidget3 constructs a new QWidget object.
func NewQWidget3(parent *QWidget, f int) *QWidget {
	ret := C.QWidget_new3(parent.cPointer(), (C.int)(f))
	return newQWidget(ret)
}

func (this *QWidget) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QWidget_MetaObject(this.h)))
}

func QWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QWidget_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	return newQStyle_U(unsafe.Pointer(C.QWidget_Style(this.h)))
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
	C.QWidget_SetWindowModality(this.h, (C.uintptr_t)(windowModality))
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
	_ret := C.QWidget_FrameGeometry(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Geometry() *QRect {
	return newQRect_U(unsafe.Pointer(C.QWidget_Geometry(this.h)))
}

func (this *QWidget) NormalGeometry() *QRect {
	_ret := C.QWidget_NormalGeometry(this.h)
	_goptr := newQRect(_ret)
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
	_ret := C.QWidget_Pos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) FrameSize() *QSize {
	_ret := C.QWidget_FrameSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Size() *QSize {
	_ret := C.QWidget_Size(this.h)
	_goptr := newQSize(_ret)
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
	_ret := C.QWidget_Rect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) ChildrenRect() *QRect {
	_ret := C.QWidget_ChildrenRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) ChildrenRegion() *QRegion {
	_ret := C.QWidget_ChildrenRegion(this.h)
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MinimumSize() *QSize {
	_ret := C.QWidget_MinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MaximumSize() *QSize {
	_ret := C.QWidget_MaximumSize(this.h)
	_goptr := newQSize(_ret)
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
	_ret := C.QWidget_SizeIncrement(this.h)
	_goptr := newQSize(_ret)
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
	_ret := C.QWidget_BaseSize(this.h)
	_goptr := newQSize(_ret)
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
	_ret := C.QWidget_MapToGlobal(this.h, param1.cPointer())
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MapFromGlobal(param1 *QPoint) *QPoint {
	_ret := C.QWidget_MapFromGlobal(this.h, param1.cPointer())
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MapToParent(param1 *QPoint) *QPoint {
	_ret := C.QWidget_MapToParent(this.h, param1.cPointer())
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MapFromParent(param1 *QPoint) *QPoint {
	_ret := C.QWidget_MapFromParent(this.h, param1.cPointer())
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MapTo(param1 *QWidget, param2 *QPoint) *QPoint {
	_ret := C.QWidget_MapTo(this.h, param1.cPointer(), param2.cPointer())
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MapFrom(param1 *QWidget, param2 *QPoint) *QPoint {
	_ret := C.QWidget_MapFrom(this.h, param1.cPointer(), param2.cPointer())
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Window() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidget_Window(this.h)))
}

func (this *QWidget) NativeParentWidget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidget_NativeParentWidget(this.h)))
}

func (this *QWidget) TopLevelWidget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidget_TopLevelWidget(this.h)))
}

func (this *QWidget) Palette() *QPalette {
	return newQPalette_U(unsafe.Pointer(C.QWidget_Palette(this.h)))
}

func (this *QWidget) SetPalette(palette *QPalette) {
	C.QWidget_SetPalette(this.h, palette.cPointer())
}

func (this *QWidget) SetBackgroundRole(backgroundRole QPalette__ColorRole) {
	C.QWidget_SetBackgroundRole(this.h, (C.uintptr_t)(backgroundRole))
}

func (this *QWidget) BackgroundRole() QPalette__ColorRole {
	return (QPalette__ColorRole)(C.QWidget_BackgroundRole(this.h))
}

func (this *QWidget) SetForegroundRole(foregroundRole QPalette__ColorRole) {
	C.QWidget_SetForegroundRole(this.h, (C.uintptr_t)(foregroundRole))
}

func (this *QWidget) ForegroundRole() QPalette__ColorRole {
	return (QPalette__ColorRole)(C.QWidget_ForegroundRole(this.h))
}

func (this *QWidget) Font() *QFont {
	return newQFont_U(unsafe.Pointer(C.QWidget_Font(this.h)))
}

func (this *QWidget) SetFont(font *QFont) {
	C.QWidget_SetFont(this.h, font.cPointer())
}

func (this *QWidget) FontMetrics() *QFontMetrics {
	_ret := C.QWidget_FontMetrics(this.h)
	_goptr := newQFontMetrics(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) FontInfo() *QFontInfo {
	_ret := C.QWidget_FontInfo(this.h)
	_goptr := newQFontInfo(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Cursor() *QCursor {
	_ret := C.QWidget_Cursor(this.h)
	_goptr := newQCursor(_ret)
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
	_ret := C.QWidget_Mask(this.h)
	_goptr := newQRegion(_ret)
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
	_ret := C.QWidget_Grab(this.h)
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) GraphicsEffect() *QGraphicsEffect {
	return newQGraphicsEffect_U(unsafe.Pointer(C.QWidget_GraphicsEffect(this.h)))
}

func (this *QWidget) SetGraphicsEffect(effect *QGraphicsEffect) {
	C.QWidget_SetGraphicsEffect(this.h, effect.cPointer())
}

func (this *QWidget) GrabGesture(typeVal GestureType) {
	C.QWidget_GrabGesture(this.h, (C.uintptr_t)(typeVal))
}

func (this *QWidget) UngrabGesture(typeVal GestureType) {
	C.QWidget_UngrabGesture(this.h, (C.uintptr_t)(typeVal))
}

func (this *QWidget) SetWindowTitle(windowTitle string) {
	windowTitle_ms := miqt_strdupg(windowTitle)
	defer C.free(windowTitle_ms)
	C.QWidget_SetWindowTitle(this.h, (*C.struct_miqt_string)(windowTitle_ms))
}

func (this *QWidget) SetStyleSheet(styleSheet string) {
	styleSheet_ms := miqt_strdupg(styleSheet)
	defer C.free(styleSheet_ms)
	C.QWidget_SetStyleSheet(this.h, (*C.struct_miqt_string)(styleSheet_ms))
}

func (this *QWidget) StyleSheet() string {
	var _ms *C.struct_miqt_string = C.QWidget_StyleSheet(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWidget) WindowTitle() string {
	var _ms *C.struct_miqt_string = C.QWidget_WindowTitle(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWidget) SetWindowIcon(icon *QIcon) {
	C.QWidget_SetWindowIcon(this.h, icon.cPointer())
}

func (this *QWidget) WindowIcon() *QIcon {
	_ret := C.QWidget_WindowIcon(this.h)
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SetWindowIconText(windowIconText string) {
	windowIconText_ms := miqt_strdupg(windowIconText)
	defer C.free(windowIconText_ms)
	C.QWidget_SetWindowIconText(this.h, (*C.struct_miqt_string)(windowIconText_ms))
}

func (this *QWidget) WindowIconText() string {
	var _ms *C.struct_miqt_string = C.QWidget_WindowIconText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWidget) SetWindowRole(windowRole string) {
	windowRole_ms := miqt_strdupg(windowRole)
	defer C.free(windowRole_ms)
	C.QWidget_SetWindowRole(this.h, (*C.struct_miqt_string)(windowRole_ms))
}

func (this *QWidget) WindowRole() string {
	var _ms *C.struct_miqt_string = C.QWidget_WindowRole(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWidget) SetWindowFilePath(filePath string) {
	filePath_ms := miqt_strdupg(filePath)
	defer C.free(filePath_ms)
	C.QWidget_SetWindowFilePath(this.h, (*C.struct_miqt_string)(filePath_ms))
}

func (this *QWidget) WindowFilePath() string {
	var _ms *C.struct_miqt_string = C.QWidget_WindowFilePath(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	toolTip_ms := miqt_strdupg(toolTip)
	defer C.free(toolTip_ms)
	C.QWidget_SetToolTip(this.h, (*C.struct_miqt_string)(toolTip_ms))
}

func (this *QWidget) ToolTip() string {
	var _ms *C.struct_miqt_string = C.QWidget_ToolTip(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWidget) SetToolTipDuration(msec int) {
	C.QWidget_SetToolTipDuration(this.h, (C.int)(msec))
}

func (this *QWidget) ToolTipDuration() int {
	return (int)(C.QWidget_ToolTipDuration(this.h))
}

func (this *QWidget) SetStatusTip(statusTip string) {
	statusTip_ms := miqt_strdupg(statusTip)
	defer C.free(statusTip_ms)
	C.QWidget_SetStatusTip(this.h, (*C.struct_miqt_string)(statusTip_ms))
}

func (this *QWidget) StatusTip() string {
	var _ms *C.struct_miqt_string = C.QWidget_StatusTip(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWidget) SetWhatsThis(whatsThis string) {
	whatsThis_ms := miqt_strdupg(whatsThis)
	defer C.free(whatsThis_ms)
	C.QWidget_SetWhatsThis(this.h, (*C.struct_miqt_string)(whatsThis_ms))
}

func (this *QWidget) WhatsThis() string {
	var _ms *C.struct_miqt_string = C.QWidget_WhatsThis(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWidget) AccessibleName() string {
	var _ms *C.struct_miqt_string = C.QWidget_AccessibleName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWidget) SetAccessibleName(name string) {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	C.QWidget_SetAccessibleName(this.h, (*C.struct_miqt_string)(name_ms))
}

func (this *QWidget) AccessibleDescription() string {
	var _ms *C.struct_miqt_string = C.QWidget_AccessibleDescription(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWidget) SetAccessibleDescription(description string) {
	description_ms := miqt_strdupg(description)
	defer C.free(description_ms)
	C.QWidget_SetAccessibleDescription(this.h, (*C.struct_miqt_string)(description_ms))
}

func (this *QWidget) SetLayoutDirection(direction LayoutDirection) {
	C.QWidget_SetLayoutDirection(this.h, (C.uintptr_t)(direction))
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
	_ret := C.QWidget_Locale(this.h)
	_goptr := newQLocale(_ret)
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
	C.QWidget_SetFocusWithReason(this.h, (C.uintptr_t)(reason))
}

func (this *QWidget) FocusPolicy() FocusPolicy {
	return (FocusPolicy)(C.QWidget_FocusPolicy(this.h))
}

func (this *QWidget) SetFocusPolicy(policy FocusPolicy) {
	C.QWidget_SetFocusPolicy(this.h, (C.uintptr_t)(policy))
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
	return newQWidget_U(unsafe.Pointer(C.QWidget_FocusProxy(this.h)))
}

func (this *QWidget) ContextMenuPolicy() ContextMenuPolicy {
	return (ContextMenuPolicy)(C.QWidget_ContextMenuPolicy(this.h))
}

func (this *QWidget) SetContextMenuPolicy(policy ContextMenuPolicy) {
	C.QWidget_SetContextMenuPolicy(this.h, (C.uintptr_t)(policy))
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
	return newQWidget_U(unsafe.Pointer(C.QWidget_MouseGrabber()))
}

func QWidget_KeyboardGrabber() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidget_KeyboardGrabber()))
}

func (this *QWidget) UpdatesEnabled() bool {
	return (bool)(C.QWidget_UpdatesEnabled(this.h))
}

func (this *QWidget) SetUpdatesEnabled(enable bool) {
	C.QWidget_SetUpdatesEnabled(this.h, (C.bool)(enable))
}

func (this *QWidget) GraphicsProxyWidget() *QGraphicsProxyWidget {
	return newQGraphicsProxyWidget_U(unsafe.Pointer(C.QWidget_GraphicsProxyWidget(this.h)))
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

func (this *QWidget) SaveGeometry() *QByteArray {
	_ret := C.QWidget_SaveGeometry(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) RestoreGeometry(geometry *QByteArray) bool {
	return (bool)(C.QWidget_RestoreGeometry(this.h, geometry.cPointer()))
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

func (this *QWidget) WindowState() int {
	return (int)(C.QWidget_WindowState(this.h))
}

func (this *QWidget) SetWindowState(state int) {
	C.QWidget_SetWindowState(this.h, (C.int)(state))
}

func (this *QWidget) OverrideWindowState(state int) {
	C.QWidget_OverrideWindowState(this.h, (C.int)(state))
}

func (this *QWidget) SizeHint() *QSize {
	_ret := C.QWidget_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) MinimumSizeHint() *QSize {
	_ret := C.QWidget_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SizePolicy() *QSizePolicy {
	_ret := C.QWidget_SizePolicy(this.h)
	_goptr := newQSizePolicy(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) SetSizePolicy(sizePolicy QSizePolicy) {
	C.QWidget_SetSizePolicy(this.h, sizePolicy.cPointer())
}

func (this *QWidget) SetSizePolicy2(horizontal QSizePolicy__Policy, vertical QSizePolicy__Policy) {
	C.QWidget_SetSizePolicy2(this.h, (C.uintptr_t)(horizontal), (C.uintptr_t)(vertical))
}

func (this *QWidget) HeightForWidth(param1 int) int {
	return (int)(C.QWidget_HeightForWidth(this.h, (C.int)(param1)))
}

func (this *QWidget) HasHeightForWidth() bool {
	return (bool)(C.QWidget_HasHeightForWidth(this.h))
}

func (this *QWidget) VisibleRegion() *QRegion {
	_ret := C.QWidget_VisibleRegion(this.h)
	_goptr := newQRegion(_ret)
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
	_ret := C.QWidget_ContentsMargins(this.h)
	_goptr := newQMargins(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) ContentsRect() *QRect {
	_ret := C.QWidget_ContentsRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) Layout() *QLayout {
	return newQLayout_U(unsafe.Pointer(C.QWidget_Layout(this.h)))
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

func (this *QWidget) SetParent2(parent *QWidget, f int) {
	C.QWidget_SetParent2(this.h, parent.cPointer(), (C.int)(f))
}

func (this *QWidget) Scroll(dx int, dy int) {
	C.QWidget_Scroll(this.h, (C.int)(dx), (C.int)(dy))
}

func (this *QWidget) Scroll2(dx int, dy int, param3 *QRect) {
	C.QWidget_Scroll2(this.h, (C.int)(dx), (C.int)(dy), param3.cPointer())
}

func (this *QWidget) FocusWidget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidget_FocusWidget(this.h)))
}

func (this *QWidget) NextInFocusChain() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidget_NextInFocusChain(this.h)))
}

func (this *QWidget) PreviousInFocusChain() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidget_PreviousInFocusChain(this.h)))
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
	// For the C ABI, malloc a C array of raw pointers
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := &C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(actions_ma))
	C.QWidget_AddActions(this.h, actions_ma)
}

func (this *QWidget) InsertActions(before *QAction, actions []*QAction) {
	// For the C ABI, malloc a C array of raw pointers
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := &C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(actions_ma))
	C.QWidget_InsertActions(this.h, before.cPointer(), actions_ma)
}

func (this *QWidget) InsertAction(before *QAction, action *QAction) {
	C.QWidget_InsertAction(this.h, before.cPointer(), action.cPointer())
}

func (this *QWidget) RemoveAction(action *QAction) {
	C.QWidget_RemoveAction(this.h, action.cPointer())
}

func (this *QWidget) Actions() []*QAction {
	var _ma *C.struct_miqt_array = C.QWidget_Actions(this.h)
	_ret := make([]*QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAction_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QWidget) ParentWidget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidget_ParentWidget(this.h)))
}

func (this *QWidget) SetWindowFlags(typeVal int) {
	C.QWidget_SetWindowFlags(this.h, (C.int)(typeVal))
}

func (this *QWidget) WindowFlags() int {
	return (int)(C.QWidget_WindowFlags(this.h))
}

func (this *QWidget) SetWindowFlag(param1 WindowType) {
	C.QWidget_SetWindowFlag(this.h, (C.uintptr_t)(param1))
}

func (this *QWidget) OverrideWindowFlags(typeVal int) {
	C.QWidget_OverrideWindowFlags(this.h, (C.int)(typeVal))
}

func (this *QWidget) WindowType() WindowType {
	return (WindowType)(C.QWidget_WindowType(this.h))
}

func QWidget_Find(param1 uintptr) *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidget_Find((C.uintptr_t)(param1))))
}

func (this *QWidget) ChildAt(x int, y int) *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidget_ChildAt(this.h, (C.int)(x), (C.int)(y))))
}

func (this *QWidget) ChildAtWithQPoint(p *QPoint) *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidget_ChildAtWithQPoint(this.h, p.cPointer())))
}

func (this *QWidget) SetAttribute(param1 WidgetAttribute) {
	C.QWidget_SetAttribute(this.h, (C.uintptr_t)(param1))
}

func (this *QWidget) TestAttribute(param1 WidgetAttribute) bool {
	return (bool)(C.QWidget_TestAttribute(this.h, (C.uintptr_t)(param1)))
}

func (this *QWidget) PaintEngine() *QPaintEngine {
	return newQPaintEngine_U(unsafe.Pointer(C.QWidget_PaintEngine(this.h)))
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
	return newQBackingStore_U(unsafe.Pointer(C.QWidget_BackingStore(this.h)))
}

func (this *QWidget) WindowHandle() *QWindow {
	return newQWindow_U(unsafe.Pointer(C.QWidget_WindowHandle(this.h)))
}

func (this *QWidget) Screen() *QScreen {
	return newQScreen_U(unsafe.Pointer(C.QWidget_Screen(this.h)))
}

func QWidget_CreateWindowContainer(window *QWindow) *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidget_CreateWindowContainer(window.cPointer())))
}

func (this *QWidget) WindowTitleChanged(title string) {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	C.QWidget_WindowTitleChanged(this.h, (*C.struct_miqt_string)(title_ms))
}
func (this *QWidget) OnWindowTitleChanged(slot func(title string)) {
	C.QWidget_connect_WindowTitleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWidget_WindowTitleChanged
func miqt_exec_callback_QWidget_WindowTitleChanged(cb *C.void, title *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(title string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var title_ms *C.struct_miqt_string = title
	title_ret := C.GoStringN(&title_ms.data, C.int(int64(title_ms.len)))
	C.free(unsafe.Pointer(title_ms))
	slotval1 := title_ret

	gofunc(slotval1)
}

func (this *QWidget) WindowIconChanged(icon *QIcon) {
	C.QWidget_WindowIconChanged(this.h, icon.cPointer())
}
func (this *QWidget) OnWindowIconChanged(slot func(icon *QIcon)) {
	C.QWidget_connect_WindowIconChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWidget_WindowIconChanged
func miqt_exec_callback_QWidget_WindowIconChanged(cb *C.void, icon *C.QIcon) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(icon *QIcon))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQIcon_U(unsafe.Pointer(icon))

	gofunc(slotval1)
}

func (this *QWidget) WindowIconTextChanged(iconText string) {
	iconText_ms := miqt_strdupg(iconText)
	defer C.free(iconText_ms)
	C.QWidget_WindowIconTextChanged(this.h, (*C.struct_miqt_string)(iconText_ms))
}
func (this *QWidget) OnWindowIconTextChanged(slot func(iconText string)) {
	C.QWidget_connect_WindowIconTextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWidget_WindowIconTextChanged
func miqt_exec_callback_QWidget_WindowIconTextChanged(cb *C.void, iconText *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(iconText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var iconText_ms *C.struct_miqt_string = iconText
	iconText_ret := C.GoStringN(&iconText_ms.data, C.int(int64(iconText_ms.len)))
	C.free(unsafe.Pointer(iconText_ms))
	slotval1 := iconText_ret

	gofunc(slotval1)
}

func (this *QWidget) CustomContextMenuRequested(pos *QPoint) {
	C.QWidget_CustomContextMenuRequested(this.h, pos.cPointer())
}
func (this *QWidget) OnCustomContextMenuRequested(slot func(pos *QPoint)) {
	C.QWidget_connect_CustomContextMenuRequested(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWidget_CustomContextMenuRequested
func miqt_exec_callback_QWidget_CustomContextMenuRequested(cb *C.void, pos *C.QPoint) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(pos *QPoint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint_U(unsafe.Pointer(pos))

	gofunc(slotval1)
}

func (this *QWidget) InputMethodQuery(param1 InputMethodQuery) *QVariant {
	_ret := C.QWidget_InputMethodQuery(this.h, (C.uintptr_t)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) InputMethodHints() int {
	return (int)(C.QWidget_InputMethodHints(this.h))
}

func (this *QWidget) SetInputMethodHints(hints int) {
	C.QWidget_SetInputMethodHints(this.h, (C.int)(hints))
}

func QWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWidget) Render2(target *QPaintDevice, targetOffset *QPoint) {
	C.QWidget_Render2(this.h, target.cPointer(), targetOffset.cPointer())
}

func (this *QWidget) Render3(target *QPaintDevice, targetOffset *QPoint, sourceRegion *QRegion) {
	C.QWidget_Render3(this.h, target.cPointer(), targetOffset.cPointer(), sourceRegion.cPointer())
}

func (this *QWidget) Render4(target *QPaintDevice, targetOffset *QPoint, sourceRegion *QRegion, renderFlags int) {
	C.QWidget_Render4(this.h, target.cPointer(), targetOffset.cPointer(), sourceRegion.cPointer(), (C.int)(renderFlags))
}

func (this *QWidget) Render22(painter *QPainter, targetOffset *QPoint) {
	C.QWidget_Render22(this.h, painter.cPointer(), targetOffset.cPointer())
}

func (this *QWidget) Render32(painter *QPainter, targetOffset *QPoint, sourceRegion *QRegion) {
	C.QWidget_Render32(this.h, painter.cPointer(), targetOffset.cPointer(), sourceRegion.cPointer())
}

func (this *QWidget) Render42(painter *QPainter, targetOffset *QPoint, sourceRegion *QRegion, renderFlags int) {
	C.QWidget_Render42(this.h, painter.cPointer(), targetOffset.cPointer(), sourceRegion.cPointer(), (C.int)(renderFlags))
}

func (this *QWidget) Grab1(rectangle *QRect) *QPixmap {
	_ret := C.QWidget_Grab1(this.h, rectangle.cPointer())
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidget) GrabGesture2(typeVal GestureType, flags int) {
	C.QWidget_GrabGesture2(this.h, (C.uintptr_t)(typeVal), (C.int)(flags))
}

func (this *QWidget) GrabShortcut2(key *QKeySequence, context ShortcutContext) int {
	return (int)(C.QWidget_GrabShortcut2(this.h, key.cPointer(), (C.uintptr_t)(context)))
}

func (this *QWidget) SetShortcutEnabled2(id int, enable bool) {
	C.QWidget_SetShortcutEnabled2(this.h, (C.int)(id), (C.bool)(enable))
}

func (this *QWidget) SetShortcutAutoRepeat2(id int, enable bool) {
	C.QWidget_SetShortcutAutoRepeat2(this.h, (C.int)(id), (C.bool)(enable))
}

func (this *QWidget) SetWindowFlag2(param1 WindowType, on bool) {
	C.QWidget_SetWindowFlag2(this.h, (C.uintptr_t)(param1), (C.bool)(on))
}

func (this *QWidget) SetAttribute2(param1 WidgetAttribute, on bool) {
	C.QWidget_SetAttribute2(this.h, (C.uintptr_t)(param1), (C.bool)(on))
}

func QWidget_CreateWindowContainer2(window *QWindow, parent *QWidget) *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidget_CreateWindowContainer2(window.cPointer(), parent.cPointer())))
}

func QWidget_CreateWindowContainer3(window *QWindow, parent *QWidget, flags int) *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidget_CreateWindowContainer3(window.cPointer(), parent.cPointer(), (C.int)(flags))))
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
