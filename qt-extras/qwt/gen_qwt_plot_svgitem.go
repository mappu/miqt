package qwt

/*

#include "gen_qwt_plot_svgitem.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPlotSvgItem struct {
	h *C.QwtPlotSvgItem
	*QwtPlotItem
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

func (this *QwtPlotSvgItem) LoadFile(param1 *qt.QRectF, fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QwtPlotSvgItem_loadFile(this.h, (*C.QRectF)(param1.UnsafePointer()), fileName_ms))
}

func (this *QwtPlotSvgItem) LoadData(param1 *qt.QRectF, param2 []byte) bool {
	param2_alias := C.struct_miqt_string{}
	if len(param2) > 0 {
		param2_alias.data = (*C.char)(unsafe.Pointer(&param2[0]))
	} else {
		param2_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	param2_alias.len = C.size_t(len(param2))
	return (bool)(C.QwtPlotSvgItem_loadData(this.h, (*C.QRectF)(param1.UnsafePointer()), param2_alias))
}

func (this *QwtPlotSvgItem) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotSvgItem_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotSvgItem) Rtti() int {
	return (int)(C.QwtPlotSvgItem_rtti(this.h))
}

// Delete this object from C++ memory.
func (this *QwtPlotSvgItem) Delete() {
	C.QwtPlotSvgItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotSvgItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotSvgItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
