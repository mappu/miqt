package qt6

/*

#include "gen_qkeysequence.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QKeySequence__StandardKey int

const (
	QKeySequence__UnknownKey               QKeySequence__StandardKey = 0
	QKeySequence__HelpContents             QKeySequence__StandardKey = 1
	QKeySequence__WhatsThis                QKeySequence__StandardKey = 2
	QKeySequence__Open                     QKeySequence__StandardKey = 3
	QKeySequence__Close                    QKeySequence__StandardKey = 4
	QKeySequence__Save                     QKeySequence__StandardKey = 5
	QKeySequence__New                      QKeySequence__StandardKey = 6
	QKeySequence__Delete                   QKeySequence__StandardKey = 7
	QKeySequence__Cut                      QKeySequence__StandardKey = 8
	QKeySequence__Copy                     QKeySequence__StandardKey = 9
	QKeySequence__Paste                    QKeySequence__StandardKey = 10
	QKeySequence__Undo                     QKeySequence__StandardKey = 11
	QKeySequence__Redo                     QKeySequence__StandardKey = 12
	QKeySequence__Back                     QKeySequence__StandardKey = 13
	QKeySequence__Forward                  QKeySequence__StandardKey = 14
	QKeySequence__Refresh                  QKeySequence__StandardKey = 15
	QKeySequence__ZoomIn                   QKeySequence__StandardKey = 16
	QKeySequence__ZoomOut                  QKeySequence__StandardKey = 17
	QKeySequence__Print                    QKeySequence__StandardKey = 18
	QKeySequence__AddTab                   QKeySequence__StandardKey = 19
	QKeySequence__NextChild                QKeySequence__StandardKey = 20
	QKeySequence__PreviousChild            QKeySequence__StandardKey = 21
	QKeySequence__Find                     QKeySequence__StandardKey = 22
	QKeySequence__FindNext                 QKeySequence__StandardKey = 23
	QKeySequence__FindPrevious             QKeySequence__StandardKey = 24
	QKeySequence__Replace                  QKeySequence__StandardKey = 25
	QKeySequence__SelectAll                QKeySequence__StandardKey = 26
	QKeySequence__Bold                     QKeySequence__StandardKey = 27
	QKeySequence__Italic                   QKeySequence__StandardKey = 28
	QKeySequence__Underline                QKeySequence__StandardKey = 29
	QKeySequence__MoveToNextChar           QKeySequence__StandardKey = 30
	QKeySequence__MoveToPreviousChar       QKeySequence__StandardKey = 31
	QKeySequence__MoveToNextWord           QKeySequence__StandardKey = 32
	QKeySequence__MoveToPreviousWord       QKeySequence__StandardKey = 33
	QKeySequence__MoveToNextLine           QKeySequence__StandardKey = 34
	QKeySequence__MoveToPreviousLine       QKeySequence__StandardKey = 35
	QKeySequence__MoveToNextPage           QKeySequence__StandardKey = 36
	QKeySequence__MoveToPreviousPage       QKeySequence__StandardKey = 37
	QKeySequence__MoveToStartOfLine        QKeySequence__StandardKey = 38
	QKeySequence__MoveToEndOfLine          QKeySequence__StandardKey = 39
	QKeySequence__MoveToStartOfBlock       QKeySequence__StandardKey = 40
	QKeySequence__MoveToEndOfBlock         QKeySequence__StandardKey = 41
	QKeySequence__MoveToStartOfDocument    QKeySequence__StandardKey = 42
	QKeySequence__MoveToEndOfDocument      QKeySequence__StandardKey = 43
	QKeySequence__SelectNextChar           QKeySequence__StandardKey = 44
	QKeySequence__SelectPreviousChar       QKeySequence__StandardKey = 45
	QKeySequence__SelectNextWord           QKeySequence__StandardKey = 46
	QKeySequence__SelectPreviousWord       QKeySequence__StandardKey = 47
	QKeySequence__SelectNextLine           QKeySequence__StandardKey = 48
	QKeySequence__SelectPreviousLine       QKeySequence__StandardKey = 49
	QKeySequence__SelectNextPage           QKeySequence__StandardKey = 50
	QKeySequence__SelectPreviousPage       QKeySequence__StandardKey = 51
	QKeySequence__SelectStartOfLine        QKeySequence__StandardKey = 52
	QKeySequence__SelectEndOfLine          QKeySequence__StandardKey = 53
	QKeySequence__SelectStartOfBlock       QKeySequence__StandardKey = 54
	QKeySequence__SelectEndOfBlock         QKeySequence__StandardKey = 55
	QKeySequence__SelectStartOfDocument    QKeySequence__StandardKey = 56
	QKeySequence__SelectEndOfDocument      QKeySequence__StandardKey = 57
	QKeySequence__DeleteStartOfWord        QKeySequence__StandardKey = 58
	QKeySequence__DeleteEndOfWord          QKeySequence__StandardKey = 59
	QKeySequence__DeleteEndOfLine          QKeySequence__StandardKey = 60
	QKeySequence__InsertParagraphSeparator QKeySequence__StandardKey = 61
	QKeySequence__InsertLineSeparator      QKeySequence__StandardKey = 62
	QKeySequence__SaveAs                   QKeySequence__StandardKey = 63
	QKeySequence__Preferences              QKeySequence__StandardKey = 64
	QKeySequence__Quit                     QKeySequence__StandardKey = 65
	QKeySequence__FullScreen               QKeySequence__StandardKey = 66
	QKeySequence__Deselect                 QKeySequence__StandardKey = 67
	QKeySequence__DeleteCompleteLine       QKeySequence__StandardKey = 68
	QKeySequence__Backspace                QKeySequence__StandardKey = 69
	QKeySequence__Cancel                   QKeySequence__StandardKey = 70
)

type QKeySequence__SequenceFormat int

const (
	QKeySequence__NativeText   QKeySequence__SequenceFormat = 0
	QKeySequence__PortableText QKeySequence__SequenceFormat = 1
)

type QKeySequence__SequenceMatch int

const (
	QKeySequence__NoMatch      QKeySequence__SequenceMatch = 0
	QKeySequence__PartialMatch QKeySequence__SequenceMatch = 1
	QKeySequence__ExactMatch   QKeySequence__SequenceMatch = 2
)

type QKeySequence struct {
	h *C.QKeySequence
}

func (this *QKeySequence) cPointer() *C.QKeySequence {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QKeySequence) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQKeySequence constructs the type using only CGO pointers.
func newQKeySequence(h *C.QKeySequence) *QKeySequence {
	if h == nil {
		return nil
	}

	return &QKeySequence{h: h}
}

// UnsafeNewQKeySequence constructs the type using only unsafe pointers.
func UnsafeNewQKeySequence(h unsafe.Pointer) *QKeySequence {
	return newQKeySequence((*C.QKeySequence)(h))
}

// NewQKeySequence constructs a new QKeySequence object.
func NewQKeySequence() *QKeySequence {

	return newQKeySequence(C.QKeySequence_new())
}

// NewQKeySequence2 constructs a new QKeySequence object.
func NewQKeySequence2(key string) *QKeySequence {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))

	return newQKeySequence(C.QKeySequence_new2(key_ms))
}

// NewQKeySequence3 constructs a new QKeySequence object.
func NewQKeySequence3(k1 int) *QKeySequence {

	return newQKeySequence(C.QKeySequence_new3((C.int)(k1)))
}

// NewQKeySequence4 constructs a new QKeySequence object.
func NewQKeySequence4(k1 QKeyCombination) *QKeySequence {

	return newQKeySequence(C.QKeySequence_new4(k1.cPointer()))
}

// NewQKeySequence5 constructs a new QKeySequence object.
func NewQKeySequence5(ks *QKeySequence) *QKeySequence {

	return newQKeySequence(C.QKeySequence_new5(ks.cPointer()))
}

// NewQKeySequence6 constructs a new QKeySequence object.
func NewQKeySequence6(key QKeySequence__StandardKey) *QKeySequence {

	return newQKeySequence(C.QKeySequence_new6((C.int)(key)))
}

// NewQKeySequence7 constructs a new QKeySequence object.
func NewQKeySequence7(key string, format QKeySequence__SequenceFormat) *QKeySequence {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))

	return newQKeySequence(C.QKeySequence_new7(key_ms, (C.int)(format)))
}

// NewQKeySequence8 constructs a new QKeySequence object.
func NewQKeySequence8(k1 int, k2 int) *QKeySequence {

	return newQKeySequence(C.QKeySequence_new8((C.int)(k1), (C.int)(k2)))
}

// NewQKeySequence9 constructs a new QKeySequence object.
func NewQKeySequence9(k1 int, k2 int, k3 int) *QKeySequence {

	return newQKeySequence(C.QKeySequence_new9((C.int)(k1), (C.int)(k2), (C.int)(k3)))
}

// NewQKeySequence10 constructs a new QKeySequence object.
func NewQKeySequence10(k1 int, k2 int, k3 int, k4 int) *QKeySequence {

	return newQKeySequence(C.QKeySequence_new10((C.int)(k1), (C.int)(k2), (C.int)(k3), (C.int)(k4)))
}

// NewQKeySequence11 constructs a new QKeySequence object.
func NewQKeySequence11(k1 QKeyCombination, k2 QKeyCombination) *QKeySequence {

	return newQKeySequence(C.QKeySequence_new11(k1.cPointer(), k2.cPointer()))
}

// NewQKeySequence12 constructs a new QKeySequence object.
func NewQKeySequence12(k1 QKeyCombination, k2 QKeyCombination, k3 QKeyCombination) *QKeySequence {

	return newQKeySequence(C.QKeySequence_new12(k1.cPointer(), k2.cPointer(), k3.cPointer()))
}

// NewQKeySequence13 constructs a new QKeySequence object.
func NewQKeySequence13(k1 QKeyCombination, k2 QKeyCombination, k3 QKeyCombination, k4 QKeyCombination) *QKeySequence {

	return newQKeySequence(C.QKeySequence_new13(k1.cPointer(), k2.cPointer(), k3.cPointer(), k4.cPointer()))
}

func (this *QKeySequence) Count() int {
	return (int)(C.QKeySequence_count(this.h))
}

func (this *QKeySequence) IsEmpty() bool {
	return (bool)(C.QKeySequence_isEmpty(this.h))
}

func (this *QKeySequence) ToString() string {
	var _ms C.struct_miqt_string = C.QKeySequence_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeySequence_FromString(str string) *QKeySequence {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	_goptr := newQKeySequence(C.QKeySequence_fromString(str_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QKeySequence_ListFromString(str string) []QKeySequence {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	var _ma C.struct_miqt_array = C.QKeySequence_listFromString(str_ms)
	_ret := make([]QKeySequence, int(_ma.len))
	_outCast := (*[0xffff]*C.QKeySequence)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQKeySequence(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QKeySequence_ListToString(list []QKeySequence) string {
	list_CArray := (*[0xffff]*C.QKeySequence)(C.malloc(C.size_t(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_CArray[i] = list[i].cPointer()
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	var _ms C.struct_miqt_string = C.QKeySequence_listToString(list_ma)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QKeySequence) Matches(seq *QKeySequence) QKeySequence__SequenceMatch {
	return (QKeySequence__SequenceMatch)(C.QKeySequence_matches(this.h, seq.cPointer()))
}

func QKeySequence_Mnemonic(text string) *QKeySequence {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQKeySequence(C.QKeySequence_mnemonic(text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QKeySequence_KeyBindings(key QKeySequence__StandardKey) []QKeySequence {
	var _ma C.struct_miqt_array = C.QKeySequence_keyBindings((C.int)(key))
	_ret := make([]QKeySequence, int(_ma.len))
	_outCast := (*[0xffff]*C.QKeySequence)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQKeySequence(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QKeySequence) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QKeySequence_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QKeySequence) OperatorSubscript(i uint) *QKeyCombination {
	_goptr := newQKeyCombination(C.QKeySequence_operatorSubscript(this.h, (C.uint)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QKeySequence) OperatorAssign(other *QKeySequence) {
	C.QKeySequence_operatorAssign(this.h, other.cPointer())
}

func (this *QKeySequence) Swap(other *QKeySequence) {
	C.QKeySequence_swap(this.h, other.cPointer())
}

func (this *QKeySequence) OperatorEqual(other *QKeySequence) bool {
	return (bool)(C.QKeySequence_operatorEqual(this.h, other.cPointer()))
}

func (this *QKeySequence) OperatorNotEqual(other *QKeySequence) bool {
	return (bool)(C.QKeySequence_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QKeySequence) OperatorLesser(ks *QKeySequence) bool {
	return (bool)(C.QKeySequence_operatorLesser(this.h, ks.cPointer()))
}

func (this *QKeySequence) OperatorGreater(other *QKeySequence) bool {
	return (bool)(C.QKeySequence_operatorGreater(this.h, other.cPointer()))
}

func (this *QKeySequence) OperatorLesserOrEqual(other *QKeySequence) bool {
	return (bool)(C.QKeySequence_operatorLesserOrEqual(this.h, other.cPointer()))
}

func (this *QKeySequence) OperatorGreaterOrEqual(other *QKeySequence) bool {
	return (bool)(C.QKeySequence_operatorGreaterOrEqual(this.h, other.cPointer()))
}

func (this *QKeySequence) IsDetached() bool {
	return (bool)(C.QKeySequence_isDetached(this.h))
}

func (this *QKeySequence) ToStringWithFormat(format QKeySequence__SequenceFormat) string {
	var _ms C.struct_miqt_string = C.QKeySequence_toStringWithFormat(this.h, (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeySequence_FromString2(str string, format QKeySequence__SequenceFormat) *QKeySequence {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	_goptr := newQKeySequence(C.QKeySequence_fromString2(str_ms, (C.int)(format)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QKeySequence_ListFromString2(str string, format QKeySequence__SequenceFormat) []QKeySequence {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	var _ma C.struct_miqt_array = C.QKeySequence_listFromString2(str_ms, (C.int)(format))
	_ret := make([]QKeySequence, int(_ma.len))
	_outCast := (*[0xffff]*C.QKeySequence)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQKeySequence(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QKeySequence_ListToString2(list []QKeySequence, format QKeySequence__SequenceFormat) string {
	list_CArray := (*[0xffff]*C.QKeySequence)(C.malloc(C.size_t(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_CArray[i] = list[i].cPointer()
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	var _ms C.struct_miqt_string = C.QKeySequence_listToString2(list_ma, (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QKeySequence) Delete() {
	C.QKeySequence_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QKeySequence) GoGC() {
	runtime.SetFinalizer(this, func(this *QKeySequence) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
