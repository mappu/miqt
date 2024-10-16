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

func (this *QAbstractTextDocumentLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAbstractTextDocumentLayout(h *C.QAbstractTextDocumentLayout) *QAbstractTextDocumentLayout {
	if h == nil {
		return nil
	}
	return &QAbstractTextDocumentLayout{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQAbstractTextDocumentLayout(h unsafe.Pointer) *QAbstractTextDocumentLayout {
	return newQAbstractTextDocumentLayout((*C.QAbstractTextDocumentLayout)(h))
}

func (this *QAbstractTextDocumentLayout) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractTextDocumentLayout_MetaObject(this.h)))
}

func (this *QAbstractTextDocumentLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QAbstractTextDocumentLayout_Metacast(this.h, param1_Cstring)
}

func QAbstractTextDocumentLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTextDocumentLayout_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractTextDocumentLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTextDocumentLayout_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractTextDocumentLayout) Draw(painter *QPainter, context *QAbstractTextDocumentLayout__PaintContext) {
	C.QAbstractTextDocumentLayout_Draw(this.h, painter.cPointer(), context.cPointer())
}

func (this *QAbstractTextDocumentLayout) HitTest(point *QPointF, accuracy HitTestAccuracy) int {
	return (int)(C.QAbstractTextDocumentLayout_HitTest(this.h, point.cPointer(), (C.int)(accuracy)))
}

func (this *QAbstractTextDocumentLayout) AnchorAt(pos *QPointF) string {
	var _ms *C.struct_miqt_string = C.QAbstractTextDocumentLayout_AnchorAt(this.h, pos.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractTextDocumentLayout) ImageAt(pos *QPointF) string {
	var _ms *C.struct_miqt_string = C.QAbstractTextDocumentLayout_ImageAt(this.h, pos.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractTextDocumentLayout) FormatAt(pos *QPointF) *QTextFormat {
	_ret := C.QAbstractTextDocumentLayout_FormatAt(this.h, pos.cPointer())
	_goptr := newQTextFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractTextDocumentLayout) BlockWithMarkerAt(pos *QPointF) *QTextBlock {
	_ret := C.QAbstractTextDocumentLayout_BlockWithMarkerAt(this.h, pos.cPointer())
	_goptr := newQTextBlock(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractTextDocumentLayout) PageCount() int {
	return (int)(C.QAbstractTextDocumentLayout_PageCount(this.h))
}

func (this *QAbstractTextDocumentLayout) DocumentSize() *QSizeF {
	_ret := C.QAbstractTextDocumentLayout_DocumentSize(this.h)
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractTextDocumentLayout) FrameBoundingRect(frame *QTextFrame) *QRectF {
	_ret := C.QAbstractTextDocumentLayout_FrameBoundingRect(this.h, frame.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractTextDocumentLayout) BlockBoundingRect(block *QTextBlock) *QRectF {
	_ret := C.QAbstractTextDocumentLayout_BlockBoundingRect(this.h, block.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractTextDocumentLayout) SetPaintDevice(device *QPaintDevice) {
	C.QAbstractTextDocumentLayout_SetPaintDevice(this.h, device.cPointer())
}

func (this *QAbstractTextDocumentLayout) PaintDevice() *QPaintDevice {
	return UnsafeNewQPaintDevice(unsafe.Pointer(C.QAbstractTextDocumentLayout_PaintDevice(this.h)))
}

func (this *QAbstractTextDocumentLayout) Document() *QTextDocument {
	return UnsafeNewQTextDocument(unsafe.Pointer(C.QAbstractTextDocumentLayout_Document(this.h)))
}

func (this *QAbstractTextDocumentLayout) RegisterHandler(objectType int, component *QObject) {
	C.QAbstractTextDocumentLayout_RegisterHandler(this.h, (C.int)(objectType), component.cPointer())
}

func (this *QAbstractTextDocumentLayout) UnregisterHandler(objectType int) {
	C.QAbstractTextDocumentLayout_UnregisterHandler(this.h, (C.int)(objectType))
}

func (this *QAbstractTextDocumentLayout) HandlerForObject(objectType int) *QTextObjectInterface {
	return UnsafeNewQTextObjectInterface(unsafe.Pointer(C.QAbstractTextDocumentLayout_HandlerForObject(this.h, (C.int)(objectType))))
}

func (this *QAbstractTextDocumentLayout) Update() {
	C.QAbstractTextDocumentLayout_Update(this.h)
}
func (this *QAbstractTextDocumentLayout) OnUpdate(slot func()) {
	C.QAbstractTextDocumentLayout_connect_Update(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_Update
func miqt_exec_callback_QAbstractTextDocumentLayout_Update(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractTextDocumentLayout) UpdateBlock(block *QTextBlock) {
	C.QAbstractTextDocumentLayout_UpdateBlock(this.h, block.cPointer())
}
func (this *QAbstractTextDocumentLayout) OnUpdateBlock(slot func(block *QTextBlock)) {
	C.QAbstractTextDocumentLayout_connect_UpdateBlock(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_UpdateBlock
func miqt_exec_callback_QAbstractTextDocumentLayout_UpdateBlock(cb C.intptr_t, block *C.QTextBlock) {
	gofunc, ok := cgo.Handle(cb).Value().(func(block *QTextBlock))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTextBlock(unsafe.Pointer(block))

	gofunc(slotval1)
}

func (this *QAbstractTextDocumentLayout) DocumentSizeChanged(newSize *QSizeF) {
	C.QAbstractTextDocumentLayout_DocumentSizeChanged(this.h, newSize.cPointer())
}
func (this *QAbstractTextDocumentLayout) OnDocumentSizeChanged(slot func(newSize *QSizeF)) {
	C.QAbstractTextDocumentLayout_connect_DocumentSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_DocumentSizeChanged
func miqt_exec_callback_QAbstractTextDocumentLayout_DocumentSizeChanged(cb C.intptr_t, newSize *C.QSizeF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newSize *QSizeF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQSizeF(unsafe.Pointer(newSize))

	gofunc(slotval1)
}

func (this *QAbstractTextDocumentLayout) PageCountChanged(newPages int) {
	C.QAbstractTextDocumentLayout_PageCountChanged(this.h, (C.int)(newPages))
}
func (this *QAbstractTextDocumentLayout) OnPageCountChanged(slot func(newPages int)) {
	C.QAbstractTextDocumentLayout_connect_PageCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_PageCountChanged
func miqt_exec_callback_QAbstractTextDocumentLayout_PageCountChanged(cb C.intptr_t, newPages C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newPages int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(newPages)

	gofunc(slotval1)
}

func QAbstractTextDocumentLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTextDocumentLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractTextDocumentLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTextDocumentLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractTextDocumentLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTextDocumentLayout_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractTextDocumentLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractTextDocumentLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractTextDocumentLayout) UnregisterHandler2(objectType int, component *QObject) {
	C.QAbstractTextDocumentLayout_UnregisterHandler2(this.h, (C.int)(objectType), component.cPointer())
}

func (this *QAbstractTextDocumentLayout) Update1(param1 *QRectF) {
	C.QAbstractTextDocumentLayout_Update1(this.h, param1.cPointer())
}
func (this *QAbstractTextDocumentLayout) OnUpdate1(slot func(param1 *QRectF)) {
	C.QAbstractTextDocumentLayout_connect_Update1(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_Update1
func miqt_exec_callback_QAbstractTextDocumentLayout_Update1(cb C.intptr_t, param1 *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRectF(unsafe.Pointer(param1))

	gofunc(slotval1)
}

// Delete this object from C++ memory.
func (this *QAbstractTextDocumentLayout) Delete() {
	C.QAbstractTextDocumentLayout_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractTextDocumentLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractTextDocumentLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QTextObjectInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTextObjectInterface(h *C.QTextObjectInterface) *QTextObjectInterface {
	if h == nil {
		return nil
	}
	return &QTextObjectInterface{h: h}
}

func UnsafeNewQTextObjectInterface(h unsafe.Pointer) *QTextObjectInterface {
	return newQTextObjectInterface((*C.QTextObjectInterface)(h))
}

func (this *QTextObjectInterface) IntrinsicSize(doc *QTextDocument, posInDocument int, format *QTextFormat) *QSizeF {
	_ret := C.QTextObjectInterface_IntrinsicSize(this.h, doc.cPointer(), (C.int)(posInDocument), format.cPointer())
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextObjectInterface) DrawObject(painter *QPainter, rect *QRectF, doc *QTextDocument, posInDocument int, format *QTextFormat) {
	C.QTextObjectInterface_DrawObject(this.h, painter.cPointer(), rect.cPointer(), doc.cPointer(), (C.int)(posInDocument), format.cPointer())
}

func (this *QTextObjectInterface) OperatorAssign(param1 *QTextObjectInterface) {
	C.QTextObjectInterface_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QTextObjectInterface) Delete() {
	C.QTextObjectInterface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextObjectInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextObjectInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QAbstractTextDocumentLayout__Selection) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAbstractTextDocumentLayout__Selection(h *C.QAbstractTextDocumentLayout__Selection) *QAbstractTextDocumentLayout__Selection {
	if h == nil {
		return nil
	}
	return &QAbstractTextDocumentLayout__Selection{h: h}
}

func UnsafeNewQAbstractTextDocumentLayout__Selection(h unsafe.Pointer) *QAbstractTextDocumentLayout__Selection {
	return newQAbstractTextDocumentLayout__Selection((*C.QAbstractTextDocumentLayout__Selection)(h))
}

// NewQAbstractTextDocumentLayout__Selection constructs a new QAbstractTextDocumentLayout::Selection object.
func NewQAbstractTextDocumentLayout__Selection(param1 *QAbstractTextDocumentLayout__Selection) *QAbstractTextDocumentLayout__Selection {
	ret := C.QAbstractTextDocumentLayout__Selection_new(param1.cPointer())
	return newQAbstractTextDocumentLayout__Selection(ret)
}

func (this *QAbstractTextDocumentLayout__Selection) OperatorAssign(param1 *QAbstractTextDocumentLayout__Selection) {
	C.QAbstractTextDocumentLayout__Selection_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QAbstractTextDocumentLayout__Selection) Delete() {
	C.QAbstractTextDocumentLayout__Selection_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractTextDocumentLayout__Selection) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractTextDocumentLayout__Selection) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QAbstractTextDocumentLayout__PaintContext) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAbstractTextDocumentLayout__PaintContext(h *C.QAbstractTextDocumentLayout__PaintContext) *QAbstractTextDocumentLayout__PaintContext {
	if h == nil {
		return nil
	}
	return &QAbstractTextDocumentLayout__PaintContext{h: h}
}

func UnsafeNewQAbstractTextDocumentLayout__PaintContext(h unsafe.Pointer) *QAbstractTextDocumentLayout__PaintContext {
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

func (this *QAbstractTextDocumentLayout__PaintContext) OperatorAssign(param1 *QAbstractTextDocumentLayout__PaintContext) {
	C.QAbstractTextDocumentLayout__PaintContext_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QAbstractTextDocumentLayout__PaintContext) Delete() {
	C.QAbstractTextDocumentLayout__PaintContext_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractTextDocumentLayout__PaintContext) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractTextDocumentLayout__PaintContext) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
