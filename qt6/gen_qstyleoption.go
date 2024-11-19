package qt6

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
	QStyleOptionFrame__Version QStyleOptionFrame__StyleOptionVersion = 1
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
	QStyleOptionTabWidgetFrame__Version QStyleOptionTabWidgetFrame__StyleOptionVersion = 1
)

type QStyleOptionTabBarBase__StyleOptionType int

const (
	QStyleOptionTabBarBase__Type QStyleOptionTabBarBase__StyleOptionType = 12
)

type QStyleOptionTabBarBase__StyleOptionVersion int

const (
	QStyleOptionTabBarBase__Version QStyleOptionTabBarBase__StyleOptionVersion = 1
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

type QStyleOptionHeaderV2__StyleOptionType int

const (
	QStyleOptionHeaderV2__Type QStyleOptionHeaderV2__StyleOptionType = 8
)

type QStyleOptionHeaderV2__StyleOptionVersion int

const (
	QStyleOptionHeaderV2__Version QStyleOptionHeaderV2__StyleOptionVersion = 2
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
	QStyleOptionTab__Version QStyleOptionTab__StyleOptionVersion = 1
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
	QStyleOptionProgressBar__Version QStyleOptionProgressBar__StyleOptionVersion = 1
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
	QStyleOptionDockWidget__Version QStyleOptionDockWidget__StyleOptionVersion = 1
)

type QStyleOptionViewItem__StyleOptionType int

const (
	QStyleOptionViewItem__Type QStyleOptionViewItem__StyleOptionType = 10
)

type QStyleOptionViewItem__StyleOptionVersion int

const (
	QStyleOptionViewItem__Version QStyleOptionViewItem__StyleOptionVersion = 1
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
	QStyleOptionToolBox__Version QStyleOptionToolBox__StyleOptionVersion = 1
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
	h          *C.QStyleOption
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QStyleOption{h: (*C.QStyleOption)(h)}
}

// NewQStyleOption constructs a new QStyleOption object.
func NewQStyleOption() *QStyleOption {
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOption_new(&outptr_QStyleOption)
	ret := newQStyleOption(outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOption2 constructs a new QStyleOption object.
func NewQStyleOption2(other *QStyleOption) *QStyleOption {
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOption_new2(other.cPointer(), &outptr_QStyleOption)
	ret := newQStyleOption(outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOption3 constructs a new QStyleOption object.
func NewQStyleOption3(version int) *QStyleOption {
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOption_new3((C.int)(version), &outptr_QStyleOption)
	ret := newQStyleOption(outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOption4 constructs a new QStyleOption object.
func NewQStyleOption4(version int, typeVal int) *QStyleOption {
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOption_new4((C.int)(version), (C.int)(typeVal), &outptr_QStyleOption)
	ret := newQStyleOption(outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

func (this *QStyleOption) InitFrom(w *QWidget) {
	C.QStyleOption_InitFrom(this.h, w.cPointer())
}

func (this *QStyleOption) OperatorAssign(other *QStyleOption) {
	C.QStyleOption_OperatorAssign(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleOption) Delete() {
	C.QStyleOption_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionFocusRect
	isSubclass bool
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
func newQStyleOptionFocusRect(h *C.QStyleOptionFocusRect, h_QStyleOption *C.QStyleOption) *QStyleOptionFocusRect {
	if h == nil {
		return nil
	}
	return &QStyleOptionFocusRect{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionFocusRect constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionFocusRect(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionFocusRect {
	if h == nil {
		return nil
	}

	return &QStyleOptionFocusRect{h: (*C.QStyleOptionFocusRect)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionFocusRect constructs a new QStyleOptionFocusRect object.
func NewQStyleOptionFocusRect() *QStyleOptionFocusRect {
	var outptr_QStyleOptionFocusRect *C.QStyleOptionFocusRect = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionFocusRect_new(&outptr_QStyleOptionFocusRect, &outptr_QStyleOption)
	ret := newQStyleOptionFocusRect(outptr_QStyleOptionFocusRect, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionFocusRect2 constructs a new QStyleOptionFocusRect object.
func NewQStyleOptionFocusRect2(other *QStyleOptionFocusRect) *QStyleOptionFocusRect {
	var outptr_QStyleOptionFocusRect *C.QStyleOptionFocusRect = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionFocusRect_new2(other.cPointer(), &outptr_QStyleOptionFocusRect, &outptr_QStyleOption)
	ret := newQStyleOptionFocusRect(outptr_QStyleOptionFocusRect, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionFocusRect) Delete() {
	C.QStyleOptionFocusRect_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionFrame
	isSubclass bool
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
func newQStyleOptionFrame(h *C.QStyleOptionFrame, h_QStyleOption *C.QStyleOption) *QStyleOptionFrame {
	if h == nil {
		return nil
	}
	return &QStyleOptionFrame{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionFrame constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionFrame(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionFrame {
	if h == nil {
		return nil
	}

	return &QStyleOptionFrame{h: (*C.QStyleOptionFrame)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionFrame constructs a new QStyleOptionFrame object.
func NewQStyleOptionFrame() *QStyleOptionFrame {
	var outptr_QStyleOptionFrame *C.QStyleOptionFrame = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionFrame_new(&outptr_QStyleOptionFrame, &outptr_QStyleOption)
	ret := newQStyleOptionFrame(outptr_QStyleOptionFrame, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionFrame2 constructs a new QStyleOptionFrame object.
func NewQStyleOptionFrame2(other *QStyleOptionFrame) *QStyleOptionFrame {
	var outptr_QStyleOptionFrame *C.QStyleOptionFrame = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionFrame_new2(other.cPointer(), &outptr_QStyleOptionFrame, &outptr_QStyleOption)
	ret := newQStyleOptionFrame(outptr_QStyleOptionFrame, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionFrame) Delete() {
	C.QStyleOptionFrame_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionTabWidgetFrame
	isSubclass bool
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
func newQStyleOptionTabWidgetFrame(h *C.QStyleOptionTabWidgetFrame, h_QStyleOption *C.QStyleOption) *QStyleOptionTabWidgetFrame {
	if h == nil {
		return nil
	}
	return &QStyleOptionTabWidgetFrame{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionTabWidgetFrame constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionTabWidgetFrame(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionTabWidgetFrame {
	if h == nil {
		return nil
	}

	return &QStyleOptionTabWidgetFrame{h: (*C.QStyleOptionTabWidgetFrame)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionTabWidgetFrame constructs a new QStyleOptionTabWidgetFrame object.
func NewQStyleOptionTabWidgetFrame() *QStyleOptionTabWidgetFrame {
	var outptr_QStyleOptionTabWidgetFrame *C.QStyleOptionTabWidgetFrame = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionTabWidgetFrame_new(&outptr_QStyleOptionTabWidgetFrame, &outptr_QStyleOption)
	ret := newQStyleOptionTabWidgetFrame(outptr_QStyleOptionTabWidgetFrame, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionTabWidgetFrame2 constructs a new QStyleOptionTabWidgetFrame object.
func NewQStyleOptionTabWidgetFrame2(other *QStyleOptionTabWidgetFrame) *QStyleOptionTabWidgetFrame {
	var outptr_QStyleOptionTabWidgetFrame *C.QStyleOptionTabWidgetFrame = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionTabWidgetFrame_new2(other.cPointer(), &outptr_QStyleOptionTabWidgetFrame, &outptr_QStyleOption)
	ret := newQStyleOptionTabWidgetFrame(outptr_QStyleOptionTabWidgetFrame, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionTabWidgetFrame) Delete() {
	C.QStyleOptionTabWidgetFrame_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionTabBarBase
	isSubclass bool
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
func newQStyleOptionTabBarBase(h *C.QStyleOptionTabBarBase, h_QStyleOption *C.QStyleOption) *QStyleOptionTabBarBase {
	if h == nil {
		return nil
	}
	return &QStyleOptionTabBarBase{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionTabBarBase constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionTabBarBase(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionTabBarBase {
	if h == nil {
		return nil
	}

	return &QStyleOptionTabBarBase{h: (*C.QStyleOptionTabBarBase)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionTabBarBase constructs a new QStyleOptionTabBarBase object.
func NewQStyleOptionTabBarBase() *QStyleOptionTabBarBase {
	var outptr_QStyleOptionTabBarBase *C.QStyleOptionTabBarBase = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionTabBarBase_new(&outptr_QStyleOptionTabBarBase, &outptr_QStyleOption)
	ret := newQStyleOptionTabBarBase(outptr_QStyleOptionTabBarBase, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionTabBarBase2 constructs a new QStyleOptionTabBarBase object.
func NewQStyleOptionTabBarBase2(other *QStyleOptionTabBarBase) *QStyleOptionTabBarBase {
	var outptr_QStyleOptionTabBarBase *C.QStyleOptionTabBarBase = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionTabBarBase_new2(other.cPointer(), &outptr_QStyleOptionTabBarBase, &outptr_QStyleOption)
	ret := newQStyleOptionTabBarBase(outptr_QStyleOptionTabBarBase, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionTabBarBase) Delete() {
	C.QStyleOptionTabBarBase_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionHeader
	isSubclass bool
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
func newQStyleOptionHeader(h *C.QStyleOptionHeader, h_QStyleOption *C.QStyleOption) *QStyleOptionHeader {
	if h == nil {
		return nil
	}
	return &QStyleOptionHeader{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionHeader constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionHeader(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionHeader {
	if h == nil {
		return nil
	}

	return &QStyleOptionHeader{h: (*C.QStyleOptionHeader)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionHeader constructs a new QStyleOptionHeader object.
func NewQStyleOptionHeader() *QStyleOptionHeader {
	var outptr_QStyleOptionHeader *C.QStyleOptionHeader = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionHeader_new(&outptr_QStyleOptionHeader, &outptr_QStyleOption)
	ret := newQStyleOptionHeader(outptr_QStyleOptionHeader, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionHeader2 constructs a new QStyleOptionHeader object.
func NewQStyleOptionHeader2(other *QStyleOptionHeader) *QStyleOptionHeader {
	var outptr_QStyleOptionHeader *C.QStyleOptionHeader = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionHeader_new2(other.cPointer(), &outptr_QStyleOptionHeader, &outptr_QStyleOption)
	ret := newQStyleOptionHeader(outptr_QStyleOptionHeader, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionHeader) Delete() {
	C.QStyleOptionHeader_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionHeader) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionHeader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionHeaderV2 struct {
	h          *C.QStyleOptionHeaderV2
	isSubclass bool
	*QStyleOptionHeader
}

func (this *QStyleOptionHeaderV2) cPointer() *C.QStyleOptionHeaderV2 {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyleOptionHeaderV2) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleOptionHeaderV2 constructs the type using only CGO pointers.
func newQStyleOptionHeaderV2(h *C.QStyleOptionHeaderV2, h_QStyleOptionHeader *C.QStyleOptionHeader, h_QStyleOption *C.QStyleOption) *QStyleOptionHeaderV2 {
	if h == nil {
		return nil
	}
	return &QStyleOptionHeaderV2{h: h,
		QStyleOptionHeader: newQStyleOptionHeader(h_QStyleOptionHeader, h_QStyleOption)}
}

// UnsafeNewQStyleOptionHeaderV2 constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionHeaderV2(h unsafe.Pointer, h_QStyleOptionHeader unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionHeaderV2 {
	if h == nil {
		return nil
	}

	return &QStyleOptionHeaderV2{h: (*C.QStyleOptionHeaderV2)(h),
		QStyleOptionHeader: UnsafeNewQStyleOptionHeader(h_QStyleOptionHeader, h_QStyleOption)}
}

// NewQStyleOptionHeaderV2 constructs a new QStyleOptionHeaderV2 object.
func NewQStyleOptionHeaderV2() *QStyleOptionHeaderV2 {
	var outptr_QStyleOptionHeaderV2 *C.QStyleOptionHeaderV2 = nil
	var outptr_QStyleOptionHeader *C.QStyleOptionHeader = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionHeaderV2_new(&outptr_QStyleOptionHeaderV2, &outptr_QStyleOptionHeader, &outptr_QStyleOption)
	ret := newQStyleOptionHeaderV2(outptr_QStyleOptionHeaderV2, outptr_QStyleOptionHeader, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionHeaderV22 constructs a new QStyleOptionHeaderV2 object.
func NewQStyleOptionHeaderV22(other *QStyleOptionHeaderV2) *QStyleOptionHeaderV2 {
	var outptr_QStyleOptionHeaderV2 *C.QStyleOptionHeaderV2 = nil
	var outptr_QStyleOptionHeader *C.QStyleOptionHeader = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionHeaderV2_new2(other.cPointer(), &outptr_QStyleOptionHeaderV2, &outptr_QStyleOptionHeader, &outptr_QStyleOption)
	ret := newQStyleOptionHeaderV2(outptr_QStyleOptionHeaderV2, outptr_QStyleOptionHeader, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionHeaderV2) Delete() {
	C.QStyleOptionHeaderV2_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionHeaderV2) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionHeaderV2) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionButton struct {
	h          *C.QStyleOptionButton
	isSubclass bool
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
func newQStyleOptionButton(h *C.QStyleOptionButton, h_QStyleOption *C.QStyleOption) *QStyleOptionButton {
	if h == nil {
		return nil
	}
	return &QStyleOptionButton{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionButton constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionButton(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionButton {
	if h == nil {
		return nil
	}

	return &QStyleOptionButton{h: (*C.QStyleOptionButton)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionButton constructs a new QStyleOptionButton object.
func NewQStyleOptionButton() *QStyleOptionButton {
	var outptr_QStyleOptionButton *C.QStyleOptionButton = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionButton_new(&outptr_QStyleOptionButton, &outptr_QStyleOption)
	ret := newQStyleOptionButton(outptr_QStyleOptionButton, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionButton2 constructs a new QStyleOptionButton object.
func NewQStyleOptionButton2(other *QStyleOptionButton) *QStyleOptionButton {
	var outptr_QStyleOptionButton *C.QStyleOptionButton = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionButton_new2(other.cPointer(), &outptr_QStyleOptionButton, &outptr_QStyleOption)
	ret := newQStyleOptionButton(outptr_QStyleOptionButton, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionButton) Delete() {
	C.QStyleOptionButton_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionTab
	isSubclass bool
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
func newQStyleOptionTab(h *C.QStyleOptionTab, h_QStyleOption *C.QStyleOption) *QStyleOptionTab {
	if h == nil {
		return nil
	}
	return &QStyleOptionTab{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionTab constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionTab(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionTab {
	if h == nil {
		return nil
	}

	return &QStyleOptionTab{h: (*C.QStyleOptionTab)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionTab constructs a new QStyleOptionTab object.
func NewQStyleOptionTab() *QStyleOptionTab {
	var outptr_QStyleOptionTab *C.QStyleOptionTab = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionTab_new(&outptr_QStyleOptionTab, &outptr_QStyleOption)
	ret := newQStyleOptionTab(outptr_QStyleOptionTab, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionTab2 constructs a new QStyleOptionTab object.
func NewQStyleOptionTab2(other *QStyleOptionTab) *QStyleOptionTab {
	var outptr_QStyleOptionTab *C.QStyleOptionTab = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionTab_new2(other.cPointer(), &outptr_QStyleOptionTab, &outptr_QStyleOption)
	ret := newQStyleOptionTab(outptr_QStyleOptionTab, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionTab) Delete() {
	C.QStyleOptionTab_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleOptionTab) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleOptionTab) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStyleOptionToolBar struct {
	h          *C.QStyleOptionToolBar
	isSubclass bool
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
func newQStyleOptionToolBar(h *C.QStyleOptionToolBar, h_QStyleOption *C.QStyleOption) *QStyleOptionToolBar {
	if h == nil {
		return nil
	}
	return &QStyleOptionToolBar{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionToolBar constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionToolBar(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionToolBar {
	if h == nil {
		return nil
	}

	return &QStyleOptionToolBar{h: (*C.QStyleOptionToolBar)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionToolBar constructs a new QStyleOptionToolBar object.
func NewQStyleOptionToolBar() *QStyleOptionToolBar {
	var outptr_QStyleOptionToolBar *C.QStyleOptionToolBar = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionToolBar_new(&outptr_QStyleOptionToolBar, &outptr_QStyleOption)
	ret := newQStyleOptionToolBar(outptr_QStyleOptionToolBar, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionToolBar2 constructs a new QStyleOptionToolBar object.
func NewQStyleOptionToolBar2(other *QStyleOptionToolBar) *QStyleOptionToolBar {
	var outptr_QStyleOptionToolBar *C.QStyleOptionToolBar = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionToolBar_new2(other.cPointer(), &outptr_QStyleOptionToolBar, &outptr_QStyleOption)
	ret := newQStyleOptionToolBar(outptr_QStyleOptionToolBar, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionToolBar) Delete() {
	C.QStyleOptionToolBar_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionProgressBar
	isSubclass bool
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
func newQStyleOptionProgressBar(h *C.QStyleOptionProgressBar, h_QStyleOption *C.QStyleOption) *QStyleOptionProgressBar {
	if h == nil {
		return nil
	}
	return &QStyleOptionProgressBar{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionProgressBar constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionProgressBar(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionProgressBar {
	if h == nil {
		return nil
	}

	return &QStyleOptionProgressBar{h: (*C.QStyleOptionProgressBar)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionProgressBar constructs a new QStyleOptionProgressBar object.
func NewQStyleOptionProgressBar() *QStyleOptionProgressBar {
	var outptr_QStyleOptionProgressBar *C.QStyleOptionProgressBar = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionProgressBar_new(&outptr_QStyleOptionProgressBar, &outptr_QStyleOption)
	ret := newQStyleOptionProgressBar(outptr_QStyleOptionProgressBar, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionProgressBar2 constructs a new QStyleOptionProgressBar object.
func NewQStyleOptionProgressBar2(other *QStyleOptionProgressBar) *QStyleOptionProgressBar {
	var outptr_QStyleOptionProgressBar *C.QStyleOptionProgressBar = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionProgressBar_new2(other.cPointer(), &outptr_QStyleOptionProgressBar, &outptr_QStyleOption)
	ret := newQStyleOptionProgressBar(outptr_QStyleOptionProgressBar, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionProgressBar) Delete() {
	C.QStyleOptionProgressBar_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionMenuItem
	isSubclass bool
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
func newQStyleOptionMenuItem(h *C.QStyleOptionMenuItem, h_QStyleOption *C.QStyleOption) *QStyleOptionMenuItem {
	if h == nil {
		return nil
	}
	return &QStyleOptionMenuItem{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionMenuItem constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionMenuItem(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionMenuItem {
	if h == nil {
		return nil
	}

	return &QStyleOptionMenuItem{h: (*C.QStyleOptionMenuItem)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionMenuItem constructs a new QStyleOptionMenuItem object.
func NewQStyleOptionMenuItem() *QStyleOptionMenuItem {
	var outptr_QStyleOptionMenuItem *C.QStyleOptionMenuItem = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionMenuItem_new(&outptr_QStyleOptionMenuItem, &outptr_QStyleOption)
	ret := newQStyleOptionMenuItem(outptr_QStyleOptionMenuItem, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionMenuItem2 constructs a new QStyleOptionMenuItem object.
func NewQStyleOptionMenuItem2(other *QStyleOptionMenuItem) *QStyleOptionMenuItem {
	var outptr_QStyleOptionMenuItem *C.QStyleOptionMenuItem = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionMenuItem_new2(other.cPointer(), &outptr_QStyleOptionMenuItem, &outptr_QStyleOption)
	ret := newQStyleOptionMenuItem(outptr_QStyleOptionMenuItem, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionMenuItem) Delete() {
	C.QStyleOptionMenuItem_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionDockWidget
	isSubclass bool
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
func newQStyleOptionDockWidget(h *C.QStyleOptionDockWidget, h_QStyleOption *C.QStyleOption) *QStyleOptionDockWidget {
	if h == nil {
		return nil
	}
	return &QStyleOptionDockWidget{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionDockWidget constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionDockWidget(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionDockWidget {
	if h == nil {
		return nil
	}

	return &QStyleOptionDockWidget{h: (*C.QStyleOptionDockWidget)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionDockWidget constructs a new QStyleOptionDockWidget object.
func NewQStyleOptionDockWidget() *QStyleOptionDockWidget {
	var outptr_QStyleOptionDockWidget *C.QStyleOptionDockWidget = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionDockWidget_new(&outptr_QStyleOptionDockWidget, &outptr_QStyleOption)
	ret := newQStyleOptionDockWidget(outptr_QStyleOptionDockWidget, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionDockWidget2 constructs a new QStyleOptionDockWidget object.
func NewQStyleOptionDockWidget2(other *QStyleOptionDockWidget) *QStyleOptionDockWidget {
	var outptr_QStyleOptionDockWidget *C.QStyleOptionDockWidget = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionDockWidget_new2(other.cPointer(), &outptr_QStyleOptionDockWidget, &outptr_QStyleOption)
	ret := newQStyleOptionDockWidget(outptr_QStyleOptionDockWidget, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionDockWidget) Delete() {
	C.QStyleOptionDockWidget_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionViewItem
	isSubclass bool
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
func newQStyleOptionViewItem(h *C.QStyleOptionViewItem, h_QStyleOption *C.QStyleOption) *QStyleOptionViewItem {
	if h == nil {
		return nil
	}
	return &QStyleOptionViewItem{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionViewItem constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionViewItem(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionViewItem {
	if h == nil {
		return nil
	}

	return &QStyleOptionViewItem{h: (*C.QStyleOptionViewItem)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionViewItem constructs a new QStyleOptionViewItem object.
func NewQStyleOptionViewItem() *QStyleOptionViewItem {
	var outptr_QStyleOptionViewItem *C.QStyleOptionViewItem = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionViewItem_new(&outptr_QStyleOptionViewItem, &outptr_QStyleOption)
	ret := newQStyleOptionViewItem(outptr_QStyleOptionViewItem, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionViewItem2 constructs a new QStyleOptionViewItem object.
func NewQStyleOptionViewItem2(other *QStyleOptionViewItem) *QStyleOptionViewItem {
	var outptr_QStyleOptionViewItem *C.QStyleOptionViewItem = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionViewItem_new2(other.cPointer(), &outptr_QStyleOptionViewItem, &outptr_QStyleOption)
	ret := newQStyleOptionViewItem(outptr_QStyleOptionViewItem, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionViewItem) Delete() {
	C.QStyleOptionViewItem_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionToolBox
	isSubclass bool
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
func newQStyleOptionToolBox(h *C.QStyleOptionToolBox, h_QStyleOption *C.QStyleOption) *QStyleOptionToolBox {
	if h == nil {
		return nil
	}
	return &QStyleOptionToolBox{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionToolBox constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionToolBox(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionToolBox {
	if h == nil {
		return nil
	}

	return &QStyleOptionToolBox{h: (*C.QStyleOptionToolBox)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionToolBox constructs a new QStyleOptionToolBox object.
func NewQStyleOptionToolBox() *QStyleOptionToolBox {
	var outptr_QStyleOptionToolBox *C.QStyleOptionToolBox = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionToolBox_new(&outptr_QStyleOptionToolBox, &outptr_QStyleOption)
	ret := newQStyleOptionToolBox(outptr_QStyleOptionToolBox, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionToolBox2 constructs a new QStyleOptionToolBox object.
func NewQStyleOptionToolBox2(other *QStyleOptionToolBox) *QStyleOptionToolBox {
	var outptr_QStyleOptionToolBox *C.QStyleOptionToolBox = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionToolBox_new2(other.cPointer(), &outptr_QStyleOptionToolBox, &outptr_QStyleOption)
	ret := newQStyleOptionToolBox(outptr_QStyleOptionToolBox, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionToolBox) Delete() {
	C.QStyleOptionToolBox_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionRubberBand
	isSubclass bool
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
func newQStyleOptionRubberBand(h *C.QStyleOptionRubberBand, h_QStyleOption *C.QStyleOption) *QStyleOptionRubberBand {
	if h == nil {
		return nil
	}
	return &QStyleOptionRubberBand{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionRubberBand constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionRubberBand(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionRubberBand {
	if h == nil {
		return nil
	}

	return &QStyleOptionRubberBand{h: (*C.QStyleOptionRubberBand)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionRubberBand constructs a new QStyleOptionRubberBand object.
func NewQStyleOptionRubberBand() *QStyleOptionRubberBand {
	var outptr_QStyleOptionRubberBand *C.QStyleOptionRubberBand = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionRubberBand_new(&outptr_QStyleOptionRubberBand, &outptr_QStyleOption)
	ret := newQStyleOptionRubberBand(outptr_QStyleOptionRubberBand, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionRubberBand2 constructs a new QStyleOptionRubberBand object.
func NewQStyleOptionRubberBand2(other *QStyleOptionRubberBand) *QStyleOptionRubberBand {
	var outptr_QStyleOptionRubberBand *C.QStyleOptionRubberBand = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionRubberBand_new2(other.cPointer(), &outptr_QStyleOptionRubberBand, &outptr_QStyleOption)
	ret := newQStyleOptionRubberBand(outptr_QStyleOptionRubberBand, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionRubberBand) Delete() {
	C.QStyleOptionRubberBand_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionComplex
	isSubclass bool
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
func newQStyleOptionComplex(h *C.QStyleOptionComplex, h_QStyleOption *C.QStyleOption) *QStyleOptionComplex {
	if h == nil {
		return nil
	}
	return &QStyleOptionComplex{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionComplex constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionComplex(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionComplex {
	if h == nil {
		return nil
	}

	return &QStyleOptionComplex{h: (*C.QStyleOptionComplex)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionComplex constructs a new QStyleOptionComplex object.
func NewQStyleOptionComplex() *QStyleOptionComplex {
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionComplex_new(&outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionComplex(outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionComplex2 constructs a new QStyleOptionComplex object.
func NewQStyleOptionComplex2(other *QStyleOptionComplex) *QStyleOptionComplex {
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionComplex_new2(other.cPointer(), &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionComplex(outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionComplex3 constructs a new QStyleOptionComplex object.
func NewQStyleOptionComplex3(version int) *QStyleOptionComplex {
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionComplex_new3((C.int)(version), &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionComplex(outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionComplex4 constructs a new QStyleOptionComplex object.
func NewQStyleOptionComplex4(version int, typeVal int) *QStyleOptionComplex {
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionComplex_new4((C.int)(version), (C.int)(typeVal), &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionComplex(outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionComplex) Delete() {
	C.QStyleOptionComplex_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionSlider
	isSubclass bool
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
func newQStyleOptionSlider(h *C.QStyleOptionSlider, h_QStyleOptionComplex *C.QStyleOptionComplex, h_QStyleOption *C.QStyleOption) *QStyleOptionSlider {
	if h == nil {
		return nil
	}
	return &QStyleOptionSlider{h: h,
		QStyleOptionComplex: newQStyleOptionComplex(h_QStyleOptionComplex, h_QStyleOption)}
}

// UnsafeNewQStyleOptionSlider constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionSlider(h unsafe.Pointer, h_QStyleOptionComplex unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionSlider {
	if h == nil {
		return nil
	}

	return &QStyleOptionSlider{h: (*C.QStyleOptionSlider)(h),
		QStyleOptionComplex: UnsafeNewQStyleOptionComplex(h_QStyleOptionComplex, h_QStyleOption)}
}

// NewQStyleOptionSlider constructs a new QStyleOptionSlider object.
func NewQStyleOptionSlider() *QStyleOptionSlider {
	var outptr_QStyleOptionSlider *C.QStyleOptionSlider = nil
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionSlider_new(&outptr_QStyleOptionSlider, &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionSlider(outptr_QStyleOptionSlider, outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionSlider2 constructs a new QStyleOptionSlider object.
func NewQStyleOptionSlider2(other *QStyleOptionSlider) *QStyleOptionSlider {
	var outptr_QStyleOptionSlider *C.QStyleOptionSlider = nil
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionSlider_new2(other.cPointer(), &outptr_QStyleOptionSlider, &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionSlider(outptr_QStyleOptionSlider, outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionSlider) Delete() {
	C.QStyleOptionSlider_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionSpinBox
	isSubclass bool
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
func newQStyleOptionSpinBox(h *C.QStyleOptionSpinBox, h_QStyleOptionComplex *C.QStyleOptionComplex, h_QStyleOption *C.QStyleOption) *QStyleOptionSpinBox {
	if h == nil {
		return nil
	}
	return &QStyleOptionSpinBox{h: h,
		QStyleOptionComplex: newQStyleOptionComplex(h_QStyleOptionComplex, h_QStyleOption)}
}

// UnsafeNewQStyleOptionSpinBox constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionSpinBox(h unsafe.Pointer, h_QStyleOptionComplex unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionSpinBox {
	if h == nil {
		return nil
	}

	return &QStyleOptionSpinBox{h: (*C.QStyleOptionSpinBox)(h),
		QStyleOptionComplex: UnsafeNewQStyleOptionComplex(h_QStyleOptionComplex, h_QStyleOption)}
}

// NewQStyleOptionSpinBox constructs a new QStyleOptionSpinBox object.
func NewQStyleOptionSpinBox() *QStyleOptionSpinBox {
	var outptr_QStyleOptionSpinBox *C.QStyleOptionSpinBox = nil
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionSpinBox_new(&outptr_QStyleOptionSpinBox, &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionSpinBox(outptr_QStyleOptionSpinBox, outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionSpinBox2 constructs a new QStyleOptionSpinBox object.
func NewQStyleOptionSpinBox2(other *QStyleOptionSpinBox) *QStyleOptionSpinBox {
	var outptr_QStyleOptionSpinBox *C.QStyleOptionSpinBox = nil
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionSpinBox_new2(other.cPointer(), &outptr_QStyleOptionSpinBox, &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionSpinBox(outptr_QStyleOptionSpinBox, outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionSpinBox) Delete() {
	C.QStyleOptionSpinBox_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionToolButton
	isSubclass bool
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
func newQStyleOptionToolButton(h *C.QStyleOptionToolButton, h_QStyleOptionComplex *C.QStyleOptionComplex, h_QStyleOption *C.QStyleOption) *QStyleOptionToolButton {
	if h == nil {
		return nil
	}
	return &QStyleOptionToolButton{h: h,
		QStyleOptionComplex: newQStyleOptionComplex(h_QStyleOptionComplex, h_QStyleOption)}
}

// UnsafeNewQStyleOptionToolButton constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionToolButton(h unsafe.Pointer, h_QStyleOptionComplex unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionToolButton {
	if h == nil {
		return nil
	}

	return &QStyleOptionToolButton{h: (*C.QStyleOptionToolButton)(h),
		QStyleOptionComplex: UnsafeNewQStyleOptionComplex(h_QStyleOptionComplex, h_QStyleOption)}
}

// NewQStyleOptionToolButton constructs a new QStyleOptionToolButton object.
func NewQStyleOptionToolButton() *QStyleOptionToolButton {
	var outptr_QStyleOptionToolButton *C.QStyleOptionToolButton = nil
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionToolButton_new(&outptr_QStyleOptionToolButton, &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionToolButton(outptr_QStyleOptionToolButton, outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionToolButton2 constructs a new QStyleOptionToolButton object.
func NewQStyleOptionToolButton2(other *QStyleOptionToolButton) *QStyleOptionToolButton {
	var outptr_QStyleOptionToolButton *C.QStyleOptionToolButton = nil
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionToolButton_new2(other.cPointer(), &outptr_QStyleOptionToolButton, &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionToolButton(outptr_QStyleOptionToolButton, outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionToolButton) Delete() {
	C.QStyleOptionToolButton_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionComboBox
	isSubclass bool
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
func newQStyleOptionComboBox(h *C.QStyleOptionComboBox, h_QStyleOptionComplex *C.QStyleOptionComplex, h_QStyleOption *C.QStyleOption) *QStyleOptionComboBox {
	if h == nil {
		return nil
	}
	return &QStyleOptionComboBox{h: h,
		QStyleOptionComplex: newQStyleOptionComplex(h_QStyleOptionComplex, h_QStyleOption)}
}

// UnsafeNewQStyleOptionComboBox constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionComboBox(h unsafe.Pointer, h_QStyleOptionComplex unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionComboBox {
	if h == nil {
		return nil
	}

	return &QStyleOptionComboBox{h: (*C.QStyleOptionComboBox)(h),
		QStyleOptionComplex: UnsafeNewQStyleOptionComplex(h_QStyleOptionComplex, h_QStyleOption)}
}

// NewQStyleOptionComboBox constructs a new QStyleOptionComboBox object.
func NewQStyleOptionComboBox() *QStyleOptionComboBox {
	var outptr_QStyleOptionComboBox *C.QStyleOptionComboBox = nil
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionComboBox_new(&outptr_QStyleOptionComboBox, &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionComboBox(outptr_QStyleOptionComboBox, outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionComboBox2 constructs a new QStyleOptionComboBox object.
func NewQStyleOptionComboBox2(other *QStyleOptionComboBox) *QStyleOptionComboBox {
	var outptr_QStyleOptionComboBox *C.QStyleOptionComboBox = nil
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionComboBox_new2(other.cPointer(), &outptr_QStyleOptionComboBox, &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionComboBox(outptr_QStyleOptionComboBox, outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionComboBox) Delete() {
	C.QStyleOptionComboBox_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionTitleBar
	isSubclass bool
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
func newQStyleOptionTitleBar(h *C.QStyleOptionTitleBar, h_QStyleOptionComplex *C.QStyleOptionComplex, h_QStyleOption *C.QStyleOption) *QStyleOptionTitleBar {
	if h == nil {
		return nil
	}
	return &QStyleOptionTitleBar{h: h,
		QStyleOptionComplex: newQStyleOptionComplex(h_QStyleOptionComplex, h_QStyleOption)}
}

// UnsafeNewQStyleOptionTitleBar constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionTitleBar(h unsafe.Pointer, h_QStyleOptionComplex unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionTitleBar {
	if h == nil {
		return nil
	}

	return &QStyleOptionTitleBar{h: (*C.QStyleOptionTitleBar)(h),
		QStyleOptionComplex: UnsafeNewQStyleOptionComplex(h_QStyleOptionComplex, h_QStyleOption)}
}

// NewQStyleOptionTitleBar constructs a new QStyleOptionTitleBar object.
func NewQStyleOptionTitleBar() *QStyleOptionTitleBar {
	var outptr_QStyleOptionTitleBar *C.QStyleOptionTitleBar = nil
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionTitleBar_new(&outptr_QStyleOptionTitleBar, &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionTitleBar(outptr_QStyleOptionTitleBar, outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionTitleBar2 constructs a new QStyleOptionTitleBar object.
func NewQStyleOptionTitleBar2(other *QStyleOptionTitleBar) *QStyleOptionTitleBar {
	var outptr_QStyleOptionTitleBar *C.QStyleOptionTitleBar = nil
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionTitleBar_new2(other.cPointer(), &outptr_QStyleOptionTitleBar, &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionTitleBar(outptr_QStyleOptionTitleBar, outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionTitleBar) Delete() {
	C.QStyleOptionTitleBar_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionGroupBox
	isSubclass bool
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
func newQStyleOptionGroupBox(h *C.QStyleOptionGroupBox, h_QStyleOptionComplex *C.QStyleOptionComplex, h_QStyleOption *C.QStyleOption) *QStyleOptionGroupBox {
	if h == nil {
		return nil
	}
	return &QStyleOptionGroupBox{h: h,
		QStyleOptionComplex: newQStyleOptionComplex(h_QStyleOptionComplex, h_QStyleOption)}
}

// UnsafeNewQStyleOptionGroupBox constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionGroupBox(h unsafe.Pointer, h_QStyleOptionComplex unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionGroupBox {
	if h == nil {
		return nil
	}

	return &QStyleOptionGroupBox{h: (*C.QStyleOptionGroupBox)(h),
		QStyleOptionComplex: UnsafeNewQStyleOptionComplex(h_QStyleOptionComplex, h_QStyleOption)}
}

// NewQStyleOptionGroupBox constructs a new QStyleOptionGroupBox object.
func NewQStyleOptionGroupBox() *QStyleOptionGroupBox {
	var outptr_QStyleOptionGroupBox *C.QStyleOptionGroupBox = nil
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionGroupBox_new(&outptr_QStyleOptionGroupBox, &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionGroupBox(outptr_QStyleOptionGroupBox, outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionGroupBox2 constructs a new QStyleOptionGroupBox object.
func NewQStyleOptionGroupBox2(other *QStyleOptionGroupBox) *QStyleOptionGroupBox {
	var outptr_QStyleOptionGroupBox *C.QStyleOptionGroupBox = nil
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionGroupBox_new2(other.cPointer(), &outptr_QStyleOptionGroupBox, &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionGroupBox(outptr_QStyleOptionGroupBox, outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionGroupBox) Delete() {
	C.QStyleOptionGroupBox_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionSizeGrip
	isSubclass bool
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
func newQStyleOptionSizeGrip(h *C.QStyleOptionSizeGrip, h_QStyleOptionComplex *C.QStyleOptionComplex, h_QStyleOption *C.QStyleOption) *QStyleOptionSizeGrip {
	if h == nil {
		return nil
	}
	return &QStyleOptionSizeGrip{h: h,
		QStyleOptionComplex: newQStyleOptionComplex(h_QStyleOptionComplex, h_QStyleOption)}
}

// UnsafeNewQStyleOptionSizeGrip constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionSizeGrip(h unsafe.Pointer, h_QStyleOptionComplex unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionSizeGrip {
	if h == nil {
		return nil
	}

	return &QStyleOptionSizeGrip{h: (*C.QStyleOptionSizeGrip)(h),
		QStyleOptionComplex: UnsafeNewQStyleOptionComplex(h_QStyleOptionComplex, h_QStyleOption)}
}

// NewQStyleOptionSizeGrip constructs a new QStyleOptionSizeGrip object.
func NewQStyleOptionSizeGrip() *QStyleOptionSizeGrip {
	var outptr_QStyleOptionSizeGrip *C.QStyleOptionSizeGrip = nil
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionSizeGrip_new(&outptr_QStyleOptionSizeGrip, &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionSizeGrip(outptr_QStyleOptionSizeGrip, outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionSizeGrip2 constructs a new QStyleOptionSizeGrip object.
func NewQStyleOptionSizeGrip2(other *QStyleOptionSizeGrip) *QStyleOptionSizeGrip {
	var outptr_QStyleOptionSizeGrip *C.QStyleOptionSizeGrip = nil
	var outptr_QStyleOptionComplex *C.QStyleOptionComplex = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionSizeGrip_new2(other.cPointer(), &outptr_QStyleOptionSizeGrip, &outptr_QStyleOptionComplex, &outptr_QStyleOption)
	ret := newQStyleOptionSizeGrip(outptr_QStyleOptionSizeGrip, outptr_QStyleOptionComplex, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *QStyleOptionSizeGrip) Delete() {
	C.QStyleOptionSizeGrip_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleOptionGraphicsItem
	isSubclass bool
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
func newQStyleOptionGraphicsItem(h *C.QStyleOptionGraphicsItem, h_QStyleOption *C.QStyleOption) *QStyleOptionGraphicsItem {
	if h == nil {
		return nil
	}
	return &QStyleOptionGraphicsItem{h: h,
		QStyleOption: newQStyleOption(h_QStyleOption)}
}

// UnsafeNewQStyleOptionGraphicsItem constructs the type using only unsafe pointers.
func UnsafeNewQStyleOptionGraphicsItem(h unsafe.Pointer, h_QStyleOption unsafe.Pointer) *QStyleOptionGraphicsItem {
	if h == nil {
		return nil
	}

	return &QStyleOptionGraphicsItem{h: (*C.QStyleOptionGraphicsItem)(h),
		QStyleOption: UnsafeNewQStyleOption(h_QStyleOption)}
}

// NewQStyleOptionGraphicsItem constructs a new QStyleOptionGraphicsItem object.
func NewQStyleOptionGraphicsItem() *QStyleOptionGraphicsItem {
	var outptr_QStyleOptionGraphicsItem *C.QStyleOptionGraphicsItem = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionGraphicsItem_new(&outptr_QStyleOptionGraphicsItem, &outptr_QStyleOption)
	ret := newQStyleOptionGraphicsItem(outptr_QStyleOptionGraphicsItem, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

// NewQStyleOptionGraphicsItem2 constructs a new QStyleOptionGraphicsItem object.
func NewQStyleOptionGraphicsItem2(other *QStyleOptionGraphicsItem) *QStyleOptionGraphicsItem {
	var outptr_QStyleOptionGraphicsItem *C.QStyleOptionGraphicsItem = nil
	var outptr_QStyleOption *C.QStyleOption = nil

	C.QStyleOptionGraphicsItem_new2(other.cPointer(), &outptr_QStyleOptionGraphicsItem, &outptr_QStyleOption)
	ret := newQStyleOptionGraphicsItem(outptr_QStyleOptionGraphicsItem, outptr_QStyleOption)
	ret.isSubclass = true
	return ret
}

func QStyleOptionGraphicsItem_LevelOfDetailFromTransform(worldTransform *QTransform) float64 {
	return (float64)(C.QStyleOptionGraphicsItem_LevelOfDetailFromTransform(worldTransform.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyleOptionGraphicsItem) Delete() {
	C.QStyleOptionGraphicsItem_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleHintReturn
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QStyleHintReturn{h: (*C.QStyleHintReturn)(h)}
}

// NewQStyleHintReturn constructs a new QStyleHintReturn object.
func NewQStyleHintReturn() *QStyleHintReturn {
	var outptr_QStyleHintReturn *C.QStyleHintReturn = nil

	C.QStyleHintReturn_new(&outptr_QStyleHintReturn)
	ret := newQStyleHintReturn(outptr_QStyleHintReturn)
	ret.isSubclass = true
	return ret
}

// NewQStyleHintReturn2 constructs a new QStyleHintReturn object.
func NewQStyleHintReturn2(param1 *QStyleHintReturn) *QStyleHintReturn {
	var outptr_QStyleHintReturn *C.QStyleHintReturn = nil

	C.QStyleHintReturn_new2(param1.cPointer(), &outptr_QStyleHintReturn)
	ret := newQStyleHintReturn(outptr_QStyleHintReturn)
	ret.isSubclass = true
	return ret
}

// NewQStyleHintReturn3 constructs a new QStyleHintReturn object.
func NewQStyleHintReturn3(version int) *QStyleHintReturn {
	var outptr_QStyleHintReturn *C.QStyleHintReturn = nil

	C.QStyleHintReturn_new3((C.int)(version), &outptr_QStyleHintReturn)
	ret := newQStyleHintReturn(outptr_QStyleHintReturn)
	ret.isSubclass = true
	return ret
}

// NewQStyleHintReturn4 constructs a new QStyleHintReturn object.
func NewQStyleHintReturn4(version int, typeVal int) *QStyleHintReturn {
	var outptr_QStyleHintReturn *C.QStyleHintReturn = nil

	C.QStyleHintReturn_new4((C.int)(version), (C.int)(typeVal), &outptr_QStyleHintReturn)
	ret := newQStyleHintReturn(outptr_QStyleHintReturn)
	ret.isSubclass = true
	return ret
}

func (this *QStyleHintReturn) OperatorAssign(param1 *QStyleHintReturn) {
	C.QStyleHintReturn_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleHintReturn) Delete() {
	C.QStyleHintReturn_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleHintReturnMask
	isSubclass bool
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
func newQStyleHintReturnMask(h *C.QStyleHintReturnMask, h_QStyleHintReturn *C.QStyleHintReturn) *QStyleHintReturnMask {
	if h == nil {
		return nil
	}
	return &QStyleHintReturnMask{h: h,
		QStyleHintReturn: newQStyleHintReturn(h_QStyleHintReturn)}
}

// UnsafeNewQStyleHintReturnMask constructs the type using only unsafe pointers.
func UnsafeNewQStyleHintReturnMask(h unsafe.Pointer, h_QStyleHintReturn unsafe.Pointer) *QStyleHintReturnMask {
	if h == nil {
		return nil
	}

	return &QStyleHintReturnMask{h: (*C.QStyleHintReturnMask)(h),
		QStyleHintReturn: UnsafeNewQStyleHintReturn(h_QStyleHintReturn)}
}

// NewQStyleHintReturnMask constructs a new QStyleHintReturnMask object.
func NewQStyleHintReturnMask() *QStyleHintReturnMask {
	var outptr_QStyleHintReturnMask *C.QStyleHintReturnMask = nil
	var outptr_QStyleHintReturn *C.QStyleHintReturn = nil

	C.QStyleHintReturnMask_new(&outptr_QStyleHintReturnMask, &outptr_QStyleHintReturn)
	ret := newQStyleHintReturnMask(outptr_QStyleHintReturnMask, outptr_QStyleHintReturn)
	ret.isSubclass = true
	return ret
}

// NewQStyleHintReturnMask2 constructs a new QStyleHintReturnMask object.
func NewQStyleHintReturnMask2(param1 *QStyleHintReturnMask) *QStyleHintReturnMask {
	var outptr_QStyleHintReturnMask *C.QStyleHintReturnMask = nil
	var outptr_QStyleHintReturn *C.QStyleHintReturn = nil

	C.QStyleHintReturnMask_new2(param1.cPointer(), &outptr_QStyleHintReturnMask, &outptr_QStyleHintReturn)
	ret := newQStyleHintReturnMask(outptr_QStyleHintReturnMask, outptr_QStyleHintReturn)
	ret.isSubclass = true
	return ret
}

func (this *QStyleHintReturnMask) OperatorAssign(param1 *QStyleHintReturnMask) {
	C.QStyleHintReturnMask_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleHintReturnMask) Delete() {
	C.QStyleHintReturnMask_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QStyleHintReturnVariant
	isSubclass bool
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
func newQStyleHintReturnVariant(h *C.QStyleHintReturnVariant, h_QStyleHintReturn *C.QStyleHintReturn) *QStyleHintReturnVariant {
	if h == nil {
		return nil
	}
	return &QStyleHintReturnVariant{h: h,
		QStyleHintReturn: newQStyleHintReturn(h_QStyleHintReturn)}
}

// UnsafeNewQStyleHintReturnVariant constructs the type using only unsafe pointers.
func UnsafeNewQStyleHintReturnVariant(h unsafe.Pointer, h_QStyleHintReturn unsafe.Pointer) *QStyleHintReturnVariant {
	if h == nil {
		return nil
	}

	return &QStyleHintReturnVariant{h: (*C.QStyleHintReturnVariant)(h),
		QStyleHintReturn: UnsafeNewQStyleHintReturn(h_QStyleHintReturn)}
}

// NewQStyleHintReturnVariant constructs a new QStyleHintReturnVariant object.
func NewQStyleHintReturnVariant() *QStyleHintReturnVariant {
	var outptr_QStyleHintReturnVariant *C.QStyleHintReturnVariant = nil
	var outptr_QStyleHintReturn *C.QStyleHintReturn = nil

	C.QStyleHintReturnVariant_new(&outptr_QStyleHintReturnVariant, &outptr_QStyleHintReturn)
	ret := newQStyleHintReturnVariant(outptr_QStyleHintReturnVariant, outptr_QStyleHintReturn)
	ret.isSubclass = true
	return ret
}

// NewQStyleHintReturnVariant2 constructs a new QStyleHintReturnVariant object.
func NewQStyleHintReturnVariant2(param1 *QStyleHintReturnVariant) *QStyleHintReturnVariant {
	var outptr_QStyleHintReturnVariant *C.QStyleHintReturnVariant = nil
	var outptr_QStyleHintReturn *C.QStyleHintReturn = nil

	C.QStyleHintReturnVariant_new2(param1.cPointer(), &outptr_QStyleHintReturnVariant, &outptr_QStyleHintReturn)
	ret := newQStyleHintReturnVariant(outptr_QStyleHintReturnVariant, outptr_QStyleHintReturn)
	ret.isSubclass = true
	return ret
}

func (this *QStyleHintReturnVariant) OperatorAssign(param1 *QStyleHintReturnVariant) {
	C.QStyleHintReturnVariant_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStyleHintReturnVariant) Delete() {
	C.QStyleHintReturnVariant_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleHintReturnVariant) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleHintReturnVariant) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
