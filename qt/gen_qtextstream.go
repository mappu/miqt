package qt

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
	h  *C.QTextStream
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTextStream) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

	return &QTextStream{h: h}
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
func NewQTextStream4(array []byte, openMode QIODevice__OpenModeFlag) *QTextStream {
	array_alias := C.struct_miqt_string{}
	if len(array) > 0 {
		array_alias.data = (*C.char)(unsafe.Pointer(&array[0]))
	} else {
		array_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	array_alias.len = C.size_t(len(array))

	return newQTextStream(C.QTextStream_new4(array_alias, (C.int)(openMode)))
}

func (this *QTextStream) SetCodec(codec *QTextCodec) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(codec)
	C.QTextStream_setCodec(this.h, codec.cPointer())
}

func (this *QTextStream) SetCodecWithCodecName(codecName string) {
	defer runtime.KeepAlive(this)
	codecName_Cstring := C.CString(codecName)
	defer C.free(unsafe.Pointer(codecName_Cstring))
	C.QTextStream_setCodecWithCodecName(this.h, codecName_Cstring)
}

func (this *QTextStream) Codec() *QTextCodec {
	defer runtime.KeepAlive(this)
	return newQTextCodec(C.QTextStream_codec(this.h))
}

func (this *QTextStream) SetAutoDetectUnicode(enabled bool) {
	defer runtime.KeepAlive(this)
	C.QTextStream_setAutoDetectUnicode(this.h, (C.bool)(enabled))
}

func (this *QTextStream) AutoDetectUnicode() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextStream_autoDetectUnicode(this.h))
}

func (this *QTextStream) SetGenerateByteOrderMark(generate bool) {
	defer runtime.KeepAlive(this)
	C.QTextStream_setGenerateByteOrderMark(this.h, (C.bool)(generate))
}

func (this *QTextStream) GenerateByteOrderMark() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextStream_generateByteOrderMark(this.h))
}

func (this *QTextStream) SetLocale(locale *QLocale) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(locale)
	C.QTextStream_setLocale(this.h, locale.cPointer())
}

func (this *QTextStream) Locale() *QLocale {
	defer runtime.KeepAlive(this)
	_goptr := newQLocale(C.QTextStream_locale(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextStream) SetDevice(device *QIODevice) {
	defer runtime.KeepAlive(this)
	C.QTextStream_setDevice(this.h, device.cPointer())
}

func (this *QTextStream) Device() *QIODevice {
	defer runtime.KeepAlive(this)
	return newQIODevice(C.QTextStream_device(this.h))
}

func (this *QTextStream) String() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QTextStream_string(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextStream) Status() QTextStream__Status {
	defer runtime.KeepAlive(this)
	return (QTextStream__Status)(C.QTextStream_status(this.h))
}

func (this *QTextStream) SetStatus(status QTextStream__Status) {
	defer runtime.KeepAlive(this)
	C.QTextStream_setStatus(this.h, (C.int)(status))
}

func (this *QTextStream) ResetStatus() {
	defer runtime.KeepAlive(this)
	C.QTextStream_resetStatus(this.h)
}

func (this *QTextStream) AtEnd() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextStream_atEnd(this.h))
}

func (this *QTextStream) Reset() {
	defer runtime.KeepAlive(this)
	C.QTextStream_reset(this.h)
}

func (this *QTextStream) Flush() {
	defer runtime.KeepAlive(this)
	C.QTextStream_flush(this.h)
}

func (this *QTextStream) Seek(pos int64) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextStream_seek(this.h, (C.longlong)(pos)))
}

func (this *QTextStream) Pos() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QTextStream_pos(this.h))
}

func (this *QTextStream) SkipWhiteSpace() {
	defer runtime.KeepAlive(this)
	C.QTextStream_skipWhiteSpace(this.h)
}

func (this *QTextStream) ReadLine() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QTextStream_readLine(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextStream) ReadAll() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QTextStream_readAll(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextStream) Read(maxlen int64) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QTextStream_read(this.h, (C.longlong)(maxlen))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextStream) SetFieldAlignment(alignment QTextStream__FieldAlignment) {
	defer runtime.KeepAlive(this)
	C.QTextStream_setFieldAlignment(this.h, (C.int)(alignment))
}

func (this *QTextStream) FieldAlignment() QTextStream__FieldAlignment {
	defer runtime.KeepAlive(this)
	return (QTextStream__FieldAlignment)(C.QTextStream_fieldAlignment(this.h))
}

func (this *QTextStream) SetPadChar(ch QChar) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(ch)
	C.QTextStream_setPadChar(this.h, ch.cPointer())
}

func (this *QTextStream) PadChar() *QChar {
	defer runtime.KeepAlive(this)
	_goptr := newQChar(C.QTextStream_padChar(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextStream) SetFieldWidth(width int) {
	defer runtime.KeepAlive(this)
	C.QTextStream_setFieldWidth(this.h, (C.int)(width))
}

func (this *QTextStream) FieldWidth() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTextStream_fieldWidth(this.h))
}

func (this *QTextStream) SetNumberFlags(flags QTextStream__NumberFlag) {
	defer runtime.KeepAlive(this)
	C.QTextStream_setNumberFlags(this.h, (C.int)(flags))
}

func (this *QTextStream) NumberFlags() QTextStream__NumberFlag {
	defer runtime.KeepAlive(this)
	return (QTextStream__NumberFlag)(C.QTextStream_numberFlags(this.h))
}

func (this *QTextStream) SetIntegerBase(base int) {
	defer runtime.KeepAlive(this)
	C.QTextStream_setIntegerBase(this.h, (C.int)(base))
}

func (this *QTextStream) IntegerBase() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTextStream_integerBase(this.h))
}

func (this *QTextStream) SetRealNumberNotation(notation QTextStream__RealNumberNotation) {
	defer runtime.KeepAlive(this)
	C.QTextStream_setRealNumberNotation(this.h, (C.int)(notation))
}

func (this *QTextStream) RealNumberNotation() QTextStream__RealNumberNotation {
	defer runtime.KeepAlive(this)
	return (QTextStream__RealNumberNotation)(C.QTextStream_realNumberNotation(this.h))
}

func (this *QTextStream) SetRealNumberPrecision(precision int) {
	defer runtime.KeepAlive(this)
	C.QTextStream_setRealNumberPrecision(this.h, (C.int)(precision))
}

func (this *QTextStream) RealNumberPrecision() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTextStream_realNumberPrecision(this.h))
}

func (this *QTextStream) OperatorShiftRight(ch *QChar) *QTextStream {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(ch)
	_ret := newQTextStream(C.QTextStream_operatorShiftRight(this.h, ch.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftRightWithCh(ch *int8) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftRightWithCh(this.h, (*C.char)(unsafe.Pointer(ch))))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftRightWithShort(i *int16) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftRightWithShort(this.h, (*C.short)(unsafe.Pointer(i))))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftRightWithUnsignedshort(i *uint16) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftRightWithUnsignedshort(this.h, (*C.ushort)(unsafe.Pointer(i))))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftRightWithInt(i *int) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftRightWithInt(this.h, (*C.int)(unsafe.Pointer(i))))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftRightWithUnsignedint(i *uint) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftRightWithUnsignedint(this.h, (*C.uint)(unsafe.Pointer(i))))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftRightWithLong(i *int64) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftRightWithLong(this.h, (*C.long)(unsafe.Pointer(i))))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftRightWithUnsignedlong(i *uint64) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftRightWithUnsignedlong(this.h, (*C.ulong)(unsafe.Pointer(i))))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftRightWithQlonglong(i *int64) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftRightWithQlonglong(this.h, (*C.longlong)(unsafe.Pointer(i))))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftRightWithQulonglong(i *uint64) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftRightWithQulonglong(this.h, (*C.ulonglong)(unsafe.Pointer(i))))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftRightWithFloat(f *float32) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftRightWithFloat(this.h, (*C.float)(unsafe.Pointer(f))))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftRightWithDouble(f *float64) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftRightWithDouble(this.h, (*C.double)(unsafe.Pointer(f))))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftRightWithQString(s string) *QTextStream {
	defer runtime.KeepAlive(this)
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	_ret := newQTextStream(C.QTextStream_operatorShiftRightWithQString(this.h, s_ms))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftRightWithArray(array []byte) *QTextStream {
	defer runtime.KeepAlive(this)
	array_alias := C.struct_miqt_string{}
	if len(array) > 0 {
		array_alias.data = (*C.char)(unsafe.Pointer(&array[0]))
	} else {
		array_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	array_alias.len = C.size_t(len(array))
	_ret := newQTextStream(C.QTextStream_operatorShiftRightWithArray(this.h, array_alias))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftRightWithChar(c string) *QTextStream {
	defer runtime.KeepAlive(this)
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	_ret := newQTextStream(C.QTextStream_operatorShiftRightWithChar(this.h, c_Cstring))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeft(ch QChar) *QTextStream {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(ch)
	_ret := newQTextStream(C.QTextStream_operatorShiftLeft(this.h, ch.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeftWithCh(ch int8) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftLeftWithCh(this.h, (C.char)(ch)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeftWithShort(i int16) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftLeftWithShort(this.h, (C.short)(i)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeftWithUnsignedshort(i uint16) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftLeftWithUnsignedshort(this.h, (C.ushort)(i)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeftWithInt(i int) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftLeftWithInt(this.h, (C.int)(i)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeftWithUnsignedint(i uint) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftLeftWithUnsignedint(this.h, (C.uint)(i)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeftWithLong(i int64) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftLeftWithLong(this.h, (C.long)(i)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeftWithUnsignedlong(i uint64) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftLeftWithUnsignedlong(this.h, (C.ulong)(i)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeftWithQlonglong(i int64) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftLeftWithQlonglong(this.h, (C.longlong)(i)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeftWithQulonglong(i uint64) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftLeftWithQulonglong(this.h, (C.ulonglong)(i)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeftWithFloat(f float32) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftLeftWithFloat(this.h, (C.float)(f)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeftWithDouble(f float64) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftLeftWithDouble(this.h, (C.double)(f)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeftWithQString(s string) *QTextStream {
	defer runtime.KeepAlive(this)
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	_ret := newQTextStream(C.QTextStream_operatorShiftLeftWithQString(this.h, s_ms))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeftWithArray(array []byte) *QTextStream {
	defer runtime.KeepAlive(this)
	array_alias := C.struct_miqt_string{}
	if len(array) > 0 {
		array_alias.data = (*C.char)(unsafe.Pointer(&array[0]))
	} else {
		array_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	array_alias.len = C.size_t(len(array))
	_ret := newQTextStream(C.QTextStream_operatorShiftLeftWithArray(this.h, array_alias))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeftWithChar(c string) *QTextStream {
	defer runtime.KeepAlive(this)
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	_ret := newQTextStream(C.QTextStream_operatorShiftLeftWithChar(this.h, c_Cstring))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) OperatorShiftLeftWithPtr(ptr unsafe.Pointer) *QTextStream {
	defer runtime.KeepAlive(this)
	_ret := newQTextStream(C.QTextStream_operatorShiftLeftWithPtr(this.h, ptr))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTextStream) ReadLineWithMaxlen(maxlen int64) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QTextStream_readLineWithMaxlen(this.h, (C.longlong)(maxlen))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTextStream) Delete() {
	C.QTextStream_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTextStream) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTextStream_delete((*C.QTextStream)(gc[0]))
	})
	this.miqtSetGC(gc)
}
