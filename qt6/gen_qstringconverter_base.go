package qt6

/*

#include "gen_qstringconverter_base.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QStringConverterBase__Flag int

const (
	QStringConverterBase__Default              QStringConverterBase__Flag = 0
	QStringConverterBase__Stateless            QStringConverterBase__Flag = 1
	QStringConverterBase__ConvertInvalidToNull QStringConverterBase__Flag = 2
	QStringConverterBase__WriteBom             QStringConverterBase__Flag = 4
	QStringConverterBase__ConvertInitialBom    QStringConverterBase__Flag = 8
	QStringConverterBase__UsesIcu              QStringConverterBase__Flag = 16
)

type QStringConverter__Encoding int

const (
	QStringConverter__Utf8         QStringConverter__Encoding = 0
	QStringConverter__Utf16        QStringConverter__Encoding = 1
	QStringConverter__Utf16LE      QStringConverter__Encoding = 2
	QStringConverter__Utf16BE      QStringConverter__Encoding = 3
	QStringConverter__Utf32        QStringConverter__Encoding = 4
	QStringConverter__Utf32LE      QStringConverter__Encoding = 5
	QStringConverter__Utf32BE      QStringConverter__Encoding = 6
	QStringConverter__Latin1       QStringConverter__Encoding = 7
	QStringConverter__System       QStringConverter__Encoding = 8
	QStringConverter__LastEncoding QStringConverter__Encoding = 8
)

type QStringConverter struct {
	h *C.QStringConverter
}

func (this *QStringConverter) cPointer() *C.QStringConverter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStringConverter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStringConverter constructs the type using only CGO pointers.
func newQStringConverter(h *C.QStringConverter) *QStringConverter {
	if h == nil {
		return nil
	}

	return &QStringConverter{h: h}
}

// UnsafeNewQStringConverter constructs the type using only unsafe pointers.
func UnsafeNewQStringConverter(h unsafe.Pointer) *QStringConverter {
	return newQStringConverter((*C.QStringConverter)(h))
}

func (this *QStringConverter) IsValid() bool {
	return (bool)(C.QStringConverter_isValid(this.h))
}

func (this *QStringConverter) ResetState() {
	C.QStringConverter_resetState(this.h)
}

func (this *QStringConverter) HasError() bool {
	return (bool)(C.QStringConverter_hasError(this.h))
}

func (this *QStringConverter) Name() string {
	_ret := C.QStringConverter_name(this.h)
	return C.GoString(_ret)
}

func QStringConverter_NameForEncoding(e QStringConverter__Encoding) string {
	_ret := C.QStringConverter_nameForEncoding((C.int)(e))
	return C.GoString(_ret)
}
