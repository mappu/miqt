package qt6

/*

#include "gen_qpagesize.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPageSize__PageSizeId int

const (
	QPageSize__Letter             QPageSize__PageSizeId = 0
	QPageSize__Legal              QPageSize__PageSizeId = 1
	QPageSize__Executive          QPageSize__PageSizeId = 2
	QPageSize__A0                 QPageSize__PageSizeId = 3
	QPageSize__A1                 QPageSize__PageSizeId = 4
	QPageSize__A2                 QPageSize__PageSizeId = 5
	QPageSize__A3                 QPageSize__PageSizeId = 6
	QPageSize__A4                 QPageSize__PageSizeId = 7
	QPageSize__A5                 QPageSize__PageSizeId = 8
	QPageSize__A6                 QPageSize__PageSizeId = 9
	QPageSize__A7                 QPageSize__PageSizeId = 10
	QPageSize__A8                 QPageSize__PageSizeId = 11
	QPageSize__A9                 QPageSize__PageSizeId = 12
	QPageSize__A10                QPageSize__PageSizeId = 13
	QPageSize__B0                 QPageSize__PageSizeId = 14
	QPageSize__B1                 QPageSize__PageSizeId = 15
	QPageSize__B2                 QPageSize__PageSizeId = 16
	QPageSize__B3                 QPageSize__PageSizeId = 17
	QPageSize__B4                 QPageSize__PageSizeId = 18
	QPageSize__B5                 QPageSize__PageSizeId = 19
	QPageSize__B6                 QPageSize__PageSizeId = 20
	QPageSize__B7                 QPageSize__PageSizeId = 21
	QPageSize__B8                 QPageSize__PageSizeId = 22
	QPageSize__B9                 QPageSize__PageSizeId = 23
	QPageSize__B10                QPageSize__PageSizeId = 24
	QPageSize__C5E                QPageSize__PageSizeId = 25
	QPageSize__Comm10E            QPageSize__PageSizeId = 26
	QPageSize__DLE                QPageSize__PageSizeId = 27
	QPageSize__Folio              QPageSize__PageSizeId = 28
	QPageSize__Ledger             QPageSize__PageSizeId = 29
	QPageSize__Tabloid            QPageSize__PageSizeId = 30
	QPageSize__Custom             QPageSize__PageSizeId = 31
	QPageSize__A3Extra            QPageSize__PageSizeId = 32
	QPageSize__A4Extra            QPageSize__PageSizeId = 33
	QPageSize__A4Plus             QPageSize__PageSizeId = 34
	QPageSize__A4Small            QPageSize__PageSizeId = 35
	QPageSize__A5Extra            QPageSize__PageSizeId = 36
	QPageSize__B5Extra            QPageSize__PageSizeId = 37
	QPageSize__JisB0              QPageSize__PageSizeId = 38
	QPageSize__JisB1              QPageSize__PageSizeId = 39
	QPageSize__JisB2              QPageSize__PageSizeId = 40
	QPageSize__JisB3              QPageSize__PageSizeId = 41
	QPageSize__JisB4              QPageSize__PageSizeId = 42
	QPageSize__JisB5              QPageSize__PageSizeId = 43
	QPageSize__JisB6              QPageSize__PageSizeId = 44
	QPageSize__JisB7              QPageSize__PageSizeId = 45
	QPageSize__JisB8              QPageSize__PageSizeId = 46
	QPageSize__JisB9              QPageSize__PageSizeId = 47
	QPageSize__JisB10             QPageSize__PageSizeId = 48
	QPageSize__AnsiC              QPageSize__PageSizeId = 49
	QPageSize__AnsiD              QPageSize__PageSizeId = 50
	QPageSize__AnsiE              QPageSize__PageSizeId = 51
	QPageSize__LegalExtra         QPageSize__PageSizeId = 52
	QPageSize__LetterExtra        QPageSize__PageSizeId = 53
	QPageSize__LetterPlus         QPageSize__PageSizeId = 54
	QPageSize__LetterSmall        QPageSize__PageSizeId = 55
	QPageSize__TabloidExtra       QPageSize__PageSizeId = 56
	QPageSize__ArchA              QPageSize__PageSizeId = 57
	QPageSize__ArchB              QPageSize__PageSizeId = 58
	QPageSize__ArchC              QPageSize__PageSizeId = 59
	QPageSize__ArchD              QPageSize__PageSizeId = 60
	QPageSize__ArchE              QPageSize__PageSizeId = 61
	QPageSize__Imperial7x9        QPageSize__PageSizeId = 62
	QPageSize__Imperial8x10       QPageSize__PageSizeId = 63
	QPageSize__Imperial9x11       QPageSize__PageSizeId = 64
	QPageSize__Imperial9x12       QPageSize__PageSizeId = 65
	QPageSize__Imperial10x11      QPageSize__PageSizeId = 66
	QPageSize__Imperial10x13      QPageSize__PageSizeId = 67
	QPageSize__Imperial10x14      QPageSize__PageSizeId = 68
	QPageSize__Imperial12x11      QPageSize__PageSizeId = 69
	QPageSize__Imperial15x11      QPageSize__PageSizeId = 70
	QPageSize__ExecutiveStandard  QPageSize__PageSizeId = 71
	QPageSize__Note               QPageSize__PageSizeId = 72
	QPageSize__Quarto             QPageSize__PageSizeId = 73
	QPageSize__Statement          QPageSize__PageSizeId = 74
	QPageSize__SuperA             QPageSize__PageSizeId = 75
	QPageSize__SuperB             QPageSize__PageSizeId = 76
	QPageSize__Postcard           QPageSize__PageSizeId = 77
	QPageSize__DoublePostcard     QPageSize__PageSizeId = 78
	QPageSize__Prc16K             QPageSize__PageSizeId = 79
	QPageSize__Prc32K             QPageSize__PageSizeId = 80
	QPageSize__Prc32KBig          QPageSize__PageSizeId = 81
	QPageSize__FanFoldUS          QPageSize__PageSizeId = 82
	QPageSize__FanFoldGerman      QPageSize__PageSizeId = 83
	QPageSize__FanFoldGermanLegal QPageSize__PageSizeId = 84
	QPageSize__EnvelopeB4         QPageSize__PageSizeId = 85
	QPageSize__EnvelopeB5         QPageSize__PageSizeId = 86
	QPageSize__EnvelopeB6         QPageSize__PageSizeId = 87
	QPageSize__EnvelopeC0         QPageSize__PageSizeId = 88
	QPageSize__EnvelopeC1         QPageSize__PageSizeId = 89
	QPageSize__EnvelopeC2         QPageSize__PageSizeId = 90
	QPageSize__EnvelopeC3         QPageSize__PageSizeId = 91
	QPageSize__EnvelopeC4         QPageSize__PageSizeId = 92
	QPageSize__EnvelopeC6         QPageSize__PageSizeId = 93
	QPageSize__EnvelopeC65        QPageSize__PageSizeId = 94
	QPageSize__EnvelopeC7         QPageSize__PageSizeId = 95
	QPageSize__Envelope9          QPageSize__PageSizeId = 96
	QPageSize__Envelope11         QPageSize__PageSizeId = 97
	QPageSize__Envelope12         QPageSize__PageSizeId = 98
	QPageSize__Envelope14         QPageSize__PageSizeId = 99
	QPageSize__EnvelopeMonarch    QPageSize__PageSizeId = 100
	QPageSize__EnvelopePersonal   QPageSize__PageSizeId = 101
	QPageSize__EnvelopeChou3      QPageSize__PageSizeId = 102
	QPageSize__EnvelopeChou4      QPageSize__PageSizeId = 103
	QPageSize__EnvelopeInvite     QPageSize__PageSizeId = 104
	QPageSize__EnvelopeItalian    QPageSize__PageSizeId = 105
	QPageSize__EnvelopeKaku2      QPageSize__PageSizeId = 106
	QPageSize__EnvelopeKaku3      QPageSize__PageSizeId = 107
	QPageSize__EnvelopePrc1       QPageSize__PageSizeId = 108
	QPageSize__EnvelopePrc2       QPageSize__PageSizeId = 109
	QPageSize__EnvelopePrc3       QPageSize__PageSizeId = 110
	QPageSize__EnvelopePrc4       QPageSize__PageSizeId = 111
	QPageSize__EnvelopePrc5       QPageSize__PageSizeId = 112
	QPageSize__EnvelopePrc6       QPageSize__PageSizeId = 113
	QPageSize__EnvelopePrc7       QPageSize__PageSizeId = 114
	QPageSize__EnvelopePrc8       QPageSize__PageSizeId = 115
	QPageSize__EnvelopePrc9       QPageSize__PageSizeId = 116
	QPageSize__EnvelopePrc10      QPageSize__PageSizeId = 117
	QPageSize__EnvelopeYou4       QPageSize__PageSizeId = 118
	QPageSize__LastPageSize       QPageSize__PageSizeId = 118
	QPageSize__AnsiA              QPageSize__PageSizeId = 0
	QPageSize__AnsiB              QPageSize__PageSizeId = 29
	QPageSize__EnvelopeC5         QPageSize__PageSizeId = 25
	QPageSize__EnvelopeDL         QPageSize__PageSizeId = 27
	QPageSize__Envelope10         QPageSize__PageSizeId = 26
)

type QPageSize__Unit int

const (
	QPageSize__Millimeter QPageSize__Unit = 0
	QPageSize__Point      QPageSize__Unit = 1
	QPageSize__Inch       QPageSize__Unit = 2
	QPageSize__Pica       QPageSize__Unit = 3
	QPageSize__Didot      QPageSize__Unit = 4
	QPageSize__Cicero     QPageSize__Unit = 5
)

type QPageSize__SizeMatchPolicy int

const (
	QPageSize__FuzzyMatch            QPageSize__SizeMatchPolicy = 0
	QPageSize__FuzzyOrientationMatch QPageSize__SizeMatchPolicy = 1
	QPageSize__ExactMatch            QPageSize__SizeMatchPolicy = 2
)

type QPageSize struct {
	h          *C.QPageSize
	isSubclass bool
}

func (this *QPageSize) cPointer() *C.QPageSize {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPageSize) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPageSize constructs the type using only CGO pointers.
func newQPageSize(h *C.QPageSize) *QPageSize {
	if h == nil {
		return nil
	}
	return &QPageSize{h: h}
}

// UnsafeNewQPageSize constructs the type using only unsafe pointers.
func UnsafeNewQPageSize(h unsafe.Pointer) *QPageSize {
	if h == nil {
		return nil
	}

	return &QPageSize{h: (*C.QPageSize)(h)}
}

// NewQPageSize constructs a new QPageSize object.
func NewQPageSize() *QPageSize {
	var outptr_QPageSize *C.QPageSize = nil

	C.QPageSize_new(&outptr_QPageSize)
	ret := newQPageSize(outptr_QPageSize)
	ret.isSubclass = true
	return ret
}

// NewQPageSize2 constructs a new QPageSize object.
func NewQPageSize2(pageSizeId QPageSize__PageSizeId) *QPageSize {
	var outptr_QPageSize *C.QPageSize = nil

	C.QPageSize_new2((C.int)(pageSizeId), &outptr_QPageSize)
	ret := newQPageSize(outptr_QPageSize)
	ret.isSubclass = true
	return ret
}

// NewQPageSize3 constructs a new QPageSize object.
func NewQPageSize3(pointSize *QSize) *QPageSize {
	var outptr_QPageSize *C.QPageSize = nil

	C.QPageSize_new3(pointSize.cPointer(), &outptr_QPageSize)
	ret := newQPageSize(outptr_QPageSize)
	ret.isSubclass = true
	return ret
}

// NewQPageSize4 constructs a new QPageSize object.
func NewQPageSize4(size *QSizeF, units QPageSize__Unit) *QPageSize {
	var outptr_QPageSize *C.QPageSize = nil

	C.QPageSize_new4(size.cPointer(), (C.int)(units), &outptr_QPageSize)
	ret := newQPageSize(outptr_QPageSize)
	ret.isSubclass = true
	return ret
}

// NewQPageSize5 constructs a new QPageSize object.
func NewQPageSize5(other *QPageSize) *QPageSize {
	var outptr_QPageSize *C.QPageSize = nil

	C.QPageSize_new5(other.cPointer(), &outptr_QPageSize)
	ret := newQPageSize(outptr_QPageSize)
	ret.isSubclass = true
	return ret
}

// NewQPageSize6 constructs a new QPageSize object.
func NewQPageSize6(pointSize *QSize, name string) *QPageSize {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var outptr_QPageSize *C.QPageSize = nil

	C.QPageSize_new6(pointSize.cPointer(), name_ms, &outptr_QPageSize)
	ret := newQPageSize(outptr_QPageSize)
	ret.isSubclass = true
	return ret
}

// NewQPageSize7 constructs a new QPageSize object.
func NewQPageSize7(pointSize *QSize, name string, matchPolicy QPageSize__SizeMatchPolicy) *QPageSize {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var outptr_QPageSize *C.QPageSize = nil

	C.QPageSize_new7(pointSize.cPointer(), name_ms, (C.int)(matchPolicy), &outptr_QPageSize)
	ret := newQPageSize(outptr_QPageSize)
	ret.isSubclass = true
	return ret
}

// NewQPageSize8 constructs a new QPageSize object.
func NewQPageSize8(size *QSizeF, units QPageSize__Unit, name string) *QPageSize {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var outptr_QPageSize *C.QPageSize = nil

	C.QPageSize_new8(size.cPointer(), (C.int)(units), name_ms, &outptr_QPageSize)
	ret := newQPageSize(outptr_QPageSize)
	ret.isSubclass = true
	return ret
}

// NewQPageSize9 constructs a new QPageSize object.
func NewQPageSize9(size *QSizeF, units QPageSize__Unit, name string, matchPolicy QPageSize__SizeMatchPolicy) *QPageSize {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var outptr_QPageSize *C.QPageSize = nil

	C.QPageSize_new9(size.cPointer(), (C.int)(units), name_ms, (C.int)(matchPolicy), &outptr_QPageSize)
	ret := newQPageSize(outptr_QPageSize)
	ret.isSubclass = true
	return ret
}

func (this *QPageSize) OperatorAssign(other *QPageSize) {
	C.QPageSize_OperatorAssign(this.h, other.cPointer())
}

func (this *QPageSize) Swap(other *QPageSize) {
	C.QPageSize_Swap(this.h, other.cPointer())
}

func (this *QPageSize) IsEquivalentTo(other *QPageSize) bool {
	return (bool)(C.QPageSize_IsEquivalentTo(this.h, other.cPointer()))
}

func (this *QPageSize) IsValid() bool {
	return (bool)(C.QPageSize_IsValid(this.h))
}

func (this *QPageSize) Key() string {
	var _ms C.struct_miqt_string = C.QPageSize_Key(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPageSize) Name() string {
	var _ms C.struct_miqt_string = C.QPageSize_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPageSize) Id() QPageSize__PageSizeId {
	return (QPageSize__PageSizeId)(C.QPageSize_Id(this.h))
}

func (this *QPageSize) WindowsId() int {
	return (int)(C.QPageSize_WindowsId(this.h))
}

func (this *QPageSize) DefinitionSize() *QSizeF {
	_goptr := newQSizeF(C.QPageSize_DefinitionSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageSize) DefinitionUnits() QPageSize__Unit {
	return (QPageSize__Unit)(C.QPageSize_DefinitionUnits(this.h))
}

func (this *QPageSize) Size(units QPageSize__Unit) *QSizeF {
	_goptr := newQSizeF(C.QPageSize_Size(this.h, (C.int)(units)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageSize) SizePoints() *QSize {
	_goptr := newQSize(C.QPageSize_SizePoints(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageSize) SizePixels(resolution int) *QSize {
	_goptr := newQSize(C.QPageSize_SizePixels(this.h, (C.int)(resolution)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageSize) Rect(units QPageSize__Unit) *QRectF {
	_goptr := newQRectF(C.QPageSize_Rect(this.h, (C.int)(units)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageSize) RectPoints() *QRect {
	_goptr := newQRect(C.QPageSize_RectPoints(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageSize) RectPixels(resolution int) *QRect {
	_goptr := newQRect(C.QPageSize_RectPixels(this.h, (C.int)(resolution)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPageSize_KeyWithPageSizeId(pageSizeId QPageSize__PageSizeId) string {
	var _ms C.struct_miqt_string = C.QPageSize_KeyWithPageSizeId((C.int)(pageSizeId))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPageSize_NameWithPageSizeId(pageSizeId QPageSize__PageSizeId) string {
	var _ms C.struct_miqt_string = C.QPageSize_NameWithPageSizeId((C.int)(pageSizeId))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPageSize_IdWithPointSize(pointSize *QSize) QPageSize__PageSizeId {
	return (QPageSize__PageSizeId)(C.QPageSize_IdWithPointSize(pointSize.cPointer()))
}

func QPageSize_Id2(size *QSizeF, units QPageSize__Unit) QPageSize__PageSizeId {
	return (QPageSize__PageSizeId)(C.QPageSize_Id2(size.cPointer(), (C.int)(units)))
}

func QPageSize_IdWithWindowsId(windowsId int) QPageSize__PageSizeId {
	return (QPageSize__PageSizeId)(C.QPageSize_IdWithWindowsId((C.int)(windowsId)))
}

func QPageSize_WindowsIdWithPageSizeId(pageSizeId QPageSize__PageSizeId) int {
	return (int)(C.QPageSize_WindowsIdWithPageSizeId((C.int)(pageSizeId)))
}

func QPageSize_DefinitionSizeWithPageSizeId(pageSizeId QPageSize__PageSizeId) *QSizeF {
	_goptr := newQSizeF(C.QPageSize_DefinitionSizeWithPageSizeId((C.int)(pageSizeId)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPageSize_DefinitionUnitsWithPageSizeId(pageSizeId QPageSize__PageSizeId) QPageSize__Unit {
	return (QPageSize__Unit)(C.QPageSize_DefinitionUnitsWithPageSizeId((C.int)(pageSizeId)))
}

func QPageSize_Size2(pageSizeId QPageSize__PageSizeId, units QPageSize__Unit) *QSizeF {
	_goptr := newQSizeF(C.QPageSize_Size2((C.int)(pageSizeId), (C.int)(units)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPageSize_SizePointsWithPageSizeId(pageSizeId QPageSize__PageSizeId) *QSize {
	_goptr := newQSize(C.QPageSize_SizePointsWithPageSizeId((C.int)(pageSizeId)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPageSize_SizePixels2(pageSizeId QPageSize__PageSizeId, resolution int) *QSize {
	_goptr := newQSize(C.QPageSize_SizePixels2((C.int)(pageSizeId), (C.int)(resolution)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPageSize_Id22(pointSize *QSize, matchPolicy QPageSize__SizeMatchPolicy) QPageSize__PageSizeId {
	return (QPageSize__PageSizeId)(C.QPageSize_Id22(pointSize.cPointer(), (C.int)(matchPolicy)))
}

func QPageSize_Id3(size *QSizeF, units QPageSize__Unit, matchPolicy QPageSize__SizeMatchPolicy) QPageSize__PageSizeId {
	return (QPageSize__PageSizeId)(C.QPageSize_Id3(size.cPointer(), (C.int)(units), (C.int)(matchPolicy)))
}

// Delete this object from C++ memory.
func (this *QPageSize) Delete() {
	C.QPageSize_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPageSize) GoGC() {
	runtime.SetFinalizer(this, func(this *QPageSize) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
