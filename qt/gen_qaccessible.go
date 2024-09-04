package qt

/*

#include "gen_qaccessible.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAccessible__Event int

const (
	QAccessible__Event__SoundPlayed                     QAccessible__Event = 1
	QAccessible__Event__Alert                           QAccessible__Event = 2
	QAccessible__Event__ForegroundChanged               QAccessible__Event = 3
	QAccessible__Event__MenuStart                       QAccessible__Event = 4
	QAccessible__Event__MenuEnd                         QAccessible__Event = 5
	QAccessible__Event__PopupMenuStart                  QAccessible__Event = 6
	QAccessible__Event__PopupMenuEnd                    QAccessible__Event = 7
	QAccessible__Event__ContextHelpStart                QAccessible__Event = 12
	QAccessible__Event__ContextHelpEnd                  QAccessible__Event = 13
	QAccessible__Event__DragDropStart                   QAccessible__Event = 14
	QAccessible__Event__DragDropEnd                     QAccessible__Event = 15
	QAccessible__Event__DialogStart                     QAccessible__Event = 16
	QAccessible__Event__DialogEnd                       QAccessible__Event = 17
	QAccessible__Event__ScrollingStart                  QAccessible__Event = 18
	QAccessible__Event__ScrollingEnd                    QAccessible__Event = 19
	QAccessible__Event__MenuCommand                     QAccessible__Event = 24
	QAccessible__Event__ActionChanged                   QAccessible__Event = 257
	QAccessible__Event__ActiveDescendantChanged         QAccessible__Event = 258
	QAccessible__Event__AttributeChanged                QAccessible__Event = 259
	QAccessible__Event__DocumentContentChanged          QAccessible__Event = 260
	QAccessible__Event__DocumentLoadComplete            QAccessible__Event = 261
	QAccessible__Event__DocumentLoadStopped             QAccessible__Event = 262
	QAccessible__Event__DocumentReload                  QAccessible__Event = 263
	QAccessible__Event__HyperlinkEndIndexChanged        QAccessible__Event = 264
	QAccessible__Event__HyperlinkNumberOfAnchorsChanged QAccessible__Event = 265
	QAccessible__Event__HyperlinkSelectedLinkChanged    QAccessible__Event = 266
	QAccessible__Event__HypertextLinkActivated          QAccessible__Event = 267
	QAccessible__Event__HypertextLinkSelected           QAccessible__Event = 268
	QAccessible__Event__HyperlinkStartIndexChanged      QAccessible__Event = 269
	QAccessible__Event__HypertextChanged                QAccessible__Event = 270
	QAccessible__Event__HypertextNLinksChanged          QAccessible__Event = 271
	QAccessible__Event__ObjectAttributeChanged          QAccessible__Event = 272
	QAccessible__Event__PageChanged                     QAccessible__Event = 273
	QAccessible__Event__SectionChanged                  QAccessible__Event = 274
	QAccessible__Event__TableCaptionChanged             QAccessible__Event = 275
	QAccessible__Event__TableColumnDescriptionChanged   QAccessible__Event = 276
	QAccessible__Event__TableColumnHeaderChanged        QAccessible__Event = 277
	QAccessible__Event__TableModelChanged               QAccessible__Event = 278
	QAccessible__Event__TableRowDescriptionChanged      QAccessible__Event = 279
	QAccessible__Event__TableRowHeaderChanged           QAccessible__Event = 280
	QAccessible__Event__TableSummaryChanged             QAccessible__Event = 281
	QAccessible__Event__TextAttributeChanged            QAccessible__Event = 282
	QAccessible__Event__TextCaretMoved                  QAccessible__Event = 283
	QAccessible__Event__TextColumnChanged               QAccessible__Event = 285
	QAccessible__Event__TextInserted                    QAccessible__Event = 286
	QAccessible__Event__TextRemoved                     QAccessible__Event = 287
	QAccessible__Event__TextUpdated                     QAccessible__Event = 288
	QAccessible__Event__TextSelectionChanged            QAccessible__Event = 289
	QAccessible__Event__VisibleDataChanged              QAccessible__Event = 290
	QAccessible__Event__ObjectCreated                   QAccessible__Event = 32768
	QAccessible__Event__ObjectDestroyed                 QAccessible__Event = 32769
	QAccessible__Event__ObjectShow                      QAccessible__Event = 32770
	QAccessible__Event__ObjectHide                      QAccessible__Event = 32771
	QAccessible__Event__ObjectReorder                   QAccessible__Event = 32772
	QAccessible__Event__Focus                           QAccessible__Event = 32773
	QAccessible__Event__Selection                       QAccessible__Event = 32774
	QAccessible__Event__SelectionAdd                    QAccessible__Event = 32775
	QAccessible__Event__SelectionRemove                 QAccessible__Event = 32776
	QAccessible__Event__SelectionWithin                 QAccessible__Event = 32777
	QAccessible__Event__StateChanged                    QAccessible__Event = 32778
	QAccessible__Event__LocationChanged                 QAccessible__Event = 32779
	QAccessible__Event__NameChanged                     QAccessible__Event = 32780
	QAccessible__Event__DescriptionChanged              QAccessible__Event = 32781
	QAccessible__Event__ValueChanged                    QAccessible__Event = 32782
	QAccessible__Event__ParentChanged                   QAccessible__Event = 32783
	QAccessible__Event__HelpChanged                     QAccessible__Event = 32928
	QAccessible__Event__DefaultActionChanged            QAccessible__Event = 32944
	QAccessible__Event__AcceleratorChanged              QAccessible__Event = 32960
	QAccessible__Event__InvalidEvent                    QAccessible__Event = 32961
)

type QAccessible__Role int

const (
	QAccessible__Role__NoRole               QAccessible__Role = 0
	QAccessible__Role__TitleBar             QAccessible__Role = 1
	QAccessible__Role__MenuBar              QAccessible__Role = 2
	QAccessible__Role__ScrollBar            QAccessible__Role = 3
	QAccessible__Role__Grip                 QAccessible__Role = 4
	QAccessible__Role__Sound                QAccessible__Role = 5
	QAccessible__Role__Cursor               QAccessible__Role = 6
	QAccessible__Role__Caret                QAccessible__Role = 7
	QAccessible__Role__AlertMessage         QAccessible__Role = 8
	QAccessible__Role__Window               QAccessible__Role = 9
	QAccessible__Role__Client               QAccessible__Role = 10
	QAccessible__Role__PopupMenu            QAccessible__Role = 11
	QAccessible__Role__MenuItem             QAccessible__Role = 12
	QAccessible__Role__ToolTip              QAccessible__Role = 13
	QAccessible__Role__Application          QAccessible__Role = 14
	QAccessible__Role__Document             QAccessible__Role = 15
	QAccessible__Role__Pane                 QAccessible__Role = 16
	QAccessible__Role__Chart                QAccessible__Role = 17
	QAccessible__Role__Dialog               QAccessible__Role = 18
	QAccessible__Role__Border               QAccessible__Role = 19
	QAccessible__Role__Grouping             QAccessible__Role = 20
	QAccessible__Role__Separator            QAccessible__Role = 21
	QAccessible__Role__ToolBar              QAccessible__Role = 22
	QAccessible__Role__StatusBar            QAccessible__Role = 23
	QAccessible__Role__Table                QAccessible__Role = 24
	QAccessible__Role__ColumnHeader         QAccessible__Role = 25
	QAccessible__Role__RowHeader            QAccessible__Role = 26
	QAccessible__Role__Column               QAccessible__Role = 27
	QAccessible__Role__Row                  QAccessible__Role = 28
	QAccessible__Role__Cell                 QAccessible__Role = 29
	QAccessible__Role__Link                 QAccessible__Role = 30
	QAccessible__Role__HelpBalloon          QAccessible__Role = 31
	QAccessible__Role__Assistant            QAccessible__Role = 32
	QAccessible__Role__List                 QAccessible__Role = 33
	QAccessible__Role__ListItem             QAccessible__Role = 34
	QAccessible__Role__Tree                 QAccessible__Role = 35
	QAccessible__Role__TreeItem             QAccessible__Role = 36
	QAccessible__Role__PageTab              QAccessible__Role = 37
	QAccessible__Role__PropertyPage         QAccessible__Role = 38
	QAccessible__Role__Indicator            QAccessible__Role = 39
	QAccessible__Role__Graphic              QAccessible__Role = 40
	QAccessible__Role__StaticText           QAccessible__Role = 41
	QAccessible__Role__EditableText         QAccessible__Role = 42
	QAccessible__Role__Button               QAccessible__Role = 43
	QAccessible__Role__PushButton           QAccessible__Role = 43
	QAccessible__Role__CheckBox             QAccessible__Role = 44
	QAccessible__Role__RadioButton          QAccessible__Role = 45
	QAccessible__Role__ComboBox             QAccessible__Role = 46
	QAccessible__Role__ProgressBar          QAccessible__Role = 48
	QAccessible__Role__Dial                 QAccessible__Role = 49
	QAccessible__Role__HotkeyField          QAccessible__Role = 50
	QAccessible__Role__Slider               QAccessible__Role = 51
	QAccessible__Role__SpinBox              QAccessible__Role = 52
	QAccessible__Role__Canvas               QAccessible__Role = 53
	QAccessible__Role__Animation            QAccessible__Role = 54
	QAccessible__Role__Equation             QAccessible__Role = 55
	QAccessible__Role__ButtonDropDown       QAccessible__Role = 56
	QAccessible__Role__ButtonMenu           QAccessible__Role = 57
	QAccessible__Role__ButtonDropGrid       QAccessible__Role = 58
	QAccessible__Role__Whitespace           QAccessible__Role = 59
	QAccessible__Role__PageTabList          QAccessible__Role = 60
	QAccessible__Role__Clock                QAccessible__Role = 61
	QAccessible__Role__Splitter             QAccessible__Role = 62
	QAccessible__Role__LayeredPane          QAccessible__Role = 128
	QAccessible__Role__Terminal             QAccessible__Role = 129
	QAccessible__Role__Desktop              QAccessible__Role = 130
	QAccessible__Role__Paragraph            QAccessible__Role = 131
	QAccessible__Role__WebDocument          QAccessible__Role = 132
	QAccessible__Role__Section              QAccessible__Role = 133
	QAccessible__Role__Notification         QAccessible__Role = 134
	QAccessible__Role__ColorChooser         QAccessible__Role = 1028
	QAccessible__Role__Footer               QAccessible__Role = 1038
	QAccessible__Role__Form                 QAccessible__Role = 1040
	QAccessible__Role__Heading              QAccessible__Role = 1044
	QAccessible__Role__Note                 QAccessible__Role = 1051
	QAccessible__Role__ComplementaryContent QAccessible__Role = 1068
	QAccessible__Role__UserRole             QAccessible__Role = 65535
)

type QAccessible__Text int

const (
	QAccessible__Text__Name             QAccessible__Text = 0
	QAccessible__Text__Description      QAccessible__Text = 1
	QAccessible__Text__Value            QAccessible__Text = 2
	QAccessible__Text__Help             QAccessible__Text = 3
	QAccessible__Text__Accelerator      QAccessible__Text = 4
	QAccessible__Text__DebugDescription QAccessible__Text = 5
	QAccessible__Text__UserText         QAccessible__Text = 65535
)

type QAccessible__RelationFlag int

const (
	QAccessible__RelationFlag__Label        QAccessible__RelationFlag = 1
	QAccessible__RelationFlag__Labelled     QAccessible__RelationFlag = 2
	QAccessible__RelationFlag__Controller   QAccessible__RelationFlag = 4
	QAccessible__RelationFlag__Controlled   QAccessible__RelationFlag = 8
	QAccessible__RelationFlag__AllRelations QAccessible__RelationFlag = 4294967295
)

type QAccessible__InterfaceType int

const (
	QAccessible__InterfaceType__TextInterface         QAccessible__InterfaceType = 0
	QAccessible__InterfaceType__EditableTextInterface QAccessible__InterfaceType = 1
	QAccessible__InterfaceType__ValueInterface        QAccessible__InterfaceType = 2
	QAccessible__InterfaceType__ActionInterface       QAccessible__InterfaceType = 3
	QAccessible__InterfaceType__ImageInterface        QAccessible__InterfaceType = 4
	QAccessible__InterfaceType__TableInterface        QAccessible__InterfaceType = 5
	QAccessible__InterfaceType__TableCellInterface    QAccessible__InterfaceType = 6
)

type QAccessible__TextBoundaryType int

const (
	QAccessible__TextBoundaryType__CharBoundary      QAccessible__TextBoundaryType = 0
	QAccessible__TextBoundaryType__WordBoundary      QAccessible__TextBoundaryType = 1
	QAccessible__TextBoundaryType__SentenceBoundary  QAccessible__TextBoundaryType = 2
	QAccessible__TextBoundaryType__ParagraphBoundary QAccessible__TextBoundaryType = 3
	QAccessible__TextBoundaryType__LineBoundary      QAccessible__TextBoundaryType = 4
	QAccessible__TextBoundaryType__NoBoundary        QAccessible__TextBoundaryType = 5
)

type QAccessibleTableModelChangeEvent__ModelChangeType int

const (
	QAccessibleTableModelChangeEvent__ModelChangeType__ModelReset      QAccessibleTableModelChangeEvent__ModelChangeType = 0
	QAccessibleTableModelChangeEvent__ModelChangeType__DataChanged     QAccessibleTableModelChangeEvent__ModelChangeType = 1
	QAccessibleTableModelChangeEvent__ModelChangeType__RowsInserted    QAccessibleTableModelChangeEvent__ModelChangeType = 2
	QAccessibleTableModelChangeEvent__ModelChangeType__ColumnsInserted QAccessibleTableModelChangeEvent__ModelChangeType = 3
	QAccessibleTableModelChangeEvent__ModelChangeType__RowsRemoved     QAccessibleTableModelChangeEvent__ModelChangeType = 4
	QAccessibleTableModelChangeEvent__ModelChangeType__ColumnsRemoved  QAccessibleTableModelChangeEvent__ModelChangeType = 5
)

type QAccessible struct {
	h *C.QAccessible
}

func (this *QAccessible) cPointer() *C.QAccessible {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessible(h *C.QAccessible) *QAccessible {
	if h == nil {
		return nil
	}
	return &QAccessible{h: h}
}

func newQAccessible_U(h unsafe.Pointer) *QAccessible {
	return newQAccessible((*C.QAccessible)(h))
}

func QAccessible_InstallActivationObserver(param1 *QAccessible__ActivationObserver) {
	C.QAccessible_InstallActivationObserver(param1.cPointer())
}

func QAccessible_RemoveActivationObserver(param1 *QAccessible__ActivationObserver) {
	C.QAccessible_RemoveActivationObserver(param1.cPointer())
}

func QAccessible_QueryAccessibleInterface(param1 *QObject) *QAccessibleInterface {
	ret := C.QAccessible_QueryAccessibleInterface(param1.cPointer())
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func QAccessible_UniqueId(iface *QAccessibleInterface) uint {
	ret := C.QAccessible_UniqueId(iface.cPointer())
	return (uint)(ret)
}

func QAccessible_AccessibleInterface(uniqueId uint) *QAccessibleInterface {
	ret := C.QAccessible_AccessibleInterface((C.uint)(uniqueId))
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func QAccessible_RegisterAccessibleInterface(iface *QAccessibleInterface) uint {
	ret := C.QAccessible_RegisterAccessibleInterface(iface.cPointer())
	return (uint)(ret)
}

func QAccessible_DeleteAccessibleInterface(uniqueId uint) {
	C.QAccessible_DeleteAccessibleInterface((C.uint)(uniqueId))
}

func QAccessible_UpdateAccessibility(event *QAccessibleEvent) {
	C.QAccessible_UpdateAccessibility(event.cPointer())
}

func QAccessible_IsActive() bool {
	ret := C.QAccessible_IsActive()
	return (bool)(ret)
}

func QAccessible_SetActive(active bool) {
	C.QAccessible_SetActive((C.bool)(active))
}

func QAccessible_SetRootObject(object *QObject) {
	C.QAccessible_SetRootObject(object.cPointer())
}

func QAccessible_Cleanup() {
	C.QAccessible_Cleanup()
}

func (this *QAccessible) Delete() {
	C.QAccessible_Delete(this.h)
}

type QAccessibleInterface struct {
	h *C.QAccessibleInterface
}

func (this *QAccessibleInterface) cPointer() *C.QAccessibleInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleInterface(h *C.QAccessibleInterface) *QAccessibleInterface {
	if h == nil {
		return nil
	}
	return &QAccessibleInterface{h: h}
}

func newQAccessibleInterface_U(h unsafe.Pointer) *QAccessibleInterface {
	return newQAccessibleInterface((*C.QAccessibleInterface)(h))
}

func (this *QAccessibleInterface) IsValid() bool {
	ret := C.QAccessibleInterface_IsValid(this.h)
	return (bool)(ret)
}

func (this *QAccessibleInterface) Object() *QObject {
	ret := C.QAccessibleInterface_Object(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QAccessibleInterface) Window() *QWindow {
	ret := C.QAccessibleInterface_Window(this.h)
	return newQWindow_U(unsafe.Pointer(ret))
}

func (this *QAccessibleInterface) FocusChild() *QAccessibleInterface {
	ret := C.QAccessibleInterface_FocusChild(this.h)
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleInterface) ChildAt(x int, y int) *QAccessibleInterface {
	ret := C.QAccessibleInterface_ChildAt(this.h, (C.int)(x), (C.int)(y))
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleInterface) Parent() *QAccessibleInterface {
	ret := C.QAccessibleInterface_Parent(this.h)
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleInterface) Child(index int) *QAccessibleInterface {
	ret := C.QAccessibleInterface_Child(this.h, (C.int)(index))
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleInterface) ChildCount() int {
	ret := C.QAccessibleInterface_ChildCount(this.h)
	return (int)(ret)
}

func (this *QAccessibleInterface) IndexOfChild(param1 *QAccessibleInterface) int {
	ret := C.QAccessibleInterface_IndexOfChild(this.h, param1.cPointer())
	return (int)(ret)
}

func (this *QAccessibleInterface) Text(t QAccessible__Text) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleInterface_Text(this.h, (C.uintptr_t)(t), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleInterface) SetText(t QAccessible__Text, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QAccessibleInterface_SetText(this.h, (C.uintptr_t)(t), text_Cstring, C.size_t(len(text)))
}

func (this *QAccessibleInterface) Rect() *QRect {
	ret := C.QAccessibleInterface_Rect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleInterface) Role() QAccessible__Role {
	ret := C.QAccessibleInterface_Role(this.h)
	return (QAccessible__Role)(ret)
}

func (this *QAccessibleInterface) State() *QAccessible__State {
	ret := C.QAccessibleInterface_State(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQAccessible__State(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QAccessible__State) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleInterface) ForegroundColor() *QColor {
	ret := C.QAccessibleInterface_ForegroundColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleInterface) BackgroundColor() *QColor {
	ret := C.QAccessibleInterface_BackgroundColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleInterface) TextInterface() *QAccessibleTextInterface {
	ret := C.QAccessibleInterface_TextInterface(this.h)
	return newQAccessibleTextInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleInterface) EditableTextInterface() *QAccessibleEditableTextInterface {
	ret := C.QAccessibleInterface_EditableTextInterface(this.h)
	return newQAccessibleEditableTextInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleInterface) ValueInterface() *QAccessibleValueInterface {
	ret := C.QAccessibleInterface_ValueInterface(this.h)
	return newQAccessibleValueInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleInterface) ActionInterface() *QAccessibleActionInterface {
	ret := C.QAccessibleInterface_ActionInterface(this.h)
	return newQAccessibleActionInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleInterface) ImageInterface() *QAccessibleImageInterface {
	ret := C.QAccessibleInterface_ImageInterface(this.h)
	return newQAccessibleImageInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleInterface) TableInterface() *QAccessibleTableInterface {
	ret := C.QAccessibleInterface_TableInterface(this.h)
	return newQAccessibleTableInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleInterface) TableCellInterface() *QAccessibleTableCellInterface {
	ret := C.QAccessibleInterface_TableCellInterface(this.h)
	return newQAccessibleTableCellInterface_U(unsafe.Pointer(ret))
}

type QAccessibleTextInterface struct {
	h *C.QAccessibleTextInterface
}

func (this *QAccessibleTextInterface) cPointer() *C.QAccessibleTextInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleTextInterface(h *C.QAccessibleTextInterface) *QAccessibleTextInterface {
	if h == nil {
		return nil
	}
	return &QAccessibleTextInterface{h: h}
}

func newQAccessibleTextInterface_U(h unsafe.Pointer) *QAccessibleTextInterface {
	return newQAccessibleTextInterface((*C.QAccessibleTextInterface)(h))
}

func (this *QAccessibleTextInterface) Selection(selectionIndex int, startOffset *int, endOffset *int) {
	C.QAccessibleTextInterface_Selection(this.h, (C.int)(selectionIndex), (*C.int)(unsafe.Pointer(startOffset)), (*C.int)(unsafe.Pointer(endOffset)))
}

func (this *QAccessibleTextInterface) SelectionCount() int {
	ret := C.QAccessibleTextInterface_SelectionCount(this.h)
	return (int)(ret)
}

func (this *QAccessibleTextInterface) AddSelection(startOffset int, endOffset int) {
	C.QAccessibleTextInterface_AddSelection(this.h, (C.int)(startOffset), (C.int)(endOffset))
}

func (this *QAccessibleTextInterface) RemoveSelection(selectionIndex int) {
	C.QAccessibleTextInterface_RemoveSelection(this.h, (C.int)(selectionIndex))
}

func (this *QAccessibleTextInterface) SetSelection(selectionIndex int, startOffset int, endOffset int) {
	C.QAccessibleTextInterface_SetSelection(this.h, (C.int)(selectionIndex), (C.int)(startOffset), (C.int)(endOffset))
}

func (this *QAccessibleTextInterface) CursorPosition() int {
	ret := C.QAccessibleTextInterface_CursorPosition(this.h)
	return (int)(ret)
}

func (this *QAccessibleTextInterface) SetCursorPosition(position int) {
	C.QAccessibleTextInterface_SetCursorPosition(this.h, (C.int)(position))
}

func (this *QAccessibleTextInterface) Text(startOffset int, endOffset int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleTextInterface_Text(this.h, (C.int)(startOffset), (C.int)(endOffset), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTextInterface) TextBeforeOffset(offset int, boundaryType QAccessible__TextBoundaryType, startOffset *int, endOffset *int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleTextInterface_TextBeforeOffset(this.h, (C.int)(offset), (C.uintptr_t)(boundaryType), (*C.int)(unsafe.Pointer(startOffset)), (*C.int)(unsafe.Pointer(endOffset)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTextInterface) TextAfterOffset(offset int, boundaryType QAccessible__TextBoundaryType, startOffset *int, endOffset *int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleTextInterface_TextAfterOffset(this.h, (C.int)(offset), (C.uintptr_t)(boundaryType), (*C.int)(unsafe.Pointer(startOffset)), (*C.int)(unsafe.Pointer(endOffset)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTextInterface) TextAtOffset(offset int, boundaryType QAccessible__TextBoundaryType, startOffset *int, endOffset *int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleTextInterface_TextAtOffset(this.h, (C.int)(offset), (C.uintptr_t)(boundaryType), (*C.int)(unsafe.Pointer(startOffset)), (*C.int)(unsafe.Pointer(endOffset)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTextInterface) CharacterCount() int {
	ret := C.QAccessibleTextInterface_CharacterCount(this.h)
	return (int)(ret)
}

func (this *QAccessibleTextInterface) CharacterRect(offset int) *QRect {
	ret := C.QAccessibleTextInterface_CharacterRect(this.h, (C.int)(offset))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleTextInterface) OffsetAtPoint(point *QPoint) int {
	ret := C.QAccessibleTextInterface_OffsetAtPoint(this.h, point.cPointer())
	return (int)(ret)
}

func (this *QAccessibleTextInterface) ScrollToSubstring(startIndex int, endIndex int) {
	C.QAccessibleTextInterface_ScrollToSubstring(this.h, (C.int)(startIndex), (C.int)(endIndex))
}

func (this *QAccessibleTextInterface) Attributes(offset int, startOffset *int, endOffset *int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleTextInterface_Attributes(this.h, (C.int)(offset), (*C.int)(unsafe.Pointer(startOffset)), (*C.int)(unsafe.Pointer(endOffset)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTextInterface) OperatorAssign(param1 *QAccessibleTextInterface) {
	C.QAccessibleTextInterface_OperatorAssign(this.h, param1.cPointer())
}

func (this *QAccessibleTextInterface) Delete() {
	C.QAccessibleTextInterface_Delete(this.h)
}

type QAccessibleEditableTextInterface struct {
	h *C.QAccessibleEditableTextInterface
}

func (this *QAccessibleEditableTextInterface) cPointer() *C.QAccessibleEditableTextInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleEditableTextInterface(h *C.QAccessibleEditableTextInterface) *QAccessibleEditableTextInterface {
	if h == nil {
		return nil
	}
	return &QAccessibleEditableTextInterface{h: h}
}

func newQAccessibleEditableTextInterface_U(h unsafe.Pointer) *QAccessibleEditableTextInterface {
	return newQAccessibleEditableTextInterface((*C.QAccessibleEditableTextInterface)(h))
}

func (this *QAccessibleEditableTextInterface) DeleteText(startOffset int, endOffset int) {
	C.QAccessibleEditableTextInterface_DeleteText(this.h, (C.int)(startOffset), (C.int)(endOffset))
}

func (this *QAccessibleEditableTextInterface) InsertText(offset int, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QAccessibleEditableTextInterface_InsertText(this.h, (C.int)(offset), text_Cstring, C.size_t(len(text)))
}

func (this *QAccessibleEditableTextInterface) ReplaceText(startOffset int, endOffset int, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QAccessibleEditableTextInterface_ReplaceText(this.h, (C.int)(startOffset), (C.int)(endOffset), text_Cstring, C.size_t(len(text)))
}

func (this *QAccessibleEditableTextInterface) OperatorAssign(param1 *QAccessibleEditableTextInterface) {
	C.QAccessibleEditableTextInterface_OperatorAssign(this.h, param1.cPointer())
}

func (this *QAccessibleEditableTextInterface) Delete() {
	C.QAccessibleEditableTextInterface_Delete(this.h)
}

type QAccessibleValueInterface struct {
	h *C.QAccessibleValueInterface
}

func (this *QAccessibleValueInterface) cPointer() *C.QAccessibleValueInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleValueInterface(h *C.QAccessibleValueInterface) *QAccessibleValueInterface {
	if h == nil {
		return nil
	}
	return &QAccessibleValueInterface{h: h}
}

func newQAccessibleValueInterface_U(h unsafe.Pointer) *QAccessibleValueInterface {
	return newQAccessibleValueInterface((*C.QAccessibleValueInterface)(h))
}

func (this *QAccessibleValueInterface) CurrentValue() *QVariant {
	ret := C.QAccessibleValueInterface_CurrentValue(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleValueInterface) SetCurrentValue(value *QVariant) {
	C.QAccessibleValueInterface_SetCurrentValue(this.h, value.cPointer())
}

func (this *QAccessibleValueInterface) MaximumValue() *QVariant {
	ret := C.QAccessibleValueInterface_MaximumValue(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleValueInterface) MinimumValue() *QVariant {
	ret := C.QAccessibleValueInterface_MinimumValue(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleValueInterface) MinimumStepSize() *QVariant {
	ret := C.QAccessibleValueInterface_MinimumStepSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleValueInterface) OperatorAssign(param1 *QAccessibleValueInterface) {
	C.QAccessibleValueInterface_OperatorAssign(this.h, param1.cPointer())
}

func (this *QAccessibleValueInterface) Delete() {
	C.QAccessibleValueInterface_Delete(this.h)
}

type QAccessibleTableCellInterface struct {
	h *C.QAccessibleTableCellInterface
}

func (this *QAccessibleTableCellInterface) cPointer() *C.QAccessibleTableCellInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleTableCellInterface(h *C.QAccessibleTableCellInterface) *QAccessibleTableCellInterface {
	if h == nil {
		return nil
	}
	return &QAccessibleTableCellInterface{h: h}
}

func newQAccessibleTableCellInterface_U(h unsafe.Pointer) *QAccessibleTableCellInterface {
	return newQAccessibleTableCellInterface((*C.QAccessibleTableCellInterface)(h))
}

func (this *QAccessibleTableCellInterface) IsSelected() bool {
	ret := C.QAccessibleTableCellInterface_IsSelected(this.h)
	return (bool)(ret)
}

func (this *QAccessibleTableCellInterface) ColumnHeaderCells() []*QAccessibleInterface {
	var _out **C.QAccessibleInterface = nil
	var _out_len C.size_t = 0
	C.QAccessibleTableCellInterface_ColumnHeaderCells(this.h, &_out, &_out_len)
	ret := make([]*QAccessibleInterface, int(_out_len))
	_outCast := (*[0xffff]*C.QAccessibleInterface)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQAccessibleInterface(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTableCellInterface) RowHeaderCells() []*QAccessibleInterface {
	var _out **C.QAccessibleInterface = nil
	var _out_len C.size_t = 0
	C.QAccessibleTableCellInterface_RowHeaderCells(this.h, &_out, &_out_len)
	ret := make([]*QAccessibleInterface, int(_out_len))
	_outCast := (*[0xffff]*C.QAccessibleInterface)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQAccessibleInterface(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTableCellInterface) ColumnIndex() int {
	ret := C.QAccessibleTableCellInterface_ColumnIndex(this.h)
	return (int)(ret)
}

func (this *QAccessibleTableCellInterface) RowIndex() int {
	ret := C.QAccessibleTableCellInterface_RowIndex(this.h)
	return (int)(ret)
}

func (this *QAccessibleTableCellInterface) ColumnExtent() int {
	ret := C.QAccessibleTableCellInterface_ColumnExtent(this.h)
	return (int)(ret)
}

func (this *QAccessibleTableCellInterface) RowExtent() int {
	ret := C.QAccessibleTableCellInterface_RowExtent(this.h)
	return (int)(ret)
}

func (this *QAccessibleTableCellInterface) Table() *QAccessibleInterface {
	ret := C.QAccessibleTableCellInterface_Table(this.h)
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleTableCellInterface) OperatorAssign(param1 *QAccessibleTableCellInterface) {
	C.QAccessibleTableCellInterface_OperatorAssign(this.h, param1.cPointer())
}

func (this *QAccessibleTableCellInterface) Delete() {
	C.QAccessibleTableCellInterface_Delete(this.h)
}

type QAccessibleTableInterface struct {
	h *C.QAccessibleTableInterface
}

func (this *QAccessibleTableInterface) cPointer() *C.QAccessibleTableInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleTableInterface(h *C.QAccessibleTableInterface) *QAccessibleTableInterface {
	if h == nil {
		return nil
	}
	return &QAccessibleTableInterface{h: h}
}

func newQAccessibleTableInterface_U(h unsafe.Pointer) *QAccessibleTableInterface {
	return newQAccessibleTableInterface((*C.QAccessibleTableInterface)(h))
}

func (this *QAccessibleTableInterface) Caption() *QAccessibleInterface {
	ret := C.QAccessibleTableInterface_Caption(this.h)
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleTableInterface) Summary() *QAccessibleInterface {
	ret := C.QAccessibleTableInterface_Summary(this.h)
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleTableInterface) CellAt(row int, column int) *QAccessibleInterface {
	ret := C.QAccessibleTableInterface_CellAt(this.h, (C.int)(row), (C.int)(column))
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleTableInterface) SelectedCellCount() int {
	ret := C.QAccessibleTableInterface_SelectedCellCount(this.h)
	return (int)(ret)
}

func (this *QAccessibleTableInterface) SelectedCells() []*QAccessibleInterface {
	var _out **C.QAccessibleInterface = nil
	var _out_len C.size_t = 0
	C.QAccessibleTableInterface_SelectedCells(this.h, &_out, &_out_len)
	ret := make([]*QAccessibleInterface, int(_out_len))
	_outCast := (*[0xffff]*C.QAccessibleInterface)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQAccessibleInterface(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTableInterface) ColumnDescription(column int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleTableInterface_ColumnDescription(this.h, (C.int)(column), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTableInterface) RowDescription(row int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleTableInterface_RowDescription(this.h, (C.int)(row), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTableInterface) SelectedColumnCount() int {
	ret := C.QAccessibleTableInterface_SelectedColumnCount(this.h)
	return (int)(ret)
}

func (this *QAccessibleTableInterface) SelectedRowCount() int {
	ret := C.QAccessibleTableInterface_SelectedRowCount(this.h)
	return (int)(ret)
}

func (this *QAccessibleTableInterface) ColumnCount() int {
	ret := C.QAccessibleTableInterface_ColumnCount(this.h)
	return (int)(ret)
}

func (this *QAccessibleTableInterface) RowCount() int {
	ret := C.QAccessibleTableInterface_RowCount(this.h)
	return (int)(ret)
}

func (this *QAccessibleTableInterface) SelectedColumns() []int {
	var _out *C.int = nil
	var _out_len C.size_t = 0
	C.QAccessibleTableInterface_SelectedColumns(this.h, &_out, &_out_len)
	ret := make([]int, int(_out_len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTableInterface) SelectedRows() []int {
	var _out *C.int = nil
	var _out_len C.size_t = 0
	C.QAccessibleTableInterface_SelectedRows(this.h, &_out, &_out_len)
	ret := make([]int, int(_out_len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTableInterface) IsColumnSelected(column int) bool {
	ret := C.QAccessibleTableInterface_IsColumnSelected(this.h, (C.int)(column))
	return (bool)(ret)
}

func (this *QAccessibleTableInterface) IsRowSelected(row int) bool {
	ret := C.QAccessibleTableInterface_IsRowSelected(this.h, (C.int)(row))
	return (bool)(ret)
}

func (this *QAccessibleTableInterface) SelectRow(row int) bool {
	ret := C.QAccessibleTableInterface_SelectRow(this.h, (C.int)(row))
	return (bool)(ret)
}

func (this *QAccessibleTableInterface) SelectColumn(column int) bool {
	ret := C.QAccessibleTableInterface_SelectColumn(this.h, (C.int)(column))
	return (bool)(ret)
}

func (this *QAccessibleTableInterface) UnselectRow(row int) bool {
	ret := C.QAccessibleTableInterface_UnselectRow(this.h, (C.int)(row))
	return (bool)(ret)
}

func (this *QAccessibleTableInterface) UnselectColumn(column int) bool {
	ret := C.QAccessibleTableInterface_UnselectColumn(this.h, (C.int)(column))
	return (bool)(ret)
}

func (this *QAccessibleTableInterface) ModelChange(event *QAccessibleTableModelChangeEvent) {
	C.QAccessibleTableInterface_ModelChange(this.h, event.cPointer())
}

func (this *QAccessibleTableInterface) Delete() {
	C.QAccessibleTableInterface_Delete(this.h)
}

type QAccessibleActionInterface struct {
	h *C.QAccessibleActionInterface
}

func (this *QAccessibleActionInterface) cPointer() *C.QAccessibleActionInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleActionInterface(h *C.QAccessibleActionInterface) *QAccessibleActionInterface {
	if h == nil {
		return nil
	}
	return &QAccessibleActionInterface{h: h}
}

func newQAccessibleActionInterface_U(h unsafe.Pointer) *QAccessibleActionInterface {
	return newQAccessibleActionInterface((*C.QAccessibleActionInterface)(h))
}

func QAccessibleActionInterface_Tr(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_Tr(sourceText_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_TrUtf8(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_TrUtf8(sourceText_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleActionInterface) ActionNames() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QAccessibleActionInterface_ActionNames(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleActionInterface) LocalizedActionName(name string) string {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_LocalizedActionName(this.h, name_Cstring, C.size_t(len(name)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleActionInterface) LocalizedActionDescription(name string) string {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_LocalizedActionDescription(this.h, name_Cstring, C.size_t(len(name)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleActionInterface) DoAction(actionName string) {
	actionName_Cstring := C.CString(actionName)
	defer C.free(unsafe.Pointer(actionName_Cstring))
	C.QAccessibleActionInterface_DoAction(this.h, actionName_Cstring, C.size_t(len(actionName)))
}

func (this *QAccessibleActionInterface) KeyBindingsForAction(actionName string) []string {
	actionName_Cstring := C.CString(actionName)
	defer C.free(unsafe.Pointer(actionName_Cstring))
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QAccessibleActionInterface_KeyBindingsForAction(this.h, actionName_Cstring, C.size_t(len(actionName)), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_PressAction() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_PressAction(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_IncreaseAction() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_IncreaseAction(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_DecreaseAction() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_DecreaseAction(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_ShowMenuAction() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_ShowMenuAction(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_SetFocusAction() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_SetFocusAction(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_ToggleAction() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_ToggleAction(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_ScrollLeftAction() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_ScrollLeftAction(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_ScrollRightAction() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_ScrollRightAction(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_ScrollUpAction() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_ScrollUpAction(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_ScrollDownAction() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_ScrollDownAction(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_NextPageAction() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_NextPageAction(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_PreviousPageAction() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_PreviousPageAction(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleActionInterface) OperatorAssign(param1 *QAccessibleActionInterface) {
	C.QAccessibleActionInterface_OperatorAssign(this.h, param1.cPointer())
}

func QAccessibleActionInterface_Tr2(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_Tr2(sourceText_Cstring, disambiguation_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_Tr3(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_Tr3(sourceText_Cstring, disambiguation_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_TrUtf82(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_TrUtf82(sourceText_Cstring, disambiguation_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAccessibleActionInterface_TrUtf83(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_TrUtf83(sourceText_Cstring, disambiguation_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleActionInterface) Delete() {
	C.QAccessibleActionInterface_Delete(this.h)
}

type QAccessibleImageInterface struct {
	h *C.QAccessibleImageInterface
}

func (this *QAccessibleImageInterface) cPointer() *C.QAccessibleImageInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleImageInterface(h *C.QAccessibleImageInterface) *QAccessibleImageInterface {
	if h == nil {
		return nil
	}
	return &QAccessibleImageInterface{h: h}
}

func newQAccessibleImageInterface_U(h unsafe.Pointer) *QAccessibleImageInterface {
	return newQAccessibleImageInterface((*C.QAccessibleImageInterface)(h))
}

func (this *QAccessibleImageInterface) ImageDescription() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleImageInterface_ImageDescription(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleImageInterface) ImageSize() *QSize {
	ret := C.QAccessibleImageInterface_ImageSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleImageInterface) ImagePosition() *QPoint {
	ret := C.QAccessibleImageInterface_ImagePosition(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleImageInterface) OperatorAssign(param1 *QAccessibleImageInterface) {
	C.QAccessibleImageInterface_OperatorAssign(this.h, param1.cPointer())
}

func (this *QAccessibleImageInterface) Delete() {
	C.QAccessibleImageInterface_Delete(this.h)
}

type QAccessibleEvent struct {
	h *C.QAccessibleEvent
}

func (this *QAccessibleEvent) cPointer() *C.QAccessibleEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleEvent(h *C.QAccessibleEvent) *QAccessibleEvent {
	if h == nil {
		return nil
	}
	return &QAccessibleEvent{h: h}
}

func newQAccessibleEvent_U(h unsafe.Pointer) *QAccessibleEvent {
	return newQAccessibleEvent((*C.QAccessibleEvent)(h))
}

// NewQAccessibleEvent constructs a new QAccessibleEvent object.
func NewQAccessibleEvent(obj *QObject, typ QAccessible__Event) *QAccessibleEvent {
	ret := C.QAccessibleEvent_new(obj.cPointer(), (C.uintptr_t)(typ))
	return newQAccessibleEvent(ret)
}

// NewQAccessibleEvent2 constructs a new QAccessibleEvent object.
func NewQAccessibleEvent2(iface *QAccessibleInterface, typ QAccessible__Event) *QAccessibleEvent {
	ret := C.QAccessibleEvent_new2(iface.cPointer(), (C.uintptr_t)(typ))
	return newQAccessibleEvent(ret)
}

func (this *QAccessibleEvent) Type() QAccessible__Event {
	ret := C.QAccessibleEvent_Type(this.h)
	return (QAccessible__Event)(ret)
}

func (this *QAccessibleEvent) Object() *QObject {
	ret := C.QAccessibleEvent_Object(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QAccessibleEvent) UniqueId() uint {
	ret := C.QAccessibleEvent_UniqueId(this.h)
	return (uint)(ret)
}

func (this *QAccessibleEvent) SetChild(chld int) {
	C.QAccessibleEvent_SetChild(this.h, (C.int)(chld))
}

func (this *QAccessibleEvent) Child() int {
	ret := C.QAccessibleEvent_Child(this.h)
	return (int)(ret)
}

func (this *QAccessibleEvent) AccessibleInterface() *QAccessibleInterface {
	ret := C.QAccessibleEvent_AccessibleInterface(this.h)
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleEvent) Delete() {
	C.QAccessibleEvent_Delete(this.h)
}

type QAccessibleStateChangeEvent struct {
	h *C.QAccessibleStateChangeEvent
	*QAccessibleEvent
}

func (this *QAccessibleStateChangeEvent) cPointer() *C.QAccessibleStateChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleStateChangeEvent(h *C.QAccessibleStateChangeEvent) *QAccessibleStateChangeEvent {
	if h == nil {
		return nil
	}
	return &QAccessibleStateChangeEvent{h: h, QAccessibleEvent: newQAccessibleEvent_U(unsafe.Pointer(h))}
}

func newQAccessibleStateChangeEvent_U(h unsafe.Pointer) *QAccessibleStateChangeEvent {
	return newQAccessibleStateChangeEvent((*C.QAccessibleStateChangeEvent)(h))
}

// NewQAccessibleStateChangeEvent constructs a new QAccessibleStateChangeEvent object.
func NewQAccessibleStateChangeEvent(obj *QObject, state QAccessible__State) *QAccessibleStateChangeEvent {
	ret := C.QAccessibleStateChangeEvent_new(obj.cPointer(), state.cPointer())
	return newQAccessibleStateChangeEvent(ret)
}

// NewQAccessibleStateChangeEvent2 constructs a new QAccessibleStateChangeEvent object.
func NewQAccessibleStateChangeEvent2(iface *QAccessibleInterface, state QAccessible__State) *QAccessibleStateChangeEvent {
	ret := C.QAccessibleStateChangeEvent_new2(iface.cPointer(), state.cPointer())
	return newQAccessibleStateChangeEvent(ret)
}

func (this *QAccessibleStateChangeEvent) ChangedStates() *QAccessible__State {
	ret := C.QAccessibleStateChangeEvent_ChangedStates(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQAccessible__State(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QAccessible__State) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleStateChangeEvent) Delete() {
	C.QAccessibleStateChangeEvent_Delete(this.h)
}

type QAccessibleTextCursorEvent struct {
	h *C.QAccessibleTextCursorEvent
	*QAccessibleEvent
}

func (this *QAccessibleTextCursorEvent) cPointer() *C.QAccessibleTextCursorEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleTextCursorEvent(h *C.QAccessibleTextCursorEvent) *QAccessibleTextCursorEvent {
	if h == nil {
		return nil
	}
	return &QAccessibleTextCursorEvent{h: h, QAccessibleEvent: newQAccessibleEvent_U(unsafe.Pointer(h))}
}

func newQAccessibleTextCursorEvent_U(h unsafe.Pointer) *QAccessibleTextCursorEvent {
	return newQAccessibleTextCursorEvent((*C.QAccessibleTextCursorEvent)(h))
}

// NewQAccessibleTextCursorEvent constructs a new QAccessibleTextCursorEvent object.
func NewQAccessibleTextCursorEvent(obj *QObject, cursorPos int) *QAccessibleTextCursorEvent {
	ret := C.QAccessibleTextCursorEvent_new(obj.cPointer(), (C.int)(cursorPos))
	return newQAccessibleTextCursorEvent(ret)
}

// NewQAccessibleTextCursorEvent2 constructs a new QAccessibleTextCursorEvent object.
func NewQAccessibleTextCursorEvent2(iface *QAccessibleInterface, cursorPos int) *QAccessibleTextCursorEvent {
	ret := C.QAccessibleTextCursorEvent_new2(iface.cPointer(), (C.int)(cursorPos))
	return newQAccessibleTextCursorEvent(ret)
}

func (this *QAccessibleTextCursorEvent) SetCursorPosition(position int) {
	C.QAccessibleTextCursorEvent_SetCursorPosition(this.h, (C.int)(position))
}

func (this *QAccessibleTextCursorEvent) CursorPosition() int {
	ret := C.QAccessibleTextCursorEvent_CursorPosition(this.h)
	return (int)(ret)
}

func (this *QAccessibleTextCursorEvent) Delete() {
	C.QAccessibleTextCursorEvent_Delete(this.h)
}

type QAccessibleTextSelectionEvent struct {
	h *C.QAccessibleTextSelectionEvent
	*QAccessibleTextCursorEvent
}

func (this *QAccessibleTextSelectionEvent) cPointer() *C.QAccessibleTextSelectionEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleTextSelectionEvent(h *C.QAccessibleTextSelectionEvent) *QAccessibleTextSelectionEvent {
	if h == nil {
		return nil
	}
	return &QAccessibleTextSelectionEvent{h: h, QAccessibleTextCursorEvent: newQAccessibleTextCursorEvent_U(unsafe.Pointer(h))}
}

func newQAccessibleTextSelectionEvent_U(h unsafe.Pointer) *QAccessibleTextSelectionEvent {
	return newQAccessibleTextSelectionEvent((*C.QAccessibleTextSelectionEvent)(h))
}

// NewQAccessibleTextSelectionEvent constructs a new QAccessibleTextSelectionEvent object.
func NewQAccessibleTextSelectionEvent(obj *QObject, start int, end int) *QAccessibleTextSelectionEvent {
	ret := C.QAccessibleTextSelectionEvent_new(obj.cPointer(), (C.int)(start), (C.int)(end))
	return newQAccessibleTextSelectionEvent(ret)
}

// NewQAccessibleTextSelectionEvent2 constructs a new QAccessibleTextSelectionEvent object.
func NewQAccessibleTextSelectionEvent2(iface *QAccessibleInterface, start int, end int) *QAccessibleTextSelectionEvent {
	ret := C.QAccessibleTextSelectionEvent_new2(iface.cPointer(), (C.int)(start), (C.int)(end))
	return newQAccessibleTextSelectionEvent(ret)
}

func (this *QAccessibleTextSelectionEvent) SetSelection(start int, end int) {
	C.QAccessibleTextSelectionEvent_SetSelection(this.h, (C.int)(start), (C.int)(end))
}

func (this *QAccessibleTextSelectionEvent) SelectionStart() int {
	ret := C.QAccessibleTextSelectionEvent_SelectionStart(this.h)
	return (int)(ret)
}

func (this *QAccessibleTextSelectionEvent) SelectionEnd() int {
	ret := C.QAccessibleTextSelectionEvent_SelectionEnd(this.h)
	return (int)(ret)
}

func (this *QAccessibleTextSelectionEvent) Delete() {
	C.QAccessibleTextSelectionEvent_Delete(this.h)
}

type QAccessibleTextInsertEvent struct {
	h *C.QAccessibleTextInsertEvent
	*QAccessibleTextCursorEvent
}

func (this *QAccessibleTextInsertEvent) cPointer() *C.QAccessibleTextInsertEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleTextInsertEvent(h *C.QAccessibleTextInsertEvent) *QAccessibleTextInsertEvent {
	if h == nil {
		return nil
	}
	return &QAccessibleTextInsertEvent{h: h, QAccessibleTextCursorEvent: newQAccessibleTextCursorEvent_U(unsafe.Pointer(h))}
}

func newQAccessibleTextInsertEvent_U(h unsafe.Pointer) *QAccessibleTextInsertEvent {
	return newQAccessibleTextInsertEvent((*C.QAccessibleTextInsertEvent)(h))
}

// NewQAccessibleTextInsertEvent constructs a new QAccessibleTextInsertEvent object.
func NewQAccessibleTextInsertEvent(obj *QObject, position int, text string) *QAccessibleTextInsertEvent {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QAccessibleTextInsertEvent_new(obj.cPointer(), (C.int)(position), text_Cstring, C.size_t(len(text)))
	return newQAccessibleTextInsertEvent(ret)
}

// NewQAccessibleTextInsertEvent2 constructs a new QAccessibleTextInsertEvent object.
func NewQAccessibleTextInsertEvent2(iface *QAccessibleInterface, position int, text string) *QAccessibleTextInsertEvent {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QAccessibleTextInsertEvent_new2(iface.cPointer(), (C.int)(position), text_Cstring, C.size_t(len(text)))
	return newQAccessibleTextInsertEvent(ret)
}

func (this *QAccessibleTextInsertEvent) TextInserted() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleTextInsertEvent_TextInserted(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTextInsertEvent) ChangePosition() int {
	ret := C.QAccessibleTextInsertEvent_ChangePosition(this.h)
	return (int)(ret)
}

func (this *QAccessibleTextInsertEvent) Delete() {
	C.QAccessibleTextInsertEvent_Delete(this.h)
}

type QAccessibleTextRemoveEvent struct {
	h *C.QAccessibleTextRemoveEvent
	*QAccessibleTextCursorEvent
}

func (this *QAccessibleTextRemoveEvent) cPointer() *C.QAccessibleTextRemoveEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleTextRemoveEvent(h *C.QAccessibleTextRemoveEvent) *QAccessibleTextRemoveEvent {
	if h == nil {
		return nil
	}
	return &QAccessibleTextRemoveEvent{h: h, QAccessibleTextCursorEvent: newQAccessibleTextCursorEvent_U(unsafe.Pointer(h))}
}

func newQAccessibleTextRemoveEvent_U(h unsafe.Pointer) *QAccessibleTextRemoveEvent {
	return newQAccessibleTextRemoveEvent((*C.QAccessibleTextRemoveEvent)(h))
}

// NewQAccessibleTextRemoveEvent constructs a new QAccessibleTextRemoveEvent object.
func NewQAccessibleTextRemoveEvent(obj *QObject, position int, text string) *QAccessibleTextRemoveEvent {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QAccessibleTextRemoveEvent_new(obj.cPointer(), (C.int)(position), text_Cstring, C.size_t(len(text)))
	return newQAccessibleTextRemoveEvent(ret)
}

// NewQAccessibleTextRemoveEvent2 constructs a new QAccessibleTextRemoveEvent object.
func NewQAccessibleTextRemoveEvent2(iface *QAccessibleInterface, position int, text string) *QAccessibleTextRemoveEvent {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QAccessibleTextRemoveEvent_new2(iface.cPointer(), (C.int)(position), text_Cstring, C.size_t(len(text)))
	return newQAccessibleTextRemoveEvent(ret)
}

func (this *QAccessibleTextRemoveEvent) TextRemoved() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleTextRemoveEvent_TextRemoved(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTextRemoveEvent) ChangePosition() int {
	ret := C.QAccessibleTextRemoveEvent_ChangePosition(this.h)
	return (int)(ret)
}

func (this *QAccessibleTextRemoveEvent) Delete() {
	C.QAccessibleTextRemoveEvent_Delete(this.h)
}

type QAccessibleTextUpdateEvent struct {
	h *C.QAccessibleTextUpdateEvent
	*QAccessibleTextCursorEvent
}

func (this *QAccessibleTextUpdateEvent) cPointer() *C.QAccessibleTextUpdateEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleTextUpdateEvent(h *C.QAccessibleTextUpdateEvent) *QAccessibleTextUpdateEvent {
	if h == nil {
		return nil
	}
	return &QAccessibleTextUpdateEvent{h: h, QAccessibleTextCursorEvent: newQAccessibleTextCursorEvent_U(unsafe.Pointer(h))}
}

func newQAccessibleTextUpdateEvent_U(h unsafe.Pointer) *QAccessibleTextUpdateEvent {
	return newQAccessibleTextUpdateEvent((*C.QAccessibleTextUpdateEvent)(h))
}

// NewQAccessibleTextUpdateEvent constructs a new QAccessibleTextUpdateEvent object.
func NewQAccessibleTextUpdateEvent(obj *QObject, position int, oldText string, text string) *QAccessibleTextUpdateEvent {
	oldText_Cstring := C.CString(oldText)
	defer C.free(unsafe.Pointer(oldText_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QAccessibleTextUpdateEvent_new(obj.cPointer(), (C.int)(position), oldText_Cstring, C.size_t(len(oldText)), text_Cstring, C.size_t(len(text)))
	return newQAccessibleTextUpdateEvent(ret)
}

// NewQAccessibleTextUpdateEvent2 constructs a new QAccessibleTextUpdateEvent object.
func NewQAccessibleTextUpdateEvent2(iface *QAccessibleInterface, position int, oldText string, text string) *QAccessibleTextUpdateEvent {
	oldText_Cstring := C.CString(oldText)
	defer C.free(unsafe.Pointer(oldText_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QAccessibleTextUpdateEvent_new2(iface.cPointer(), (C.int)(position), oldText_Cstring, C.size_t(len(oldText)), text_Cstring, C.size_t(len(text)))
	return newQAccessibleTextUpdateEvent(ret)
}

func (this *QAccessibleTextUpdateEvent) TextRemoved() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleTextUpdateEvent_TextRemoved(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTextUpdateEvent) TextInserted() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleTextUpdateEvent_TextInserted(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTextUpdateEvent) ChangePosition() int {
	ret := C.QAccessibleTextUpdateEvent_ChangePosition(this.h)
	return (int)(ret)
}

func (this *QAccessibleTextUpdateEvent) Delete() {
	C.QAccessibleTextUpdateEvent_Delete(this.h)
}

type QAccessibleValueChangeEvent struct {
	h *C.QAccessibleValueChangeEvent
	*QAccessibleEvent
}

func (this *QAccessibleValueChangeEvent) cPointer() *C.QAccessibleValueChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleValueChangeEvent(h *C.QAccessibleValueChangeEvent) *QAccessibleValueChangeEvent {
	if h == nil {
		return nil
	}
	return &QAccessibleValueChangeEvent{h: h, QAccessibleEvent: newQAccessibleEvent_U(unsafe.Pointer(h))}
}

func newQAccessibleValueChangeEvent_U(h unsafe.Pointer) *QAccessibleValueChangeEvent {
	return newQAccessibleValueChangeEvent((*C.QAccessibleValueChangeEvent)(h))
}

// NewQAccessibleValueChangeEvent constructs a new QAccessibleValueChangeEvent object.
func NewQAccessibleValueChangeEvent(obj *QObject, val *QVariant) *QAccessibleValueChangeEvent {
	ret := C.QAccessibleValueChangeEvent_new(obj.cPointer(), val.cPointer())
	return newQAccessibleValueChangeEvent(ret)
}

// NewQAccessibleValueChangeEvent2 constructs a new QAccessibleValueChangeEvent object.
func NewQAccessibleValueChangeEvent2(iface *QAccessibleInterface, val *QVariant) *QAccessibleValueChangeEvent {
	ret := C.QAccessibleValueChangeEvent_new2(iface.cPointer(), val.cPointer())
	return newQAccessibleValueChangeEvent(ret)
}

func (this *QAccessibleValueChangeEvent) SetValue(val *QVariant) {
	C.QAccessibleValueChangeEvent_SetValue(this.h, val.cPointer())
}

func (this *QAccessibleValueChangeEvent) Value() *QVariant {
	ret := C.QAccessibleValueChangeEvent_Value(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleValueChangeEvent) Delete() {
	C.QAccessibleValueChangeEvent_Delete(this.h)
}

type QAccessibleTableModelChangeEvent struct {
	h *C.QAccessibleTableModelChangeEvent
	*QAccessibleEvent
}

func (this *QAccessibleTableModelChangeEvent) cPointer() *C.QAccessibleTableModelChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleTableModelChangeEvent(h *C.QAccessibleTableModelChangeEvent) *QAccessibleTableModelChangeEvent {
	if h == nil {
		return nil
	}
	return &QAccessibleTableModelChangeEvent{h: h, QAccessibleEvent: newQAccessibleEvent_U(unsafe.Pointer(h))}
}

func newQAccessibleTableModelChangeEvent_U(h unsafe.Pointer) *QAccessibleTableModelChangeEvent {
	return newQAccessibleTableModelChangeEvent((*C.QAccessibleTableModelChangeEvent)(h))
}

// NewQAccessibleTableModelChangeEvent constructs a new QAccessibleTableModelChangeEvent object.
func NewQAccessibleTableModelChangeEvent(obj *QObject, changeType QAccessibleTableModelChangeEvent__ModelChangeType) *QAccessibleTableModelChangeEvent {
	ret := C.QAccessibleTableModelChangeEvent_new(obj.cPointer(), (C.uintptr_t)(changeType))
	return newQAccessibleTableModelChangeEvent(ret)
}

// NewQAccessibleTableModelChangeEvent2 constructs a new QAccessibleTableModelChangeEvent object.
func NewQAccessibleTableModelChangeEvent2(iface *QAccessibleInterface, changeType QAccessibleTableModelChangeEvent__ModelChangeType) *QAccessibleTableModelChangeEvent {
	ret := C.QAccessibleTableModelChangeEvent_new2(iface.cPointer(), (C.uintptr_t)(changeType))
	return newQAccessibleTableModelChangeEvent(ret)
}

func (this *QAccessibleTableModelChangeEvent) SetModelChangeType(changeType QAccessibleTableModelChangeEvent__ModelChangeType) {
	C.QAccessibleTableModelChangeEvent_SetModelChangeType(this.h, (C.uintptr_t)(changeType))
}

func (this *QAccessibleTableModelChangeEvent) ModelChangeType() QAccessibleTableModelChangeEvent__ModelChangeType {
	ret := C.QAccessibleTableModelChangeEvent_ModelChangeType(this.h)
	return (QAccessibleTableModelChangeEvent__ModelChangeType)(ret)
}

func (this *QAccessibleTableModelChangeEvent) SetFirstRow(row int) {
	C.QAccessibleTableModelChangeEvent_SetFirstRow(this.h, (C.int)(row))
}

func (this *QAccessibleTableModelChangeEvent) SetFirstColumn(col int) {
	C.QAccessibleTableModelChangeEvent_SetFirstColumn(this.h, (C.int)(col))
}

func (this *QAccessibleTableModelChangeEvent) SetLastRow(row int) {
	C.QAccessibleTableModelChangeEvent_SetLastRow(this.h, (C.int)(row))
}

func (this *QAccessibleTableModelChangeEvent) SetLastColumn(col int) {
	C.QAccessibleTableModelChangeEvent_SetLastColumn(this.h, (C.int)(col))
}

func (this *QAccessibleTableModelChangeEvent) FirstRow() int {
	ret := C.QAccessibleTableModelChangeEvent_FirstRow(this.h)
	return (int)(ret)
}

func (this *QAccessibleTableModelChangeEvent) FirstColumn() int {
	ret := C.QAccessibleTableModelChangeEvent_FirstColumn(this.h)
	return (int)(ret)
}

func (this *QAccessibleTableModelChangeEvent) LastRow() int {
	ret := C.QAccessibleTableModelChangeEvent_LastRow(this.h)
	return (int)(ret)
}

func (this *QAccessibleTableModelChangeEvent) LastColumn() int {
	ret := C.QAccessibleTableModelChangeEvent_LastColumn(this.h)
	return (int)(ret)
}

func (this *QAccessibleTableModelChangeEvent) Delete() {
	C.QAccessibleTableModelChangeEvent_Delete(this.h)
}

type QAccessible__State struct {
	h *C.QAccessible__State
}

func (this *QAccessible__State) cPointer() *C.QAccessible__State {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessible__State(h *C.QAccessible__State) *QAccessible__State {
	if h == nil {
		return nil
	}
	return &QAccessible__State{h: h}
}

func newQAccessible__State_U(h unsafe.Pointer) *QAccessible__State {
	return newQAccessible__State((*C.QAccessible__State)(h))
}

// NewQAccessible__State constructs a new QAccessible::State object.
func NewQAccessible__State() *QAccessible__State {
	ret := C.QAccessible__State_new()
	return newQAccessible__State(ret)
}

// NewQAccessible__State2 constructs a new QAccessible::State object.
func NewQAccessible__State2(param1 *QAccessible__State) *QAccessible__State {
	ret := C.QAccessible__State_new2(param1.cPointer())
	return newQAccessible__State(ret)
}

func (this *QAccessible__State) Delete() {
	C.QAccessible__State_Delete(this.h)
}

type QAccessible__ActivationObserver struct {
	h *C.QAccessible__ActivationObserver
}

func (this *QAccessible__ActivationObserver) cPointer() *C.QAccessible__ActivationObserver {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessible__ActivationObserver(h *C.QAccessible__ActivationObserver) *QAccessible__ActivationObserver {
	if h == nil {
		return nil
	}
	return &QAccessible__ActivationObserver{h: h}
}

func newQAccessible__ActivationObserver_U(h unsafe.Pointer) *QAccessible__ActivationObserver {
	return newQAccessible__ActivationObserver((*C.QAccessible__ActivationObserver)(h))
}

func (this *QAccessible__ActivationObserver) AccessibilityActiveChanged(active bool) {
	C.QAccessible__ActivationObserver_AccessibilityActiveChanged(this.h, (C.bool)(active))
}

func (this *QAccessible__ActivationObserver) Delete() {
	C.QAccessible__ActivationObserver_Delete(this.h)
}
