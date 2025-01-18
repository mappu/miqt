package qt

/*

#include "gen_qregularexpression.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRegularExpression__PatternOption int

const (
	QRegularExpression__NoPatternOption                 QRegularExpression__PatternOption = 0
	QRegularExpression__CaseInsensitiveOption           QRegularExpression__PatternOption = 1
	QRegularExpression__DotMatchesEverythingOption      QRegularExpression__PatternOption = 2
	QRegularExpression__MultilineOption                 QRegularExpression__PatternOption = 4
	QRegularExpression__ExtendedPatternSyntaxOption     QRegularExpression__PatternOption = 8
	QRegularExpression__InvertedGreedinessOption        QRegularExpression__PatternOption = 16
	QRegularExpression__DontCaptureOption               QRegularExpression__PatternOption = 32
	QRegularExpression__UseUnicodePropertiesOption      QRegularExpression__PatternOption = 64
	QRegularExpression__OptimizeOnFirstUsageOption      QRegularExpression__PatternOption = 128
	QRegularExpression__DontAutomaticallyOptimizeOption QRegularExpression__PatternOption = 256
)

type QRegularExpression__MatchType int

const (
	QRegularExpression__NormalMatch                QRegularExpression__MatchType = 0
	QRegularExpression__PartialPreferCompleteMatch QRegularExpression__MatchType = 1
	QRegularExpression__PartialPreferFirstMatch    QRegularExpression__MatchType = 2
	QRegularExpression__NoMatch                    QRegularExpression__MatchType = 3
)

type QRegularExpression__MatchOption int

const (
	QRegularExpression__NoMatchOption                     QRegularExpression__MatchOption = 0
	QRegularExpression__AnchoredMatchOption               QRegularExpression__MatchOption = 1
	QRegularExpression__DontCheckSubjectStringMatchOption QRegularExpression__MatchOption = 2
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

func (this *QRegularExpression) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRegularExpression constructs the type using only CGO pointers.
func newQRegularExpression(h *C.QRegularExpression) *QRegularExpression {
	if h == nil {
		return nil
	}

	return &QRegularExpression{h: h}
}

// UnsafeNewQRegularExpression constructs the type using only unsafe pointers.
func UnsafeNewQRegularExpression(h unsafe.Pointer) *QRegularExpression {
	return newQRegularExpression((*C.QRegularExpression)(h))
}

// NewQRegularExpression constructs a new QRegularExpression object.
func NewQRegularExpression() *QRegularExpression {

	return newQRegularExpression(C.QRegularExpression_new())
}

// NewQRegularExpression2 constructs a new QRegularExpression object.
func NewQRegularExpression2(pattern string) *QRegularExpression {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))

	return newQRegularExpression(C.QRegularExpression_new2(pattern_ms))
}

// NewQRegularExpression3 constructs a new QRegularExpression object.
func NewQRegularExpression3(re *QRegularExpression) *QRegularExpression {

	return newQRegularExpression(C.QRegularExpression_new3(re.cPointer()))
}

// NewQRegularExpression4 constructs a new QRegularExpression object.
func NewQRegularExpression4(pattern string, options QRegularExpression__PatternOption) *QRegularExpression {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))

	return newQRegularExpression(C.QRegularExpression_new4(pattern_ms, (C.int)(options)))
}

func (this *QRegularExpression) PatternOptions() QRegularExpression__PatternOption {
	return (QRegularExpression__PatternOption)(C.QRegularExpression_PatternOptions(this.h))
}

func (this *QRegularExpression) SetPatternOptions(options QRegularExpression__PatternOption) {
	C.QRegularExpression_SetPatternOptions(this.h, (C.int)(options))
}

func (this *QRegularExpression) OperatorAssign(re *QRegularExpression) {
	C.QRegularExpression_OperatorAssign(this.h, re.cPointer())
}

func (this *QRegularExpression) Swap(other *QRegularExpression) {
	C.QRegularExpression_Swap(this.h, other.cPointer())
}

func (this *QRegularExpression) Pattern() string {
	var _ms C.struct_miqt_string = C.QRegularExpression_Pattern(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegularExpression) SetPattern(pattern string) {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))
	C.QRegularExpression_SetPattern(this.h, pattern_ms)
}

func (this *QRegularExpression) IsValid() bool {
	return (bool)(C.QRegularExpression_IsValid(this.h))
}

func (this *QRegularExpression) PatternErrorOffset() int {
	return (int)(C.QRegularExpression_PatternErrorOffset(this.h))
}

func (this *QRegularExpression) ErrorString() string {
	var _ms C.struct_miqt_string = C.QRegularExpression_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegularExpression) CaptureCount() int {
	return (int)(C.QRegularExpression_CaptureCount(this.h))
}

func (this *QRegularExpression) NamedCaptureGroups() []string {
	var _ma C.struct_miqt_array = C.QRegularExpression_NamedCaptureGroups(this.h)
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

func (this *QRegularExpression) Match(subject string) *QRegularExpressionMatch {
	subject_ms := C.struct_miqt_string{}
	subject_ms.data = C.CString(subject)
	subject_ms.len = C.size_t(len(subject))
	defer C.free(unsafe.Pointer(subject_ms.data))
	_goptr := newQRegularExpressionMatch(C.QRegularExpression_Match(this.h, subject_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpression) GlobalMatch(subject string) *QRegularExpressionMatchIterator {
	subject_ms := C.struct_miqt_string{}
	subject_ms.data = C.CString(subject)
	subject_ms.len = C.size_t(len(subject))
	defer C.free(unsafe.Pointer(subject_ms.data))
	_goptr := newQRegularExpressionMatchIterator(C.QRegularExpression_GlobalMatch(this.h, subject_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpression) Optimize() {
	C.QRegularExpression_Optimize(this.h)
}

func QRegularExpression_Escape(str string) string {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	var _ms C.struct_miqt_string = C.QRegularExpression_Escape(str_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRegularExpression_WildcardToRegularExpression(str string) string {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	var _ms C.struct_miqt_string = C.QRegularExpression_WildcardToRegularExpression(str_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRegularExpression_AnchoredPattern(expression string) string {
	expression_ms := C.struct_miqt_string{}
	expression_ms.data = C.CString(expression)
	expression_ms.len = C.size_t(len(expression))
	defer C.free(unsafe.Pointer(expression_ms.data))
	var _ms C.struct_miqt_string = C.QRegularExpression_AnchoredPattern(expression_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegularExpression) OperatorEqual(re *QRegularExpression) bool {
	return (bool)(C.QRegularExpression_OperatorEqual(this.h, re.cPointer()))
}

func (this *QRegularExpression) OperatorNotEqual(re *QRegularExpression) bool {
	return (bool)(C.QRegularExpression_OperatorNotEqual(this.h, re.cPointer()))
}

func (this *QRegularExpression) Match2(subject string, offset int) *QRegularExpressionMatch {
	subject_ms := C.struct_miqt_string{}
	subject_ms.data = C.CString(subject)
	subject_ms.len = C.size_t(len(subject))
	defer C.free(unsafe.Pointer(subject_ms.data))
	_goptr := newQRegularExpressionMatch(C.QRegularExpression_Match2(this.h, subject_ms, (C.int)(offset)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpression) Match3(subject string, offset int, matchType QRegularExpression__MatchType) *QRegularExpressionMatch {
	subject_ms := C.struct_miqt_string{}
	subject_ms.data = C.CString(subject)
	subject_ms.len = C.size_t(len(subject))
	defer C.free(unsafe.Pointer(subject_ms.data))
	_goptr := newQRegularExpressionMatch(C.QRegularExpression_Match3(this.h, subject_ms, (C.int)(offset), (C.int)(matchType)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpression) Match4(subject string, offset int, matchType QRegularExpression__MatchType, matchOptions QRegularExpression__MatchOption) *QRegularExpressionMatch {
	subject_ms := C.struct_miqt_string{}
	subject_ms.data = C.CString(subject)
	subject_ms.len = C.size_t(len(subject))
	defer C.free(unsafe.Pointer(subject_ms.data))
	_goptr := newQRegularExpressionMatch(C.QRegularExpression_Match4(this.h, subject_ms, (C.int)(offset), (C.int)(matchType), (C.int)(matchOptions)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpression) GlobalMatch2(subject string, offset int) *QRegularExpressionMatchIterator {
	subject_ms := C.struct_miqt_string{}
	subject_ms.data = C.CString(subject)
	subject_ms.len = C.size_t(len(subject))
	defer C.free(unsafe.Pointer(subject_ms.data))
	_goptr := newQRegularExpressionMatchIterator(C.QRegularExpression_GlobalMatch2(this.h, subject_ms, (C.int)(offset)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpression) GlobalMatch3(subject string, offset int, matchType QRegularExpression__MatchType) *QRegularExpressionMatchIterator {
	subject_ms := C.struct_miqt_string{}
	subject_ms.data = C.CString(subject)
	subject_ms.len = C.size_t(len(subject))
	defer C.free(unsafe.Pointer(subject_ms.data))
	_goptr := newQRegularExpressionMatchIterator(C.QRegularExpression_GlobalMatch3(this.h, subject_ms, (C.int)(offset), (C.int)(matchType)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpression) GlobalMatch4(subject string, offset int, matchType QRegularExpression__MatchType, matchOptions QRegularExpression__MatchOption) *QRegularExpressionMatchIterator {
	subject_ms := C.struct_miqt_string{}
	subject_ms.data = C.CString(subject)
	subject_ms.len = C.size_t(len(subject))
	defer C.free(unsafe.Pointer(subject_ms.data))
	_goptr := newQRegularExpressionMatchIterator(C.QRegularExpression_GlobalMatch4(this.h, subject_ms, (C.int)(offset), (C.int)(matchType), (C.int)(matchOptions)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QRegularExpression) Delete() {
	C.QRegularExpression_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRegularExpression) GoGC() {
	runtime.SetFinalizer(this, func(this *QRegularExpression) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QRegularExpressionMatch) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRegularExpressionMatch constructs the type using only CGO pointers.
func newQRegularExpressionMatch(h *C.QRegularExpressionMatch) *QRegularExpressionMatch {
	if h == nil {
		return nil
	}

	return &QRegularExpressionMatch{h: h}
}

// UnsafeNewQRegularExpressionMatch constructs the type using only unsafe pointers.
func UnsafeNewQRegularExpressionMatch(h unsafe.Pointer) *QRegularExpressionMatch {
	return newQRegularExpressionMatch((*C.QRegularExpressionMatch)(h))
}

// NewQRegularExpressionMatch constructs a new QRegularExpressionMatch object.
func NewQRegularExpressionMatch() *QRegularExpressionMatch {

	return newQRegularExpressionMatch(C.QRegularExpressionMatch_new())
}

// NewQRegularExpressionMatch2 constructs a new QRegularExpressionMatch object.
func NewQRegularExpressionMatch2(match *QRegularExpressionMatch) *QRegularExpressionMatch {

	return newQRegularExpressionMatch(C.QRegularExpressionMatch_new2(match.cPointer()))
}

func (this *QRegularExpressionMatch) OperatorAssign(match *QRegularExpressionMatch) {
	C.QRegularExpressionMatch_OperatorAssign(this.h, match.cPointer())
}

func (this *QRegularExpressionMatch) Swap(other *QRegularExpressionMatch) {
	C.QRegularExpressionMatch_Swap(this.h, other.cPointer())
}

func (this *QRegularExpressionMatch) RegularExpression() *QRegularExpression {
	_goptr := newQRegularExpression(C.QRegularExpressionMatch_RegularExpression(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpressionMatch) MatchType() QRegularExpression__MatchType {
	return (QRegularExpression__MatchType)(C.QRegularExpressionMatch_MatchType(this.h))
}

func (this *QRegularExpressionMatch) MatchOptions() QRegularExpression__MatchOption {
	return (QRegularExpression__MatchOption)(C.QRegularExpressionMatch_MatchOptions(this.h))
}

func (this *QRegularExpressionMatch) HasMatch() bool {
	return (bool)(C.QRegularExpressionMatch_HasMatch(this.h))
}

func (this *QRegularExpressionMatch) HasPartialMatch() bool {
	return (bool)(C.QRegularExpressionMatch_HasPartialMatch(this.h))
}

func (this *QRegularExpressionMatch) IsValid() bool {
	return (bool)(C.QRegularExpressionMatch_IsValid(this.h))
}

func (this *QRegularExpressionMatch) LastCapturedIndex() int {
	return (int)(C.QRegularExpressionMatch_LastCapturedIndex(this.h))
}

func (this *QRegularExpressionMatch) Captured() string {
	var _ms C.struct_miqt_string = C.QRegularExpressionMatch_Captured(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegularExpressionMatch) CapturedWithName(name string) string {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var _ms C.struct_miqt_string = C.QRegularExpressionMatch_CapturedWithName(this.h, name_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegularExpressionMatch) CapturedTexts() []string {
	var _ma C.struct_miqt_array = C.QRegularExpressionMatch_CapturedTexts(this.h)
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

func (this *QRegularExpressionMatch) CapturedStart() int {
	return (int)(C.QRegularExpressionMatch_CapturedStart(this.h))
}

func (this *QRegularExpressionMatch) CapturedLength() int {
	return (int)(C.QRegularExpressionMatch_CapturedLength(this.h))
}

func (this *QRegularExpressionMatch) CapturedEnd() int {
	return (int)(C.QRegularExpressionMatch_CapturedEnd(this.h))
}

func (this *QRegularExpressionMatch) CapturedStartWithName(name string) int {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (int)(C.QRegularExpressionMatch_CapturedStartWithName(this.h, name_ms))
}

func (this *QRegularExpressionMatch) CapturedLengthWithName(name string) int {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (int)(C.QRegularExpressionMatch_CapturedLengthWithName(this.h, name_ms))
}

func (this *QRegularExpressionMatch) CapturedEndWithName(name string) int {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (int)(C.QRegularExpressionMatch_CapturedEndWithName(this.h, name_ms))
}

func (this *QRegularExpressionMatch) Captured1(nth int) string {
	var _ms C.struct_miqt_string = C.QRegularExpressionMatch_Captured1(this.h, (C.int)(nth))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRegularExpressionMatch) CapturedStart1(nth int) int {
	return (int)(C.QRegularExpressionMatch_CapturedStart1(this.h, (C.int)(nth)))
}

func (this *QRegularExpressionMatch) CapturedLength1(nth int) int {
	return (int)(C.QRegularExpressionMatch_CapturedLength1(this.h, (C.int)(nth)))
}

func (this *QRegularExpressionMatch) CapturedEnd1(nth int) int {
	return (int)(C.QRegularExpressionMatch_CapturedEnd1(this.h, (C.int)(nth)))
}

// Delete this object from C++ memory.
func (this *QRegularExpressionMatch) Delete() {
	C.QRegularExpressionMatch_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRegularExpressionMatch) GoGC() {
	runtime.SetFinalizer(this, func(this *QRegularExpressionMatch) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QRegularExpressionMatchIterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRegularExpressionMatchIterator constructs the type using only CGO pointers.
func newQRegularExpressionMatchIterator(h *C.QRegularExpressionMatchIterator) *QRegularExpressionMatchIterator {
	if h == nil {
		return nil
	}

	return &QRegularExpressionMatchIterator{h: h}
}

// UnsafeNewQRegularExpressionMatchIterator constructs the type using only unsafe pointers.
func UnsafeNewQRegularExpressionMatchIterator(h unsafe.Pointer) *QRegularExpressionMatchIterator {
	return newQRegularExpressionMatchIterator((*C.QRegularExpressionMatchIterator)(h))
}

// NewQRegularExpressionMatchIterator constructs a new QRegularExpressionMatchIterator object.
func NewQRegularExpressionMatchIterator() *QRegularExpressionMatchIterator {

	return newQRegularExpressionMatchIterator(C.QRegularExpressionMatchIterator_new())
}

// NewQRegularExpressionMatchIterator2 constructs a new QRegularExpressionMatchIterator object.
func NewQRegularExpressionMatchIterator2(iterator *QRegularExpressionMatchIterator) *QRegularExpressionMatchIterator {

	return newQRegularExpressionMatchIterator(C.QRegularExpressionMatchIterator_new2(iterator.cPointer()))
}

func (this *QRegularExpressionMatchIterator) OperatorAssign(iterator *QRegularExpressionMatchIterator) {
	C.QRegularExpressionMatchIterator_OperatorAssign(this.h, iterator.cPointer())
}

func (this *QRegularExpressionMatchIterator) Swap(other *QRegularExpressionMatchIterator) {
	C.QRegularExpressionMatchIterator_Swap(this.h, other.cPointer())
}

func (this *QRegularExpressionMatchIterator) IsValid() bool {
	return (bool)(C.QRegularExpressionMatchIterator_IsValid(this.h))
}

func (this *QRegularExpressionMatchIterator) HasNext() bool {
	return (bool)(C.QRegularExpressionMatchIterator_HasNext(this.h))
}

func (this *QRegularExpressionMatchIterator) Next() *QRegularExpressionMatch {
	_goptr := newQRegularExpressionMatch(C.QRegularExpressionMatchIterator_Next(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpressionMatchIterator) PeekNext() *QRegularExpressionMatch {
	_goptr := newQRegularExpressionMatch(C.QRegularExpressionMatchIterator_PeekNext(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpressionMatchIterator) RegularExpression() *QRegularExpression {
	_goptr := newQRegularExpression(C.QRegularExpressionMatchIterator_RegularExpression(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpressionMatchIterator) MatchType() QRegularExpression__MatchType {
	return (QRegularExpression__MatchType)(C.QRegularExpressionMatchIterator_MatchType(this.h))
}

func (this *QRegularExpressionMatchIterator) MatchOptions() QRegularExpression__MatchOption {
	return (QRegularExpression__MatchOption)(C.QRegularExpressionMatchIterator_MatchOptions(this.h))
}

// Delete this object from C++ memory.
func (this *QRegularExpressionMatchIterator) Delete() {
	C.QRegularExpressionMatchIterator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRegularExpressionMatchIterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QRegularExpressionMatchIterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
