package qt

/*

#include "gen_qabstracttextdocumentlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractTextDocumentLayout struct {
	h *C.QAbstractTextDocumentLayout
	*QObject
}

func (this *QAbstractTextDocumentLayout) cPointer() *C.QAbstractTextDocumentLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractTextDocumentLayout(h *C.QAbstractTextDocumentLayout) *QAbstractTextDocumentLayout {
	if h == nil {
		return nil
	}
	return &QAbstractTextDocumentLayout{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQAbstractTextDocumentLayout_U(h unsafe.Pointer) *QAbstractTextDocumentLayout {
	return newQAbstractTextDocumentLayout((*C.QAbstractTextDocumentLayout)(h))
}

func (this *QAbstractTextDocumentLayout) MetaObject() *QMetaObject {
	ret := C.QAbstractTextDocumentLayout_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAbstractTextDocumentLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTextDocumentLayout_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractTextDocumentLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTextDocumentLayout_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractTextDocumentLayout) Draw(painter *QPainter, context *QAbstractTextDocumentLayout__PaintContext) {
	C.QAbstractTextDocumentLayout_Draw(this.h, painter.cPointer(), context.cPointer())
}

func (this *QAbstractTextDocumentLayout) HitTest(point *QPointF, accuracy HitTestAccuracy) int {
	ret := C.QAbstractTextDocumentLayout_HitTest(this.h, point.cPointer(), (C.uintptr_t)(accuracy))
	return (int)(ret)
}

func (this *QAbstractTextDocumentLayout) AnchorAt(pos *QPointF) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTextDocumentLayout_AnchorAt(this.h, pos.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractTextDocumentLayout) ImageAt(pos *QPointF) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTextDocumentLayout_ImageAt(this.h, pos.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractTextDocumentLayout) FormatAt(pos *QPointF) *QTextFormat {
	ret := C.QAbstractTextDocumentLayout_FormatAt(this.h, pos.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractTextDocumentLayout) BlockWithMarkerAt(pos *QPointF) *QTextBlock {
	ret := C.QAbstractTextDocumentLayout_BlockWithMarkerAt(this.h, pos.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractTextDocumentLayout) PageCount() int {
	ret := C.QAbstractTextDocumentLayout_PageCount(this.h)
	return (int)(ret)
}

func (this *QAbstractTextDocumentLayout) DocumentSize() *QSizeF {
	ret := C.QAbstractTextDocumentLayout_DocumentSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractTextDocumentLayout) FrameBoundingRect(frame *QTextFrame) *QRectF {
	ret := C.QAbstractTextDocumentLayout_FrameBoundingRect(this.h, frame.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractTextDocumentLayout) BlockBoundingRect(block *QTextBlock) *QRectF {
	ret := C.QAbstractTextDocumentLayout_BlockBoundingRect(this.h, block.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractTextDocumentLayout) SetPaintDevice(device *QPaintDevice) {
	C.QAbstractTextDocumentLayout_SetPaintDevice(this.h, device.cPointer())
}

func (this *QAbstractTextDocumentLayout) PaintDevice() *QPaintDevice {
	ret := C.QAbstractTextDocumentLayout_PaintDevice(this.h)
	return newQPaintDevice_U(unsafe.Pointer(ret))
}

func (this *QAbstractTextDocumentLayout) Document() *QTextDocument {
	ret := C.QAbstractTextDocumentLayout_Document(this.h)
	return newQTextDocument_U(unsafe.Pointer(ret))
}

func (this *QAbstractTextDocumentLayout) RegisterHandler(objectType int, component *QObject) {
	C.QAbstractTextDocumentLayout_RegisterHandler(this.h, (C.int)(objectType), component.cPointer())
}

func (this *QAbstractTextDocumentLayout) UnregisterHandler(objectType int) {
	C.QAbstractTextDocumentLayout_UnregisterHandler(this.h, (C.int)(objectType))
}

func (this *QAbstractTextDocumentLayout) Update() {
	C.QAbstractTextDocumentLayout_Update(this.h)
}

func (this *QAbstractTextDocumentLayout) OnUpdate(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractTextDocumentLayout_connect_Update(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractTextDocumentLayout) UpdateBlock(block *QTextBlock) {
	C.QAbstractTextDocumentLayout_UpdateBlock(this.h, block.cPointer())
}

func (this *QAbstractTextDocumentLayout) OnUpdateBlock(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractTextDocumentLayout_connect_UpdateBlock(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractTextDocumentLayout) DocumentSizeChanged(newSize *QSizeF) {
	C.QAbstractTextDocumentLayout_DocumentSizeChanged(this.h, newSize.cPointer())
}

func (this *QAbstractTextDocumentLayout) OnDocumentSizeChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractTextDocumentLayout_connect_DocumentSizeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractTextDocumentLayout) PageCountChanged(newPages int) {
	C.QAbstractTextDocumentLayout_PageCountChanged(this.h, (C.int)(newPages))
}

func (this *QAbstractTextDocumentLayout) OnPageCountChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractTextDocumentLayout_connect_PageCountChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QAbstractTextDocumentLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTextDocumentLayout_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractTextDocumentLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTextDocumentLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractTextDocumentLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTextDocumentLayout_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractTextDocumentLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractTextDocumentLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractTextDocumentLayout) UnregisterHandler2(objectType int, component *QObject) {
	C.QAbstractTextDocumentLayout_UnregisterHandler2(this.h, (C.int)(objectType), component.cPointer())
}

func (this *QAbstractTextDocumentLayout) Update1(param1 *QRectF) {
	C.QAbstractTextDocumentLayout_Update1(this.h, param1.cPointer())
}

func (this *QAbstractTextDocumentLayout) OnUpdate1(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractTextDocumentLayout_connect_Update1(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractTextDocumentLayout) Delete() {
	C.QAbstractTextDocumentLayout_Delete(this.h)
}

type QTextObjectInterface struct {
	h *C.QTextObjectInterface
}

func (this *QTextObjectInterface) cPointer() *C.QTextObjectInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextObjectInterface(h *C.QTextObjectInterface) *QTextObjectInterface {
	if h == nil {
		return nil
	}
	return &QTextObjectInterface{h: h}
}

func newQTextObjectInterface_U(h unsafe.Pointer) *QTextObjectInterface {
	return newQTextObjectInterface((*C.QTextObjectInterface)(h))
}

func (this *QTextObjectInterface) IntrinsicSize(doc *QTextDocument, posInDocument int, format *QTextFormat) *QSizeF {
	ret := C.QTextObjectInterface_IntrinsicSize(this.h, doc.cPointer(), (C.int)(posInDocument), format.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextObjectInterface) DrawObject(painter *QPainter, rect *QRectF, doc *QTextDocument, posInDocument int, format *QTextFormat) {
	C.QTextObjectInterface_DrawObject(this.h, painter.cPointer(), rect.cPointer(), doc.cPointer(), (C.int)(posInDocument), format.cPointer())
}

func (this *QTextObjectInterface) Delete() {
	C.QTextObjectInterface_Delete(this.h)
}

type QAbstractTextDocumentLayout__Selection struct {
	h *C.QAbstractTextDocumentLayout__Selection
}

func (this *QAbstractTextDocumentLayout__Selection) cPointer() *C.QAbstractTextDocumentLayout__Selection {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractTextDocumentLayout__Selection(h *C.QAbstractTextDocumentLayout__Selection) *QAbstractTextDocumentLayout__Selection {
	if h == nil {
		return nil
	}
	return &QAbstractTextDocumentLayout__Selection{h: h}
}

func newQAbstractTextDocumentLayout__Selection_U(h unsafe.Pointer) *QAbstractTextDocumentLayout__Selection {
	return newQAbstractTextDocumentLayout__Selection((*C.QAbstractTextDocumentLayout__Selection)(h))
}

// NewQAbstractTextDocumentLayout__Selection constructs a new QAbstractTextDocumentLayout::Selection object.
func NewQAbstractTextDocumentLayout__Selection(param1 *QAbstractTextDocumentLayout__Selection) *QAbstractTextDocumentLayout__Selection {
	ret := C.QAbstractTextDocumentLayout__Selection_new(param1.cPointer())
	return newQAbstractTextDocumentLayout__Selection(ret)
}

func (this *QAbstractTextDocumentLayout__Selection) Delete() {
	C.QAbstractTextDocumentLayout__Selection_Delete(this.h)
}

type QAbstractTextDocumentLayout__PaintContext struct {
	h *C.QAbstractTextDocumentLayout__PaintContext
}

func (this *QAbstractTextDocumentLayout__PaintContext) cPointer() *C.QAbstractTextDocumentLayout__PaintContext {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractTextDocumentLayout__PaintContext(h *C.QAbstractTextDocumentLayout__PaintContext) *QAbstractTextDocumentLayout__PaintContext {
	if h == nil {
		return nil
	}
	return &QAbstractTextDocumentLayout__PaintContext{h: h}
}

func newQAbstractTextDocumentLayout__PaintContext_U(h unsafe.Pointer) *QAbstractTextDocumentLayout__PaintContext {
	return newQAbstractTextDocumentLayout__PaintContext((*C.QAbstractTextDocumentLayout__PaintContext)(h))
}

// NewQAbstractTextDocumentLayout__PaintContext constructs a new QAbstractTextDocumentLayout::PaintContext object.
func NewQAbstractTextDocumentLayout__PaintContext() *QAbstractTextDocumentLayout__PaintContext {
	ret := C.QAbstractTextDocumentLayout__PaintContext_new()
	return newQAbstractTextDocumentLayout__PaintContext(ret)
}

// NewQAbstractTextDocumentLayout__PaintContext2 constructs a new QAbstractTextDocumentLayout::PaintContext object.
func NewQAbstractTextDocumentLayout__PaintContext2(param1 *QAbstractTextDocumentLayout__PaintContext) *QAbstractTextDocumentLayout__PaintContext {
	ret := C.QAbstractTextDocumentLayout__PaintContext_new2(param1.cPointer())
	return newQAbstractTextDocumentLayout__PaintContext(ret)
}

func (this *QAbstractTextDocumentLayout__PaintContext) Delete() {
	C.QAbstractTextDocumentLayout__PaintContext_Delete(this.h)
}
