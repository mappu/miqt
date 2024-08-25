package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
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

func (this *QWidgetData) Delete() {
	C.QWidgetData_Delete(this.h)
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
	return &QWidget{h: h, QObject: newQObject_U(unsafe.Pointer(h)), QPaintDevice: newQPaintDevice_U(unsafe.Pointer(h))}
}

func newQWidget_U(h unsafe.Pointer) *QWidget {
	return newQWidget((*C.QWidget)(h))
}

func (this *QWidget) MetaObject() *QMetaObject {
	ret := C.QWidget_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWidget) DevType() int {
	ret := C.QWidget_DevType(this.h)
	return (int)(ret)
}

func (this *QWidget) WinId() uintptr {
	ret := C.QWidget_WinId(this.h)
	return (uintptr)(ret)
}

func (this *QWidget) CreateWinId() {
	C.QWidget_CreateWinId(this.h)
}

func (this *QWidget) InternalWinId() uintptr {
	ret := C.QWidget_InternalWinId(this.h)
	return (uintptr)(ret)
}

func (this *QWidget) EffectiveWinId() uintptr {
	ret := C.QWidget_EffectiveWinId(this.h)
	return (uintptr)(ret)
}

func (this *QWidget) Style() *QStyle {
	ret := C.QWidget_Style(this.h)
	return newQStyle_U(unsafe.Pointer(ret))
}

func (this *QWidget) SetStyle(style *QStyle) {
	C.QWidget_SetStyle(this.h, style.cPointer())
}

func (this *QWidget) IsTopLevel() bool {
	ret := C.QWidget_IsTopLevel(this.h)
	return (bool)(ret)
}

func (this *QWidget) IsWindow() bool {
	ret := C.QWidget_IsWindow(this.h)
	return (bool)(ret)
}

func (this *QWidget) IsModal() bool {
	ret := C.QWidget_IsModal(this.h)
	return (bool)(ret)
}

func (this *QWidget) IsEnabled() bool {
	ret := C.QWidget_IsEnabled(this.h)
	return (bool)(ret)
}

func (this *QWidget) IsEnabledTo(param1 *QWidget) bool {
	ret := C.QWidget_IsEnabledTo(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QWidget) IsEnabledToTLW() bool {
	ret := C.QWidget_IsEnabledToTLW(this.h)
	return (bool)(ret)
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
	ret := C.QWidget_FrameGeometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) Geometry() *QRect {
	ret := C.QWidget_Geometry(this.h)
	return newQRect_U(unsafe.Pointer(ret))
}

func (this *QWidget) NormalGeometry() *QRect {
	ret := C.QWidget_NormalGeometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) X() int {
	ret := C.QWidget_X(this.h)
	return (int)(ret)
}

func (this *QWidget) Y() int {
	ret := C.QWidget_Y(this.h)
	return (int)(ret)
}

func (this *QWidget) Pos() *QPoint {
	ret := C.QWidget_Pos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) FrameSize() *QSize {
	ret := C.QWidget_FrameSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) Size() *QSize {
	ret := C.QWidget_Size(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) Width() int {
	ret := C.QWidget_Width(this.h)
	return (int)(ret)
}

func (this *QWidget) Height() int {
	ret := C.QWidget_Height(this.h)
	return (int)(ret)
}

func (this *QWidget) Rect() *QRect {
	ret := C.QWidget_Rect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) ChildrenRect() *QRect {
	ret := C.QWidget_ChildrenRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) ChildrenRegion() *QRegion {
	ret := C.QWidget_ChildrenRegion(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) MinimumSize() *QSize {
	ret := C.QWidget_MinimumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) MaximumSize() *QSize {
	ret := C.QWidget_MaximumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) MinimumWidth() int {
	ret := C.QWidget_MinimumWidth(this.h)
	return (int)(ret)
}

func (this *QWidget) MinimumHeight() int {
	ret := C.QWidget_MinimumHeight(this.h)
	return (int)(ret)
}

func (this *QWidget) MaximumWidth() int {
	ret := C.QWidget_MaximumWidth(this.h)
	return (int)(ret)
}

func (this *QWidget) MaximumHeight() int {
	ret := C.QWidget_MaximumHeight(this.h)
	return (int)(ret)
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
	ret := C.QWidget_SizeIncrement(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) SetSizeIncrement(sizeIncrement *QSize) {
	C.QWidget_SetSizeIncrement(this.h, sizeIncrement.cPointer())
}

func (this *QWidget) SetSizeIncrement2(w int, h int) {
	C.QWidget_SetSizeIncrement2(this.h, (C.int)(w), (C.int)(h))
}

func (this *QWidget) BaseSize() *QSize {
	ret := C.QWidget_BaseSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
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
	ret := C.QWidget_MapToGlobal(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) MapFromGlobal(param1 *QPoint) *QPoint {
	ret := C.QWidget_MapFromGlobal(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) MapToParent(param1 *QPoint) *QPoint {
	ret := C.QWidget_MapToParent(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) MapFromParent(param1 *QPoint) *QPoint {
	ret := C.QWidget_MapFromParent(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) MapTo(param1 *QWidget, param2 *QPoint) *QPoint {
	ret := C.QWidget_MapTo(this.h, param1.cPointer(), param2.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) MapFrom(param1 *QWidget, param2 *QPoint) *QPoint {
	ret := C.QWidget_MapFrom(this.h, param1.cPointer(), param2.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) Window() *QWidget {
	ret := C.QWidget_Window(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QWidget) NativeParentWidget() *QWidget {
	ret := C.QWidget_NativeParentWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QWidget) TopLevelWidget() *QWidget {
	ret := C.QWidget_TopLevelWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QWidget) Palette() *QPalette {
	ret := C.QWidget_Palette(this.h)
	return newQPalette_U(unsafe.Pointer(ret))
}

func (this *QWidget) SetPalette(palette *QPalette) {
	C.QWidget_SetPalette(this.h, palette.cPointer())
}

func (this *QWidget) Font() *QFont {
	ret := C.QWidget_Font(this.h)
	return newQFont_U(unsafe.Pointer(ret))
}

func (this *QWidget) SetFont(font *QFont) {
	C.QWidget_SetFont(this.h, font.cPointer())
}

func (this *QWidget) FontMetrics() *QFontMetrics {
	ret := C.QWidget_FontMetrics(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFontMetrics(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFontMetrics) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) FontInfo() *QFontInfo {
	ret := C.QWidget_FontInfo(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFontInfo(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFontInfo) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) Cursor() *QCursor {
	ret := C.QWidget_Cursor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCursor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCursor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
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
	ret := C.QWidget_HasMouseTracking(this.h)
	return (bool)(ret)
}

func (this *QWidget) UnderMouse() bool {
	ret := C.QWidget_UnderMouse(this.h)
	return (bool)(ret)
}

func (this *QWidget) SetTabletTracking(enable bool) {
	C.QWidget_SetTabletTracking(this.h, (C.bool)(enable))
}

func (this *QWidget) HasTabletTracking() bool {
	ret := C.QWidget_HasTabletTracking(this.h)
	return (bool)(ret)
}

func (this *QWidget) SetMask(mask *QBitmap) {
	C.QWidget_SetMask(this.h, mask.cPointer())
}

func (this *QWidget) SetMaskWithMask(mask *QRegion) {
	C.QWidget_SetMaskWithMask(this.h, mask.cPointer())
}

func (this *QWidget) Mask() *QRegion {
	ret := C.QWidget_Mask(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) ClearMask() {
	C.QWidget_ClearMask(this.h)
}

func (this *QWidget) Grab() *QPixmap {
	ret := C.QWidget_Grab(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) GraphicsEffect() *QGraphicsEffect {
	ret := C.QWidget_GraphicsEffect(this.h)
	return newQGraphicsEffect_U(unsafe.Pointer(ret))
}

func (this *QWidget) SetGraphicsEffect(effect *QGraphicsEffect) {
	C.QWidget_SetGraphicsEffect(this.h, effect.cPointer())
}

func (this *QWidget) SetWindowTitle(windowTitle string) {
	windowTitle_Cstring := C.CString(windowTitle)
	defer C.free(unsafe.Pointer(windowTitle_Cstring))
	C.QWidget_SetWindowTitle(this.h, windowTitle_Cstring, C.ulong(len(windowTitle)))
}

func (this *QWidget) SetStyleSheet(styleSheet string) {
	styleSheet_Cstring := C.CString(styleSheet)
	defer C.free(unsafe.Pointer(styleSheet_Cstring))
	C.QWidget_SetStyleSheet(this.h, styleSheet_Cstring, C.ulong(len(styleSheet)))
}

func (this *QWidget) StyleSheet() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_StyleSheet(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWidget) WindowTitle() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_WindowTitle(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWidget) SetWindowIcon(icon *QIcon) {
	C.QWidget_SetWindowIcon(this.h, icon.cPointer())
}

func (this *QWidget) WindowIcon() *QIcon {
	ret := C.QWidget_WindowIcon(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) SetWindowIconText(windowIconText string) {
	windowIconText_Cstring := C.CString(windowIconText)
	defer C.free(unsafe.Pointer(windowIconText_Cstring))
	C.QWidget_SetWindowIconText(this.h, windowIconText_Cstring, C.ulong(len(windowIconText)))
}

func (this *QWidget) WindowIconText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_WindowIconText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWidget) SetWindowRole(windowRole string) {
	windowRole_Cstring := C.CString(windowRole)
	defer C.free(unsafe.Pointer(windowRole_Cstring))
	C.QWidget_SetWindowRole(this.h, windowRole_Cstring, C.ulong(len(windowRole)))
}

func (this *QWidget) WindowRole() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_WindowRole(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWidget) SetWindowFilePath(filePath string) {
	filePath_Cstring := C.CString(filePath)
	defer C.free(unsafe.Pointer(filePath_Cstring))
	C.QWidget_SetWindowFilePath(this.h, filePath_Cstring, C.ulong(len(filePath)))
}

func (this *QWidget) WindowFilePath() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_WindowFilePath(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWidget) SetWindowOpacity(level float64) {
	C.QWidget_SetWindowOpacity(this.h, (C.double)(level))
}

func (this *QWidget) WindowOpacity() float64 {
	ret := C.QWidget_WindowOpacity(this.h)
	return (float64)(ret)
}

func (this *QWidget) IsWindowModified() bool {
	ret := C.QWidget_IsWindowModified(this.h)
	return (bool)(ret)
}

func (this *QWidget) SetToolTip(toolTip string) {
	toolTip_Cstring := C.CString(toolTip)
	defer C.free(unsafe.Pointer(toolTip_Cstring))
	C.QWidget_SetToolTip(this.h, toolTip_Cstring, C.ulong(len(toolTip)))
}

func (this *QWidget) ToolTip() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_ToolTip(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWidget) SetToolTipDuration(msec int) {
	C.QWidget_SetToolTipDuration(this.h, (C.int)(msec))
}

func (this *QWidget) ToolTipDuration() int {
	ret := C.QWidget_ToolTipDuration(this.h)
	return (int)(ret)
}

func (this *QWidget) SetStatusTip(statusTip string) {
	statusTip_Cstring := C.CString(statusTip)
	defer C.free(unsafe.Pointer(statusTip_Cstring))
	C.QWidget_SetStatusTip(this.h, statusTip_Cstring, C.ulong(len(statusTip)))
}

func (this *QWidget) StatusTip() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_StatusTip(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWidget) SetWhatsThis(whatsThis string) {
	whatsThis_Cstring := C.CString(whatsThis)
	defer C.free(unsafe.Pointer(whatsThis_Cstring))
	C.QWidget_SetWhatsThis(this.h, whatsThis_Cstring, C.ulong(len(whatsThis)))
}

func (this *QWidget) WhatsThis() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_WhatsThis(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWidget) AccessibleName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_AccessibleName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWidget) SetAccessibleName(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QWidget_SetAccessibleName(this.h, name_Cstring, C.ulong(len(name)))
}

func (this *QWidget) AccessibleDescription() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_AccessibleDescription(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWidget) SetAccessibleDescription(description string) {
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	C.QWidget_SetAccessibleDescription(this.h, description_Cstring, C.ulong(len(description)))
}

func (this *QWidget) UnsetLayoutDirection() {
	C.QWidget_UnsetLayoutDirection(this.h)
}

func (this *QWidget) SetLocale(locale *QLocale) {
	C.QWidget_SetLocale(this.h, locale.cPointer())
}

func (this *QWidget) Locale() *QLocale {
	ret := C.QWidget_Locale(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLocale(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLocale) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) UnsetLocale() {
	C.QWidget_UnsetLocale(this.h)
}

func (this *QWidget) IsRightToLeft() bool {
	ret := C.QWidget_IsRightToLeft(this.h)
	return (bool)(ret)
}

func (this *QWidget) IsLeftToRight() bool {
	ret := C.QWidget_IsLeftToRight(this.h)
	return (bool)(ret)
}

func (this *QWidget) SetFocus() {
	C.QWidget_SetFocus(this.h)
}

func (this *QWidget) IsActiveWindow() bool {
	ret := C.QWidget_IsActiveWindow(this.h)
	return (bool)(ret)
}

func (this *QWidget) ActivateWindow() {
	C.QWidget_ActivateWindow(this.h)
}

func (this *QWidget) ClearFocus() {
	C.QWidget_ClearFocus(this.h)
}

func (this *QWidget) HasFocus() bool {
	ret := C.QWidget_HasFocus(this.h)
	return (bool)(ret)
}

func QWidget_SetTabOrder(param1 *QWidget, param2 *QWidget) {
	C.QWidget_SetTabOrder(param1.cPointer(), param2.cPointer())
}

func (this *QWidget) SetFocusProxy(focusProxy *QWidget) {
	C.QWidget_SetFocusProxy(this.h, focusProxy.cPointer())
}

func (this *QWidget) FocusProxy() *QWidget {
	ret := C.QWidget_FocusProxy(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
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
	ret := C.QWidget_MouseGrabber()
	return newQWidget_U(unsafe.Pointer(ret))
}

func QWidget_KeyboardGrabber() *QWidget {
	ret := C.QWidget_KeyboardGrabber()
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QWidget) UpdatesEnabled() bool {
	ret := C.QWidget_UpdatesEnabled(this.h)
	return (bool)(ret)
}

func (this *QWidget) SetUpdatesEnabled(enable bool) {
	C.QWidget_SetUpdatesEnabled(this.h, (C.bool)(enable))
}

func (this *QWidget) GraphicsProxyWidget() *QGraphicsProxyWidget {
	ret := C.QWidget_GraphicsProxyWidget(this.h)
	return newQGraphicsProxyWidget_U(unsafe.Pointer(ret))
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
	ret := C.QWidget_Close(this.h)
	return (bool)(ret)
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
	ret := C.QWidget_SaveGeometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) RestoreGeometry(geometry *QByteArray) bool {
	ret := C.QWidget_RestoreGeometry(this.h, geometry.cPointer())
	return (bool)(ret)
}

func (this *QWidget) AdjustSize() {
	C.QWidget_AdjustSize(this.h)
}

func (this *QWidget) IsVisible() bool {
	ret := C.QWidget_IsVisible(this.h)
	return (bool)(ret)
}

func (this *QWidget) IsVisibleTo(param1 *QWidget) bool {
	ret := C.QWidget_IsVisibleTo(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QWidget) IsHidden() bool {
	ret := C.QWidget_IsHidden(this.h)
	return (bool)(ret)
}

func (this *QWidget) IsMinimized() bool {
	ret := C.QWidget_IsMinimized(this.h)
	return (bool)(ret)
}

func (this *QWidget) IsMaximized() bool {
	ret := C.QWidget_IsMaximized(this.h)
	return (bool)(ret)
}

func (this *QWidget) IsFullScreen() bool {
	ret := C.QWidget_IsFullScreen(this.h)
	return (bool)(ret)
}

func (this *QWidget) SizeHint() *QSize {
	ret := C.QWidget_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) MinimumSizeHint() *QSize {
	ret := C.QWidget_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) SizePolicy() *QSizePolicy {
	ret := C.QWidget_SizePolicy(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizePolicy(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizePolicy) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) SetSizePolicy(sizePolicy QSizePolicy) {
	C.QWidget_SetSizePolicy(this.h, sizePolicy.cPointer())
}

func (this *QWidget) HeightForWidth(param1 int) int {
	ret := C.QWidget_HeightForWidth(this.h, (C.int)(param1))
	return (int)(ret)
}

func (this *QWidget) HasHeightForWidth() bool {
	ret := C.QWidget_HasHeightForWidth(this.h)
	return (bool)(ret)
}

func (this *QWidget) VisibleRegion() *QRegion {
	ret := C.QWidget_VisibleRegion(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
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
	ret := C.QWidget_ContentsMargins(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMargins(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMargins) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) ContentsRect() *QRect {
	ret := C.QWidget_ContentsRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) Layout() *QLayout {
	ret := C.QWidget_Layout(this.h)
	return newQLayout_U(unsafe.Pointer(ret))
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

func (this *QWidget) Scroll(dx int, dy int) {
	C.QWidget_Scroll(this.h, (C.int)(dx), (C.int)(dy))
}

func (this *QWidget) Scroll2(dx int, dy int, param3 *QRect) {
	C.QWidget_Scroll2(this.h, (C.int)(dx), (C.int)(dy), param3.cPointer())
}

func (this *QWidget) FocusWidget() *QWidget {
	ret := C.QWidget_FocusWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QWidget) NextInFocusChain() *QWidget {
	ret := C.QWidget_NextInFocusChain(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QWidget) PreviousInFocusChain() *QWidget {
	ret := C.QWidget_PreviousInFocusChain(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QWidget) AcceptDrops() bool {
	ret := C.QWidget_AcceptDrops(this.h)
	return (bool)(ret)
}

func (this *QWidget) SetAcceptDrops(on bool) {
	C.QWidget_SetAcceptDrops(this.h, (C.bool)(on))
}

func (this *QWidget) AddAction(action *QAction) {
	C.QWidget_AddAction(this.h, action.cPointer())
}

func (this *QWidget) AddActions(actions []*QAction) {
	// For the C ABI, malloc a C array of raw pointers
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.ulong(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	C.QWidget_AddActions(this.h, &actions_CArray[0], C.ulong(len(actions)))
}

func (this *QWidget) InsertActions(before *QAction, actions []*QAction) {
	// For the C ABI, malloc a C array of raw pointers
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.ulong(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	C.QWidget_InsertActions(this.h, before.cPointer(), &actions_CArray[0], C.ulong(len(actions)))
}

func (this *QWidget) InsertAction(before *QAction, action *QAction) {
	C.QWidget_InsertAction(this.h, before.cPointer(), action.cPointer())
}

func (this *QWidget) RemoveAction(action *QAction) {
	C.QWidget_RemoveAction(this.h, action.cPointer())
}

func (this *QWidget) Actions() []*QAction {
	var _out **C.QAction = nil
	var _out_len C.size_t = 0
	C.QWidget_Actions(this.h, &_out, &_out_len)
	ret := make([]*QAction, int(_out_len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQAction(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWidget) ParentWidget() *QWidget {
	ret := C.QWidget_ParentWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func QWidget_Find(param1 uintptr) *QWidget {
	ret := C.QWidget_Find((C.uintptr_t)(param1))
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QWidget) ChildAt(x int, y int) *QWidget {
	ret := C.QWidget_ChildAt(this.h, (C.int)(x), (C.int)(y))
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QWidget) ChildAtWithQPoint(p *QPoint) *QWidget {
	ret := C.QWidget_ChildAtWithQPoint(this.h, p.cPointer())
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QWidget) PaintEngine() *QPaintEngine {
	ret := C.QWidget_PaintEngine(this.h)
	return newQPaintEngine_U(unsafe.Pointer(ret))
}

func (this *QWidget) EnsurePolished() {
	C.QWidget_EnsurePolished(this.h)
}

func (this *QWidget) IsAncestorOf(child *QWidget) bool {
	ret := C.QWidget_IsAncestorOf(this.h, child.cPointer())
	return (bool)(ret)
}

func (this *QWidget) AutoFillBackground() bool {
	ret := C.QWidget_AutoFillBackground(this.h)
	return (bool)(ret)
}

func (this *QWidget) SetAutoFillBackground(enabled bool) {
	C.QWidget_SetAutoFillBackground(this.h, (C.bool)(enabled))
}

func (this *QWidget) BackingStore() *QBackingStore {
	ret := C.QWidget_BackingStore(this.h)
	return newQBackingStore_U(unsafe.Pointer(ret))
}

func (this *QWidget) WindowHandle() *QWindow {
	ret := C.QWidget_WindowHandle(this.h)
	return newQWindow_U(unsafe.Pointer(ret))
}

func (this *QWidget) Screen() *QScreen {
	ret := C.QWidget_Screen(this.h)
	return newQScreen_U(unsafe.Pointer(ret))
}

func (this *QWidget) WindowTitleChanged(title string) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	C.QWidget_WindowTitleChanged(this.h, title_Cstring, C.ulong(len(title)))
}

func (this *QWidget) OnWindowTitleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWidget_connect_WindowTitleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWidget) WindowIconChanged(icon *QIcon) {
	C.QWidget_WindowIconChanged(this.h, icon.cPointer())
}

func (this *QWidget) OnWindowIconChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWidget_connect_WindowIconChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWidget) WindowIconTextChanged(iconText string) {
	iconText_Cstring := C.CString(iconText)
	defer C.free(unsafe.Pointer(iconText_Cstring))
	C.QWidget_WindowIconTextChanged(this.h, iconText_Cstring, C.ulong(len(iconText)))
}

func (this *QWidget) OnWindowIconTextChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWidget_connect_WindowIconTextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWidget) CustomContextMenuRequested(pos *QPoint) {
	C.QWidget_CustomContextMenuRequested(this.h, pos.cPointer())
}

func (this *QWidget) OnCustomContextMenuRequested(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWidget_connect_CustomContextMenuRequested(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWidget) Grab1(rectangle *QRect) *QPixmap {
	ret := C.QWidget_Grab1(this.h, rectangle.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidget) SetShortcutEnabled2(id int, enable bool) {
	C.QWidget_SetShortcutEnabled2(this.h, (C.int)(id), (C.bool)(enable))
}

func (this *QWidget) SetShortcutAutoRepeat2(id int, enable bool) {
	C.QWidget_SetShortcutAutoRepeat2(this.h, (C.int)(id), (C.bool)(enable))
}

func (this *QWidget) Delete() {
	C.QWidget_Delete(this.h)
}
