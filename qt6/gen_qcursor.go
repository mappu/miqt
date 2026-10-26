package qt6

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
	h  *C.QCursor
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QCursor) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(bitmap)
	defer runtime.KeepAlive(mask)

	return newQCursor(C.QCursor_new3(bitmap.cPointer(), mask.cPointer()))
}

// NewQCursor4 constructs a new QCursor object.
func NewQCursor4(pixmap *QPixmap) *QCursor {
	defer runtime.KeepAlive(pixmap)

	return newQCursor(C.QCursor_new4(pixmap.cPointer()))
}

// NewQCursor5 constructs a new QCursor object.
func NewQCursor5(cursor *QCursor) *QCursor {
	defer runtime.KeepAlive(cursor)

	return newQCursor(C.QCursor_new5(cursor.cPointer()))
}

// NewQCursor6 constructs a new QCursor object.
func NewQCursor6(bitmap *QBitmap, mask *QBitmap, hotX int) *QCursor {
	defer runtime.KeepAlive(bitmap)
	defer runtime.KeepAlive(mask)

	return newQCursor(C.QCursor_new6(bitmap.cPointer(), mask.cPointer(), (C.int)(hotX)))
}

// NewQCursor7 constructs a new QCursor object.
func NewQCursor7(bitmap *QBitmap, mask *QBitmap, hotX int, hotY int) *QCursor {
	defer runtime.KeepAlive(bitmap)
	defer runtime.KeepAlive(mask)

	return newQCursor(C.QCursor_new7(bitmap.cPointer(), mask.cPointer(), (C.int)(hotX), (C.int)(hotY)))
}

// NewQCursor8 constructs a new QCursor object.
func NewQCursor8(pixmap *QPixmap, hotX int) *QCursor {
	defer runtime.KeepAlive(pixmap)

	return newQCursor(C.QCursor_new8(pixmap.cPointer(), (C.int)(hotX)))
}

// NewQCursor9 constructs a new QCursor object.
func NewQCursor9(pixmap *QPixmap, hotX int, hotY int) *QCursor {
	defer runtime.KeepAlive(pixmap)

	return newQCursor(C.QCursor_new9(pixmap.cPointer(), (C.int)(hotX), (C.int)(hotY)))
}

func (this *QCursor) OperatorAssign(cursor *QCursor) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(cursor)
	C.QCursor_operatorAssign(this.h, cursor.cPointer())
}

func (this *QCursor) Swap(other *QCursor) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QCursor_swap(this.h, other.cPointer())
}

func (this *QCursor) ToQVariant() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QCursor_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCursor) Shape() CursorShape {
	defer runtime.KeepAlive(this)
	return (CursorShape)(C.QCursor_shape(this.h))
}

func (this *QCursor) SetShape(newShape CursorShape) {
	defer runtime.KeepAlive(this)
	C.QCursor_setShape(this.h, (C.int)(newShape))
}

func (this *QCursor) Bitmap(param1 ReturnByValueConstant) *QBitmap {
	defer runtime.KeepAlive(this)
	_goptr := newQBitmap(C.QCursor_bitmap(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCursor) Mask(param1 ReturnByValueConstant) *QBitmap {
	defer runtime.KeepAlive(this)
	_goptr := newQBitmap(C.QCursor_mask(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCursor) Bitmap2() *QBitmap {
	defer runtime.KeepAlive(this)
	_goptr := newQBitmap(C.QCursor_bitmap2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCursor) Mask2() *QBitmap {
	defer runtime.KeepAlive(this)
	_goptr := newQBitmap(C.QCursor_mask2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCursor) Pixmap() *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QCursor_pixmap(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCursor) HotSpot() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QCursor_hotSpot(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCursor_Pos() *QPoint {
	_goptr := newQPoint(C.QCursor_pos())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCursor_PosWithScreen(screen *QScreen) *QPoint {
	defer runtime.KeepAlive(screen)
	_goptr := newQPoint(C.QCursor_posWithScreen(screen.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCursor_SetPos(x int, y int) {
	C.QCursor_setPos((C.int)(x), (C.int)(y))
}

func QCursor_SetPos2(screen *QScreen, x int, y int) {
	defer runtime.KeepAlive(screen)
	C.QCursor_setPos2(screen.cPointer(), (C.int)(x), (C.int)(y))
}

func QCursor_SetPosWithQPoint(p *QPoint) {
	defer runtime.KeepAlive(p)
	C.QCursor_setPosWithQPoint(p.cPointer())
}

func QCursor_SetPos3(screen *QScreen, p *QPoint) {
	defer runtime.KeepAlive(screen)
	defer runtime.KeepAlive(p)
	C.QCursor_setPos3(screen.cPointer(), p.cPointer())
}

// Delete this object from C++ memory.
func (this *QCursor) Delete() {
	C.QCursor_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QCursor) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QCursor_delete((*C.QCursor)(gc[0]))
	})
	this.miqtSetGC(gc)
}
