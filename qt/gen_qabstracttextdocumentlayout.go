package qt

/*

#include "gen_qabstracttextdocumentlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractTextDocumentLayout struct {
	h  *C.QAbstractTextDocumentLayout
	gc *[1]unsafe.Pointer
	*QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAbstractTextDocumentLayout) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QObject.miqtSetGC(gc)
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

// newQAbstractTextDocumentLayout constructs the type using only CGO pointers.
func newQAbstractTextDocumentLayout(h *C.QAbstractTextDocumentLayout) *QAbstractTextDocumentLayout {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAbstractTextDocumentLayout_virtbase(h, &outptr_QObject)

	return &QAbstractTextDocumentLayout{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQAbstractTextDocumentLayout constructs the type using only unsafe pointers.
func UnsafeNewQAbstractTextDocumentLayout(h unsafe.Pointer) *QAbstractTextDocumentLayout {
	return newQAbstractTextDocumentLayout((*C.QAbstractTextDocumentLayout)(h))
}

// NewQAbstractTextDocumentLayout constructs a new QAbstractTextDocumentLayout object.
func NewQAbstractTextDocumentLayout(doc *QTextDocument) *QAbstractTextDocumentLayout {

	return newQAbstractTextDocumentLayout(C.QAbstractTextDocumentLayout_new(doc.cPointer()))
}

func (this *QAbstractTextDocumentLayout) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAbstractTextDocumentLayout_metaObject(this.h))
}

func (this *QAbstractTextDocumentLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractTextDocumentLayout_metacast(this.h, param1_Cstring))
}

func QAbstractTextDocumentLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTextDocumentLayout_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractTextDocumentLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTextDocumentLayout_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractTextDocumentLayout) Draw(painter *QPainter, context *QAbstractTextDocumentLayout__PaintContext) {
	defer runtime.KeepAlive(painter)
	defer runtime.KeepAlive(context)
	C.QAbstractTextDocumentLayout_draw(this.h, painter.cPointer(), context.cPointer())
}

func (this *QAbstractTextDocumentLayout) HitTest(point QPointF, accuracy HitTestAccuracy) int {
	return (int)(C.QAbstractTextDocumentLayout_hitTest(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](point), (C.int)(accuracy)))
}

func (this *QAbstractTextDocumentLayout) AnchorAt(pos QPointF) string {
	var _ms C.struct_miqt_string = C.QAbstractTextDocumentLayout_anchorAt(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](pos))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractTextDocumentLayout) ImageAt(pos QPointF) string {
	var _ms C.struct_miqt_string = C.QAbstractTextDocumentLayout_imageAt(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](pos))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractTextDocumentLayout) FormatAt(pos QPointF) *QTextFormat {
	_goptr := newQTextFormat(C.QAbstractTextDocumentLayout_formatAt(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](pos)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractTextDocumentLayout) BlockWithMarkerAt(pos QPointF) *QTextBlock {
	_goptr := newQTextBlock(C.QAbstractTextDocumentLayout_blockWithMarkerAt(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](pos)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractTextDocumentLayout) PageCount() int {
	return (int)(C.QAbstractTextDocumentLayout_pageCount(this.h))
}

func (this *QAbstractTextDocumentLayout) DocumentSize() QSizeF {
	return libmiqt.ValueCast[QSizeF](C.QAbstractTextDocumentLayout_documentSize(this.h))
}

func (this *QAbstractTextDocumentLayout) FrameBoundingRect(frame *QTextFrame) QRectF {
	return libmiqt.ValueCast[QRectF](C.QAbstractTextDocumentLayout_frameBoundingRect(this.h, frame.cPointer()))
}

func (this *QAbstractTextDocumentLayout) BlockBoundingRect(block *QTextBlock) QRectF {
	defer runtime.KeepAlive(block)
	return libmiqt.ValueCast[QRectF](C.QAbstractTextDocumentLayout_blockBoundingRect(this.h, block.cPointer()))
}

func (this *QAbstractTextDocumentLayout) SetPaintDevice(device *QPaintDevice) {
	defer runtime.KeepAlive(device)
	C.QAbstractTextDocumentLayout_setPaintDevice(this.h, device.cPointer())
}

func (this *QAbstractTextDocumentLayout) PaintDevice() *QPaintDevice {
	return newQPaintDevice(C.QAbstractTextDocumentLayout_paintDevice(this.h))
}

func (this *QAbstractTextDocumentLayout) Document() *QTextDocument {
	return newQTextDocument(C.QAbstractTextDocumentLayout_document(this.h))
}

func (this *QAbstractTextDocumentLayout) RegisterHandler(objectType int, component *QObject) {
	C.QAbstractTextDocumentLayout_registerHandler(this.h, (C.int)(objectType), component.cPointer())
}

func (this *QAbstractTextDocumentLayout) UnregisterHandler(objectType int) {
	C.QAbstractTextDocumentLayout_unregisterHandler(this.h, (C.int)(objectType))
}

func (this *QAbstractTextDocumentLayout) HandlerForObject(objectType int) *QTextObjectInterface {
	return newQTextObjectInterface(C.QAbstractTextDocumentLayout_handlerForObject(this.h, (C.int)(objectType)))
}

func (this *QAbstractTextDocumentLayout) Update() {
	C.QAbstractTextDocumentLayout_update(this.h)
}
func (this *QAbstractTextDocumentLayout) OnUpdate(slot func()) {
	C.QAbstractTextDocumentLayout_connect_update(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_update
func miqt_exec_callback_QAbstractTextDocumentLayout_update(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractTextDocumentLayout) UpdateBlock(block *QTextBlock) {
	defer runtime.KeepAlive(block)
	C.QAbstractTextDocumentLayout_updateBlock(this.h, block.cPointer())
}
func (this *QAbstractTextDocumentLayout) OnUpdateBlock(slot func(block *QTextBlock)) {
	C.QAbstractTextDocumentLayout_connect_updateBlock(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_updateBlock
func miqt_exec_callback_QAbstractTextDocumentLayout_updateBlock(cb C.intptr_t, block *C.QTextBlock) {
	gofunc, ok := cgo.Handle(cb).Value().(func(block *QTextBlock))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextBlock(block)

	gofunc(slotval1)
}

func (this *QAbstractTextDocumentLayout) DocumentSizeChanged(newSize QSizeF) {
	C.QAbstractTextDocumentLayout_documentSizeChanged(this.h, libmiqt.ValueCast[C.struct_miqt_qsizef](newSize))
}
func (this *QAbstractTextDocumentLayout) OnDocumentSizeChanged(slot func(newSize QSizeF)) {
	C.QAbstractTextDocumentLayout_connect_documentSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_documentSizeChanged
func miqt_exec_callback_QAbstractTextDocumentLayout_documentSizeChanged(cb C.intptr_t, newSize C.struct_miqt_qsizef) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newSize QSizeF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[QSizeF](newSize)

	gofunc(slotval1)
}

func (this *QAbstractTextDocumentLayout) PageCountChanged(newPages int) {
	C.QAbstractTextDocumentLayout_pageCountChanged(this.h, (C.int)(newPages))
}
func (this *QAbstractTextDocumentLayout) OnPageCountChanged(slot func(newPages int)) {
	C.QAbstractTextDocumentLayout_connect_pageCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_pageCountChanged
func miqt_exec_callback_QAbstractTextDocumentLayout_pageCountChanged(cb C.intptr_t, newPages C.int) {
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
	var _ms C.struct_miqt_string = C.QAbstractTextDocumentLayout_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractTextDocumentLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTextDocumentLayout_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractTextDocumentLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTextDocumentLayout_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractTextDocumentLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTextDocumentLayout_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractTextDocumentLayout) UnregisterHandler2(objectType int, component *QObject) {
	C.QAbstractTextDocumentLayout_unregisterHandler2(this.h, (C.int)(objectType), component.cPointer())
}

func (this *QAbstractTextDocumentLayout) UpdateWithQRectF(param1 QRectF) {
	C.QAbstractTextDocumentLayout_updateWithQRectF(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](param1))
}
func (this *QAbstractTextDocumentLayout) OnUpdateWithQRectF(slot func(param1 QRectF)) {
	C.QAbstractTextDocumentLayout_connect_updateWithQRectF(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_updateWithQRectF
func miqt_exec_callback_QAbstractTextDocumentLayout_updateWithQRectF(cb C.intptr_t, param1 C.struct_miqt_qrectf) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[QRectF](param1)

	gofunc(slotval1)
}

// FormatIndex can only be called from a QAbstractTextDocumentLayout that was directly constructed.
func (this *QAbstractTextDocumentLayout) FormatIndex(pos int) int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractTextDocumentLayout_protectedbase_formatIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(pos)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Format can only be called from a QAbstractTextDocumentLayout that was directly constructed.
func (this *QAbstractTextDocumentLayout) Format(pos int) QTextCharFormat {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQTextCharFormat(C.QAbstractTextDocumentLayout_protectedbase_format(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(pos)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QAbstractTextDocumentLayout that was directly constructed.
func (this *QAbstractTextDocumentLayout) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QAbstractTextDocumentLayout_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAbstractTextDocumentLayout that was directly constructed.
func (this *QAbstractTextDocumentLayout) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractTextDocumentLayout_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAbstractTextDocumentLayout that was directly constructed.
func (this *QAbstractTextDocumentLayout) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractTextDocumentLayout_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAbstractTextDocumentLayout that was directly constructed.
func (this *QAbstractTextDocumentLayout) IsSignalConnected(signal *QMetaMethod) bool {
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractTextDocumentLayout_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QAbstractTextDocumentLayout) OnDraw(slot func(painter *QPainter, context *QAbstractTextDocumentLayout__PaintContext)) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_draw
func miqt_exec_callback_QAbstractTextDocumentLayout_draw(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, painter *C.QPainter, context *C.QAbstractTextDocumentLayout__PaintContext) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *QPainter, context *QAbstractTextDocumentLayout__PaintContext))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQAbstractTextDocumentLayout__PaintContext(context)

	gofunc(slotval1, slotval2)

}
func (this *QAbstractTextDocumentLayout) OnHitTest(slot func(point QPointF, accuracy HitTestAccuracy) int) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_hitTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_hitTest
func miqt_exec_callback_QAbstractTextDocumentLayout_hitTest(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, point C.struct_miqt_qpointf, accuracy C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(point QPointF, accuracy HitTestAccuracy) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[QPointF](point)

	slotval2 := (HitTestAccuracy)(accuracy)

	virtualReturn := gofunc(slotval1, slotval2)

	return (C.int)(virtualReturn)

}
func (this *QAbstractTextDocumentLayout) OnPageCount(slot func() int) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_pageCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_pageCount
func miqt_exec_callback_QAbstractTextDocumentLayout_pageCount(self *C.QAbstractTextDocumentLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QAbstractTextDocumentLayout) OnDocumentSize(slot func() QSizeF) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_documentSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_documentSize
func miqt_exec_callback_QAbstractTextDocumentLayout_documentSize(self *C.QAbstractTextDocumentLayout, cb C.intptr_t) C.struct_miqt_qsizef {
	gofunc, ok := cgo.Handle(cb).Value().(func() QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return libmiqt.ValueCast[C.struct_miqt_qsizef](virtualReturn)

}
func (this *QAbstractTextDocumentLayout) OnFrameBoundingRect(slot func(frame *QTextFrame) QRectF) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_frameBoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_frameBoundingRect
func miqt_exec_callback_QAbstractTextDocumentLayout_frameBoundingRect(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, frame *C.QTextFrame) C.struct_miqt_qrectf {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QTextFrame) QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextFrame(frame)

	virtualReturn := gofunc(slotval1)

	return libmiqt.ValueCast[C.struct_miqt_qrectf](virtualReturn)

}
func (this *QAbstractTextDocumentLayout) OnBlockBoundingRect(slot func(block *QTextBlock) QRectF) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_blockBoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_blockBoundingRect
func miqt_exec_callback_QAbstractTextDocumentLayout_blockBoundingRect(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, block *C.QTextBlock) C.struct_miqt_qrectf {
	gofunc, ok := cgo.Handle(cb).Value().(func(block *QTextBlock) QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextBlock(block)

	virtualReturn := gofunc(slotval1)

	return libmiqt.ValueCast[C.struct_miqt_qrectf](virtualReturn)

}
func (this *QAbstractTextDocumentLayout) OnDocumentChanged(slot func(from int, charsRemoved int, charsAdded int)) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_documentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_documentChanged
func miqt_exec_callback_QAbstractTextDocumentLayout_documentChanged(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, from C.int, charsRemoved C.int, charsAdded C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(from int, charsRemoved int, charsAdded int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(from)

	slotval2 := (int)(charsRemoved)

	slotval3 := (int)(charsAdded)

	gofunc(slotval1, slotval2, slotval3)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_ResizeInlineObject(item QTextInlineObject, posInDocument int, format *QTextFormat) {
	defer runtime.KeepAlive(item)
	defer runtime.KeepAlive(format)

	C.QAbstractTextDocumentLayout_virtualbase_resizeInlineObject(unsafe.Pointer(this.h), item.cPointer(), (C.int)(posInDocument), format.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnResizeInlineObject(slot func(super func(item QTextInlineObject, posInDocument int, format *QTextFormat), item QTextInlineObject, posInDocument int, format *QTextFormat)) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_resizeInlineObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_resizeInlineObject
func miqt_exec_callback_QAbstractTextDocumentLayout_resizeInlineObject(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, item *C.QTextInlineObject, posInDocument C.int, format *C.QTextFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item QTextInlineObject, posInDocument int, format *QTextFormat), item QTextInlineObject, posInDocument int, format *QTextFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_goptr := newQTextInlineObject(item)
	item_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *item_goptr

	slotval2 := (int)(posInDocument)

	slotval3 := newQTextFormat(format)

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_ResizeInlineObject, slotval1, slotval2, slotval3)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_PositionInlineObject(item QTextInlineObject, posInDocument int, format *QTextFormat) {
	defer runtime.KeepAlive(item)
	defer runtime.KeepAlive(format)

	C.QAbstractTextDocumentLayout_virtualbase_positionInlineObject(unsafe.Pointer(this.h), item.cPointer(), (C.int)(posInDocument), format.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnPositionInlineObject(slot func(super func(item QTextInlineObject, posInDocument int, format *QTextFormat), item QTextInlineObject, posInDocument int, format *QTextFormat)) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_positionInlineObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_positionInlineObject
func miqt_exec_callback_QAbstractTextDocumentLayout_positionInlineObject(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, item *C.QTextInlineObject, posInDocument C.int, format *C.QTextFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item QTextInlineObject, posInDocument int, format *QTextFormat), item QTextInlineObject, posInDocument int, format *QTextFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_goptr := newQTextInlineObject(item)
	item_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *item_goptr

	slotval2 := (int)(posInDocument)

	slotval3 := newQTextFormat(format)

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_PositionInlineObject, slotval1, slotval2, slotval3)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_DrawInlineObject(painter *QPainter, rect QRectF, object QTextInlineObject, posInDocument int, format *QTextFormat) {
	defer runtime.KeepAlive(painter)
	defer runtime.KeepAlive(object)
	defer runtime.KeepAlive(format)

	C.QAbstractTextDocumentLayout_virtualbase_drawInlineObject(unsafe.Pointer(this.h), painter.cPointer(), libmiqt.ValueCast[C.struct_miqt_qrectf](rect), object.cPointer(), (C.int)(posInDocument), format.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnDrawInlineObject(slot func(super func(painter *QPainter, rect QRectF, object QTextInlineObject, posInDocument int, format *QTextFormat), painter *QPainter, rect QRectF, object QTextInlineObject, posInDocument int, format *QTextFormat)) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_drawInlineObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_drawInlineObject
func miqt_exec_callback_QAbstractTextDocumentLayout_drawInlineObject(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, painter *C.QPainter, rect C.struct_miqt_qrectf, object *C.QTextInlineObject, posInDocument C.int, format *C.QTextFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect QRectF, object QTextInlineObject, posInDocument int, format *QTextFormat), painter *QPainter, rect QRectF, object QTextInlineObject, posInDocument int, format *QTextFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := libmiqt.ValueCast[QRectF](rect)

	object_goptr := newQTextInlineObject(object)
	object_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval3 := *object_goptr

	slotval4 := (int)(posInDocument)

	slotval5 := newQTextFormat(format)

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_DrawInlineObject, slotval1, slotval2, slotval3, slotval4, slotval5)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_Event(event *QEvent) bool {
	defer runtime.KeepAlive(event)

	return (bool)(C.QAbstractTextDocumentLayout_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAbstractTextDocumentLayout) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_event
func miqt_exec_callback_QAbstractTextDocumentLayout_event(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {
	defer runtime.KeepAlive(event)

	return (bool)(C.QAbstractTextDocumentLayout_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAbstractTextDocumentLayout) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_eventFilter
func miqt_exec_callback_QAbstractTextDocumentLayout_eventFilter(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_TimerEvent(event *QTimerEvent) {
	defer runtime.KeepAlive(event)

	C.QAbstractTextDocumentLayout_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_timerEvent
func miqt_exec_callback_QAbstractTextDocumentLayout_timerEvent(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_ChildEvent(event *QChildEvent) {
	defer runtime.KeepAlive(event)

	C.QAbstractTextDocumentLayout_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_childEvent
func miqt_exec_callback_QAbstractTextDocumentLayout_childEvent(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_CustomEvent(event *QEvent) {
	defer runtime.KeepAlive(event)

	C.QAbstractTextDocumentLayout_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_customEvent
func miqt_exec_callback_QAbstractTextDocumentLayout_customEvent(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_ConnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(signal)

	C.QAbstractTextDocumentLayout_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_connectNotify
func miqt_exec_callback_QAbstractTextDocumentLayout_connectNotify(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(signal)

	C.QAbstractTextDocumentLayout_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractTextDocumentLayout_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_disconnectNotify
func miqt_exec_callback_QAbstractTextDocumentLayout_disconnectNotify(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractTextDocumentLayout) Delete() {
	C.QAbstractTextDocumentLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
// This is a QObject class, so this is unsupported: the bindings do not
// keep it alive during calls into C++, and its parent may delete it.
func (this *QAbstractTextDocumentLayout) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAbstractTextDocumentLayout_delete((*C.QAbstractTextDocumentLayout)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QTextObjectInterface struct {
	h  *C.QTextObjectInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTextObjectInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQTextObjectInterface constructs the type using only CGO pointers.
func newQTextObjectInterface(h *C.QTextObjectInterface) *QTextObjectInterface {
	if h == nil {
		return nil
	}

	return &QTextObjectInterface{h: h}
}

// UnsafeNewQTextObjectInterface constructs the type using only unsafe pointers.
func UnsafeNewQTextObjectInterface(h unsafe.Pointer) *QTextObjectInterface {
	return newQTextObjectInterface((*C.QTextObjectInterface)(h))
}

func (this *QTextObjectInterface) IntrinsicSize(doc *QTextDocument, posInDocument int, format *QTextFormat) QSizeF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	return libmiqt.ValueCast[QSizeF](C.QTextObjectInterface_intrinsicSize(this.h, doc.cPointer(), (C.int)(posInDocument), format.cPointer()))
}

func (this *QTextObjectInterface) DrawObject(painter *QPainter, rect QRectF, doc *QTextDocument, posInDocument int, format *QTextFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(painter)
	defer runtime.KeepAlive(format)
	C.QTextObjectInterface_drawObject(this.h, painter.cPointer(), libmiqt.ValueCast[C.struct_miqt_qrectf](rect), doc.cPointer(), (C.int)(posInDocument), format.cPointer())
}

func (this *QTextObjectInterface) OperatorAssign(param1 *QTextObjectInterface) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QTextObjectInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QTextObjectInterface) Delete() {
	C.QTextObjectInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTextObjectInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTextObjectInterface_delete((*C.QTextObjectInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAbstractTextDocumentLayout__Selection struct {
	h  *C.QAbstractTextDocumentLayout__Selection
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAbstractTextDocumentLayout__Selection) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQAbstractTextDocumentLayout__Selection constructs the type using only CGO pointers.
func newQAbstractTextDocumentLayout__Selection(h *C.QAbstractTextDocumentLayout__Selection) *QAbstractTextDocumentLayout__Selection {
	if h == nil {
		return nil
	}

	return &QAbstractTextDocumentLayout__Selection{h: h}
}

// UnsafeNewQAbstractTextDocumentLayout__Selection constructs the type using only unsafe pointers.
func UnsafeNewQAbstractTextDocumentLayout__Selection(h unsafe.Pointer) *QAbstractTextDocumentLayout__Selection {
	return newQAbstractTextDocumentLayout__Selection((*C.QAbstractTextDocumentLayout__Selection)(h))
}

// NewQAbstractTextDocumentLayout__Selection constructs a new QAbstractTextDocumentLayout::Selection object.
func NewQAbstractTextDocumentLayout__Selection(param1 *QAbstractTextDocumentLayout__Selection) *QAbstractTextDocumentLayout__Selection {
	defer runtime.KeepAlive(param1)

	return newQAbstractTextDocumentLayout__Selection(C.QAbstractTextDocumentLayout__Selection_new(param1.cPointer()))
}

// NewQAbstractTextDocumentLayout__Selection2 constructs a new QAbstractTextDocumentLayout::Selection object.
func NewQAbstractTextDocumentLayout__Selection2() *QAbstractTextDocumentLayout__Selection {

	return newQAbstractTextDocumentLayout__Selection(C.QAbstractTextDocumentLayout__Selection_new2())
}

func (this *QAbstractTextDocumentLayout__Selection) Cursor() *QTextCursor {
	defer runtime.KeepAlive(this)
	cursor_goptr := newQTextCursor(C.QAbstractTextDocumentLayout__Selection_cursor(this.h))
	cursor_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return cursor_goptr
}

func (this *QAbstractTextDocumentLayout__Selection) SetCursor(cursor QTextCursor) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(cursor)
	C.QAbstractTextDocumentLayout__Selection_setCursor(this.h, cursor.cPointer())
}

func (this *QAbstractTextDocumentLayout__Selection) Format() *QTextCharFormat {
	defer runtime.KeepAlive(this)
	format_goptr := newQTextCharFormat(C.QAbstractTextDocumentLayout__Selection_format(this.h))
	format_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return format_goptr
}

func (this *QAbstractTextDocumentLayout__Selection) SetFormat(format QTextCharFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	C.QAbstractTextDocumentLayout__Selection_setFormat(this.h, format.cPointer())
}

func (this *QAbstractTextDocumentLayout__Selection) OperatorAssign(param1 *QAbstractTextDocumentLayout__Selection) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QAbstractTextDocumentLayout__Selection_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QAbstractTextDocumentLayout__Selection) Delete() {
	C.QAbstractTextDocumentLayout__Selection_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAbstractTextDocumentLayout__Selection) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAbstractTextDocumentLayout__Selection_delete((*C.QAbstractTextDocumentLayout__Selection)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QAbstractTextDocumentLayout__PaintContext struct {
	h  *C.QAbstractTextDocumentLayout__PaintContext
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAbstractTextDocumentLayout__PaintContext) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQAbstractTextDocumentLayout__PaintContext constructs the type using only CGO pointers.
func newQAbstractTextDocumentLayout__PaintContext(h *C.QAbstractTextDocumentLayout__PaintContext) *QAbstractTextDocumentLayout__PaintContext {
	if h == nil {
		return nil
	}

	return &QAbstractTextDocumentLayout__PaintContext{h: h}
}

// UnsafeNewQAbstractTextDocumentLayout__PaintContext constructs the type using only unsafe pointers.
func UnsafeNewQAbstractTextDocumentLayout__PaintContext(h unsafe.Pointer) *QAbstractTextDocumentLayout__PaintContext {
	return newQAbstractTextDocumentLayout__PaintContext((*C.QAbstractTextDocumentLayout__PaintContext)(h))
}

// NewQAbstractTextDocumentLayout__PaintContext constructs a new QAbstractTextDocumentLayout::PaintContext object.
func NewQAbstractTextDocumentLayout__PaintContext() *QAbstractTextDocumentLayout__PaintContext {

	return newQAbstractTextDocumentLayout__PaintContext(C.QAbstractTextDocumentLayout__PaintContext_new())
}

// NewQAbstractTextDocumentLayout__PaintContext2 constructs a new QAbstractTextDocumentLayout::PaintContext object.
func NewQAbstractTextDocumentLayout__PaintContext2(param1 *QAbstractTextDocumentLayout__PaintContext) *QAbstractTextDocumentLayout__PaintContext {
	defer runtime.KeepAlive(param1)

	return newQAbstractTextDocumentLayout__PaintContext(C.QAbstractTextDocumentLayout__PaintContext_new2(param1.cPointer()))
}

func (this *QAbstractTextDocumentLayout__PaintContext) CursorPosition() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAbstractTextDocumentLayout__PaintContext_cursorPosition(this.h))
}

func (this *QAbstractTextDocumentLayout__PaintContext) SetCursorPosition(cursorPosition int) {
	defer runtime.KeepAlive(this)
	C.QAbstractTextDocumentLayout__PaintContext_setCursorPosition(this.h, (C.int)(cursorPosition))
}

func (this *QAbstractTextDocumentLayout__PaintContext) Palette() *QPalette {
	defer runtime.KeepAlive(this)
	palette_goptr := newQPalette(C.QAbstractTextDocumentLayout__PaintContext_palette(this.h))
	palette_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return palette_goptr
}

func (this *QAbstractTextDocumentLayout__PaintContext) SetPalette(palette QPalette) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(palette)
	C.QAbstractTextDocumentLayout__PaintContext_setPalette(this.h, palette.cPointer())
}

func (this *QAbstractTextDocumentLayout__PaintContext) Clip() QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRectF](C.QAbstractTextDocumentLayout__PaintContext_clip(this.h))
}

func (this *QAbstractTextDocumentLayout__PaintContext) SetClip(clip QRectF) {
	defer runtime.KeepAlive(this)
	C.QAbstractTextDocumentLayout__PaintContext_setClip(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](clip))
}

func (this *QAbstractTextDocumentLayout__PaintContext) Selections() []QAbstractTextDocumentLayout__Selection {
	defer runtime.KeepAlive(this)
	var selections_ma C.struct_miqt_array = C.QAbstractTextDocumentLayout__PaintContext_selections(this.h)
	selections_ret := make([]QAbstractTextDocumentLayout__Selection, int(selections_ma.len))
	selections_outCast := unsafe.Slice((**C.QAbstractTextDocumentLayout__Selection)(unsafe.Pointer(selections_ma.data)), int(selections_ma.len))
	for i := 0; i < int(selections_ma.len); i++ {
		selections_vv_goptr := newQAbstractTextDocumentLayout__Selection(selections_outCast[i])
		selections_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		selections_ret[i] = *selections_vv_goptr
	}
	return selections_ret
}

func (this *QAbstractTextDocumentLayout__PaintContext) SetSelections(selections []QAbstractTextDocumentLayout__Selection) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(selections)
	selections_CArray_ptr := (**C.QAbstractTextDocumentLayout__Selection)(C.malloc(C.size_t(8 * len(selections))))
	defer C.free(unsafe.Pointer(selections_CArray_ptr))
	selections_CArray := unsafe.Slice(selections_CArray_ptr, len(selections))
	for i := range selections {
		selections_CArray[i] = selections[i].cPointer()
	}
	selections_ma := C.struct_miqt_array{len: C.size_t(len(selections)), data: unsafe.Pointer(selections_CArray_ptr)}
	C.QAbstractTextDocumentLayout__PaintContext_setSelections(this.h, selections_ma)
}

func (this *QAbstractTextDocumentLayout__PaintContext) OperatorAssign(param1 *QAbstractTextDocumentLayout__PaintContext) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QAbstractTextDocumentLayout__PaintContext_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QAbstractTextDocumentLayout__PaintContext) Delete() {
	C.QAbstractTextDocumentLayout__PaintContext_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAbstractTextDocumentLayout__PaintContext) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAbstractTextDocumentLayout__PaintContext_delete((*C.QAbstractTextDocumentLayout__PaintContext)(gc[0]))
	})
	this.miqtSetGC(gc)
}
