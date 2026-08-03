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
	h *C.QwtPlotDict
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
	C.QwtPlotDict_setAutoDelete(this.h, (C.bool)(autoDelete))
}

func (this *QwtPlotDict) AutoDelete() bool {
	return (bool)(C.QwtPlotDict_autoDelete(this.h))
}

func (this *QwtPlotDict) ItemList() []*QwtPlotItem {
	var _ma C.struct_miqt_array = C.QwtPlotDict_itemList(this.h)
	_ret := make([]*QwtPlotItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QwtPlotItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQwtPlotItem(_outCast[i])
	}
	return _ret
}

func (this *QwtPlotDict) ItemListWithRtti(rtti int) []*QwtPlotItem {
	var _ma C.struct_miqt_array = C.QwtPlotDict_itemListWithRtti(this.h, (C.int)(rtti))
	_ret := make([]*QwtPlotItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QwtPlotItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQwtPlotItem(_outCast[i])
	}
	return _ret
}

func (this *QwtPlotDict) DetachItems() {
	C.QwtPlotDict_detachItems(this.h)
}

func (this *QwtPlotDict) OperatorAssign(param1 *QwtPlotDict) {
	C.QwtPlotDict_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtPlotDict) DetachItemsWithRtti(rtti int) {
	C.QwtPlotDict_detachItemsWithRtti(this.h, (C.int)(rtti))
}

func (this *QwtPlotDict) DetachItems2(rtti int, autoDelete bool) {
	C.QwtPlotDict_detachItems2(this.h, (C.int)(rtti), (C.bool)(autoDelete))
}

// Delete this object from C++ memory.
func (this *QwtPlotDict) Delete() {
	C.QwtPlotDict_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotDict) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotDict) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
