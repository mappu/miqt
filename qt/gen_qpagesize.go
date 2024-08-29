package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qpagesize.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPageSize struct {
	h *C.QPageSize
}

func (this *QPageSize) cPointer() *C.QPageSize {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPageSize(h *C.QPageSize) *QPageSize {
	return &QPageSize{h: h}
}

func newQPageSize_U(h unsafe.Pointer) *QPageSize {
	return newQPageSize((*C.QPageSize)(h))
}

// NewQPageSize constructs a new QPageSize object.
func NewQPageSize() *QPageSize {
	ret := C.QPageSize_new()
	return newQPageSize(ret)
}

// NewQPageSize2 constructs a new QPageSize object.
func NewQPageSize2(pageSizeId uintptr) *QPageSize {
	ret := C.QPageSize_new2((C.uintptr_t)(pageSizeId))
	return newQPageSize(ret)
}

// NewQPageSize3 constructs a new QPageSize object.
func NewQPageSize3(pointSize *QSize) *QPageSize {
	ret := C.QPageSize_new3(pointSize.cPointer())
	return newQPageSize(ret)
}

// NewQPageSize4 constructs a new QPageSize object.
func NewQPageSize4(size *QSizeF, units uintptr) *QPageSize {
	ret := C.QPageSize_new4(size.cPointer(), (C.uintptr_t)(units))
	return newQPageSize(ret)
}

// NewQPageSize5 constructs a new QPageSize object.
func NewQPageSize5(other *QPageSize) *QPageSize {
	ret := C.QPageSize_new5(other.cPointer())
	return newQPageSize(ret)
}

// NewQPageSize6 constructs a new QPageSize object.
func NewQPageSize6(pointSize *QSize, name string) *QPageSize {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QPageSize_new6(pointSize.cPointer(), name_Cstring, C.ulong(len(name)))
	return newQPageSize(ret)
}

// NewQPageSize7 constructs a new QPageSize object.
func NewQPageSize7(pointSize *QSize, name string, matchPolicy uintptr) *QPageSize {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QPageSize_new7(pointSize.cPointer(), name_Cstring, C.ulong(len(name)), (C.uintptr_t)(matchPolicy))
	return newQPageSize(ret)
}

// NewQPageSize8 constructs a new QPageSize object.
func NewQPageSize8(size *QSizeF, units uintptr, name string) *QPageSize {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QPageSize_new8(size.cPointer(), (C.uintptr_t)(units), name_Cstring, C.ulong(len(name)))
	return newQPageSize(ret)
}

// NewQPageSize9 constructs a new QPageSize object.
func NewQPageSize9(size *QSizeF, units uintptr, name string, matchPolicy uintptr) *QPageSize {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QPageSize_new9(size.cPointer(), (C.uintptr_t)(units), name_Cstring, C.ulong(len(name)), (C.uintptr_t)(matchPolicy))
	return newQPageSize(ret)
}

func (this *QPageSize) OperatorAssign(other *QPageSize) {
	C.QPageSize_OperatorAssign(this.h, other.cPointer())
}

func (this *QPageSize) Swap(other *QPageSize) {
	C.QPageSize_Swap(this.h, other.cPointer())
}

func (this *QPageSize) IsEquivalentTo(other *QPageSize) bool {
	ret := C.QPageSize_IsEquivalentTo(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QPageSize) IsValid() bool {
	ret := C.QPageSize_IsValid(this.h)
	return (bool)(ret)
}

func (this *QPageSize) Key() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPageSize_Key(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPageSize) Name() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPageSize_Name(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPageSize) Id() uintptr {
	ret := C.QPageSize_Id(this.h)
	return (uintptr)(ret)
}

func (this *QPageSize) WindowsId() int {
	ret := C.QPageSize_WindowsId(this.h)
	return (int)(ret)
}

func (this *QPageSize) DefinitionSize() *QSizeF {
	ret := C.QPageSize_DefinitionSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageSize) DefinitionUnits() uintptr {
	ret := C.QPageSize_DefinitionUnits(this.h)
	return (uintptr)(ret)
}

func (this *QPageSize) Size(units uintptr) *QSizeF {
	ret := C.QPageSize_Size(this.h, (C.uintptr_t)(units))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageSize) SizePoints() *QSize {
	ret := C.QPageSize_SizePoints(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageSize) SizePixels(resolution int) *QSize {
	ret := C.QPageSize_SizePixels(this.h, (C.int)(resolution))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageSize) Rect(units uintptr) *QRectF {
	ret := C.QPageSize_Rect(this.h, (C.uintptr_t)(units))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageSize) RectPoints() *QRect {
	ret := C.QPageSize_RectPoints(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageSize) RectPixels(resolution int) *QRect {
	ret := C.QPageSize_RectPixels(this.h, (C.int)(resolution))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPageSize_KeyWithPageSizeId(pageSizeId uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPageSize_KeyWithPageSizeId((C.uintptr_t)(pageSizeId), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPageSize_NameWithPageSizeId(pageSizeId uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPageSize_NameWithPageSizeId((C.uintptr_t)(pageSizeId), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPageSize_IdWithPointSize(pointSize *QSize) uintptr {
	ret := C.QPageSize_IdWithPointSize(pointSize.cPointer())
	return (uintptr)(ret)
}

func QPageSize_Id2(size *QSizeF, units uintptr) uintptr {
	ret := C.QPageSize_Id2(size.cPointer(), (C.uintptr_t)(units))
	return (uintptr)(ret)
}

func QPageSize_IdWithWindowsId(windowsId int) uintptr {
	ret := C.QPageSize_IdWithWindowsId((C.int)(windowsId))
	return (uintptr)(ret)
}

func QPageSize_WindowsIdWithPageSizeId(pageSizeId uintptr) int {
	ret := C.QPageSize_WindowsIdWithPageSizeId((C.uintptr_t)(pageSizeId))
	return (int)(ret)
}

func QPageSize_DefinitionSizeWithPageSizeId(pageSizeId uintptr) *QSizeF {
	ret := C.QPageSize_DefinitionSizeWithPageSizeId((C.uintptr_t)(pageSizeId))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPageSize_DefinitionUnitsWithPageSizeId(pageSizeId uintptr) uintptr {
	ret := C.QPageSize_DefinitionUnitsWithPageSizeId((C.uintptr_t)(pageSizeId))
	return (uintptr)(ret)
}

func QPageSize_Size2(pageSizeId uintptr, units uintptr) *QSizeF {
	ret := C.QPageSize_Size2((C.uintptr_t)(pageSizeId), (C.uintptr_t)(units))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPageSize_SizePointsWithPageSizeId(pageSizeId uintptr) *QSize {
	ret := C.QPageSize_SizePointsWithPageSizeId((C.uintptr_t)(pageSizeId))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPageSize_SizePixels2(pageSizeId uintptr, resolution int) *QSize {
	ret := C.QPageSize_SizePixels2((C.uintptr_t)(pageSizeId), (C.int)(resolution))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPageSize_Id22(pointSize *QSize, matchPolicy uintptr) uintptr {
	ret := C.QPageSize_Id22(pointSize.cPointer(), (C.uintptr_t)(matchPolicy))
	return (uintptr)(ret)
}

func QPageSize_Id3(size *QSizeF, units uintptr, matchPolicy uintptr) uintptr {
	ret := C.QPageSize_Id3(size.cPointer(), (C.uintptr_t)(units), (C.uintptr_t)(matchPolicy))
	return (uintptr)(ret)
}

func (this *QPageSize) Delete() {
	C.QPageSize_Delete(this.h)
}
