package qt

/*

#include "gen_qstringlist.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStringList struct {
	h *C.QStringList
	/* Also inherits unprojectable QList<QString> */

}

func (this *QStringList) cPointer() *C.QStringList {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStringList) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStringList constructs the type using only CGO pointers.
func newQStringList(h *C.QStringList) *QStringList {
	if h == nil {
		return nil
	}

	return &QStringList{h: h}
}

// UnsafeNewQStringList constructs the type using only unsafe pointers.
func UnsafeNewQStringList(h unsafe.Pointer) *QStringList {
	return newQStringList((*C.QStringList)(h))
}

// NewQStringList constructs a new QStringList object.
func NewQStringList() *QStringList {

	return newQStringList(C.QStringList_new())
}

// NewQStringList2 constructs a new QStringList object.
func NewQStringList2(i string) *QStringList {
	i_ms := C.struct_miqt_string{}
	i_ms.data = C.CString(i)
	i_ms.len = C.size_t(len(i))
	defer C.free(unsafe.Pointer(i_ms.data))

	return newQStringList(C.QStringList_new2(i_ms))
}

// NewQStringList3 constructs a new QStringList object.
func NewQStringList3(l []string) *QStringList {
	l_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(l))))
	defer C.free(unsafe.Pointer(l_CArray))
	for i := range l {
		l_i_ms := C.struct_miqt_string{}
		l_i_ms.data = C.CString(l[i])
		l_i_ms.len = C.size_t(len(l[i]))
		defer C.free(unsafe.Pointer(l_i_ms.data))
		l_CArray[i] = l_i_ms
	}
	l_ma := C.struct_miqt_array{len: C.size_t(len(l)), data: unsafe.Pointer(l_CArray)}

	return newQStringList(C.QStringList_new3(l_ma))
}

func (this *QStringList) OperatorAssign(other []string) {
	other_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(other))))
	defer C.free(unsafe.Pointer(other_CArray))
	for i := range other {
		other_i_ms := C.struct_miqt_string{}
		other_i_ms.data = C.CString(other[i])
		other_i_ms.len = C.size_t(len(other[i]))
		defer C.free(unsafe.Pointer(other_i_ms.data))
		other_CArray[i] = other_i_ms
	}
	other_ma := C.struct_miqt_array{len: C.size_t(len(other)), data: unsafe.Pointer(other_CArray)}
	C.QStringList_operatorAssign(this.h, other_ma)
}

func (this *QStringList) Contains(str string) bool {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	return (bool)(C.QStringList_contains(this.h, str_ms))
}

func (this *QStringList) OperatorPlus(other []string) []string {
	other_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(other))))
	defer C.free(unsafe.Pointer(other_CArray))
	for i := range other {
		other_i_ms := C.struct_miqt_string{}
		other_i_ms.data = C.CString(other[i])
		other_i_ms.len = C.size_t(len(other[i]))
		defer C.free(unsafe.Pointer(other_i_ms.data))
		other_CArray[i] = other_i_ms
	}
	other_ma := C.struct_miqt_array{len: C.size_t(len(other)), data: unsafe.Pointer(other_CArray)}
	var _ma C.struct_miqt_array = C.QStringList_operatorPlus(this.h, other_ma)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QStringList) OperatorShiftLeft(str string) []string {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	var _ma C.struct_miqt_array = C.QStringList_operatorShiftLeft(this.h, str_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QStringList) OperatorShiftLeftWithQStringList(l []string) []string {
	l_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(l))))
	defer C.free(unsafe.Pointer(l_CArray))
	for i := range l {
		l_i_ms := C.struct_miqt_string{}
		l_i_ms.data = C.CString(l[i])
		l_i_ms.len = C.size_t(len(l[i]))
		defer C.free(unsafe.Pointer(l_i_ms.data))
		l_CArray[i] = l_i_ms
	}
	l_ma := C.struct_miqt_array{len: C.size_t(len(l)), data: unsafe.Pointer(l_CArray)}
	var _ma C.struct_miqt_array = C.QStringList_operatorShiftLeftWithQStringList(this.h, l_ma)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QStringList) OperatorShiftLeftWithQListLesserQStringGreater(l []string) []string {
	l_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(l))))
	defer C.free(unsafe.Pointer(l_CArray))
	for i := range l {
		l_i_ms := C.struct_miqt_string{}
		l_i_ms.data = C.CString(l[i])
		l_i_ms.len = C.size_t(len(l[i]))
		defer C.free(unsafe.Pointer(l_i_ms.data))
		l_CArray[i] = l_i_ms
	}
	l_ma := C.struct_miqt_array{len: C.size_t(len(l)), data: unsafe.Pointer(l_CArray)}
	var _ma C.struct_miqt_array = C.QStringList_operatorShiftLeftWithQListLesserQStringGreater(this.h, l_ma)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QStringList) IndexOfWithRx(rx *QRegExp) int {
	return (int)(C.QStringList_indexOfWithRx(this.h, rx.cPointer()))
}

func (this *QStringList) LastIndexOfWithRx(rx *QRegExp) int {
	return (int)(C.QStringList_lastIndexOfWithRx(this.h, rx.cPointer()))
}

func (this *QStringList) IndexOf2(rx *QRegExp) int {
	return (int)(C.QStringList_indexOf2(this.h, rx.cPointer()))
}

func (this *QStringList) LastIndexOf2(rx *QRegExp) int {
	return (int)(C.QStringList_lastIndexOf2(this.h, rx.cPointer()))
}

func (this *QStringList) IndexOfWithRe(re *QRegularExpression) int {
	return (int)(C.QStringList_indexOfWithRe(this.h, re.cPointer()))
}

func (this *QStringList) LastIndexOfWithRe(re *QRegularExpression) int {
	return (int)(C.QStringList_lastIndexOfWithRe(this.h, re.cPointer()))
}

func (this *QStringList) OperatorAssignWithQStringList(param1 []string) {
	param1_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(param1))))
	defer C.free(unsafe.Pointer(param1_CArray))
	for i := range param1 {
		param1_i_ms := C.struct_miqt_string{}
		param1_i_ms.data = C.CString(param1[i])
		param1_i_ms.len = C.size_t(len(param1[i]))
		defer C.free(unsafe.Pointer(param1_i_ms.data))
		param1_CArray[i] = param1_i_ms
	}
	param1_ma := C.struct_miqt_array{len: C.size_t(len(param1)), data: unsafe.Pointer(param1_CArray)}
	C.QStringList_operatorAssignWithQStringList(this.h, param1_ma)
}

func (this *QStringList) Contains3(str string, cs CaseSensitivity) bool {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	return (bool)(C.QStringList_contains3(this.h, str_ms, (C.int)(cs)))
}

func (this *QStringList) IndexOf5(rx *QRegExp, from int) int {
	return (int)(C.QStringList_indexOf5(this.h, rx.cPointer(), (C.int)(from)))
}

func (this *QStringList) LastIndexOf5(rx *QRegExp, from int) int {
	return (int)(C.QStringList_lastIndexOf5(this.h, rx.cPointer(), (C.int)(from)))
}

func (this *QStringList) IndexOf6(rx *QRegExp, from int) int {
	return (int)(C.QStringList_indexOf6(this.h, rx.cPointer(), (C.int)(from)))
}

func (this *QStringList) LastIndexOf6(rx *QRegExp, from int) int {
	return (int)(C.QStringList_lastIndexOf6(this.h, rx.cPointer(), (C.int)(from)))
}

func (this *QStringList) IndexOf7(re *QRegularExpression, from int) int {
	return (int)(C.QStringList_indexOf7(this.h, re.cPointer(), (C.int)(from)))
}

func (this *QStringList) LastIndexOf7(re *QRegularExpression, from int) int {
	return (int)(C.QStringList_lastIndexOf7(this.h, re.cPointer(), (C.int)(from)))
}

// Delete this object from C++ memory.
func (this *QStringList) Delete() {
	C.QStringList_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStringList) GoGC() {
	runtime.SetFinalizer(this, func(this *QStringList) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
