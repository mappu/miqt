package qwt

/*

#include "gen_qwt_plot_svgitem.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotSvgItem struct {
	h  *C.QwtPlotSvgItem
	gc *[1]unsafe.Pointer
	*QwtPlotItem
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotSvgItem) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtPlotItem.miqtSetGC(gc)
}

func (this *QwtPlotSvgItem) cPointer() *C.QwtPlotSvgItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotSvgItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotSvgItem constructs the type using only CGO pointers.
func newQwtPlotSvgItem(h *C.QwtPlotSvgItem) *QwtPlotSvgItem {
	if h == nil {
		return nil
	}
	var outptr_QwtPlotItem *C.QwtPlotItem = nil
	C.QwtPlotSvgItem_virtbase(h, &outptr_QwtPlotItem)

	return &QwtPlotSvgItem{h: h,
		QwtPlotItem: newQwtPlotItem(outptr_QwtPlotItem)}
}

// UnsafeNewQwtPlotSvgItem constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotSvgItem(h unsafe.Pointer) *QwtPlotSvgItem {
	return newQwtPlotSvgItem((*C.QwtPlotSvgItem)(h))
}

// NewQwtPlotSvgItem constructs a new QwtPlotSvgItem object.
func NewQwtPlotSvgItem() *QwtPlotSvgItem {

	return newQwtPlotSvgItem(C.QwtPlotSvgItem_new())
}

// NewQwtPlotSvgItem2 constructs a new QwtPlotSvgItem object.
func NewQwtPlotSvgItem2(title *QwtText) *QwtPlotSvgItem {
	defer runtime.KeepAlive(title)

	return newQwtPlotSvgItem(C.QwtPlotSvgItem_new2(title.cPointer()))
}

// NewQwtPlotSvgItem3 constructs a new QwtPlotSvgItem object.
func NewQwtPlotSvgItem3(title string) *QwtPlotSvgItem {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQwtPlotSvgItem(C.QwtPlotSvgItem_new3(title_ms))
}

func (this *QwtPlotSvgItem) LoadFile(param1 qt.QRectF, fileName string) bool {
	defer runtime.KeepAlive(this)
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QwtPlotSvgItem_loadFile(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](param1), fileName_ms))
}

func (this *QwtPlotSvgItem) LoadData(param1 qt.QRectF, param2 []byte) bool {
	defer runtime.KeepAlive(this)
	param2_alias := C.struct_miqt_string{}
	if len(param2) > 0 {
		param2_alias.data = (*C.char)(unsafe.Pointer(&param2[0]))
	} else {
		param2_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	param2_alias.len = C.size_t(len(param2))
	return (bool)(C.QwtPlotSvgItem_loadData(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](param1), param2_alias))
}

func (this *QwtPlotSvgItem) BoundingRect() qt.QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QRectF](C.QwtPlotSvgItem_boundingRect(this.h))
}

func (this *QwtPlotSvgItem) Rtti() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotSvgItem_rtti(this.h))
}

// Delete this object from C++ memory.
func (this *QwtPlotSvgItem) Delete() {
	C.QwtPlotSvgItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotSvgItem) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotSvgItem_delete((*C.QwtPlotSvgItem)(gc[0]))
	})
	this.miqtSetGC(gc)
}
