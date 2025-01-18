package qt

/*

#include "gen_qcursor.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCursor struct {
	h *C.QCursor
}

func (this *QCursor) cPointer() *C.QCursor {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCursor) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCursor constructs the type using only CGO pointers.
func newQCursor(h *C.QCursor) *QCursor {
	if h == nil {
		return nil
	}

	return &QCursor{h: h}
}

// UnsafeNewQCursor constructs the type using only unsafe pointers.
func UnsafeNewQCursor(h unsafe.Pointer) *QCursor {
	return newQCursor((*C.QCursor)(h))
}

// NewQCursor constructs a new QCursor object.
func NewQCursor() *QCursor {

	return newQCursor(C.QCursor_new())
}

// NewQCursor2 constructs a new QCursor object.
func NewQCursor2(shape CursorShape) *QCursor {

	return newQCursor(C.QCursor_new2((C.int)(shape)))
}

// NewQCursor3 constructs a new QCursor object.
func NewQCursor3(bitmap *QBitmap, mask *QBitmap) *QCursor {

	return newQCursor(C.QCursor_new3(bitmap.cPointer(), mask.cPointer()))
}

// NewQCursor4 constructs a new QCursor object.
func NewQCursor4(pixmap *QPixmap) *QCursor {

	return newQCursor(C.QCursor_new4(pixmap.cPointer()))
}

// NewQCursor5 constructs a new QCursor object.
func NewQCursor5(cursor *QCursor) *QCursor {

	return newQCursor(C.QCursor_new5(cursor.cPointer()))
}

// NewQCursor6 constructs a new QCursor object.
func NewQCursor6(bitmap *QBitmap, mask *QBitmap, hotX int) *QCursor {

	return newQCursor(C.QCursor_new6(bitmap.cPointer(), mask.cPointer(), (C.int)(hotX)))
}

// NewQCursor7 constructs a new QCursor object.
func NewQCursor7(bitmap *QBitmap, mask *QBitmap, hotX int, hotY int) *QCursor {

	return newQCursor(C.QCursor_new7(bitmap.cPointer(), mask.cPointer(), (C.int)(hotX), (C.int)(hotY)))
}

// NewQCursor8 constructs a new QCursor object.
func NewQCursor8(pixmap *QPixmap, hotX int) *QCursor {

	return newQCursor(C.QCursor_new8(pixmap.cPointer(), (C.int)(hotX)))
}

// NewQCursor9 constructs a new QCursor object.
func NewQCursor9(pixmap *QPixmap, hotX int, hotY int) *QCursor {

	return newQCursor(C.QCursor_new9(pixmap.cPointer(), (C.int)(hotX), (C.int)(hotY)))
}

func (this *QCursor) OperatorAssign(cursor *QCursor) {
	C.QCursor_OperatorAssign(this.h, cursor.cPointer())
}

func (this *QCursor) Swap(other *QCursor) {
	C.QCursor_Swap(this.h, other.cPointer())
}

func (this *QCursor) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QCursor_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCursor) Shape() CursorShape {
	return (CursorShape)(C.QCursor_Shape(this.h))
}

func (this *QCursor) SetShape(newShape CursorShape) {
	C.QCursor_SetShape(this.h, (C.int)(newShape))
}

func (this *QCursor) Bitmap() *QBitmap {
	return newQBitmap(C.QCursor_Bitmap(this.h))
}

func (this *QCursor) Mask() *QBitmap {
	return newQBitmap(C.QCursor_Mask(this.h))
}

func (this *QCursor) BitmapWithQtReturnByValueConstant(param1 ReturnByValueConstant) *QBitmap {
	_goptr := newQBitmap(C.QCursor_BitmapWithQtReturnByValueConstant(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCursor) MaskWithQtReturnByValueConstant(param1 ReturnByValueConstant) *QBitmap {
	_goptr := newQBitmap(C.QCursor_MaskWithQtReturnByValueConstant(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCursor) Pixmap() *QPixmap {
	_goptr := newQPixmap(C.QCursor_Pixmap(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCursor) HotSpot() *QPoint {
	_goptr := newQPoint(C.QCursor_HotSpot(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCursor_Pos() *QPoint {
	_goptr := newQPoint(C.QCursor_Pos())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCursor_PosWithScreen(screen *QScreen) *QPoint {
	_goptr := newQPoint(C.QCursor_PosWithScreen(screen.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCursor_SetPos(x int, y int) {
	C.QCursor_SetPos((C.int)(x), (C.int)(y))
}

func QCursor_SetPos2(screen *QScreen, x int, y int) {
	C.QCursor_SetPos2(screen.cPointer(), (C.int)(x), (C.int)(y))
}

func QCursor_SetPosWithQPoint(p *QPoint) {
	C.QCursor_SetPosWithQPoint(p.cPointer())
}

func QCursor_SetPos3(screen *QScreen, p *QPoint) {
	C.QCursor_SetPos3(screen.cPointer(), p.cPointer())
}

// Delete this object from C++ memory.
func (this *QCursor) Delete() {
	C.QCursor_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCursor) GoGC() {
	runtime.SetFinalizer(this, func(this *QCursor) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
