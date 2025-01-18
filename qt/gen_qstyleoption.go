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
	h *C.QStyleOption
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

func (this *QStyleOption) Init(w *QWidget) {
	C.QStyleOption_Init(this.h, w.cPointer())
}

func (this *QStyleOption) InitFrom(w *QWidget) {
	C.QStyleOption_InitFrom(this.h, w.cPointer())
}

func (this *QStyleOption) OperatorAssign(other *QStyleOption) {
	C.QStyleOption_OperatorAssign(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOption) Delete() {
	C.QStyleOption_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOption) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOption) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionFocusRect struct {
	h *C.QStyleOptionFocusRect
	*QStyleOption
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

	return newQStyleOptionFocusRect(C.QStyleOptionFocusRect_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionFocusRect) Delete() {
	C.QStyleOptionFocusRect_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionFocusRect) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionFocusRect) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionFrame struct {
	h *C.QStyleOptionFrame
	*QStyleOption
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

	return newQStyleOptionFrame(C.QStyleOptionFrame_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionFrame) Delete() {
	C.QStyleOptionFrame_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionFrame) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionFrame) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionTabWidgetFrame struct {
	h *C.QStyleOptionTabWidgetFrame
	*QStyleOption
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

	return newQStyleOptionTabWidgetFrame(C.QStyleOptionTabWidgetFrame_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionTabWidgetFrame) Delete() {
	C.QStyleOptionTabWidgetFrame_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionTabWidgetFrame) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionTabWidgetFrame) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionTabBarBase struct {
	h *C.QStyleOptionTabBarBase
	*QStyleOption
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

	return newQStyleOptionTabBarBase(C.QStyleOptionTabBarBase_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionTabBarBase) Delete() {
	C.QStyleOptionTabBarBase_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionTabBarBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionTabBarBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionHeader struct {
	h *C.QStyleOptionHeader
	*QStyleOption
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

	return newQStyleOptionHeader(C.QStyleOptionHeader_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionHeader) Delete() {
	C.QStyleOptionHeader_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionHeader) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionHeader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionButton struct {
	h *C.QStyleOptionButton
	*QStyleOption
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

	return newQStyleOptionButton(C.QStyleOptionButton_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionButton) Delete() {
	C.QStyleOptionButton_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionTab struct {
	h *C.QStyleOptionTab
	*QStyleOption
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

	return newQStyleOptionTab(C.QStyleOptionTab_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionTab) Delete() {
	C.QStyleOptionTab_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionTab) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionTab) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionTabV4 struct {
	h *C.QStyleOptionTabV4
	*QStyleOptionTab
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

	return newQStyleOptionTabV4(C.QStyleOptionTabV4_new2(param1.cPointer()))
}

func (this *QStyleOptionTabV4) OperatorAssign(param1 *QStyleOptionTabV4) {
	C.QStyleOptionTabV4_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOptionTabV4) Delete() {
	C.QStyleOptionTabV4_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionTabV4) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionTabV4) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionToolBar struct {
	h *C.QStyleOptionToolBar
	*QStyleOption
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

	return newQStyleOptionToolBar(C.QStyleOptionToolBar_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionToolBar) Delete() {
	C.QStyleOptionToolBar_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionToolBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionToolBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionProgressBar struct {
	h *C.QStyleOptionProgressBar
	*QStyleOption
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

	return newQStyleOptionProgressBar(C.QStyleOptionProgressBar_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionProgressBar) Delete() {
	C.QStyleOptionProgressBar_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionProgressBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionProgressBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionMenuItem struct {
	h *C.QStyleOptionMenuItem
	*QStyleOption
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

	return newQStyleOptionMenuItem(C.QStyleOptionMenuItem_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionMenuItem) Delete() {
	C.QStyleOptionMenuItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionMenuItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionMenuItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionDockWidget struct {
	h *C.QStyleOptionDockWidget
	*QStyleOption
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

	return newQStyleOptionDockWidget(C.QStyleOptionDockWidget_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionDockWidget) Delete() {
	C.QStyleOptionDockWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionDockWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionDockWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionViewItem struct {
	h *C.QStyleOptionViewItem
	*QStyleOption
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

	return newQStyleOptionViewItem(C.QStyleOptionViewItem_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionViewItem) Delete() {
	C.QStyleOptionViewItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionViewItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionViewItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionToolBox struct {
	h *C.QStyleOptionToolBox
	*QStyleOption
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

	return newQStyleOptionToolBox(C.QStyleOptionToolBox_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionToolBox) Delete() {
	C.QStyleOptionToolBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionToolBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionToolBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionRubberBand struct {
	h *C.QStyleOptionRubberBand
	*QStyleOption
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

	return newQStyleOptionRubberBand(C.QStyleOptionRubberBand_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionRubberBand) Delete() {
	C.QStyleOptionRubberBand_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionRubberBand) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionRubberBand) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionComplex struct {
	h *C.QStyleOptionComplex
	*QStyleOption
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

// Delete this object from C++ memory.
func (this *QStyleOptionComplex) Delete() {
	C.QStyleOptionComplex_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionComplex) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionComplex) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionSlider struct {
	h *C.QStyleOptionSlider
	*QStyleOptionComplex
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

	return newQStyleOptionSlider(C.QStyleOptionSlider_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionSlider) Delete() {
	C.QStyleOptionSlider_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionSlider) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionSlider) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionSpinBox struct {
	h *C.QStyleOptionSpinBox
	*QStyleOptionComplex
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

	return newQStyleOptionSpinBox(C.QStyleOptionSpinBox_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionSpinBox) Delete() {
	C.QStyleOptionSpinBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionSpinBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionSpinBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionToolButton struct {
	h *C.QStyleOptionToolButton
	*QStyleOptionComplex
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

	return newQStyleOptionToolButton(C.QStyleOptionToolButton_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionToolButton) Delete() {
	C.QStyleOptionToolButton_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionToolButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionToolButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionComboBox struct {
	h *C.QStyleOptionComboBox
	*QStyleOptionComplex
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

	return newQStyleOptionComboBox(C.QStyleOptionComboBox_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionComboBox) Delete() {
	C.QStyleOptionComboBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionComboBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionComboBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionTitleBar struct {
	h *C.QStyleOptionTitleBar
	*QStyleOptionComplex
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

	return newQStyleOptionTitleBar(C.QStyleOptionTitleBar_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionTitleBar) Delete() {
	C.QStyleOptionTitleBar_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionTitleBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionTitleBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionGroupBox struct {
	h *C.QStyleOptionGroupBox
	*QStyleOptionComplex
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

	return newQStyleOptionGroupBox(C.QStyleOptionGroupBox_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionGroupBox) Delete() {
	C.QStyleOptionGroupBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionGroupBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionGroupBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionSizeGrip struct {
	h *C.QStyleOptionSizeGrip
	*QStyleOptionComplex
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

	return newQStyleOptionSizeGrip(C.QStyleOptionSizeGrip_new2(other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionSizeGrip) Delete() {
	C.QStyleOptionSizeGrip_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionSizeGrip) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionSizeGrip) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionGraphicsItem struct {
	h *C.QStyleOptionGraphicsItem
	*QStyleOption
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

	return newQStyleOptionGraphicsItem(C.QStyleOptionGraphicsItem_new2(other.cPointer()))
}

func QStyleOptionGraphicsItem_LevelOfDetailFromTransform(worldTransform *QTransform) float64 {
	return (float64)(C.QStyleOptionGraphicsItem_LevelOfDetailFromTransform(worldTransform.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionGraphicsItem) Delete() {
	C.QStyleOptionGraphicsItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionGraphicsItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionGraphicsItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleHintReturn struct {
	h *C.QStyleHintReturn
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

func (this *QStyleHintReturn) OperatorAssign(param1 *QStyleHintReturn) {
	C.QStyleHintReturn_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleHintReturn) Delete() {
	C.QStyleHintReturn_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleHintReturn) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleHintReturn) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleHintReturnMask struct {
	h *C.QStyleHintReturnMask
	*QStyleHintReturn
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

	return newQStyleHintReturnMask(C.QStyleHintReturnMask_new2(param1.cPointer()))
}

func (this *QStyleHintReturnMask) OperatorAssign(param1 *QStyleHintReturnMask) {
	C.QStyleHintReturnMask_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleHintReturnMask) Delete() {
	C.QStyleHintReturnMask_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleHintReturnMask) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleHintReturnMask) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleHintReturnVariant struct {
	h *C.QStyleHintReturnVariant
	*QStyleHintReturn
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

	return newQStyleHintReturnVariant(C.QStyleHintReturnVariant_new2(param1.cPointer()))
}

func (this *QStyleHintReturnVariant) OperatorAssign(param1 *QStyleHintReturnVariant) {
	C.QStyleHintReturnVariant_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleHintReturnVariant) Delete() {
	C.QStyleHintReturnVariant_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleHintReturnVariant) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleHintReturnVariant) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
