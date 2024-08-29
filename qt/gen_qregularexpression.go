package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qregularexpression.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRegularExpression struct {
	h *C.QRegularExpression
}

func (this *QRegularExpression) cPointer() *C.QRegularExpression {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRegularExpression(h *C.QRegularExpression) *QRegularExpression {
	return &QRegularExpression{h: h}
}

func newQRegularExpression_U(h unsafe.Pointer) *QRegularExpression {
	return newQRegularExpression((*C.QRegularExpression)(h))
}

// NewQRegularExpression constructs a new QRegularExpression object.
func NewQRegularExpression() *QRegularExpression {
	ret := C.QRegularExpression_new()
	return newQRegularExpression(ret)
}

// NewQRegularExpression2 constructs a new QRegularExpression object.
func NewQRegularExpression2(pattern string) *QRegularExpression {
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))
	ret := C.QRegularExpression_new2(pattern_Cstring, C.ulong(len(pattern)))
	return newQRegularExpression(ret)
}

// NewQRegularExpression3 constructs a new QRegularExpression object.
func NewQRegularExpression3(re *QRegularExpression) *QRegularExpression {
	ret := C.QRegularExpression_new3(re.cPointer())
	return newQRegularExpression(ret)
}

// NewQRegularExpression4 constructs a new QRegularExpression object.
func NewQRegularExpression4(pattern string, options int) *QRegularExpression {
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))
	ret := C.QRegularExpression_new4(pattern_Cstring, C.ulong(len(pattern)), (C.int)(options))
	return newQRegularExpression(ret)
}

func (this *QRegularExpression) PatternOptions() int {
	ret := C.QRegularExpression_PatternOptions(this.h)
	return (int)(ret)
}

func (this *QRegularExpression) SetPatternOptions(options int) {
	C.QRegularExpression_SetPatternOptions(this.h, (C.int)(options))
}

func (this *QRegularExpression) OperatorAssign(re *QRegularExpression) {
	C.QRegularExpression_OperatorAssign(this.h, re.cPointer())
}

func (this *QRegularExpression) Swap(other *QRegularExpression) {
	C.QRegularExpression_Swap(this.h, other.cPointer())
}

func (this *QRegularExpression) Pattern() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegularExpression_Pattern(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegularExpression) SetPattern(pattern string) {
	pattern_Cstring := C.CString(pattern)
	defer C.free(unsafe.Pointer(pattern_Cstring))
	C.QRegularExpression_SetPattern(this.h, pattern_Cstring, C.ulong(len(pattern)))
}

func (this *QRegularExpression) IsValid() bool {
	ret := C.QRegularExpression_IsValid(this.h)
	return (bool)(ret)
}

func (this *QRegularExpression) PatternErrorOffset() int {
	ret := C.QRegularExpression_PatternErrorOffset(this.h)
	return (int)(ret)
}

func (this *QRegularExpression) ErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegularExpression_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegularExpression) CaptureCount() int {
	ret := C.QRegularExpression_CaptureCount(this.h)
	return (int)(ret)
}

func (this *QRegularExpression) NamedCaptureGroups() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QRegularExpression_NamedCaptureGroups(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegularExpression) Match(subject string) *QRegularExpressionMatch {
	subject_Cstring := C.CString(subject)
	defer C.free(unsafe.Pointer(subject_Cstring))
	ret := C.QRegularExpression_Match(this.h, subject_Cstring, C.ulong(len(subject)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpressionMatch(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpressionMatch) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegularExpression) GlobalMatch(subject string) *QRegularExpressionMatchIterator {
	subject_Cstring := C.CString(subject)
	defer C.free(unsafe.Pointer(subject_Cstring))
	ret := C.QRegularExpression_GlobalMatch(this.h, subject_Cstring, C.ulong(len(subject)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpressionMatchIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpressionMatchIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegularExpression) Optimize() {
	C.QRegularExpression_Optimize(this.h)
}

func QRegularExpression_Escape(str string) string {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegularExpression_Escape(str_Cstring, C.ulong(len(str)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRegularExpression_WildcardToRegularExpression(str string) string {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegularExpression_WildcardToRegularExpression(str_Cstring, C.ulong(len(str)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QRegularExpression_AnchoredPattern(expression string) string {
	expression_Cstring := C.CString(expression)
	defer C.free(unsafe.Pointer(expression_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegularExpression_AnchoredPattern(expression_Cstring, C.ulong(len(expression)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegularExpression) OperatorEqual(re *QRegularExpression) bool {
	ret := C.QRegularExpression_OperatorEqual(this.h, re.cPointer())
	return (bool)(ret)
}

func (this *QRegularExpression) OperatorNotEqual(re *QRegularExpression) bool {
	ret := C.QRegularExpression_OperatorNotEqual(this.h, re.cPointer())
	return (bool)(ret)
}

func (this *QRegularExpression) Match2(subject string, offset int) *QRegularExpressionMatch {
	subject_Cstring := C.CString(subject)
	defer C.free(unsafe.Pointer(subject_Cstring))
	ret := C.QRegularExpression_Match2(this.h, subject_Cstring, C.ulong(len(subject)), (C.int)(offset))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpressionMatch(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpressionMatch) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegularExpression) Match3(subject string, offset int, matchType uintptr) *QRegularExpressionMatch {
	subject_Cstring := C.CString(subject)
	defer C.free(unsafe.Pointer(subject_Cstring))
	ret := C.QRegularExpression_Match3(this.h, subject_Cstring, C.ulong(len(subject)), (C.int)(offset), (C.uintptr_t)(matchType))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpressionMatch(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpressionMatch) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegularExpression) Match4(subject string, offset int, matchType uintptr, matchOptions int) *QRegularExpressionMatch {
	subject_Cstring := C.CString(subject)
	defer C.free(unsafe.Pointer(subject_Cstring))
	ret := C.QRegularExpression_Match4(this.h, subject_Cstring, C.ulong(len(subject)), (C.int)(offset), (C.uintptr_t)(matchType), (C.int)(matchOptions))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpressionMatch(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpressionMatch) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegularExpression) GlobalMatch2(subject string, offset int) *QRegularExpressionMatchIterator {
	subject_Cstring := C.CString(subject)
	defer C.free(unsafe.Pointer(subject_Cstring))
	ret := C.QRegularExpression_GlobalMatch2(this.h, subject_Cstring, C.ulong(len(subject)), (C.int)(offset))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpressionMatchIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpressionMatchIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegularExpression) GlobalMatch3(subject string, offset int, matchType uintptr) *QRegularExpressionMatchIterator {
	subject_Cstring := C.CString(subject)
	defer C.free(unsafe.Pointer(subject_Cstring))
	ret := C.QRegularExpression_GlobalMatch3(this.h, subject_Cstring, C.ulong(len(subject)), (C.int)(offset), (C.uintptr_t)(matchType))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpressionMatchIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpressionMatchIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegularExpression) GlobalMatch4(subject string, offset int, matchType uintptr, matchOptions int) *QRegularExpressionMatchIterator {
	subject_Cstring := C.CString(subject)
	defer C.free(unsafe.Pointer(subject_Cstring))
	ret := C.QRegularExpression_GlobalMatch4(this.h, subject_Cstring, C.ulong(len(subject)), (C.int)(offset), (C.uintptr_t)(matchType), (C.int)(matchOptions))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpressionMatchIterator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpressionMatchIterator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegularExpression) Delete() {
	C.QRegularExpression_Delete(this.h)
}

type QRegularExpressionMatch struct {
	h *C.QRegularExpressionMatch
}

func (this *QRegularExpressionMatch) cPointer() *C.QRegularExpressionMatch {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRegularExpressionMatch(h *C.QRegularExpressionMatch) *QRegularExpressionMatch {
	return &QRegularExpressionMatch{h: h}
}

func newQRegularExpressionMatch_U(h unsafe.Pointer) *QRegularExpressionMatch {
	return newQRegularExpressionMatch((*C.QRegularExpressionMatch)(h))
}

// NewQRegularExpressionMatch constructs a new QRegularExpressionMatch object.
func NewQRegularExpressionMatch() *QRegularExpressionMatch {
	ret := C.QRegularExpressionMatch_new()
	return newQRegularExpressionMatch(ret)
}

// NewQRegularExpressionMatch2 constructs a new QRegularExpressionMatch object.
func NewQRegularExpressionMatch2(match *QRegularExpressionMatch) *QRegularExpressionMatch {
	ret := C.QRegularExpressionMatch_new2(match.cPointer())
	return newQRegularExpressionMatch(ret)
}

func (this *QRegularExpressionMatch) OperatorAssign(match *QRegularExpressionMatch) {
	C.QRegularExpressionMatch_OperatorAssign(this.h, match.cPointer())
}

func (this *QRegularExpressionMatch) Swap(other *QRegularExpressionMatch) {
	C.QRegularExpressionMatch_Swap(this.h, other.cPointer())
}

func (this *QRegularExpressionMatch) RegularExpression() *QRegularExpression {
	ret := C.QRegularExpressionMatch_RegularExpression(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpression(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpression) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegularExpressionMatch) MatchType() uintptr {
	ret := C.QRegularExpressionMatch_MatchType(this.h)
	return (uintptr)(ret)
}

func (this *QRegularExpressionMatch) MatchOptions() int {
	ret := C.QRegularExpressionMatch_MatchOptions(this.h)
	return (int)(ret)
}

func (this *QRegularExpressionMatch) HasMatch() bool {
	ret := C.QRegularExpressionMatch_HasMatch(this.h)
	return (bool)(ret)
}

func (this *QRegularExpressionMatch) HasPartialMatch() bool {
	ret := C.QRegularExpressionMatch_HasPartialMatch(this.h)
	return (bool)(ret)
}

func (this *QRegularExpressionMatch) IsValid() bool {
	ret := C.QRegularExpressionMatch_IsValid(this.h)
	return (bool)(ret)
}

func (this *QRegularExpressionMatch) LastCapturedIndex() int {
	ret := C.QRegularExpressionMatch_LastCapturedIndex(this.h)
	return (int)(ret)
}

func (this *QRegularExpressionMatch) Captured() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegularExpressionMatch_Captured(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegularExpressionMatch) CapturedWithName(name string) string {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegularExpressionMatch_CapturedWithName(this.h, name_Cstring, C.ulong(len(name)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegularExpressionMatch) CapturedTexts() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QRegularExpressionMatch_CapturedTexts(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegularExpressionMatch) CapturedStart() int {
	ret := C.QRegularExpressionMatch_CapturedStart(this.h)
	return (int)(ret)
}

func (this *QRegularExpressionMatch) CapturedLength() int {
	ret := C.QRegularExpressionMatch_CapturedLength(this.h)
	return (int)(ret)
}

func (this *QRegularExpressionMatch) CapturedEnd() int {
	ret := C.QRegularExpressionMatch_CapturedEnd(this.h)
	return (int)(ret)
}

func (this *QRegularExpressionMatch) CapturedStartWithName(name string) int {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QRegularExpressionMatch_CapturedStartWithName(this.h, name_Cstring, C.ulong(len(name)))
	return (int)(ret)
}

func (this *QRegularExpressionMatch) CapturedLengthWithName(name string) int {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QRegularExpressionMatch_CapturedLengthWithName(this.h, name_Cstring, C.ulong(len(name)))
	return (int)(ret)
}

func (this *QRegularExpressionMatch) CapturedEndWithName(name string) int {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QRegularExpressionMatch_CapturedEndWithName(this.h, name_Cstring, C.ulong(len(name)))
	return (int)(ret)
}

func (this *QRegularExpressionMatch) Captured1(nth int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRegularExpressionMatch_Captured1(this.h, (C.int)(nth), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRegularExpressionMatch) CapturedStart1(nth int) int {
	ret := C.QRegularExpressionMatch_CapturedStart1(this.h, (C.int)(nth))
	return (int)(ret)
}

func (this *QRegularExpressionMatch) CapturedLength1(nth int) int {
	ret := C.QRegularExpressionMatch_CapturedLength1(this.h, (C.int)(nth))
	return (int)(ret)
}

func (this *QRegularExpressionMatch) CapturedEnd1(nth int) int {
	ret := C.QRegularExpressionMatch_CapturedEnd1(this.h, (C.int)(nth))
	return (int)(ret)
}

func (this *QRegularExpressionMatch) Delete() {
	C.QRegularExpressionMatch_Delete(this.h)
}

type QRegularExpressionMatchIterator struct {
	h *C.QRegularExpressionMatchIterator
}

func (this *QRegularExpressionMatchIterator) cPointer() *C.QRegularExpressionMatchIterator {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRegularExpressionMatchIterator(h *C.QRegularExpressionMatchIterator) *QRegularExpressionMatchIterator {
	return &QRegularExpressionMatchIterator{h: h}
}

func newQRegularExpressionMatchIterator_U(h unsafe.Pointer) *QRegularExpressionMatchIterator {
	return newQRegularExpressionMatchIterator((*C.QRegularExpressionMatchIterator)(h))
}

// NewQRegularExpressionMatchIterator constructs a new QRegularExpressionMatchIterator object.
func NewQRegularExpressionMatchIterator() *QRegularExpressionMatchIterator {
	ret := C.QRegularExpressionMatchIterator_new()
	return newQRegularExpressionMatchIterator(ret)
}

// NewQRegularExpressionMatchIterator2 constructs a new QRegularExpressionMatchIterator object.
func NewQRegularExpressionMatchIterator2(iterator *QRegularExpressionMatchIterator) *QRegularExpressionMatchIterator {
	ret := C.QRegularExpressionMatchIterator_new2(iterator.cPointer())
	return newQRegularExpressionMatchIterator(ret)
}

func (this *QRegularExpressionMatchIterator) OperatorAssign(iterator *QRegularExpressionMatchIterator) {
	C.QRegularExpressionMatchIterator_OperatorAssign(this.h, iterator.cPointer())
}

func (this *QRegularExpressionMatchIterator) Swap(other *QRegularExpressionMatchIterator) {
	C.QRegularExpressionMatchIterator_Swap(this.h, other.cPointer())
}

func (this *QRegularExpressionMatchIterator) IsValid() bool {
	ret := C.QRegularExpressionMatchIterator_IsValid(this.h)
	return (bool)(ret)
}

func (this *QRegularExpressionMatchIterator) HasNext() bool {
	ret := C.QRegularExpressionMatchIterator_HasNext(this.h)
	return (bool)(ret)
}

func (this *QRegularExpressionMatchIterator) Next() *QRegularExpressionMatch {
	ret := C.QRegularExpressionMatchIterator_Next(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpressionMatch(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpressionMatch) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegularExpressionMatchIterator) PeekNext() *QRegularExpressionMatch {
	ret := C.QRegularExpressionMatchIterator_PeekNext(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpressionMatch(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpressionMatch) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegularExpressionMatchIterator) RegularExpression() *QRegularExpression {
	ret := C.QRegularExpressionMatchIterator_RegularExpression(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpression(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpression) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRegularExpressionMatchIterator) MatchType() uintptr {
	ret := C.QRegularExpressionMatchIterator_MatchType(this.h)
	return (uintptr)(ret)
}

func (this *QRegularExpressionMatchIterator) MatchOptions() int {
	ret := C.QRegularExpressionMatchIterator_MatchOptions(this.h)
	return (int)(ret)
}

func (this *QRegularExpressionMatchIterator) Delete() {
	C.QRegularExpressionMatchIterator_Delete(this.h)
}
