package qt

/*

#include "gen_qtextobject.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextObject struct {
	h *C.QTextObject
	*QObject
}

func (this *QTextObject) cPointer() *C.QTextObject {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextObject(h *C.QTextObject) *QTextObject {
	if h == nil {
		return nil
	}
	return &QTextObject{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQTextObject_U(h unsafe.Pointer) *QTextObject {
	return newQTextObject((*C.QTextObject)(h))
}

func (this *QTextObject) MetaObject() *QMetaObject {
	ret := C.QTextObject_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTextObject_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextObject_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextObject_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextObject_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextObject) Format() *QTextFormat {
	ret := C.QTextObject_Format(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextObject) FormatIndex() int {
	ret := C.QTextObject_FormatIndex(this.h)
	return (int)(ret)
}

func (this *QTextObject) Document() *QTextDocument {
	ret := C.QTextObject_Document(this.h)
	return newQTextDocument_U(unsafe.Pointer(ret))
}

func (this *QTextObject) ObjectIndex() int {
	ret := C.QTextObject_ObjectIndex(this.h)
	return (int)(ret)
}

func QTextObject_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextObject_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextObject_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextObject_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextObject_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextObject_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextObject_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextObject_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

type QTextBlockGroup struct {
	h *C.QTextBlockGroup
	*QTextObject
}

func (this *QTextBlockGroup) cPointer() *C.QTextBlockGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextBlockGroup(h *C.QTextBlockGroup) *QTextBlockGroup {
	if h == nil {
		return nil
	}
	return &QTextBlockGroup{h: h, QTextObject: newQTextObject_U(unsafe.Pointer(h))}
}

func newQTextBlockGroup_U(h unsafe.Pointer) *QTextBlockGroup {
	return newQTextBlockGroup((*C.QTextBlockGroup)(h))
}

func (this *QTextBlockGroup) MetaObject() *QMetaObject {
	ret := C.QTextBlockGroup_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTextBlockGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextBlockGroup_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextBlockGroup_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextBlockGroup_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextBlockGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextBlockGroup_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextBlockGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextBlockGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextBlockGroup_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextBlockGroup_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextBlockGroup_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextBlockGroup_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

type QTextFrameLayoutData struct {
	h *C.QTextFrameLayoutData
}

func (this *QTextFrameLayoutData) cPointer() *C.QTextFrameLayoutData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextFrameLayoutData(h *C.QTextFrameLayoutData) *QTextFrameLayoutData {
	if h == nil {
		return nil
	}
	return &QTextFrameLayoutData{h: h}
}

func newQTextFrameLayoutData_U(h unsafe.Pointer) *QTextFrameLayoutData {
	return newQTextFrameLayoutData((*C.QTextFrameLayoutData)(h))
}

func (this *QTextFrameLayoutData) OperatorAssign(param1 *QTextFrameLayoutData) {
	C.QTextFrameLayoutData_OperatorAssign(this.h, param1.cPointer())
}

func (this *QTextFrameLayoutData) Delete() {
	C.QTextFrameLayoutData_Delete(this.h)
}

type QTextFrame struct {
	h *C.QTextFrame
	*QTextObject
}

func (this *QTextFrame) cPointer() *C.QTextFrame {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextFrame(h *C.QTextFrame) *QTextFrame {
	if h == nil {
		return nil
	}
	return &QTextFrame{h: h, QTextObject: newQTextObject_U(unsafe.Pointer(h))}
}

func newQTextFrame_U(h unsafe.Pointer) *QTextFrame {
	return newQTextFrame((*C.QTextFrame)(h))
}

// NewQTextFrame constructs a new QTextFrame object.
func NewQTextFrame(doc *QTextDocument) *QTextFrame {
	ret := C.QTextFrame_new(doc.cPointer())
	return newQTextFrame(ret)
}

func (this *QTextFrame) MetaObject() *QMetaObject {
	ret := C.QTextFrame_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTextFrame_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextFrame_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextFrame_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextFrame_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextFrame) SetFrameFormat(format *QTextFrameFormat) {
	C.QTextFrame_SetFrameFormat(this.h, format.cPointer())
}

func (this *QTextFrame) FrameFormat() *QTextFrameFormat {
	ret := C.QTextFrame_FrameFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextFrameFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextFrameFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFrame) FirstCursorPosition() *QTextCursor {
	ret := C.QTextFrame_FirstCursorPosition(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCursor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCursor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFrame) LastCursorPosition() *QTextCursor {
	ret := C.QTextFrame_LastCursorPosition(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCursor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCursor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFrame) FirstPosition() int {
	ret := C.QTextFrame_FirstPosition(this.h)
	return (int)(ret)
}

func (this *QTextFrame) LastPosition() int {
	ret := C.QTextFrame_LastPosition(this.h)
	return (int)(ret)
}

func (this *QTextFrame) LayoutData() *QTextFrameLayoutData {
	ret := C.QTextFrame_LayoutData(this.h)
	return newQTextFrameLayoutData_U(unsafe.Pointer(ret))
}

func (this *QTextFrame) SetLayoutData(data *QTextFrameLayoutData) {
	C.QTextFrame_SetLayoutData(this.h, data.cPointer())
}

func (this *QTextFrame) ChildFrames() []*QTextFrame {
	var _out **C.QTextFrame = nil
	var _out_len C.size_t = 0
	C.QTextFrame_ChildFrames(this.h, &_out, &_out_len)
	ret := make([]*QTextFrame, int(_out_len))
	_outCast := (*[0xffff]*C.QTextFrame)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQTextFrame(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextFrame) ParentFrame() *QTextFrame {
	ret := C.QTextFrame_ParentFrame(this.h)
	return newQTextFrame_U(unsafe.Pointer(ret))
}

func (this *QTextFrame) Begin() *QTextFrame__iterator {
	ret := C.QTextFrame_Begin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextFrame__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextFrame__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFrame) End() *QTextFrame__iterator {
	ret := C.QTextFrame_End(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextFrame__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextFrame__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QTextFrame_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextFrame_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextFrame_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextFrame_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextFrame_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextFrame_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextFrame_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextFrame_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextFrame) Delete() {
	C.QTextFrame_Delete(this.h)
}

type QTextBlockUserData struct {
	h *C.QTextBlockUserData
}

func (this *QTextBlockUserData) cPointer() *C.QTextBlockUserData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextBlockUserData(h *C.QTextBlockUserData) *QTextBlockUserData {
	if h == nil {
		return nil
	}
	return &QTextBlockUserData{h: h}
}

func newQTextBlockUserData_U(h unsafe.Pointer) *QTextBlockUserData {
	return newQTextBlockUserData((*C.QTextBlockUserData)(h))
}

func (this *QTextBlockUserData) OperatorAssign(param1 *QTextBlockUserData) {
	C.QTextBlockUserData_OperatorAssign(this.h, param1.cPointer())
}

func (this *QTextBlockUserData) Delete() {
	C.QTextBlockUserData_Delete(this.h)
}

type QTextBlock struct {
	h *C.QTextBlock
}

func (this *QTextBlock) cPointer() *C.QTextBlock {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextBlock(h *C.QTextBlock) *QTextBlock {
	if h == nil {
		return nil
	}
	return &QTextBlock{h: h}
}

func newQTextBlock_U(h unsafe.Pointer) *QTextBlock {
	return newQTextBlock((*C.QTextBlock)(h))
}

// NewQTextBlock constructs a new QTextBlock object.
func NewQTextBlock() *QTextBlock {
	ret := C.QTextBlock_new()
	return newQTextBlock(ret)
}

// NewQTextBlock2 constructs a new QTextBlock object.
func NewQTextBlock2(o *QTextBlock) *QTextBlock {
	ret := C.QTextBlock_new2(o.cPointer())
	return newQTextBlock(ret)
}

func (this *QTextBlock) OperatorAssign(o *QTextBlock) {
	C.QTextBlock_OperatorAssign(this.h, o.cPointer())
}

func (this *QTextBlock) IsValid() bool {
	ret := C.QTextBlock_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTextBlock) OperatorEqual(o *QTextBlock) bool {
	ret := C.QTextBlock_OperatorEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QTextBlock) OperatorNotEqual(o *QTextBlock) bool {
	ret := C.QTextBlock_OperatorNotEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QTextBlock) OperatorLesser(o *QTextBlock) bool {
	ret := C.QTextBlock_OperatorLesser(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QTextBlock) Position() int {
	ret := C.QTextBlock_Position(this.h)
	return (int)(ret)
}

func (this *QTextBlock) Length() int {
	ret := C.QTextBlock_Length(this.h)
	return (int)(ret)
}

func (this *QTextBlock) Contains(position int) bool {
	ret := C.QTextBlock_Contains(this.h, (C.int)(position))
	return (bool)(ret)
}

func (this *QTextBlock) Layout() *QTextLayout {
	ret := C.QTextBlock_Layout(this.h)
	return newQTextLayout_U(unsafe.Pointer(ret))
}

func (this *QTextBlock) ClearLayout() {
	C.QTextBlock_ClearLayout(this.h)
}

func (this *QTextBlock) BlockFormat() *QTextBlockFormat {
	ret := C.QTextBlock_BlockFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlockFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlockFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextBlock) BlockFormatIndex() int {
	ret := C.QTextBlock_BlockFormatIndex(this.h)
	return (int)(ret)
}

func (this *QTextBlock) CharFormat() *QTextCharFormat {
	ret := C.QTextBlock_CharFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCharFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCharFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextBlock) CharFormatIndex() int {
	ret := C.QTextBlock_CharFormatIndex(this.h)
	return (int)(ret)
}

func (this *QTextBlock) TextDirection() uintptr {
	ret := C.QTextBlock_TextDirection(this.h)
	return (uintptr)(ret)
}

func (this *QTextBlock) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextBlock_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextBlock) TextFormats() []QTextLayout__FormatRange {
	var _out **C.QTextLayout__FormatRange = nil
	var _out_len C.size_t = 0
	C.QTextBlock_TextFormats(this.h, &_out, &_out_len)
	ret := make([]QTextLayout__FormatRange, int(_out_len))
	_outCast := (*[0xffff]*C.QTextLayout__FormatRange)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQTextLayout__FormatRange(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextBlock) Document() *QTextDocument {
	ret := C.QTextBlock_Document(this.h)
	return newQTextDocument_U(unsafe.Pointer(ret))
}

func (this *QTextBlock) TextList() *QTextList {
	ret := C.QTextBlock_TextList(this.h)
	return newQTextList_U(unsafe.Pointer(ret))
}

func (this *QTextBlock) UserData() *QTextBlockUserData {
	ret := C.QTextBlock_UserData(this.h)
	return newQTextBlockUserData_U(unsafe.Pointer(ret))
}

func (this *QTextBlock) SetUserData(data *QTextBlockUserData) {
	C.QTextBlock_SetUserData(this.h, data.cPointer())
}

func (this *QTextBlock) UserState() int {
	ret := C.QTextBlock_UserState(this.h)
	return (int)(ret)
}

func (this *QTextBlock) SetUserState(state int) {
	C.QTextBlock_SetUserState(this.h, (C.int)(state))
}

func (this *QTextBlock) Revision() int {
	ret := C.QTextBlock_Revision(this.h)
	return (int)(ret)
}

func (this *QTextBlock) SetRevision(rev int) {
	C.QTextBlock_SetRevision(this.h, (C.int)(rev))
}

func (this *QTextBlock) IsVisible() bool {
	ret := C.QTextBlock_IsVisible(this.h)
	return (bool)(ret)
}

func (this *QTextBlock) SetVisible(visible bool) {
	C.QTextBlock_SetVisible(this.h, (C.bool)(visible))
}

func (this *QTextBlock) BlockNumber() int {
	ret := C.QTextBlock_BlockNumber(this.h)
	return (int)(ret)
}

func (this *QTextBlock) FirstLineNumber() int {
	ret := C.QTextBlock_FirstLineNumber(this.h)
	return (int)(ret)
}

func (this *QTextBlock) SetLineCount(count int) {
	C.QTextBlock_SetLineCount(this.h, (C.int)(count))
}

func (this *QTextBlock) LineCount() int {
	ret := C.QTextBlock_LineCount(this.h)
	return (int)(ret)
}

func (this *QTextBlock) Begin() *QTextBlock__iterator {
	ret := C.QTextBlock_Begin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextBlock) End() *QTextBlock__iterator {
	ret := C.QTextBlock_End(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextBlock) Next() *QTextBlock {
	ret := C.QTextBlock_Next(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextBlock) Previous() *QTextBlock {
	ret := C.QTextBlock_Previous(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextBlock) FragmentIndex() int {
	ret := C.QTextBlock_FragmentIndex(this.h)
	return (int)(ret)
}

func (this *QTextBlock) Delete() {
	C.QTextBlock_Delete(this.h)
}

type QTextFragment struct {
	h *C.QTextFragment
}

func (this *QTextFragment) cPointer() *C.QTextFragment {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextFragment(h *C.QTextFragment) *QTextFragment {
	if h == nil {
		return nil
	}
	return &QTextFragment{h: h}
}

func newQTextFragment_U(h unsafe.Pointer) *QTextFragment {
	return newQTextFragment((*C.QTextFragment)(h))
}

// NewQTextFragment constructs a new QTextFragment object.
func NewQTextFragment() *QTextFragment {
	ret := C.QTextFragment_new()
	return newQTextFragment(ret)
}

// NewQTextFragment2 constructs a new QTextFragment object.
func NewQTextFragment2(o *QTextFragment) *QTextFragment {
	ret := C.QTextFragment_new2(o.cPointer())
	return newQTextFragment(ret)
}

func (this *QTextFragment) OperatorAssign(o *QTextFragment) {
	C.QTextFragment_OperatorAssign(this.h, o.cPointer())
}

func (this *QTextFragment) IsValid() bool {
	ret := C.QTextFragment_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTextFragment) OperatorEqual(o *QTextFragment) bool {
	ret := C.QTextFragment_OperatorEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QTextFragment) OperatorNotEqual(o *QTextFragment) bool {
	ret := C.QTextFragment_OperatorNotEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QTextFragment) OperatorLesser(o *QTextFragment) bool {
	ret := C.QTextFragment_OperatorLesser(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QTextFragment) Position() int {
	ret := C.QTextFragment_Position(this.h)
	return (int)(ret)
}

func (this *QTextFragment) Length() int {
	ret := C.QTextFragment_Length(this.h)
	return (int)(ret)
}

func (this *QTextFragment) Contains(position int) bool {
	ret := C.QTextFragment_Contains(this.h, (C.int)(position))
	return (bool)(ret)
}

func (this *QTextFragment) CharFormat() *QTextCharFormat {
	ret := C.QTextFragment_CharFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCharFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCharFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFragment) CharFormatIndex() int {
	ret := C.QTextFragment_CharFormatIndex(this.h)
	return (int)(ret)
}

func (this *QTextFragment) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextFragment_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextFragment) GlyphRuns() []QGlyphRun {
	var _out **C.QGlyphRun = nil
	var _out_len C.size_t = 0
	C.QTextFragment_GlyphRuns(this.h, &_out, &_out_len)
	ret := make([]QGlyphRun, int(_out_len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQGlyphRun(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextFragment) GlyphRuns1(from int) []QGlyphRun {
	var _out **C.QGlyphRun = nil
	var _out_len C.size_t = 0
	C.QTextFragment_GlyphRuns1(this.h, (C.int)(from), &_out, &_out_len)
	ret := make([]QGlyphRun, int(_out_len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQGlyphRun(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextFragment) GlyphRuns2(from int, length int) []QGlyphRun {
	var _out **C.QGlyphRun = nil
	var _out_len C.size_t = 0
	C.QTextFragment_GlyphRuns2(this.h, (C.int)(from), (C.int)(length), &_out, &_out_len)
	ret := make([]QGlyphRun, int(_out_len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQGlyphRun(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextFragment) Delete() {
	C.QTextFragment_Delete(this.h)
}

type QTextFrame__iterator struct {
	h *C.QTextFrame__iterator
}

func (this *QTextFrame__iterator) cPointer() *C.QTextFrame__iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextFrame__iterator(h *C.QTextFrame__iterator) *QTextFrame__iterator {
	if h == nil {
		return nil
	}
	return &QTextFrame__iterator{h: h}
}

func newQTextFrame__iterator_U(h unsafe.Pointer) *QTextFrame__iterator {
	return newQTextFrame__iterator((*C.QTextFrame__iterator)(h))
}

// NewQTextFrame__iterator constructs a new QTextFrame::iterator object.
func NewQTextFrame__iterator() *QTextFrame__iterator {
	ret := C.QTextFrame__iterator_new()
	return newQTextFrame__iterator(ret)
}

// NewQTextFrame__iterator2 constructs a new QTextFrame::iterator object.
func NewQTextFrame__iterator2(o *QTextFrame__iterator) *QTextFrame__iterator {
	ret := C.QTextFrame__iterator_new2(o.cPointer())
	return newQTextFrame__iterator(ret)
}

func (this *QTextFrame__iterator) ParentFrame() *QTextFrame {
	ret := C.QTextFrame__iterator_ParentFrame(this.h)
	return newQTextFrame_U(unsafe.Pointer(ret))
}

func (this *QTextFrame__iterator) CurrentFrame() *QTextFrame {
	ret := C.QTextFrame__iterator_CurrentFrame(this.h)
	return newQTextFrame_U(unsafe.Pointer(ret))
}

func (this *QTextFrame__iterator) CurrentBlock() *QTextBlock {
	ret := C.QTextFrame__iterator_CurrentBlock(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFrame__iterator) AtEnd() bool {
	ret := C.QTextFrame__iterator_AtEnd(this.h)
	return (bool)(ret)
}

func (this *QTextFrame__iterator) OperatorEqual(o *QTextFrame__iterator) bool {
	ret := C.QTextFrame__iterator_OperatorEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QTextFrame__iterator) OperatorNotEqual(o *QTextFrame__iterator) bool {
	ret := C.QTextFrame__iterator_OperatorNotEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QTextFrame__iterator) OperatorPlusPlus(param1 int) *QTextFrame__iterator {
	ret := C.QTextFrame__iterator_OperatorPlusPlus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextFrame__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextFrame__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFrame__iterator) OperatorMinusMinus(param1 int) *QTextFrame__iterator {
	ret := C.QTextFrame__iterator_OperatorMinusMinus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextFrame__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextFrame__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFrame__iterator) Delete() {
	C.QTextFrame__iterator_Delete(this.h)
}

type QTextBlock__iterator struct {
	h *C.QTextBlock__iterator
}

func (this *QTextBlock__iterator) cPointer() *C.QTextBlock__iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextBlock__iterator(h *C.QTextBlock__iterator) *QTextBlock__iterator {
	if h == nil {
		return nil
	}
	return &QTextBlock__iterator{h: h}
}

func newQTextBlock__iterator_U(h unsafe.Pointer) *QTextBlock__iterator {
	return newQTextBlock__iterator((*C.QTextBlock__iterator)(h))
}

// NewQTextBlock__iterator constructs a new QTextBlock::iterator object.
func NewQTextBlock__iterator() *QTextBlock__iterator {
	ret := C.QTextBlock__iterator_new()
	return newQTextBlock__iterator(ret)
}

// NewQTextBlock__iterator2 constructs a new QTextBlock::iterator object.
func NewQTextBlock__iterator2(o *QTextBlock__iterator) *QTextBlock__iterator {
	ret := C.QTextBlock__iterator_new2(o.cPointer())
	return newQTextBlock__iterator(ret)
}

func (this *QTextBlock__iterator) Fragment() *QTextFragment {
	ret := C.QTextBlock__iterator_Fragment(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextFragment(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextFragment) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextBlock__iterator) AtEnd() bool {
	ret := C.QTextBlock__iterator_AtEnd(this.h)
	return (bool)(ret)
}

func (this *QTextBlock__iterator) OperatorEqual(o *QTextBlock__iterator) bool {
	ret := C.QTextBlock__iterator_OperatorEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QTextBlock__iterator) OperatorNotEqual(o *QTextBlock__iterator) bool {
	ret := C.QTextBlock__iterator_OperatorNotEqual(this.h, o.cPointer())
	return (bool)(ret)
}

func (this *QTextBlock__iterator) OperatorPlusPlus(param1 int) *QTextBlock__iterator {
	ret := C.QTextBlock__iterator_OperatorPlusPlus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextBlock__iterator) OperatorMinusMinus(param1 int) *QTextBlock__iterator {
	ret := C.QTextBlock__iterator_OperatorMinusMinus(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock__iterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock__iterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextBlock__iterator) Delete() {
	C.QTextBlock__iterator_Delete(this.h)
}
