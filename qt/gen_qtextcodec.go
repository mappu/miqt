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
	QTextCodec__DefaultConversion QTextCodec__ConversionFlag = 0
	QTextCodec__IgnoreHeader      QTextCodec__ConversionFlag = 1
	QTextCodec__FreeFunction      QTextCodec__ConversionFlag = 2
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

func (this *QTextCodec) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextCodec constructs the type using only CGO pointers.
func newQTextCodec(h *C.QTextCodec) *QTextCodec {
	if h == nil {
		return nil
	}

	return &QTextCodec{h: h}
}

// UnsafeNewQTextCodec constructs the type using only unsafe pointers.
func UnsafeNewQTextCodec(h unsafe.Pointer) *QTextCodec {
	return newQTextCodec((*C.QTextCodec)(h))
}

func QTextCodec_CodecForName(name []byte) *QTextCodec {
	name_alias := C.struct_miqt_string{}
	if len(name) > 0 {
		name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	} else {
		name_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	name_alias.len = C.size_t(len(name))
	return newQTextCodec(C.QTextCodec_CodecForName(name_alias))
}

func QTextCodec_CodecForNameWithName(name string) *QTextCodec {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	return newQTextCodec(C.QTextCodec_CodecForNameWithName(name_Cstring))
}

func QTextCodec_CodecForMib(mib int) *QTextCodec {
	return newQTextCodec(C.QTextCodec_CodecForMib((C.int)(mib)))
}

func QTextCodec_AvailableCodecs() [][]byte {
	var _ma C.struct_miqt_array = C.QTextCodec_AvailableCodecs()
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QTextCodec_AvailableMibs() []int {
	var _ma C.struct_miqt_array = C.QTextCodec_AvailableMibs()
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func QTextCodec_CodecForLocale() *QTextCodec {
	return newQTextCodec(C.QTextCodec_CodecForLocale())
}

func QTextCodec_SetCodecForLocale(c *QTextCodec) {
	C.QTextCodec_SetCodecForLocale(c.cPointer())
}

func QTextCodec_CodecForHtml(ba []byte) *QTextCodec {
	ba_alias := C.struct_miqt_string{}
	if len(ba) > 0 {
		ba_alias.data = (*C.char)(unsafe.Pointer(&ba[0]))
	} else {
		ba_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	ba_alias.len = C.size_t(len(ba))
	return newQTextCodec(C.QTextCodec_CodecForHtml(ba_alias))
}

func QTextCodec_CodecForHtml2(ba []byte, defaultCodec *QTextCodec) *QTextCodec {
	ba_alias := C.struct_miqt_string{}
	if len(ba) > 0 {
		ba_alias.data = (*C.char)(unsafe.Pointer(&ba[0]))
	} else {
		ba_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	ba_alias.len = C.size_t(len(ba))
	return newQTextCodec(C.QTextCodec_CodecForHtml2(ba_alias, defaultCodec.cPointer()))
}

func QTextCodec_CodecForUtfText(ba []byte) *QTextCodec {
	ba_alias := C.struct_miqt_string{}
	if len(ba) > 0 {
		ba_alias.data = (*C.char)(unsafe.Pointer(&ba[0]))
	} else {
		ba_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	ba_alias.len = C.size_t(len(ba))
	return newQTextCodec(C.QTextCodec_CodecForUtfText(ba_alias))
}

func QTextCodec_CodecForUtfText2(ba []byte, defaultCodec *QTextCodec) *QTextCodec {
	ba_alias := C.struct_miqt_string{}
	if len(ba) > 0 {
		ba_alias.data = (*C.char)(unsafe.Pointer(&ba[0]))
	} else {
		ba_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	ba_alias.len = C.size_t(len(ba))
	return newQTextCodec(C.QTextCodec_CodecForUtfText2(ba_alias, defaultCodec.cPointer()))
}

func (this *QTextCodec) CanEncode(param1 QChar) bool {
	return (bool)(C.QTextCodec_CanEncode(this.h, param1.cPointer()))
}

func (this *QTextCodec) CanEncodeWithQString(param1 string) bool {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return (bool)(C.QTextCodec_CanEncodeWithQString(this.h, param1_ms))
}

func (this *QTextCodec) ToUnicode(param1 []byte) string {
	param1_alias := C.struct_miqt_string{}
	if len(param1) > 0 {
		param1_alias.data = (*C.char)(unsafe.Pointer(&param1[0]))
	} else {
		param1_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	param1_alias.len = C.size_t(len(param1))
	var _ms C.struct_miqt_string = C.QTextCodec_ToUnicode(this.h, param1_alias)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextCodec) ToUnicodeWithChars(chars string) string {
	chars_Cstring := C.CString(chars)
	defer C.free(unsafe.Pointer(chars_Cstring))
	var _ms C.struct_miqt_string = C.QTextCodec_ToUnicodeWithChars(this.h, chars_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextCodec) FromUnicode(uc string) []byte {
	uc_ms := C.struct_miqt_string{}
	uc_ms.data = C.CString(uc)
	uc_ms.len = C.size_t(len(uc))
	defer C.free(unsafe.Pointer(uc_ms.data))
	var _bytearray C.struct_miqt_string = C.QTextCodec_FromUnicode(this.h, uc_ms)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QTextCodec) ToUnicode2(in string, length int) string {
	in_Cstring := C.CString(in)
	defer C.free(unsafe.Pointer(in_Cstring))
	var _ms C.struct_miqt_string = C.QTextCodec_ToUnicode2(this.h, in_Cstring, (C.int)(length))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextCodec) FromUnicode2(in *QChar, length int) []byte {
	var _bytearray C.struct_miqt_string = C.QTextCodec_FromUnicode2(this.h, in.cPointer(), (C.int)(length))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QTextCodec) MakeDecoder() *QTextDecoder {
	return newQTextDecoder(C.QTextCodec_MakeDecoder(this.h))
}

func (this *QTextCodec) MakeEncoder() *QTextEncoder {
	return newQTextEncoder(C.QTextCodec_MakeEncoder(this.h))
}

func (this *QTextCodec) Name() []byte {
	var _bytearray C.struct_miqt_string = C.QTextCodec_Name(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QTextCodec) Aliases() [][]byte {
	var _ma C.struct_miqt_array = C.QTextCodec_Aliases(this.h)
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QTextCodec) MibEnum() int {
	return (int)(C.QTextCodec_MibEnum(this.h))
}

func (this *QTextCodec) ToUnicode3(in string, length int, state *QTextCodec__ConverterState) string {
	in_Cstring := C.CString(in)
	defer C.free(unsafe.Pointer(in_Cstring))
	var _ms C.struct_miqt_string = C.QTextCodec_ToUnicode3(this.h, in_Cstring, (C.int)(length), state.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextCodec) FromUnicode3(in *QChar, length int, state *QTextCodec__ConverterState) []byte {
	var _bytearray C.struct_miqt_string = C.QTextCodec_FromUnicode3(this.h, in.cPointer(), (C.int)(length), state.cPointer())
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QTextCodec) MakeDecoder1(flags QTextCodec__ConversionFlag) *QTextDecoder {
	return newQTextDecoder(C.QTextCodec_MakeDecoder1(this.h, (C.int)(flags)))
}

func (this *QTextCodec) MakeEncoder1(flags QTextCodec__ConversionFlag) *QTextEncoder {
	return newQTextEncoder(C.QTextCodec_MakeEncoder1(this.h, (C.int)(flags)))
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

func (this *QTextEncoder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextEncoder constructs the type using only CGO pointers.
func newQTextEncoder(h *C.QTextEncoder) *QTextEncoder {
	if h == nil {
		return nil
	}

	return &QTextEncoder{h: h}
}

// UnsafeNewQTextEncoder constructs the type using only unsafe pointers.
func UnsafeNewQTextEncoder(h unsafe.Pointer) *QTextEncoder {
	return newQTextEncoder((*C.QTextEncoder)(h))
}

// NewQTextEncoder constructs a new QTextEncoder object.
func NewQTextEncoder(codec *QTextCodec) *QTextEncoder {

	return newQTextEncoder(C.QTextEncoder_new(codec.cPointer()))
}

// NewQTextEncoder2 constructs a new QTextEncoder object.
func NewQTextEncoder2(codec *QTextCodec, flags QTextCodec__ConversionFlag) *QTextEncoder {

	return newQTextEncoder(C.QTextEncoder_new2(codec.cPointer(), (C.int)(flags)))
}

func (this *QTextEncoder) FromUnicode(str string) []byte {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	var _bytearray C.struct_miqt_string = C.QTextEncoder_FromUnicode(this.h, str_ms)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QTextEncoder) FromUnicode2(uc *QChar, lenVal int) []byte {
	var _bytearray C.struct_miqt_string = C.QTextEncoder_FromUnicode2(this.h, uc.cPointer(), (C.int)(lenVal))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
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

func (this *QTextDecoder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextDecoder constructs the type using only CGO pointers.
func newQTextDecoder(h *C.QTextDecoder) *QTextDecoder {
	if h == nil {
		return nil
	}

	return &QTextDecoder{h: h}
}

// UnsafeNewQTextDecoder constructs the type using only unsafe pointers.
func UnsafeNewQTextDecoder(h unsafe.Pointer) *QTextDecoder {
	return newQTextDecoder((*C.QTextDecoder)(h))
}

// NewQTextDecoder constructs a new QTextDecoder object.
func NewQTextDecoder(codec *QTextCodec) *QTextDecoder {

	return newQTextDecoder(C.QTextDecoder_new(codec.cPointer()))
}

// NewQTextDecoder2 constructs a new QTextDecoder object.
func NewQTextDecoder2(codec *QTextCodec, flags QTextCodec__ConversionFlag) *QTextDecoder {

	return newQTextDecoder(C.QTextDecoder_new2(codec.cPointer(), (C.int)(flags)))
}

func (this *QTextDecoder) ToUnicode(chars string, lenVal int) string {
	chars_Cstring := C.CString(chars)
	defer C.free(unsafe.Pointer(chars_Cstring))
	var _ms C.struct_miqt_string = C.QTextDecoder_ToUnicode(this.h, chars_Cstring, (C.int)(lenVal))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDecoder) ToUnicodeWithBa(ba []byte) string {
	ba_alias := C.struct_miqt_string{}
	if len(ba) > 0 {
		ba_alias.data = (*C.char)(unsafe.Pointer(&ba[0]))
	} else {
		ba_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	ba_alias.len = C.size_t(len(ba))
	var _ms C.struct_miqt_string = C.QTextDecoder_ToUnicodeWithBa(this.h, ba_alias)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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

func (this *QTextCodec__ConverterState) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextCodec__ConverterState constructs the type using only CGO pointers.
func newQTextCodec__ConverterState(h *C.QTextCodec__ConverterState) *QTextCodec__ConverterState {
	if h == nil {
		return nil
	}

	return &QTextCodec__ConverterState{h: h}
}

// UnsafeNewQTextCodec__ConverterState constructs the type using only unsafe pointers.
func UnsafeNewQTextCodec__ConverterState(h unsafe.Pointer) *QTextCodec__ConverterState {
	return newQTextCodec__ConverterState((*C.QTextCodec__ConverterState)(h))
}

// NewQTextCodec__ConverterState constructs a new QTextCodec::ConverterState object.
func NewQTextCodec__ConverterState() *QTextCodec__ConverterState {

	return newQTextCodec__ConverterState(C.QTextCodec__ConverterState_new())
}

// NewQTextCodec__ConverterState2 constructs a new QTextCodec::ConverterState object.
func NewQTextCodec__ConverterState2(f QTextCodec__ConversionFlag) *QTextCodec__ConverterState {

	return newQTextCodec__ConverterState(C.QTextCodec__ConverterState_new2((C.int)(f)))
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
