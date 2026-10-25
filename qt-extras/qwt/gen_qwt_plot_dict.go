package qwt

/*

#include "gen_qwt_plot_dict.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QwtPlotDict struct {
	h  *C.QwtPlotDict
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotDict) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QwtPlotDict) cPointer() *C.QwtPlotDict {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotDict) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotDict constructs the type using only CGO pointers.
func newQwtPlotDict(h *C.QwtPlotDict) *QwtPlotDict {
	if h == nil {
		return nil
	}

	return &QwtPlotDict{h: h}
}

// UnsafeNewQwtPlotDict constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotDict(h unsafe.Pointer) *QwtPlotDict {
	return newQwtPlotDict((*C.QwtPlotDict)(h))
}

// NewQwtPlotDict constructs a new QwtPlotDict object.
func NewQwtPlotDict() *QwtPlotDict {

	return newQwtPlotDict(C.QwtPlotDict_new())
}

func (this *QwtPlotDict) SetAutoDelete(autoDelete bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotDict_setAutoDelete(this.h, (C.bool)(autoDelete))
}

func (this *QwtPlotDict) AutoDelete() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPlotDict_autoDelete(this.h))
}

func (this *QwtPlotDict) ItemList() []*QwtPlotItem {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QwtPlotDict_itemList(this.h)
	_ret := make([]*QwtPlotItem, int(_ma.len))
	_outCast := unsafe.Slice((**C.QwtPlotItem)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQwtPlotItem(_outCast[i])
	}
	return _ret
}

func (this *QwtPlotDict) ItemListWithRtti(rtti int) []*QwtPlotItem {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QwtPlotDict_itemListWithRtti(this.h, (C.int)(rtti))
	_ret := make([]*QwtPlotItem, int(_ma.len))
	_outCast := unsafe.Slice((**C.QwtPlotItem)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQwtPlotItem(_outCast[i])
	}
	return _ret
}

func (this *QwtPlotDict) DetachItems() {
	defer runtime.KeepAlive(this)
	C.QwtPlotDict_detachItems(this.h)
}

func (this *QwtPlotDict) OperatorAssign(param1 *QwtPlotDict) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QwtPlotDict_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtPlotDict) DetachItemsWithRtti(rtti int) {
	defer runtime.KeepAlive(this)
	C.QwtPlotDict_detachItemsWithRtti(this.h, (C.int)(rtti))
}

func (this *QwtPlotDict) DetachItems2(rtti int, autoDelete bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotDict_detachItems2(this.h, (C.int)(rtti), (C.bool)(autoDelete))
}

// Delete this object from C++ memory.
func (this *QwtPlotDict) Delete() {
	C.QwtPlotDict_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotDict) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotDict_delete((*C.QwtPlotDict)(gc[0]))
	})
	this.miqtSetGC(gc)
}
