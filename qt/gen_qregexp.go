package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qregexp.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QRegExp struct {
	h *C.QRegExp
}

func (this *QRegExp) cPointer() *C.QRegExp {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRegExp(h *C.QRegExp) *QRegExp {
	return &QRegExp{h: h}
}

func newQRegExp_U(h unsafe.Pointer) *QRegExp {
	return newQRegExp((*C.QRegExp)(h))
}

// NewQRegExp constructs a new QRegExp object.
func NewQRegExp() *QRegExp {
	ret := C.QRegExp_new()
	return newQRegExp(ret)
}

// NewQRegExp2 constructs a new QRegExp object.
func NewQRegExp2(rx *QRegExp) *QRegExp {
	ret := C.QRegExp_new2(rx.cPointer())
	return newQRegExp(ret)
}

func (this *QRegExp) OperatorAssign(rx *QRegExp) {
	C.QRegExp_OperatorAssign(this.h, rx.cPointer())
}

func (this *QRegExp) Swap(other *QRegExp) {
	C.QRegExp_Swap(this.h, other.cPointer())
}

func (this *QRegExp) OperatorEqual(rx *QRegExp) bool {
	ret := C.QRegExp_OperatorEqual(this.h, rx.cPointer())
	return (bool)(ret)
}

func (this *QRegExp) OperatorNotEqual(rx *QRegExp) bool {
	ret := C.QRegExp_OperatorNotEqual(this.h, rx.cPointer())
	return (bool)(ret)
}

func (this *QRegExp) IsEmpty() bool {
	ret := C.QRegExp_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QRegExp) IsValid() bool {
	ret := C.QRegExp_IsValid(this.h)
	return (bool)(ret)
}

func (this *QRegExp) Pattern() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegExp_Pattern(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegExp) SetPattern(pattern string) {
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))
	C.QRegExp_SetPattern(this.h, pattern_Cstring, C.ulong(len(pattern)))
}

func (this *QRegExp) IsMinimal() bool {
	ret := C.QRegExp_IsMinimal(this.h)
	return (bool)(ret)
}

func (this *QRegExp) SetMinimal(minimal bool) {
	C.QRegExp_SetMinimal(this.h, (C.bool)(minimal))
}

func (this *QRegExp) ExactMatch(str string) bool {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QRegExp_ExactMatch(this.h, str_Cstring, C.ulong(len(str)))
	return (bool)(ret)
}

func (this *QRegExp) MatchedLength() int {
	ret := C.QRegExp_MatchedLength(this.h)
	return (int)(ret)
}

func (this *QRegExp) CaptureCount() int {
	ret := C.QRegExp_CaptureCount(this.h)
	return (int)(ret)
}

func (this *QRegExp) CapturedTexts() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QRegExp_CapturedTexts(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegExp) CapturedTexts2() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QRegExp_CapturedTexts2(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegExp) Cap() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegExp_Cap(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegExp) Cap2() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegExp_Cap2(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegExp) Pos() int {
	ret := C.QRegExp_Pos(this.h)
	return (int)(ret)
}

func (this *QRegExp) Pos2() int {
	ret := C.QRegExp_Pos2(this.h)
	return (int)(ret)
}

func (this *QRegExp) ErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegExp_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegExp) ErrorString2() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegExp_ErrorString2(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRegExp_Escape(str string) string {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegExp_Escape(str_Cstring, C.ulong(len(str)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegExp) Cap1(nth int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegExp_Cap1(this.h, (C.int)(nth), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegExp) Cap1WithNth(nth int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegExp_Cap1WithNth(this.h, (C.int)(nth), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegExp) Pos1(nth int) int {
	ret := C.QRegExp_Pos1(this.h, (C.int)(nth))
	return (int)(ret)
}

func (this *QRegExp) Pos1WithNth(nth int) int {
	ret := C.QRegExp_Pos1WithNth(this.h, (C.int)(nth))
	return (int)(ret)
}

func (this *QRegExp) Delete() {
	C.QRegExp_Delete(this.h)
}
