package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qaccessible.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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

func (this *QAccessibleInterface) Text(t uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleInterface_Text(this.h, (C.uintptr_t)(t), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleInterface) SetText(t uintptr, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QAccessibleInterface_SetText(this.h, (C.uintptr_t)(t), text_Cstring, C.ulong(len(text)))
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

func (this *QAccessibleInterface) Role() uintptr {
	ret := C.QAccessibleInterface_Role(this.h)
	return (uintptr)(ret)
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

func (this *QAccessibleTextInterface) TextBeforeOffset(offset int, boundaryType uintptr, startOffset *int, endOffset *int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleTextInterface_TextBeforeOffset(this.h, (C.int)(offset), (C.uintptr_t)(boundaryType), (*C.int)(unsafe.Pointer(startOffset)), (*C.int)(unsafe.Pointer(endOffset)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTextInterface) TextAfterOffset(offset int, boundaryType uintptr, startOffset *int, endOffset *int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleTextInterface_TextAfterOffset(this.h, (C.int)(offset), (C.uintptr_t)(boundaryType), (*C.int)(unsafe.Pointer(startOffset)), (*C.int)(unsafe.Pointer(endOffset)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleTextInterface) TextAtOffset(offset int, boundaryType uintptr, startOffset *int, endOffset *int) string {
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
	C.QAccessibleEditableTextInterface_InsertText(this.h, (C.int)(offset), text_Cstring, C.ulong(len(text)))
}

func (this *QAccessibleEditableTextInterface) ReplaceText(startOffset int, endOffset int, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QAccessibleEditableTextInterface_ReplaceText(this.h, (C.int)(startOffset), (C.int)(endOffset), text_Cstring, C.ulong(len(text)))
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
	C.QAccessibleActionInterface_LocalizedActionName(this.h, name_Cstring, C.ulong(len(name)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleActionInterface) LocalizedActionDescription(name string) string {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAccessibleActionInterface_LocalizedActionDescription(this.h, name_Cstring, C.ulong(len(name)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleActionInterface) DoAction(actionName string) {
	actionName_Cstring := C.CString(actionName)
	defer C.free(unsafe.Pointer(actionName_Cstring))
	C.QAccessibleActionInterface_DoAction(this.h, actionName_Cstring, C.ulong(len(actionName)))
}

func (this *QAccessibleActionInterface) KeyBindingsForAction(actionName string) []string {
	actionName_Cstring := C.CString(actionName)
	defer C.free(unsafe.Pointer(actionName_Cstring))
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QAccessibleActionInterface_KeyBindingsForAction(this.h, actionName_Cstring, C.ulong(len(actionName)), &_out, &_out_Lengths, &_out_len)
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
func NewQAccessibleEvent(obj *QObject, typ uintptr) *QAccessibleEvent {
	ret := C.QAccessibleEvent_new(obj.cPointer(), (C.uintptr_t)(typ))
	return newQAccessibleEvent(ret)
}

// NewQAccessibleEvent2 constructs a new QAccessibleEvent object.
func NewQAccessibleEvent2(iface *QAccessibleInterface, typ uintptr) *QAccessibleEvent {
	ret := C.QAccessibleEvent_new2(iface.cPointer(), (C.uintptr_t)(typ))
	return newQAccessibleEvent(ret)
}

func (this *QAccessibleEvent) Type() uintptr {
	ret := C.QAccessibleEvent_Type(this.h)
	return (uintptr)(ret)
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
	ret := C.QAccessibleTextInsertEvent_new(obj.cPointer(), (C.int)(position), text_Cstring, C.ulong(len(text)))
	return newQAccessibleTextInsertEvent(ret)
}

// NewQAccessibleTextInsertEvent2 constructs a new QAccessibleTextInsertEvent object.
func NewQAccessibleTextInsertEvent2(iface *QAccessibleInterface, position int, text string) *QAccessibleTextInsertEvent {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QAccessibleTextInsertEvent_new2(iface.cPointer(), (C.int)(position), text_Cstring, C.ulong(len(text)))
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
	ret := C.QAccessibleTextRemoveEvent_new(obj.cPointer(), (C.int)(position), text_Cstring, C.ulong(len(text)))
	return newQAccessibleTextRemoveEvent(ret)
}

// NewQAccessibleTextRemoveEvent2 constructs a new QAccessibleTextRemoveEvent object.
func NewQAccessibleTextRemoveEvent2(iface *QAccessibleInterface, position int, text string) *QAccessibleTextRemoveEvent {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QAccessibleTextRemoveEvent_new2(iface.cPointer(), (C.int)(position), text_Cstring, C.ulong(len(text)))
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
	ret := C.QAccessibleTextUpdateEvent_new(obj.cPointer(), (C.int)(position), oldText_Cstring, C.ulong(len(oldText)), text_Cstring, C.ulong(len(text)))
	return newQAccessibleTextUpdateEvent(ret)
}

// NewQAccessibleTextUpdateEvent2 constructs a new QAccessibleTextUpdateEvent object.
func NewQAccessibleTextUpdateEvent2(iface *QAccessibleInterface, position int, oldText string, text string) *QAccessibleTextUpdateEvent {
	oldText_Cstring := C.CString(oldText)
	defer C.free(unsafe.Pointer(oldText_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QAccessibleTextUpdateEvent_new2(iface.cPointer(), (C.int)(position), oldText_Cstring, C.ulong(len(oldText)), text_Cstring, C.ulong(len(text)))
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
func NewQAccessibleTableModelChangeEvent(obj *QObject, changeType uintptr) *QAccessibleTableModelChangeEvent {
	ret := C.QAccessibleTableModelChangeEvent_new(obj.cPointer(), (C.uintptr_t)(changeType))
	return newQAccessibleTableModelChangeEvent(ret)
}

// NewQAccessibleTableModelChangeEvent2 constructs a new QAccessibleTableModelChangeEvent object.
func NewQAccessibleTableModelChangeEvent2(iface *QAccessibleInterface, changeType uintptr) *QAccessibleTableModelChangeEvent {
	ret := C.QAccessibleTableModelChangeEvent_new2(iface.cPointer(), (C.uintptr_t)(changeType))
	return newQAccessibleTableModelChangeEvent(ret)
}

func (this *QAccessibleTableModelChangeEvent) SetModelChangeType(changeType uintptr) {
	C.QAccessibleTableModelChangeEvent_SetModelChangeType(this.h, (C.uintptr_t)(changeType))
}

func (this *QAccessibleTableModelChangeEvent) ModelChangeType() uintptr {
	ret := C.QAccessibleTableModelChangeEvent_ModelChangeType(this.h)
	return (uintptr)(ret)
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
