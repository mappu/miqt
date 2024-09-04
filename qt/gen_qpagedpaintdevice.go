package qt

/*

#include "gen_qpagedpaintdevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPagedPaintDevice__PageSize int

const (
	QPagedPaintDevice__PageSize__A4                 QPagedPaintDevice__PageSize = 0
	QPagedPaintDevice__PageSize__B5                 QPagedPaintDevice__PageSize = 1
	QPagedPaintDevice__PageSize__Letter             QPagedPaintDevice__PageSize = 2
	QPagedPaintDevice__PageSize__Legal              QPagedPaintDevice__PageSize = 3
	QPagedPaintDevice__PageSize__Executive          QPagedPaintDevice__PageSize = 4
	QPagedPaintDevice__PageSize__A0                 QPagedPaintDevice__PageSize = 5
	QPagedPaintDevice__PageSize__A1                 QPagedPaintDevice__PageSize = 6
	QPagedPaintDevice__PageSize__A2                 QPagedPaintDevice__PageSize = 7
	QPagedPaintDevice__PageSize__A3                 QPagedPaintDevice__PageSize = 8
	QPagedPaintDevice__PageSize__A5                 QPagedPaintDevice__PageSize = 9
	QPagedPaintDevice__PageSize__A6                 QPagedPaintDevice__PageSize = 10
	QPagedPaintDevice__PageSize__A7                 QPagedPaintDevice__PageSize = 11
	QPagedPaintDevice__PageSize__A8                 QPagedPaintDevice__PageSize = 12
	QPagedPaintDevice__PageSize__A9                 QPagedPaintDevice__PageSize = 13
	QPagedPaintDevice__PageSize__B0                 QPagedPaintDevice__PageSize = 14
	QPagedPaintDevice__PageSize__B1                 QPagedPaintDevice__PageSize = 15
	QPagedPaintDevice__PageSize__B10                QPagedPaintDevice__PageSize = 16
	QPagedPaintDevice__PageSize__B2                 QPagedPaintDevice__PageSize = 17
	QPagedPaintDevice__PageSize__B3                 QPagedPaintDevice__PageSize = 18
	QPagedPaintDevice__PageSize__B4                 QPagedPaintDevice__PageSize = 19
	QPagedPaintDevice__PageSize__B6                 QPagedPaintDevice__PageSize = 20
	QPagedPaintDevice__PageSize__B7                 QPagedPaintDevice__PageSize = 21
	QPagedPaintDevice__PageSize__B8                 QPagedPaintDevice__PageSize = 22
	QPagedPaintDevice__PageSize__B9                 QPagedPaintDevice__PageSize = 23
	QPagedPaintDevice__PageSize__C5E                QPagedPaintDevice__PageSize = 24
	QPagedPaintDevice__PageSize__Comm10E            QPagedPaintDevice__PageSize = 25
	QPagedPaintDevice__PageSize__DLE                QPagedPaintDevice__PageSize = 26
	QPagedPaintDevice__PageSize__Folio              QPagedPaintDevice__PageSize = 27
	QPagedPaintDevice__PageSize__Ledger             QPagedPaintDevice__PageSize = 28
	QPagedPaintDevice__PageSize__Tabloid            QPagedPaintDevice__PageSize = 29
	QPagedPaintDevice__PageSize__Custom             QPagedPaintDevice__PageSize = 30
	QPagedPaintDevice__PageSize__A10                QPagedPaintDevice__PageSize = 31
	QPagedPaintDevice__PageSize__A3Extra            QPagedPaintDevice__PageSize = 32
	QPagedPaintDevice__PageSize__A4Extra            QPagedPaintDevice__PageSize = 33
	QPagedPaintDevice__PageSize__A4Plus             QPagedPaintDevice__PageSize = 34
	QPagedPaintDevice__PageSize__A4Small            QPagedPaintDevice__PageSize = 35
	QPagedPaintDevice__PageSize__A5Extra            QPagedPaintDevice__PageSize = 36
	QPagedPaintDevice__PageSize__B5Extra            QPagedPaintDevice__PageSize = 37
	QPagedPaintDevice__PageSize__JisB0              QPagedPaintDevice__PageSize = 38
	QPagedPaintDevice__PageSize__JisB1              QPagedPaintDevice__PageSize = 39
	QPagedPaintDevice__PageSize__JisB2              QPagedPaintDevice__PageSize = 40
	QPagedPaintDevice__PageSize__JisB3              QPagedPaintDevice__PageSize = 41
	QPagedPaintDevice__PageSize__JisB4              QPagedPaintDevice__PageSize = 42
	QPagedPaintDevice__PageSize__JisB5              QPagedPaintDevice__PageSize = 43
	QPagedPaintDevice__PageSize__JisB6              QPagedPaintDevice__PageSize = 44
	QPagedPaintDevice__PageSize__JisB7              QPagedPaintDevice__PageSize = 45
	QPagedPaintDevice__PageSize__JisB8              QPagedPaintDevice__PageSize = 46
	QPagedPaintDevice__PageSize__JisB9              QPagedPaintDevice__PageSize = 47
	QPagedPaintDevice__PageSize__JisB10             QPagedPaintDevice__PageSize = 48
	QPagedPaintDevice__PageSize__AnsiC              QPagedPaintDevice__PageSize = 49
	QPagedPaintDevice__PageSize__AnsiD              QPagedPaintDevice__PageSize = 50
	QPagedPaintDevice__PageSize__AnsiE              QPagedPaintDevice__PageSize = 51
	QPagedPaintDevice__PageSize__LegalExtra         QPagedPaintDevice__PageSize = 52
	QPagedPaintDevice__PageSize__LetterExtra        QPagedPaintDevice__PageSize = 53
	QPagedPaintDevice__PageSize__LetterPlus         QPagedPaintDevice__PageSize = 54
	QPagedPaintDevice__PageSize__LetterSmall        QPagedPaintDevice__PageSize = 55
	QPagedPaintDevice__PageSize__TabloidExtra       QPagedPaintDevice__PageSize = 56
	QPagedPaintDevice__PageSize__ArchA              QPagedPaintDevice__PageSize = 57
	QPagedPaintDevice__PageSize__ArchB              QPagedPaintDevice__PageSize = 58
	QPagedPaintDevice__PageSize__ArchC              QPagedPaintDevice__PageSize = 59
	QPagedPaintDevice__PageSize__ArchD              QPagedPaintDevice__PageSize = 60
	QPagedPaintDevice__PageSize__ArchE              QPagedPaintDevice__PageSize = 61
	QPagedPaintDevice__PageSize__Imperial7x9        QPagedPaintDevice__PageSize = 62
	QPagedPaintDevice__PageSize__Imperial8x10       QPagedPaintDevice__PageSize = 63
	QPagedPaintDevice__PageSize__Imperial9x11       QPagedPaintDevice__PageSize = 64
	QPagedPaintDevice__PageSize__Imperial9x12       QPagedPaintDevice__PageSize = 65
	QPagedPaintDevice__PageSize__Imperial10x11      QPagedPaintDevice__PageSize = 66
	QPagedPaintDevice__PageSize__Imperial10x13      QPagedPaintDevice__PageSize = 67
	QPagedPaintDevice__PageSize__Imperial10x14      QPagedPaintDevice__PageSize = 68
	QPagedPaintDevice__PageSize__Imperial12x11      QPagedPaintDevice__PageSize = 69
	QPagedPaintDevice__PageSize__Imperial15x11      QPagedPaintDevice__PageSize = 70
	QPagedPaintDevice__PageSize__ExecutiveStandard  QPagedPaintDevice__PageSize = 71
	QPagedPaintDevice__PageSize__Note               QPagedPaintDevice__PageSize = 72
	QPagedPaintDevice__PageSize__Quarto             QPagedPaintDevice__PageSize = 73
	QPagedPaintDevice__PageSize__Statement          QPagedPaintDevice__PageSize = 74
	QPagedPaintDevice__PageSize__SuperA             QPagedPaintDevice__PageSize = 75
	QPagedPaintDevice__PageSize__SuperB             QPagedPaintDevice__PageSize = 76
	QPagedPaintDevice__PageSize__Postcard           QPagedPaintDevice__PageSize = 77
	QPagedPaintDevice__PageSize__DoublePostcard     QPagedPaintDevice__PageSize = 78
	QPagedPaintDevice__PageSize__Prc16K             QPagedPaintDevice__PageSize = 79
	QPagedPaintDevice__PageSize__Prc32K             QPagedPaintDevice__PageSize = 80
	QPagedPaintDevice__PageSize__Prc32KBig          QPagedPaintDevice__PageSize = 81
	QPagedPaintDevice__PageSize__FanFoldUS          QPagedPaintDevice__PageSize = 82
	QPagedPaintDevice__PageSize__FanFoldGerman      QPagedPaintDevice__PageSize = 83
	QPagedPaintDevice__PageSize__FanFoldGermanLegal QPagedPaintDevice__PageSize = 84
	QPagedPaintDevice__PageSize__EnvelopeB4         QPagedPaintDevice__PageSize = 85
	QPagedPaintDevice__PageSize__EnvelopeB5         QPagedPaintDevice__PageSize = 86
	QPagedPaintDevice__PageSize__EnvelopeB6         QPagedPaintDevice__PageSize = 87
	QPagedPaintDevice__PageSize__EnvelopeC0         QPagedPaintDevice__PageSize = 88
	QPagedPaintDevice__PageSize__EnvelopeC1         QPagedPaintDevice__PageSize = 89
	QPagedPaintDevice__PageSize__EnvelopeC2         QPagedPaintDevice__PageSize = 90
	QPagedPaintDevice__PageSize__EnvelopeC3         QPagedPaintDevice__PageSize = 91
	QPagedPaintDevice__PageSize__EnvelopeC4         QPagedPaintDevice__PageSize = 92
	QPagedPaintDevice__PageSize__EnvelopeC6         QPagedPaintDevice__PageSize = 93
	QPagedPaintDevice__PageSize__EnvelopeC65        QPagedPaintDevice__PageSize = 94
	QPagedPaintDevice__PageSize__EnvelopeC7         QPagedPaintDevice__PageSize = 95
	QPagedPaintDevice__PageSize__Envelope9          QPagedPaintDevice__PageSize = 96
	QPagedPaintDevice__PageSize__Envelope11         QPagedPaintDevice__PageSize = 97
	QPagedPaintDevice__PageSize__Envelope12         QPagedPaintDevice__PageSize = 98
	QPagedPaintDevice__PageSize__Envelope14         QPagedPaintDevice__PageSize = 99
	QPagedPaintDevice__PageSize__EnvelopeMonarch    QPagedPaintDevice__PageSize = 100
	QPagedPaintDevice__PageSize__EnvelopePersonal   QPagedPaintDevice__PageSize = 101
	QPagedPaintDevice__PageSize__EnvelopeChou3      QPagedPaintDevice__PageSize = 102
	QPagedPaintDevice__PageSize__EnvelopeChou4      QPagedPaintDevice__PageSize = 103
	QPagedPaintDevice__PageSize__EnvelopeInvite     QPagedPaintDevice__PageSize = 104
	QPagedPaintDevice__PageSize__EnvelopeItalian    QPagedPaintDevice__PageSize = 105
	QPagedPaintDevice__PageSize__EnvelopeKaku2      QPagedPaintDevice__PageSize = 106
	QPagedPaintDevice__PageSize__EnvelopeKaku3      QPagedPaintDevice__PageSize = 107
	QPagedPaintDevice__PageSize__EnvelopePrc1       QPagedPaintDevice__PageSize = 108
	QPagedPaintDevice__PageSize__EnvelopePrc2       QPagedPaintDevice__PageSize = 109
	QPagedPaintDevice__PageSize__EnvelopePrc3       QPagedPaintDevice__PageSize = 110
	QPagedPaintDevice__PageSize__EnvelopePrc4       QPagedPaintDevice__PageSize = 111
	QPagedPaintDevice__PageSize__EnvelopePrc5       QPagedPaintDevice__PageSize = 112
	QPagedPaintDevice__PageSize__EnvelopePrc6       QPagedPaintDevice__PageSize = 113
	QPagedPaintDevice__PageSize__EnvelopePrc7       QPagedPaintDevice__PageSize = 114
	QPagedPaintDevice__PageSize__EnvelopePrc8       QPagedPaintDevice__PageSize = 115
	QPagedPaintDevice__PageSize__EnvelopePrc9       QPagedPaintDevice__PageSize = 116
	QPagedPaintDevice__PageSize__EnvelopePrc10      QPagedPaintDevice__PageSize = 117
	QPagedPaintDevice__PageSize__EnvelopeYou4       QPagedPaintDevice__PageSize = 118
	QPagedPaintDevice__PageSize__LastPageSize       QPagedPaintDevice__PageSize = 118
	QPagedPaintDevice__PageSize__NPageSize          QPagedPaintDevice__PageSize = 118
	QPagedPaintDevice__PageSize__NPaperSize         QPagedPaintDevice__PageSize = 118
	QPagedPaintDevice__PageSize__AnsiA              QPagedPaintDevice__PageSize = 2
	QPagedPaintDevice__PageSize__AnsiB              QPagedPaintDevice__PageSize = 28
	QPagedPaintDevice__PageSize__EnvelopeC5         QPagedPaintDevice__PageSize = 24
	QPagedPaintDevice__PageSize__EnvelopeDL         QPagedPaintDevice__PageSize = 26
	QPagedPaintDevice__PageSize__Envelope10         QPagedPaintDevice__PageSize = 25
)

type QPagedPaintDevice__PdfVersion int

const (
	QPagedPaintDevice__PdfVersion__PdfVersion_1_4 QPagedPaintDevice__PdfVersion = 0
	QPagedPaintDevice__PdfVersion__PdfVersion_A1b QPagedPaintDevice__PdfVersion = 1
	QPagedPaintDevice__PdfVersion__PdfVersion_1_6 QPagedPaintDevice__PdfVersion = 2
)

type QPagedPaintDevice struct {
	h *C.QPagedPaintDevice
	*QPaintDevice
}

func (this *QPagedPaintDevice) cPointer() *C.QPagedPaintDevice {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPagedPaintDevice(h *C.QPagedPaintDevice) *QPagedPaintDevice {
	if h == nil {
		return nil
	}
	return &QPagedPaintDevice{h: h, QPaintDevice: newQPaintDevice_U(unsafe.Pointer(h))}
}

func newQPagedPaintDevice_U(h unsafe.Pointer) *QPagedPaintDevice {
	return newQPagedPaintDevice((*C.QPagedPaintDevice)(h))
}

func (this *QPagedPaintDevice) NewPage() bool {
	ret := C.QPagedPaintDevice_NewPage(this.h)
	return (bool)(ret)
}

func (this *QPagedPaintDevice) SetPageLayout(pageLayout *QPageLayout) bool {
	ret := C.QPagedPaintDevice_SetPageLayout(this.h, pageLayout.cPointer())
	return (bool)(ret)
}

func (this *QPagedPaintDevice) SetPageSize(pageSize *QPageSize) bool {
	ret := C.QPagedPaintDevice_SetPageSize(this.h, pageSize.cPointer())
	return (bool)(ret)
}

func (this *QPagedPaintDevice) SetPageOrientation(orientation QPageLayout__Orientation) bool {
	ret := C.QPagedPaintDevice_SetPageOrientation(this.h, (C.uintptr_t)(orientation))
	return (bool)(ret)
}

func (this *QPagedPaintDevice) SetPageMargins(margins *QMarginsF) bool {
	ret := C.QPagedPaintDevice_SetPageMargins(this.h, margins.cPointer())
	return (bool)(ret)
}

func (this *QPagedPaintDevice) SetPageMargins2(margins *QMarginsF, units QPageLayout__Unit) bool {
	ret := C.QPagedPaintDevice_SetPageMargins2(this.h, margins.cPointer(), (C.uintptr_t)(units))
	return (bool)(ret)
}

func (this *QPagedPaintDevice) PageLayout() *QPageLayout {
	ret := C.QPagedPaintDevice_PageLayout(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPageLayout(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPageLayout) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPagedPaintDevice) SetPageSizeWithSize(size QPagedPaintDevice__PageSize) {
	C.QPagedPaintDevice_SetPageSizeWithSize(this.h, (C.uintptr_t)(size))
}

func (this *QPagedPaintDevice) PageSize() QPagedPaintDevice__PageSize {
	ret := C.QPagedPaintDevice_PageSize(this.h)
	return (QPagedPaintDevice__PageSize)(ret)
}

func (this *QPagedPaintDevice) SetPageSizeMM(size *QSizeF) {
	C.QPagedPaintDevice_SetPageSizeMM(this.h, size.cPointer())
}

func (this *QPagedPaintDevice) PageSizeMM() *QSizeF {
	ret := C.QPagedPaintDevice_PageSizeMM(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPagedPaintDevice) SetMargins(margins *QPagedPaintDevice__Margins) {
	C.QPagedPaintDevice_SetMargins(this.h, margins.cPointer())
}

func (this *QPagedPaintDevice) Margins() *QPagedPaintDevice__Margins {
	ret := C.QPagedPaintDevice_Margins(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPagedPaintDevice__Margins(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPagedPaintDevice__Margins) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPagedPaintDevice) Delete() {
	C.QPagedPaintDevice_Delete(this.h)
}

type QPagedPaintDevice__Margins struct {
	h *C.QPagedPaintDevice__Margins
}

func (this *QPagedPaintDevice__Margins) cPointer() *C.QPagedPaintDevice__Margins {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPagedPaintDevice__Margins(h *C.QPagedPaintDevice__Margins) *QPagedPaintDevice__Margins {
	if h == nil {
		return nil
	}
	return &QPagedPaintDevice__Margins{h: h}
}

func newQPagedPaintDevice__Margins_U(h unsafe.Pointer) *QPagedPaintDevice__Margins {
	return newQPagedPaintDevice__Margins((*C.QPagedPaintDevice__Margins)(h))
}

func (this *QPagedPaintDevice__Margins) Delete() {
	C.QPagedPaintDevice__Margins_Delete(this.h)
}
