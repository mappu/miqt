package qwt

/*

#include "gen_qwt_legend_data.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtLegendData__Mode int

const (
	QwtLegendData__ReadOnly  QwtLegendData__Mode = 0
	QwtLegendData__Clickable QwtLegendData__Mode = 1
	QwtLegendData__Checkable QwtLegendData__Mode = 2
)

type QwtLegendData__Role int

const (
	QwtLegendData__ModeRole  QwtLegendData__Role = 0
	QwtLegendData__TitleRole QwtLegendData__Role = 1
	QwtLegendData__IconRole  QwtLegendData__Role = 2
	QwtLegendData__UserRole  QwtLegendData__Role = 32
)

type QwtLegendData struct {
	h *C.QwtLegendData
}

func (this *QwtLegendData) cPointer() *C.QwtLegendData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtLegendData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtLegendData constructs the type using only CGO pointers.
func newQwtLegendData(h *C.QwtLegendData) *QwtLegendData {
	if h == nil {
		return nil
	}

	return &QwtLegendData{h: h}
}

// UnsafeNewQwtLegendData constructs the type using only unsafe pointers.
func UnsafeNewQwtLegendData(h unsafe.Pointer) *QwtLegendData {
	return newQwtLegendData((*C.QwtLegendData)(h))
}

// NewQwtLegendData constructs a new QwtLegendData object.
func NewQwtLegendData() *QwtLegendData {

	return newQwtLegendData(C.QwtLegendData_new())
}

// NewQwtLegendData2 constructs a new QwtLegendData object.
func NewQwtLegendData2(param1 *QwtLegendData) *QwtLegendData {

	return newQwtLegendData(C.QwtLegendData_new2(param1.cPointer()))
}

func (this *QwtLegendData) SetValues(values map[int]qt.QVariant) {
	values_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(values))))
	defer C.free(unsafe.Pointer(values_Keys_CArray))
	values_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(values))))
	defer C.free(unsafe.Pointer(values_Values_CArray))
	values_ctr := 0
	for values_k, values_v := range values {
		values_Keys_CArray[values_ctr] = (C.int)(values_k)
		values_Values_CArray[values_ctr] = (*C.QVariant)(values_v.UnsafePointer())
		values_ctr++
	}
	values_mm := C.struct_miqt_map{
		len:    C.size_t(len(values)),
		keys:   unsafe.Pointer(values_Keys_CArray),
		values: unsafe.Pointer(values_Values_CArray),
	}
	C.QwtLegendData_setValues(this.h, values_mm)
}

func (this *QwtLegendData) Values() map[int]qt.QVariant {
	var _mm C.struct_miqt_map = C.QwtLegendData_values(this.h)
	_ret := make(map[int]qt.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		_mapval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QwtLegendData) SetValue(role int, param2 *qt.QVariant) {
	C.QwtLegendData_setValue(this.h, (C.int)(role), (*C.QVariant)(param2.UnsafePointer()))
}

func (this *QwtLegendData) Value(role int) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtLegendData_value(this.h, (C.int)(role))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtLegendData) HasRole(role int) bool {
	return (bool)(C.QwtLegendData_hasRole(this.h, (C.int)(role)))
}

func (this *QwtLegendData) IsValid() bool {
	return (bool)(C.QwtLegendData_isValid(this.h))
}

func (this *QwtLegendData) Icon() *QwtGraphic {
	_goptr := newQwtGraphic(C.QwtLegendData_icon(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtLegendData) Title() *QwtText {
	_goptr := newQwtText(C.QwtLegendData_title(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtLegendData) Mode() QwtLegendData__Mode {
	return (QwtLegendData__Mode)(C.QwtLegendData_mode(this.h))
}

func (this *QwtLegendData) OperatorAssign(param1 *QwtLegendData) {
	C.QwtLegendData_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtLegendData) Delete() {
	C.QwtLegendData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtLegendData) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtLegendData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
