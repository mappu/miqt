package qt

/*

#include "gen_qstyleoption.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStyleOption__OptionType int

const (
	QStyleOption__SO_Default           QStyleOption__OptionType = 0
	QStyleOption__SO_FocusRect         QStyleOption__OptionType = 1
	QStyleOption__SO_Button            QStyleOption__OptionType = 2
	QStyleOption__SO_Tab               QStyleOption__OptionType = 3
	QStyleOption__SO_MenuItem          QStyleOption__OptionType = 4
	QStyleOption__SO_Frame             QStyleOption__OptionType = 5
	QStyleOption__SO_ProgressBar       QStyleOption__OptionType = 6
	QStyleOption__SO_ToolBox           QStyleOption__OptionType = 7
	QStyleOption__SO_Header            QStyleOption__OptionType = 8
	QStyleOption__SO_DockWidget        QStyleOption__OptionType = 9
	QStyleOption__SO_ViewItem          QStyleOption__OptionType = 10
	QStyleOption__SO_TabWidgetFrame    QStyleOption__OptionType = 11
	QStyleOption__SO_TabBarBase        QStyleOption__OptionType = 12
	QStyleOption__SO_RubberBand        QStyleOption__OptionType = 13
	QStyleOption__SO_ToolBar           QStyleOption__OptionType = 14
	QStyleOption__SO_GraphicsItem      QStyleOption__OptionType = 15
	QStyleOption__SO_Complex           QStyleOption__OptionType = 983040
	QStyleOption__SO_Slider            QStyleOption__OptionType = 983041
	QStyleOption__SO_SpinBox           QStyleOption__OptionType = 983042
	QStyleOption__SO_ToolButton        QStyleOption__OptionType = 983043
	QStyleOption__SO_ComboBox          QStyleOption__OptionType = 983044
	QStyleOption__SO_TitleBar          QStyleOption__OptionType = 983045
	QStyleOption__SO_GroupBox          QStyleOption__OptionType = 983046
	QStyleOption__SO_SizeGrip          QStyleOption__OptionType = 983047
	QStyleOption__SO_CustomBase        QStyleOption__OptionType = 3840
	QStyleOption__SO_ComplexCustomBase QStyleOption__OptionType = 251658240
)

type QStyleOption__StyleOptionType int

const (
	QStyleOption__Type QStyleOption__StyleOptionType = 0
)

type QStyleOption__StyleOptionVersion int

const (
	QStyleOption__Version QStyleOption__StyleOptionVersion = 1
)

type QStyleOptionFocusRect__StyleOptionType int

const (
	QStyleOptionFocusRect__Type QStyleOptionFocusRect__StyleOptionType = 1
)

type QStyleOptionFocusRect__StyleOptionVersion int

const (
	QStyleOptionFocusRect__Version QStyleOptionFocusRect__StyleOptionVersion = 1
)

type QStyleOptionFrame__StyleOptionType int

const (
	QStyleOptionFrame__Type QStyleOptionFrame__StyleOptionType = 5
)

type QStyleOptionFrame__StyleOptionVersion int

const (
	QStyleOptionFrame__Version QStyleOptionFrame__StyleOptionVersion = 3
)

type QStyleOptionFrame__FrameFeature int

const (
	QStyleOptionFrame__None    QStyleOptionFrame__FrameFeature = 0
	QStyleOptionFrame__Flat    QStyleOptionFrame__FrameFeature = 1
	QStyleOptionFrame__Rounded QStyleOptionFrame__FrameFeature = 2
)

type QStyleOptionTabWidgetFrame__StyleOptionType int

const (
	QStyleOptionTabWidgetFrame__Type QStyleOptionTabWidgetFrame__StyleOptionType = 11
)

type QStyleOptionTabWidgetFrame__StyleOptionVersion int

const (
	QStyleOptionTabWidgetFrame__Version QStyleOptionTabWidgetFrame__StyleOptionVersion = 2
)

type QStyleOptionTabBarBase__StyleOptionType int

const (
	QStyleOptionTabBarBase__Type QStyleOptionTabBarBase__StyleOptionType = 12
)

type QStyleOptionTabBarBase__StyleOptionVersion int

const (
	QStyleOptionTabBarBase__Version QStyleOptionTabBarBase__StyleOptionVersion = 2
)

type QStyleOptionHeader__StyleOptionType int

const (
	QStyleOptionHeader__Type QStyleOptionHeader__StyleOptionType = 8
)

type QStyleOptionHeader__StyleOptionVersion int

const (
	QStyleOptionHeader__Version QStyleOptionHeader__StyleOptionVersion = 1
)

type QStyleOptionHeader__SectionPosition int

const (
	QStyleOptionHeader__Beginning      QStyleOptionHeader__SectionPosition = 0
	QStyleOptionHeader__Middle         QStyleOptionHeader__SectionPosition = 1
	QStyleOptionHeader__End            QStyleOptionHeader__SectionPosition = 2
	QStyleOptionHeader__OnlyOneSection QStyleOptionHeader__SectionPosition = 3
)

type QStyleOptionHeader__SelectedPosition int

const (
	QStyleOptionHeader__NotAdjacent                QStyleOptionHeader__SelectedPosition = 0
	QStyleOptionHeader__NextIsSelected             QStyleOptionHeader__SelectedPosition = 1
	QStyleOptionHeader__PreviousIsSelected         QStyleOptionHeader__SelectedPosition = 2
	QStyleOptionHeader__NextAndPreviousAreSelected QStyleOptionHeader__SelectedPosition = 3
)

type QStyleOptionHeader__SortIndicator int

const (
	QStyleOptionHeader__None     QStyleOptionHeader__SortIndicator = 0
	QStyleOptionHeader__SortUp   QStyleOptionHeader__SortIndicator = 1
	QStyleOptionHeader__SortDown QStyleOptionHeader__SortIndicator = 2
)

type QStyleOptionButton__StyleOptionType int

const (
	QStyleOptionButton__Type QStyleOptionButton__StyleOptionType = 2
)

type QStyleOptionButton__StyleOptionVersion int

const (
	QStyleOptionButton__Version QStyleOptionButton__StyleOptionVersion = 1
)

type QStyleOptionButton__ButtonFeature int

const (
	QStyleOptionButton__None              QStyleOptionButton__ButtonFeature = 0
	QStyleOptionButton__Flat              QStyleOptionButton__ButtonFeature = 1
	QStyleOptionButton__HasMenu           QStyleOptionButton__ButtonFeature = 2
	QStyleOptionButton__DefaultButton     QStyleOptionButton__ButtonFeature = 4
	QStyleOptionButton__AutoDefaultButton QStyleOptionButton__ButtonFeature = 8
	QStyleOptionButton__CommandLinkButton QStyleOptionButton__ButtonFeature = 16
)

type QStyleOptionTab__StyleOptionType int

const (
	QStyleOptionTab__Type QStyleOptionTab__StyleOptionType = 3
)

type QStyleOptionTab__StyleOptionVersion int

const (
	QStyleOptionTab__Version QStyleOptionTab__StyleOptionVersion = 3
)

type QStyleOptionTab__TabPosition int

const (
	QStyleOptionTab__Beginning  QStyleOptionTab__TabPosition = 0
	QStyleOptionTab__Middle     QStyleOptionTab__TabPosition = 1
	QStyleOptionTab__End        QStyleOptionTab__TabPosition = 2
	QStyleOptionTab__OnlyOneTab QStyleOptionTab__TabPosition = 3
)

type QStyleOptionTab__SelectedPosition int

const (
	QStyleOptionTab__NotAdjacent        QStyleOptionTab__SelectedPosition = 0
	QStyleOptionTab__NextIsSelected     QStyleOptionTab__SelectedPosition = 1
	QStyleOptionTab__PreviousIsSelected QStyleOptionTab__SelectedPosition = 2
)

type QStyleOptionTab__CornerWidget int

const (
	QStyleOptionTab__NoCornerWidgets   QStyleOptionTab__CornerWidget = 0
	QStyleOptionTab__LeftCornerWidget  QStyleOptionTab__CornerWidget = 1
	QStyleOptionTab__RightCornerWidget QStyleOptionTab__CornerWidget = 2
)

type QStyleOptionTab__TabFeature int

const (
	QStyleOptionTab__None     QStyleOptionTab__TabFeature = 0
	QStyleOptionTab__HasFrame QStyleOptionTab__TabFeature = 1
)

type QStyleOptionTabV4__StyleOptionVersion int

const (
	QStyleOptionTabV4__Version QStyleOptionTabV4__StyleOptionVersion = 4
)

type QStyleOptionToolBar__StyleOptionType int

const (
	QStyleOptionToolBar__Type QStyleOptionToolBar__StyleOptionType = 14
)

type QStyleOptionToolBar__StyleOptionVersion int

const (
	QStyleOptionToolBar__Version QStyleOptionToolBar__StyleOptionVersion = 1
)

type QStyleOptionToolBar__ToolBarPosition int

const (
	QStyleOptionToolBar__Beginning QStyleOptionToolBar__ToolBarPosition = 0
	QStyleOptionToolBar__Middle    QStyleOptionToolBar__ToolBarPosition = 1
	QStyleOptionToolBar__End       QStyleOptionToolBar__ToolBarPosition = 2
	QStyleOptionToolBar__OnlyOne   QStyleOptionToolBar__ToolBarPosition = 3
)

type QStyleOptionToolBar__ToolBarFeature int

const (
	QStyleOptionToolBar__None    QStyleOptionToolBar__ToolBarFeature = 0
	QStyleOptionToolBar__Movable QStyleOptionToolBar__ToolBarFeature = 1
)

type QStyleOptionProgressBar__StyleOptionType int

const (
	QStyleOptionProgressBar__Type QStyleOptionProgressBar__StyleOptionType = 6
)

type QStyleOptionProgressBar__StyleOptionVersion int

const (
	QStyleOptionProgressBar__Version QStyleOptionProgressBar__StyleOptionVersion = 2
)

type QStyleOptionMenuItem__StyleOptionType int

const (
	QStyleOptionMenuItem__Type QStyleOptionMenuItem__StyleOptionType = 4
)

type QStyleOptionMenuItem__StyleOptionVersion int

const (
	QStyleOptionMenuItem__Version QStyleOptionMenuItem__StyleOptionVersion = 1
)

type QStyleOptionMenuItem__MenuItemType int

const (
	QStyleOptionMenuItem__Normal      QStyleOptionMenuItem__MenuItemType = 0
	QStyleOptionMenuItem__DefaultItem QStyleOptionMenuItem__MenuItemType = 1
	QStyleOptionMenuItem__Separator   QStyleOptionMenuItem__MenuItemType = 2
	QStyleOptionMenuItem__SubMenu     QStyleOptionMenuItem__MenuItemType = 3
	QStyleOptionMenuItem__Scroller    QStyleOptionMenuItem__MenuItemType = 4
	QStyleOptionMenuItem__TearOff     QStyleOptionMenuItem__MenuItemType = 5
	QStyleOptionMenuItem__Margin      QStyleOptionMenuItem__MenuItemType = 6
	QStyleOptionMenuItem__EmptyArea   QStyleOptionMenuItem__MenuItemType = 7
)

type QStyleOptionMenuItem__CheckType int

const (
	QStyleOptionMenuItem__NotCheckable QStyleOptionMenuItem__CheckType = 0
	QStyleOptionMenuItem__Exclusive    QStyleOptionMenuItem__CheckType = 1
	QStyleOptionMenuItem__NonExclusive QStyleOptionMenuItem__CheckType = 2
)

type QStyleOptionDockWidget__StyleOptionType int

const (
	QStyleOptionDockWidget__Type QStyleOptionDockWidget__StyleOptionType = 9
)

type QStyleOptionDockWidget__StyleOptionVersion int

const (
	QStyleOptionDockWidget__Version QStyleOptionDockWidget__StyleOptionVersion = 2
)

type QStyleOptionViewItem__StyleOptionType int

const (
	QStyleOptionViewItem__Type QStyleOptionViewItem__StyleOptionType = 10
)

type QStyleOptionViewItem__StyleOptionVersion int

const (
	QStyleOptionViewItem__Version QStyleOptionViewItem__StyleOptionVersion = 4
)

type QStyleOptionViewItem__Position int

const (
	QStyleOptionViewItem__Left   QStyleOptionViewItem__Position = 0
	QStyleOptionViewItem__Right  QStyleOptionViewItem__Position = 1
	QStyleOptionViewItem__Top    QStyleOptionViewItem__Position = 2
	QStyleOptionViewItem__Bottom QStyleOptionViewItem__Position = 3
)

type QStyleOptionViewItem__ViewItemFeature int

const (
	QStyleOptionViewItem__None              QStyleOptionViewItem__ViewItemFeature = 0
	QStyleOptionViewItem__WrapText          QStyleOptionViewItem__ViewItemFeature = 1
	QStyleOptionViewItem__Alternate         QStyleOptionViewItem__ViewItemFeature = 2
	QStyleOptionViewItem__HasCheckIndicator QStyleOptionViewItem__ViewItemFeature = 4
	QStyleOptionViewItem__HasDisplay        QStyleOptionViewItem__ViewItemFeature = 8
	QStyleOptionViewItem__HasDecoration     QStyleOptionViewItem__ViewItemFeature = 16
)

type QStyleOptionViewItem__ViewItemPosition int

const (
	QStyleOptionViewItem__Invalid   QStyleOptionViewItem__ViewItemPosition = 0
	QStyleOptionViewItem__Beginning QStyleOptionViewItem__ViewItemPosition = 1
	QStyleOptionViewItem__Middle    QStyleOptionViewItem__ViewItemPosition = 2
	QStyleOptionViewItem__End       QStyleOptionViewItem__ViewItemPosition = 3
	QStyleOptionViewItem__OnlyOne   QStyleOptionViewItem__ViewItemPosition = 4
)

type QStyleOptionToolBox__StyleOptionType int

const (
	QStyleOptionToolBox__Type QStyleOptionToolBox__StyleOptionType = 7
)

type QStyleOptionToolBox__StyleOptionVersion int

const (
	QStyleOptionToolBox__Version QStyleOptionToolBox__StyleOptionVersion = 2
)

type QStyleOptionToolBox__TabPosition int

const (
	QStyleOptionToolBox__Beginning  QStyleOptionToolBox__TabPosition = 0
	QStyleOptionToolBox__Middle     QStyleOptionToolBox__TabPosition = 1
	QStyleOptionToolBox__End        QStyleOptionToolBox__TabPosition = 2
	QStyleOptionToolBox__OnlyOneTab QStyleOptionToolBox__TabPosition = 3
)

type QStyleOptionToolBox__SelectedPosition int

const (
	QStyleOptionToolBox__NotAdjacent        QStyleOptionToolBox__SelectedPosition = 0
	QStyleOptionToolBox__NextIsSelected     QStyleOptionToolBox__SelectedPosition = 1
	QStyleOptionToolBox__PreviousIsSelected QStyleOptionToolBox__SelectedPosition = 2
)

type QStyleOptionRubberBand__StyleOptionType int

const (
	QStyleOptionRubberBand__Type QStyleOptionRubberBand__StyleOptionType = 13
)

type QStyleOptionRubberBand__StyleOptionVersion int

const (
	QStyleOptionRubberBand__Version QStyleOptionRubberBand__StyleOptionVersion = 1
)

type QStyleOptionComplex__StyleOptionType int

const (
	QStyleOptionComplex__Type QStyleOptionComplex__StyleOptionType = 983040
)

type QStyleOptionComplex__StyleOptionVersion int

const (
	QStyleOptionComplex__Version QStyleOptionComplex__StyleOptionVersion = 1
)

type QStyleOptionSlider__StyleOptionType int

const (
	QStyleOptionSlider__Type QStyleOptionSlider__StyleOptionType = 983041
)

type QStyleOptionSlider__StyleOptionVersion int

const (
	QStyleOptionSlider__Version QStyleOptionSlider__StyleOptionVersion = 1
)

type QStyleOptionSpinBox__StyleOptionType int

const (
	QStyleOptionSpinBox__Type QStyleOptionSpinBox__StyleOptionType = 983042
)

type QStyleOptionSpinBox__StyleOptionVersion int

const (
	QStyleOptionSpinBox__Version QStyleOptionSpinBox__StyleOptionVersion = 1
)

type QStyleOptionToolButton__StyleOptionType int

const (
	QStyleOptionToolButton__Type QStyleOptionToolButton__StyleOptionType = 983043
)

type QStyleOptionToolButton__StyleOptionVersion int

const (
	QStyleOptionToolButton__Version QStyleOptionToolButton__StyleOptionVersion = 1
)

type QStyleOptionToolButton__ToolButtonFeature int

const (
	QStyleOptionToolButton__None            QStyleOptionToolButton__ToolButtonFeature = 0
	QStyleOptionToolButton__Arrow           QStyleOptionToolButton__ToolButtonFeature = 1
	QStyleOptionToolButton__Menu            QStyleOptionToolButton__ToolButtonFeature = 4
	QStyleOptionToolButton__MenuButtonPopup QStyleOptionToolButton__ToolButtonFeature = 4
	QStyleOptionToolButton__PopupDelay      QStyleOptionToolButton__ToolButtonFeature = 8
	QStyleOptionToolButton__HasMenu         QStyleOptionToolButton__ToolButtonFeature = 16
)

type QStyleOptionComboBox__StyleOptionType int

const (
	QStyleOptionComboBox__Type QStyleOptionComboBox__StyleOptionType = 983044
)

type QStyleOptionComboBox__StyleOptionVersion int

const (
	QStyleOptionComboBox__Version QStyleOptionComboBox__StyleOptionVersion = 1
)

type QStyleOptionTitleBar__StyleOptionType int

const (
	QStyleOptionTitleBar__Type QStyleOptionTitleBar__StyleOptionType = 983045
)

type QStyleOptionTitleBar__StyleOptionVersion int

const (
	QStyleOptionTitleBar__Version QStyleOptionTitleBar__StyleOptionVersion = 1
)

type QStyleOptionGroupBox__StyleOptionType int

const (
	QStyleOptionGroupBox__Type QStyleOptionGroupBox__StyleOptionType = 983046
)

type QStyleOptionGroupBox__StyleOptionVersion int

const (
	QStyleOptionGroupBox__Version QStyleOptionGroupBox__StyleOptionVersion = 1
)

type QStyleOptionSizeGrip__StyleOptionType int

const (
	QStyleOptionSizeGrip__Type QStyleOptionSizeGrip__StyleOptionType = 983047
)

type QStyleOptionSizeGrip__StyleOptionVersion int

const (
	QStyleOptionSizeGrip__Version QStyleOptionSizeGrip__StyleOptionVersion = 1
)

type QStyleOptionGraphicsItem__StyleOptionType int

const (
	QStyleOptionGraphicsItem__Type QStyleOptionGraphicsItem__StyleOptionType = 15
)

type QStyleOptionGraphicsItem__StyleOptionVersion int

const (
	QStyleOptionGraphicsItem__Version QStyleOptionGraphicsItem__StyleOptionVersion = 1
)

type QStyleHintReturn__HintReturnType int

const (
	QStyleHintReturn__SH_Default QStyleHintReturn__HintReturnType = 61440
	QStyleHintReturn__SH_Mask    QStyleHintReturn__HintReturnType = 61441
	QStyleHintReturn__SH_Variant QStyleHintReturn__HintReturnType = 61442
)

type QStyleHintReturn__StyleOptionType int

const (
	QStyleHintReturn__Type QStyleHintReturn__StyleOptionType = 61440
)

type QStyleHintReturn__StyleOptionVersion int

const (
	QStyleHintReturn__Version QStyleHintReturn__StyleOptionVersion = 1
)

type QStyleHintReturnMask__StyleOptionType int

const (
	QStyleHintReturnMask__Type QStyleHintReturnMask__StyleOptionType = 61441
)

type QStyleHintReturnMask__StyleOptionVersion int

const (
	QStyleHintReturnMask__Version QStyleHintReturnMask__StyleOptionVersion = 1
)

type QStyleHintReturnVariant__StyleOptionType int

const (
	QStyleHintReturnVariant__Type QStyleHintReturnVariant__StyleOptionType = 61442
)

type QStyleHintReturnVariant__StyleOptionVersion int

const (
	QStyleHintReturnVariant__Version QStyleHintReturnVariant__StyleOptionVersion = 1
)

type QStyleOption struct {
	h  *C.QStyleOption
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOption) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QStyleOption) cPointer() *C.QStyleOption {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOption) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOption constructs the type using only CGO pointers.
func newQStyleOption(h *C.QStyleOption) *QStyleOption {
	if h == nil {
		return nil
	}

	return &QStyleOption{h: h}
}

// UnsafeNewQStyleOption constructs the type using only unsafe pointers.
func UnsafeNewQStyleOption(h unsafe.Pointer) *QStyleOption {
	return newQStyleOption((*C.QStyleOption)(h))
}

// NewQStyleOption constructs a new QStyleOption object.
func NewQStyleOption() *QStyleOption {

	return newQStyleOption(C.QStyleOption_new())
}

// NewQStyleOption2 constructs a new QStyleOption object.
func NewQStyleOption2(other *QStyleOption) *QStyleOption {
	defer runtime.KeepAlive(other)

	return newQStyleOption(C.QStyleOption_new2(other.cPointer()))
}

// NewQStyleOption3 constructs a new QStyleOption object.
func NewQStyleOption3(version int) *QStyleOption {

	return newQStyleOption(C.QStyleOption_new3((C.int)(version)))
}

// NewQStyleOption4 constructs a new QStyleOption object.
func NewQStyleOption4(version int, typeVal int) *QStyleOption {

	return newQStyleOption(C.QStyleOption_new4((C.int)(version), (C.int)(typeVal)))
}

func (this *QStyleOption) Version() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOption_version(this.h))
}

func (this *QStyleOption) SetVersion(version int) {
	defer runtime.KeepAlive(this)
	C.QStyleOption_setVersion(this.h, (C.int)(version))
}

func (this *QStyleOption) Type() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOption_type(this.h))
}

func (this *QStyleOption) SetType(typeVal int) {
	defer runtime.KeepAlive(this)
	C.QStyleOption_setType(this.h, (C.int)(typeVal))
}

func (this *QStyleOption) State() QStyle__StateFlag {
	defer runtime.KeepAlive(this)
	return (QStyle__StateFlag)(C.QStyleOption_state(this.h))
}

func (this *QStyleOption) SetState(state QStyle__StateFlag) {
	defer runtime.KeepAlive(this)
	C.QStyleOption_setState(this.h, (C.int)(state))
}

func (this *QStyleOption) Direction() LayoutDirection {
	defer runtime.KeepAlive(this)
	return (LayoutDirection)(C.QStyleOption_direction(this.h))
}

func (this *QStyleOption) SetDirection(direction LayoutDirection) {
	defer runtime.KeepAlive(this)
	C.QStyleOption_setDirection(this.h, (C.int)(direction))
}

func (this *QStyleOption) Rect() *QRect {
	defer runtime.KeepAlive(this)
	rect_goptr := newQRect(C.QStyleOption_rect(this.h))
	rect_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return rect_goptr
}

func (this *QStyleOption) SetRect(rect QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rect)
	C.QStyleOption_setRect(this.h, rect.cPointer())
}

func (this *QStyleOption) FontMetrics() *QFontMetrics {
	defer runtime.KeepAlive(this)
	fontMetrics_goptr := newQFontMetrics(C.QStyleOption_fontMetrics(this.h))
	fontMetrics_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return fontMetrics_goptr
}

func (this *QStyleOption) SetFontMetrics(fontMetrics QFontMetrics) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(fontMetrics)
	C.QStyleOption_setFontMetrics(this.h, fontMetrics.cPointer())
}

func (this *QStyleOption) Palette() *QPalette {
	defer runtime.KeepAlive(this)
	palette_goptr := newQPalette(C.QStyleOption_palette(this.h))
	palette_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return palette_goptr
}

func (this *QStyleOption) SetPalette(palette QPalette) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(palette)
	C.QStyleOption_setPalette(this.h, palette.cPointer())
}

func (this *QStyleOption) StyleObject() *QObject {
	defer runtime.KeepAlive(this)
	return newQObject(C.QStyleOption_styleObject(this.h))
}

func (this *QStyleOption) SetStyleObject(styleObject *QObject) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(styleObject)
	C.QStyleOption_setStyleObject(this.h, styleObject.cPointer())
}

func (this *QStyleOption) Init(w *QWidget) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(w)
	C.QStyleOption_init(this.h, w.cPointer())
}

func (this *QStyleOption) InitFrom(w *QWidget) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(w)
	C.QStyleOption_initFrom(this.h, w.cPointer())
}

func (this *QStyleOption) OperatorAssign(other *QStyleOption) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QStyleOption_operatorAssign(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOption) Delete() {
	C.QStyleOption_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOption) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOption_delete((*C.QStyleOption)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionFocusRect struct {
	h  *C.QStyleOptionFocusRect
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionFocusRect) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionFocusRect) cPointer() *C.QStyleOptionFocusRect {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionFocusRect) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionFocusRect constructs the type using only CGO pointers.
func newQStyleOptionFocusRect(h *C.QStyleOptionFocusRect) *QStyleOptionFocusRect {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionFocusRect_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionFocusRect{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionFocusRect constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionFocusRect(h unsafe.Pointer) *QStyleOptionFocusRect {
	return newQStyleOptionFocusRect((*C.QStyleOptionFocusRect)(h))
}

// NewQStyleOptionFocusRect constructs a new QStyleOptionFocusRect object.
func NewQStyleOptionFocusRect() *QStyleOptionFocusRect {

	return newQStyleOptionFocusRect(C.QStyleOptionFocusRect_new())
}

// NewQStyleOptionFocusRect2 constructs a new QStyleOptionFocusRect object.
func NewQStyleOptionFocusRect2(other *QStyleOptionFocusRect) *QStyleOptionFocusRect {
	defer runtime.KeepAlive(other)

	return newQStyleOptionFocusRect(C.QStyleOptionFocusRect_new2(other.cPointer()))
}

func (this *QStyleOptionFocusRect) BackgroundColor() *QColor {
	defer runtime.KeepAlive(this)
	backgroundColor_goptr := newQColor(C.QStyleOptionFocusRect_backgroundColor(this.h))
	backgroundColor_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return backgroundColor_goptr
}

func (this *QStyleOptionFocusRect) SetBackgroundColor(backgroundColor QColor) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(backgroundColor)
	C.QStyleOptionFocusRect_setBackgroundColor(this.h, backgroundColor.cPointer())
}

func (this *QStyleOptionFocusRect) OperatorAssign(param1 *QStyleOptionFocusRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionFocusRect_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionFocusRect) Delete() {
	C.QStyleOptionFocusRect_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionFocusRect) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionFocusRect_delete((*C.QStyleOptionFocusRect)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionFrame struct {
	h  *C.QStyleOptionFrame
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionFrame) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionFrame) cPointer() *C.QStyleOptionFrame {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionFrame) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionFrame constructs the type using only CGO pointers.
func newQStyleOptionFrame(h *C.QStyleOptionFrame) *QStyleOptionFrame {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionFrame_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionFrame{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionFrame constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionFrame(h unsafe.Pointer) *QStyleOptionFrame {
	return newQStyleOptionFrame((*C.QStyleOptionFrame)(h))
}

// NewQStyleOptionFrame constructs a new QStyleOptionFrame object.
func NewQStyleOptionFrame() *QStyleOptionFrame {

	return newQStyleOptionFrame(C.QStyleOptionFrame_new())
}

// NewQStyleOptionFrame2 constructs a new QStyleOptionFrame object.
func NewQStyleOptionFrame2(other *QStyleOptionFrame) *QStyleOptionFrame {
	defer runtime.KeepAlive(other)

	return newQStyleOptionFrame(C.QStyleOptionFrame_new2(other.cPointer()))
}

func (this *QStyleOptionFrame) LineWidth() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionFrame_lineWidth(this.h))
}

func (this *QStyleOptionFrame) SetLineWidth(lineWidth int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionFrame_setLineWidth(this.h, (C.int)(lineWidth))
}

func (this *QStyleOptionFrame) MidLineWidth() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionFrame_midLineWidth(this.h))
}

func (this *QStyleOptionFrame) SetMidLineWidth(midLineWidth int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionFrame_setMidLineWidth(this.h, (C.int)(midLineWidth))
}

func (this *QStyleOptionFrame) Features() QStyleOptionFrame__FrameFeature {
	defer runtime.KeepAlive(this)
	return (QStyleOptionFrame__FrameFeature)(C.QStyleOptionFrame_features(this.h))
}

func (this *QStyleOptionFrame) SetFeatures(features QStyleOptionFrame__FrameFeature) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionFrame_setFeatures(this.h, (C.int)(features))
}

func (this *QStyleOptionFrame) FrameShape() QFrame__Shape {
	defer runtime.KeepAlive(this)
	return (QFrame__Shape)(C.QStyleOptionFrame_frameShape(this.h))
}

func (this *QStyleOptionFrame) SetFrameShape(frameShape QFrame__Shape) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionFrame_setFrameShape(this.h, (C.int)(frameShape))
}

func (this *QStyleOptionFrame) OperatorAssign(param1 *QStyleOptionFrame) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionFrame_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionFrame) Delete() {
	C.QStyleOptionFrame_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionFrame) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionFrame_delete((*C.QStyleOptionFrame)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionTabWidgetFrame struct {
	h  *C.QStyleOptionTabWidgetFrame
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionTabWidgetFrame) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionTabWidgetFrame) cPointer() *C.QStyleOptionTabWidgetFrame {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionTabWidgetFrame) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionTabWidgetFrame constructs the type using only CGO pointers.
func newQStyleOptionTabWidgetFrame(h *C.QStyleOptionTabWidgetFrame) *QStyleOptionTabWidgetFrame {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionTabWidgetFrame_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionTabWidgetFrame{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionTabWidgetFrame constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionTabWidgetFrame(h unsafe.Pointer) *QStyleOptionTabWidgetFrame {
	return newQStyleOptionTabWidgetFrame((*C.QStyleOptionTabWidgetFrame)(h))
}

// NewQStyleOptionTabWidgetFrame constructs a new QStyleOptionTabWidgetFrame object.
func NewQStyleOptionTabWidgetFrame() *QStyleOptionTabWidgetFrame {

	return newQStyleOptionTabWidgetFrame(C.QStyleOptionTabWidgetFrame_new())
}

// NewQStyleOptionTabWidgetFrame2 constructs a new QStyleOptionTabWidgetFrame object.
func NewQStyleOptionTabWidgetFrame2(other *QStyleOptionTabWidgetFrame) *QStyleOptionTabWidgetFrame {
	defer runtime.KeepAlive(other)

	return newQStyleOptionTabWidgetFrame(C.QStyleOptionTabWidgetFrame_new2(other.cPointer()))
}

func (this *QStyleOptionTabWidgetFrame) LineWidth() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionTabWidgetFrame_lineWidth(this.h))
}

func (this *QStyleOptionTabWidgetFrame) SetLineWidth(lineWidth int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionTabWidgetFrame_setLineWidth(this.h, (C.int)(lineWidth))
}

func (this *QStyleOptionTabWidgetFrame) MidLineWidth() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionTabWidgetFrame_midLineWidth(this.h))
}

func (this *QStyleOptionTabWidgetFrame) SetMidLineWidth(midLineWidth int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionTabWidgetFrame_setMidLineWidth(this.h, (C.int)(midLineWidth))
}

func (this *QStyleOptionTabWidgetFrame) Shape() QTabBar__Shape {
	defer runtime.KeepAlive(this)
	return (QTabBar__Shape)(C.QStyleOptionTabWidgetFrame_shape(this.h))
}

func (this *QStyleOptionTabWidgetFrame) SetShape(shape QTabBar__Shape) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionTabWidgetFrame_setShape(this.h, (C.int)(shape))
}

func (this *QStyleOptionTabWidgetFrame) TabBarSize() *QSize {
	defer runtime.KeepAlive(this)
	tabBarSize_goptr := newQSize(C.QStyleOptionTabWidgetFrame_tabBarSize(this.h))
	tabBarSize_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return tabBarSize_goptr
}

func (this *QStyleOptionTabWidgetFrame) SetTabBarSize(tabBarSize QSize) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(tabBarSize)
	C.QStyleOptionTabWidgetFrame_setTabBarSize(this.h, tabBarSize.cPointer())
}

func (this *QStyleOptionTabWidgetFrame) RightCornerWidgetSize() *QSize {
	defer runtime.KeepAlive(this)
	rightCornerWidgetSize_goptr := newQSize(C.QStyleOptionTabWidgetFrame_rightCornerWidgetSize(this.h))
	rightCornerWidgetSize_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return rightCornerWidgetSize_goptr
}

func (this *QStyleOptionTabWidgetFrame) SetRightCornerWidgetSize(rightCornerWidgetSize QSize) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rightCornerWidgetSize)
	C.QStyleOptionTabWidgetFrame_setRightCornerWidgetSize(this.h, rightCornerWidgetSize.cPointer())
}

func (this *QStyleOptionTabWidgetFrame) LeftCornerWidgetSize() *QSize {
	defer runtime.KeepAlive(this)
	leftCornerWidgetSize_goptr := newQSize(C.QStyleOptionTabWidgetFrame_leftCornerWidgetSize(this.h))
	leftCornerWidgetSize_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return leftCornerWidgetSize_goptr
}

func (this *QStyleOptionTabWidgetFrame) SetLeftCornerWidgetSize(leftCornerWidgetSize QSize) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(leftCornerWidgetSize)
	C.QStyleOptionTabWidgetFrame_setLeftCornerWidgetSize(this.h, leftCornerWidgetSize.cPointer())
}

func (this *QStyleOptionTabWidgetFrame) TabBarRect() *QRect {
	defer runtime.KeepAlive(this)
	tabBarRect_goptr := newQRect(C.QStyleOptionTabWidgetFrame_tabBarRect(this.h))
	tabBarRect_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return tabBarRect_goptr
}

func (this *QStyleOptionTabWidgetFrame) SetTabBarRect(tabBarRect QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(tabBarRect)
	C.QStyleOptionTabWidgetFrame_setTabBarRect(this.h, tabBarRect.cPointer())
}

func (this *QStyleOptionTabWidgetFrame) SelectedTabRect() *QRect {
	defer runtime.KeepAlive(this)
	selectedTabRect_goptr := newQRect(C.QStyleOptionTabWidgetFrame_selectedTabRect(this.h))
	selectedTabRect_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return selectedTabRect_goptr
}

func (this *QStyleOptionTabWidgetFrame) SetSelectedTabRect(selectedTabRect QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(selectedTabRect)
	C.QStyleOptionTabWidgetFrame_setSelectedTabRect(this.h, selectedTabRect.cPointer())
}

func (this *QStyleOptionTabWidgetFrame) OperatorAssign(param1 *QStyleOptionTabWidgetFrame) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionTabWidgetFrame_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionTabWidgetFrame) Delete() {
	C.QStyleOptionTabWidgetFrame_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionTabWidgetFrame) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionTabWidgetFrame_delete((*C.QStyleOptionTabWidgetFrame)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionTabBarBase struct {
	h  *C.QStyleOptionTabBarBase
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionTabBarBase) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionTabBarBase) cPointer() *C.QStyleOptionTabBarBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionTabBarBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionTabBarBase constructs the type using only CGO pointers.
func newQStyleOptionTabBarBase(h *C.QStyleOptionTabBarBase) *QStyleOptionTabBarBase {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionTabBarBase_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionTabBarBase{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionTabBarBase constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionTabBarBase(h unsafe.Pointer) *QStyleOptionTabBarBase {
	return newQStyleOptionTabBarBase((*C.QStyleOptionTabBarBase)(h))
}

// NewQStyleOptionTabBarBase constructs a new QStyleOptionTabBarBase object.
func NewQStyleOptionTabBarBase() *QStyleOptionTabBarBase {

	return newQStyleOptionTabBarBase(C.QStyleOptionTabBarBase_new())
}

// NewQStyleOptionTabBarBase2 constructs a new QStyleOptionTabBarBase object.
func NewQStyleOptionTabBarBase2(other *QStyleOptionTabBarBase) *QStyleOptionTabBarBase {
	defer runtime.KeepAlive(other)

	return newQStyleOptionTabBarBase(C.QStyleOptionTabBarBase_new2(other.cPointer()))
}

func (this *QStyleOptionTabBarBase) Shape() QTabBar__Shape {
	defer runtime.KeepAlive(this)
	return (QTabBar__Shape)(C.QStyleOptionTabBarBase_shape(this.h))
}

func (this *QStyleOptionTabBarBase) SetShape(shape QTabBar__Shape) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionTabBarBase_setShape(this.h, (C.int)(shape))
}

func (this *QStyleOptionTabBarBase) TabBarRect() *QRect {
	defer runtime.KeepAlive(this)
	tabBarRect_goptr := newQRect(C.QStyleOptionTabBarBase_tabBarRect(this.h))
	tabBarRect_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return tabBarRect_goptr
}

func (this *QStyleOptionTabBarBase) SetTabBarRect(tabBarRect QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(tabBarRect)
	C.QStyleOptionTabBarBase_setTabBarRect(this.h, tabBarRect.cPointer())
}

func (this *QStyleOptionTabBarBase) SelectedTabRect() *QRect {
	defer runtime.KeepAlive(this)
	selectedTabRect_goptr := newQRect(C.QStyleOptionTabBarBase_selectedTabRect(this.h))
	selectedTabRect_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return selectedTabRect_goptr
}

func (this *QStyleOptionTabBarBase) SetSelectedTabRect(selectedTabRect QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(selectedTabRect)
	C.QStyleOptionTabBarBase_setSelectedTabRect(this.h, selectedTabRect.cPointer())
}

func (this *QStyleOptionTabBarBase) DocumentMode() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionTabBarBase_documentMode(this.h))
}

func (this *QStyleOptionTabBarBase) SetDocumentMode(documentMode bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionTabBarBase_setDocumentMode(this.h, (C.bool)(documentMode))
}

func (this *QStyleOptionTabBarBase) OperatorAssign(param1 *QStyleOptionTabBarBase) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionTabBarBase_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionTabBarBase) Delete() {
	C.QStyleOptionTabBarBase_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionTabBarBase) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionTabBarBase_delete((*C.QStyleOptionTabBarBase)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionHeader struct {
	h  *C.QStyleOptionHeader
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionHeader) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionHeader) cPointer() *C.QStyleOptionHeader {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionHeader) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionHeader constructs the type using only CGO pointers.
func newQStyleOptionHeader(h *C.QStyleOptionHeader) *QStyleOptionHeader {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionHeader_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionHeader{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionHeader constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionHeader(h unsafe.Pointer) *QStyleOptionHeader {
	return newQStyleOptionHeader((*C.QStyleOptionHeader)(h))
}

// NewQStyleOptionHeader constructs a new QStyleOptionHeader object.
func NewQStyleOptionHeader() *QStyleOptionHeader {

	return newQStyleOptionHeader(C.QStyleOptionHeader_new())
}

// NewQStyleOptionHeader2 constructs a new QStyleOptionHeader object.
func NewQStyleOptionHeader2(other *QStyleOptionHeader) *QStyleOptionHeader {
	defer runtime.KeepAlive(other)

	return newQStyleOptionHeader(C.QStyleOptionHeader_new2(other.cPointer()))
}

func (this *QStyleOptionHeader) Section() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionHeader_section(this.h))
}

func (this *QStyleOptionHeader) SetSection(section int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionHeader_setSection(this.h, (C.int)(section))
}

func (this *QStyleOptionHeader) Text() string {
	defer runtime.KeepAlive(this)
	var text_ms C.struct_miqt_string = C.QStyleOptionHeader_text(this.h)
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	return text_ret
}

func (this *QStyleOptionHeader) SetText(text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStyleOptionHeader_setText(this.h, text_ms)
}

func (this *QStyleOptionHeader) TextAlignment() AlignmentFlag {
	defer runtime.KeepAlive(this)
	return (AlignmentFlag)(C.QStyleOptionHeader_textAlignment(this.h))
}

func (this *QStyleOptionHeader) SetTextAlignment(textAlignment AlignmentFlag) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionHeader_setTextAlignment(this.h, (C.int)(textAlignment))
}

func (this *QStyleOptionHeader) Icon() *QIcon {
	defer runtime.KeepAlive(this)
	icon_goptr := newQIcon(C.QStyleOptionHeader_icon(this.h))
	icon_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return icon_goptr
}

func (this *QStyleOptionHeader) SetIcon(icon QIcon) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(icon)
	C.QStyleOptionHeader_setIcon(this.h, icon.cPointer())
}

func (this *QStyleOptionHeader) IconAlignment() AlignmentFlag {
	defer runtime.KeepAlive(this)
	return (AlignmentFlag)(C.QStyleOptionHeader_iconAlignment(this.h))
}

func (this *QStyleOptionHeader) SetIconAlignment(iconAlignment AlignmentFlag) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionHeader_setIconAlignment(this.h, (C.int)(iconAlignment))
}

func (this *QStyleOptionHeader) Position() QStyleOptionHeader__SectionPosition {
	defer runtime.KeepAlive(this)
	return (QStyleOptionHeader__SectionPosition)(C.QStyleOptionHeader_position(this.h))
}

func (this *QStyleOptionHeader) SetPosition(position QStyleOptionHeader__SectionPosition) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionHeader_setPosition(this.h, (C.int)(position))
}

func (this *QStyleOptionHeader) SelectedPosition() QStyleOptionHeader__SelectedPosition {
	defer runtime.KeepAlive(this)
	return (QStyleOptionHeader__SelectedPosition)(C.QStyleOptionHeader_selectedPosition(this.h))
}

func (this *QStyleOptionHeader) SetSelectedPosition(selectedPosition QStyleOptionHeader__SelectedPosition) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionHeader_setSelectedPosition(this.h, (C.int)(selectedPosition))
}

func (this *QStyleOptionHeader) SortIndicator() QStyleOptionHeader__SortIndicator {
	defer runtime.KeepAlive(this)
	return (QStyleOptionHeader__SortIndicator)(C.QStyleOptionHeader_sortIndicator(this.h))
}

func (this *QStyleOptionHeader) SetSortIndicator(sortIndicator QStyleOptionHeader__SortIndicator) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionHeader_setSortIndicator(this.h, (C.int)(sortIndicator))
}

func (this *QStyleOptionHeader) Orientation() Orientation {
	defer runtime.KeepAlive(this)
	return (Orientation)(C.QStyleOptionHeader_orientation(this.h))
}

func (this *QStyleOptionHeader) SetOrientation(orientation Orientation) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionHeader_setOrientation(this.h, (C.int)(orientation))
}

func (this *QStyleOptionHeader) OperatorAssign(param1 *QStyleOptionHeader) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionHeader_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionHeader) Delete() {
	C.QStyleOptionHeader_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionHeader) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionHeader_delete((*C.QStyleOptionHeader)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionButton struct {
	h  *C.QStyleOptionButton
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionButton) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionButton) cPointer() *C.QStyleOptionButton {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionButton) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionButton constructs the type using only CGO pointers.
func newQStyleOptionButton(h *C.QStyleOptionButton) *QStyleOptionButton {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionButton_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionButton{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionButton constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionButton(h unsafe.Pointer) *QStyleOptionButton {
	return newQStyleOptionButton((*C.QStyleOptionButton)(h))
}

// NewQStyleOptionButton constructs a new QStyleOptionButton object.
func NewQStyleOptionButton() *QStyleOptionButton {

	return newQStyleOptionButton(C.QStyleOptionButton_new())
}

// NewQStyleOptionButton2 constructs a new QStyleOptionButton object.
func NewQStyleOptionButton2(other *QStyleOptionButton) *QStyleOptionButton {
	defer runtime.KeepAlive(other)

	return newQStyleOptionButton(C.QStyleOptionButton_new2(other.cPointer()))
}

func (this *QStyleOptionButton) Features() QStyleOptionButton__ButtonFeature {
	defer runtime.KeepAlive(this)
	return (QStyleOptionButton__ButtonFeature)(C.QStyleOptionButton_features(this.h))
}

func (this *QStyleOptionButton) SetFeatures(features QStyleOptionButton__ButtonFeature) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionButton_setFeatures(this.h, (C.int)(features))
}

func (this *QStyleOptionButton) Text() string {
	defer runtime.KeepAlive(this)
	var text_ms C.struct_miqt_string = C.QStyleOptionButton_text(this.h)
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	return text_ret
}

func (this *QStyleOptionButton) SetText(text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStyleOptionButton_setText(this.h, text_ms)
}

func (this *QStyleOptionButton) Icon() *QIcon {
	defer runtime.KeepAlive(this)
	icon_goptr := newQIcon(C.QStyleOptionButton_icon(this.h))
	icon_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return icon_goptr
}

func (this *QStyleOptionButton) SetIcon(icon QIcon) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(icon)
	C.QStyleOptionButton_setIcon(this.h, icon.cPointer())
}

func (this *QStyleOptionButton) IconSize() *QSize {
	defer runtime.KeepAlive(this)
	iconSize_goptr := newQSize(C.QStyleOptionButton_iconSize(this.h))
	iconSize_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return iconSize_goptr
}

func (this *QStyleOptionButton) SetIconSize(iconSize QSize) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(iconSize)
	C.QStyleOptionButton_setIconSize(this.h, iconSize.cPointer())
}

func (this *QStyleOptionButton) OperatorAssign(param1 *QStyleOptionButton) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionButton_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionButton) Delete() {
	C.QStyleOptionButton_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionButton) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionButton_delete((*C.QStyleOptionButton)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionTab struct {
	h  *C.QStyleOptionTab
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionTab) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionTab) cPointer() *C.QStyleOptionTab {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionTab) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionTab constructs the type using only CGO pointers.
func newQStyleOptionTab(h *C.QStyleOptionTab) *QStyleOptionTab {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionTab_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionTab{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionTab constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionTab(h unsafe.Pointer) *QStyleOptionTab {
	return newQStyleOptionTab((*C.QStyleOptionTab)(h))
}

// NewQStyleOptionTab constructs a new QStyleOptionTab object.
func NewQStyleOptionTab() *QStyleOptionTab {

	return newQStyleOptionTab(C.QStyleOptionTab_new())
}

// NewQStyleOptionTab2 constructs a new QStyleOptionTab object.
func NewQStyleOptionTab2(other *QStyleOptionTab) *QStyleOptionTab {
	defer runtime.KeepAlive(other)

	return newQStyleOptionTab(C.QStyleOptionTab_new2(other.cPointer()))
}

func (this *QStyleOptionTab) Shape() QTabBar__Shape {
	defer runtime.KeepAlive(this)
	return (QTabBar__Shape)(C.QStyleOptionTab_shape(this.h))
}

func (this *QStyleOptionTab) SetShape(shape QTabBar__Shape) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionTab_setShape(this.h, (C.int)(shape))
}

func (this *QStyleOptionTab) Text() string {
	defer runtime.KeepAlive(this)
	var text_ms C.struct_miqt_string = C.QStyleOptionTab_text(this.h)
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	return text_ret
}

func (this *QStyleOptionTab) SetText(text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStyleOptionTab_setText(this.h, text_ms)
}

func (this *QStyleOptionTab) Icon() *QIcon {
	defer runtime.KeepAlive(this)
	icon_goptr := newQIcon(C.QStyleOptionTab_icon(this.h))
	icon_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return icon_goptr
}

func (this *QStyleOptionTab) SetIcon(icon QIcon) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(icon)
	C.QStyleOptionTab_setIcon(this.h, icon.cPointer())
}

func (this *QStyleOptionTab) Row() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionTab_row(this.h))
}

func (this *QStyleOptionTab) SetRow(row int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionTab_setRow(this.h, (C.int)(row))
}

func (this *QStyleOptionTab) Position() QStyleOptionTab__TabPosition {
	defer runtime.KeepAlive(this)
	return (QStyleOptionTab__TabPosition)(C.QStyleOptionTab_position(this.h))
}

func (this *QStyleOptionTab) SetPosition(position QStyleOptionTab__TabPosition) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionTab_setPosition(this.h, (C.int)(position))
}

func (this *QStyleOptionTab) SelectedPosition() QStyleOptionTab__SelectedPosition {
	defer runtime.KeepAlive(this)
	return (QStyleOptionTab__SelectedPosition)(C.QStyleOptionTab_selectedPosition(this.h))
}

func (this *QStyleOptionTab) SetSelectedPosition(selectedPosition QStyleOptionTab__SelectedPosition) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionTab_setSelectedPosition(this.h, (C.int)(selectedPosition))
}

func (this *QStyleOptionTab) CornerWidgets() QStyleOptionTab__CornerWidget {
	defer runtime.KeepAlive(this)
	return (QStyleOptionTab__CornerWidget)(C.QStyleOptionTab_cornerWidgets(this.h))
}

func (this *QStyleOptionTab) SetCornerWidgets(cornerWidgets QStyleOptionTab__CornerWidget) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionTab_setCornerWidgets(this.h, (C.int)(cornerWidgets))
}

func (this *QStyleOptionTab) IconSize() *QSize {
	defer runtime.KeepAlive(this)
	iconSize_goptr := newQSize(C.QStyleOptionTab_iconSize(this.h))
	iconSize_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return iconSize_goptr
}

func (this *QStyleOptionTab) SetIconSize(iconSize QSize) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(iconSize)
	C.QStyleOptionTab_setIconSize(this.h, iconSize.cPointer())
}

func (this *QStyleOptionTab) DocumentMode() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionTab_documentMode(this.h))
}

func (this *QStyleOptionTab) SetDocumentMode(documentMode bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionTab_setDocumentMode(this.h, (C.bool)(documentMode))
}

func (this *QStyleOptionTab) LeftButtonSize() *QSize {
	defer runtime.KeepAlive(this)
	leftButtonSize_goptr := newQSize(C.QStyleOptionTab_leftButtonSize(this.h))
	leftButtonSize_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return leftButtonSize_goptr
}

func (this *QStyleOptionTab) SetLeftButtonSize(leftButtonSize QSize) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(leftButtonSize)
	C.QStyleOptionTab_setLeftButtonSize(this.h, leftButtonSize.cPointer())
}

func (this *QStyleOptionTab) RightButtonSize() *QSize {
	defer runtime.KeepAlive(this)
	rightButtonSize_goptr := newQSize(C.QStyleOptionTab_rightButtonSize(this.h))
	rightButtonSize_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return rightButtonSize_goptr
}

func (this *QStyleOptionTab) SetRightButtonSize(rightButtonSize QSize) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rightButtonSize)
	C.QStyleOptionTab_setRightButtonSize(this.h, rightButtonSize.cPointer())
}

func (this *QStyleOptionTab) Features() QStyleOptionTab__TabFeature {
	defer runtime.KeepAlive(this)
	return (QStyleOptionTab__TabFeature)(C.QStyleOptionTab_features(this.h))
}

func (this *QStyleOptionTab) SetFeatures(features QStyleOptionTab__TabFeature) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionTab_setFeatures(this.h, (C.int)(features))
}

func (this *QStyleOptionTab) OperatorAssign(param1 *QStyleOptionTab) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionTab_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionTab) Delete() {
	C.QStyleOptionTab_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionTab) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionTab_delete((*C.QStyleOptionTab)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionTabV4 struct {
	h  *C.QStyleOptionTabV4
	gc *[1]unsafe.Pointer
	*QStyleOptionTab
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionTabV4) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOptionTab.miqtSetGC(gc)
}

func (this *QStyleOptionTabV4) cPointer() *C.QStyleOptionTabV4 {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionTabV4) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionTabV4 constructs the type using only CGO pointers.
func newQStyleOptionTabV4(h *C.QStyleOptionTabV4) *QStyleOptionTabV4 {
	if h == nil {
		return nil
	}
	var outptr_QStyleOptionTab *C.QStyleOptionTab = nil
	C.QStyleOptionTabV4_virtbase(h, &outptr_QStyleOptionTab)

	return &QStyleOptionTabV4{h: h,
		QStyleOptionTab: newQStyleOptionTab(outptr_QStyleOptionTab)}
}

// UnsafeNewQStyleOptionTabV4 constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionTabV4(h unsafe.Pointer) *QStyleOptionTabV4 {
	return newQStyleOptionTabV4((*C.QStyleOptionTabV4)(h))
}

// NewQStyleOptionTabV4 constructs a new QStyleOptionTabV4 object.
func NewQStyleOptionTabV4() *QStyleOptionTabV4 {

	return newQStyleOptionTabV4(C.QStyleOptionTabV4_new())
}

// NewQStyleOptionTabV42 constructs a new QStyleOptionTabV4 object.
func NewQStyleOptionTabV42(param1 *QStyleOptionTabV4) *QStyleOptionTabV4 {
	defer runtime.KeepAlive(param1)

	return newQStyleOptionTabV4(C.QStyleOptionTabV4_new2(param1.cPointer()))
}

func (this *QStyleOptionTabV4) TabIndex() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionTabV4_tabIndex(this.h))
}

func (this *QStyleOptionTabV4) SetTabIndex(tabIndex int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionTabV4_setTabIndex(this.h, (C.int)(tabIndex))
}

func (this *QStyleOptionTabV4) OperatorAssign(param1 *QStyleOptionTabV4) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionTabV4_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionTabV4) Delete() {
	C.QStyleOptionTabV4_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionTabV4) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionTabV4_delete((*C.QStyleOptionTabV4)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionToolBar struct {
	h  *C.QStyleOptionToolBar
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionToolBar) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionToolBar) cPointer() *C.QStyleOptionToolBar {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionToolBar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionToolBar constructs the type using only CGO pointers.
func newQStyleOptionToolBar(h *C.QStyleOptionToolBar) *QStyleOptionToolBar {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionToolBar_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionToolBar{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionToolBar constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionToolBar(h unsafe.Pointer) *QStyleOptionToolBar {
	return newQStyleOptionToolBar((*C.QStyleOptionToolBar)(h))
}

// NewQStyleOptionToolBar constructs a new QStyleOptionToolBar object.
func NewQStyleOptionToolBar() *QStyleOptionToolBar {

	return newQStyleOptionToolBar(C.QStyleOptionToolBar_new())
}

// NewQStyleOptionToolBar2 constructs a new QStyleOptionToolBar object.
func NewQStyleOptionToolBar2(other *QStyleOptionToolBar) *QStyleOptionToolBar {
	defer runtime.KeepAlive(other)

	return newQStyleOptionToolBar(C.QStyleOptionToolBar_new2(other.cPointer()))
}

func (this *QStyleOptionToolBar) PositionOfLine() QStyleOptionToolBar__ToolBarPosition {
	defer runtime.KeepAlive(this)
	return (QStyleOptionToolBar__ToolBarPosition)(C.QStyleOptionToolBar_positionOfLine(this.h))
}

func (this *QStyleOptionToolBar) SetPositionOfLine(positionOfLine QStyleOptionToolBar__ToolBarPosition) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionToolBar_setPositionOfLine(this.h, (C.int)(positionOfLine))
}

func (this *QStyleOptionToolBar) PositionWithinLine() QStyleOptionToolBar__ToolBarPosition {
	defer runtime.KeepAlive(this)
	return (QStyleOptionToolBar__ToolBarPosition)(C.QStyleOptionToolBar_positionWithinLine(this.h))
}

func (this *QStyleOptionToolBar) SetPositionWithinLine(positionWithinLine QStyleOptionToolBar__ToolBarPosition) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionToolBar_setPositionWithinLine(this.h, (C.int)(positionWithinLine))
}

func (this *QStyleOptionToolBar) ToolBarArea() ToolBarArea {
	defer runtime.KeepAlive(this)
	return (ToolBarArea)(C.QStyleOptionToolBar_toolBarArea(this.h))
}

func (this *QStyleOptionToolBar) SetToolBarArea(toolBarArea ToolBarArea) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionToolBar_setToolBarArea(this.h, (C.int)(toolBarArea))
}

func (this *QStyleOptionToolBar) Features() QStyleOptionToolBar__ToolBarFeature {
	defer runtime.KeepAlive(this)
	return (QStyleOptionToolBar__ToolBarFeature)(C.QStyleOptionToolBar_features(this.h))
}

func (this *QStyleOptionToolBar) SetFeatures(features QStyleOptionToolBar__ToolBarFeature) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionToolBar_setFeatures(this.h, (C.int)(features))
}

func (this *QStyleOptionToolBar) LineWidth() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionToolBar_lineWidth(this.h))
}

func (this *QStyleOptionToolBar) SetLineWidth(lineWidth int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionToolBar_setLineWidth(this.h, (C.int)(lineWidth))
}

func (this *QStyleOptionToolBar) MidLineWidth() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionToolBar_midLineWidth(this.h))
}

func (this *QStyleOptionToolBar) SetMidLineWidth(midLineWidth int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionToolBar_setMidLineWidth(this.h, (C.int)(midLineWidth))
}

func (this *QStyleOptionToolBar) OperatorAssign(param1 *QStyleOptionToolBar) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionToolBar_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionToolBar) Delete() {
	C.QStyleOptionToolBar_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionToolBar) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionToolBar_delete((*C.QStyleOptionToolBar)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionProgressBar struct {
	h  *C.QStyleOptionProgressBar
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionProgressBar) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionProgressBar) cPointer() *C.QStyleOptionProgressBar {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionProgressBar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionProgressBar constructs the type using only CGO pointers.
func newQStyleOptionProgressBar(h *C.QStyleOptionProgressBar) *QStyleOptionProgressBar {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionProgressBar_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionProgressBar{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionProgressBar constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionProgressBar(h unsafe.Pointer) *QStyleOptionProgressBar {
	return newQStyleOptionProgressBar((*C.QStyleOptionProgressBar)(h))
}

// NewQStyleOptionProgressBar constructs a new QStyleOptionProgressBar object.
func NewQStyleOptionProgressBar() *QStyleOptionProgressBar {

	return newQStyleOptionProgressBar(C.QStyleOptionProgressBar_new())
}

// NewQStyleOptionProgressBar2 constructs a new QStyleOptionProgressBar object.
func NewQStyleOptionProgressBar2(other *QStyleOptionProgressBar) *QStyleOptionProgressBar {
	defer runtime.KeepAlive(other)

	return newQStyleOptionProgressBar(C.QStyleOptionProgressBar_new2(other.cPointer()))
}

func (this *QStyleOptionProgressBar) Minimum() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionProgressBar_minimum(this.h))
}

func (this *QStyleOptionProgressBar) SetMinimum(minimum int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionProgressBar_setMinimum(this.h, (C.int)(minimum))
}

func (this *QStyleOptionProgressBar) Maximum() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionProgressBar_maximum(this.h))
}

func (this *QStyleOptionProgressBar) SetMaximum(maximum int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionProgressBar_setMaximum(this.h, (C.int)(maximum))
}

func (this *QStyleOptionProgressBar) Progress() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionProgressBar_progress(this.h))
}

func (this *QStyleOptionProgressBar) SetProgress(progress int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionProgressBar_setProgress(this.h, (C.int)(progress))
}

func (this *QStyleOptionProgressBar) Text() string {
	defer runtime.KeepAlive(this)
	var text_ms C.struct_miqt_string = C.QStyleOptionProgressBar_text(this.h)
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	return text_ret
}

func (this *QStyleOptionProgressBar) SetText(text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStyleOptionProgressBar_setText(this.h, text_ms)
}

func (this *QStyleOptionProgressBar) TextAlignment() AlignmentFlag {
	defer runtime.KeepAlive(this)
	return (AlignmentFlag)(C.QStyleOptionProgressBar_textAlignment(this.h))
}

func (this *QStyleOptionProgressBar) SetTextAlignment(textAlignment AlignmentFlag) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionProgressBar_setTextAlignment(this.h, (C.int)(textAlignment))
}

func (this *QStyleOptionProgressBar) TextVisible() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionProgressBar_textVisible(this.h))
}

func (this *QStyleOptionProgressBar) SetTextVisible(textVisible bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionProgressBar_setTextVisible(this.h, (C.bool)(textVisible))
}

func (this *QStyleOptionProgressBar) Orientation() Orientation {
	defer runtime.KeepAlive(this)
	return (Orientation)(C.QStyleOptionProgressBar_orientation(this.h))
}

func (this *QStyleOptionProgressBar) SetOrientation(orientation Orientation) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionProgressBar_setOrientation(this.h, (C.int)(orientation))
}

func (this *QStyleOptionProgressBar) InvertedAppearance() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionProgressBar_invertedAppearance(this.h))
}

func (this *QStyleOptionProgressBar) SetInvertedAppearance(invertedAppearance bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionProgressBar_setInvertedAppearance(this.h, (C.bool)(invertedAppearance))
}

func (this *QStyleOptionProgressBar) BottomToTop() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionProgressBar_bottomToTop(this.h))
}

func (this *QStyleOptionProgressBar) SetBottomToTop(bottomToTop bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionProgressBar_setBottomToTop(this.h, (C.bool)(bottomToTop))
}

func (this *QStyleOptionProgressBar) OperatorAssign(param1 *QStyleOptionProgressBar) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionProgressBar_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionProgressBar) Delete() {
	C.QStyleOptionProgressBar_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionProgressBar) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionProgressBar_delete((*C.QStyleOptionProgressBar)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionMenuItem struct {
	h  *C.QStyleOptionMenuItem
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionMenuItem) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionMenuItem) cPointer() *C.QStyleOptionMenuItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionMenuItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionMenuItem constructs the type using only CGO pointers.
func newQStyleOptionMenuItem(h *C.QStyleOptionMenuItem) *QStyleOptionMenuItem {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionMenuItem_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionMenuItem{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionMenuItem constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionMenuItem(h unsafe.Pointer) *QStyleOptionMenuItem {
	return newQStyleOptionMenuItem((*C.QStyleOptionMenuItem)(h))
}

// NewQStyleOptionMenuItem constructs a new QStyleOptionMenuItem object.
func NewQStyleOptionMenuItem() *QStyleOptionMenuItem {

	return newQStyleOptionMenuItem(C.QStyleOptionMenuItem_new())
}

// NewQStyleOptionMenuItem2 constructs a new QStyleOptionMenuItem object.
func NewQStyleOptionMenuItem2(other *QStyleOptionMenuItem) *QStyleOptionMenuItem {
	defer runtime.KeepAlive(other)

	return newQStyleOptionMenuItem(C.QStyleOptionMenuItem_new2(other.cPointer()))
}

func (this *QStyleOptionMenuItem) MenuItemType() QStyleOptionMenuItem__MenuItemType {
	defer runtime.KeepAlive(this)
	return (QStyleOptionMenuItem__MenuItemType)(C.QStyleOptionMenuItem_menuItemType(this.h))
}

func (this *QStyleOptionMenuItem) SetMenuItemType(menuItemType QStyleOptionMenuItem__MenuItemType) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionMenuItem_setMenuItemType(this.h, (C.int)(menuItemType))
}

func (this *QStyleOptionMenuItem) CheckType() QStyleOptionMenuItem__CheckType {
	defer runtime.KeepAlive(this)
	return (QStyleOptionMenuItem__CheckType)(C.QStyleOptionMenuItem_checkType(this.h))
}

func (this *QStyleOptionMenuItem) SetCheckType(checkType QStyleOptionMenuItem__CheckType) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionMenuItem_setCheckType(this.h, (C.int)(checkType))
}

func (this *QStyleOptionMenuItem) Checked() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionMenuItem_checked(this.h))
}

func (this *QStyleOptionMenuItem) SetChecked(checked bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionMenuItem_setChecked(this.h, (C.bool)(checked))
}

func (this *QStyleOptionMenuItem) MenuHasCheckableItems() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionMenuItem_menuHasCheckableItems(this.h))
}

func (this *QStyleOptionMenuItem) SetMenuHasCheckableItems(menuHasCheckableItems bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionMenuItem_setMenuHasCheckableItems(this.h, (C.bool)(menuHasCheckableItems))
}

func (this *QStyleOptionMenuItem) MenuRect() *QRect {
	defer runtime.KeepAlive(this)
	menuRect_goptr := newQRect(C.QStyleOptionMenuItem_menuRect(this.h))
	menuRect_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return menuRect_goptr
}

func (this *QStyleOptionMenuItem) SetMenuRect(menuRect QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(menuRect)
	C.QStyleOptionMenuItem_setMenuRect(this.h, menuRect.cPointer())
}

func (this *QStyleOptionMenuItem) Text() string {
	defer runtime.KeepAlive(this)
	var text_ms C.struct_miqt_string = C.QStyleOptionMenuItem_text(this.h)
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	return text_ret
}

func (this *QStyleOptionMenuItem) SetText(text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStyleOptionMenuItem_setText(this.h, text_ms)
}

func (this *QStyleOptionMenuItem) Icon() *QIcon {
	defer runtime.KeepAlive(this)
	icon_goptr := newQIcon(C.QStyleOptionMenuItem_icon(this.h))
	icon_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return icon_goptr
}

func (this *QStyleOptionMenuItem) SetIcon(icon QIcon) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(icon)
	C.QStyleOptionMenuItem_setIcon(this.h, icon.cPointer())
}

func (this *QStyleOptionMenuItem) MaxIconWidth() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionMenuItem_maxIconWidth(this.h))
}

func (this *QStyleOptionMenuItem) SetMaxIconWidth(maxIconWidth int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionMenuItem_setMaxIconWidth(this.h, (C.int)(maxIconWidth))
}

func (this *QStyleOptionMenuItem) TabWidth() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionMenuItem_tabWidth(this.h))
}

func (this *QStyleOptionMenuItem) SetTabWidth(tabWidth int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionMenuItem_setTabWidth(this.h, (C.int)(tabWidth))
}

func (this *QStyleOptionMenuItem) Font() *QFont {
	defer runtime.KeepAlive(this)
	font_goptr := newQFont(C.QStyleOptionMenuItem_font(this.h))
	font_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return font_goptr
}

func (this *QStyleOptionMenuItem) SetFont(font QFont) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(font)
	C.QStyleOptionMenuItem_setFont(this.h, font.cPointer())
}

func (this *QStyleOptionMenuItem) OperatorAssign(param1 *QStyleOptionMenuItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionMenuItem_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionMenuItem) Delete() {
	C.QStyleOptionMenuItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionMenuItem) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionMenuItem_delete((*C.QStyleOptionMenuItem)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionDockWidget struct {
	h  *C.QStyleOptionDockWidget
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionDockWidget) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionDockWidget) cPointer() *C.QStyleOptionDockWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionDockWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionDockWidget constructs the type using only CGO pointers.
func newQStyleOptionDockWidget(h *C.QStyleOptionDockWidget) *QStyleOptionDockWidget {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionDockWidget_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionDockWidget{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionDockWidget constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionDockWidget(h unsafe.Pointer) *QStyleOptionDockWidget {
	return newQStyleOptionDockWidget((*C.QStyleOptionDockWidget)(h))
}

// NewQStyleOptionDockWidget constructs a new QStyleOptionDockWidget object.
func NewQStyleOptionDockWidget() *QStyleOptionDockWidget {

	return newQStyleOptionDockWidget(C.QStyleOptionDockWidget_new())
}

// NewQStyleOptionDockWidget2 constructs a new QStyleOptionDockWidget object.
func NewQStyleOptionDockWidget2(other *QStyleOptionDockWidget) *QStyleOptionDockWidget {
	defer runtime.KeepAlive(other)

	return newQStyleOptionDockWidget(C.QStyleOptionDockWidget_new2(other.cPointer()))
}

func (this *QStyleOptionDockWidget) Title() string {
	defer runtime.KeepAlive(this)
	var title_ms C.struct_miqt_string = C.QStyleOptionDockWidget_title(this.h)
	title_ret := C.GoStringN(title_ms.data, C.int(int64(title_ms.len)))
	C.free(unsafe.Pointer(title_ms.data))
	return title_ret
}

func (this *QStyleOptionDockWidget) SetTitle(title string) {
	defer runtime.KeepAlive(this)
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QStyleOptionDockWidget_setTitle(this.h, title_ms)
}

func (this *QStyleOptionDockWidget) Closable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionDockWidget_closable(this.h))
}

func (this *QStyleOptionDockWidget) SetClosable(closable bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionDockWidget_setClosable(this.h, (C.bool)(closable))
}

func (this *QStyleOptionDockWidget) Movable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionDockWidget_movable(this.h))
}

func (this *QStyleOptionDockWidget) SetMovable(movable bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionDockWidget_setMovable(this.h, (C.bool)(movable))
}

func (this *QStyleOptionDockWidget) Floatable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionDockWidget_floatable(this.h))
}

func (this *QStyleOptionDockWidget) SetFloatable(floatable bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionDockWidget_setFloatable(this.h, (C.bool)(floatable))
}

func (this *QStyleOptionDockWidget) VerticalTitleBar() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionDockWidget_verticalTitleBar(this.h))
}

func (this *QStyleOptionDockWidget) SetVerticalTitleBar(verticalTitleBar bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionDockWidget_setVerticalTitleBar(this.h, (C.bool)(verticalTitleBar))
}

func (this *QStyleOptionDockWidget) OperatorAssign(param1 *QStyleOptionDockWidget) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionDockWidget_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionDockWidget) Delete() {
	C.QStyleOptionDockWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionDockWidget) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionDockWidget_delete((*C.QStyleOptionDockWidget)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionViewItem struct {
	h  *C.QStyleOptionViewItem
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionViewItem) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionViewItem) cPointer() *C.QStyleOptionViewItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionViewItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionViewItem constructs the type using only CGO pointers.
func newQStyleOptionViewItem(h *C.QStyleOptionViewItem) *QStyleOptionViewItem {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionViewItem_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionViewItem{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionViewItem constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionViewItem(h unsafe.Pointer) *QStyleOptionViewItem {
	return newQStyleOptionViewItem((*C.QStyleOptionViewItem)(h))
}

// NewQStyleOptionViewItem constructs a new QStyleOptionViewItem object.
func NewQStyleOptionViewItem() *QStyleOptionViewItem {

	return newQStyleOptionViewItem(C.QStyleOptionViewItem_new())
}

// NewQStyleOptionViewItem2 constructs a new QStyleOptionViewItem object.
func NewQStyleOptionViewItem2(other *QStyleOptionViewItem) *QStyleOptionViewItem {
	defer runtime.KeepAlive(other)

	return newQStyleOptionViewItem(C.QStyleOptionViewItem_new2(other.cPointer()))
}

func (this *QStyleOptionViewItem) DisplayAlignment() AlignmentFlag {
	defer runtime.KeepAlive(this)
	return (AlignmentFlag)(C.QStyleOptionViewItem_displayAlignment(this.h))
}

func (this *QStyleOptionViewItem) SetDisplayAlignment(displayAlignment AlignmentFlag) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionViewItem_setDisplayAlignment(this.h, (C.int)(displayAlignment))
}

func (this *QStyleOptionViewItem) DecorationAlignment() AlignmentFlag {
	defer runtime.KeepAlive(this)
	return (AlignmentFlag)(C.QStyleOptionViewItem_decorationAlignment(this.h))
}

func (this *QStyleOptionViewItem) SetDecorationAlignment(decorationAlignment AlignmentFlag) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionViewItem_setDecorationAlignment(this.h, (C.int)(decorationAlignment))
}

func (this *QStyleOptionViewItem) TextElideMode() TextElideMode {
	defer runtime.KeepAlive(this)
	return (TextElideMode)(C.QStyleOptionViewItem_textElideMode(this.h))
}

func (this *QStyleOptionViewItem) SetTextElideMode(textElideMode TextElideMode) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionViewItem_setTextElideMode(this.h, (C.int)(textElideMode))
}

func (this *QStyleOptionViewItem) DecorationPosition() QStyleOptionViewItem__Position {
	defer runtime.KeepAlive(this)
	return (QStyleOptionViewItem__Position)(C.QStyleOptionViewItem_decorationPosition(this.h))
}

func (this *QStyleOptionViewItem) SetDecorationPosition(decorationPosition QStyleOptionViewItem__Position) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionViewItem_setDecorationPosition(this.h, (C.int)(decorationPosition))
}

func (this *QStyleOptionViewItem) DecorationSize() *QSize {
	defer runtime.KeepAlive(this)
	decorationSize_goptr := newQSize(C.QStyleOptionViewItem_decorationSize(this.h))
	decorationSize_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return decorationSize_goptr
}

func (this *QStyleOptionViewItem) SetDecorationSize(decorationSize QSize) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(decorationSize)
	C.QStyleOptionViewItem_setDecorationSize(this.h, decorationSize.cPointer())
}

func (this *QStyleOptionViewItem) Font() *QFont {
	defer runtime.KeepAlive(this)
	font_goptr := newQFont(C.QStyleOptionViewItem_font(this.h))
	font_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return font_goptr
}

func (this *QStyleOptionViewItem) SetFont(font QFont) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(font)
	C.QStyleOptionViewItem_setFont(this.h, font.cPointer())
}

func (this *QStyleOptionViewItem) ShowDecorationSelected() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionViewItem_showDecorationSelected(this.h))
}

func (this *QStyleOptionViewItem) SetShowDecorationSelected(showDecorationSelected bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionViewItem_setShowDecorationSelected(this.h, (C.bool)(showDecorationSelected))
}

func (this *QStyleOptionViewItem) Features() QStyleOptionViewItem__ViewItemFeature {
	defer runtime.KeepAlive(this)
	return (QStyleOptionViewItem__ViewItemFeature)(C.QStyleOptionViewItem_features(this.h))
}

func (this *QStyleOptionViewItem) SetFeatures(features QStyleOptionViewItem__ViewItemFeature) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionViewItem_setFeatures(this.h, (C.int)(features))
}

func (this *QStyleOptionViewItem) Locale() *QLocale {
	defer runtime.KeepAlive(this)
	locale_goptr := newQLocale(C.QStyleOptionViewItem_locale(this.h))
	locale_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return locale_goptr
}

func (this *QStyleOptionViewItem) SetLocale(locale QLocale) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(locale)
	C.QStyleOptionViewItem_setLocale(this.h, locale.cPointer())
}

func (this *QStyleOptionViewItem) Widget() *QWidget {
	defer runtime.KeepAlive(this)
	return newQWidget(C.QStyleOptionViewItem_widget(this.h))
}

func (this *QStyleOptionViewItem) SetWidget(widget *QWidget) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(widget)
	C.QStyleOptionViewItem_setWidget(this.h, widget.cPointer())
}

func (this *QStyleOptionViewItem) Index() *QModelIndex {
	defer runtime.KeepAlive(this)
	index_goptr := newQModelIndex(C.QStyleOptionViewItem_index(this.h))
	index_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return index_goptr
}

func (this *QStyleOptionViewItem) SetIndex(index QModelIndex) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(index)
	C.QStyleOptionViewItem_setIndex(this.h, index.cPointer())
}

func (this *QStyleOptionViewItem) CheckState() CheckState {
	defer runtime.KeepAlive(this)
	return (CheckState)(C.QStyleOptionViewItem_checkState(this.h))
}

func (this *QStyleOptionViewItem) SetCheckState(checkState CheckState) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionViewItem_setCheckState(this.h, (C.int)(checkState))
}

func (this *QStyleOptionViewItem) Icon() *QIcon {
	defer runtime.KeepAlive(this)
	icon_goptr := newQIcon(C.QStyleOptionViewItem_icon(this.h))
	icon_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return icon_goptr
}

func (this *QStyleOptionViewItem) SetIcon(icon QIcon) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(icon)
	C.QStyleOptionViewItem_setIcon(this.h, icon.cPointer())
}

func (this *QStyleOptionViewItem) Text() string {
	defer runtime.KeepAlive(this)
	var text_ms C.struct_miqt_string = C.QStyleOptionViewItem_text(this.h)
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	return text_ret
}

func (this *QStyleOptionViewItem) SetText(text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStyleOptionViewItem_setText(this.h, text_ms)
}

func (this *QStyleOptionViewItem) ViewItemPosition() QStyleOptionViewItem__ViewItemPosition {
	defer runtime.KeepAlive(this)
	return (QStyleOptionViewItem__ViewItemPosition)(C.QStyleOptionViewItem_viewItemPosition(this.h))
}

func (this *QStyleOptionViewItem) SetViewItemPosition(viewItemPosition QStyleOptionViewItem__ViewItemPosition) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionViewItem_setViewItemPosition(this.h, (C.int)(viewItemPosition))
}

func (this *QStyleOptionViewItem) BackgroundBrush() *QBrush {
	defer runtime.KeepAlive(this)
	backgroundBrush_goptr := newQBrush(C.QStyleOptionViewItem_backgroundBrush(this.h))
	backgroundBrush_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return backgroundBrush_goptr
}

func (this *QStyleOptionViewItem) SetBackgroundBrush(backgroundBrush QBrush) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(backgroundBrush)
	C.QStyleOptionViewItem_setBackgroundBrush(this.h, backgroundBrush.cPointer())
}

func (this *QStyleOptionViewItem) OperatorAssign(param1 *QStyleOptionViewItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionViewItem_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionViewItem) Delete() {
	C.QStyleOptionViewItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionViewItem) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionViewItem_delete((*C.QStyleOptionViewItem)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionToolBox struct {
	h  *C.QStyleOptionToolBox
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionToolBox) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionToolBox) cPointer() *C.QStyleOptionToolBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionToolBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionToolBox constructs the type using only CGO pointers.
func newQStyleOptionToolBox(h *C.QStyleOptionToolBox) *QStyleOptionToolBox {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionToolBox_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionToolBox{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionToolBox constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionToolBox(h unsafe.Pointer) *QStyleOptionToolBox {
	return newQStyleOptionToolBox((*C.QStyleOptionToolBox)(h))
}

// NewQStyleOptionToolBox constructs a new QStyleOptionToolBox object.
func NewQStyleOptionToolBox() *QStyleOptionToolBox {

	return newQStyleOptionToolBox(C.QStyleOptionToolBox_new())
}

// NewQStyleOptionToolBox2 constructs a new QStyleOptionToolBox object.
func NewQStyleOptionToolBox2(other *QStyleOptionToolBox) *QStyleOptionToolBox {
	defer runtime.KeepAlive(other)

	return newQStyleOptionToolBox(C.QStyleOptionToolBox_new2(other.cPointer()))
}

func (this *QStyleOptionToolBox) Text() string {
	defer runtime.KeepAlive(this)
	var text_ms C.struct_miqt_string = C.QStyleOptionToolBox_text(this.h)
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	return text_ret
}

func (this *QStyleOptionToolBox) SetText(text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStyleOptionToolBox_setText(this.h, text_ms)
}

func (this *QStyleOptionToolBox) Icon() *QIcon {
	defer runtime.KeepAlive(this)
	icon_goptr := newQIcon(C.QStyleOptionToolBox_icon(this.h))
	icon_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return icon_goptr
}

func (this *QStyleOptionToolBox) SetIcon(icon QIcon) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(icon)
	C.QStyleOptionToolBox_setIcon(this.h, icon.cPointer())
}

func (this *QStyleOptionToolBox) Position() QStyleOptionToolBox__TabPosition {
	defer runtime.KeepAlive(this)
	return (QStyleOptionToolBox__TabPosition)(C.QStyleOptionToolBox_position(this.h))
}

func (this *QStyleOptionToolBox) SetPosition(position QStyleOptionToolBox__TabPosition) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionToolBox_setPosition(this.h, (C.int)(position))
}

func (this *QStyleOptionToolBox) SelectedPosition() QStyleOptionToolBox__SelectedPosition {
	defer runtime.KeepAlive(this)
	return (QStyleOptionToolBox__SelectedPosition)(C.QStyleOptionToolBox_selectedPosition(this.h))
}

func (this *QStyleOptionToolBox) SetSelectedPosition(selectedPosition QStyleOptionToolBox__SelectedPosition) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionToolBox_setSelectedPosition(this.h, (C.int)(selectedPosition))
}

func (this *QStyleOptionToolBox) OperatorAssign(param1 *QStyleOptionToolBox) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionToolBox_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionToolBox) Delete() {
	C.QStyleOptionToolBox_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionToolBox) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionToolBox_delete((*C.QStyleOptionToolBox)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionRubberBand struct {
	h  *C.QStyleOptionRubberBand
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionRubberBand) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionRubberBand) cPointer() *C.QStyleOptionRubberBand {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionRubberBand) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionRubberBand constructs the type using only CGO pointers.
func newQStyleOptionRubberBand(h *C.QStyleOptionRubberBand) *QStyleOptionRubberBand {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionRubberBand_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionRubberBand{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionRubberBand constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionRubberBand(h unsafe.Pointer) *QStyleOptionRubberBand {
	return newQStyleOptionRubberBand((*C.QStyleOptionRubberBand)(h))
}

// NewQStyleOptionRubberBand constructs a new QStyleOptionRubberBand object.
func NewQStyleOptionRubberBand() *QStyleOptionRubberBand {

	return newQStyleOptionRubberBand(C.QStyleOptionRubberBand_new())
}

// NewQStyleOptionRubberBand2 constructs a new QStyleOptionRubberBand object.
func NewQStyleOptionRubberBand2(other *QStyleOptionRubberBand) *QStyleOptionRubberBand {
	defer runtime.KeepAlive(other)

	return newQStyleOptionRubberBand(C.QStyleOptionRubberBand_new2(other.cPointer()))
}

func (this *QStyleOptionRubberBand) Shape() QRubberBand__Shape {
	defer runtime.KeepAlive(this)
	return (QRubberBand__Shape)(C.QStyleOptionRubberBand_shape(this.h))
}

func (this *QStyleOptionRubberBand) SetShape(shape QRubberBand__Shape) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionRubberBand_setShape(this.h, (C.int)(shape))
}

func (this *QStyleOptionRubberBand) Opaque() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionRubberBand_opaque(this.h))
}

func (this *QStyleOptionRubberBand) SetOpaque(opaque bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionRubberBand_setOpaque(this.h, (C.bool)(opaque))
}

func (this *QStyleOptionRubberBand) OperatorAssign(param1 *QStyleOptionRubberBand) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionRubberBand_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionRubberBand) Delete() {
	C.QStyleOptionRubberBand_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionRubberBand) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionRubberBand_delete((*C.QStyleOptionRubberBand)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionComplex struct {
	h  *C.QStyleOptionComplex
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionComplex) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionComplex) cPointer() *C.QStyleOptionComplex {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionComplex) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionComplex constructs the type using only CGO pointers.
func newQStyleOptionComplex(h *C.QStyleOptionComplex) *QStyleOptionComplex {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionComplex_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionComplex{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionComplex constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionComplex(h unsafe.Pointer) *QStyleOptionComplex {
	return newQStyleOptionComplex((*C.QStyleOptionComplex)(h))
}

// NewQStyleOptionComplex constructs a new QStyleOptionComplex object.
func NewQStyleOptionComplex() *QStyleOptionComplex {

	return newQStyleOptionComplex(C.QStyleOptionComplex_new())
}

// NewQStyleOptionComplex2 constructs a new QStyleOptionComplex object.
func NewQStyleOptionComplex2(other *QStyleOptionComplex) *QStyleOptionComplex {
	defer runtime.KeepAlive(other)

	return newQStyleOptionComplex(C.QStyleOptionComplex_new2(other.cPointer()))
}

// NewQStyleOptionComplex3 constructs a new QStyleOptionComplex object.
func NewQStyleOptionComplex3(version int) *QStyleOptionComplex {

	return newQStyleOptionComplex(C.QStyleOptionComplex_new3((C.int)(version)))
}

// NewQStyleOptionComplex4 constructs a new QStyleOptionComplex object.
func NewQStyleOptionComplex4(version int, typeVal int) *QStyleOptionComplex {

	return newQStyleOptionComplex(C.QStyleOptionComplex_new4((C.int)(version), (C.int)(typeVal)))
}

func (this *QStyleOptionComplex) SubControls() QStyle__SubControl {
	defer runtime.KeepAlive(this)
	return (QStyle__SubControl)(C.QStyleOptionComplex_subControls(this.h))
}

func (this *QStyleOptionComplex) SetSubControls(subControls QStyle__SubControl) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionComplex_setSubControls(this.h, (C.int)(subControls))
}

func (this *QStyleOptionComplex) ActiveSubControls() QStyle__SubControl {
	defer runtime.KeepAlive(this)
	return (QStyle__SubControl)(C.QStyleOptionComplex_activeSubControls(this.h))
}

func (this *QStyleOptionComplex) SetActiveSubControls(activeSubControls QStyle__SubControl) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionComplex_setActiveSubControls(this.h, (C.int)(activeSubControls))
}

func (this *QStyleOptionComplex) OperatorAssign(param1 *QStyleOptionComplex) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionComplex_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionComplex) Delete() {
	C.QStyleOptionComplex_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionComplex) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionComplex_delete((*C.QStyleOptionComplex)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionSlider struct {
	h  *C.QStyleOptionSlider
	gc *[1]unsafe.Pointer
	*QStyleOptionComplex
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionSlider) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOptionComplex.miqtSetGC(gc)
}

func (this *QStyleOptionSlider) cPointer() *C.QStyleOptionSlider {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionSlider) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionSlider constructs the type using only CGO pointers.
func newQStyleOptionSlider(h *C.QStyleOptionSlider) *QStyleOptionSlider {
	if h == nil {
		return nil
	}
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	C.QStyleOptionSlider_virtbase(h, &outptr_QStyleOptionComplex)

	return &QStyleOptionSlider{h: h,
		QStyleOptionComplex: newQStyleOptionComplex(outptr_QStyleOptionComplex)}
}

// UnsafeNewQStyleOptionSlider constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionSlider(h unsafe.Pointer) *QStyleOptionSlider {
	return newQStyleOptionSlider((*C.QStyleOptionSlider)(h))
}

// NewQStyleOptionSlider constructs a new QStyleOptionSlider object.
func NewQStyleOptionSlider() *QStyleOptionSlider {

	return newQStyleOptionSlider(C.QStyleOptionSlider_new())
}

// NewQStyleOptionSlider2 constructs a new QStyleOptionSlider object.
func NewQStyleOptionSlider2(other *QStyleOptionSlider) *QStyleOptionSlider {
	defer runtime.KeepAlive(other)

	return newQStyleOptionSlider(C.QStyleOptionSlider_new2(other.cPointer()))
}

func (this *QStyleOptionSlider) Orientation() Orientation {
	defer runtime.KeepAlive(this)
	return (Orientation)(C.QStyleOptionSlider_orientation(this.h))
}

func (this *QStyleOptionSlider) SetOrientation(orientation Orientation) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSlider_setOrientation(this.h, (C.int)(orientation))
}

func (this *QStyleOptionSlider) Minimum() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionSlider_minimum(this.h))
}

func (this *QStyleOptionSlider) SetMinimum(minimum int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSlider_setMinimum(this.h, (C.int)(minimum))
}

func (this *QStyleOptionSlider) Maximum() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionSlider_maximum(this.h))
}

func (this *QStyleOptionSlider) SetMaximum(maximum int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSlider_setMaximum(this.h, (C.int)(maximum))
}

func (this *QStyleOptionSlider) TickPosition() QSlider__TickPosition {
	defer runtime.KeepAlive(this)
	return (QSlider__TickPosition)(C.QStyleOptionSlider_tickPosition(this.h))
}

func (this *QStyleOptionSlider) SetTickPosition(tickPosition QSlider__TickPosition) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSlider_setTickPosition(this.h, (C.int)(tickPosition))
}

func (this *QStyleOptionSlider) TickInterval() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionSlider_tickInterval(this.h))
}

func (this *QStyleOptionSlider) SetTickInterval(tickInterval int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSlider_setTickInterval(this.h, (C.int)(tickInterval))
}

func (this *QStyleOptionSlider) UpsideDown() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionSlider_upsideDown(this.h))
}

func (this *QStyleOptionSlider) SetUpsideDown(upsideDown bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSlider_setUpsideDown(this.h, (C.bool)(upsideDown))
}

func (this *QStyleOptionSlider) SliderPosition() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionSlider_sliderPosition(this.h))
}

func (this *QStyleOptionSlider) SetSliderPosition(sliderPosition int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSlider_setSliderPosition(this.h, (C.int)(sliderPosition))
}

func (this *QStyleOptionSlider) SliderValue() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionSlider_sliderValue(this.h))
}

func (this *QStyleOptionSlider) SetSliderValue(sliderValue int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSlider_setSliderValue(this.h, (C.int)(sliderValue))
}

func (this *QStyleOptionSlider) SingleStep() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionSlider_singleStep(this.h))
}

func (this *QStyleOptionSlider) SetSingleStep(singleStep int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSlider_setSingleStep(this.h, (C.int)(singleStep))
}

func (this *QStyleOptionSlider) PageStep() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionSlider_pageStep(this.h))
}

func (this *QStyleOptionSlider) SetPageStep(pageStep int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSlider_setPageStep(this.h, (C.int)(pageStep))
}

func (this *QStyleOptionSlider) NotchTarget() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QStyleOptionSlider_notchTarget(this.h))
}

func (this *QStyleOptionSlider) SetNotchTarget(notchTarget float64) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSlider_setNotchTarget(this.h, (C.double)(notchTarget))
}

func (this *QStyleOptionSlider) DialWrapping() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionSlider_dialWrapping(this.h))
}

func (this *QStyleOptionSlider) SetDialWrapping(dialWrapping bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSlider_setDialWrapping(this.h, (C.bool)(dialWrapping))
}

func (this *QStyleOptionSlider) OperatorAssign(param1 *QStyleOptionSlider) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionSlider_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionSlider) Delete() {
	C.QStyleOptionSlider_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionSlider) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionSlider_delete((*C.QStyleOptionSlider)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionSpinBox struct {
	h  *C.QStyleOptionSpinBox
	gc *[1]unsafe.Pointer
	*QStyleOptionComplex
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionSpinBox) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOptionComplex.miqtSetGC(gc)
}

func (this *QStyleOptionSpinBox) cPointer() *C.QStyleOptionSpinBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionSpinBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionSpinBox constructs the type using only CGO pointers.
func newQStyleOptionSpinBox(h *C.QStyleOptionSpinBox) *QStyleOptionSpinBox {
	if h == nil {
		return nil
	}
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	C.QStyleOptionSpinBox_virtbase(h, &outptr_QStyleOptionComplex)

	return &QStyleOptionSpinBox{h: h,
		QStyleOptionComplex: newQStyleOptionComplex(outptr_QStyleOptionComplex)}
}

// UnsafeNewQStyleOptionSpinBox constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionSpinBox(h unsafe.Pointer) *QStyleOptionSpinBox {
	return newQStyleOptionSpinBox((*C.QStyleOptionSpinBox)(h))
}

// NewQStyleOptionSpinBox constructs a new QStyleOptionSpinBox object.
func NewQStyleOptionSpinBox() *QStyleOptionSpinBox {

	return newQStyleOptionSpinBox(C.QStyleOptionSpinBox_new())
}

// NewQStyleOptionSpinBox2 constructs a new QStyleOptionSpinBox object.
func NewQStyleOptionSpinBox2(other *QStyleOptionSpinBox) *QStyleOptionSpinBox {
	defer runtime.KeepAlive(other)

	return newQStyleOptionSpinBox(C.QStyleOptionSpinBox_new2(other.cPointer()))
}

func (this *QStyleOptionSpinBox) ButtonSymbols() QAbstractSpinBox__ButtonSymbols {
	defer runtime.KeepAlive(this)
	return (QAbstractSpinBox__ButtonSymbols)(C.QStyleOptionSpinBox_buttonSymbols(this.h))
}

func (this *QStyleOptionSpinBox) SetButtonSymbols(buttonSymbols QAbstractSpinBox__ButtonSymbols) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSpinBox_setButtonSymbols(this.h, (C.int)(buttonSymbols))
}

func (this *QStyleOptionSpinBox) StepEnabled() QAbstractSpinBox__StepEnabledFlag {
	defer runtime.KeepAlive(this)
	return (QAbstractSpinBox__StepEnabledFlag)(C.QStyleOptionSpinBox_stepEnabled(this.h))
}

func (this *QStyleOptionSpinBox) SetStepEnabled(stepEnabled QAbstractSpinBox__StepEnabledFlag) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSpinBox_setStepEnabled(this.h, (C.int)(stepEnabled))
}

func (this *QStyleOptionSpinBox) Frame() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionSpinBox_frame(this.h))
}

func (this *QStyleOptionSpinBox) SetFrame(frame bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSpinBox_setFrame(this.h, (C.bool)(frame))
}

func (this *QStyleOptionSpinBox) OperatorAssign(param1 *QStyleOptionSpinBox) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionSpinBox_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionSpinBox) Delete() {
	C.QStyleOptionSpinBox_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionSpinBox) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionSpinBox_delete((*C.QStyleOptionSpinBox)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionToolButton struct {
	h  *C.QStyleOptionToolButton
	gc *[1]unsafe.Pointer
	*QStyleOptionComplex
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionToolButton) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOptionComplex.miqtSetGC(gc)
}

func (this *QStyleOptionToolButton) cPointer() *C.QStyleOptionToolButton {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionToolButton) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionToolButton constructs the type using only CGO pointers.
func newQStyleOptionToolButton(h *C.QStyleOptionToolButton) *QStyleOptionToolButton {
	if h == nil {
		return nil
	}
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	C.QStyleOptionToolButton_virtbase(h, &outptr_QStyleOptionComplex)

	return &QStyleOptionToolButton{h: h,
		QStyleOptionComplex: newQStyleOptionComplex(outptr_QStyleOptionComplex)}
}

// UnsafeNewQStyleOptionToolButton constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionToolButton(h unsafe.Pointer) *QStyleOptionToolButton {
	return newQStyleOptionToolButton((*C.QStyleOptionToolButton)(h))
}

// NewQStyleOptionToolButton constructs a new QStyleOptionToolButton object.
func NewQStyleOptionToolButton() *QStyleOptionToolButton {

	return newQStyleOptionToolButton(C.QStyleOptionToolButton_new())
}

// NewQStyleOptionToolButton2 constructs a new QStyleOptionToolButton object.
func NewQStyleOptionToolButton2(other *QStyleOptionToolButton) *QStyleOptionToolButton {
	defer runtime.KeepAlive(other)

	return newQStyleOptionToolButton(C.QStyleOptionToolButton_new2(other.cPointer()))
}

func (this *QStyleOptionToolButton) Features() QStyleOptionToolButton__ToolButtonFeature {
	defer runtime.KeepAlive(this)
	return (QStyleOptionToolButton__ToolButtonFeature)(C.QStyleOptionToolButton_features(this.h))
}

func (this *QStyleOptionToolButton) SetFeatures(features QStyleOptionToolButton__ToolButtonFeature) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionToolButton_setFeatures(this.h, (C.int)(features))
}

func (this *QStyleOptionToolButton) Icon() *QIcon {
	defer runtime.KeepAlive(this)
	icon_goptr := newQIcon(C.QStyleOptionToolButton_icon(this.h))
	icon_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return icon_goptr
}

func (this *QStyleOptionToolButton) SetIcon(icon QIcon) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(icon)
	C.QStyleOptionToolButton_setIcon(this.h, icon.cPointer())
}

func (this *QStyleOptionToolButton) IconSize() *QSize {
	defer runtime.KeepAlive(this)
	iconSize_goptr := newQSize(C.QStyleOptionToolButton_iconSize(this.h))
	iconSize_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return iconSize_goptr
}

func (this *QStyleOptionToolButton) SetIconSize(iconSize QSize) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(iconSize)
	C.QStyleOptionToolButton_setIconSize(this.h, iconSize.cPointer())
}

func (this *QStyleOptionToolButton) Text() string {
	defer runtime.KeepAlive(this)
	var text_ms C.struct_miqt_string = C.QStyleOptionToolButton_text(this.h)
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	return text_ret
}

func (this *QStyleOptionToolButton) SetText(text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStyleOptionToolButton_setText(this.h, text_ms)
}

func (this *QStyleOptionToolButton) ArrowType() ArrowType {
	defer runtime.KeepAlive(this)
	return (ArrowType)(C.QStyleOptionToolButton_arrowType(this.h))
}

func (this *QStyleOptionToolButton) SetArrowType(arrowType ArrowType) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionToolButton_setArrowType(this.h, (C.int)(arrowType))
}

func (this *QStyleOptionToolButton) ToolButtonStyle() ToolButtonStyle {
	defer runtime.KeepAlive(this)
	return (ToolButtonStyle)(C.QStyleOptionToolButton_toolButtonStyle(this.h))
}

func (this *QStyleOptionToolButton) SetToolButtonStyle(toolButtonStyle ToolButtonStyle) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionToolButton_setToolButtonStyle(this.h, (C.int)(toolButtonStyle))
}

func (this *QStyleOptionToolButton) Pos() *QPoint {
	defer runtime.KeepAlive(this)
	pos_goptr := newQPoint(C.QStyleOptionToolButton_pos(this.h))
	pos_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return pos_goptr
}

func (this *QStyleOptionToolButton) SetPos(pos QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QStyleOptionToolButton_setPos(this.h, pos.cPointer())
}

func (this *QStyleOptionToolButton) Font() *QFont {
	defer runtime.KeepAlive(this)
	font_goptr := newQFont(C.QStyleOptionToolButton_font(this.h))
	font_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return font_goptr
}

func (this *QStyleOptionToolButton) SetFont(font QFont) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(font)
	C.QStyleOptionToolButton_setFont(this.h, font.cPointer())
}

func (this *QStyleOptionToolButton) OperatorAssign(param1 *QStyleOptionToolButton) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionToolButton_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionToolButton) Delete() {
	C.QStyleOptionToolButton_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionToolButton) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionToolButton_delete((*C.QStyleOptionToolButton)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionComboBox struct {
	h  *C.QStyleOptionComboBox
	gc *[1]unsafe.Pointer
	*QStyleOptionComplex
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionComboBox) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOptionComplex.miqtSetGC(gc)
}

func (this *QStyleOptionComboBox) cPointer() *C.QStyleOptionComboBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionComboBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionComboBox constructs the type using only CGO pointers.
func newQStyleOptionComboBox(h *C.QStyleOptionComboBox) *QStyleOptionComboBox {
	if h == nil {
		return nil
	}
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	C.QStyleOptionComboBox_virtbase(h, &outptr_QStyleOptionComplex)

	return &QStyleOptionComboBox{h: h,
		QStyleOptionComplex: newQStyleOptionComplex(outptr_QStyleOptionComplex)}
}

// UnsafeNewQStyleOptionComboBox constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionComboBox(h unsafe.Pointer) *QStyleOptionComboBox {
	return newQStyleOptionComboBox((*C.QStyleOptionComboBox)(h))
}

// NewQStyleOptionComboBox constructs a new QStyleOptionComboBox object.
func NewQStyleOptionComboBox() *QStyleOptionComboBox {

	return newQStyleOptionComboBox(C.QStyleOptionComboBox_new())
}

// NewQStyleOptionComboBox2 constructs a new QStyleOptionComboBox object.
func NewQStyleOptionComboBox2(other *QStyleOptionComboBox) *QStyleOptionComboBox {
	defer runtime.KeepAlive(other)

	return newQStyleOptionComboBox(C.QStyleOptionComboBox_new2(other.cPointer()))
}

func (this *QStyleOptionComboBox) Editable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionComboBox_editable(this.h))
}

func (this *QStyleOptionComboBox) SetEditable(editable bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionComboBox_setEditable(this.h, (C.bool)(editable))
}

func (this *QStyleOptionComboBox) PopupRect() *QRect {
	defer runtime.KeepAlive(this)
	popupRect_goptr := newQRect(C.QStyleOptionComboBox_popupRect(this.h))
	popupRect_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return popupRect_goptr
}

func (this *QStyleOptionComboBox) SetPopupRect(popupRect QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(popupRect)
	C.QStyleOptionComboBox_setPopupRect(this.h, popupRect.cPointer())
}

func (this *QStyleOptionComboBox) Frame() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QStyleOptionComboBox_frame(this.h))
}

func (this *QStyleOptionComboBox) SetFrame(frame bool) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionComboBox_setFrame(this.h, (C.bool)(frame))
}

func (this *QStyleOptionComboBox) CurrentText() string {
	defer runtime.KeepAlive(this)
	var currentText_ms C.struct_miqt_string = C.QStyleOptionComboBox_currentText(this.h)
	currentText_ret := C.GoStringN(currentText_ms.data, C.int(int64(currentText_ms.len)))
	C.free(unsafe.Pointer(currentText_ms.data))
	return currentText_ret
}

func (this *QStyleOptionComboBox) SetCurrentText(currentText string) {
	defer runtime.KeepAlive(this)
	currentText_ms := C.struct_miqt_string{}
	currentText_ms.data = C.CString(currentText)
	currentText_ms.len = C.size_t(len(currentText))
	defer C.free(unsafe.Pointer(currentText_ms.data))
	C.QStyleOptionComboBox_setCurrentText(this.h, currentText_ms)
}

func (this *QStyleOptionComboBox) CurrentIcon() *QIcon {
	defer runtime.KeepAlive(this)
	currentIcon_goptr := newQIcon(C.QStyleOptionComboBox_currentIcon(this.h))
	currentIcon_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return currentIcon_goptr
}

func (this *QStyleOptionComboBox) SetCurrentIcon(currentIcon QIcon) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(currentIcon)
	C.QStyleOptionComboBox_setCurrentIcon(this.h, currentIcon.cPointer())
}

func (this *QStyleOptionComboBox) IconSize() *QSize {
	defer runtime.KeepAlive(this)
	iconSize_goptr := newQSize(C.QStyleOptionComboBox_iconSize(this.h))
	iconSize_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return iconSize_goptr
}

func (this *QStyleOptionComboBox) SetIconSize(iconSize QSize) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(iconSize)
	C.QStyleOptionComboBox_setIconSize(this.h, iconSize.cPointer())
}

func (this *QStyleOptionComboBox) OperatorAssign(param1 *QStyleOptionComboBox) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionComboBox_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionComboBox) Delete() {
	C.QStyleOptionComboBox_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionComboBox) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionComboBox_delete((*C.QStyleOptionComboBox)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionTitleBar struct {
	h  *C.QStyleOptionTitleBar
	gc *[1]unsafe.Pointer
	*QStyleOptionComplex
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionTitleBar) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOptionComplex.miqtSetGC(gc)
}

func (this *QStyleOptionTitleBar) cPointer() *C.QStyleOptionTitleBar {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionTitleBar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionTitleBar constructs the type using only CGO pointers.
func newQStyleOptionTitleBar(h *C.QStyleOptionTitleBar) *QStyleOptionTitleBar {
	if h == nil {
		return nil
	}
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	C.QStyleOptionTitleBar_virtbase(h, &outptr_QStyleOptionComplex)

	return &QStyleOptionTitleBar{h: h,
		QStyleOptionComplex: newQStyleOptionComplex(outptr_QStyleOptionComplex)}
}

// UnsafeNewQStyleOptionTitleBar constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionTitleBar(h unsafe.Pointer) *QStyleOptionTitleBar {
	return newQStyleOptionTitleBar((*C.QStyleOptionTitleBar)(h))
}

// NewQStyleOptionTitleBar constructs a new QStyleOptionTitleBar object.
func NewQStyleOptionTitleBar() *QStyleOptionTitleBar {

	return newQStyleOptionTitleBar(C.QStyleOptionTitleBar_new())
}

// NewQStyleOptionTitleBar2 constructs a new QStyleOptionTitleBar object.
func NewQStyleOptionTitleBar2(other *QStyleOptionTitleBar) *QStyleOptionTitleBar {
	defer runtime.KeepAlive(other)

	return newQStyleOptionTitleBar(C.QStyleOptionTitleBar_new2(other.cPointer()))
}

func (this *QStyleOptionTitleBar) Text() string {
	defer runtime.KeepAlive(this)
	var text_ms C.struct_miqt_string = C.QStyleOptionTitleBar_text(this.h)
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	return text_ret
}

func (this *QStyleOptionTitleBar) SetText(text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStyleOptionTitleBar_setText(this.h, text_ms)
}

func (this *QStyleOptionTitleBar) Icon() *QIcon {
	defer runtime.KeepAlive(this)
	icon_goptr := newQIcon(C.QStyleOptionTitleBar_icon(this.h))
	icon_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return icon_goptr
}

func (this *QStyleOptionTitleBar) SetIcon(icon QIcon) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(icon)
	C.QStyleOptionTitleBar_setIcon(this.h, icon.cPointer())
}

func (this *QStyleOptionTitleBar) TitleBarState() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionTitleBar_titleBarState(this.h))
}

func (this *QStyleOptionTitleBar) SetTitleBarState(titleBarState int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionTitleBar_setTitleBarState(this.h, (C.int)(titleBarState))
}

func (this *QStyleOptionTitleBar) TitleBarFlags() WindowType {
	defer runtime.KeepAlive(this)
	return (WindowType)(C.QStyleOptionTitleBar_titleBarFlags(this.h))
}

func (this *QStyleOptionTitleBar) SetTitleBarFlags(titleBarFlags WindowType) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionTitleBar_setTitleBarFlags(this.h, (C.int)(titleBarFlags))
}

func (this *QStyleOptionTitleBar) OperatorAssign(param1 *QStyleOptionTitleBar) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionTitleBar_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionTitleBar) Delete() {
	C.QStyleOptionTitleBar_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionTitleBar) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionTitleBar_delete((*C.QStyleOptionTitleBar)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionGroupBox struct {
	h  *C.QStyleOptionGroupBox
	gc *[1]unsafe.Pointer
	*QStyleOptionComplex
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionGroupBox) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOptionComplex.miqtSetGC(gc)
}

func (this *QStyleOptionGroupBox) cPointer() *C.QStyleOptionGroupBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionGroupBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionGroupBox constructs the type using only CGO pointers.
func newQStyleOptionGroupBox(h *C.QStyleOptionGroupBox) *QStyleOptionGroupBox {
	if h == nil {
		return nil
	}
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	C.QStyleOptionGroupBox_virtbase(h, &outptr_QStyleOptionComplex)

	return &QStyleOptionGroupBox{h: h,
		QStyleOptionComplex: newQStyleOptionComplex(outptr_QStyleOptionComplex)}
}

// UnsafeNewQStyleOptionGroupBox constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionGroupBox(h unsafe.Pointer) *QStyleOptionGroupBox {
	return newQStyleOptionGroupBox((*C.QStyleOptionGroupBox)(h))
}

// NewQStyleOptionGroupBox constructs a new QStyleOptionGroupBox object.
func NewQStyleOptionGroupBox() *QStyleOptionGroupBox {

	return newQStyleOptionGroupBox(C.QStyleOptionGroupBox_new())
}

// NewQStyleOptionGroupBox2 constructs a new QStyleOptionGroupBox object.
func NewQStyleOptionGroupBox2(other *QStyleOptionGroupBox) *QStyleOptionGroupBox {
	defer runtime.KeepAlive(other)

	return newQStyleOptionGroupBox(C.QStyleOptionGroupBox_new2(other.cPointer()))
}

func (this *QStyleOptionGroupBox) Features() QStyleOptionFrame__FrameFeature {
	defer runtime.KeepAlive(this)
	return (QStyleOptionFrame__FrameFeature)(C.QStyleOptionGroupBox_features(this.h))
}

func (this *QStyleOptionGroupBox) SetFeatures(features QStyleOptionFrame__FrameFeature) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionGroupBox_setFeatures(this.h, (C.int)(features))
}

func (this *QStyleOptionGroupBox) Text() string {
	defer runtime.KeepAlive(this)
	var text_ms C.struct_miqt_string = C.QStyleOptionGroupBox_text(this.h)
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	return text_ret
}

func (this *QStyleOptionGroupBox) SetText(text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStyleOptionGroupBox_setText(this.h, text_ms)
}

func (this *QStyleOptionGroupBox) TextAlignment() AlignmentFlag {
	defer runtime.KeepAlive(this)
	return (AlignmentFlag)(C.QStyleOptionGroupBox_textAlignment(this.h))
}

func (this *QStyleOptionGroupBox) SetTextAlignment(textAlignment AlignmentFlag) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionGroupBox_setTextAlignment(this.h, (C.int)(textAlignment))
}

func (this *QStyleOptionGroupBox) TextColor() *QColor {
	defer runtime.KeepAlive(this)
	textColor_goptr := newQColor(C.QStyleOptionGroupBox_textColor(this.h))
	textColor_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return textColor_goptr
}

func (this *QStyleOptionGroupBox) SetTextColor(textColor QColor) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(textColor)
	C.QStyleOptionGroupBox_setTextColor(this.h, textColor.cPointer())
}

func (this *QStyleOptionGroupBox) LineWidth() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionGroupBox_lineWidth(this.h))
}

func (this *QStyleOptionGroupBox) SetLineWidth(lineWidth int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionGroupBox_setLineWidth(this.h, (C.int)(lineWidth))
}

func (this *QStyleOptionGroupBox) MidLineWidth() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleOptionGroupBox_midLineWidth(this.h))
}

func (this *QStyleOptionGroupBox) SetMidLineWidth(midLineWidth int) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionGroupBox_setMidLineWidth(this.h, (C.int)(midLineWidth))
}

func (this *QStyleOptionGroupBox) OperatorAssign(param1 *QStyleOptionGroupBox) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionGroupBox_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionGroupBox) Delete() {
	C.QStyleOptionGroupBox_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionGroupBox) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionGroupBox_delete((*C.QStyleOptionGroupBox)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionSizeGrip struct {
	h  *C.QStyleOptionSizeGrip
	gc *[1]unsafe.Pointer
	*QStyleOptionComplex
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionSizeGrip) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOptionComplex.miqtSetGC(gc)
}

func (this *QStyleOptionSizeGrip) cPointer() *C.QStyleOptionSizeGrip {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionSizeGrip) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionSizeGrip constructs the type using only CGO pointers.
func newQStyleOptionSizeGrip(h *C.QStyleOptionSizeGrip) *QStyleOptionSizeGrip {
	if h == nil {
		return nil
	}
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	C.QStyleOptionSizeGrip_virtbase(h, &outptr_QStyleOptionComplex)

	return &QStyleOptionSizeGrip{h: h,
		QStyleOptionComplex: newQStyleOptionComplex(outptr_QStyleOptionComplex)}
}

// UnsafeNewQStyleOptionSizeGrip constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionSizeGrip(h unsafe.Pointer) *QStyleOptionSizeGrip {
	return newQStyleOptionSizeGrip((*C.QStyleOptionSizeGrip)(h))
}

// NewQStyleOptionSizeGrip constructs a new QStyleOptionSizeGrip object.
func NewQStyleOptionSizeGrip() *QStyleOptionSizeGrip {

	return newQStyleOptionSizeGrip(C.QStyleOptionSizeGrip_new())
}

// NewQStyleOptionSizeGrip2 constructs a new QStyleOptionSizeGrip object.
func NewQStyleOptionSizeGrip2(other *QStyleOptionSizeGrip) *QStyleOptionSizeGrip {
	defer runtime.KeepAlive(other)

	return newQStyleOptionSizeGrip(C.QStyleOptionSizeGrip_new2(other.cPointer()))
}

func (this *QStyleOptionSizeGrip) Corner() Corner {
	defer runtime.KeepAlive(this)
	return (Corner)(C.QStyleOptionSizeGrip_corner(this.h))
}

func (this *QStyleOptionSizeGrip) SetCorner(corner Corner) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionSizeGrip_setCorner(this.h, (C.int)(corner))
}

func (this *QStyleOptionSizeGrip) OperatorAssign(param1 *QStyleOptionSizeGrip) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionSizeGrip_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionSizeGrip) Delete() {
	C.QStyleOptionSizeGrip_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionSizeGrip) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionSizeGrip_delete((*C.QStyleOptionSizeGrip)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleOptionGraphicsItem struct {
	h  *C.QStyleOptionGraphicsItem
	gc *[1]unsafe.Pointer
	*QStyleOption
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleOptionGraphicsItem) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleOption.miqtSetGC(gc)
}

func (this *QStyleOptionGraphicsItem) cPointer() *C.QStyleOptionGraphicsItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionGraphicsItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionGraphicsItem constructs the type using only CGO pointers.
func newQStyleOptionGraphicsItem(h *C.QStyleOptionGraphicsItem) *QStyleOptionGraphicsItem {
	if h == nil {
		return nil
	}
	var outptr_QStyleOption *C.QStyleOption = nil
	C.QStyleOptionGraphicsItem_virtbase(h, &outptr_QStyleOption)

	return &QStyleOptionGraphicsItem{h: h,
		QStyleOption: newQStyleOption(outptr_QStyleOption)}
}

// UnsafeNewQStyleOptionGraphicsItem constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionGraphicsItem(h unsafe.Pointer) *QStyleOptionGraphicsItem {
	return newQStyleOptionGraphicsItem((*C.QStyleOptionGraphicsItem)(h))
}

// NewQStyleOptionGraphicsItem constructs a new QStyleOptionGraphicsItem object.
func NewQStyleOptionGraphicsItem() *QStyleOptionGraphicsItem {

	return newQStyleOptionGraphicsItem(C.QStyleOptionGraphicsItem_new())
}

// NewQStyleOptionGraphicsItem2 constructs a new QStyleOptionGraphicsItem object.
func NewQStyleOptionGraphicsItem2(other *QStyleOptionGraphicsItem) *QStyleOptionGraphicsItem {
	defer runtime.KeepAlive(other)

	return newQStyleOptionGraphicsItem(C.QStyleOptionGraphicsItem_new2(other.cPointer()))
}

func (this *QStyleOptionGraphicsItem) ExposedRect() *QRectF {
	defer runtime.KeepAlive(this)
	exposedRect_goptr := newQRectF(C.QStyleOptionGraphicsItem_exposedRect(this.h))
	exposedRect_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return exposedRect_goptr
}

func (this *QStyleOptionGraphicsItem) SetExposedRect(exposedRect QRectF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(exposedRect)
	C.QStyleOptionGraphicsItem_setExposedRect(this.h, exposedRect.cPointer())
}

func (this *QStyleOptionGraphicsItem) Matrix() *QMatrix {
	defer runtime.KeepAlive(this)
	matrix_goptr := newQMatrix(C.QStyleOptionGraphicsItem_matrix(this.h))
	matrix_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return matrix_goptr
}

func (this *QStyleOptionGraphicsItem) SetMatrix(matrix QMatrix) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(matrix)
	C.QStyleOptionGraphicsItem_setMatrix(this.h, matrix.cPointer())
}

func (this *QStyleOptionGraphicsItem) LevelOfDetail() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QStyleOptionGraphicsItem_levelOfDetail(this.h))
}

func (this *QStyleOptionGraphicsItem) SetLevelOfDetail(levelOfDetail float64) {
	defer runtime.KeepAlive(this)
	C.QStyleOptionGraphicsItem_setLevelOfDetail(this.h, (C.double)(levelOfDetail))
}

func (this *QStyleOptionGraphicsItem) OperatorAssign(param1 *QStyleOptionGraphicsItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleOptionGraphicsItem_operatorAssign(this.h, param1.cPointer())
}

func QStyleOptionGraphicsItem_LevelOfDetailFromTransform(worldTransform *QTransform) float64 {
	defer runtime.KeepAlive(worldTransform)
	return (float64)(C.QStyleOptionGraphicsItem_levelOfDetailFromTransform(worldTransform.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionGraphicsItem) Delete() {
	C.QStyleOptionGraphicsItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleOptionGraphicsItem) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleOptionGraphicsItem_delete((*C.QStyleOptionGraphicsItem)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleHintReturn struct {
	h  *C.QStyleHintReturn
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleHintReturn) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QStyleHintReturn) cPointer() *C.QStyleHintReturn {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleHintReturn) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleHintReturn constructs the type using only CGO pointers.
func newQStyleHintReturn(h *C.QStyleHintReturn) *QStyleHintReturn {
	if h == nil {
		return nil
	}

	return &QStyleHintReturn{h: h}
}

// UnsafeNewQStyleHintReturn constructs the type using only unsafe pointers.
func UnsafeNewQStyleHintReturn(h unsafe.Pointer) *QStyleHintReturn {
	return newQStyleHintReturn((*C.QStyleHintReturn)(h))
}

// NewQStyleHintReturn constructs a new QStyleHintReturn object.
func NewQStyleHintReturn() *QStyleHintReturn {

	return newQStyleHintReturn(C.QStyleHintReturn_new())
}

// NewQStyleHintReturn2 constructs a new QStyleHintReturn object.
func NewQStyleHintReturn2(param1 *QStyleHintReturn) *QStyleHintReturn {
	defer runtime.KeepAlive(param1)

	return newQStyleHintReturn(C.QStyleHintReturn_new2(param1.cPointer()))
}

// NewQStyleHintReturn3 constructs a new QStyleHintReturn object.
func NewQStyleHintReturn3(version int) *QStyleHintReturn {

	return newQStyleHintReturn(C.QStyleHintReturn_new3((C.int)(version)))
}

// NewQStyleHintReturn4 constructs a new QStyleHintReturn object.
func NewQStyleHintReturn4(version int, typeVal int) *QStyleHintReturn {

	return newQStyleHintReturn(C.QStyleHintReturn_new4((C.int)(version), (C.int)(typeVal)))
}

func (this *QStyleHintReturn) Version() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleHintReturn_version(this.h))
}

func (this *QStyleHintReturn) SetVersion(version int) {
	defer runtime.KeepAlive(this)
	C.QStyleHintReturn_setVersion(this.h, (C.int)(version))
}

func (this *QStyleHintReturn) Type() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QStyleHintReturn_type(this.h))
}

func (this *QStyleHintReturn) SetType(typeVal int) {
	defer runtime.KeepAlive(this)
	C.QStyleHintReturn_setType(this.h, (C.int)(typeVal))
}

func (this *QStyleHintReturn) OperatorAssign(param1 *QStyleHintReturn) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleHintReturn_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleHintReturn) Delete() {
	C.QStyleHintReturn_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleHintReturn) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleHintReturn_delete((*C.QStyleHintReturn)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleHintReturnMask struct {
	h  *C.QStyleHintReturnMask
	gc *[1]unsafe.Pointer
	*QStyleHintReturn
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleHintReturnMask) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleHintReturn.miqtSetGC(gc)
}

func (this *QStyleHintReturnMask) cPointer() *C.QStyleHintReturnMask {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleHintReturnMask) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleHintReturnMask constructs the type using only CGO pointers.
func newQStyleHintReturnMask(h *C.QStyleHintReturnMask) *QStyleHintReturnMask {
	if h == nil {
		return nil
	}
	var outptr_QStyleHintReturn *C.QStyleHintReturn = nil
	C.QStyleHintReturnMask_virtbase(h, &outptr_QStyleHintReturn)

	return &QStyleHintReturnMask{h: h,
		QStyleHintReturn: newQStyleHintReturn(outptr_QStyleHintReturn)}
}

// UnsafeNewQStyleHintReturnMask constructs the type using only unsafe pointers.
func UnsafeNewQStyleHintReturnMask(h unsafe.Pointer) *QStyleHintReturnMask {
	return newQStyleHintReturnMask((*C.QStyleHintReturnMask)(h))
}

// NewQStyleHintReturnMask constructs a new QStyleHintReturnMask object.
func NewQStyleHintReturnMask() *QStyleHintReturnMask {

	return newQStyleHintReturnMask(C.QStyleHintReturnMask_new())
}

// NewQStyleHintReturnMask2 constructs a new QStyleHintReturnMask object.
func NewQStyleHintReturnMask2(param1 *QStyleHintReturnMask) *QStyleHintReturnMask {
	defer runtime.KeepAlive(param1)

	return newQStyleHintReturnMask(C.QStyleHintReturnMask_new2(param1.cPointer()))
}

func (this *QStyleHintReturnMask) Region() *QRegion {
	defer runtime.KeepAlive(this)
	region_goptr := newQRegion(C.QStyleHintReturnMask_region(this.h))
	region_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return region_goptr
}

func (this *QStyleHintReturnMask) SetRegion(region QRegion) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(region)
	C.QStyleHintReturnMask_setRegion(this.h, region.cPointer())
}

func (this *QStyleHintReturnMask) OperatorAssign(param1 *QStyleHintReturnMask) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleHintReturnMask_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleHintReturnMask) Delete() {
	C.QStyleHintReturnMask_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleHintReturnMask) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleHintReturnMask_delete((*C.QStyleHintReturnMask)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStyleHintReturnVariant struct {
	h  *C.QStyleHintReturnVariant
	gc *[1]unsafe.Pointer
	*QStyleHintReturn
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStyleHintReturnVariant) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStyleHintReturn.miqtSetGC(gc)
}

func (this *QStyleHintReturnVariant) cPointer() *C.QStyleHintReturnVariant {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleHintReturnVariant) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleHintReturnVariant constructs the type using only CGO pointers.
func newQStyleHintReturnVariant(h *C.QStyleHintReturnVariant) *QStyleHintReturnVariant {
	if h == nil {
		return nil
	}
	var outptr_QStyleHintReturn *C.QStyleHintReturn = nil
	C.QStyleHintReturnVariant_virtbase(h, &outptr_QStyleHintReturn)

	return &QStyleHintReturnVariant{h: h,
		QStyleHintReturn: newQStyleHintReturn(outptr_QStyleHintReturn)}
}

// UnsafeNewQStyleHintReturnVariant constructs the type using only unsafe pointers.
func UnsafeNewQStyleHintReturnVariant(h unsafe.Pointer) *QStyleHintReturnVariant {
	return newQStyleHintReturnVariant((*C.QStyleHintReturnVariant)(h))
}

// NewQStyleHintReturnVariant constructs a new QStyleHintReturnVariant object.
func NewQStyleHintReturnVariant() *QStyleHintReturnVariant {

	return newQStyleHintReturnVariant(C.QStyleHintReturnVariant_new())
}

// NewQStyleHintReturnVariant2 constructs a new QStyleHintReturnVariant object.
func NewQStyleHintReturnVariant2(param1 *QStyleHintReturnVariant) *QStyleHintReturnVariant {
	defer runtime.KeepAlive(param1)

	return newQStyleHintReturnVariant(C.QStyleHintReturnVariant_new2(param1.cPointer()))
}

func (this *QStyleHintReturnVariant) Variant() *QVariant {
	defer runtime.KeepAlive(this)
	variant_goptr := newQVariant(C.QStyleHintReturnVariant_variant(this.h))
	variant_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return variant_goptr
}

func (this *QStyleHintReturnVariant) SetVariant(variant QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(variant)
	C.QStyleHintReturnVariant_setVariant(this.h, variant.cPointer())
}

func (this *QStyleHintReturnVariant) OperatorAssign(param1 *QStyleHintReturnVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStyleHintReturnVariant_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleHintReturnVariant) Delete() {
	C.QStyleHintReturnVariant_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStyleHintReturnVariant) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStyleHintReturnVariant_delete((*C.QStyleHintReturnVariant)(gc[0]))
	})
	this.miqtSetGC(gc)
}
