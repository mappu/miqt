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
	QRegularExpression__PatternOption__NoPatternOption                 QRegularExpression__PatternOption = 0
	QRegularExpression__PatternOption__CaseInsensitiveOption           QRegularExpression__PatternOption = 1
	QRegularExpression__PatternOption__DotMatchesEverythingOption      QRegularExpression__PatternOption = 2
	QRegularExpression__PatternOption__MultilineOption                 QRegularExpression__PatternOption = 4
	QRegularExpression__PatternOption__ExtendedPatternSyntaxOption     QRegularExpression__PatternOption = 8
	QRegularExpression__PatternOption__InvertedGreedinessOption        QRegularExpression__PatternOption = 16
	QRegularExpression__PatternOption__DontCaptureOption               QRegularExpression__PatternOption = 32
	QRegularExpression__PatternOption__UseUnicodePropertiesOption      QRegularExpression__PatternOption = 64
	QRegularExpression__PatternOption__OptimizeOnFirstUsageOption      QRegularExpression__PatternOption = 128
	QRegularExpression__PatternOption__DontAutomaticallyOptimizeOption QRegularExpression__PatternOption = 256
)

type QRegularExpression__MatchType int

const (
	QRegularExpression__MatchType__NormalMatch                QRegularExpression__MatchType = 0
	QRegularExpression__MatchType__PartialPreferCompleteMatch QRegularExpression__MatchType = 1
	QRegularExpression__MatchType__PartialPreferFirstMatch    QRegularExpression__MatchType = 2
	QRegularExpression__MatchType__NoMatch                    QRegularExpression__MatchType = 3
)

type QRegularExpression__MatchOption int

const (
	QRegularExpression__MatchOption__NoMatchOption                     QRegularExpression__MatchOption = 0
	QRegularExpression__MatchOption__AnchoredMatchOption               QRegularExpression__MatchOption = 1
	QRegularExpression__MatchOption__DontCheckSubjectStringMatchOption QRegularExpression__MatchOption = 2
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
	if h == nil {
		return nil
	}
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
	pattern_ms := miqt_strdupg(pattern)
	defer C.free(pattern_ms)
	ret := C.QRegularExpression_new2((*C.struct_miqt_string)(pattern_ms))
	return newQRegularExpression(ret)
}

// NewQRegularExpression3 constructs a new QRegularExpression object.
func NewQRegularExpression3(re *QRegularExpression) *QRegularExpression {
	ret := C.QRegularExpression_new3(re.cPointer())
	return newQRegularExpression(ret)
}

// NewQRegularExpression4 constructs a new QRegularExpression object.
func NewQRegularExpression4(pattern string, options int) *QRegularExpression {
	pattern_ms := miqt_strdupg(pattern)
	defer C.free(pattern_ms)
	ret := C.QRegularExpression_new4((*C.struct_miqt_string)(pattern_ms), (C.int)(options))
	return newQRegularExpression(ret)
}

func (this *QRegularExpression) PatternOptions() int {
	return (int)(C.QRegularExpression_PatternOptions(this.h))
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
	var _ms *C.struct_miqt_string = C.QRegularExpression_Pattern(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QRegularExpression) SetPattern(pattern string) {
	pattern_ms := miqt_strdupg(pattern)
	defer C.free(pattern_ms)
	C.QRegularExpression_SetPattern(this.h, (*C.struct_miqt_string)(pattern_ms))
}

func (this *QRegularExpression) IsValid() bool {
	return (bool)(C.QRegularExpression_IsValid(this.h))
}

func (this *QRegularExpression) PatternErrorOffset() int {
	return (int)(C.QRegularExpression_PatternErrorOffset(this.h))
}

func (this *QRegularExpression) ErrorString() string {
	var _ms *C.struct_miqt_string = C.QRegularExpression_ErrorString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QRegularExpression) CaptureCount() int {
	return (int)(C.QRegularExpression_CaptureCount(this.h))
}

func (this *QRegularExpression) NamedCaptureGroups() []string {
	var _ma *C.struct_miqt_array = C.QRegularExpression_NamedCaptureGroups(this.h)
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

func (this *QRegularExpression) Match(subject string) *QRegularExpressionMatch {
	subject_ms := miqt_strdupg(subject)
	defer C.free(subject_ms)
	_ret := C.QRegularExpression_Match(this.h, (*C.struct_miqt_string)(subject_ms))
	_goptr := newQRegularExpressionMatch(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpression) GlobalMatch(subject string) *QRegularExpressionMatchIterator {
	subject_ms := miqt_strdupg(subject)
	defer C.free(subject_ms)
	_ret := C.QRegularExpression_GlobalMatch(this.h, (*C.struct_miqt_string)(subject_ms))
	_goptr := newQRegularExpressionMatchIterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpression) Optimize() {
	C.QRegularExpression_Optimize(this.h)
}

func QRegularExpression_Escape(str string) string {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	var _ms *C.struct_miqt_string = C.QRegularExpression_Escape((*C.struct_miqt_string)(str_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QRegularExpression_WildcardToRegularExpression(str string) string {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	var _ms *C.struct_miqt_string = C.QRegularExpression_WildcardToRegularExpression((*C.struct_miqt_string)(str_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QRegularExpression_AnchoredPattern(expression string) string {
	expression_ms := miqt_strdupg(expression)
	defer C.free(expression_ms)
	var _ms *C.struct_miqt_string = C.QRegularExpression_AnchoredPattern((*C.struct_miqt_string)(expression_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QRegularExpression) OperatorEqual(re *QRegularExpression) bool {
	return (bool)(C.QRegularExpression_OperatorEqual(this.h, re.cPointer()))
}

func (this *QRegularExpression) OperatorNotEqual(re *QRegularExpression) bool {
	return (bool)(C.QRegularExpression_OperatorNotEqual(this.h, re.cPointer()))
}

func (this *QRegularExpression) Match2(subject string, offset int) *QRegularExpressionMatch {
	subject_ms := miqt_strdupg(subject)
	defer C.free(subject_ms)
	_ret := C.QRegularExpression_Match2(this.h, (*C.struct_miqt_string)(subject_ms), (C.int)(offset))
	_goptr := newQRegularExpressionMatch(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpression) Match3(subject string, offset int, matchType QRegularExpression__MatchType) *QRegularExpressionMatch {
	subject_ms := miqt_strdupg(subject)
	defer C.free(subject_ms)
	_ret := C.QRegularExpression_Match3(this.h, (*C.struct_miqt_string)(subject_ms), (C.int)(offset), (C.int)(matchType))
	_goptr := newQRegularExpressionMatch(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpression) Match4(subject string, offset int, matchType QRegularExpression__MatchType, matchOptions int) *QRegularExpressionMatch {
	subject_ms := miqt_strdupg(subject)
	defer C.free(subject_ms)
	_ret := C.QRegularExpression_Match4(this.h, (*C.struct_miqt_string)(subject_ms), (C.int)(offset), (C.int)(matchType), (C.int)(matchOptions))
	_goptr := newQRegularExpressionMatch(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpression) GlobalMatch2(subject string, offset int) *QRegularExpressionMatchIterator {
	subject_ms := miqt_strdupg(subject)
	defer C.free(subject_ms)
	_ret := C.QRegularExpression_GlobalMatch2(this.h, (*C.struct_miqt_string)(subject_ms), (C.int)(offset))
	_goptr := newQRegularExpressionMatchIterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpression) GlobalMatch3(subject string, offset int, matchType QRegularExpression__MatchType) *QRegularExpressionMatchIterator {
	subject_ms := miqt_strdupg(subject)
	defer C.free(subject_ms)
	_ret := C.QRegularExpression_GlobalMatch3(this.h, (*C.struct_miqt_string)(subject_ms), (C.int)(offset), (C.int)(matchType))
	_goptr := newQRegularExpressionMatchIterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpression) GlobalMatch4(subject string, offset int, matchType QRegularExpression__MatchType, matchOptions int) *QRegularExpressionMatchIterator {
	subject_ms := miqt_strdupg(subject)
	defer C.free(subject_ms)
	_ret := C.QRegularExpression_GlobalMatch4(this.h, (*C.struct_miqt_string)(subject_ms), (C.int)(offset), (C.int)(matchType), (C.int)(matchOptions))
	_goptr := newQRegularExpressionMatchIterator(_ret)
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

func newQRegularExpressionMatch(h *C.QRegularExpressionMatch) *QRegularExpressionMatch {
	if h == nil {
		return nil
	}
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
	_ret := C.QRegularExpressionMatch_RegularExpression(this.h)
	_goptr := newQRegularExpression(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpressionMatch) MatchType() QRegularExpression__MatchType {
	return (QRegularExpression__MatchType)(C.QRegularExpressionMatch_MatchType(this.h))
}

func (this *QRegularExpressionMatch) MatchOptions() int {
	return (int)(C.QRegularExpressionMatch_MatchOptions(this.h))
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
	var _ms *C.struct_miqt_string = C.QRegularExpressionMatch_Captured(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QRegularExpressionMatch) CapturedWithName(name string) string {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	var _ms *C.struct_miqt_string = C.QRegularExpressionMatch_CapturedWithName(this.h, (*C.struct_miqt_string)(name_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QRegularExpressionMatch) CapturedTexts() []string {
	var _ma *C.struct_miqt_array = C.QRegularExpressionMatch_CapturedTexts(this.h)
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
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	return (int)(C.QRegularExpressionMatch_CapturedStartWithName(this.h, (*C.struct_miqt_string)(name_ms)))
}

func (this *QRegularExpressionMatch) CapturedLengthWithName(name string) int {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	return (int)(C.QRegularExpressionMatch_CapturedLengthWithName(this.h, (*C.struct_miqt_string)(name_ms)))
}

func (this *QRegularExpressionMatch) CapturedEndWithName(name string) int {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	return (int)(C.QRegularExpressionMatch_CapturedEndWithName(this.h, (*C.struct_miqt_string)(name_ms)))
}

func (this *QRegularExpressionMatch) Captured1(nth int) string {
	var _ms *C.struct_miqt_string = C.QRegularExpressionMatch_Captured1(this.h, (C.int)(nth))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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

func newQRegularExpressionMatchIterator(h *C.QRegularExpressionMatchIterator) *QRegularExpressionMatchIterator {
	if h == nil {
		return nil
	}
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
	return (bool)(C.QRegularExpressionMatchIterator_IsValid(this.h))
}

func (this *QRegularExpressionMatchIterator) HasNext() bool {
	return (bool)(C.QRegularExpressionMatchIterator_HasNext(this.h))
}

func (this *QRegularExpressionMatchIterator) Next() *QRegularExpressionMatch {
	_ret := C.QRegularExpressionMatchIterator_Next(this.h)
	_goptr := newQRegularExpressionMatch(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpressionMatchIterator) PeekNext() *QRegularExpressionMatch {
	_ret := C.QRegularExpressionMatchIterator_PeekNext(this.h)
	_goptr := newQRegularExpressionMatch(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpressionMatchIterator) RegularExpression() *QRegularExpression {
	_ret := C.QRegularExpressionMatchIterator_RegularExpression(this.h)
	_goptr := newQRegularExpression(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegularExpressionMatchIterator) MatchType() QRegularExpression__MatchType {
	return (QRegularExpression__MatchType)(C.QRegularExpressionMatchIterator_MatchType(this.h))
}

func (this *QRegularExpressionMatchIterator) MatchOptions() int {
	return (int)(C.QRegularExpressionMatchIterator_MatchOptions(this.h))
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
