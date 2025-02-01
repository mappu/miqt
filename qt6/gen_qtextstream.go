package qt6

/*

#include "gen_qtextstream.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextStream__RealNumberNotation int

const (
	QTextStream__SmartNotation      QTextStream__RealNumberNotation = 0
	QTextStream__FixedNotation      QTextStream__RealNumberNotation = 1
	QTextStream__ScientificNotation QTextStream__RealNumberNotation = 2
)

type QTextStream__FieldAlignment int

const (
	QTextStream__AlignLeft            QTextStream__FieldAlignment = 0
	QTextStream__AlignRight           QTextStream__FieldAlignment = 1
	QTextStream__AlignCenter          QTextStream__FieldAlignment = 2
	QTextStream__AlignAccountingStyle QTextStream__FieldAlignment = 3
)

type QTextStream__Status int

const (
	QTextStream__Ok              QTextStream__Status = 0
	QTextStream__ReadPastEnd     QTextStream__Status = 1
	QTextStream__ReadCorruptData QTextStream__Status = 2
	QTextStream__WriteFailed     QTextStream__Status = 3
)

type QTextStream__NumberFlag int

const (
	QTextStream__ShowBase        QTextStream__NumberFlag = 1
	QTextStream__ForcePoint      QTextStream__NumberFlag = 2
	QTextStream__ForceSign       QTextStream__NumberFlag = 4
	QTextStream__UppercaseBase   QTextStream__NumberFlag = 8
	QTextStream__UppercaseDigits QTextStream__NumberFlag = 16
)

type QTextStream struct {
	h *C.QTextStream
	*QIODeviceBase
}

func (this *QTextStream) cPointer() *C.QTextStream {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextStream) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextStream constructs the type using only CGO pointers.
func newQTextStream(h *C.QTextStream) *QTextStream {
	if h == nil {
		return nil
	}
	var outptr_QIODeviceBase *C.QIODeviceBase = nil
	C.QTextStream_virtbase(h, &outptr_QIODeviceBase)

	return &QTextStream{h: h,
		QIODeviceBase: newQIODeviceBase(outptr_QIODeviceBase)}
}

// UnsafeNewQTextStream constructs the type using only unsafe pointers.
func UnsafeNewQTextStream(h unsafe.Pointer) *QTextStream {
	return newQTextStream((*C.QTextStream)(h))
}

// NewQTextStream constructs a new QTextStream object.
func NewQTextStream() *QTextStream {

	return newQTextStream(C.QTextStream_new())
}

// NewQTextStream2 constructs a new QTextStream object.
func NewQTextStream2(device *QIODevice) *QTextStream {

	return newQTextStream(C.QTextStream_new2(device.cPointer()))
}

// NewQTextStream3 constructs a new QTextStream object.
func NewQTextStream3(array []byte) *QTextStream {
	array_alias := C.struct_miqt_string{}
	if len(array) > 0 {
		array_alias.data = (*C.char)(unsafe.Pointer(&array[0]))
	} else {
		array_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	array_alias.len = C.size_t(len(array))

	return newQTextStream(C.QTextStream_new3(array_alias))
}

// NewQTextStream4 constructs a new QTextStream object.
func NewQTextStream4(array []byte, openMode QIODeviceBase__OpenModeFlag) *QTextStream {
	array_alias := C.struct_miqt_string{}
	if len(array) > 0 {
		array_alias.data = (*C.char)(unsafe.Pointer(&array[0]))
	} else {
		array_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	array_alias.len = C.size_t(len(array))

	return newQTextStream(C.QTextStream_new4(array_alias, (C.int)(openMode)))
}

func (this *QTextStream) SetEncoding(encoding QStringConverter__Encoding) {
	C.QTextStream_setEncoding(this.h, (C.int)(encoding))
}

func (this *QTextStream) Encoding() QStringConverter__Encoding {
	return (QStringConverter__Encoding)(C.QTextStream_encoding(this.h))
}

func (this *QTextStream) SetAutoDetectUnicode(enabled bool) {
	C.QTextStream_setAutoDetectUnicode(this.h, (C.bool)(enabled))
}

func (this *QTextStream) AutoDetectUnicode() bool {
	return (bool)(C.QTextStream_autoDetectUnicode(this.h))
}

func (this *QTextStream) SetGenerateByteOrderMark(generate bool) {
	C.QTextStream_setGenerateByteOrderMark(this.h, (C.bool)(generate))
}

func (this *QTextStream) GenerateByteOrderMark() bool {
	return (bool)(C.QTextStream_generateByteOrderMark(this.h))
}

func (this *QTextStream) SetLocale(locale *QLocale) {
	C.QTextStream_setLocale(this.h, locale.cPointer())
}

func (this *QTextStream) Locale() *QLocale {
	_goptr := newQLocale(C.QTextStream_locale(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextStream) SetDevice(device *QIODevice) {
	C.QTextStream_setDevice(this.h, device.cPointer())
}

func (this *QTextStream) Device() *QIODevice {
	return newQIODevice(C.QTextStream_device(this.h))
}

func (this *QTextStream) String() string {
	var _ms C.struct_miqt_string = C.QTextStream_string(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextStream) Status() QTextStream__Status {
	return (QTextStream__Status)(C.QTextStream_status(this.h))
}

func (this *QTextStream) SetStatus(status QTextStream__Status) {
	C.QTextStream_setStatus(this.h, (C.int)(status))
}

func (this *QTextStream) ResetStatus() {
	C.QTextStream_resetStatus(this.h)
}

func (this *QTextStream) AtEnd() bool {
	return (bool)(C.QTextStream_atEnd(this.h))
}

func (this *QTextStream) Reset() {
	C.QTextStream_reset(this.h)
}

func (this *QTextStream) Flush() {
	C.QTextStream_flush(this.h)
}

func (this *QTextStream) Seek(pos int64) bool {
	return (bool)(C.QTextStream_seek(this.h, (C.longlong)(pos)))
}

func (this *QTextStream) Pos() int64 {
	return (int64)(C.QTextStream_pos(this.h))
}

func (this *QTextStream) SkipWhiteSpace() {
	C.QTextStream_skipWhiteSpace(this.h)
}

func (this *QTextStream) ReadLine() string {
	var _ms C.struct_miqt_string = C.QTextStream_readLine(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextStream) ReadAll() string {
	var _ms C.struct_miqt_string = C.QTextStream_readAll(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextStream) Read(maxlen int64) string {
	var _ms C.struct_miqt_string = C.QTextStream_read(this.h, (C.longlong)(maxlen))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextStream) SetFieldAlignment(alignment QTextStream__FieldAlignment) {
	C.QTextStream_setFieldAlignment(this.h, (C.int)(alignment))
}

func (this *QTextStream) FieldAlignment() QTextStream__FieldAlignment {
	return (QTextStream__FieldAlignment)(C.QTextStream_fieldAlignment(this.h))
}

func (this *QTextStream) SetPadChar(ch QChar) {
	C.QTextStream_setPadChar(this.h, ch.cPointer())
}

func (this *QTextStream) PadChar() *QChar {
	_goptr := newQChar(C.QTextStream_padChar(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextStream) SetFieldWidth(width int) {
	C.QTextStream_setFieldWidth(this.h, (C.int)(width))
}

func (this *QTextStream) FieldWidth() int {
	return (int)(C.QTextStream_fieldWidth(this.h))
}

func (this *QTextStream) SetNumberFlags(flags QTextStream__NumberFlag) {
	C.QTextStream_setNumberFlags(this.h, (C.int)(flags))
}

func (this *QTextStream) NumberFlags() QTextStream__NumberFlag {
	return (QTextStream__NumberFlag)(C.QTextStream_numberFlags(this.h))
}

func (this *QTextStream) SetIntegerBase(base int) {
	C.QTextStream_setIntegerBase(this.h, (C.int)(base))
}

func (this *QTextStream) IntegerBase() int {
	return (int)(C.QTextStream_integerBase(this.h))
}

func (this *QTextStream) SetRealNumberNotation(notation QTextStream__RealNumberNotation) {
	C.QTextStream_setRealNumberNotation(this.h, (C.int)(notation))
}

func (this *QTextStream) RealNumberNotation() QTextStream__RealNumberNotation {
	return (QTextStream__RealNumberNotation)(C.QTextStream_realNumberNotation(this.h))
}

func (this *QTextStream) SetRealNumberPrecision(precision int) {
	C.QTextStream_setRealNumberPrecision(this.h, (C.int)(precision))
}

func (this *QTextStream) RealNumberPrecision() int {
	return (int)(C.QTextStream_realNumberPrecision(this.h))
}

func (this *QTextStream) OperatorShiftRight(ch *QChar) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftRight(this.h, ch.cPointer()))
}

func (this *QTextStream) OperatorShiftRightWithCh(ch *int8) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftRightWithCh(this.h, (*C.char)(unsafe.Pointer(ch))))
}

func (this *QTextStream) OperatorShiftRightWithShort(i *int16) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftRightWithShort(this.h, (*C.int16_t)(unsafe.Pointer(i))))
}

func (this *QTextStream) OperatorShiftRightWithUnsignedshort(i *uint16) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftRightWithUnsignedshort(this.h, (*C.uint16_t)(unsafe.Pointer(i))))
}

func (this *QTextStream) OperatorShiftRightWithInt(i *int) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftRightWithInt(this.h, (*C.int)(unsafe.Pointer(i))))
}

func (this *QTextStream) OperatorShiftRightWithUnsignedint(i *uint) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftRightWithUnsignedint(this.h, (*C.uint)(unsafe.Pointer(i))))
}

func (this *QTextStream) OperatorShiftRightWithLong(i *int64) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftRightWithLong(this.h, (*C.long)(unsafe.Pointer(i))))
}

func (this *QTextStream) OperatorShiftRightWithUnsignedlong(i *uint64) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftRightWithUnsignedlong(this.h, (*C.ulong)(unsafe.Pointer(i))))
}

func (this *QTextStream) OperatorShiftRightWithQlonglong(i *int64) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftRightWithQlonglong(this.h, (*C.longlong)(unsafe.Pointer(i))))
}

func (this *QTextStream) OperatorShiftRightWithQulonglong(i *uint64) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftRightWithQulonglong(this.h, (*C.ulonglong)(unsafe.Pointer(i))))
}

func (this *QTextStream) OperatorShiftRightWithFloat(f *float32) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftRightWithFloat(this.h, (*C.float)(unsafe.Pointer(f))))
}

func (this *QTextStream) OperatorShiftRightWithDouble(f *float64) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftRightWithDouble(this.h, (*C.double)(unsafe.Pointer(f))))
}

func (this *QTextStream) OperatorShiftRightWithQString(s string) *QTextStream {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return newQTextStream(C.QTextStream_operatorShiftRightWithQString(this.h, s_ms))
}

func (this *QTextStream) OperatorShiftRightWithArray(array []byte) *QTextStream {
	array_alias := C.struct_miqt_string{}
	if len(array) > 0 {
		array_alias.data = (*C.char)(unsafe.Pointer(&array[0]))
	} else {
		array_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	array_alias.len = C.size_t(len(array))
	return newQTextStream(C.QTextStream_operatorShiftRightWithArray(this.h, array_alias))
}

func (this *QTextStream) OperatorShiftRightWithChar(c string) *QTextStream {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	return newQTextStream(C.QTextStream_operatorShiftRightWithChar(this.h, c_Cstring))
}

func (this *QTextStream) OperatorShiftLeft(ch QChar) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftLeft(this.h, ch.cPointer()))
}

func (this *QTextStream) OperatorShiftLeftWithCh(ch int8) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftLeftWithCh(this.h, (C.char)(ch)))
}

func (this *QTextStream) OperatorShiftLeftWithShort(i int16) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftLeftWithShort(this.h, (C.int16_t)(i)))
}

func (this *QTextStream) OperatorShiftLeftWithUnsignedshort(i uint16) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftLeftWithUnsignedshort(this.h, (C.uint16_t)(i)))
}

func (this *QTextStream) OperatorShiftLeftWithInt(i int) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftLeftWithInt(this.h, (C.int)(i)))
}

func (this *QTextStream) OperatorShiftLeftWithUnsignedint(i uint) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftLeftWithUnsignedint(this.h, (C.uint)(i)))
}

func (this *QTextStream) OperatorShiftLeftWithLong(i int64) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftLeftWithLong(this.h, (C.long)(i)))
}

func (this *QTextStream) OperatorShiftLeftWithUnsignedlong(i uint64) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftLeftWithUnsignedlong(this.h, (C.ulong)(i)))
}

func (this *QTextStream) OperatorShiftLeftWithQlonglong(i int64) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftLeftWithQlonglong(this.h, (C.longlong)(i)))
}

func (this *QTextStream) OperatorShiftLeftWithQulonglong(i uint64) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftLeftWithQulonglong(this.h, (C.ulonglong)(i)))
}

func (this *QTextStream) OperatorShiftLeftWithFloat(f float32) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftLeftWithFloat(this.h, (C.float)(f)))
}

func (this *QTextStream) OperatorShiftLeftWithDouble(f float64) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftLeftWithDouble(this.h, (C.double)(f)))
}

func (this *QTextStream) OperatorShiftLeftWithQString(s string) *QTextStream {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return newQTextStream(C.QTextStream_operatorShiftLeftWithQString(this.h, s_ms))
}

func (this *QTextStream) OperatorShiftLeftWithArray(array []byte) *QTextStream {
	array_alias := C.struct_miqt_string{}
	if len(array) > 0 {
		array_alias.data = (*C.char)(unsafe.Pointer(&array[0]))
	} else {
		array_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	array_alias.len = C.size_t(len(array))
	return newQTextStream(C.QTextStream_operatorShiftLeftWithArray(this.h, array_alias))
}

func (this *QTextStream) OperatorShiftLeftWithChar(c string) *QTextStream {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	return newQTextStream(C.QTextStream_operatorShiftLeftWithChar(this.h, c_Cstring))
}

func (this *QTextStream) OperatorShiftLeftWithPtr(ptr unsafe.Pointer) *QTextStream {
	return newQTextStream(C.QTextStream_operatorShiftLeftWithPtr(this.h, ptr))
}

func (this *QTextStream) ReadLine1(maxlen int64) string {
	var _ms C.struct_miqt_string = C.QTextStream_readLine1(this.h, (C.longlong)(maxlen))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTextStream) Delete() {
	C.QTextStream_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextStream) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextStream) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
