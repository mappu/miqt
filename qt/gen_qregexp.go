package qt

/*

#include "gen_qregexp.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRegExp__PatternSyntax int

const (
	QRegExp__RegExp         QRegExp__PatternSyntax = 0
	QRegExp__Wildcard       QRegExp__PatternSyntax = 1
	QRegExp__FixedString    QRegExp__PatternSyntax = 2
	QRegExp__RegExp2        QRegExp__PatternSyntax = 3
	QRegExp__WildcardUnix   QRegExp__PatternSyntax = 4
	QRegExp__W3CXmlSchema11 QRegExp__PatternSyntax = 5
)

type QRegExp__CaretMode int

const (
	QRegExp__CaretAtZero    QRegExp__CaretMode = 0
	QRegExp__CaretAtOffset  QRegExp__CaretMode = 1
	QRegExp__CaretWontMatch QRegExp__CaretMode = 2
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
	if h == nil {
		return nil
	}
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
func NewQRegExp2(pattern string) *QRegExp {
	pattern_ms := miqt_strdupg(pattern)
	defer C.free(pattern_ms)
	ret := C.QRegExp_new2((*C.struct_miqt_string)(pattern_ms))
	return newQRegExp(ret)
}

// NewQRegExp3 constructs a new QRegExp object.
func NewQRegExp3(rx *QRegExp) *QRegExp {
	ret := C.QRegExp_new3(rx.cPointer())
	return newQRegExp(ret)
}

// NewQRegExp4 constructs a new QRegExp object.
func NewQRegExp4(pattern string, cs CaseSensitivity) *QRegExp {
	pattern_ms := miqt_strdupg(pattern)
	defer C.free(pattern_ms)
	ret := C.QRegExp_new4((*C.struct_miqt_string)(pattern_ms), (C.int)(cs))
	return newQRegExp(ret)
}

// NewQRegExp5 constructs a new QRegExp object.
func NewQRegExp5(pattern string, cs CaseSensitivity, syntax QRegExp__PatternSyntax) *QRegExp {
	pattern_ms := miqt_strdupg(pattern)
	defer C.free(pattern_ms)
	ret := C.QRegExp_new5((*C.struct_miqt_string)(pattern_ms), (C.int)(cs), (C.int)(syntax))
	return newQRegExp(ret)
}

func (this *QRegExp) OperatorAssign(rx *QRegExp) {
	C.QRegExp_OperatorAssign(this.h, rx.cPointer())
}

func (this *QRegExp) Swap(other *QRegExp) {
	C.QRegExp_Swap(this.h, other.cPointer())
}

func (this *QRegExp) OperatorEqual(rx *QRegExp) bool {
	return (bool)(C.QRegExp_OperatorEqual(this.h, rx.cPointer()))
}

func (this *QRegExp) OperatorNotEqual(rx *QRegExp) bool {
	return (bool)(C.QRegExp_OperatorNotEqual(this.h, rx.cPointer()))
}

func (this *QRegExp) IsEmpty() bool {
	return (bool)(C.QRegExp_IsEmpty(this.h))
}

func (this *QRegExp) IsValid() bool {
	return (bool)(C.QRegExp_IsValid(this.h))
}

func (this *QRegExp) Pattern() string {
	var _ms *C.struct_miqt_string = C.QRegExp_Pattern(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QRegExp) SetPattern(pattern string) {
	pattern_ms := miqt_strdupg(pattern)
	defer C.free(pattern_ms)
	C.QRegExp_SetPattern(this.h, (*C.struct_miqt_string)(pattern_ms))
}

func (this *QRegExp) CaseSensitivity() CaseSensitivity {
	return (CaseSensitivity)(C.QRegExp_CaseSensitivity(this.h))
}

func (this *QRegExp) SetCaseSensitivity(cs CaseSensitivity) {
	C.QRegExp_SetCaseSensitivity(this.h, (C.int)(cs))
}

func (this *QRegExp) PatternSyntax() QRegExp__PatternSyntax {
	return (QRegExp__PatternSyntax)(C.QRegExp_PatternSyntax(this.h))
}

func (this *QRegExp) SetPatternSyntax(syntax QRegExp__PatternSyntax) {
	C.QRegExp_SetPatternSyntax(this.h, (C.int)(syntax))
}

func (this *QRegExp) IsMinimal() bool {
	return (bool)(C.QRegExp_IsMinimal(this.h))
}

func (this *QRegExp) SetMinimal(minimal bool) {
	C.QRegExp_SetMinimal(this.h, (C.bool)(minimal))
}

func (this *QRegExp) ExactMatch(str string) bool {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	return (bool)(C.QRegExp_ExactMatch(this.h, (*C.struct_miqt_string)(str_ms)))
}

func (this *QRegExp) IndexIn(str string) int {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	return (int)(C.QRegExp_IndexIn(this.h, (*C.struct_miqt_string)(str_ms)))
}

func (this *QRegExp) LastIndexIn(str string) int {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	return (int)(C.QRegExp_LastIndexIn(this.h, (*C.struct_miqt_string)(str_ms)))
}

func (this *QRegExp) MatchedLength() int {
	return (int)(C.QRegExp_MatchedLength(this.h))
}

func (this *QRegExp) CaptureCount() int {
	return (int)(C.QRegExp_CaptureCount(this.h))
}

func (this *QRegExp) CapturedTexts() []string {
	var _ma *C.struct_miqt_array = C.QRegExp_CapturedTexts(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QRegExp) CapturedTexts2() []string {
	var _ma *C.struct_miqt_array = C.QRegExp_CapturedTexts2(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QRegExp) Cap() string {
	var _ms *C.struct_miqt_string = C.QRegExp_Cap(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QRegExp) Cap2() string {
	var _ms *C.struct_miqt_string = C.QRegExp_Cap2(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QRegExp) Pos() int {
	return (int)(C.QRegExp_Pos(this.h))
}

func (this *QRegExp) Pos2() int {
	return (int)(C.QRegExp_Pos2(this.h))
}

func (this *QRegExp) ErrorString() string {
	var _ms *C.struct_miqt_string = C.QRegExp_ErrorString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QRegExp) ErrorString2() string {
	var _ms *C.struct_miqt_string = C.QRegExp_ErrorString2(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QRegExp_Escape(str string) string {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	var _ms *C.struct_miqt_string = C.QRegExp_Escape((*C.struct_miqt_string)(str_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QRegExp) IndexIn2(str string, offset int) int {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	return (int)(C.QRegExp_IndexIn2(this.h, (*C.struct_miqt_string)(str_ms), (C.int)(offset)))
}

func (this *QRegExp) IndexIn3(str string, offset int, caretMode QRegExp__CaretMode) int {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	return (int)(C.QRegExp_IndexIn3(this.h, (*C.struct_miqt_string)(str_ms), (C.int)(offset), (C.int)(caretMode)))
}

func (this *QRegExp) LastIndexIn2(str string, offset int) int {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	return (int)(C.QRegExp_LastIndexIn2(this.h, (*C.struct_miqt_string)(str_ms), (C.int)(offset)))
}

func (this *QRegExp) LastIndexIn3(str string, offset int, caretMode QRegExp__CaretMode) int {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	return (int)(C.QRegExp_LastIndexIn3(this.h, (*C.struct_miqt_string)(str_ms), (C.int)(offset), (C.int)(caretMode)))
}

func (this *QRegExp) Cap1(nth int) string {
	var _ms *C.struct_miqt_string = C.QRegExp_Cap1(this.h, (C.int)(nth))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QRegExp) Cap1WithNth(nth int) string {
	var _ms *C.struct_miqt_string = C.QRegExp_Cap1WithNth(this.h, (C.int)(nth))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QRegExp) Pos1(nth int) int {
	return (int)(C.QRegExp_Pos1(this.h, (C.int)(nth)))
}

func (this *QRegExp) Pos1WithNth(nth int) int {
	return (int)(C.QRegExp_Pos1WithNth(this.h, (C.int)(nth)))
}

// Delete this object from C++ memory.
func (this *QRegExp) Delete() {
	C.QRegExp_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRegExp) GoGC() {
	runtime.SetFinalizer(this, func(this *QRegExp) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
