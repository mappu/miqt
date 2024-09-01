package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qchar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLatin1Char struct {
	h *C.QLatin1Char
}

func (this *QLatin1Char) cPointer() *C.QLatin1Char {
	if this == nil {
		return nil
	}
	return this.h
}

func newQLatin1Char(h *C.QLatin1Char) *QLatin1Char {
	if h == nil {
		return nil
	}
	return &QLatin1Char{h: h}
}

func newQLatin1Char_U(h unsafe.Pointer) *QLatin1Char {
	return newQLatin1Char((*C.QLatin1Char)(h))
}

// NewQLatin1Char constructs a new QLatin1Char object.
func NewQLatin1Char(c byte) *QLatin1Char {
	ret := C.QLatin1Char_new((C.char)(c))
	return newQLatin1Char(ret)
}

// NewQLatin1Char2 constructs a new QLatin1Char object.
func NewQLatin1Char2(param1 *QLatin1Char) *QLatin1Char {
	ret := C.QLatin1Char_new2(param1.cPointer())
	return newQLatin1Char(ret)
}

func (this *QLatin1Char) ToLatin1() byte {
	ret := C.QLatin1Char_ToLatin1(this.h)
	return (byte)(ret)
}

func (this *QLatin1Char) Unicode() uint16 {
	ret := C.QLatin1Char_Unicode(this.h)
	return (uint16)(ret)
}

func (this *QLatin1Char) Delete() {
	C.QLatin1Char_Delete(this.h)
}

type QChar struct {
	h *C.QChar
}

func (this *QChar) cPointer() *C.QChar {
	if this == nil {
		return nil
	}
	return this.h
}

func newQChar(h *C.QChar) *QChar {
	if h == nil {
		return nil
	}
	return &QChar{h: h}
}

func newQChar_U(h unsafe.Pointer) *QChar {
	return newQChar((*C.QChar)(h))
}

// NewQChar constructs a new QChar object.
func NewQChar() *QChar {
	ret := C.QChar_new()
	return newQChar(ret)
}

// NewQChar2 constructs a new QChar object.
func NewQChar2(rc uint16) *QChar {
	ret := C.QChar_new2((C.uint16_t)(rc))
	return newQChar(ret)
}

// NewQChar3 constructs a new QChar object.
func NewQChar3(c byte, r byte) *QChar {
	ret := C.QChar_new3((C.uchar)(c), (C.uchar)(r))
	return newQChar(ret)
}

// NewQChar4 constructs a new QChar object.
func NewQChar4(rc int16) *QChar {
	ret := C.QChar_new4((C.int16_t)(rc))
	return newQChar(ret)
}

// NewQChar5 constructs a new QChar object.
func NewQChar5(rc uint) *QChar {
	ret := C.QChar_new5((C.uint)(rc))
	return newQChar(ret)
}

// NewQChar6 constructs a new QChar object.
func NewQChar6(rc int) *QChar {
	ret := C.QChar_new6((C.int)(rc))
	return newQChar(ret)
}

// NewQChar7 constructs a new QChar object.
func NewQChar7(s uintptr) *QChar {
	ret := C.QChar_new7((C.uintptr_t)(s))
	return newQChar(ret)
}

// NewQChar8 constructs a new QChar object.
func NewQChar8(ch QLatin1Char) *QChar {
	ret := C.QChar_new8(ch.cPointer())
	return newQChar(ret)
}

// NewQChar9 constructs a new QChar object.
func NewQChar9(c byte) *QChar {
	ret := C.QChar_new9((C.char)(c))
	return newQChar(ret)
}

// NewQChar10 constructs a new QChar object.
func NewQChar10(c byte) *QChar {
	ret := C.QChar_new10((C.uchar)(c))
	return newQChar(ret)
}

// NewQChar11 constructs a new QChar object.
func NewQChar11(param1 *QChar) *QChar {
	ret := C.QChar_new11(param1.cPointer())
	return newQChar(ret)
}

func (this *QChar) Category() uintptr {
	ret := C.QChar_Category(this.h)
	return (uintptr)(ret)
}

func (this *QChar) Direction() uintptr {
	ret := C.QChar_Direction(this.h)
	return (uintptr)(ret)
}

func (this *QChar) JoiningType() uintptr {
	ret := C.QChar_JoiningType(this.h)
	return (uintptr)(ret)
}

func (this *QChar) Joining() uintptr {
	ret := C.QChar_Joining(this.h)
	return (uintptr)(ret)
}

func (this *QChar) CombiningClass() byte {
	ret := C.QChar_CombiningClass(this.h)
	return (byte)(ret)
}

func (this *QChar) MirroredChar() *QChar {
	ret := C.QChar_MirroredChar(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QChar) HasMirrored() bool {
	ret := C.QChar_HasMirrored(this.h)
	return (bool)(ret)
}

func (this *QChar) Decomposition() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QChar_Decomposition(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QChar) DecompositionTag() uintptr {
	ret := C.QChar_DecompositionTag(this.h)
	return (uintptr)(ret)
}

func (this *QChar) DigitValue() int {
	ret := C.QChar_DigitValue(this.h)
	return (int)(ret)
}

func (this *QChar) ToLower() *QChar {
	ret := C.QChar_ToLower(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QChar) ToUpper() *QChar {
	ret := C.QChar_ToUpper(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QChar) ToTitleCase() *QChar {
	ret := C.QChar_ToTitleCase(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QChar) ToCaseFolded() *QChar {
	ret := C.QChar_ToCaseFolded(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QChar) Script() uintptr {
	ret := C.QChar_Script(this.h)
	return (uintptr)(ret)
}

func (this *QChar) UnicodeVersion() uintptr {
	ret := C.QChar_UnicodeVersion(this.h)
	return (uintptr)(ret)
}

func (this *QChar) ToLatin1() byte {
	ret := C.QChar_ToLatin1(this.h)
	return (byte)(ret)
}

func (this *QChar) Unicode() uint16 {
	ret := C.QChar_Unicode(this.h)
	return (uint16)(ret)
}

func QChar_FromLatin1(c byte) *QChar {
	ret := C.QChar_FromLatin1((C.char)(c))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QChar) IsNull() bool {
	ret := C.QChar_IsNull(this.h)
	return (bool)(ret)
}

func (this *QChar) IsPrint() bool {
	ret := C.QChar_IsPrint(this.h)
	return (bool)(ret)
}

func (this *QChar) IsSpace() bool {
	ret := C.QChar_IsSpace(this.h)
	return (bool)(ret)
}

func (this *QChar) IsMark() bool {
	ret := C.QChar_IsMark(this.h)
	return (bool)(ret)
}

func (this *QChar) IsPunct() bool {
	ret := C.QChar_IsPunct(this.h)
	return (bool)(ret)
}

func (this *QChar) IsSymbol() bool {
	ret := C.QChar_IsSymbol(this.h)
	return (bool)(ret)
}

func (this *QChar) IsLetter() bool {
	ret := C.QChar_IsLetter(this.h)
	return (bool)(ret)
}

func (this *QChar) IsNumber() bool {
	ret := C.QChar_IsNumber(this.h)
	return (bool)(ret)
}

func (this *QChar) IsLetterOrNumber() bool {
	ret := C.QChar_IsLetterOrNumber(this.h)
	return (bool)(ret)
}

func (this *QChar) IsDigit() bool {
	ret := C.QChar_IsDigit(this.h)
	return (bool)(ret)
}

func (this *QChar) IsLower() bool {
	ret := C.QChar_IsLower(this.h)
	return (bool)(ret)
}

func (this *QChar) IsUpper() bool {
	ret := C.QChar_IsUpper(this.h)
	return (bool)(ret)
}

func (this *QChar) IsTitleCase() bool {
	ret := C.QChar_IsTitleCase(this.h)
	return (bool)(ret)
}

func (this *QChar) IsNonCharacter() bool {
	ret := C.QChar_IsNonCharacter(this.h)
	return (bool)(ret)
}

func (this *QChar) IsHighSurrogate() bool {
	ret := C.QChar_IsHighSurrogate(this.h)
	return (bool)(ret)
}

func (this *QChar) IsLowSurrogate() bool {
	ret := C.QChar_IsLowSurrogate(this.h)
	return (bool)(ret)
}

func (this *QChar) IsSurrogate() bool {
	ret := C.QChar_IsSurrogate(this.h)
	return (bool)(ret)
}

func (this *QChar) Cell() byte {
	ret := C.QChar_Cell(this.h)
	return (byte)(ret)
}

func (this *QChar) Row() byte {
	ret := C.QChar_Row(this.h)
	return (byte)(ret)
}

func (this *QChar) SetCell(acell byte) {
	C.QChar_SetCell(this.h, (C.uchar)(acell))
}

func (this *QChar) SetRow(arow byte) {
	C.QChar_SetRow(this.h, (C.uchar)(arow))
}

func QChar_IsNonCharacterWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsNonCharacterWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_IsHighSurrogateWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsHighSurrogateWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_IsLowSurrogateWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsLowSurrogateWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_IsSurrogateWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsSurrogateWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_RequiresSurrogates(ucs4 uint) bool {
	ret := C.QChar_RequiresSurrogates((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_SurrogateToUcs4(high uint16, low uint16) uint {
	ret := C.QChar_SurrogateToUcs4((C.uint16_t)(high), (C.uint16_t)(low))
	return (uint)(ret)
}

func QChar_SurrogateToUcs42(high QChar, low QChar) uint {
	ret := C.QChar_SurrogateToUcs42(high.cPointer(), low.cPointer())
	return (uint)(ret)
}

func QChar_HighSurrogate(ucs4 uint) uint16 {
	ret := C.QChar_HighSurrogate((C.uint)(ucs4))
	return (uint16)(ret)
}

func QChar_LowSurrogate(ucs4 uint) uint16 {
	ret := C.QChar_LowSurrogate((C.uint)(ucs4))
	return (uint16)(ret)
}

func QChar_CategoryWithUcs4(ucs4 uint) uintptr {
	ret := C.QChar_CategoryWithUcs4((C.uint)(ucs4))
	return (uintptr)(ret)
}

func QChar_DirectionWithUcs4(ucs4 uint) uintptr {
	ret := C.QChar_DirectionWithUcs4((C.uint)(ucs4))
	return (uintptr)(ret)
}

func QChar_JoiningTypeWithUcs4(ucs4 uint) uintptr {
	ret := C.QChar_JoiningTypeWithUcs4((C.uint)(ucs4))
	return (uintptr)(ret)
}

func QChar_JoiningWithUcs4(ucs4 uint) uintptr {
	ret := C.QChar_JoiningWithUcs4((C.uint)(ucs4))
	return (uintptr)(ret)
}

func QChar_CombiningClassWithUcs4(ucs4 uint) byte {
	ret := C.QChar_CombiningClassWithUcs4((C.uint)(ucs4))
	return (byte)(ret)
}

func QChar_MirroredCharWithUcs4(ucs4 uint) uint {
	ret := C.QChar_MirroredCharWithUcs4((C.uint)(ucs4))
	return (uint)(ret)
}

func QChar_HasMirroredWithUcs4(ucs4 uint) bool {
	ret := C.QChar_HasMirroredWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_DecompositionWithUcs4(ucs4 uint) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QChar_DecompositionWithUcs4((C.uint)(ucs4), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QChar_DecompositionTagWithUcs4(ucs4 uint) uintptr {
	ret := C.QChar_DecompositionTagWithUcs4((C.uint)(ucs4))
	return (uintptr)(ret)
}

func QChar_DigitValueWithUcs4(ucs4 uint) int {
	ret := C.QChar_DigitValueWithUcs4((C.uint)(ucs4))
	return (int)(ret)
}

func QChar_ToLowerWithUcs4(ucs4 uint) uint {
	ret := C.QChar_ToLowerWithUcs4((C.uint)(ucs4))
	return (uint)(ret)
}

func QChar_ToUpperWithUcs4(ucs4 uint) uint {
	ret := C.QChar_ToUpperWithUcs4((C.uint)(ucs4))
	return (uint)(ret)
}

func QChar_ToTitleCaseWithUcs4(ucs4 uint) uint {
	ret := C.QChar_ToTitleCaseWithUcs4((C.uint)(ucs4))
	return (uint)(ret)
}

func QChar_ToCaseFoldedWithUcs4(ucs4 uint) uint {
	ret := C.QChar_ToCaseFoldedWithUcs4((C.uint)(ucs4))
	return (uint)(ret)
}

func QChar_ScriptWithUcs4(ucs4 uint) uintptr {
	ret := C.QChar_ScriptWithUcs4((C.uint)(ucs4))
	return (uintptr)(ret)
}

func QChar_UnicodeVersionWithUcs4(ucs4 uint) uintptr {
	ret := C.QChar_UnicodeVersionWithUcs4((C.uint)(ucs4))
	return (uintptr)(ret)
}

func QChar_CurrentUnicodeVersion() uintptr {
	ret := C.QChar_CurrentUnicodeVersion()
	return (uintptr)(ret)
}

func QChar_IsPrintWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsPrintWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_IsSpaceWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsSpaceWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_IsMarkWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsMarkWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_IsPunctWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsPunctWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_IsSymbolWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsSymbolWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_IsLetterWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsLetterWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_IsNumberWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsNumberWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_IsLetterOrNumberWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsLetterOrNumberWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_IsDigitWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsDigitWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_IsLowerWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsLowerWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_IsUpperWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsUpperWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func QChar_IsTitleCaseWithUcs4(ucs4 uint) bool {
	ret := C.QChar_IsTitleCaseWithUcs4((C.uint)(ucs4))
	return (bool)(ret)
}

func (this *QChar) Delete() {
	C.QChar_Delete(this.h)
}
