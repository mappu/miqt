package qt

/*

#include "gen_qchar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QChar__SpecialCharacter int

const (
	QChar__Null                       QChar__SpecialCharacter = 0
	QChar__Tabulation                 QChar__SpecialCharacter = 9
	QChar__LineFeed                   QChar__SpecialCharacter = 10
	QChar__FormFeed                   QChar__SpecialCharacter = 12
	QChar__CarriageReturn             QChar__SpecialCharacter = 13
	QChar__Space                      QChar__SpecialCharacter = 32
	QChar__Nbsp                       QChar__SpecialCharacter = 160
	QChar__SoftHyphen                 QChar__SpecialCharacter = 173
	QChar__ReplacementCharacter       QChar__SpecialCharacter = 65533
	QChar__ObjectReplacementCharacter QChar__SpecialCharacter = 65532
	QChar__ByteOrderMark              QChar__SpecialCharacter = 65279
	QChar__ByteOrderSwapped           QChar__SpecialCharacter = 65534
	QChar__ParagraphSeparator         QChar__SpecialCharacter = 8233
	QChar__LineSeparator              QChar__SpecialCharacter = 8232
	QChar__LastValidCodePoint         QChar__SpecialCharacter = 1114111
)

type QChar__Category int

const (
	QChar__Mark_NonSpacing          QChar__Category = 0
	QChar__Mark_SpacingCombining    QChar__Category = 1
	QChar__Mark_Enclosing           QChar__Category = 2
	QChar__Number_DecimalDigit      QChar__Category = 3
	QChar__Number_Letter            QChar__Category = 4
	QChar__Number_Other             QChar__Category = 5
	QChar__Separator_Space          QChar__Category = 6
	QChar__Separator_Line           QChar__Category = 7
	QChar__Separator_Paragraph      QChar__Category = 8
	QChar__Other_Control            QChar__Category = 9
	QChar__Other_Format             QChar__Category = 10
	QChar__Other_Surrogate          QChar__Category = 11
	QChar__Other_PrivateUse         QChar__Category = 12
	QChar__Other_NotAssigned        QChar__Category = 13
	QChar__Letter_Uppercase         QChar__Category = 14
	QChar__Letter_Lowercase         QChar__Category = 15
	QChar__Letter_Titlecase         QChar__Category = 16
	QChar__Letter_Modifier          QChar__Category = 17
	QChar__Letter_Other             QChar__Category = 18
	QChar__Punctuation_Connector    QChar__Category = 19
	QChar__Punctuation_Dash         QChar__Category = 20
	QChar__Punctuation_Open         QChar__Category = 21
	QChar__Punctuation_Close        QChar__Category = 22
	QChar__Punctuation_InitialQuote QChar__Category = 23
	QChar__Punctuation_FinalQuote   QChar__Category = 24
	QChar__Punctuation_Other        QChar__Category = 25
	QChar__Symbol_Math              QChar__Category = 26
	QChar__Symbol_Currency          QChar__Category = 27
	QChar__Symbol_Modifier          QChar__Category = 28
	QChar__Symbol_Other             QChar__Category = 29
)

type QChar__Script int

const (
	QChar__Script_Unknown               QChar__Script = 0
	QChar__Script_Inherited             QChar__Script = 1
	QChar__Script_Common                QChar__Script = 2
	QChar__Script_Latin                 QChar__Script = 3
	QChar__Script_Greek                 QChar__Script = 4
	QChar__Script_Cyrillic              QChar__Script = 5
	QChar__Script_Armenian              QChar__Script = 6
	QChar__Script_Hebrew                QChar__Script = 7
	QChar__Script_Arabic                QChar__Script = 8
	QChar__Script_Syriac                QChar__Script = 9
	QChar__Script_Thaana                QChar__Script = 10
	QChar__Script_Devanagari            QChar__Script = 11
	QChar__Script_Bengali               QChar__Script = 12
	QChar__Script_Gurmukhi              QChar__Script = 13
	QChar__Script_Gujarati              QChar__Script = 14
	QChar__Script_Oriya                 QChar__Script = 15
	QChar__Script_Tamil                 QChar__Script = 16
	QChar__Script_Telugu                QChar__Script = 17
	QChar__Script_Kannada               QChar__Script = 18
	QChar__Script_Malayalam             QChar__Script = 19
	QChar__Script_Sinhala               QChar__Script = 20
	QChar__Script_Thai                  QChar__Script = 21
	QChar__Script_Lao                   QChar__Script = 22
	QChar__Script_Tibetan               QChar__Script = 23
	QChar__Script_Myanmar               QChar__Script = 24
	QChar__Script_Georgian              QChar__Script = 25
	QChar__Script_Hangul                QChar__Script = 26
	QChar__Script_Ethiopic              QChar__Script = 27
	QChar__Script_Cherokee              QChar__Script = 28
	QChar__Script_CanadianAboriginal    QChar__Script = 29
	QChar__Script_Ogham                 QChar__Script = 30
	QChar__Script_Runic                 QChar__Script = 31
	QChar__Script_Khmer                 QChar__Script = 32
	QChar__Script_Mongolian             QChar__Script = 33
	QChar__Script_Hiragana              QChar__Script = 34
	QChar__Script_Katakana              QChar__Script = 35
	QChar__Script_Bopomofo              QChar__Script = 36
	QChar__Script_Han                   QChar__Script = 37
	QChar__Script_Yi                    QChar__Script = 38
	QChar__Script_OldItalic             QChar__Script = 39
	QChar__Script_Gothic                QChar__Script = 40
	QChar__Script_Deseret               QChar__Script = 41
	QChar__Script_Tagalog               QChar__Script = 42
	QChar__Script_Hanunoo               QChar__Script = 43
	QChar__Script_Buhid                 QChar__Script = 44
	QChar__Script_Tagbanwa              QChar__Script = 45
	QChar__Script_Coptic                QChar__Script = 46
	QChar__Script_Limbu                 QChar__Script = 47
	QChar__Script_TaiLe                 QChar__Script = 48
	QChar__Script_LinearB               QChar__Script = 49
	QChar__Script_Ugaritic              QChar__Script = 50
	QChar__Script_Shavian               QChar__Script = 51
	QChar__Script_Osmanya               QChar__Script = 52
	QChar__Script_Cypriot               QChar__Script = 53
	QChar__Script_Braille               QChar__Script = 54
	QChar__Script_Buginese              QChar__Script = 55
	QChar__Script_NewTaiLue             QChar__Script = 56
	QChar__Script_Glagolitic            QChar__Script = 57
	QChar__Script_Tifinagh              QChar__Script = 58
	QChar__Script_SylotiNagri           QChar__Script = 59
	QChar__Script_OldPersian            QChar__Script = 60
	QChar__Script_Kharoshthi            QChar__Script = 61
	QChar__Script_Balinese              QChar__Script = 62
	QChar__Script_Cuneiform             QChar__Script = 63
	QChar__Script_Phoenician            QChar__Script = 64
	QChar__Script_PhagsPa               QChar__Script = 65
	QChar__Script_Nko                   QChar__Script = 66
	QChar__Script_Sundanese             QChar__Script = 67
	QChar__Script_Lepcha                QChar__Script = 68
	QChar__Script_OlChiki               QChar__Script = 69
	QChar__Script_Vai                   QChar__Script = 70
	QChar__Script_Saurashtra            QChar__Script = 71
	QChar__Script_KayahLi               QChar__Script = 72
	QChar__Script_Rejang                QChar__Script = 73
	QChar__Script_Lycian                QChar__Script = 74
	QChar__Script_Carian                QChar__Script = 75
	QChar__Script_Lydian                QChar__Script = 76
	QChar__Script_Cham                  QChar__Script = 77
	QChar__Script_TaiTham               QChar__Script = 78
	QChar__Script_TaiViet               QChar__Script = 79
	QChar__Script_Avestan               QChar__Script = 80
	QChar__Script_EgyptianHieroglyphs   QChar__Script = 81
	QChar__Script_Samaritan             QChar__Script = 82
	QChar__Script_Lisu                  QChar__Script = 83
	QChar__Script_Bamum                 QChar__Script = 84
	QChar__Script_Javanese              QChar__Script = 85
	QChar__Script_MeeteiMayek           QChar__Script = 86
	QChar__Script_ImperialAramaic       QChar__Script = 87
	QChar__Script_OldSouthArabian       QChar__Script = 88
	QChar__Script_InscriptionalParthian QChar__Script = 89
	QChar__Script_InscriptionalPahlavi  QChar__Script = 90
	QChar__Script_OldTurkic             QChar__Script = 91
	QChar__Script_Kaithi                QChar__Script = 92
	QChar__Script_Batak                 QChar__Script = 93
	QChar__Script_Brahmi                QChar__Script = 94
	QChar__Script_Mandaic               QChar__Script = 95
	QChar__Script_Chakma                QChar__Script = 96
	QChar__Script_MeroiticCursive       QChar__Script = 97
	QChar__Script_MeroiticHieroglyphs   QChar__Script = 98
	QChar__Script_Miao                  QChar__Script = 99
	QChar__Script_Sharada               QChar__Script = 100
	QChar__Script_SoraSompeng           QChar__Script = 101
	QChar__Script_Takri                 QChar__Script = 102
	QChar__Script_CaucasianAlbanian     QChar__Script = 103
	QChar__Script_BassaVah              QChar__Script = 104
	QChar__Script_Duployan              QChar__Script = 105
	QChar__Script_Elbasan               QChar__Script = 106
	QChar__Script_Grantha               QChar__Script = 107
	QChar__Script_PahawhHmong           QChar__Script = 108
	QChar__Script_Khojki                QChar__Script = 109
	QChar__Script_LinearA               QChar__Script = 110
	QChar__Script_Mahajani              QChar__Script = 111
	QChar__Script_Manichaean            QChar__Script = 112
	QChar__Script_MendeKikakui          QChar__Script = 113
	QChar__Script_Modi                  QChar__Script = 114
	QChar__Script_Mro                   QChar__Script = 115
	QChar__Script_OldNorthArabian       QChar__Script = 116
	QChar__Script_Nabataean             QChar__Script = 117
	QChar__Script_Palmyrene             QChar__Script = 118
	QChar__Script_PauCinHau             QChar__Script = 119
	QChar__Script_OldPermic             QChar__Script = 120
	QChar__Script_PsalterPahlavi        QChar__Script = 121
	QChar__Script_Siddham               QChar__Script = 122
	QChar__Script_Khudawadi             QChar__Script = 123
	QChar__Script_Tirhuta               QChar__Script = 124
	QChar__Script_WarangCiti            QChar__Script = 125
	QChar__Script_Ahom                  QChar__Script = 126
	QChar__Script_AnatolianHieroglyphs  QChar__Script = 127
	QChar__Script_Hatran                QChar__Script = 128
	QChar__Script_Multani               QChar__Script = 129
	QChar__Script_OldHungarian          QChar__Script = 130
	QChar__Script_SignWriting           QChar__Script = 131
	QChar__Script_Adlam                 QChar__Script = 132
	QChar__Script_Bhaiksuki             QChar__Script = 133
	QChar__Script_Marchen               QChar__Script = 134
	QChar__Script_Newa                  QChar__Script = 135
	QChar__Script_Osage                 QChar__Script = 136
	QChar__Script_Tangut                QChar__Script = 137
	QChar__Script_MasaramGondi          QChar__Script = 138
	QChar__Script_Nushu                 QChar__Script = 139
	QChar__Script_Soyombo               QChar__Script = 140
	QChar__Script_ZanabazarSquare       QChar__Script = 141
	QChar__Script_Dogra                 QChar__Script = 142
	QChar__Script_GunjalaGondi          QChar__Script = 143
	QChar__Script_HanifiRohingya        QChar__Script = 144
	QChar__Script_Makasar               QChar__Script = 145
	QChar__Script_Medefaidrin           QChar__Script = 146
	QChar__Script_OldSogdian            QChar__Script = 147
	QChar__Script_Sogdian               QChar__Script = 148
	QChar__Script_Elymaic               QChar__Script = 149
	QChar__Script_Nandinagari           QChar__Script = 150
	QChar__Script_NyiakengPuachueHmong  QChar__Script = 151
	QChar__Script_Wancho                QChar__Script = 152
	QChar__Script_Chorasmian            QChar__Script = 153
	QChar__Script_DivesAkuru            QChar__Script = 154
	QChar__Script_KhitanSmallScript     QChar__Script = 155
	QChar__Script_Yezidi                QChar__Script = 156
	QChar__ScriptCount                  QChar__Script = 157
)

type QChar__Direction int

const (
	QChar__DirL   QChar__Direction = 0
	QChar__DirR   QChar__Direction = 1
	QChar__DirEN  QChar__Direction = 2
	QChar__DirES  QChar__Direction = 3
	QChar__DirET  QChar__Direction = 4
	QChar__DirAN  QChar__Direction = 5
	QChar__DirCS  QChar__Direction = 6
	QChar__DirB   QChar__Direction = 7
	QChar__DirS   QChar__Direction = 8
	QChar__DirWS  QChar__Direction = 9
	QChar__DirON  QChar__Direction = 10
	QChar__DirLRE QChar__Direction = 11
	QChar__DirLRO QChar__Direction = 12
	QChar__DirAL  QChar__Direction = 13
	QChar__DirRLE QChar__Direction = 14
	QChar__DirRLO QChar__Direction = 15
	QChar__DirPDF QChar__Direction = 16
	QChar__DirNSM QChar__Direction = 17
	QChar__DirBN  QChar__Direction = 18
	QChar__DirLRI QChar__Direction = 19
	QChar__DirRLI QChar__Direction = 20
	QChar__DirFSI QChar__Direction = 21
	QChar__DirPDI QChar__Direction = 22
)

type QChar__Decomposition int

const (
	QChar__NoDecomposition QChar__Decomposition = 0
	QChar__Canonical       QChar__Decomposition = 1
	QChar__Font            QChar__Decomposition = 2
	QChar__NoBreak         QChar__Decomposition = 3
	QChar__Initial         QChar__Decomposition = 4
	QChar__Medial          QChar__Decomposition = 5
	QChar__Final           QChar__Decomposition = 6
	QChar__Isolated        QChar__Decomposition = 7
	QChar__Circle          QChar__Decomposition = 8
	QChar__Super           QChar__Decomposition = 9
	QChar__Sub             QChar__Decomposition = 10
	QChar__Vertical        QChar__Decomposition = 11
	QChar__Wide            QChar__Decomposition = 12
	QChar__Narrow          QChar__Decomposition = 13
	QChar__Small           QChar__Decomposition = 14
	QChar__Square          QChar__Decomposition = 15
	QChar__Compat          QChar__Decomposition = 16
	QChar__Fraction        QChar__Decomposition = 17
)

type QChar__JoiningType int

const (
	QChar__Joining_None        QChar__JoiningType = 0
	QChar__Joining_Causing     QChar__JoiningType = 1
	QChar__Joining_Dual        QChar__JoiningType = 2
	QChar__Joining_Right       QChar__JoiningType = 3
	QChar__Joining_Left        QChar__JoiningType = 4
	QChar__Joining_Transparent QChar__JoiningType = 5
)

type QChar__Joining int

const (
	QChar__OtherJoining QChar__Joining = 0
	QChar__Dual         QChar__Joining = 1
	QChar__Right        QChar__Joining = 2
	QChar__Center       QChar__Joining = 3
)

type QChar__CombiningClass int

const (
	QChar__Combining_BelowLeftAttached  QChar__CombiningClass = 200
	QChar__Combining_BelowAttached      QChar__CombiningClass = 202
	QChar__Combining_BelowRightAttached QChar__CombiningClass = 204
	QChar__Combining_LeftAttached       QChar__CombiningClass = 208
	QChar__Combining_RightAttached      QChar__CombiningClass = 210
	QChar__Combining_AboveLeftAttached  QChar__CombiningClass = 212
	QChar__Combining_AboveAttached      QChar__CombiningClass = 214
	QChar__Combining_AboveRightAttached QChar__CombiningClass = 216
	QChar__Combining_BelowLeft          QChar__CombiningClass = 218
	QChar__Combining_Below              QChar__CombiningClass = 220
	QChar__Combining_BelowRight         QChar__CombiningClass = 222
	QChar__Combining_Left               QChar__CombiningClass = 224
	QChar__Combining_Right              QChar__CombiningClass = 226
	QChar__Combining_AboveLeft          QChar__CombiningClass = 228
	QChar__Combining_Above              QChar__CombiningClass = 230
	QChar__Combining_AboveRight         QChar__CombiningClass = 232
	QChar__Combining_DoubleBelow        QChar__CombiningClass = 233
	QChar__Combining_DoubleAbove        QChar__CombiningClass = 234
	QChar__Combining_IotaSubscript      QChar__CombiningClass = 240
)

type QChar__UnicodeVersion int

const (
	QChar__Unicode_Unassigned QChar__UnicodeVersion = 0
	QChar__Unicode_1_1        QChar__UnicodeVersion = 1
	QChar__Unicode_2_0        QChar__UnicodeVersion = 2
	QChar__Unicode_2_1_2      QChar__UnicodeVersion = 3
	QChar__Unicode_3_0        QChar__UnicodeVersion = 4
	QChar__Unicode_3_1        QChar__UnicodeVersion = 5
	QChar__Unicode_3_2        QChar__UnicodeVersion = 6
	QChar__Unicode_4_0        QChar__UnicodeVersion = 7
	QChar__Unicode_4_1        QChar__UnicodeVersion = 8
	QChar__Unicode_5_0        QChar__UnicodeVersion = 9
	QChar__Unicode_5_1        QChar__UnicodeVersion = 10
	QChar__Unicode_5_2        QChar__UnicodeVersion = 11
	QChar__Unicode_6_0        QChar__UnicodeVersion = 12
	QChar__Unicode_6_1        QChar__UnicodeVersion = 13
	QChar__Unicode_6_2        QChar__UnicodeVersion = 14
	QChar__Unicode_6_3        QChar__UnicodeVersion = 15
	QChar__Unicode_7_0        QChar__UnicodeVersion = 16
	QChar__Unicode_8_0        QChar__UnicodeVersion = 17
	QChar__Unicode_9_0        QChar__UnicodeVersion = 18
	QChar__Unicode_10_0       QChar__UnicodeVersion = 19
	QChar__Unicode_11_0       QChar__UnicodeVersion = 20
	QChar__Unicode_12_0       QChar__UnicodeVersion = 21
	QChar__Unicode_12_1       QChar__UnicodeVersion = 22
	QChar__Unicode_13_0       QChar__UnicodeVersion = 23
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
	return (byte)(C.QLatin1Char_ToLatin1(this.h))
}

func (this *QLatin1Char) Unicode() uint16 {
	return (uint16)(C.QLatin1Char_Unicode(this.h))
}

// Delete this object from C++ memory.
func (this *QLatin1Char) Delete() {
	C.QLatin1Char_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLatin1Char) GoGC() {
	runtime.SetFinalizer(this, func(this *QLatin1Char) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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
func NewQChar7(s QChar__SpecialCharacter) *QChar {
	ret := C.QChar_new7((C.int)(s))
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

func (this *QChar) Category() QChar__Category {
	return (QChar__Category)(C.QChar_Category(this.h))
}

func (this *QChar) Direction() QChar__Direction {
	return (QChar__Direction)(C.QChar_Direction(this.h))
}

func (this *QChar) JoiningType() QChar__JoiningType {
	return (QChar__JoiningType)(C.QChar_JoiningType(this.h))
}

func (this *QChar) Joining() QChar__Joining {
	return (QChar__Joining)(C.QChar_Joining(this.h))
}

func (this *QChar) CombiningClass() byte {
	return (byte)(C.QChar_CombiningClass(this.h))
}

func (this *QChar) MirroredChar() *QChar {
	_ret := C.QChar_MirroredChar(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChar) HasMirrored() bool {
	return (bool)(C.QChar_HasMirrored(this.h))
}

func (this *QChar) Decomposition() string {
	var _ms *C.struct_miqt_string = C.QChar_Decomposition(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QChar) DecompositionTag() QChar__Decomposition {
	return (QChar__Decomposition)(C.QChar_DecompositionTag(this.h))
}

func (this *QChar) DigitValue() int {
	return (int)(C.QChar_DigitValue(this.h))
}

func (this *QChar) ToLower() *QChar {
	_ret := C.QChar_ToLower(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChar) ToUpper() *QChar {
	_ret := C.QChar_ToUpper(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChar) ToTitleCase() *QChar {
	_ret := C.QChar_ToTitleCase(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChar) ToCaseFolded() *QChar {
	_ret := C.QChar_ToCaseFolded(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChar) Script() QChar__Script {
	return (QChar__Script)(C.QChar_Script(this.h))
}

func (this *QChar) UnicodeVersion() QChar__UnicodeVersion {
	return (QChar__UnicodeVersion)(C.QChar_UnicodeVersion(this.h))
}

func (this *QChar) ToLatin1() byte {
	return (byte)(C.QChar_ToLatin1(this.h))
}

func (this *QChar) Unicode() uint16 {
	return (uint16)(C.QChar_Unicode(this.h))
}

func QChar_FromLatin1(c byte) *QChar {
	_ret := C.QChar_FromLatin1((C.char)(c))
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QChar) IsNull() bool {
	return (bool)(C.QChar_IsNull(this.h))
}

func (this *QChar) IsPrint() bool {
	return (bool)(C.QChar_IsPrint(this.h))
}

func (this *QChar) IsSpace() bool {
	return (bool)(C.QChar_IsSpace(this.h))
}

func (this *QChar) IsMark() bool {
	return (bool)(C.QChar_IsMark(this.h))
}

func (this *QChar) IsPunct() bool {
	return (bool)(C.QChar_IsPunct(this.h))
}

func (this *QChar) IsSymbol() bool {
	return (bool)(C.QChar_IsSymbol(this.h))
}

func (this *QChar) IsLetter() bool {
	return (bool)(C.QChar_IsLetter(this.h))
}

func (this *QChar) IsNumber() bool {
	return (bool)(C.QChar_IsNumber(this.h))
}

func (this *QChar) IsLetterOrNumber() bool {
	return (bool)(C.QChar_IsLetterOrNumber(this.h))
}

func (this *QChar) IsDigit() bool {
	return (bool)(C.QChar_IsDigit(this.h))
}

func (this *QChar) IsLower() bool {
	return (bool)(C.QChar_IsLower(this.h))
}

func (this *QChar) IsUpper() bool {
	return (bool)(C.QChar_IsUpper(this.h))
}

func (this *QChar) IsTitleCase() bool {
	return (bool)(C.QChar_IsTitleCase(this.h))
}

func (this *QChar) IsNonCharacter() bool {
	return (bool)(C.QChar_IsNonCharacter(this.h))
}

func (this *QChar) IsHighSurrogate() bool {
	return (bool)(C.QChar_IsHighSurrogate(this.h))
}

func (this *QChar) IsLowSurrogate() bool {
	return (bool)(C.QChar_IsLowSurrogate(this.h))
}

func (this *QChar) IsSurrogate() bool {
	return (bool)(C.QChar_IsSurrogate(this.h))
}

func (this *QChar) Cell() byte {
	return (byte)(C.QChar_Cell(this.h))
}

func (this *QChar) Row() byte {
	return (byte)(C.QChar_Row(this.h))
}

func (this *QChar) SetCell(acell byte) {
	C.QChar_SetCell(this.h, (C.uchar)(acell))
}

func (this *QChar) SetRow(arow byte) {
	C.QChar_SetRow(this.h, (C.uchar)(arow))
}

func QChar_IsNonCharacterWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsNonCharacterWithUcs4((C.uint)(ucs4)))
}

func QChar_IsHighSurrogateWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsHighSurrogateWithUcs4((C.uint)(ucs4)))
}

func QChar_IsLowSurrogateWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsLowSurrogateWithUcs4((C.uint)(ucs4)))
}

func QChar_IsSurrogateWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsSurrogateWithUcs4((C.uint)(ucs4)))
}

func QChar_RequiresSurrogates(ucs4 uint) bool {
	return (bool)(C.QChar_RequiresSurrogates((C.uint)(ucs4)))
}

func QChar_SurrogateToUcs4(high uint16, low uint16) uint {
	return (uint)(C.QChar_SurrogateToUcs4((C.uint16_t)(high), (C.uint16_t)(low)))
}

func QChar_SurrogateToUcs42(high QChar, low QChar) uint {
	return (uint)(C.QChar_SurrogateToUcs42(high.cPointer(), low.cPointer()))
}

func QChar_HighSurrogate(ucs4 uint) uint16 {
	return (uint16)(C.QChar_HighSurrogate((C.uint)(ucs4)))
}

func QChar_LowSurrogate(ucs4 uint) uint16 {
	return (uint16)(C.QChar_LowSurrogate((C.uint)(ucs4)))
}

func QChar_CategoryWithUcs4(ucs4 uint) QChar__Category {
	return (QChar__Category)(C.QChar_CategoryWithUcs4((C.uint)(ucs4)))
}

func QChar_DirectionWithUcs4(ucs4 uint) QChar__Direction {
	return (QChar__Direction)(C.QChar_DirectionWithUcs4((C.uint)(ucs4)))
}

func QChar_JoiningTypeWithUcs4(ucs4 uint) QChar__JoiningType {
	return (QChar__JoiningType)(C.QChar_JoiningTypeWithUcs4((C.uint)(ucs4)))
}

func QChar_JoiningWithUcs4(ucs4 uint) QChar__Joining {
	return (QChar__Joining)(C.QChar_JoiningWithUcs4((C.uint)(ucs4)))
}

func QChar_CombiningClassWithUcs4(ucs4 uint) byte {
	return (byte)(C.QChar_CombiningClassWithUcs4((C.uint)(ucs4)))
}

func QChar_MirroredCharWithUcs4(ucs4 uint) uint {
	return (uint)(C.QChar_MirroredCharWithUcs4((C.uint)(ucs4)))
}

func QChar_HasMirroredWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_HasMirroredWithUcs4((C.uint)(ucs4)))
}

func QChar_DecompositionWithUcs4(ucs4 uint) string {
	var _ms *C.struct_miqt_string = C.QChar_DecompositionWithUcs4((C.uint)(ucs4))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QChar_DecompositionTagWithUcs4(ucs4 uint) QChar__Decomposition {
	return (QChar__Decomposition)(C.QChar_DecompositionTagWithUcs4((C.uint)(ucs4)))
}

func QChar_DigitValueWithUcs4(ucs4 uint) int {
	return (int)(C.QChar_DigitValueWithUcs4((C.uint)(ucs4)))
}

func QChar_ToLowerWithUcs4(ucs4 uint) uint {
	return (uint)(C.QChar_ToLowerWithUcs4((C.uint)(ucs4)))
}

func QChar_ToUpperWithUcs4(ucs4 uint) uint {
	return (uint)(C.QChar_ToUpperWithUcs4((C.uint)(ucs4)))
}

func QChar_ToTitleCaseWithUcs4(ucs4 uint) uint {
	return (uint)(C.QChar_ToTitleCaseWithUcs4((C.uint)(ucs4)))
}

func QChar_ToCaseFoldedWithUcs4(ucs4 uint) uint {
	return (uint)(C.QChar_ToCaseFoldedWithUcs4((C.uint)(ucs4)))
}

func QChar_ScriptWithUcs4(ucs4 uint) QChar__Script {
	return (QChar__Script)(C.QChar_ScriptWithUcs4((C.uint)(ucs4)))
}

func QChar_UnicodeVersionWithUcs4(ucs4 uint) QChar__UnicodeVersion {
	return (QChar__UnicodeVersion)(C.QChar_UnicodeVersionWithUcs4((C.uint)(ucs4)))
}

func QChar_CurrentUnicodeVersion() QChar__UnicodeVersion {
	return (QChar__UnicodeVersion)(C.QChar_CurrentUnicodeVersion())
}

func QChar_IsPrintWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsPrintWithUcs4((C.uint)(ucs4)))
}

func QChar_IsSpaceWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsSpaceWithUcs4((C.uint)(ucs4)))
}

func QChar_IsMarkWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsMarkWithUcs4((C.uint)(ucs4)))
}

func QChar_IsPunctWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsPunctWithUcs4((C.uint)(ucs4)))
}

func QChar_IsSymbolWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsSymbolWithUcs4((C.uint)(ucs4)))
}

func QChar_IsLetterWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsLetterWithUcs4((C.uint)(ucs4)))
}

func QChar_IsNumberWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsNumberWithUcs4((C.uint)(ucs4)))
}

func QChar_IsLetterOrNumberWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsLetterOrNumberWithUcs4((C.uint)(ucs4)))
}

func QChar_IsDigitWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsDigitWithUcs4((C.uint)(ucs4)))
}

func QChar_IsLowerWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsLowerWithUcs4((C.uint)(ucs4)))
}

func QChar_IsUpperWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsUpperWithUcs4((C.uint)(ucs4)))
}

func QChar_IsTitleCaseWithUcs4(ucs4 uint) bool {
	return (bool)(C.QChar_IsTitleCaseWithUcs4((C.uint)(ucs4)))
}

// Delete this object from C++ memory.
func (this *QChar) Delete() {
	C.QChar_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QChar) GoGC() {
	runtime.SetFinalizer(this, func(this *QChar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
