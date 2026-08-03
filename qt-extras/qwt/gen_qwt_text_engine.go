package qwt

/*

#include "gen_qwt_text_engine.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtTextEngine struct {
	h *C.QwtTextEngine
}

func (this *QwtTextEngine) cPointer() *C.QwtTextEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtTextEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtTextEngine constructs the type using only CGO pointers.
func newQwtTextEngine(h *C.QwtTextEngine) *QwtTextEngine {
	if h == nil {
		return nil
	}

	return &QwtTextEngine{h: h}
}

// UnsafeNewQwtTextEngine constructs the type using only unsafe pointers.
func UnsafeNewQwtTextEngine(h unsafe.Pointer) *QwtTextEngine {
	return newQwtTextEngine((*C.QwtTextEngine)(h))
}

// NewQwtTextEngine constructs a new QwtTextEngine object.
func NewQwtTextEngine(param1 *QwtTextEngine) *QwtTextEngine {

	return newQwtTextEngine(C.QwtTextEngine_new(param1.cPointer()))
}

func (this *QwtTextEngine) HeightForWidth(font *qt.QFont, flags int, text string, width float64) float64 {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (float64)(C.QwtTextEngine_heightForWidth(this.h, (*C.QFont)(font.UnsafePointer()), (C.int)(flags), text_ms, (C.double)(width)))
}

func (this *QwtTextEngine) TextSize(font *qt.QFont, flags int, text string) *qt.QSizeF {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QwtTextEngine_textSize(this.h, (*C.QFont)(font.UnsafePointer()), (C.int)(flags), text_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtTextEngine) MightRender(text string) bool {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (bool)(C.QwtTextEngine_mightRender(this.h, text_ms))
}

func (this *QwtTextEngine) TextMargins(font *qt.QFont, text string, left *float64, right *float64, top *float64, bottom *float64) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QwtTextEngine_textMargins(this.h, (*C.QFont)(font.UnsafePointer()), text_ms, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(bottom)))
}

func (this *QwtTextEngine) Draw(painter *qt.QPainter, rect *qt.QRectF, flags int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QwtTextEngine_draw(this.h, (*C.QPainter)(painter.UnsafePointer()), (*C.QRectF)(rect.UnsafePointer()), (C.int)(flags), text_ms)
}

func (this *QwtTextEngine) OperatorAssign(param1 *QwtTextEngine) {
	C.QwtTextEngine_operatorAssign(this.h, param1.cPointer())
}
func (this *QwtTextEngine) OnHeightForWidth(slot func(font *qt.QFont, flags int, text string, width float64) float64) {
	ok := C.QwtTextEngine_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextEngine_heightForWidth
func miqt_exec_callback_QwtTextEngine_heightForWidth(self *C.QwtTextEngine, cb C.intptr_t, font *C.QFont, flags C.int, text C.struct_miqt_string, width C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(font *qt.QFont, flags int, text string, width float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(font))

	slotval2 := (int)(flags)

	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval3 := text_ret
	slotval4 := (float64)(width)

	virtualReturn := gofunc(slotval1, slotval2, slotval3, slotval4)

	return (C.double)(virtualReturn)

}
func (this *QwtTextEngine) OnTextSize(slot func(font *qt.QFont, flags int, text string) *qt.QSizeF) {
	ok := C.QwtTextEngine_override_virtual_textSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextEngine_textSize
func miqt_exec_callback_QwtTextEngine_textSize(self *C.QwtTextEngine, cb C.intptr_t, font *C.QFont, flags C.int, text C.struct_miqt_string) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(font *qt.QFont, flags int, text string) *qt.QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(font))

	slotval2 := (int)(flags)

	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval3 := text_ret

	virtualReturn := gofunc(slotval1, slotval2, slotval3)

	return (*C.QSizeF)(virtualReturn.UnsafePointer())

}
func (this *QwtTextEngine) OnMightRender(slot func(text string) bool) {
	ok := C.QwtTextEngine_override_virtual_mightRender(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextEngine_mightRender
func miqt_exec_callback_QwtTextEngine_mightRender(self *C.QwtTextEngine, cb C.intptr_t, text C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(text string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QwtTextEngine) OnTextMargins(slot func(font *qt.QFont, text string, left *float64, right *float64, top *float64, bottom *float64)) {
	ok := C.QwtTextEngine_override_virtual_textMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextEngine_textMargins
func miqt_exec_callback_QwtTextEngine_textMargins(self *C.QwtTextEngine, cb C.intptr_t, font *C.QFont, text C.struct_miqt_string, left *C.double, right *C.double, top *C.double, bottom *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(font *qt.QFont, text string, left *float64, right *float64, top *float64, bottom *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(font))

	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval2 := text_ret
	slotval3 := (*float64)(unsafe.Pointer(left))

	slotval4 := (*float64)(unsafe.Pointer(right))

	slotval5 := (*float64)(unsafe.Pointer(top))

	slotval6 := (*float64)(unsafe.Pointer(bottom))

	gofunc(slotval1, slotval2, slotval3, slotval4, slotval5, slotval6)

}
func (this *QwtTextEngine) OnDraw(slot func(painter *qt.QPainter, rect *qt.QRectF, flags int, text string)) {
	ok := C.QwtTextEngine_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextEngine_draw
func miqt_exec_callback_QwtTextEngine_draw(self *C.QwtTextEngine, cb C.intptr_t, painter *C.QPainter, rect *C.QRectF, flags C.int, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *qt.QPainter, rect *qt.QRectF, flags int, text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt.UnsafeNewQRectF(unsafe.Pointer(rect))

	slotval3 := (int)(flags)

	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval4 := text_ret

	gofunc(slotval1, slotval2, slotval3, slotval4)

}

// Delete this object from C++ memory.
func (this *QwtTextEngine) Delete() {
	C.QwtTextEngine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtTextEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtTextEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtPlainTextEngine struct {
	h *C.QwtPlainTextEngine
	*QwtTextEngine
}

func (this *QwtPlainTextEngine) cPointer() *C.QwtPlainTextEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlainTextEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlainTextEngine constructs the type using only CGO pointers.
func newQwtPlainTextEngine(h *C.QwtPlainTextEngine) *QwtPlainTextEngine {
	if h == nil {
		return nil
	}
	var outptr_QwtTextEngine *C.QwtTextEngine = nil
	C.QwtPlainTextEngine_virtbase(h, &outptr_QwtTextEngine)

	return &QwtPlainTextEngine{h: h,
		QwtTextEngine: newQwtTextEngine(outptr_QwtTextEngine)}
}

// UnsafeNewQwtPlainTextEngine constructs the type using only unsafe pointers.
func UnsafeNewQwtPlainTextEngine(h unsafe.Pointer) *QwtPlainTextEngine {
	return newQwtPlainTextEngine((*C.QwtPlainTextEngine)(h))
}

// NewQwtPlainTextEngine constructs a new QwtPlainTextEngine object.
func NewQwtPlainTextEngine() *QwtPlainTextEngine {

	return newQwtPlainTextEngine(C.QwtPlainTextEngine_new())
}

// NewQwtPlainTextEngine2 constructs a new QwtPlainTextEngine object.
func NewQwtPlainTextEngine2(param1 *QwtPlainTextEngine) *QwtPlainTextEngine {

	return newQwtPlainTextEngine(C.QwtPlainTextEngine_new2(param1.cPointer()))
}

func (this *QwtPlainTextEngine) HeightForWidth(font *qt.QFont, flags int, text string, width float64) float64 {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (float64)(C.QwtPlainTextEngine_heightForWidth(this.h, (*C.QFont)(font.UnsafePointer()), (C.int)(flags), text_ms, (C.double)(width)))
}

func (this *QwtPlainTextEngine) TextSize(font *qt.QFont, flags int, text string) *qt.QSizeF {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QwtPlainTextEngine_textSize(this.h, (*C.QFont)(font.UnsafePointer()), (C.int)(flags), text_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlainTextEngine) Draw(painter *qt.QPainter, rect *qt.QRectF, flags int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QwtPlainTextEngine_draw(this.h, (*C.QPainter)(painter.UnsafePointer()), (*C.QRectF)(rect.UnsafePointer()), (C.int)(flags), text_ms)
}

func (this *QwtPlainTextEngine) MightRender(param1 string) bool {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return (bool)(C.QwtPlainTextEngine_mightRender(this.h, param1_ms))
}

func (this *QwtPlainTextEngine) TextMargins(param1 *qt.QFont, param2 string, left *float64, right *float64, top *float64, bottom *float64) {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	C.QwtPlainTextEngine_textMargins(this.h, (*C.QFont)(param1.UnsafePointer()), param2_ms, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(bottom)))
}

func (this *QwtPlainTextEngine) OperatorAssign(param1 *QwtPlainTextEngine) {
	C.QwtPlainTextEngine_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtPlainTextEngine) callVirtualBase_HeightForWidth(font *qt.QFont, flags int, text string, width float64) float64 {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return (float64)(C.QwtPlainTextEngine_virtualbase_heightForWidth(unsafe.Pointer(this.h), (*C.QFont)(font.UnsafePointer()), (C.int)(flags), text_ms, (C.double)(width)))

}
func (this *QwtPlainTextEngine) OnHeightForWidth(slot func(super func(font *qt.QFont, flags int, text string, width float64) float64, font *qt.QFont, flags int, text string, width float64) float64) {
	ok := C.QwtPlainTextEngine_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlainTextEngine_heightForWidth
func miqt_exec_callback_QwtPlainTextEngine_heightForWidth(self *C.QwtPlainTextEngine, cb C.intptr_t, font *C.QFont, flags C.int, text C.struct_miqt_string, width C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(font *qt.QFont, flags int, text string, width float64) float64, font *qt.QFont, flags int, text string, width float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(font))

	slotval2 := (int)(flags)

	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval3 := text_ret
	slotval4 := (float64)(width)

	virtualReturn := gofunc((&QwtPlainTextEngine{h: self}).callVirtualBase_HeightForWidth, slotval1, slotval2, slotval3, slotval4)

	return (C.double)(virtualReturn)

}

func (this *QwtPlainTextEngine) callVirtualBase_TextSize(font *qt.QFont, flags int, text string) *qt.QSizeF {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QwtPlainTextEngine_virtualbase_textSize(unsafe.Pointer(this.h), (*C.QFont)(font.UnsafePointer()), (C.int)(flags), text_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlainTextEngine) OnTextSize(slot func(super func(font *qt.QFont, flags int, text string) *qt.QSizeF, font *qt.QFont, flags int, text string) *qt.QSizeF) {
	ok := C.QwtPlainTextEngine_override_virtual_textSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlainTextEngine_textSize
func miqt_exec_callback_QwtPlainTextEngine_textSize(self *C.QwtPlainTextEngine, cb C.intptr_t, font *C.QFont, flags C.int, text C.struct_miqt_string) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(font *qt.QFont, flags int, text string) *qt.QSizeF, font *qt.QFont, flags int, text string) *qt.QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(font))

	slotval2 := (int)(flags)

	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval3 := text_ret

	virtualReturn := gofunc((&QwtPlainTextEngine{h: self}).callVirtualBase_TextSize, slotval1, slotval2, slotval3)

	return (*C.QSizeF)(virtualReturn.UnsafePointer())

}

func (this *QwtPlainTextEngine) callVirtualBase_Draw(painter *qt.QPainter, rect *qt.QRectF, flags int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	C.QwtPlainTextEngine_virtualbase_draw(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QRectF)(rect.UnsafePointer()), (C.int)(flags), text_ms)

}
func (this *QwtPlainTextEngine) OnDraw(slot func(super func(painter *qt.QPainter, rect *qt.QRectF, flags int, text string), painter *qt.QPainter, rect *qt.QRectF, flags int, text string)) {
	ok := C.QwtPlainTextEngine_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlainTextEngine_draw
func miqt_exec_callback_QwtPlainTextEngine_draw(self *C.QwtPlainTextEngine, cb C.intptr_t, painter *C.QPainter, rect *C.QRectF, flags C.int, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter, rect *qt.QRectF, flags int, text string), painter *qt.QPainter, rect *qt.QRectF, flags int, text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt.UnsafeNewQRectF(unsafe.Pointer(rect))

	slotval3 := (int)(flags)

	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval4 := text_ret

	gofunc((&QwtPlainTextEngine{h: self}).callVirtualBase_Draw, slotval1, slotval2, slotval3, slotval4)

}

func (this *QwtPlainTextEngine) callVirtualBase_MightRender(param1 string) bool {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))

	return (bool)(C.QwtPlainTextEngine_virtualbase_mightRender(unsafe.Pointer(this.h), param1_ms))

}
func (this *QwtPlainTextEngine) OnMightRender(slot func(super func(param1 string) bool, param1 string) bool) {
	ok := C.QwtPlainTextEngine_override_virtual_mightRender(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlainTextEngine_mightRender
func miqt_exec_callback_QwtPlainTextEngine_mightRender(self *C.QwtPlainTextEngine, cb C.intptr_t, param1 C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 string) bool, param1 string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	virtualReturn := gofunc((&QwtPlainTextEngine{h: self}).callVirtualBase_MightRender, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlainTextEngine) callVirtualBase_TextMargins(param1 *qt.QFont, param2 string, left *float64, right *float64, top *float64, bottom *float64) {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))

	C.QwtPlainTextEngine_virtualbase_textMargins(unsafe.Pointer(this.h), (*C.QFont)(param1.UnsafePointer()), param2_ms, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QwtPlainTextEngine) OnTextMargins(slot func(super func(param1 *qt.QFont, param2 string, left *float64, right *float64, top *float64, bottom *float64), param1 *qt.QFont, param2 string, left *float64, right *float64, top *float64, bottom *float64)) {
	ok := C.QwtPlainTextEngine_override_virtual_textMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlainTextEngine_textMargins
func miqt_exec_callback_QwtPlainTextEngine_textMargins(self *C.QwtPlainTextEngine, cb C.intptr_t, param1 *C.QFont, param2 C.struct_miqt_string, left *C.double, right *C.double, top *C.double, bottom *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFont, param2 string, left *float64, right *float64, top *float64, bottom *float64), param1 *qt.QFont, param2 string, left *float64, right *float64, top *float64, bottom *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(param1))

	var param2_ms C.struct_miqt_string = param2
	param2_ret := C.GoStringN(param2_ms.data, C.int(int64(param2_ms.len)))
	C.free(unsafe.Pointer(param2_ms.data))
	slotval2 := param2_ret
	slotval3 := (*float64)(unsafe.Pointer(left))

	slotval4 := (*float64)(unsafe.Pointer(right))

	slotval5 := (*float64)(unsafe.Pointer(top))

	slotval6 := (*float64)(unsafe.Pointer(bottom))

	gofunc((&QwtPlainTextEngine{h: self}).callVirtualBase_TextMargins, slotval1, slotval2, slotval3, slotval4, slotval5, slotval6)

}

// Delete this object from C++ memory.
func (this *QwtPlainTextEngine) Delete() {
	C.QwtPlainTextEngine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlainTextEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlainTextEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtRichTextEngine struct {
	h *C.QwtRichTextEngine
	*QwtTextEngine
}

func (this *QwtRichTextEngine) cPointer() *C.QwtRichTextEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtRichTextEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtRichTextEngine constructs the type using only CGO pointers.
func newQwtRichTextEngine(h *C.QwtRichTextEngine) *QwtRichTextEngine {
	if h == nil {
		return nil
	}
	var outptr_QwtTextEngine *C.QwtTextEngine = nil
	C.QwtRichTextEngine_virtbase(h, &outptr_QwtTextEngine)

	return &QwtRichTextEngine{h: h,
		QwtTextEngine: newQwtTextEngine(outptr_QwtTextEngine)}
}

// UnsafeNewQwtRichTextEngine constructs the type using only unsafe pointers.
func UnsafeNewQwtRichTextEngine(h unsafe.Pointer) *QwtRichTextEngine {
	return newQwtRichTextEngine((*C.QwtRichTextEngine)(h))
}

// NewQwtRichTextEngine constructs a new QwtRichTextEngine object.
func NewQwtRichTextEngine() *QwtRichTextEngine {

	return newQwtRichTextEngine(C.QwtRichTextEngine_new())
}

// NewQwtRichTextEngine2 constructs a new QwtRichTextEngine object.
func NewQwtRichTextEngine2(param1 *QwtRichTextEngine) *QwtRichTextEngine {

	return newQwtRichTextEngine(C.QwtRichTextEngine_new2(param1.cPointer()))
}

func (this *QwtRichTextEngine) HeightForWidth(font *qt.QFont, flags int, text string, width float64) float64 {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (float64)(C.QwtRichTextEngine_heightForWidth(this.h, (*C.QFont)(font.UnsafePointer()), (C.int)(flags), text_ms, (C.double)(width)))
}

func (this *QwtRichTextEngine) TextSize(font *qt.QFont, flags int, text string) *qt.QSizeF {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QwtRichTextEngine_textSize(this.h, (*C.QFont)(font.UnsafePointer()), (C.int)(flags), text_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtRichTextEngine) Draw(painter *qt.QPainter, rect *qt.QRectF, flags int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QwtRichTextEngine_draw(this.h, (*C.QPainter)(painter.UnsafePointer()), (*C.QRectF)(rect.UnsafePointer()), (C.int)(flags), text_ms)
}

func (this *QwtRichTextEngine) MightRender(param1 string) bool {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return (bool)(C.QwtRichTextEngine_mightRender(this.h, param1_ms))
}

func (this *QwtRichTextEngine) TextMargins(param1 *qt.QFont, param2 string, left *float64, right *float64, top *float64, bottom *float64) {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	C.QwtRichTextEngine_textMargins(this.h, (*C.QFont)(param1.UnsafePointer()), param2_ms, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(bottom)))
}

func (this *QwtRichTextEngine) OperatorAssign(param1 *QwtRichTextEngine) {
	C.QwtRichTextEngine_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtRichTextEngine) callVirtualBase_HeightForWidth(font *qt.QFont, flags int, text string, width float64) float64 {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return (float64)(C.QwtRichTextEngine_virtualbase_heightForWidth(unsafe.Pointer(this.h), (*C.QFont)(font.UnsafePointer()), (C.int)(flags), text_ms, (C.double)(width)))

}
func (this *QwtRichTextEngine) OnHeightForWidth(slot func(super func(font *qt.QFont, flags int, text string, width float64) float64, font *qt.QFont, flags int, text string, width float64) float64) {
	ok := C.QwtRichTextEngine_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRichTextEngine_heightForWidth
func miqt_exec_callback_QwtRichTextEngine_heightForWidth(self *C.QwtRichTextEngine, cb C.intptr_t, font *C.QFont, flags C.int, text C.struct_miqt_string, width C.double) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(font *qt.QFont, flags int, text string, width float64) float64, font *qt.QFont, flags int, text string, width float64) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(font))

	slotval2 := (int)(flags)

	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval3 := text_ret
	slotval4 := (float64)(width)

	virtualReturn := gofunc((&QwtRichTextEngine{h: self}).callVirtualBase_HeightForWidth, slotval1, slotval2, slotval3, slotval4)

	return (C.double)(virtualReturn)

}

func (this *QwtRichTextEngine) callVirtualBase_TextSize(font *qt.QFont, flags int, text string) *qt.QSizeF {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QwtRichTextEngine_virtualbase_textSize(unsafe.Pointer(this.h), (*C.QFont)(font.UnsafePointer()), (C.int)(flags), text_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtRichTextEngine) OnTextSize(slot func(super func(font *qt.QFont, flags int, text string) *qt.QSizeF, font *qt.QFont, flags int, text string) *qt.QSizeF) {
	ok := C.QwtRichTextEngine_override_virtual_textSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRichTextEngine_textSize
func miqt_exec_callback_QwtRichTextEngine_textSize(self *C.QwtRichTextEngine, cb C.intptr_t, font *C.QFont, flags C.int, text C.struct_miqt_string) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(font *qt.QFont, flags int, text string) *qt.QSizeF, font *qt.QFont, flags int, text string) *qt.QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(font))

	slotval2 := (int)(flags)

	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval3 := text_ret

	virtualReturn := gofunc((&QwtRichTextEngine{h: self}).callVirtualBase_TextSize, slotval1, slotval2, slotval3)

	return (*C.QSizeF)(virtualReturn.UnsafePointer())

}

func (this *QwtRichTextEngine) callVirtualBase_Draw(painter *qt.QPainter, rect *qt.QRectF, flags int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	C.QwtRichTextEngine_virtualbase_draw(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QRectF)(rect.UnsafePointer()), (C.int)(flags), text_ms)

}
func (this *QwtRichTextEngine) OnDraw(slot func(super func(painter *qt.QPainter, rect *qt.QRectF, flags int, text string), painter *qt.QPainter, rect *qt.QRectF, flags int, text string)) {
	ok := C.QwtRichTextEngine_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRichTextEngine_draw
func miqt_exec_callback_QwtRichTextEngine_draw(self *C.QwtRichTextEngine, cb C.intptr_t, painter *C.QPainter, rect *C.QRectF, flags C.int, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter, rect *qt.QRectF, flags int, text string), painter *qt.QPainter, rect *qt.QRectF, flags int, text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt.UnsafeNewQRectF(unsafe.Pointer(rect))

	slotval3 := (int)(flags)

	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval4 := text_ret

	gofunc((&QwtRichTextEngine{h: self}).callVirtualBase_Draw, slotval1, slotval2, slotval3, slotval4)

}

func (this *QwtRichTextEngine) callVirtualBase_MightRender(param1 string) bool {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))

	return (bool)(C.QwtRichTextEngine_virtualbase_mightRender(unsafe.Pointer(this.h), param1_ms))

}
func (this *QwtRichTextEngine) OnMightRender(slot func(super func(param1 string) bool, param1 string) bool) {
	ok := C.QwtRichTextEngine_override_virtual_mightRender(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRichTextEngine_mightRender
func miqt_exec_callback_QwtRichTextEngine_mightRender(self *C.QwtRichTextEngine, cb C.intptr_t, param1 C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 string) bool, param1 string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	virtualReturn := gofunc((&QwtRichTextEngine{h: self}).callVirtualBase_MightRender, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtRichTextEngine) callVirtualBase_TextMargins(param1 *qt.QFont, param2 string, left *float64, right *float64, top *float64, bottom *float64) {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))

	C.QwtRichTextEngine_virtualbase_textMargins(unsafe.Pointer(this.h), (*C.QFont)(param1.UnsafePointer()), param2_ms, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QwtRichTextEngine) OnTextMargins(slot func(super func(param1 *qt.QFont, param2 string, left *float64, right *float64, top *float64, bottom *float64), param1 *qt.QFont, param2 string, left *float64, right *float64, top *float64, bottom *float64)) {
	ok := C.QwtRichTextEngine_override_virtual_textMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtRichTextEngine_textMargins
func miqt_exec_callback_QwtRichTextEngine_textMargins(self *C.QwtRichTextEngine, cb C.intptr_t, param1 *C.QFont, param2 C.struct_miqt_string, left *C.double, right *C.double, top *C.double, bottom *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFont, param2 string, left *float64, right *float64, top *float64, bottom *float64), param1 *qt.QFont, param2 string, left *float64, right *float64, top *float64, bottom *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(param1))

	var param2_ms C.struct_miqt_string = param2
	param2_ret := C.GoStringN(param2_ms.data, C.int(int64(param2_ms.len)))
	C.free(unsafe.Pointer(param2_ms.data))
	slotval2 := param2_ret
	slotval3 := (*float64)(unsafe.Pointer(left))

	slotval4 := (*float64)(unsafe.Pointer(right))

	slotval5 := (*float64)(unsafe.Pointer(top))

	slotval6 := (*float64)(unsafe.Pointer(bottom))

	gofunc((&QwtRichTextEngine{h: self}).callVirtualBase_TextMargins, slotval1, slotval2, slotval3, slotval4, slotval5, slotval6)

}

// Delete this object from C++ memory.
func (this *QwtRichTextEngine) Delete() {
	C.QwtRichTextEngine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtRichTextEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtRichTextEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
