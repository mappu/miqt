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
	h  *C.QRegExp
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QRegExp) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QRegExp) cPointer() *C.QRegExp {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRegExp) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRegExp constructs the type using only CGO pointers.
func newQRegExp(h *C.QRegExp) *QRegExp {
	if h == nil {
		return nil
	}

	return &QRegExp{h: h}
}

// UnsafeNewQRegExp constructs the type using only unsafe pointers.
func UnsafeNewQRegExp(h unsafe.Pointer) *QRegExp {
	return newQRegExp((*C.QRegExp)(h))
}

// NewQRegExp constructs a new QRegExp object.
func NewQRegExp() *QRegExp {

	return newQRegExp(C.QRegExp_new())
}

// NewQRegExp2 constructs a new QRegExp object.
func NewQRegExp2(pattern string) *QRegExp {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))

	return newQRegExp(C.QRegExp_new2(pattern_ms))
}

// NewQRegExp3 constructs a new QRegExp object.
func NewQRegExp3(rx *QRegExp) *QRegExp {
	defer runtime.KeepAlive(rx)

	return newQRegExp(C.QRegExp_new3(rx.cPointer()))
}

// NewQRegExp4 constructs a new QRegExp object.
func NewQRegExp4(pattern string, cs CaseSensitivity) *QRegExp {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))

	return newQRegExp(C.QRegExp_new4(pattern_ms, (C.int)(cs)))
}

// NewQRegExp5 constructs a new QRegExp object.
func NewQRegExp5(pattern string, cs CaseSensitivity, syntax QRegExp__PatternSyntax) *QRegExp {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))

	return newQRegExp(C.QRegExp_new5(pattern_ms, (C.int)(cs), (C.int)(syntax)))
}

func (this *QRegExp) OperatorAssign(rx *QRegExp) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rx)
	C.QRegExp_operatorAssign(this.h, rx.cPointer())
}

func (this *QRegExp) Swap(other *QRegExp) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QRegExp_swap(this.h, other.cPointer())
}

func (this *QRegExp) OperatorEqual(rx *QRegExp) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rx)
	return (bool)(C.QRegExp_operatorEqual(this.h, rx.cPointer()))
}

func (this *QRegExp) OperatorNotEqual(rx *QRegExp) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rx)
	return (bool)(C.QRegExp_operatorNotEqual(this.h, rx.cPointer()))
}

func (this *QRegExp) IsEmpty() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRegExp_isEmpty(this.h))
}

func (this *QRegExp) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRegExp_isValid(this.h))
}

func (this *QRegExp) Pattern() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QRegExp_pattern(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegExp) SetPattern(pattern string) {
	defer runtime.KeepAlive(this)
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))
	C.QRegExp_setPattern(this.h, pattern_ms)
}

func (this *QRegExp) CaseSensitivity() CaseSensitivity {
	defer runtime.KeepAlive(this)
	return (CaseSensitivity)(C.QRegExp_caseSensitivity(this.h))
}

func (this *QRegExp) SetCaseSensitivity(cs CaseSensitivity) {
	defer runtime.KeepAlive(this)
	C.QRegExp_setCaseSensitivity(this.h, (C.int)(cs))
}

func (this *QRegExp) PatternSyntax() QRegExp__PatternSyntax {
	defer runtime.KeepAlive(this)
	return (QRegExp__PatternSyntax)(C.QRegExp_patternSyntax(this.h))
}

func (this *QRegExp) SetPatternSyntax(syntax QRegExp__PatternSyntax) {
	defer runtime.KeepAlive(this)
	C.QRegExp_setPatternSyntax(this.h, (C.int)(syntax))
}

func (this *QRegExp) IsMinimal() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QRegExp_isMinimal(this.h))
}

func (this *QRegExp) SetMinimal(minimal bool) {
	defer runtime.KeepAlive(this)
	C.QRegExp_setMinimal(this.h, (C.bool)(minimal))
}

func (this *QRegExp) ExactMatch(str string) bool {
	defer runtime.KeepAlive(this)
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	return (bool)(C.QRegExp_exactMatch(this.h, str_ms))
}

func (this *QRegExp) IndexIn(str string) int {
	defer runtime.KeepAlive(this)
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	return (int)(C.QRegExp_indexIn(this.h, str_ms))
}

func (this *QRegExp) LastIndexIn(str string) int {
	defer runtime.KeepAlive(this)
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	return (int)(C.QRegExp_lastIndexIn(this.h, str_ms))
}

func (this *QRegExp) MatchedLength() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QRegExp_matchedLength(this.h))
}

func (this *QRegExp) CaptureCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QRegExp_captureCount(this.h))
}

func (this *QRegExp) CapturedTexts() []string {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QRegExp_capturedTexts(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QRegExp) CapturedTexts2() []string {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QRegExp_capturedTexts2(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QRegExp) Cap() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QRegExp_cap(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegExp) Cap2() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QRegExp_cap2(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegExp) Pos() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QRegExp_pos(this.h))
}

func (this *QRegExp) Pos2() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QRegExp_pos2(this.h))
}

func (this *QRegExp) ErrorString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QRegExp_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegExp) ErrorString2() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QRegExp_errorString2(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRegExp_Escape(str string) string {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	var _ms C.struct_miqt_string = C.QRegExp_escape(str_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegExp) IndexIn2(str string, offset int) int {
	defer runtime.KeepAlive(this)
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	return (int)(C.QRegExp_indexIn2(this.h, str_ms, (C.int)(offset)))
}

func (this *QRegExp) IndexIn3(str string, offset int, caretMode QRegExp__CaretMode) int {
	defer runtime.KeepAlive(this)
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	return (int)(C.QRegExp_indexIn3(this.h, str_ms, (C.int)(offset), (C.int)(caretMode)))
}

func (this *QRegExp) LastIndexIn2(str string, offset int) int {
	defer runtime.KeepAlive(this)
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	return (int)(C.QRegExp_lastIndexIn2(this.h, str_ms, (C.int)(offset)))
}

func (this *QRegExp) LastIndexIn3(str string, offset int, caretMode QRegExp__CaretMode) int {
	defer runtime.KeepAlive(this)
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	return (int)(C.QRegExp_lastIndexIn3(this.h, str_ms, (C.int)(offset), (C.int)(caretMode)))
}

func (this *QRegExp) CapWithNth(nth int) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QRegExp_capWithNth(this.h, (C.int)(nth))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegExp) Cap3(nth int) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QRegExp_cap3(this.h, (C.int)(nth))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegExp) PosWithNth(nth int) int {
	defer runtime.KeepAlive(this)
	return (int)(C.QRegExp_posWithNth(this.h, (C.int)(nth)))
}

func (this *QRegExp) Pos3(nth int) int {
	defer runtime.KeepAlive(this)
	return (int)(C.QRegExp_pos3(this.h, (C.int)(nth)))
}

// Delete this object from C++ memory.
func (this *QRegExp) Delete() {
	C.QRegExp_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QRegExp) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QRegExp_delete((*C.QRegExp)(gc[0]))
	})
	this.miqtSetGC(gc)
}
