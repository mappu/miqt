package qt

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
	QPageSize__PageSizeId__A4                 QPageSize__PageSizeId = 0
	QPageSize__PageSizeId__B5                 QPageSize__PageSizeId = 1
	QPageSize__PageSizeId__Letter             QPageSize__PageSizeId = 2
	QPageSize__PageSizeId__Legal              QPageSize__PageSizeId = 3
	QPageSize__PageSizeId__Executive          QPageSize__PageSizeId = 4
	QPageSize__PageSizeId__A0                 QPageSize__PageSizeId = 5
	QPageSize__PageSizeId__A1                 QPageSize__PageSizeId = 6
	QPageSize__PageSizeId__A2                 QPageSize__PageSizeId = 7
	QPageSize__PageSizeId__A3                 QPageSize__PageSizeId = 8
	QPageSize__PageSizeId__A5                 QPageSize__PageSizeId = 9
	QPageSize__PageSizeId__A6                 QPageSize__PageSizeId = 10
	QPageSize__PageSizeId__A7                 QPageSize__PageSizeId = 11
	QPageSize__PageSizeId__A8                 QPageSize__PageSizeId = 12
	QPageSize__PageSizeId__A9                 QPageSize__PageSizeId = 13
	QPageSize__PageSizeId__B0                 QPageSize__PageSizeId = 14
	QPageSize__PageSizeId__B1                 QPageSize__PageSizeId = 15
	QPageSize__PageSizeId__B10                QPageSize__PageSizeId = 16
	QPageSize__PageSizeId__B2                 QPageSize__PageSizeId = 17
	QPageSize__PageSizeId__B3                 QPageSize__PageSizeId = 18
	QPageSize__PageSizeId__B4                 QPageSize__PageSizeId = 19
	QPageSize__PageSizeId__B6                 QPageSize__PageSizeId = 20
	QPageSize__PageSizeId__B7                 QPageSize__PageSizeId = 21
	QPageSize__PageSizeId__B8                 QPageSize__PageSizeId = 22
	QPageSize__PageSizeId__B9                 QPageSize__PageSizeId = 23
	QPageSize__PageSizeId__C5E                QPageSize__PageSizeId = 24
	QPageSize__PageSizeId__Comm10E            QPageSize__PageSizeId = 25
	QPageSize__PageSizeId__DLE                QPageSize__PageSizeId = 26
	QPageSize__PageSizeId__Folio              QPageSize__PageSizeId = 27
	QPageSize__PageSizeId__Ledger             QPageSize__PageSizeId = 28
	QPageSize__PageSizeId__Tabloid            QPageSize__PageSizeId = 29
	QPageSize__PageSizeId__Custom             QPageSize__PageSizeId = 30
	QPageSize__PageSizeId__A10                QPageSize__PageSizeId = 31
	QPageSize__PageSizeId__A3Extra            QPageSize__PageSizeId = 32
	QPageSize__PageSizeId__A4Extra            QPageSize__PageSizeId = 33
	QPageSize__PageSizeId__A4Plus             QPageSize__PageSizeId = 34
	QPageSize__PageSizeId__A4Small            QPageSize__PageSizeId = 35
	QPageSize__PageSizeId__A5Extra            QPageSize__PageSizeId = 36
	QPageSize__PageSizeId__B5Extra            QPageSize__PageSizeId = 37
	QPageSize__PageSizeId__JisB0              QPageSize__PageSizeId = 38
	QPageSize__PageSizeId__JisB1              QPageSize__PageSizeId = 39
	QPageSize__PageSizeId__JisB2              QPageSize__PageSizeId = 40
	QPageSize__PageSizeId__JisB3              QPageSize__PageSizeId = 41
	QPageSize__PageSizeId__JisB4              QPageSize__PageSizeId = 42
	QPageSize__PageSizeId__JisB5              QPageSize__PageSizeId = 43
	QPageSize__PageSizeId__JisB6              QPageSize__PageSizeId = 44
	QPageSize__PageSizeId__JisB7              QPageSize__PageSizeId = 45
	QPageSize__PageSizeId__JisB8              QPageSize__PageSizeId = 46
	QPageSize__PageSizeId__JisB9              QPageSize__PageSizeId = 47
	QPageSize__PageSizeId__JisB10             QPageSize__PageSizeId = 48
	QPageSize__PageSizeId__AnsiC              QPageSize__PageSizeId = 49
	QPageSize__PageSizeId__AnsiD              QPageSize__PageSizeId = 50
	QPageSize__PageSizeId__AnsiE              QPageSize__PageSizeId = 51
	QPageSize__PageSizeId__LegalExtra         QPageSize__PageSizeId = 52
	QPageSize__PageSizeId__LetterExtra        QPageSize__PageSizeId = 53
	QPageSize__PageSizeId__LetterPlus         QPageSize__PageSizeId = 54
	QPageSize__PageSizeId__LetterSmall        QPageSize__PageSizeId = 55
	QPageSize__PageSizeId__TabloidExtra       QPageSize__PageSizeId = 56
	QPageSize__PageSizeId__ArchA              QPageSize__PageSizeId = 57
	QPageSize__PageSizeId__ArchB              QPageSize__PageSizeId = 58
	QPageSize__PageSizeId__ArchC              QPageSize__PageSizeId = 59
	QPageSize__PageSizeId__ArchD              QPageSize__PageSizeId = 60
	QPageSize__PageSizeId__ArchE              QPageSize__PageSizeId = 61
	QPageSize__PageSizeId__Imperial7x9        QPageSize__PageSizeId = 62
	QPageSize__PageSizeId__Imperial8x10       QPageSize__PageSizeId = 63
	QPageSize__PageSizeId__Imperial9x11       QPageSize__PageSizeId = 64
	QPageSize__PageSizeId__Imperial9x12       QPageSize__PageSizeId = 65
	QPageSize__PageSizeId__Imperial10x11      QPageSize__PageSizeId = 66
	QPageSize__PageSizeId__Imperial10x13      QPageSize__PageSizeId = 67
	QPageSize__PageSizeId__Imperial10x14      QPageSize__PageSizeId = 68
	QPageSize__PageSizeId__Imperial12x11      QPageSize__PageSizeId = 69
	QPageSize__PageSizeId__Imperial15x11      QPageSize__PageSizeId = 70
	QPageSize__PageSizeId__ExecutiveStandard  QPageSize__PageSizeId = 71
	QPageSize__PageSizeId__Note               QPageSize__PageSizeId = 72
	QPageSize__PageSizeId__Quarto             QPageSize__PageSizeId = 73
	QPageSize__PageSizeId__Statement          QPageSize__PageSizeId = 74
	QPageSize__PageSizeId__SuperA             QPageSize__PageSizeId = 75
	QPageSize__PageSizeId__SuperB             QPageSize__PageSizeId = 76
	QPageSize__PageSizeId__Postcard           QPageSize__PageSizeId = 77
	QPageSize__PageSizeId__DoublePostcard     QPageSize__PageSizeId = 78
	QPageSize__PageSizeId__Prc16K             QPageSize__PageSizeId = 79
	QPageSize__PageSizeId__Prc32K             QPageSize__PageSizeId = 80
	QPageSize__PageSizeId__Prc32KBig          QPageSize__PageSizeId = 81
	QPageSize__PageSizeId__FanFoldUS          QPageSize__PageSizeId = 82
	QPageSize__PageSizeId__FanFoldGerman      QPageSize__PageSizeId = 83
	QPageSize__PageSizeId__FanFoldGermanLegal QPageSize__PageSizeId = 84
	QPageSize__PageSizeId__EnvelopeB4         QPageSize__PageSizeId = 85
	QPageSize__PageSizeId__EnvelopeB5         QPageSize__PageSizeId = 86
	QPageSize__PageSizeId__EnvelopeB6         QPageSize__PageSizeId = 87
	QPageSize__PageSizeId__EnvelopeC0         QPageSize__PageSizeId = 88
	QPageSize__PageSizeId__EnvelopeC1         QPageSize__PageSizeId = 89
	QPageSize__PageSizeId__EnvelopeC2         QPageSize__PageSizeId = 90
	QPageSize__PageSizeId__EnvelopeC3         QPageSize__PageSizeId = 91
	QPageSize__PageSizeId__EnvelopeC4         QPageSize__PageSizeId = 92
	QPageSize__PageSizeId__EnvelopeC6         QPageSize__PageSizeId = 93
	QPageSize__PageSizeId__EnvelopeC65        QPageSize__PageSizeId = 94
	QPageSize__PageSizeId__EnvelopeC7         QPageSize__PageSizeId = 95
	QPageSize__PageSizeId__Envelope9          QPageSize__PageSizeId = 96
	QPageSize__PageSizeId__Envelope11         QPageSize__PageSizeId = 97
	QPageSize__PageSizeId__Envelope12         QPageSize__PageSizeId = 98
	QPageSize__PageSizeId__Envelope14         QPageSize__PageSizeId = 99
	QPageSize__PageSizeId__EnvelopeMonarch    QPageSize__PageSizeId = 100
	QPageSize__PageSizeId__EnvelopePersonal   QPageSize__PageSizeId = 101
	QPageSize__PageSizeId__EnvelopeChou3      QPageSize__PageSizeId = 102
	QPageSize__PageSizeId__EnvelopeChou4      QPageSize__PageSizeId = 103
	QPageSize__PageSizeId__EnvelopeInvite     QPageSize__PageSizeId = 104
	QPageSize__PageSizeId__EnvelopeItalian    QPageSize__PageSizeId = 105
	QPageSize__PageSizeId__EnvelopeKaku2      QPageSize__PageSizeId = 106
	QPageSize__PageSizeId__EnvelopeKaku3      QPageSize__PageSizeId = 107
	QPageSize__PageSizeId__EnvelopePrc1       QPageSize__PageSizeId = 108
	QPageSize__PageSizeId__EnvelopePrc2       QPageSize__PageSizeId = 109
	QPageSize__PageSizeId__EnvelopePrc3       QPageSize__PageSizeId = 110
	QPageSize__PageSizeId__EnvelopePrc4       QPageSize__PageSizeId = 111
	QPageSize__PageSizeId__EnvelopePrc5       QPageSize__PageSizeId = 112
	QPageSize__PageSizeId__EnvelopePrc6       QPageSize__PageSizeId = 113
	QPageSize__PageSizeId__EnvelopePrc7       QPageSize__PageSizeId = 114
	QPageSize__PageSizeId__EnvelopePrc8       QPageSize__PageSizeId = 115
	QPageSize__PageSizeId__EnvelopePrc9       QPageSize__PageSizeId = 116
	QPageSize__PageSizeId__EnvelopePrc10      QPageSize__PageSizeId = 117
	QPageSize__PageSizeId__EnvelopeYou4       QPageSize__PageSizeId = 118
	QPageSize__PageSizeId__LastPageSize       QPageSize__PageSizeId = 118
	QPageSize__PageSizeId__NPageSize          QPageSize__PageSizeId = 118
	QPageSize__PageSizeId__NPaperSize         QPageSize__PageSizeId = 118
	QPageSize__PageSizeId__AnsiA              QPageSize__PageSizeId = 2
	QPageSize__PageSizeId__AnsiB              QPageSize__PageSizeId = 28
	QPageSize__PageSizeId__EnvelopeC5         QPageSize__PageSizeId = 24
	QPageSize__PageSizeId__EnvelopeDL         QPageSize__PageSizeId = 26
	QPageSize__PageSizeId__Envelope10         QPageSize__PageSizeId = 25
)

type QPageSize__Unit int

const (
	QPageSize__Unit__Millimeter QPageSize__Unit = 0
	QPageSize__Unit__Point      QPageSize__Unit = 1
	QPageSize__Unit__Inch       QPageSize__Unit = 2
	QPageSize__Unit__Pica       QPageSize__Unit = 3
	QPageSize__Unit__Didot      QPageSize__Unit = 4
	QPageSize__Unit__Cicero     QPageSize__Unit = 5
)

type QPageSize__SizeMatchPolicy int

const (
	QPageSize__SizeMatchPolicy__FuzzyMatch            QPageSize__SizeMatchPolicy = 0
	QPageSize__SizeMatchPolicy__FuzzyOrientationMatch QPageSize__SizeMatchPolicy = 1
	QPageSize__SizeMatchPolicy__ExactMatch            QPageSize__SizeMatchPolicy = 2
)

type QPageSize struct {
	h *C.QPageSize
}

func (this *QPageSize) cPointer() *C.QPageSize {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPageSize(h *C.QPageSize) *QPageSize {
	if h == nil {
		return nil
	}
	return &QPageSize{h: h}
}

func newQPageSize_U(h unsafe.Pointer) *QPageSize {
	return newQPageSize((*C.QPageSize)(h))
}

// NewQPageSize constructs a new QPageSize object.
func NewQPageSize() *QPageSize {
	ret := C.QPageSize_new()
	return newQPageSize(ret)
}

// NewQPageSize2 constructs a new QPageSize object.
func NewQPageSize2(pageSizeId QPageSize__PageSizeId) *QPageSize {
	ret := C.QPageSize_new2((C.uintptr_t)(pageSizeId))
	return newQPageSize(ret)
}

// NewQPageSize3 constructs a new QPageSize object.
func NewQPageSize3(pointSize *QSize) *QPageSize {
	ret := C.QPageSize_new3(pointSize.cPointer())
	return newQPageSize(ret)
}

// NewQPageSize4 constructs a new QPageSize object.
func NewQPageSize4(size *QSizeF, units QPageSize__Unit) *QPageSize {
	ret := C.QPageSize_new4(size.cPointer(), (C.uintptr_t)(units))
	return newQPageSize(ret)
}

// NewQPageSize5 constructs a new QPageSize object.
func NewQPageSize5(other *QPageSize) *QPageSize {
	ret := C.QPageSize_new5(other.cPointer())
	return newQPageSize(ret)
}

// NewQPageSize6 constructs a new QPageSize object.
func NewQPageSize6(pointSize *QSize, name string) *QPageSize {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	ret := C.QPageSize_new6(pointSize.cPointer(), (*C.struct_miqt_string)(name_ms))
	return newQPageSize(ret)
}

// NewQPageSize7 constructs a new QPageSize object.
func NewQPageSize7(pointSize *QSize, name string, matchPolicy QPageSize__SizeMatchPolicy) *QPageSize {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	ret := C.QPageSize_new7(pointSize.cPointer(), (*C.struct_miqt_string)(name_ms), (C.uintptr_t)(matchPolicy))
	return newQPageSize(ret)
}

// NewQPageSize8 constructs a new QPageSize object.
func NewQPageSize8(size *QSizeF, units QPageSize__Unit, name string) *QPageSize {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	ret := C.QPageSize_new8(size.cPointer(), (C.uintptr_t)(units), (*C.struct_miqt_string)(name_ms))
	return newQPageSize(ret)
}

// NewQPageSize9 constructs a new QPageSize object.
func NewQPageSize9(size *QSizeF, units QPageSize__Unit, name string, matchPolicy QPageSize__SizeMatchPolicy) *QPageSize {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	ret := C.QPageSize_new9(size.cPointer(), (C.uintptr_t)(units), (*C.struct_miqt_string)(name_ms), (C.uintptr_t)(matchPolicy))
	return newQPageSize(ret)
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
	var _ms *C.struct_miqt_string = C.QPageSize_Key(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPageSize) Name() string {
	var _ms *C.struct_miqt_string = C.QPageSize_Name(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPageSize) Id() QPageSize__PageSizeId {
	return (QPageSize__PageSizeId)(C.QPageSize_Id(this.h))
}

func (this *QPageSize) WindowsId() int {
	return (int)(C.QPageSize_WindowsId(this.h))
}

func (this *QPageSize) DefinitionSize() *QSizeF {
	_ret := C.QPageSize_DefinitionSize(this.h)
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageSize) DefinitionUnits() QPageSize__Unit {
	return (QPageSize__Unit)(C.QPageSize_DefinitionUnits(this.h))
}

func (this *QPageSize) Size(units QPageSize__Unit) *QSizeF {
	_ret := C.QPageSize_Size(this.h, (C.uintptr_t)(units))
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageSize) SizePoints() *QSize {
	_ret := C.QPageSize_SizePoints(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageSize) SizePixels(resolution int) *QSize {
	_ret := C.QPageSize_SizePixels(this.h, (C.int)(resolution))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageSize) Rect(units QPageSize__Unit) *QRectF {
	_ret := C.QPageSize_Rect(this.h, (C.uintptr_t)(units))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageSize) RectPoints() *QRect {
	_ret := C.QPageSize_RectPoints(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPageSize) RectPixels(resolution int) *QRect {
	_ret := C.QPageSize_RectPixels(this.h, (C.int)(resolution))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPageSize_KeyWithPageSizeId(pageSizeId QPageSize__PageSizeId) string {
	var _ms *C.struct_miqt_string = C.QPageSize_KeyWithPageSizeId((C.uintptr_t)(pageSizeId))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPageSize_NameWithPageSizeId(pageSizeId QPageSize__PageSizeId) string {
	var _ms *C.struct_miqt_string = C.QPageSize_NameWithPageSizeId((C.uintptr_t)(pageSizeId))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPageSize_IdWithPointSize(pointSize *QSize) QPageSize__PageSizeId {
	return (QPageSize__PageSizeId)(C.QPageSize_IdWithPointSize(pointSize.cPointer()))
}

func QPageSize_Id2(size *QSizeF, units QPageSize__Unit) QPageSize__PageSizeId {
	return (QPageSize__PageSizeId)(C.QPageSize_Id2(size.cPointer(), (C.uintptr_t)(units)))
}

func QPageSize_IdWithWindowsId(windowsId int) QPageSize__PageSizeId {
	return (QPageSize__PageSizeId)(C.QPageSize_IdWithWindowsId((C.int)(windowsId)))
}

func QPageSize_WindowsIdWithPageSizeId(pageSizeId QPageSize__PageSizeId) int {
	return (int)(C.QPageSize_WindowsIdWithPageSizeId((C.uintptr_t)(pageSizeId)))
}

func QPageSize_DefinitionSizeWithPageSizeId(pageSizeId QPageSize__PageSizeId) *QSizeF {
	_ret := C.QPageSize_DefinitionSizeWithPageSizeId((C.uintptr_t)(pageSizeId))
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPageSize_DefinitionUnitsWithPageSizeId(pageSizeId QPageSize__PageSizeId) QPageSize__Unit {
	return (QPageSize__Unit)(C.QPageSize_DefinitionUnitsWithPageSizeId((C.uintptr_t)(pageSizeId)))
}

func QPageSize_Size2(pageSizeId QPageSize__PageSizeId, units QPageSize__Unit) *QSizeF {
	_ret := C.QPageSize_Size2((C.uintptr_t)(pageSizeId), (C.uintptr_t)(units))
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPageSize_SizePointsWithPageSizeId(pageSizeId QPageSize__PageSizeId) *QSize {
	_ret := C.QPageSize_SizePointsWithPageSizeId((C.uintptr_t)(pageSizeId))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPageSize_SizePixels2(pageSizeId QPageSize__PageSizeId, resolution int) *QSize {
	_ret := C.QPageSize_SizePixels2((C.uintptr_t)(pageSizeId), (C.int)(resolution))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPageSize_Id22(pointSize *QSize, matchPolicy QPageSize__SizeMatchPolicy) QPageSize__PageSizeId {
	return (QPageSize__PageSizeId)(C.QPageSize_Id22(pointSize.cPointer(), (C.uintptr_t)(matchPolicy)))
}

func QPageSize_Id3(size *QSizeF, units QPageSize__Unit, matchPolicy QPageSize__SizeMatchPolicy) QPageSize__PageSizeId {
	return (QPageSize__PageSizeId)(C.QPageSize_Id3(size.cPointer(), (C.uintptr_t)(units), (C.uintptr_t)(matchPolicy)))
}

// Delete this object from C++ memory.
func (this *QPageSize) Delete() {
	C.QPageSize_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPageSize) GoGC() {
	runtime.SetFinalizer(this, func(this *QPageSize) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
