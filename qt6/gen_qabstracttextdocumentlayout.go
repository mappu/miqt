package qt6

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
	h          *C.QAbstractTextDocumentLayout
	isSubclass bool
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

// newQAbstractTextDocumentLayout constructs the type using only CGO pointers.
func newQAbstractTextDocumentLayout(h *C.QAbstractTextDocumentLayout, h_QObject *C.QObject) *QAbstractTextDocumentLayout {
	if h == nil {
		return nil
	}
	return &QAbstractTextDocumentLayout{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQAbstractTextDocumentLayout constructs the type using only unsafe pointers.
func UnsafeNewQAbstractTextDocumentLayout(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAbstractTextDocumentLayout {
	if h == nil {
		return nil
	}

	return &QAbstractTextDocumentLayout{h: (*C.QAbstractTextDocumentLayout)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQAbstractTextDocumentLayout constructs a new QAbstractTextDocumentLayout object.
func NewQAbstractTextDocumentLayout(doc *QTextDocument) *QAbstractTextDocumentLayout {
	var outptr_QAbstractTextDocumentLayout *C.QAbstractTextDocumentLayout = nil
	var outptr_QObject *C.QObject = nil

	C.QAbstractTextDocumentLayout_new(doc.cPointer(), &outptr_QAbstractTextDocumentLayout, &outptr_QObject)
	ret := newQAbstractTextDocumentLayout(outptr_QAbstractTextDocumentLayout, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAbstractTextDocumentLayout) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractTextDocumentLayout_MetaObject(this.h)))
}

func (this *QAbstractTextDocumentLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractTextDocumentLayout_Metacast(this.h, param1_Cstring))
}

func QAbstractTextDocumentLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTextDocumentLayout_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractTextDocumentLayout) Draw(painter *QPainter, context *QAbstractTextDocumentLayout__PaintContext) {
	C.QAbstractTextDocumentLayout_Draw(this.h, painter.cPointer(), context.cPointer())
}

func (this *QAbstractTextDocumentLayout) HitTest(point *QPointF, accuracy HitTestAccuracy) int {
	return (int)(C.QAbstractTextDocumentLayout_HitTest(this.h, point.cPointer(), (C.int)(accuracy)))
}

func (this *QAbstractTextDocumentLayout) AnchorAt(pos *QPointF) string {
	var _ms C.struct_miqt_string = C.QAbstractTextDocumentLayout_AnchorAt(this.h, pos.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractTextDocumentLayout) ImageAt(pos *QPointF) string {
	var _ms C.struct_miqt_string = C.QAbstractTextDocumentLayout_ImageAt(this.h, pos.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
	return UnsafeNewQTextDocument(unsafe.Pointer(C.QAbstractTextDocumentLayout_Document(this.h)), nil)
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
	var _ms C.struct_miqt_string = C.QAbstractTextDocumentLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractTextDocumentLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractTextDocumentLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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

func (this *QAbstractTextDocumentLayout) OnDraw(slot func(painter *QPainter, context *QAbstractTextDocumentLayout__PaintContext)) {
	C.QAbstractTextDocumentLayout_override_virtual_Draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_Draw
func miqt_exec_callback_QAbstractTextDocumentLayout_Draw(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, painter *C.QPainter, context *C.QAbstractTextDocumentLayout__PaintContext) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *QPainter, context *QAbstractTextDocumentLayout__PaintContext))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQAbstractTextDocumentLayout__PaintContext(unsafe.Pointer(context))

	gofunc(slotval1, slotval2)

}
func (this *QAbstractTextDocumentLayout) OnHitTest(slot func(point *QPointF, accuracy HitTestAccuracy) int) {
	C.QAbstractTextDocumentLayout_override_virtual_HitTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_HitTest
func miqt_exec_callback_QAbstractTextDocumentLayout_HitTest(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, point *C.QPointF, accuracy C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(point *QPointF, accuracy HitTestAccuracy) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPointF(unsafe.Pointer(point))
	slotval2 := (HitTestAccuracy)(accuracy)

	virtualReturn := gofunc(slotval1, slotval2)

	return (C.int)(virtualReturn)

}
func (this *QAbstractTextDocumentLayout) OnPageCount(slot func() int) {
	C.QAbstractTextDocumentLayout_override_virtual_PageCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_PageCount
func miqt_exec_callback_QAbstractTextDocumentLayout_PageCount(self *C.QAbstractTextDocumentLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QAbstractTextDocumentLayout) OnDocumentSize(slot func() *QSizeF) {
	C.QAbstractTextDocumentLayout_override_virtual_DocumentSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_DocumentSize
func miqt_exec_callback_QAbstractTextDocumentLayout_DocumentSize(self *C.QAbstractTextDocumentLayout, cb C.intptr_t) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QAbstractTextDocumentLayout) OnFrameBoundingRect(slot func(frame *QTextFrame) *QRectF) {
	C.QAbstractTextDocumentLayout_override_virtual_FrameBoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_FrameBoundingRect
func miqt_exec_callback_QAbstractTextDocumentLayout_FrameBoundingRect(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, frame *C.QTextFrame) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QTextFrame) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTextFrame(unsafe.Pointer(frame), nil, nil)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QAbstractTextDocumentLayout) OnBlockBoundingRect(slot func(block *QTextBlock) *QRectF) {
	C.QAbstractTextDocumentLayout_override_virtual_BlockBoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_BlockBoundingRect
func miqt_exec_callback_QAbstractTextDocumentLayout_BlockBoundingRect(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, block *C.QTextBlock) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(block *QTextBlock) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTextBlock(unsafe.Pointer(block))

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QAbstractTextDocumentLayout) OnDocumentChanged(slot func(from int, charsRemoved int, charsAdded int)) {
	C.QAbstractTextDocumentLayout_override_virtual_DocumentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_DocumentChanged
func miqt_exec_callback_QAbstractTextDocumentLayout_DocumentChanged(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, from C.int, charsRemoved C.int, charsAdded C.int) {
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

	C.QAbstractTextDocumentLayout_virtualbase_ResizeInlineObject(unsafe.Pointer(this.h), item.cPointer(), (C.int)(posInDocument), format.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnResizeInlineObject(slot func(super func(item QTextInlineObject, posInDocument int, format *QTextFormat), item QTextInlineObject, posInDocument int, format *QTextFormat)) {
	C.QAbstractTextDocumentLayout_override_virtual_ResizeInlineObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_ResizeInlineObject
func miqt_exec_callback_QAbstractTextDocumentLayout_ResizeInlineObject(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, item *C.QTextInlineObject, posInDocument C.int, format *C.QTextFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item QTextInlineObject, posInDocument int, format *QTextFormat), item QTextInlineObject, posInDocument int, format *QTextFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_ret := item
	item_goptr := newQTextInlineObject(item_ret)
	item_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *item_goptr

	slotval2 := (int)(posInDocument)

	slotval3 := UnsafeNewQTextFormat(unsafe.Pointer(format))

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_ResizeInlineObject, slotval1, slotval2, slotval3)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_PositionInlineObject(item QTextInlineObject, posInDocument int, format *QTextFormat) {

	C.QAbstractTextDocumentLayout_virtualbase_PositionInlineObject(unsafe.Pointer(this.h), item.cPointer(), (C.int)(posInDocument), format.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnPositionInlineObject(slot func(super func(item QTextInlineObject, posInDocument int, format *QTextFormat), item QTextInlineObject, posInDocument int, format *QTextFormat)) {
	C.QAbstractTextDocumentLayout_override_virtual_PositionInlineObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_PositionInlineObject
func miqt_exec_callback_QAbstractTextDocumentLayout_PositionInlineObject(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, item *C.QTextInlineObject, posInDocument C.int, format *C.QTextFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item QTextInlineObject, posInDocument int, format *QTextFormat), item QTextInlineObject, posInDocument int, format *QTextFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_ret := item
	item_goptr := newQTextInlineObject(item_ret)
	item_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *item_goptr

	slotval2 := (int)(posInDocument)

	slotval3 := UnsafeNewQTextFormat(unsafe.Pointer(format))

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_PositionInlineObject, slotval1, slotval2, slotval3)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_DrawInlineObject(painter *QPainter, rect *QRectF, object QTextInlineObject, posInDocument int, format *QTextFormat) {

	C.QAbstractTextDocumentLayout_virtualbase_DrawInlineObject(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer(), object.cPointer(), (C.int)(posInDocument), format.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnDrawInlineObject(slot func(super func(painter *QPainter, rect *QRectF, object QTextInlineObject, posInDocument int, format *QTextFormat), painter *QPainter, rect *QRectF, object QTextInlineObject, posInDocument int, format *QTextFormat)) {
	C.QAbstractTextDocumentLayout_override_virtual_DrawInlineObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_DrawInlineObject
func miqt_exec_callback_QAbstractTextDocumentLayout_DrawInlineObject(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, painter *C.QPainter, rect *C.QRectF, object *C.QTextInlineObject, posInDocument C.int, format *C.QTextFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRectF, object QTextInlineObject, posInDocument int, format *QTextFormat), painter *QPainter, rect *QRectF, object QTextInlineObject, posInDocument int, format *QTextFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQRectF(unsafe.Pointer(rect))
	object_ret := object
	object_goptr := newQTextInlineObject(object_ret)
	object_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval3 := *object_goptr

	slotval4 := (int)(posInDocument)

	slotval5 := UnsafeNewQTextFormat(unsafe.Pointer(format))

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_DrawInlineObject, slotval1, slotval2, slotval3, slotval4, slotval5)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAbstractTextDocumentLayout_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAbstractTextDocumentLayout) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QAbstractTextDocumentLayout_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_Event
func miqt_exec_callback_QAbstractTextDocumentLayout_Event(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAbstractTextDocumentLayout_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAbstractTextDocumentLayout) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	C.QAbstractTextDocumentLayout_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_EventFilter
func miqt_exec_callback_QAbstractTextDocumentLayout_EventFilter(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAbstractTextDocumentLayout_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	C.QAbstractTextDocumentLayout_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_TimerEvent
func miqt_exec_callback_QAbstractTextDocumentLayout_TimerEvent(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAbstractTextDocumentLayout_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	C.QAbstractTextDocumentLayout_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_ChildEvent
func miqt_exec_callback_QAbstractTextDocumentLayout_ChildEvent(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAbstractTextDocumentLayout_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QAbstractTextDocumentLayout_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_CustomEvent
func miqt_exec_callback_QAbstractTextDocumentLayout_CustomEvent(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAbstractTextDocumentLayout_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QAbstractTextDocumentLayout_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_ConnectNotify
func miqt_exec_callback_QAbstractTextDocumentLayout_ConnectNotify(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractTextDocumentLayout) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAbstractTextDocumentLayout_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractTextDocumentLayout) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QAbstractTextDocumentLayout_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractTextDocumentLayout_DisconnectNotify
func miqt_exec_callback_QAbstractTextDocumentLayout_DisconnectNotify(self *C.QAbstractTextDocumentLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractTextDocumentLayout{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractTextDocumentLayout) Delete() {
	C.QAbstractTextDocumentLayout_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QTextObjectInterface
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QTextObjectInterface{h: (*C.QTextObjectInterface)(h)}
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
	C.QTextObjectInterface_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QAbstractTextDocumentLayout__Selection
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QAbstractTextDocumentLayout__Selection{h: (*C.QAbstractTextDocumentLayout__Selection)(h)}
}

// NewQAbstractTextDocumentLayout__Selection constructs a new QAbstractTextDocumentLayout::Selection object.
func NewQAbstractTextDocumentLayout__Selection(param1 *QAbstractTextDocumentLayout__Selection) *QAbstractTextDocumentLayout__Selection {
	var outptr_QAbstractTextDocumentLayout__Selection *C.QAbstractTextDocumentLayout__Selection = nil

	C.QAbstractTextDocumentLayout__Selection_new(param1.cPointer(), &outptr_QAbstractTextDocumentLayout__Selection)
	ret := newQAbstractTextDocumentLayout__Selection(outptr_QAbstractTextDocumentLayout__Selection)
	ret.isSubclass = true
	return ret
}

func (this *QAbstractTextDocumentLayout__Selection) OperatorAssign(param1 *QAbstractTextDocumentLayout__Selection) {
	C.QAbstractTextDocumentLayout__Selection_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QAbstractTextDocumentLayout__Selection) Delete() {
	C.QAbstractTextDocumentLayout__Selection_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QAbstractTextDocumentLayout__PaintContext
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QAbstractTextDocumentLayout__PaintContext{h: (*C.QAbstractTextDocumentLayout__PaintContext)(h)}
}

// NewQAbstractTextDocumentLayout__PaintContext constructs a new QAbstractTextDocumentLayout::PaintContext object.
func NewQAbstractTextDocumentLayout__PaintContext() *QAbstractTextDocumentLayout__PaintContext {
	var outptr_QAbstractTextDocumentLayout__PaintContext *C.QAbstractTextDocumentLayout__PaintContext = nil

	C.QAbstractTextDocumentLayout__PaintContext_new(&outptr_QAbstractTextDocumentLayout__PaintContext)
	ret := newQAbstractTextDocumentLayout__PaintContext(outptr_QAbstractTextDocumentLayout__PaintContext)
	ret.isSubclass = true
	return ret
}

// NewQAbstractTextDocumentLayout__PaintContext2 constructs a new QAbstractTextDocumentLayout::PaintContext object.
func NewQAbstractTextDocumentLayout__PaintContext2(param1 *QAbstractTextDocumentLayout__PaintContext) *QAbstractTextDocumentLayout__PaintContext {
	var outptr_QAbstractTextDocumentLayout__PaintContext *C.QAbstractTextDocumentLayout__PaintContext = nil

	C.QAbstractTextDocumentLayout__PaintContext_new2(param1.cPointer(), &outptr_QAbstractTextDocumentLayout__PaintContext)
	ret := newQAbstractTextDocumentLayout__PaintContext(outptr_QAbstractTextDocumentLayout__PaintContext)
	ret.isSubclass = true
	return ret
}

func (this *QAbstractTextDocumentLayout__PaintContext) OperatorAssign(param1 *QAbstractTextDocumentLayout__PaintContext) {
	C.QAbstractTextDocumentLayout__PaintContext_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QAbstractTextDocumentLayout__PaintContext) Delete() {
	C.QAbstractTextDocumentLayout__PaintContext_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractTextDocumentLayout__PaintContext) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractTextDocumentLayout__PaintContext) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
