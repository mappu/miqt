package qt

/*

#include "gen_qtextcodec.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextCodec__ConversionFlag int

const (
	QTextCodec__DefaultConversion    QTextCodec__ConversionFlag = 0
	QTextCodec__ConvertInvalidToNull QTextCodec__ConversionFlag = 2147483648
	QTextCodec__IgnoreHeader         QTextCodec__ConversionFlag = 1
	QTextCodec__FreeFunction         QTextCodec__ConversionFlag = 2
)

type QTextCodec struct {
	h *C.QTextCodec
}

func (this *QTextCodec) cPointer() *C.QTextCodec {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextCodec(h *C.QTextCodec) *QTextCodec {
	if h == nil {
		return nil
	}
	return &QTextCodec{h: h}
}

func newQTextCodec_U(h unsafe.Pointer) *QTextCodec {
	return newQTextCodec((*C.QTextCodec)(h))
}

func QTextCodec_CodecForName(name *QByteArray) *QTextCodec {
	return newQTextCodec_U(unsafe.Pointer(C.QTextCodec_CodecForName(name.cPointer())))
}

func QTextCodec_CodecForNameWithName(name string) *QTextCodec {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	return newQTextCodec_U(unsafe.Pointer(C.QTextCodec_CodecForNameWithName(name_Cstring)))
}

func QTextCodec_CodecForMib(mib int) *QTextCodec {
	return newQTextCodec_U(unsafe.Pointer(C.QTextCodec_CodecForMib((C.int)(mib))))
}

func QTextCodec_AvailableCodecs() []QByteArray {
	var _ma *C.struct_miqt_array = C.QTextCodec_AvailableCodecs()
	_ret := make([]QByteArray, int(_ma.len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQByteArray(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QTextCodec_AvailableMibs() []int {
	var _ma *C.struct_miqt_array = C.QTextCodec_AvailableMibs()
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QTextCodec_CodecForLocale() *QTextCodec {
	return newQTextCodec_U(unsafe.Pointer(C.QTextCodec_CodecForLocale()))
}

func QTextCodec_SetCodecForLocale(c *QTextCodec) {
	C.QTextCodec_SetCodecForLocale(c.cPointer())
}

func QTextCodec_CodecForHtml(ba *QByteArray) *QTextCodec {
	return newQTextCodec_U(unsafe.Pointer(C.QTextCodec_CodecForHtml(ba.cPointer())))
}

func QTextCodec_CodecForHtml2(ba *QByteArray, defaultCodec *QTextCodec) *QTextCodec {
	return newQTextCodec_U(unsafe.Pointer(C.QTextCodec_CodecForHtml2(ba.cPointer(), defaultCodec.cPointer())))
}

func QTextCodec_CodecForUtfText(ba *QByteArray) *QTextCodec {
	return newQTextCodec_U(unsafe.Pointer(C.QTextCodec_CodecForUtfText(ba.cPointer())))
}

func QTextCodec_CodecForUtfText2(ba *QByteArray, defaultCodec *QTextCodec) *QTextCodec {
	return newQTextCodec_U(unsafe.Pointer(C.QTextCodec_CodecForUtfText2(ba.cPointer(), defaultCodec.cPointer())))
}

func (this *QTextCodec) CanEncode(param1 QChar) bool {
	return (bool)(C.QTextCodec_CanEncode(this.h, param1.cPointer()))
}

func (this *QTextCodec) CanEncodeWithQString(param1 string) bool {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	return (bool)(C.QTextCodec_CanEncodeWithQString(this.h, (*C.struct_miqt_string)(param1_ms)))
}

func (this *QTextCodec) ToUnicode(param1 *QByteArray) string {
	var _ms *C.struct_miqt_string = C.QTextCodec_ToUnicode(this.h, param1.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextCodec) ToUnicodeWithChars(chars string) string {
	chars_Cstring := C.CString(chars)
	defer C.free(unsafe.Pointer(chars_Cstring))
	var _ms *C.struct_miqt_string = C.QTextCodec_ToUnicodeWithChars(this.h, chars_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextCodec) FromUnicode(uc string) *QByteArray {
	uc_ms := miqt_strdupg(uc)
	defer C.free(uc_ms)
	_ret := C.QTextCodec_FromUnicode(this.h, (*C.struct_miqt_string)(uc_ms))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCodec) ToUnicode2(in string, length int) string {
	in_Cstring := C.CString(in)
	defer C.free(unsafe.Pointer(in_Cstring))
	var _ms *C.struct_miqt_string = C.QTextCodec_ToUnicode2(this.h, in_Cstring, (C.int)(length))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextCodec) FromUnicode2(in *QChar, length int) *QByteArray {
	_ret := C.QTextCodec_FromUnicode2(this.h, in.cPointer(), (C.int)(length))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCodec) MakeDecoder() *QTextDecoder {
	return newQTextDecoder_U(unsafe.Pointer(C.QTextCodec_MakeDecoder(this.h)))
}

func (this *QTextCodec) MakeEncoder() *QTextEncoder {
	return newQTextEncoder_U(unsafe.Pointer(C.QTextCodec_MakeEncoder(this.h)))
}

func (this *QTextCodec) Name() *QByteArray {
	_ret := C.QTextCodec_Name(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCodec) Aliases() []QByteArray {
	var _ma *C.struct_miqt_array = C.QTextCodec_Aliases(this.h)
	_ret := make([]QByteArray, int(_ma.len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQByteArray(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTextCodec) MibEnum() int {
	return (int)(C.QTextCodec_MibEnum(this.h))
}

func (this *QTextCodec) ToUnicode3(in string, length int, state *QTextCodec__ConverterState) string {
	in_Cstring := C.CString(in)
	defer C.free(unsafe.Pointer(in_Cstring))
	var _ms *C.struct_miqt_string = C.QTextCodec_ToUnicode3(this.h, in_Cstring, (C.int)(length), state.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextCodec) FromUnicode3(in *QChar, length int, state *QTextCodec__ConverterState) *QByteArray {
	_ret := C.QTextCodec_FromUnicode3(this.h, in.cPointer(), (C.int)(length), state.cPointer())
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCodec) MakeDecoder1(flags QTextCodec__ConversionFlag) *QTextDecoder {
	return newQTextDecoder_U(unsafe.Pointer(C.QTextCodec_MakeDecoder1(this.h, (C.int)(flags))))
}

func (this *QTextCodec) MakeEncoder1(flags QTextCodec__ConversionFlag) *QTextEncoder {
	return newQTextEncoder_U(unsafe.Pointer(C.QTextCodec_MakeEncoder1(this.h, (C.int)(flags))))
}

type QTextEncoder struct {
	h *C.QTextEncoder
}

func (this *QTextEncoder) cPointer() *C.QTextEncoder {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextEncoder(h *C.QTextEncoder) *QTextEncoder {
	if h == nil {
		return nil
	}
	return &QTextEncoder{h: h}
}

func newQTextEncoder_U(h unsafe.Pointer) *QTextEncoder {
	return newQTextEncoder((*C.QTextEncoder)(h))
}

// NewQTextEncoder constructs a new QTextEncoder object.
func NewQTextEncoder(codec *QTextCodec) *QTextEncoder {
	ret := C.QTextEncoder_new(codec.cPointer())
	return newQTextEncoder(ret)
}

// NewQTextEncoder2 constructs a new QTextEncoder object.
func NewQTextEncoder2(codec *QTextCodec, flags QTextCodec__ConversionFlag) *QTextEncoder {
	ret := C.QTextEncoder_new2(codec.cPointer(), (C.int)(flags))
	return newQTextEncoder(ret)
}

func (this *QTextEncoder) FromUnicode(str string) *QByteArray {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	_ret := C.QTextEncoder_FromUnicode(this.h, (*C.struct_miqt_string)(str_ms))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEncoder) FromUnicode2(uc *QChar, lenVal int) *QByteArray {
	_ret := C.QTextEncoder_FromUnicode2(this.h, uc.cPointer(), (C.int)(lenVal))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEncoder) HasFailure() bool {
	return (bool)(C.QTextEncoder_HasFailure(this.h))
}

// Delete this object from C++ memory.
func (this *QTextEncoder) Delete() {
	C.QTextEncoder_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextEncoder) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextEncoder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextDecoder struct {
	h *C.QTextDecoder
}

func (this *QTextDecoder) cPointer() *C.QTextDecoder {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextDecoder(h *C.QTextDecoder) *QTextDecoder {
	if h == nil {
		return nil
	}
	return &QTextDecoder{h: h}
}

func newQTextDecoder_U(h unsafe.Pointer) *QTextDecoder {
	return newQTextDecoder((*C.QTextDecoder)(h))
}

// NewQTextDecoder constructs a new QTextDecoder object.
func NewQTextDecoder(codec *QTextCodec) *QTextDecoder {
	ret := C.QTextDecoder_new(codec.cPointer())
	return newQTextDecoder(ret)
}

// NewQTextDecoder2 constructs a new QTextDecoder object.
func NewQTextDecoder2(codec *QTextCodec, flags QTextCodec__ConversionFlag) *QTextDecoder {
	ret := C.QTextDecoder_new2(codec.cPointer(), (C.int)(flags))
	return newQTextDecoder(ret)
}

func (this *QTextDecoder) ToUnicode(chars string, lenVal int) string {
	chars_Cstring := C.CString(chars)
	defer C.free(unsafe.Pointer(chars_Cstring))
	var _ms *C.struct_miqt_string = C.QTextDecoder_ToUnicode(this.h, chars_Cstring, (C.int)(lenVal))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextDecoder) ToUnicodeWithBa(ba *QByteArray) string {
	var _ms *C.struct_miqt_string = C.QTextDecoder_ToUnicodeWithBa(this.h, ba.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextDecoder) HasFailure() bool {
	return (bool)(C.QTextDecoder_HasFailure(this.h))
}

func (this *QTextDecoder) NeedsMoreData() bool {
	return (bool)(C.QTextDecoder_NeedsMoreData(this.h))
}

// Delete this object from C++ memory.
func (this *QTextDecoder) Delete() {
	C.QTextDecoder_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextDecoder) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextDecoder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextCodec__ConverterState struct {
	h *C.QTextCodec__ConverterState
}

func (this *QTextCodec__ConverterState) cPointer() *C.QTextCodec__ConverterState {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextCodec__ConverterState(h *C.QTextCodec__ConverterState) *QTextCodec__ConverterState {
	if h == nil {
		return nil
	}
	return &QTextCodec__ConverterState{h: h}
}

func newQTextCodec__ConverterState_U(h unsafe.Pointer) *QTextCodec__ConverterState {
	return newQTextCodec__ConverterState((*C.QTextCodec__ConverterState)(h))
}

// NewQTextCodec__ConverterState constructs a new QTextCodec::ConverterState object.
func NewQTextCodec__ConverterState() *QTextCodec__ConverterState {
	ret := C.QTextCodec__ConverterState_new()
	return newQTextCodec__ConverterState(ret)
}

// NewQTextCodec__ConverterState2 constructs a new QTextCodec::ConverterState object.
func NewQTextCodec__ConverterState2(f QTextCodec__ConversionFlag) *QTextCodec__ConverterState {
	ret := C.QTextCodec__ConverterState_new2((C.int)(f))
	return newQTextCodec__ConverterState(ret)
}

// Delete this object from C++ memory.
func (this *QTextCodec__ConverterState) Delete() {
	C.QTextCodec__ConverterState_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextCodec__ConverterState) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextCodec__ConverterState) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
