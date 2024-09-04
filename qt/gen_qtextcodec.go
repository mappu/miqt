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
	QTextCodec__ConversionFlag__DefaultConversion    QTextCodec__ConversionFlag = 0
	QTextCodec__ConversionFlag__ConvertInvalidToNull QTextCodec__ConversionFlag = 2147483648
	QTextCodec__ConversionFlag__IgnoreHeader         QTextCodec__ConversionFlag = 1
	QTextCodec__ConversionFlag__FreeFunction         QTextCodec__ConversionFlag = 2
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
	ret := C.QTextCodec_CodecForName(name.cPointer())
	return newQTextCodec_U(unsafe.Pointer(ret))
}

func QTextCodec_CodecForNameWithName(name string) *QTextCodec {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QTextCodec_CodecForNameWithName(name_Cstring)
	return newQTextCodec_U(unsafe.Pointer(ret))
}

func QTextCodec_CodecForMib(mib int) *QTextCodec {
	ret := C.QTextCodec_CodecForMib((C.int)(mib))
	return newQTextCodec_U(unsafe.Pointer(ret))
}

func QTextCodec_AvailableCodecs() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QTextCodec_AvailableCodecs(&_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextCodec_AvailableMibs() []int {
	var _out *C.int = nil
	var _out_len C.size_t = 0
	C.QTextCodec_AvailableMibs(&_out, &_out_len)
	ret := make([]int, int(_out_len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextCodec_CodecForLocale() *QTextCodec {
	ret := C.QTextCodec_CodecForLocale()
	return newQTextCodec_U(unsafe.Pointer(ret))
}

func QTextCodec_SetCodecForLocale(c *QTextCodec) {
	C.QTextCodec_SetCodecForLocale(c.cPointer())
}

func QTextCodec_CodecForHtml(ba *QByteArray) *QTextCodec {
	ret := C.QTextCodec_CodecForHtml(ba.cPointer())
	return newQTextCodec_U(unsafe.Pointer(ret))
}

func QTextCodec_CodecForHtml2(ba *QByteArray, defaultCodec *QTextCodec) *QTextCodec {
	ret := C.QTextCodec_CodecForHtml2(ba.cPointer(), defaultCodec.cPointer())
	return newQTextCodec_U(unsafe.Pointer(ret))
}

func QTextCodec_CodecForUtfText(ba *QByteArray) *QTextCodec {
	ret := C.QTextCodec_CodecForUtfText(ba.cPointer())
	return newQTextCodec_U(unsafe.Pointer(ret))
}

func QTextCodec_CodecForUtfText2(ba *QByteArray, defaultCodec *QTextCodec) *QTextCodec {
	ret := C.QTextCodec_CodecForUtfText2(ba.cPointer(), defaultCodec.cPointer())
	return newQTextCodec_U(unsafe.Pointer(ret))
}

func (this *QTextCodec) CanEncode(param1 QChar) bool {
	ret := C.QTextCodec_CanEncode(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QTextCodec) CanEncodeWithQString(param1 string) bool {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QTextCodec_CanEncodeWithQString(this.h, param1_Cstring, C.size_t(len(param1)))
	return (bool)(ret)
}

func (this *QTextCodec) ToUnicode(param1 *QByteArray) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextCodec_ToUnicode(this.h, param1.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextCodec) ToUnicodeWithChars(chars string) string {
	chars_Cstring := C.CString(chars)
	defer C.free(unsafe.Pointer(chars_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextCodec_ToUnicodeWithChars(this.h, chars_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextCodec) FromUnicode(uc string) *QByteArray {
	uc_Cstring := C.CString(uc)
	defer C.free(unsafe.Pointer(uc_Cstring))
	ret := C.QTextCodec_FromUnicode(this.h, uc_Cstring, C.size_t(len(uc)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextCodec) ToUnicode2(in string, length int) string {
	in_Cstring := C.CString(in)
	defer C.free(unsafe.Pointer(in_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextCodec_ToUnicode2(this.h, in_Cstring, (C.int)(length), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextCodec) FromUnicode2(in *QChar, length int) *QByteArray {
	ret := C.QTextCodec_FromUnicode2(this.h, in.cPointer(), (C.int)(length))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextCodec) MakeDecoder() *QTextDecoder {
	ret := C.QTextCodec_MakeDecoder(this.h)
	return newQTextDecoder_U(unsafe.Pointer(ret))
}

func (this *QTextCodec) MakeEncoder() *QTextEncoder {
	ret := C.QTextCodec_MakeEncoder(this.h)
	return newQTextEncoder_U(unsafe.Pointer(ret))
}

func (this *QTextCodec) Name() *QByteArray {
	ret := C.QTextCodec_Name(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextCodec) Aliases() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QTextCodec_Aliases(this.h, &_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextCodec) MibEnum() int {
	ret := C.QTextCodec_MibEnum(this.h)
	return (int)(ret)
}

func (this *QTextCodec) ToUnicode3(in string, length int, state *QTextCodec__ConverterState) string {
	in_Cstring := C.CString(in)
	defer C.free(unsafe.Pointer(in_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextCodec_ToUnicode3(this.h, in_Cstring, (C.int)(length), state.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextCodec) FromUnicode3(in *QChar, length int, state *QTextCodec__ConverterState) *QByteArray {
	ret := C.QTextCodec_FromUnicode3(this.h, in.cPointer(), (C.int)(length), state.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextCodec) MakeDecoder1(flags int) *QTextDecoder {
	ret := C.QTextCodec_MakeDecoder1(this.h, (C.int)(flags))
	return newQTextDecoder_U(unsafe.Pointer(ret))
}

func (this *QTextCodec) MakeEncoder1(flags int) *QTextEncoder {
	ret := C.QTextCodec_MakeEncoder1(this.h, (C.int)(flags))
	return newQTextEncoder_U(unsafe.Pointer(ret))
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
func NewQTextEncoder2(codec *QTextCodec, flags int) *QTextEncoder {
	ret := C.QTextEncoder_new2(codec.cPointer(), (C.int)(flags))
	return newQTextEncoder(ret)
}

func (this *QTextEncoder) FromUnicode(str string) *QByteArray {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QTextEncoder_FromUnicode(this.h, str_Cstring, C.size_t(len(str)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextEncoder) FromUnicode2(uc *QChar, lenVal int) *QByteArray {
	ret := C.QTextEncoder_FromUnicode2(this.h, uc.cPointer(), (C.int)(lenVal))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextEncoder) HasFailure() bool {
	ret := C.QTextEncoder_HasFailure(this.h)
	return (bool)(ret)
}

func (this *QTextEncoder) Delete() {
	C.QTextEncoder_Delete(this.h)
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
func NewQTextDecoder2(codec *QTextCodec, flags int) *QTextDecoder {
	ret := C.QTextDecoder_new2(codec.cPointer(), (C.int)(flags))
	return newQTextDecoder(ret)
}

func (this *QTextDecoder) ToUnicode(chars string, lenVal int) string {
	chars_Cstring := C.CString(chars)
	defer C.free(unsafe.Pointer(chars_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDecoder_ToUnicode(this.h, chars_Cstring, (C.int)(lenVal), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextDecoder) ToUnicodeWithBa(ba *QByteArray) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDecoder_ToUnicodeWithBa(this.h, ba.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextDecoder) HasFailure() bool {
	ret := C.QTextDecoder_HasFailure(this.h)
	return (bool)(ret)
}

func (this *QTextDecoder) NeedsMoreData() bool {
	ret := C.QTextDecoder_NeedsMoreData(this.h)
	return (bool)(ret)
}

func (this *QTextDecoder) Delete() {
	C.QTextDecoder_Delete(this.h)
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
func NewQTextCodec__ConverterState2(f int) *QTextCodec__ConverterState {
	ret := C.QTextCodec__ConverterState_new2((C.int)(f))
	return newQTextCodec__ConverterState(ret)
}

func (this *QTextCodec__ConverterState) Delete() {
	C.QTextCodec__ConverterState_Delete(this.h)
}
