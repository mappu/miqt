package qt6

/*

#include "gen_qstringconverter_base.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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

type QStringConverterBase struct {
	h *C.QStringConverterBase
}

func (this *QStringConverterBase) cPointer() *C.QStringConverterBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStringConverterBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStringConverterBase constructs the type using only CGO pointers.
func newQStringConverterBase(h *C.QStringConverterBase) *QStringConverterBase {
	if h == nil {
		return nil
	}

	return &QStringConverterBase{h: h}
}

// UnsafeNewQStringConverterBase constructs the type using only unsafe pointers.
func UnsafeNewQStringConverterBase(h unsafe.Pointer) *QStringConverterBase {
	return newQStringConverterBase((*C.QStringConverterBase)(h))
}

type QStringConverter struct {
	h *C.QStringConverter
	*QStringConverterBase
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
	var outptr_QStringConverterBase *C.QStringConverterBase = nil
	C.QStringConverter_virtbase(h, &outptr_QStringConverterBase)

	return &QStringConverter{h: h,
		QStringConverterBase: newQStringConverterBase(outptr_QStringConverterBase)}
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

type QStringConverterBase__State struct {
	h *C.QStringConverterBase__State
}

func (this *QStringConverterBase__State) cPointer() *C.QStringConverterBase__State {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStringConverterBase__State) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStringConverterBase__State constructs the type using only CGO pointers.
func newQStringConverterBase__State(h *C.QStringConverterBase__State) *QStringConverterBase__State {
	if h == nil {
		return nil
	}

	return &QStringConverterBase__State{h: h}
}

// UnsafeNewQStringConverterBase__State constructs the type using only unsafe pointers.
func UnsafeNewQStringConverterBase__State(h unsafe.Pointer) *QStringConverterBase__State {
	return newQStringConverterBase__State((*C.QStringConverterBase__State)(h))
}

// NewQStringConverterBase__State constructs a new QStringConverterBase::State object.
func NewQStringConverterBase__State() *QStringConverterBase__State {

	return newQStringConverterBase__State(C.QStringConverterBase__State_new())
}

// NewQStringConverterBase__State2 constructs a new QStringConverterBase::State object.
func NewQStringConverterBase__State2(f QStringConverterBase__Flag) *QStringConverterBase__State {

	return newQStringConverterBase__State(C.QStringConverterBase__State_new2((C.int)(f)))
}

func (this *QStringConverterBase__State) Clear() {
	C.QStringConverterBase__State_clear(this.h)
}

func (this *QStringConverterBase__State) Reset() {
	C.QStringConverterBase__State_reset(this.h)
}

// Delete this object from C++ memory.
func (this *QStringConverterBase__State) Delete() {
	C.QStringConverterBase__State_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStringConverterBase__State) GoGC() {
	runtime.SetFinalizer(this, func(this *QStringConverterBase__State) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
