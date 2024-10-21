package qt6

/*

#include "gen_qaccessible_base.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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
	QAccessible__AllRelations QAccessible__RelationFlag = 4294967295
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
	QAccessible__HyperlinkInterface    QAccessible__InterfaceType = 7
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

type QAccessible struct {
	h *C.QAccessible
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

func newQAccessible(h *C.QAccessible) *QAccessible {
	if h == nil {
		return nil
	}
	return &QAccessible{h: h}
}

func UnsafeNewQAccessible(h unsafe.Pointer) *QAccessible {
	return newQAccessible((*C.QAccessible)(h))
}

func QAccessible_InstallActivationObserver(param1 *QAccessible__ActivationObserver) {
	C.QAccessible_InstallActivationObserver(param1.cPointer())
}

func QAccessible_RemoveActivationObserver(param1 *QAccessible__ActivationObserver) {
	C.QAccessible_RemoveActivationObserver(param1.cPointer())
}

func QAccessible_QueryAccessibleInterface(param1 *QObject) *QAccessibleInterface {
	return UnsafeNewQAccessibleInterface(unsafe.Pointer(C.QAccessible_QueryAccessibleInterface(param1.cPointer())))
}

func QAccessible_UniqueId(iface *QAccessibleInterface) uint {
	return (uint)(C.QAccessible_UniqueId(iface.cPointer()))
}

func QAccessible_AccessibleInterface(uniqueId uint) *QAccessibleInterface {
	return UnsafeNewQAccessibleInterface(unsafe.Pointer(C.QAccessible_AccessibleInterface((C.uint)(uniqueId))))
}

func QAccessible_RegisterAccessibleInterface(iface *QAccessibleInterface) uint {
	return (uint)(C.QAccessible_RegisterAccessibleInterface(iface.cPointer()))
}

func QAccessible_DeleteAccessibleInterface(uniqueId uint) {
	C.QAccessible_DeleteAccessibleInterface((C.uint)(uniqueId))
}

func QAccessible_UpdateAccessibility(event *QAccessibleEvent) {
	C.QAccessible_UpdateAccessibility(event.cPointer())
}

func QAccessible_IsActive() bool {
	return (bool)(C.QAccessible_IsActive())
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

// Delete this object from C++ memory.
func (this *QAccessible) Delete() {
	C.QAccessible_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAccessible) GoGC() {
	runtime.SetFinalizer(this, func(this *QAccessible) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QAccessible__State) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAccessible__State(h *C.QAccessible__State) *QAccessible__State {
	if h == nil {
		return nil
	}
	return &QAccessible__State{h: h}
}

func UnsafeNewQAccessible__State(h unsafe.Pointer) *QAccessible__State {
	return newQAccessible__State((*C.QAccessible__State)(h))
}

// NewQAccessible__State constructs a new QAccessible::State object.
func NewQAccessible__State() *QAccessible__State {
	ret := C.QAccessible__State_new()
	return newQAccessible__State(ret)
}

// Delete this object from C++ memory.
func (this *QAccessible__State) Delete() {
	C.QAccessible__State_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAccessible__State) GoGC() {
	runtime.SetFinalizer(this, func(this *QAccessible__State) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QAccessible__ActivationObserver) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAccessible__ActivationObserver(h *C.QAccessible__ActivationObserver) *QAccessible__ActivationObserver {
	if h == nil {
		return nil
	}
	return &QAccessible__ActivationObserver{h: h}
}

func UnsafeNewQAccessible__ActivationObserver(h unsafe.Pointer) *QAccessible__ActivationObserver {
	return newQAccessible__ActivationObserver((*C.QAccessible__ActivationObserver)(h))
}

func (this *QAccessible__ActivationObserver) AccessibilityActiveChanged(active bool) {
	C.QAccessible__ActivationObserver_AccessibilityActiveChanged(this.h, (C.bool)(active))
}

func (this *QAccessible__ActivationObserver) OperatorAssign(param1 *QAccessible__ActivationObserver) {
	C.QAccessible__ActivationObserver_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QAccessible__ActivationObserver) Delete() {
	C.QAccessible__ActivationObserver_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAccessible__ActivationObserver) GoGC() {
	runtime.SetFinalizer(this, func(this *QAccessible__ActivationObserver) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
