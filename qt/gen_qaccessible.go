package qt

/*

#include "gen_qaccessible.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAccessible__Event int

const (
	QAccessible__SoundPlayed                     QAccessible__Event = 1
	QAccessible__Alert                           QAccessible__Event = 2
	QAccessible__ForegroundChanged               QAccessible__Event = 3
	QAccessible__MenuStart                       QAccessible__Event = 4
	QAccessible__MenuEnd                         QAccessible__Event = 5
	QAccessible__PopupMenuStart                  QAccessible__Event = 6
	QAccessible__PopupMenuEnd                    QAccessible__Event = 7
	QAccessible__ContextHelpStart                QAccessible__Event = 12
	QAccessible__ContextHelpEnd                  QAccessible__Event = 13
	QAccessible__DragDropStart                   QAccessible__Event = 14
	QAccessible__DragDropEnd                     QAccessible__Event = 15
	QAccessible__DialogStart                     QAccessible__Event = 16
	QAccessible__DialogEnd                       QAccessible__Event = 17
	QAccessible__ScrollingStart                  QAccessible__Event = 18
	QAccessible__ScrollingEnd                    QAccessible__Event = 19
	QAccessible__MenuCommand                     QAccessible__Event = 24
	QAccessible__ActionChanged                   QAccessible__Event = 257
	QAccessible__ActiveDescendantChanged         QAccessible__Event = 258
	QAccessible__AttributeChanged                QAccessible__Event = 259
	QAccessible__DocumentContentChanged          QAccessible__Event = 260
	QAccessible__DocumentLoadComplete            QAccessible__Event = 261
	QAccessible__DocumentLoadStopped             QAccessible__Event = 262
	QAccessible__DocumentReload                  QAccessible__Event = 263
	QAccessible__HyperlinkEndIndexChanged        QAccessible__Event = 264
	QAccessible__HyperlinkNumberOfAnchorsChanged QAccessible__Event = 265
	QAccessible__HyperlinkSelectedLinkChanged    QAccessible__Event = 266
	QAccessible__HypertextLinkActivated          QAccessible__Event = 267
	QAccessible__HypertextLinkSelected           QAccessible__Event = 268
	QAccessible__HyperlinkStartIndexChanged      QAccessible__Event = 269
	QAccessible__HypertextChanged                QAccessible__Event = 270
	QAccessible__HypertextNLinksChanged          QAccessible__Event = 271
	QAccessible__ObjectAttributeChanged          QAccessible__Event = 272
	QAccessible__PageChanged                     QAccessible__Event = 273
	QAccessible__SectionChanged                  QAccessible__Event = 274
	QAccessible__TableCaptionChanged             QAccessible__Event = 275
	QAccessible__TableColumnDescriptionChanged   QAccessible__Event = 276
	QAccessible__TableColumnHeaderChanged        QAccessible__Event = 277
	QAccessible__TableModelChanged               QAccessible__Event = 278
	QAccessible__TableRowDescriptionChanged      QAccessible__Event = 279
	QAccessible__TableRowHeaderChanged           QAccessible__Event = 280
	QAccessible__TableSummaryChanged             QAccessible__Event = 281
	QAccessible__TextAttributeChanged            QAccessible__Event = 282
	QAccessible__TextCaretMoved                  QAccessible__Event = 283
	QAccessible__TextColumnChanged               QAccessible__Event = 285
	QAccessible__TextInserted                    QAccessible__Event = 286
	QAccessible__TextRemoved                     QAccessible__Event = 287
	QAccessible__TextUpdated                     QAccessible__Event = 288
	QAccessible__TextSelectionChanged            QAccessible__Event = 289
	QAccessible__VisibleDataChanged              QAccessible__Event = 290
	QAccessible__ObjectCreated                   QAccessible__Event = 32768
	QAccessible__ObjectDestroyed                 QAccessible__Event = 32769
	QAccessible__ObjectShow                      QAccessible__Event = 32770
	QAccessible__ObjectHide                      QAccessible__Event = 32771
	QAccessible__ObjectReorder                   QAccessible__Event = 32772
	QAccessible__Focus                           QAccessible__Event = 32773
	QAccessible__Selection                       QAccessible__Event = 32774
	QAccessible__SelectionAdd                    QAccessible__Event = 32775
	QAccessible__SelectionRemove                 QAccessible__Event = 32776
	QAccessible__SelectionWithin                 QAccessible__Event = 32777
	QAccessible__StateChanged                    QAccessible__Event = 32778
	QAccessible__LocationChanged                 QAccessible__Event = 32779
	QAccessible__NameChanged                     QAccessible__Event = 32780
	QAccessible__DescriptionChanged              QAccessible__Event = 32781
	QAccessible__ValueChanged                    QAccessible__Event = 32782
	QAccessible__ParentChanged                   QAccessible__Event = 32783
	QAccessible__HelpChanged                     QAccessible__Event = 32928
	QAccessible__DefaultActionChanged            QAccessible__Event = 32944
	QAccessible__AcceleratorChanged              QAccessible__Event = 32960
	QAccessible__InvalidEvent                    QAccessible__Event = 32961
)

type QAccessible__Role int

const (
	QAccessible__NoRole               QAccessible__Role = 0
	QAccessible__TitleBar             QAccessible__Role = 1
	QAccessible__MenuBar              QAccessible__Role = 2
	QAccessible__ScrollBar            QAccessible__Role = 3
	QAccessible__Grip                 QAccessible__Role = 4
	QAccessible__Sound                QAccessible__Role = 5
	QAccessible__Cursor               QAccessible__Role = 6
	QAccessible__Caret                QAccessible__Role = 7
	QAccessible__AlertMessage         QAccessible__Role = 8
	QAccessible__Window               QAccessible__Role = 9
	QAccessible__Client               QAccessible__Role = 10
	QAccessible__PopupMenu            QAccessible__Role = 11
	QAccessible__MenuItem             QAccessible__Role = 12
	QAccessible__ToolTip              QAccessible__Role = 13
	QAccessible__Application          QAccessible__Role = 14
	QAccessible__Document             QAccessible__Role = 15
	QAccessible__Pane                 QAccessible__Role = 16
	QAccessible__Chart                QAccessible__Role = 17
	QAccessible__Dialog               QAccessible__Role = 18
	QAccessible__Border               QAccessible__Role = 19
	QAccessible__Grouping             QAccessible__Role = 20
	QAccessible__Separator            QAccessible__Role = 21
	QAccessible__ToolBar              QAccessible__Role = 22
	QAccessible__StatusBar            QAccessible__Role = 23
	QAccessible__Table                QAccessible__Role = 24
	QAccessible__ColumnHeader         QAccessible__Role = 25
	QAccessible__RowHeader            QAccessible__Role = 26
	QAccessible__Column               QAccessible__Role = 27
	QAccessible__Row                  QAccessible__Role = 28
	QAccessible__Cell                 QAccessible__Role = 29
	QAccessible__Link                 QAccessible__Role = 30
	QAccessible__HelpBalloon          QAccessible__Role = 31
	QAccessible__Assistant            QAccessible__Role = 32
	QAccessible__List                 QAccessible__Role = 33
	QAccessible__ListItem             QAccessible__Role = 34
	QAccessible__Tree                 QAccessible__Role = 35
	QAccessible__TreeItem             QAccessible__Role = 36
	QAccessible__PageTab              QAccessible__Role = 37
	QAccessible__PropertyPage         QAccessible__Role = 38
	QAccessible__Indicator            QAccessible__Role = 39
	QAccessible__Graphic              QAccessible__Role = 40
	QAccessible__StaticText           QAccessible__Role = 41
	QAccessible__EditableText         QAccessible__Role = 42
	QAccessible__Button               QAccessible__Role = 43
	QAccessible__PushButton           QAccessible__Role = 43
	QAccessible__CheckBox             QAccessible__Role = 44
	QAccessible__RadioButton          QAccessible__Role = 45
	QAccessible__ComboBox             QAccessible__Role = 46
	QAccessible__ProgressBar          QAccessible__Role = 48
	QAccessible__Dial                 QAccessible__Role = 49
	QAccessible__HotkeyField          QAccessible__Role = 50
	QAccessible__Slider               QAccessible__Role = 51
	QAccessible__SpinBox              QAccessible__Role = 52
	QAccessible__Canvas               QAccessible__Role = 53
	QAccessible__Animation            QAccessible__Role = 54
	QAccessible__Equation             QAccessible__Role = 55
	QAccessible__ButtonDropDown       QAccessible__Role = 56
	QAccessible__ButtonMenu           QAccessible__Role = 57
	QAccessible__ButtonDropGrid       QAccessible__Role = 58
	QAccessible__Whitespace           QAccessible__Role = 59
	QAccessible__PageTabList          QAccessible__Role = 60
	QAccessible__Clock                QAccessible__Role = 61
	QAccessible__Splitter             QAccessible__Role = 62
	QAccessible__LayeredPane          QAccessible__Role = 128
	QAccessible__Terminal             QAccessible__Role = 129
	QAccessible__Desktop              QAccessible__Role = 130
	QAccessible__Paragraph            QAccessible__Role = 131
	QAccessible__WebDocument          QAccessible__Role = 132
	QAccessible__Section              QAccessible__Role = 133
	QAccessible__Notification         QAccessible__Role = 134
	QAccessible__ColorChooser         QAccessible__Role = 1028
	QAccessible__Footer               QAccessible__Role = 1038
	QAccessible__Form                 QAccessible__Role = 1040
	QAccessible__Heading              QAccessible__Role = 1044
	QAccessible__Note                 QAccessible__Role = 1051
	QAccessible__ComplementaryContent QAccessible__Role = 1068
	QAccessible__UserRole             QAccessible__Role = 65535
)

type QAccessible__Text int

const (
	QAccessible__Name             QAccessible__Text = 0
	QAccessible__Description      QAccessible__Text = 1
	QAccessible__Value            QAccessible__Text = 2
	QAccessible__Help             QAccessible__Text = 3
	QAccessible__Accelerator      QAccessible__Text = 4
	QAccessible__DebugDescription QAccessible__Text = 5
	QAccessible__UserText         QAccessible__Text = 65535
)

type QAccessible__RelationFlag int

const (
	QAccessible__Label        QAccessible__RelationFlag = 1
	QAccessible__Labelled     QAccessible__RelationFlag = 2
	QAccessible__Controller   QAccessible__RelationFlag = 4
	QAccessible__Controlled   QAccessible__RelationFlag = 8
	QAccessible__AllRelations QAccessible__RelationFlag = -1 // overflow

)

type QAccessible__InterfaceType int

const (
	QAccessible__TextInterface         QAccessible__InterfaceType = 0
	QAccessible__EditableTextInterface QAccessible__InterfaceType = 1
	QAccessible__ValueInterface        QAccessible__InterfaceType = 2
	QAccessible__ActionInterface       QAccessible__InterfaceType = 3
	QAccessible__ImageInterface        QAccessible__InterfaceType = 4
	QAccessible__TableInterface        QAccessible__InterfaceType = 5
	QAccessible__TableCellInterface    QAccessible__InterfaceType = 6
)

type QAccessible__TextBoundaryType int

const (
	QAccessible__CharBoundary      QAccessible__TextBoundaryType = 0
	QAccessible__WordBoundary      QAccessible__TextBoundaryType = 1
	QAccessible__SentenceBoundary  QAccessible__TextBoundaryType = 2
	QAccessible__ParagraphBoundary QAccessible__TextBoundaryType = 3
	QAccessible__LineBoundary      QAccessible__TextBoundaryType = 4
	QAccessible__NoBoundary        QAccessible__TextBoundaryType = 5
)

type QAccessibleTableModelChangeEvent__ModelChangeType int

const (
	QAccessibleTableModelChangeEvent__ModelReset      QAccessibleTableModelChangeEvent__ModelChangeType = 0
	QAccessibleTableModelChangeEvent__DataChanged     QAccessibleTableModelChangeEvent__ModelChangeType = 1
	QAccessibleTableModelChangeEvent__RowsInserted    QAccessibleTableModelChangeEvent__ModelChangeType = 2
	QAccessibleTableModelChangeEvent__ColumnsInserted QAccessibleTableModelChangeEvent__ModelChangeType = 3
	QAccessibleTableModelChangeEvent__RowsRemoved     QAccessibleTableModelChangeEvent__ModelChangeType = 4
	QAccessibleTableModelChangeEvent__ColumnsRemoved  QAccessibleTableModelChangeEvent__ModelChangeType = 5
)

type QAccessible struct {
	h  *C.QAccessible
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessible) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAccessible) cPointer() *C.QAccessible {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessible) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessible constructs the type using only CGO pointers.
func newQAccessible(h *C.QAccessible) *QAccessible {
	if h == nil {
		return nil
	}

	return &QAccessible{h: h}
}

// UnsafeNewQAccessible constructs the type using only unsafe pointers.
func UnsafeNewQAccessible(h unsafe.Pointer) *QAccessible {
	return newQAccessible((*C.QAccessible)(h))
}

func QAccessible_InstallActivationObserver(param1 *QAccessible__ActivationObserver) {
	defer runtime.KeepAlive(param1)
	C.QAccessible_installActivationObserver(param1.cPointer())
}

func QAccessible_RemoveActivationObserver(param1 *QAccessible__ActivationObserver) {
	defer runtime.KeepAlive(param1)
	C.QAccessible_removeActivationObserver(param1.cPointer())
}

func QAccessible_QueryAccessibleInterface(param1 *QObject) *QAccessibleInterface {
	defer runtime.KeepAlive(param1)
	return newQAccessibleInterface(C.QAccessible_queryAccessibleInterface(param1.cPointer()))
}

func QAccessible_UniqueId(iface *QAccessibleInterface) uint {
	defer runtime.KeepAlive(iface)
	return (uint)(C.QAccessible_uniqueId(iface.cPointer()))
}

func QAccessible_AccessibleInterface(uniqueId uint) *QAccessibleInterface {
	return newQAccessibleInterface(C.QAccessible_accessibleInterface((C.uint)(uniqueId)))
}

func QAccessible_RegisterAccessibleInterface(iface *QAccessibleInterface) uint {
	defer runtime.KeepAlive(iface)
	return (uint)(C.QAccessible_registerAccessibleInterface(iface.cPointer()))
}

func QAccessible_DeleteAccessibleInterface(uniqueId uint) {
	C.QAccessible_deleteAccessibleInterface((C.uint)(uniqueId))
}

func QAccessible_UpdateAccessibility(event *QAccessibleEvent) {
	defer runtime.KeepAlive(event)
	C.QAccessible_updateAccessibility(event.cPointer())
}

func QAccessible_IsActive() bool {
	return (bool)(C.QAccessible_isActive())
}

func QAccessible_SetActive(active bool) {
	C.QAccessible_setActive((C.bool)(active))
}

func QAccessible_SetRootObject(object *QObject) {
	defer runtime.KeepAlive(object)
	C.QAccessible_setRootObject(object.cPointer())
}

func QAccessible_Cleanup() {
	C.QAccessible_cleanup()
}

func QAccessible_QAccessibleTextBoundaryHelper(cursor *QTextCursor, boundaryType QAccessible__TextBoundaryType) struct {
	First  int
	Second int
} {
	defer runtime.KeepAlive(cursor)
	var _mm C.struct_miqt_map = C.QAccessible_qAccessibleTextBoundaryHelper(cursor.cPointer(), (C.int)(boundaryType))
	_First_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.values))
	_entry_First := (int)(_First_CArray[0])

	_entry_Second := (int)(_Second_CArray[0])

	return struct {
		First  int
		Second int
	}{First: _entry_First, Second: _entry_Second}
}

// Delete this object from C++ memory.
func (this *QAccessible) Delete() {
	C.QAccessible_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessible) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessible_delete((*C.QAccessible)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleInterface struct {
	h  *C.QAccessibleInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAccessibleInterface) cPointer() *C.QAccessibleInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleInterface constructs the type using only CGO pointers.
func newQAccessibleInterface(h *C.QAccessibleInterface) *QAccessibleInterface {
	if h == nil {
		return nil
	}

	return &QAccessibleInterface{h: h}
}

// UnsafeNewQAccessibleInterface constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleInterface(h unsafe.Pointer) *QAccessibleInterface {
	return newQAccessibleInterface((*C.QAccessibleInterface)(h))
}

func (this *QAccessibleInterface) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAccessibleInterface_isValid(this.h))
}

func (this *QAccessibleInterface) Object() *QObject {
	defer runtime.KeepAlive(this)
	return newQObject(C.QAccessibleInterface_object(this.h))
}

func (this *QAccessibleInterface) Window() *QWindow {
	defer runtime.KeepAlive(this)
	return newQWindow(C.QAccessibleInterface_window(this.h))
}

func (this *QAccessibleInterface) Relations(match QAccessible__RelationFlag) []struct {
	First  *QAccessibleInterface
	Second QAccessible__RelationFlag
} {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QAccessibleInterface_relations(this.h, (C.int)(match))
	_ret := make([]struct {
		First  *QAccessibleInterface
		Second QAccessible__RelationFlag
	}, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_map)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _vv_mm C.struct_miqt_map = _outCast[i]
		_vv_First_CArray := (*[0xffff]*C.QAccessibleInterface)(unsafe.Pointer(_vv_mm.keys))
		_vv_Second_CArray := (*[0xffff]C.int)(unsafe.Pointer(_vv_mm.values))
		_vv_entry_First := newQAccessibleInterface(_vv_First_CArray[0])

		_vv_entry_Second := (QAccessible__RelationFlag)(_vv_Second_CArray[0])

		_ret[i] = struct {
			First  *QAccessibleInterface
			Second QAccessible__RelationFlag
		}{First: _vv_entry_First, Second: _vv_entry_Second}
	}
	return _ret
}

func (this *QAccessibleInterface) FocusChild() *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleInterface_focusChild(this.h))
}

func (this *QAccessibleInterface) ChildAt(x int, y int) *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleInterface_childAt(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QAccessibleInterface) Parent() *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleInterface_parent(this.h))
}

func (this *QAccessibleInterface) Child(index int) *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleInterface_child(this.h, (C.int)(index)))
}

func (this *QAccessibleInterface) ChildCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleInterface_childCount(this.h))
}

func (this *QAccessibleInterface) IndexOfChild(param1 *QAccessibleInterface) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (int)(C.QAccessibleInterface_indexOfChild(this.h, param1.cPointer()))
}

func (this *QAccessibleInterface) Text(t QAccessible__Text) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAccessibleInterface_text(this.h, (C.int)(t))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleInterface) SetText(t QAccessible__Text, text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QAccessibleInterface_setText(this.h, (C.int)(t), text_ms)
}

func (this *QAccessibleInterface) Rect() *QRect {
	defer runtime.KeepAlive(this)
	_goptr := newQRect(C.QAccessibleInterface_rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleInterface) Role() QAccessible__Role {
	defer runtime.KeepAlive(this)
	return (QAccessible__Role)(C.QAccessibleInterface_role(this.h))
}

func (this *QAccessibleInterface) State() *QAccessible__State {
	defer runtime.KeepAlive(this)
	_goptr := newQAccessible__State(C.QAccessibleInterface_state(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleInterface) ForegroundColor() *QColor {
	defer runtime.KeepAlive(this)
	_goptr := newQColor(C.QAccessibleInterface_foregroundColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleInterface) BackgroundColor() *QColor {
	defer runtime.KeepAlive(this)
	_goptr := newQColor(C.QAccessibleInterface_backgroundColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleInterface) TextInterface() *QAccessibleTextInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleTextInterface(C.QAccessibleInterface_textInterface(this.h))
}

func (this *QAccessibleInterface) EditableTextInterface() *QAccessibleEditableTextInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleEditableTextInterface(C.QAccessibleInterface_editableTextInterface(this.h))
}

func (this *QAccessibleInterface) ValueInterface() *QAccessibleValueInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleValueInterface(C.QAccessibleInterface_valueInterface(this.h))
}

func (this *QAccessibleInterface) ActionInterface() *QAccessibleActionInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleActionInterface(C.QAccessibleInterface_actionInterface(this.h))
}

func (this *QAccessibleInterface) ImageInterface() *QAccessibleImageInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleImageInterface(C.QAccessibleInterface_imageInterface(this.h))
}

func (this *QAccessibleInterface) TableInterface() *QAccessibleTableInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleTableInterface(C.QAccessibleInterface_tableInterface(this.h))
}

func (this *QAccessibleInterface) TableCellInterface() *QAccessibleTableCellInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleTableCellInterface(C.QAccessibleInterface_tableCellInterface(this.h))
}

func (this *QAccessibleInterface) VirtualHook(id int, data unsafe.Pointer) {
	defer runtime.KeepAlive(this)
	C.QAccessibleInterface_virtualHook(this.h, (C.int)(id), data)
}

func (this *QAccessibleInterface) InterfaceCast(param1 QAccessible__InterfaceType) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	return (unsafe.Pointer)(C.QAccessibleInterface_interfaceCast(this.h, (C.int)(param1)))
}

type QAccessibleTextInterface struct {
	h  *C.QAccessibleTextInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleTextInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAccessibleTextInterface) cPointer() *C.QAccessibleTextInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleTextInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleTextInterface constructs the type using only CGO pointers.
func newQAccessibleTextInterface(h *C.QAccessibleTextInterface) *QAccessibleTextInterface {
	if h == nil {
		return nil
	}

	return &QAccessibleTextInterface{h: h}
}

// UnsafeNewQAccessibleTextInterface constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleTextInterface(h unsafe.Pointer) *QAccessibleTextInterface {
	return newQAccessibleTextInterface((*C.QAccessibleTextInterface)(h))
}

func (this *QAccessibleTextInterface) Selection(selectionIndex int, startOffset *int, endOffset *int) {
	defer runtime.KeepAlive(this)
	C.QAccessibleTextInterface_selection(this.h, (C.int)(selectionIndex), (*C.int)(unsafe.Pointer(startOffset)), (*C.int)(unsafe.Pointer(endOffset)))
}

func (this *QAccessibleTextInterface) SelectionCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTextInterface_selectionCount(this.h))
}

func (this *QAccessibleTextInterface) AddSelection(startOffset int, endOffset int) {
	defer runtime.KeepAlive(this)
	C.QAccessibleTextInterface_addSelection(this.h, (C.int)(startOffset), (C.int)(endOffset))
}

func (this *QAccessibleTextInterface) RemoveSelection(selectionIndex int) {
	defer runtime.KeepAlive(this)
	C.QAccessibleTextInterface_removeSelection(this.h, (C.int)(selectionIndex))
}

func (this *QAccessibleTextInterface) SetSelection(selectionIndex int, startOffset int, endOffset int) {
	defer runtime.KeepAlive(this)
	C.QAccessibleTextInterface_setSelection(this.h, (C.int)(selectionIndex), (C.int)(startOffset), (C.int)(endOffset))
}

func (this *QAccessibleTextInterface) CursorPosition() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTextInterface_cursorPosition(this.h))
}

func (this *QAccessibleTextInterface) SetCursorPosition(position int) {
	defer runtime.KeepAlive(this)
	C.QAccessibleTextInterface_setCursorPosition(this.h, (C.int)(position))
}

func (this *QAccessibleTextInterface) Text(startOffset int, endOffset int) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAccessibleTextInterface_text(this.h, (C.int)(startOffset), (C.int)(endOffset))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleTextInterface) TextBeforeOffset(offset int, boundaryType QAccessible__TextBoundaryType, startOffset *int, endOffset *int) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAccessibleTextInterface_textBeforeOffset(this.h, (C.int)(offset), (C.int)(boundaryType), (*C.int)(unsafe.Pointer(startOffset)), (*C.int)(unsafe.Pointer(endOffset)))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleTextInterface) TextAfterOffset(offset int, boundaryType QAccessible__TextBoundaryType, startOffset *int, endOffset *int) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAccessibleTextInterface_textAfterOffset(this.h, (C.int)(offset), (C.int)(boundaryType), (*C.int)(unsafe.Pointer(startOffset)), (*C.int)(unsafe.Pointer(endOffset)))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleTextInterface) TextAtOffset(offset int, boundaryType QAccessible__TextBoundaryType, startOffset *int, endOffset *int) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAccessibleTextInterface_textAtOffset(this.h, (C.int)(offset), (C.int)(boundaryType), (*C.int)(unsafe.Pointer(startOffset)), (*C.int)(unsafe.Pointer(endOffset)))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleTextInterface) CharacterCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTextInterface_characterCount(this.h))
}

func (this *QAccessibleTextInterface) CharacterRect(offset int) *QRect {
	defer runtime.KeepAlive(this)
	_goptr := newQRect(C.QAccessibleTextInterface_characterRect(this.h, (C.int)(offset)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleTextInterface) OffsetAtPoint(point *QPoint) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(point)
	return (int)(C.QAccessibleTextInterface_offsetAtPoint(this.h, point.cPointer()))
}

func (this *QAccessibleTextInterface) ScrollToSubstring(startIndex int, endIndex int) {
	defer runtime.KeepAlive(this)
	C.QAccessibleTextInterface_scrollToSubstring(this.h, (C.int)(startIndex), (C.int)(endIndex))
}

func (this *QAccessibleTextInterface) Attributes(offset int, startOffset *int, endOffset *int) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAccessibleTextInterface_attributes(this.h, (C.int)(offset), (*C.int)(unsafe.Pointer(startOffset)), (*C.int)(unsafe.Pointer(endOffset)))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAccessibleTextInterface) Delete() {
	C.QAccessibleTextInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleTextInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleTextInterface_delete((*C.QAccessibleTextInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleEditableTextInterface struct {
	h  *C.QAccessibleEditableTextInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleEditableTextInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAccessibleEditableTextInterface) cPointer() *C.QAccessibleEditableTextInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleEditableTextInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleEditableTextInterface constructs the type using only CGO pointers.
func newQAccessibleEditableTextInterface(h *C.QAccessibleEditableTextInterface) *QAccessibleEditableTextInterface {
	if h == nil {
		return nil
	}

	return &QAccessibleEditableTextInterface{h: h}
}

// UnsafeNewQAccessibleEditableTextInterface constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleEditableTextInterface(h unsafe.Pointer) *QAccessibleEditableTextInterface {
	return newQAccessibleEditableTextInterface((*C.QAccessibleEditableTextInterface)(h))
}

func (this *QAccessibleEditableTextInterface) DeleteText(startOffset int, endOffset int) {
	defer runtime.KeepAlive(this)
	C.QAccessibleEditableTextInterface_deleteText(this.h, (C.int)(startOffset), (C.int)(endOffset))
}

func (this *QAccessibleEditableTextInterface) InsertText(offset int, text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QAccessibleEditableTextInterface_insertText(this.h, (C.int)(offset), text_ms)
}

func (this *QAccessibleEditableTextInterface) ReplaceText(startOffset int, endOffset int, text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QAccessibleEditableTextInterface_replaceText(this.h, (C.int)(startOffset), (C.int)(endOffset), text_ms)
}

// Delete this object from C++ memory.
func (this *QAccessibleEditableTextInterface) Delete() {
	C.QAccessibleEditableTextInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleEditableTextInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleEditableTextInterface_delete((*C.QAccessibleEditableTextInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleValueInterface struct {
	h  *C.QAccessibleValueInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleValueInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAccessibleValueInterface) cPointer() *C.QAccessibleValueInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleValueInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleValueInterface constructs the type using only CGO pointers.
func newQAccessibleValueInterface(h *C.QAccessibleValueInterface) *QAccessibleValueInterface {
	if h == nil {
		return nil
	}

	return &QAccessibleValueInterface{h: h}
}

// UnsafeNewQAccessibleValueInterface constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleValueInterface(h unsafe.Pointer) *QAccessibleValueInterface {
	return newQAccessibleValueInterface((*C.QAccessibleValueInterface)(h))
}

func (this *QAccessibleValueInterface) CurrentValue() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QAccessibleValueInterface_currentValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleValueInterface) SetCurrentValue(value *QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	C.QAccessibleValueInterface_setCurrentValue(this.h, value.cPointer())
}

func (this *QAccessibleValueInterface) MaximumValue() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QAccessibleValueInterface_maximumValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleValueInterface) MinimumValue() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QAccessibleValueInterface_minimumValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleValueInterface) MinimumStepSize() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QAccessibleValueInterface_minimumStepSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QAccessibleValueInterface) Delete() {
	C.QAccessibleValueInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleValueInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleValueInterface_delete((*C.QAccessibleValueInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleTableCellInterface struct {
	h  *C.QAccessibleTableCellInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleTableCellInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAccessibleTableCellInterface) cPointer() *C.QAccessibleTableCellInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleTableCellInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleTableCellInterface constructs the type using only CGO pointers.
func newQAccessibleTableCellInterface(h *C.QAccessibleTableCellInterface) *QAccessibleTableCellInterface {
	if h == nil {
		return nil
	}

	return &QAccessibleTableCellInterface{h: h}
}

// UnsafeNewQAccessibleTableCellInterface constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleTableCellInterface(h unsafe.Pointer) *QAccessibleTableCellInterface {
	return newQAccessibleTableCellInterface((*C.QAccessibleTableCellInterface)(h))
}

func (this *QAccessibleTableCellInterface) IsSelected() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAccessibleTableCellInterface_isSelected(this.h))
}

func (this *QAccessibleTableCellInterface) ColumnHeaderCells() []*QAccessibleInterface {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QAccessibleTableCellInterface_columnHeaderCells(this.h)
	_ret := make([]*QAccessibleInterface, int(_ma.len))
	_outCast := unsafe.Slice((**C.QAccessibleInterface)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAccessibleInterface(_outCast[i])
	}
	return _ret
}

func (this *QAccessibleTableCellInterface) RowHeaderCells() []*QAccessibleInterface {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QAccessibleTableCellInterface_rowHeaderCells(this.h)
	_ret := make([]*QAccessibleInterface, int(_ma.len))
	_outCast := unsafe.Slice((**C.QAccessibleInterface)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAccessibleInterface(_outCast[i])
	}
	return _ret
}

func (this *QAccessibleTableCellInterface) ColumnIndex() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTableCellInterface_columnIndex(this.h))
}

func (this *QAccessibleTableCellInterface) RowIndex() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTableCellInterface_rowIndex(this.h))
}

func (this *QAccessibleTableCellInterface) ColumnExtent() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTableCellInterface_columnExtent(this.h))
}

func (this *QAccessibleTableCellInterface) RowExtent() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTableCellInterface_rowExtent(this.h))
}

func (this *QAccessibleTableCellInterface) Table() *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleTableCellInterface_table(this.h))
}

// Delete this object from C++ memory.
func (this *QAccessibleTableCellInterface) Delete() {
	C.QAccessibleTableCellInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleTableCellInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleTableCellInterface_delete((*C.QAccessibleTableCellInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleTableInterface struct {
	h  *C.QAccessibleTableInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleTableInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAccessibleTableInterface) cPointer() *C.QAccessibleTableInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleTableInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleTableInterface constructs the type using only CGO pointers.
func newQAccessibleTableInterface(h *C.QAccessibleTableInterface) *QAccessibleTableInterface {
	if h == nil {
		return nil
	}

	return &QAccessibleTableInterface{h: h}
}

// UnsafeNewQAccessibleTableInterface constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleTableInterface(h unsafe.Pointer) *QAccessibleTableInterface {
	return newQAccessibleTableInterface((*C.QAccessibleTableInterface)(h))
}

func (this *QAccessibleTableInterface) Caption() *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleTableInterface_caption(this.h))
}

func (this *QAccessibleTableInterface) Summary() *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleTableInterface_summary(this.h))
}

func (this *QAccessibleTableInterface) CellAt(row int, column int) *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleTableInterface_cellAt(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QAccessibleTableInterface) SelectedCellCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTableInterface_selectedCellCount(this.h))
}

func (this *QAccessibleTableInterface) SelectedCells() []*QAccessibleInterface {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QAccessibleTableInterface_selectedCells(this.h)
	_ret := make([]*QAccessibleInterface, int(_ma.len))
	_outCast := unsafe.Slice((**C.QAccessibleInterface)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAccessibleInterface(_outCast[i])
	}
	return _ret
}

func (this *QAccessibleTableInterface) ColumnDescription(column int) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAccessibleTableInterface_columnDescription(this.h, (C.int)(column))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleTableInterface) RowDescription(row int) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAccessibleTableInterface_rowDescription(this.h, (C.int)(row))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleTableInterface) SelectedColumnCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTableInterface_selectedColumnCount(this.h))
}

func (this *QAccessibleTableInterface) SelectedRowCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTableInterface_selectedRowCount(this.h))
}

func (this *QAccessibleTableInterface) ColumnCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTableInterface_columnCount(this.h))
}

func (this *QAccessibleTableInterface) RowCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTableInterface_rowCount(this.h))
}

func (this *QAccessibleTableInterface) SelectedColumns() []int {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QAccessibleTableInterface_selectedColumns(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := unsafe.Slice((*C.int)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QAccessibleTableInterface) SelectedRows() []int {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QAccessibleTableInterface_selectedRows(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := unsafe.Slice((*C.int)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QAccessibleTableInterface) IsColumnSelected(column int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAccessibleTableInterface_isColumnSelected(this.h, (C.int)(column)))
}

func (this *QAccessibleTableInterface) IsRowSelected(row int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAccessibleTableInterface_isRowSelected(this.h, (C.int)(row)))
}

func (this *QAccessibleTableInterface) SelectRow(row int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAccessibleTableInterface_selectRow(this.h, (C.int)(row)))
}

func (this *QAccessibleTableInterface) SelectColumn(column int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAccessibleTableInterface_selectColumn(this.h, (C.int)(column)))
}

func (this *QAccessibleTableInterface) UnselectRow(row int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAccessibleTableInterface_unselectRow(this.h, (C.int)(row)))
}

func (this *QAccessibleTableInterface) UnselectColumn(column int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAccessibleTableInterface_unselectColumn(this.h, (C.int)(column)))
}

func (this *QAccessibleTableInterface) ModelChange(event *QAccessibleTableModelChangeEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)
	C.QAccessibleTableInterface_modelChange(this.h, event.cPointer())
}

// Delete this object from C++ memory.
func (this *QAccessibleTableInterface) Delete() {
	C.QAccessibleTableInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleTableInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleTableInterface_delete((*C.QAccessibleTableInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleActionInterface struct {
	h  *C.QAccessibleActionInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleActionInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAccessibleActionInterface) cPointer() *C.QAccessibleActionInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleActionInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleActionInterface constructs the type using only CGO pointers.
func newQAccessibleActionInterface(h *C.QAccessibleActionInterface) *QAccessibleActionInterface {
	if h == nil {
		return nil
	}

	return &QAccessibleActionInterface{h: h}
}

// UnsafeNewQAccessibleActionInterface constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleActionInterface(h unsafe.Pointer) *QAccessibleActionInterface {
	return newQAccessibleActionInterface((*C.QAccessibleActionInterface)(h))
}

func QAccessibleActionInterface_Tr(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_tr(sourceText_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_TrUtf8(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_trUtf8(sourceText_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleActionInterface) ActionNames() []string {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QAccessibleActionInterface_actionNames(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QAccessibleActionInterface) LocalizedActionName(name string) string {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_localizedActionName(this.h, name_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleActionInterface) LocalizedActionDescription(name string) string {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_localizedActionDescription(this.h, name_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleActionInterface) DoAction(actionName string) {
	defer runtime.KeepAlive(this)
	actionName_ms := C.struct_miqt_string{}
	actionName_ms.data = C.CString(actionName)
	actionName_ms.len = C.size_t(len(actionName))
	defer C.free(unsafe.Pointer(actionName_ms.data))
	C.QAccessibleActionInterface_doAction(this.h, actionName_ms)
}

func (this *QAccessibleActionInterface) KeyBindingsForAction(actionName string) []string {
	defer runtime.KeepAlive(this)
	actionName_ms := C.struct_miqt_string{}
	actionName_ms.data = C.CString(actionName)
	actionName_ms.len = C.size_t(len(actionName))
	defer C.free(unsafe.Pointer(actionName_ms.data))
	var _ma C.struct_miqt_array = C.QAccessibleActionInterface_keyBindingsForAction(this.h, actionName_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QAccessibleActionInterface_PressAction() string {
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_pressAction()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_IncreaseAction() string {
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_increaseAction()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_DecreaseAction() string {
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_decreaseAction()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_ShowMenuAction() string {
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_showMenuAction()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_SetFocusAction() string {
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_setFocusAction()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_ToggleAction() string {
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_toggleAction()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_ScrollLeftAction() string {
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_scrollLeftAction()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_ScrollRightAction() string {
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_scrollRightAction()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_ScrollUpAction() string {
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_scrollUpAction()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_ScrollDownAction() string {
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_scrollDownAction()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_NextPageAction() string {
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_nextPageAction()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_PreviousPageAction() string {
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_previousPageAction()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_Tr2(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_tr2(sourceText_Cstring, disambiguation_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_Tr3(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_tr3(sourceText_Cstring, disambiguation_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_TrUtf82(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_trUtf82(sourceText_Cstring, disambiguation_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAccessibleActionInterface_TrUtf83(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms C.struct_miqt_string = C.QAccessibleActionInterface_trUtf83(sourceText_Cstring, disambiguation_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAccessibleActionInterface) Delete() {
	C.QAccessibleActionInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleActionInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleActionInterface_delete((*C.QAccessibleActionInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleImageInterface struct {
	h  *C.QAccessibleImageInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleImageInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAccessibleImageInterface) cPointer() *C.QAccessibleImageInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleImageInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleImageInterface constructs the type using only CGO pointers.
func newQAccessibleImageInterface(h *C.QAccessibleImageInterface) *QAccessibleImageInterface {
	if h == nil {
		return nil
	}

	return &QAccessibleImageInterface{h: h}
}

// UnsafeNewQAccessibleImageInterface constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleImageInterface(h unsafe.Pointer) *QAccessibleImageInterface {
	return newQAccessibleImageInterface((*C.QAccessibleImageInterface)(h))
}

func (this *QAccessibleImageInterface) ImageDescription() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAccessibleImageInterface_imageDescription(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleImageInterface) ImageSize() *QSize {
	defer runtime.KeepAlive(this)
	_goptr := newQSize(C.QAccessibleImageInterface_imageSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleImageInterface) ImagePosition() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QAccessibleImageInterface_imagePosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QAccessibleImageInterface) Delete() {
	C.QAccessibleImageInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleImageInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleImageInterface_delete((*C.QAccessibleImageInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleEvent struct {
	h  *C.QAccessibleEvent
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAccessibleEvent) cPointer() *C.QAccessibleEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleEvent constructs the type using only CGO pointers.
func newQAccessibleEvent(h *C.QAccessibleEvent) *QAccessibleEvent {
	if h == nil {
		return nil
	}

	return &QAccessibleEvent{h: h}
}

// UnsafeNewQAccessibleEvent constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleEvent(h unsafe.Pointer) *QAccessibleEvent {
	return newQAccessibleEvent((*C.QAccessibleEvent)(h))
}

// NewQAccessibleEvent constructs a new QAccessibleEvent object.
func NewQAccessibleEvent(obj *QObject, typ QAccessible__Event) *QAccessibleEvent {
	defer runtime.KeepAlive(obj)

	return newQAccessibleEvent(C.QAccessibleEvent_new(obj.cPointer(), (C.int)(typ)))
}

// NewQAccessibleEvent2 constructs a new QAccessibleEvent object.
func NewQAccessibleEvent2(iface *QAccessibleInterface, typ QAccessible__Event) *QAccessibleEvent {
	defer runtime.KeepAlive(iface)

	return newQAccessibleEvent(C.QAccessibleEvent_new2(iface.cPointer(), (C.int)(typ)))
}

func (this *QAccessibleEvent) Type() QAccessible__Event {
	defer runtime.KeepAlive(this)
	return (QAccessible__Event)(C.QAccessibleEvent_type(this.h))
}

func (this *QAccessibleEvent) Object() *QObject {
	defer runtime.KeepAlive(this)
	return newQObject(C.QAccessibleEvent_object(this.h))
}

func (this *QAccessibleEvent) UniqueId() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QAccessibleEvent_uniqueId(this.h))
}

func (this *QAccessibleEvent) SetChild(chld int) {
	defer runtime.KeepAlive(this)
	C.QAccessibleEvent_setChild(this.h, (C.int)(chld))
}

func (this *QAccessibleEvent) Child() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleEvent_child(this.h))
}

func (this *QAccessibleEvent) AccessibleInterface() *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleEvent_accessibleInterface(this.h))
}

func (this *QAccessibleEvent) callVirtualBase_AccessibleInterface() *QAccessibleInterface {
	defer runtime.KeepAlive(this)

	return newQAccessibleInterface(C.QAccessibleEvent_virtualbase_accessibleInterface(unsafe.Pointer(this.h)))

}
func (this *QAccessibleEvent) OnAccessibleInterface(slot func(super func() *QAccessibleInterface) *QAccessibleInterface) {
	ok := C.QAccessibleEvent_override_virtual_accessibleInterface(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibleEvent_accessibleInterface
func miqt_exec_callback_QAccessibleEvent_accessibleInterface(self *C.QAccessibleEvent, cb C.intptr_t) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessibleInterface) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleEvent{h: self}).callVirtualBase_AccessibleInterface)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QAccessibleEvent) Delete() {
	C.QAccessibleEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleEvent_delete((*C.QAccessibleEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleStateChangeEvent struct {
	h  *C.QAccessibleStateChangeEvent
	gc *[1]unsafe.Pointer
	*QAccessibleEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleStateChangeEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QAccessibleEvent.miqtSetGC(gc)
}

func (this *QAccessibleStateChangeEvent) cPointer() *C.QAccessibleStateChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleStateChangeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleStateChangeEvent constructs the type using only CGO pointers.
func newQAccessibleStateChangeEvent(h *C.QAccessibleStateChangeEvent) *QAccessibleStateChangeEvent {
	if h == nil {
		return nil
	}
	var outptr_QAccessibleEvent *C.QAccessibleEvent = nil
	C.QAccessibleStateChangeEvent_virtbase(h, &outptr_QAccessibleEvent)

	return &QAccessibleStateChangeEvent{h: h,
		QAccessibleEvent: newQAccessibleEvent(outptr_QAccessibleEvent)}
}

// UnsafeNewQAccessibleStateChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleStateChangeEvent(h unsafe.Pointer) *QAccessibleStateChangeEvent {
	return newQAccessibleStateChangeEvent((*C.QAccessibleStateChangeEvent)(h))
}

// NewQAccessibleStateChangeEvent constructs a new QAccessibleStateChangeEvent object.
func NewQAccessibleStateChangeEvent(obj *QObject, state QAccessible__State) *QAccessibleStateChangeEvent {
	defer runtime.KeepAlive(obj)
	defer runtime.KeepAlive(state)

	return newQAccessibleStateChangeEvent(C.QAccessibleStateChangeEvent_new(obj.cPointer(), state.cPointer()))
}

// NewQAccessibleStateChangeEvent2 constructs a new QAccessibleStateChangeEvent object.
func NewQAccessibleStateChangeEvent2(iface *QAccessibleInterface, state QAccessible__State) *QAccessibleStateChangeEvent {
	defer runtime.KeepAlive(iface)
	defer runtime.KeepAlive(state)

	return newQAccessibleStateChangeEvent(C.QAccessibleStateChangeEvent_new2(iface.cPointer(), state.cPointer()))
}

func (this *QAccessibleStateChangeEvent) ChangedStates() *QAccessible__State {
	defer runtime.KeepAlive(this)
	_goptr := newQAccessible__State(C.QAccessibleStateChangeEvent_changedStates(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleStateChangeEvent) callVirtualBase_AccessibleInterface() *QAccessibleInterface {
	defer runtime.KeepAlive(this)

	return newQAccessibleInterface(C.QAccessibleStateChangeEvent_virtualbase_accessibleInterface(unsafe.Pointer(this.h)))

}
func (this *QAccessibleStateChangeEvent) OnAccessibleInterface(slot func(super func() *QAccessibleInterface) *QAccessibleInterface) {
	ok := C.QAccessibleStateChangeEvent_override_virtual_accessibleInterface(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibleStateChangeEvent_accessibleInterface
func miqt_exec_callback_QAccessibleStateChangeEvent_accessibleInterface(self *C.QAccessibleStateChangeEvent, cb C.intptr_t) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessibleInterface) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleStateChangeEvent{h: self}).callVirtualBase_AccessibleInterface)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QAccessibleStateChangeEvent) Delete() {
	C.QAccessibleStateChangeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleStateChangeEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleStateChangeEvent_delete((*C.QAccessibleStateChangeEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleTextCursorEvent struct {
	h  *C.QAccessibleTextCursorEvent
	gc *[1]unsafe.Pointer
	*QAccessibleEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleTextCursorEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QAccessibleEvent.miqtSetGC(gc)
}

func (this *QAccessibleTextCursorEvent) cPointer() *C.QAccessibleTextCursorEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleTextCursorEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleTextCursorEvent constructs the type using only CGO pointers.
func newQAccessibleTextCursorEvent(h *C.QAccessibleTextCursorEvent) *QAccessibleTextCursorEvent {
	if h == nil {
		return nil
	}
	var outptr_QAccessibleEvent *C.QAccessibleEvent = nil
	C.QAccessibleTextCursorEvent_virtbase(h, &outptr_QAccessibleEvent)

	return &QAccessibleTextCursorEvent{h: h,
		QAccessibleEvent: newQAccessibleEvent(outptr_QAccessibleEvent)}
}

// UnsafeNewQAccessibleTextCursorEvent constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleTextCursorEvent(h unsafe.Pointer) *QAccessibleTextCursorEvent {
	return newQAccessibleTextCursorEvent((*C.QAccessibleTextCursorEvent)(h))
}

// NewQAccessibleTextCursorEvent constructs a new QAccessibleTextCursorEvent object.
func NewQAccessibleTextCursorEvent(obj *QObject, cursorPos int) *QAccessibleTextCursorEvent {
	defer runtime.KeepAlive(obj)

	return newQAccessibleTextCursorEvent(C.QAccessibleTextCursorEvent_new(obj.cPointer(), (C.int)(cursorPos)))
}

// NewQAccessibleTextCursorEvent2 constructs a new QAccessibleTextCursorEvent object.
func NewQAccessibleTextCursorEvent2(iface *QAccessibleInterface, cursorPos int) *QAccessibleTextCursorEvent {
	defer runtime.KeepAlive(iface)

	return newQAccessibleTextCursorEvent(C.QAccessibleTextCursorEvent_new2(iface.cPointer(), (C.int)(cursorPos)))
}

func (this *QAccessibleTextCursorEvent) SetCursorPosition(position int) {
	defer runtime.KeepAlive(this)
	C.QAccessibleTextCursorEvent_setCursorPosition(this.h, (C.int)(position))
}

func (this *QAccessibleTextCursorEvent) CursorPosition() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTextCursorEvent_cursorPosition(this.h))
}

func (this *QAccessibleTextCursorEvent) callVirtualBase_AccessibleInterface() *QAccessibleInterface {
	defer runtime.KeepAlive(this)

	return newQAccessibleInterface(C.QAccessibleTextCursorEvent_virtualbase_accessibleInterface(unsafe.Pointer(this.h)))

}
func (this *QAccessibleTextCursorEvent) OnAccessibleInterface(slot func(super func() *QAccessibleInterface) *QAccessibleInterface) {
	ok := C.QAccessibleTextCursorEvent_override_virtual_accessibleInterface(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibleTextCursorEvent_accessibleInterface
func miqt_exec_callback_QAccessibleTextCursorEvent_accessibleInterface(self *C.QAccessibleTextCursorEvent, cb C.intptr_t) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessibleInterface) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleTextCursorEvent{h: self}).callVirtualBase_AccessibleInterface)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QAccessibleTextCursorEvent) Delete() {
	C.QAccessibleTextCursorEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleTextCursorEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleTextCursorEvent_delete((*C.QAccessibleTextCursorEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleTextSelectionEvent struct {
	h  *C.QAccessibleTextSelectionEvent
	gc *[1]unsafe.Pointer
	*QAccessibleTextCursorEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleTextSelectionEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QAccessibleTextCursorEvent.miqtSetGC(gc)
}

func (this *QAccessibleTextSelectionEvent) cPointer() *C.QAccessibleTextSelectionEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleTextSelectionEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleTextSelectionEvent constructs the type using only CGO pointers.
func newQAccessibleTextSelectionEvent(h *C.QAccessibleTextSelectionEvent) *QAccessibleTextSelectionEvent {
	if h == nil {
		return nil
	}
	var outptr_QAccessibleTextCursorEvent *C.QAccessibleTextCursorEvent = nil
	C.QAccessibleTextSelectionEvent_virtbase(h, &outptr_QAccessibleTextCursorEvent)

	return &QAccessibleTextSelectionEvent{h: h,
		QAccessibleTextCursorEvent: newQAccessibleTextCursorEvent(outptr_QAccessibleTextCursorEvent)}
}

// UnsafeNewQAccessibleTextSelectionEvent constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleTextSelectionEvent(h unsafe.Pointer) *QAccessibleTextSelectionEvent {
	return newQAccessibleTextSelectionEvent((*C.QAccessibleTextSelectionEvent)(h))
}

// NewQAccessibleTextSelectionEvent constructs a new QAccessibleTextSelectionEvent object.
func NewQAccessibleTextSelectionEvent(obj *QObject, start int, end int) *QAccessibleTextSelectionEvent {
	defer runtime.KeepAlive(obj)

	return newQAccessibleTextSelectionEvent(C.QAccessibleTextSelectionEvent_new(obj.cPointer(), (C.int)(start), (C.int)(end)))
}

// NewQAccessibleTextSelectionEvent2 constructs a new QAccessibleTextSelectionEvent object.
func NewQAccessibleTextSelectionEvent2(iface *QAccessibleInterface, start int, end int) *QAccessibleTextSelectionEvent {
	defer runtime.KeepAlive(iface)

	return newQAccessibleTextSelectionEvent(C.QAccessibleTextSelectionEvent_new2(iface.cPointer(), (C.int)(start), (C.int)(end)))
}

func (this *QAccessibleTextSelectionEvent) SetSelection(start int, end int) {
	defer runtime.KeepAlive(this)
	C.QAccessibleTextSelectionEvent_setSelection(this.h, (C.int)(start), (C.int)(end))
}

func (this *QAccessibleTextSelectionEvent) SelectionStart() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTextSelectionEvent_selectionStart(this.h))
}

func (this *QAccessibleTextSelectionEvent) SelectionEnd() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTextSelectionEvent_selectionEnd(this.h))
}

func (this *QAccessibleTextSelectionEvent) callVirtualBase_AccessibleInterface() *QAccessibleInterface {
	defer runtime.KeepAlive(this)

	return newQAccessibleInterface(C.QAccessibleTextSelectionEvent_virtualbase_accessibleInterface(unsafe.Pointer(this.h)))

}
func (this *QAccessibleTextSelectionEvent) OnAccessibleInterface(slot func(super func() *QAccessibleInterface) *QAccessibleInterface) {
	ok := C.QAccessibleTextSelectionEvent_override_virtual_accessibleInterface(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibleTextSelectionEvent_accessibleInterface
func miqt_exec_callback_QAccessibleTextSelectionEvent_accessibleInterface(self *C.QAccessibleTextSelectionEvent, cb C.intptr_t) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessibleInterface) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleTextSelectionEvent{h: self}).callVirtualBase_AccessibleInterface)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QAccessibleTextSelectionEvent) Delete() {
	C.QAccessibleTextSelectionEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleTextSelectionEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleTextSelectionEvent_delete((*C.QAccessibleTextSelectionEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleTextInsertEvent struct {
	h  *C.QAccessibleTextInsertEvent
	gc *[1]unsafe.Pointer
	*QAccessibleTextCursorEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleTextInsertEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QAccessibleTextCursorEvent.miqtSetGC(gc)
}

func (this *QAccessibleTextInsertEvent) cPointer() *C.QAccessibleTextInsertEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleTextInsertEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleTextInsertEvent constructs the type using only CGO pointers.
func newQAccessibleTextInsertEvent(h *C.QAccessibleTextInsertEvent) *QAccessibleTextInsertEvent {
	if h == nil {
		return nil
	}
	var outptr_QAccessibleTextCursorEvent *C.QAccessibleTextCursorEvent = nil
	C.QAccessibleTextInsertEvent_virtbase(h, &outptr_QAccessibleTextCursorEvent)

	return &QAccessibleTextInsertEvent{h: h,
		QAccessibleTextCursorEvent: newQAccessibleTextCursorEvent(outptr_QAccessibleTextCursorEvent)}
}

// UnsafeNewQAccessibleTextInsertEvent constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleTextInsertEvent(h unsafe.Pointer) *QAccessibleTextInsertEvent {
	return newQAccessibleTextInsertEvent((*C.QAccessibleTextInsertEvent)(h))
}

// NewQAccessibleTextInsertEvent constructs a new QAccessibleTextInsertEvent object.
func NewQAccessibleTextInsertEvent(obj *QObject, position int, text string) *QAccessibleTextInsertEvent {
	defer runtime.KeepAlive(obj)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQAccessibleTextInsertEvent(C.QAccessibleTextInsertEvent_new(obj.cPointer(), (C.int)(position), text_ms))
}

// NewQAccessibleTextInsertEvent2 constructs a new QAccessibleTextInsertEvent object.
func NewQAccessibleTextInsertEvent2(iface *QAccessibleInterface, position int, text string) *QAccessibleTextInsertEvent {
	defer runtime.KeepAlive(iface)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQAccessibleTextInsertEvent(C.QAccessibleTextInsertEvent_new2(iface.cPointer(), (C.int)(position), text_ms))
}

func (this *QAccessibleTextInsertEvent) TextInserted() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAccessibleTextInsertEvent_textInserted(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleTextInsertEvent) ChangePosition() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTextInsertEvent_changePosition(this.h))
}

func (this *QAccessibleTextInsertEvent) callVirtualBase_AccessibleInterface() *QAccessibleInterface {
	defer runtime.KeepAlive(this)

	return newQAccessibleInterface(C.QAccessibleTextInsertEvent_virtualbase_accessibleInterface(unsafe.Pointer(this.h)))

}
func (this *QAccessibleTextInsertEvent) OnAccessibleInterface(slot func(super func() *QAccessibleInterface) *QAccessibleInterface) {
	ok := C.QAccessibleTextInsertEvent_override_virtual_accessibleInterface(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibleTextInsertEvent_accessibleInterface
func miqt_exec_callback_QAccessibleTextInsertEvent_accessibleInterface(self *C.QAccessibleTextInsertEvent, cb C.intptr_t) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessibleInterface) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleTextInsertEvent{h: self}).callVirtualBase_AccessibleInterface)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QAccessibleTextInsertEvent) Delete() {
	C.QAccessibleTextInsertEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleTextInsertEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleTextInsertEvent_delete((*C.QAccessibleTextInsertEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleTextRemoveEvent struct {
	h  *C.QAccessibleTextRemoveEvent
	gc *[1]unsafe.Pointer
	*QAccessibleTextCursorEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleTextRemoveEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QAccessibleTextCursorEvent.miqtSetGC(gc)
}

func (this *QAccessibleTextRemoveEvent) cPointer() *C.QAccessibleTextRemoveEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleTextRemoveEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleTextRemoveEvent constructs the type using only CGO pointers.
func newQAccessibleTextRemoveEvent(h *C.QAccessibleTextRemoveEvent) *QAccessibleTextRemoveEvent {
	if h == nil {
		return nil
	}
	var outptr_QAccessibleTextCursorEvent *C.QAccessibleTextCursorEvent = nil
	C.QAccessibleTextRemoveEvent_virtbase(h, &outptr_QAccessibleTextCursorEvent)

	return &QAccessibleTextRemoveEvent{h: h,
		QAccessibleTextCursorEvent: newQAccessibleTextCursorEvent(outptr_QAccessibleTextCursorEvent)}
}

// UnsafeNewQAccessibleTextRemoveEvent constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleTextRemoveEvent(h unsafe.Pointer) *QAccessibleTextRemoveEvent {
	return newQAccessibleTextRemoveEvent((*C.QAccessibleTextRemoveEvent)(h))
}

// NewQAccessibleTextRemoveEvent constructs a new QAccessibleTextRemoveEvent object.
func NewQAccessibleTextRemoveEvent(obj *QObject, position int, text string) *QAccessibleTextRemoveEvent {
	defer runtime.KeepAlive(obj)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQAccessibleTextRemoveEvent(C.QAccessibleTextRemoveEvent_new(obj.cPointer(), (C.int)(position), text_ms))
}

// NewQAccessibleTextRemoveEvent2 constructs a new QAccessibleTextRemoveEvent object.
func NewQAccessibleTextRemoveEvent2(iface *QAccessibleInterface, position int, text string) *QAccessibleTextRemoveEvent {
	defer runtime.KeepAlive(iface)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQAccessibleTextRemoveEvent(C.QAccessibleTextRemoveEvent_new2(iface.cPointer(), (C.int)(position), text_ms))
}

func (this *QAccessibleTextRemoveEvent) TextRemoved() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAccessibleTextRemoveEvent_textRemoved(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleTextRemoveEvent) ChangePosition() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTextRemoveEvent_changePosition(this.h))
}

func (this *QAccessibleTextRemoveEvent) callVirtualBase_AccessibleInterface() *QAccessibleInterface {
	defer runtime.KeepAlive(this)

	return newQAccessibleInterface(C.QAccessibleTextRemoveEvent_virtualbase_accessibleInterface(unsafe.Pointer(this.h)))

}
func (this *QAccessibleTextRemoveEvent) OnAccessibleInterface(slot func(super func() *QAccessibleInterface) *QAccessibleInterface) {
	ok := C.QAccessibleTextRemoveEvent_override_virtual_accessibleInterface(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibleTextRemoveEvent_accessibleInterface
func miqt_exec_callback_QAccessibleTextRemoveEvent_accessibleInterface(self *C.QAccessibleTextRemoveEvent, cb C.intptr_t) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessibleInterface) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleTextRemoveEvent{h: self}).callVirtualBase_AccessibleInterface)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QAccessibleTextRemoveEvent) Delete() {
	C.QAccessibleTextRemoveEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleTextRemoveEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleTextRemoveEvent_delete((*C.QAccessibleTextRemoveEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleTextUpdateEvent struct {
	h  *C.QAccessibleTextUpdateEvent
	gc *[1]unsafe.Pointer
	*QAccessibleTextCursorEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleTextUpdateEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QAccessibleTextCursorEvent.miqtSetGC(gc)
}

func (this *QAccessibleTextUpdateEvent) cPointer() *C.QAccessibleTextUpdateEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleTextUpdateEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleTextUpdateEvent constructs the type using only CGO pointers.
func newQAccessibleTextUpdateEvent(h *C.QAccessibleTextUpdateEvent) *QAccessibleTextUpdateEvent {
	if h == nil {
		return nil
	}
	var outptr_QAccessibleTextCursorEvent *C.QAccessibleTextCursorEvent = nil
	C.QAccessibleTextUpdateEvent_virtbase(h, &outptr_QAccessibleTextCursorEvent)

	return &QAccessibleTextUpdateEvent{h: h,
		QAccessibleTextCursorEvent: newQAccessibleTextCursorEvent(outptr_QAccessibleTextCursorEvent)}
}

// UnsafeNewQAccessibleTextUpdateEvent constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleTextUpdateEvent(h unsafe.Pointer) *QAccessibleTextUpdateEvent {
	return newQAccessibleTextUpdateEvent((*C.QAccessibleTextUpdateEvent)(h))
}

// NewQAccessibleTextUpdateEvent constructs a new QAccessibleTextUpdateEvent object.
func NewQAccessibleTextUpdateEvent(obj *QObject, position int, oldText string, text string) *QAccessibleTextUpdateEvent {
	defer runtime.KeepAlive(obj)
	oldText_ms := C.struct_miqt_string{}
	oldText_ms.data = C.CString(oldText)
	oldText_ms.len = C.size_t(len(oldText))
	defer C.free(unsafe.Pointer(oldText_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQAccessibleTextUpdateEvent(C.QAccessibleTextUpdateEvent_new(obj.cPointer(), (C.int)(position), oldText_ms, text_ms))
}

// NewQAccessibleTextUpdateEvent2 constructs a new QAccessibleTextUpdateEvent object.
func NewQAccessibleTextUpdateEvent2(iface *QAccessibleInterface, position int, oldText string, text string) *QAccessibleTextUpdateEvent {
	defer runtime.KeepAlive(iface)
	oldText_ms := C.struct_miqt_string{}
	oldText_ms.data = C.CString(oldText)
	oldText_ms.len = C.size_t(len(oldText))
	defer C.free(unsafe.Pointer(oldText_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQAccessibleTextUpdateEvent(C.QAccessibleTextUpdateEvent_new2(iface.cPointer(), (C.int)(position), oldText_ms, text_ms))
}

func (this *QAccessibleTextUpdateEvent) TextRemoved() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAccessibleTextUpdateEvent_textRemoved(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleTextUpdateEvent) TextInserted() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAccessibleTextUpdateEvent_textInserted(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleTextUpdateEvent) ChangePosition() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTextUpdateEvent_changePosition(this.h))
}

func (this *QAccessibleTextUpdateEvent) callVirtualBase_AccessibleInterface() *QAccessibleInterface {
	defer runtime.KeepAlive(this)

	return newQAccessibleInterface(C.QAccessibleTextUpdateEvent_virtualbase_accessibleInterface(unsafe.Pointer(this.h)))

}
func (this *QAccessibleTextUpdateEvent) OnAccessibleInterface(slot func(super func() *QAccessibleInterface) *QAccessibleInterface) {
	ok := C.QAccessibleTextUpdateEvent_override_virtual_accessibleInterface(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibleTextUpdateEvent_accessibleInterface
func miqt_exec_callback_QAccessibleTextUpdateEvent_accessibleInterface(self *C.QAccessibleTextUpdateEvent, cb C.intptr_t) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessibleInterface) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleTextUpdateEvent{h: self}).callVirtualBase_AccessibleInterface)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QAccessibleTextUpdateEvent) Delete() {
	C.QAccessibleTextUpdateEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleTextUpdateEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleTextUpdateEvent_delete((*C.QAccessibleTextUpdateEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleValueChangeEvent struct {
	h  *C.QAccessibleValueChangeEvent
	gc *[1]unsafe.Pointer
	*QAccessibleEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleValueChangeEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QAccessibleEvent.miqtSetGC(gc)
}

func (this *QAccessibleValueChangeEvent) cPointer() *C.QAccessibleValueChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleValueChangeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleValueChangeEvent constructs the type using only CGO pointers.
func newQAccessibleValueChangeEvent(h *C.QAccessibleValueChangeEvent) *QAccessibleValueChangeEvent {
	if h == nil {
		return nil
	}
	var outptr_QAccessibleEvent *C.QAccessibleEvent = nil
	C.QAccessibleValueChangeEvent_virtbase(h, &outptr_QAccessibleEvent)

	return &QAccessibleValueChangeEvent{h: h,
		QAccessibleEvent: newQAccessibleEvent(outptr_QAccessibleEvent)}
}

// UnsafeNewQAccessibleValueChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleValueChangeEvent(h unsafe.Pointer) *QAccessibleValueChangeEvent {
	return newQAccessibleValueChangeEvent((*C.QAccessibleValueChangeEvent)(h))
}

// NewQAccessibleValueChangeEvent constructs a new QAccessibleValueChangeEvent object.
func NewQAccessibleValueChangeEvent(obj *QObject, val *QVariant) *QAccessibleValueChangeEvent {
	defer runtime.KeepAlive(obj)
	defer runtime.KeepAlive(val)

	return newQAccessibleValueChangeEvent(C.QAccessibleValueChangeEvent_new(obj.cPointer(), val.cPointer()))
}

// NewQAccessibleValueChangeEvent2 constructs a new QAccessibleValueChangeEvent object.
func NewQAccessibleValueChangeEvent2(iface *QAccessibleInterface, val *QVariant) *QAccessibleValueChangeEvent {
	defer runtime.KeepAlive(iface)
	defer runtime.KeepAlive(val)

	return newQAccessibleValueChangeEvent(C.QAccessibleValueChangeEvent_new2(iface.cPointer(), val.cPointer()))
}

func (this *QAccessibleValueChangeEvent) SetValue(val *QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val)
	C.QAccessibleValueChangeEvent_setValue(this.h, val.cPointer())
}

func (this *QAccessibleValueChangeEvent) Value() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QAccessibleValueChangeEvent_value(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleValueChangeEvent) callVirtualBase_AccessibleInterface() *QAccessibleInterface {
	defer runtime.KeepAlive(this)

	return newQAccessibleInterface(C.QAccessibleValueChangeEvent_virtualbase_accessibleInterface(unsafe.Pointer(this.h)))

}
func (this *QAccessibleValueChangeEvent) OnAccessibleInterface(slot func(super func() *QAccessibleInterface) *QAccessibleInterface) {
	ok := C.QAccessibleValueChangeEvent_override_virtual_accessibleInterface(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibleValueChangeEvent_accessibleInterface
func miqt_exec_callback_QAccessibleValueChangeEvent_accessibleInterface(self *C.QAccessibleValueChangeEvent, cb C.intptr_t) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessibleInterface) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleValueChangeEvent{h: self}).callVirtualBase_AccessibleInterface)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QAccessibleValueChangeEvent) Delete() {
	C.QAccessibleValueChangeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleValueChangeEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleValueChangeEvent_delete((*C.QAccessibleValueChangeEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessibleTableModelChangeEvent struct {
	h  *C.QAccessibleTableModelChangeEvent
	gc *[1]unsafe.Pointer
	*QAccessibleEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleTableModelChangeEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QAccessibleEvent.miqtSetGC(gc)
}

func (this *QAccessibleTableModelChangeEvent) cPointer() *C.QAccessibleTableModelChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleTableModelChangeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleTableModelChangeEvent constructs the type using only CGO pointers.
func newQAccessibleTableModelChangeEvent(h *C.QAccessibleTableModelChangeEvent) *QAccessibleTableModelChangeEvent {
	if h == nil {
		return nil
	}
	var outptr_QAccessibleEvent *C.QAccessibleEvent = nil
	C.QAccessibleTableModelChangeEvent_virtbase(h, &outptr_QAccessibleEvent)

	return &QAccessibleTableModelChangeEvent{h: h,
		QAccessibleEvent: newQAccessibleEvent(outptr_QAccessibleEvent)}
}

// UnsafeNewQAccessibleTableModelChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleTableModelChangeEvent(h unsafe.Pointer) *QAccessibleTableModelChangeEvent {
	return newQAccessibleTableModelChangeEvent((*C.QAccessibleTableModelChangeEvent)(h))
}

// NewQAccessibleTableModelChangeEvent constructs a new QAccessibleTableModelChangeEvent object.
func NewQAccessibleTableModelChangeEvent(obj *QObject, changeType QAccessibleTableModelChangeEvent__ModelChangeType) *QAccessibleTableModelChangeEvent {
	defer runtime.KeepAlive(obj)

	return newQAccessibleTableModelChangeEvent(C.QAccessibleTableModelChangeEvent_new(obj.cPointer(), (C.int)(changeType)))
}

// NewQAccessibleTableModelChangeEvent2 constructs a new QAccessibleTableModelChangeEvent object.
func NewQAccessibleTableModelChangeEvent2(iface *QAccessibleInterface, changeType QAccessibleTableModelChangeEvent__ModelChangeType) *QAccessibleTableModelChangeEvent {
	defer runtime.KeepAlive(iface)

	return newQAccessibleTableModelChangeEvent(C.QAccessibleTableModelChangeEvent_new2(iface.cPointer(), (C.int)(changeType)))
}

func (this *QAccessibleTableModelChangeEvent) SetModelChangeType(changeType QAccessibleTableModelChangeEvent__ModelChangeType) {
	defer runtime.KeepAlive(this)
	C.QAccessibleTableModelChangeEvent_setModelChangeType(this.h, (C.int)(changeType))
}

func (this *QAccessibleTableModelChangeEvent) ModelChangeType() QAccessibleTableModelChangeEvent__ModelChangeType {
	defer runtime.KeepAlive(this)
	return (QAccessibleTableModelChangeEvent__ModelChangeType)(C.QAccessibleTableModelChangeEvent_modelChangeType(this.h))
}

func (this *QAccessibleTableModelChangeEvent) SetFirstRow(row int) {
	defer runtime.KeepAlive(this)
	C.QAccessibleTableModelChangeEvent_setFirstRow(this.h, (C.int)(row))
}

func (this *QAccessibleTableModelChangeEvent) SetFirstColumn(col int) {
	defer runtime.KeepAlive(this)
	C.QAccessibleTableModelChangeEvent_setFirstColumn(this.h, (C.int)(col))
}

func (this *QAccessibleTableModelChangeEvent) SetLastRow(row int) {
	defer runtime.KeepAlive(this)
	C.QAccessibleTableModelChangeEvent_setLastRow(this.h, (C.int)(row))
}

func (this *QAccessibleTableModelChangeEvent) SetLastColumn(col int) {
	defer runtime.KeepAlive(this)
	C.QAccessibleTableModelChangeEvent_setLastColumn(this.h, (C.int)(col))
}

func (this *QAccessibleTableModelChangeEvent) FirstRow() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTableModelChangeEvent_firstRow(this.h))
}

func (this *QAccessibleTableModelChangeEvent) FirstColumn() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTableModelChangeEvent_firstColumn(this.h))
}

func (this *QAccessibleTableModelChangeEvent) LastRow() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTableModelChangeEvent_lastRow(this.h))
}

func (this *QAccessibleTableModelChangeEvent) LastColumn() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleTableModelChangeEvent_lastColumn(this.h))
}

func (this *QAccessibleTableModelChangeEvent) callVirtualBase_AccessibleInterface() *QAccessibleInterface {
	defer runtime.KeepAlive(this)

	return newQAccessibleInterface(C.QAccessibleTableModelChangeEvent_virtualbase_accessibleInterface(unsafe.Pointer(this.h)))

}
func (this *QAccessibleTableModelChangeEvent) OnAccessibleInterface(slot func(super func() *QAccessibleInterface) *QAccessibleInterface) {
	ok := C.QAccessibleTableModelChangeEvent_override_virtual_accessibleInterface(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAccessibleTableModelChangeEvent_accessibleInterface
func miqt_exec_callback_QAccessibleTableModelChangeEvent_accessibleInterface(self *C.QAccessibleTableModelChangeEvent, cb C.intptr_t) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessibleInterface) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleTableModelChangeEvent{h: self}).callVirtualBase_AccessibleInterface)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QAccessibleTableModelChangeEvent) Delete() {
	C.QAccessibleTableModelChangeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleTableModelChangeEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleTableModelChangeEvent_delete((*C.QAccessibleTableModelChangeEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessible__State struct {
	h  *C.QAccessible__State
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessible__State) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAccessible__State) cPointer() *C.QAccessible__State {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessible__State) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessible__State constructs the type using only CGO pointers.
func newQAccessible__State(h *C.QAccessible__State) *QAccessible__State {
	if h == nil {
		return nil
	}

	return &QAccessible__State{h: h}
}

// UnsafeNewQAccessible__State constructs the type using only unsafe pointers.
func UnsafeNewQAccessible__State(h unsafe.Pointer) *QAccessible__State {
	return newQAccessible__State((*C.QAccessible__State)(h))
}

// NewQAccessible__State constructs a new QAccessible::State object.
func NewQAccessible__State() *QAccessible__State {

	return newQAccessible__State(C.QAccessible__State_new())
}

// NewQAccessible__State2 constructs a new QAccessible::State object.
func NewQAccessible__State2(param1 *QAccessible__State) *QAccessible__State {
	defer runtime.KeepAlive(param1)

	return newQAccessible__State(C.QAccessible__State_new2(param1.cPointer()))
}

func (this *QAccessible__State) Disabled() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_disabled(this.h))
}

func (this *QAccessible__State) SetDisabled(disabled uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setDisabled(this.h, (C.ulonglong)(disabled))
}

func (this *QAccessible__State) Selected() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_selected(this.h))
}

func (this *QAccessible__State) SetSelected(selected uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setSelected(this.h, (C.ulonglong)(selected))
}

func (this *QAccessible__State) Focusable() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_focusable(this.h))
}

func (this *QAccessible__State) SetFocusable(focusable uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setFocusable(this.h, (C.ulonglong)(focusable))
}

func (this *QAccessible__State) Focused() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_focused(this.h))
}

func (this *QAccessible__State) SetFocused(focused uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setFocused(this.h, (C.ulonglong)(focused))
}

func (this *QAccessible__State) Pressed() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_pressed(this.h))
}

func (this *QAccessible__State) SetPressed(pressed uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setPressed(this.h, (C.ulonglong)(pressed))
}

func (this *QAccessible__State) Checkable() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_checkable(this.h))
}

func (this *QAccessible__State) SetCheckable(checkable uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setCheckable(this.h, (C.ulonglong)(checkable))
}

func (this *QAccessible__State) Checked() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_checked(this.h))
}

func (this *QAccessible__State) SetChecked(checked uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setChecked(this.h, (C.ulonglong)(checked))
}

func (this *QAccessible__State) CheckStateMixed() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_checkStateMixed(this.h))
}

func (this *QAccessible__State) SetCheckStateMixed(checkStateMixed uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setCheckStateMixed(this.h, (C.ulonglong)(checkStateMixed))
}

func (this *QAccessible__State) ReadOnly() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_readOnly(this.h))
}

func (this *QAccessible__State) SetReadOnly(readOnly uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setReadOnly(this.h, (C.ulonglong)(readOnly))
}

func (this *QAccessible__State) HotTracked() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_hotTracked(this.h))
}

func (this *QAccessible__State) SetHotTracked(hotTracked uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setHotTracked(this.h, (C.ulonglong)(hotTracked))
}

func (this *QAccessible__State) DefaultButton() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_defaultButton(this.h))
}

func (this *QAccessible__State) SetDefaultButton(defaultButton uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setDefaultButton(this.h, (C.ulonglong)(defaultButton))
}

func (this *QAccessible__State) Expanded() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_expanded(this.h))
}

func (this *QAccessible__State) SetExpanded(expanded uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setExpanded(this.h, (C.ulonglong)(expanded))
}

func (this *QAccessible__State) Collapsed() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_collapsed(this.h))
}

func (this *QAccessible__State) SetCollapsed(collapsed uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setCollapsed(this.h, (C.ulonglong)(collapsed))
}

func (this *QAccessible__State) Busy() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_busy(this.h))
}

func (this *QAccessible__State) SetBusy(busy uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setBusy(this.h, (C.ulonglong)(busy))
}

func (this *QAccessible__State) Expandable() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_expandable(this.h))
}

func (this *QAccessible__State) SetExpandable(expandable uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setExpandable(this.h, (C.ulonglong)(expandable))
}

func (this *QAccessible__State) Marqueed() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_marqueed(this.h))
}

func (this *QAccessible__State) SetMarqueed(marqueed uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setMarqueed(this.h, (C.ulonglong)(marqueed))
}

func (this *QAccessible__State) Animated() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_animated(this.h))
}

func (this *QAccessible__State) SetAnimated(animated uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setAnimated(this.h, (C.ulonglong)(animated))
}

func (this *QAccessible__State) Invisible() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_invisible(this.h))
}

func (this *QAccessible__State) SetInvisible(invisible uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setInvisible(this.h, (C.ulonglong)(invisible))
}

func (this *QAccessible__State) Offscreen() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_offscreen(this.h))
}

func (this *QAccessible__State) SetOffscreen(offscreen uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setOffscreen(this.h, (C.ulonglong)(offscreen))
}

func (this *QAccessible__State) Sizeable() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_sizeable(this.h))
}

func (this *QAccessible__State) SetSizeable(sizeable uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setSizeable(this.h, (C.ulonglong)(sizeable))
}

func (this *QAccessible__State) Movable() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_movable(this.h))
}

func (this *QAccessible__State) SetMovable(movable uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setMovable(this.h, (C.ulonglong)(movable))
}

func (this *QAccessible__State) SelfVoicing() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_selfVoicing(this.h))
}

func (this *QAccessible__State) SetSelfVoicing(selfVoicing uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setSelfVoicing(this.h, (C.ulonglong)(selfVoicing))
}

func (this *QAccessible__State) Selectable() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_selectable(this.h))
}

func (this *QAccessible__State) SetSelectable(selectable uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setSelectable(this.h, (C.ulonglong)(selectable))
}

func (this *QAccessible__State) Linked() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_linked(this.h))
}

func (this *QAccessible__State) SetLinked(linked uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setLinked(this.h, (C.ulonglong)(linked))
}

func (this *QAccessible__State) Traversed() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_traversed(this.h))
}

func (this *QAccessible__State) SetTraversed(traversed uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setTraversed(this.h, (C.ulonglong)(traversed))
}

func (this *QAccessible__State) MultiSelectable() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_multiSelectable(this.h))
}

func (this *QAccessible__State) SetMultiSelectable(multiSelectable uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setMultiSelectable(this.h, (C.ulonglong)(multiSelectable))
}

func (this *QAccessible__State) ExtSelectable() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_extSelectable(this.h))
}

func (this *QAccessible__State) SetExtSelectable(extSelectable uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setExtSelectable(this.h, (C.ulonglong)(extSelectable))
}

func (this *QAccessible__State) PasswordEdit() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_passwordEdit(this.h))
}

func (this *QAccessible__State) SetPasswordEdit(passwordEdit uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setPasswordEdit(this.h, (C.ulonglong)(passwordEdit))
}

func (this *QAccessible__State) HasPopup() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_hasPopup(this.h))
}

func (this *QAccessible__State) SetHasPopup(hasPopup uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setHasPopup(this.h, (C.ulonglong)(hasPopup))
}

func (this *QAccessible__State) Modal() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_modal(this.h))
}

func (this *QAccessible__State) SetModal(modal uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setModal(this.h, (C.ulonglong)(modal))
}

func (this *QAccessible__State) Active() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_active(this.h))
}

func (this *QAccessible__State) SetActive(active uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setActive(this.h, (C.ulonglong)(active))
}

func (this *QAccessible__State) Invalid() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_invalid(this.h))
}

func (this *QAccessible__State) SetInvalid(invalid uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setInvalid(this.h, (C.ulonglong)(invalid))
}

func (this *QAccessible__State) Editable() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_editable(this.h))
}

func (this *QAccessible__State) SetEditable(editable uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setEditable(this.h, (C.ulonglong)(editable))
}

func (this *QAccessible__State) MultiLine() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_multiLine(this.h))
}

func (this *QAccessible__State) SetMultiLine(multiLine uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setMultiLine(this.h, (C.ulonglong)(multiLine))
}

func (this *QAccessible__State) SelectableText() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_selectableText(this.h))
}

func (this *QAccessible__State) SetSelectableText(selectableText uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setSelectableText(this.h, (C.ulonglong)(selectableText))
}

func (this *QAccessible__State) SupportsAutoCompletion() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_supportsAutoCompletion(this.h))
}

func (this *QAccessible__State) SetSupportsAutoCompletion(supportsAutoCompletion uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setSupportsAutoCompletion(this.h, (C.ulonglong)(supportsAutoCompletion))
}

func (this *QAccessible__State) SearchEdit() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QAccessible__State_searchEdit(this.h))
}

func (this *QAccessible__State) SetSearchEdit(searchEdit uint64) {
	defer runtime.KeepAlive(this)
	C.QAccessible__State_setSearchEdit(this.h, (C.ulonglong)(searchEdit))
}

// Delete this object from C++ memory.
func (this *QAccessible__State) Delete() {
	C.QAccessible__State_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessible__State) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessible__State_delete((*C.QAccessible__State)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAccessible__ActivationObserver struct {
	h  *C.QAccessible__ActivationObserver
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessible__ActivationObserver) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAccessible__ActivationObserver) cPointer() *C.QAccessible__ActivationObserver {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessible__ActivationObserver) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessible__ActivationObserver constructs the type using only CGO pointers.
func newQAccessible__ActivationObserver(h *C.QAccessible__ActivationObserver) *QAccessible__ActivationObserver {
	if h == nil {
		return nil
	}

	return &QAccessible__ActivationObserver{h: h}
}

// UnsafeNewQAccessible__ActivationObserver constructs the type using only unsafe pointers.
func UnsafeNewQAccessible__ActivationObserver(h unsafe.Pointer) *QAccessible__ActivationObserver {
	return newQAccessible__ActivationObserver((*C.QAccessible__ActivationObserver)(h))
}

func (this *QAccessible__ActivationObserver) AccessibilityActiveChanged(active bool) {
	defer runtime.KeepAlive(this)
	C.QAccessible__ActivationObserver_accessibilityActiveChanged(this.h, (C.bool)(active))
}

func (this *QAccessible__ActivationObserver) OperatorAssign(param1 *QAccessible__ActivationObserver) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QAccessible__ActivationObserver_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QAccessible__ActivationObserver) Delete() {
	C.QAccessible__ActivationObserver_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessible__ActivationObserver) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessible__ActivationObserver_delete((*C.QAccessible__ActivationObserver)(gc[0]))
	})
	this.miqtSetGC(gc)
}

func QAccessibleRoleStringWithRole(role QAccessible__Role) string {
	_ret := C.miqt_QAccessibleRoleStringWithRole((C.int)(role))
	return C.GoString(_ret)
}

func QAccessibleEventStringWithEvent(event QAccessible__Event) string {
	_ret := C.miqt_QAccessibleEventStringWithEvent((C.int)(event))
	return C.GoString(_ret)
}

func QAccessibleLocalizedActionDescriptionWithActionName(actionName string) string {
	actionName_ms := C.struct_miqt_string{}
	actionName_ms.data = C.CString(actionName)
	actionName_ms.len = C.size_t(len(actionName))
	defer C.free(unsafe.Pointer(actionName_ms.data))
	var _ms C.struct_miqt_string = C.miqt_QAccessibleLocalizedActionDescriptionWithActionName(actionName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
