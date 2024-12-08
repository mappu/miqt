package multimedia

/*

#include "gen_qmediaencodersettings.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QAudioEncoderSettings struct {
	h          *C.QAudioEncoderSettings
	isSubclass bool
}

func (this *QAudioEncoderSettings) cPointer() *C.QAudioEncoderSettings {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioEncoderSettings) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioEncoderSettings constructs the type using only CGO pointers.
func newQAudioEncoderSettings(h *C.QAudioEncoderSettings) *QAudioEncoderSettings {
	if h == nil {
		return nil
	}

	return &QAudioEncoderSettings{h: h}
}

// UnsafeNewQAudioEncoderSettings constructs the type using only unsafe pointers.
func UnsafeNewQAudioEncoderSettings(h unsafe.Pointer) *QAudioEncoderSettings {
	return newQAudioEncoderSettings((*C.QAudioEncoderSettings)(h))
}

// NewQAudioEncoderSettings constructs a new QAudioEncoderSettings object.
func NewQAudioEncoderSettings() *QAudioEncoderSettings {

	ret := newQAudioEncoderSettings(C.QAudioEncoderSettings_new())
	ret.isSubclass = true
	return ret
}

// NewQAudioEncoderSettings2 constructs a new QAudioEncoderSettings object.
func NewQAudioEncoderSettings2(other *QAudioEncoderSettings) *QAudioEncoderSettings {

	ret := newQAudioEncoderSettings(C.QAudioEncoderSettings_new2(other.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QAudioEncoderSettings) OperatorAssign(other *QAudioEncoderSettings) {
	C.QAudioEncoderSettings_OperatorAssign(this.h, other.cPointer())
}

func (this *QAudioEncoderSettings) OperatorEqual(other *QAudioEncoderSettings) bool {
	return (bool)(C.QAudioEncoderSettings_OperatorEqual(this.h, other.cPointer()))
}

func (this *QAudioEncoderSettings) OperatorNotEqual(other *QAudioEncoderSettings) bool {
	return (bool)(C.QAudioEncoderSettings_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QAudioEncoderSettings) IsNull() bool {
	return (bool)(C.QAudioEncoderSettings_IsNull(this.h))
}

func (this *QAudioEncoderSettings) EncodingMode() QMultimedia__EncodingMode {
	return (QMultimedia__EncodingMode)(C.QAudioEncoderSettings_EncodingMode(this.h))
}

func (this *QAudioEncoderSettings) SetEncodingMode(encodingMode QMultimedia__EncodingMode) {
	C.QAudioEncoderSettings_SetEncodingMode(this.h, (C.int)(encodingMode))
}

func (this *QAudioEncoderSettings) Codec() string {
	var _ms C.struct_miqt_string = C.QAudioEncoderSettings_Codec(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioEncoderSettings) SetCodec(codec string) {
	codec_ms := C.struct_miqt_string{}
	codec_ms.data = C.CString(codec)
	codec_ms.len = C.size_t(len(codec))
	defer C.free(unsafe.Pointer(codec_ms.data))
	C.QAudioEncoderSettings_SetCodec(this.h, codec_ms)
}

func (this *QAudioEncoderSettings) BitRate() int {
	return (int)(C.QAudioEncoderSettings_BitRate(this.h))
}

func (this *QAudioEncoderSettings) SetBitRate(bitrate int) {
	C.QAudioEncoderSettings_SetBitRate(this.h, (C.int)(bitrate))
}

func (this *QAudioEncoderSettings) ChannelCount() int {
	return (int)(C.QAudioEncoderSettings_ChannelCount(this.h))
}

func (this *QAudioEncoderSettings) SetChannelCount(channels int) {
	C.QAudioEncoderSettings_SetChannelCount(this.h, (C.int)(channels))
}

func (this *QAudioEncoderSettings) SampleRate() int {
	return (int)(C.QAudioEncoderSettings_SampleRate(this.h))
}

func (this *QAudioEncoderSettings) SetSampleRate(rate int) {
	C.QAudioEncoderSettings_SetSampleRate(this.h, (C.int)(rate))
}

func (this *QAudioEncoderSettings) Quality() QMultimedia__EncodingQuality {
	return (QMultimedia__EncodingQuality)(C.QAudioEncoderSettings_Quality(this.h))
}

func (this *QAudioEncoderSettings) SetQuality(quality QMultimedia__EncodingQuality) {
	C.QAudioEncoderSettings_SetQuality(this.h, (C.int)(quality))
}

func (this *QAudioEncoderSettings) EncodingOption(option string) *qt.QVariant {
	option_ms := C.struct_miqt_string{}
	option_ms.data = C.CString(option)
	option_ms.len = C.size_t(len(option))
	defer C.free(unsafe.Pointer(option_ms.data))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QAudioEncoderSettings_EncodingOption(this.h, option_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioEncoderSettings) EncodingOptions() map[string]qt.QVariant {
	var _mm C.struct_miqt_map = C.QAudioEncoderSettings_EncodingOptions(this.h)
	_ret := make(map[string]qt.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _mapkey_ms C.struct_miqt_string = _Keys[i]
		_mapkey_ret := C.GoStringN(_mapkey_ms.data, C.int(int64(_mapkey_ms.len)))
		C.free(unsafe.Pointer(_mapkey_ms.data))
		_entry_Key := _mapkey_ret
		_mapval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QAudioEncoderSettings) SetEncodingOption(option string, value *qt.QVariant) {
	option_ms := C.struct_miqt_string{}
	option_ms.data = C.CString(option)
	option_ms.len = C.size_t(len(option))
	defer C.free(unsafe.Pointer(option_ms.data))
	C.QAudioEncoderSettings_SetEncodingOption(this.h, option_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QAudioEncoderSettings) SetEncodingOptions(options map[string]qt.QVariant) {
	options_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(options))))
	defer C.free(unsafe.Pointer(options_Keys_CArray))
	options_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(options))))
	defer C.free(unsafe.Pointer(options_Values_CArray))
	options_ctr := 0
	for options_k, options_v := range options {
		options_k_ms := C.struct_miqt_string{}
		options_k_ms.data = C.CString(options_k)
		options_k_ms.len = C.size_t(len(options_k))
		defer C.free(unsafe.Pointer(options_k_ms.data))
		options_Keys_CArray[options_ctr] = options_k_ms
		options_Values_CArray[options_ctr] = (*C.QVariant)(options_v.UnsafePointer())
		options_ctr++
	}
	options_mm := C.struct_miqt_map{
		len:    C.size_t(len(options)),
		keys:   unsafe.Pointer(options_Keys_CArray),
		values: unsafe.Pointer(options_Values_CArray),
	}
	C.QAudioEncoderSettings_SetEncodingOptions(this.h, options_mm)
}

// Delete this object from C++ memory.
func (this *QAudioEncoderSettings) Delete() {
	C.QAudioEncoderSettings_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioEncoderSettings) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioEncoderSettings) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QVideoEncoderSettings struct {
	h          *C.QVideoEncoderSettings
	isSubclass bool
}

func (this *QVideoEncoderSettings) cPointer() *C.QVideoEncoderSettings {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoEncoderSettings) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVideoEncoderSettings constructs the type using only CGO pointers.
func newQVideoEncoderSettings(h *C.QVideoEncoderSettings) *QVideoEncoderSettings {
	if h == nil {
		return nil
	}

	return &QVideoEncoderSettings{h: h}
}

// UnsafeNewQVideoEncoderSettings constructs the type using only unsafe pointers.
func UnsafeNewQVideoEncoderSettings(h unsafe.Pointer) *QVideoEncoderSettings {
	return newQVideoEncoderSettings((*C.QVideoEncoderSettings)(h))
}

// NewQVideoEncoderSettings constructs a new QVideoEncoderSettings object.
func NewQVideoEncoderSettings() *QVideoEncoderSettings {

	ret := newQVideoEncoderSettings(C.QVideoEncoderSettings_new())
	ret.isSubclass = true
	return ret
}

// NewQVideoEncoderSettings2 constructs a new QVideoEncoderSettings object.
func NewQVideoEncoderSettings2(other *QVideoEncoderSettings) *QVideoEncoderSettings {

	ret := newQVideoEncoderSettings(C.QVideoEncoderSettings_new2(other.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QVideoEncoderSettings) OperatorAssign(other *QVideoEncoderSettings) {
	C.QVideoEncoderSettings_OperatorAssign(this.h, other.cPointer())
}

func (this *QVideoEncoderSettings) OperatorEqual(other *QVideoEncoderSettings) bool {
	return (bool)(C.QVideoEncoderSettings_OperatorEqual(this.h, other.cPointer()))
}

func (this *QVideoEncoderSettings) OperatorNotEqual(other *QVideoEncoderSettings) bool {
	return (bool)(C.QVideoEncoderSettings_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QVideoEncoderSettings) IsNull() bool {
	return (bool)(C.QVideoEncoderSettings_IsNull(this.h))
}

func (this *QVideoEncoderSettings) EncodingMode() QMultimedia__EncodingMode {
	return (QMultimedia__EncodingMode)(C.QVideoEncoderSettings_EncodingMode(this.h))
}

func (this *QVideoEncoderSettings) SetEncodingMode(encodingMode QMultimedia__EncodingMode) {
	C.QVideoEncoderSettings_SetEncodingMode(this.h, (C.int)(encodingMode))
}

func (this *QVideoEncoderSettings) Codec() string {
	var _ms C.struct_miqt_string = C.QVideoEncoderSettings_Codec(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoEncoderSettings) SetCodec(codec string) {
	codec_ms := C.struct_miqt_string{}
	codec_ms.data = C.CString(codec)
	codec_ms.len = C.size_t(len(codec))
	defer C.free(unsafe.Pointer(codec_ms.data))
	C.QVideoEncoderSettings_SetCodec(this.h, codec_ms)
}

func (this *QVideoEncoderSettings) Resolution() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QVideoEncoderSettings_Resolution(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoEncoderSettings) SetResolution(resolution *qt.QSize) {
	C.QVideoEncoderSettings_SetResolution(this.h, (*C.QSize)(resolution.UnsafePointer()))
}

func (this *QVideoEncoderSettings) SetResolution2(width int, height int) {
	C.QVideoEncoderSettings_SetResolution2(this.h, (C.int)(width), (C.int)(height))
}

func (this *QVideoEncoderSettings) FrameRate() float64 {
	return (float64)(C.QVideoEncoderSettings_FrameRate(this.h))
}

func (this *QVideoEncoderSettings) SetFrameRate(rate float64) {
	C.QVideoEncoderSettings_SetFrameRate(this.h, (C.double)(rate))
}

func (this *QVideoEncoderSettings) BitRate() int {
	return (int)(C.QVideoEncoderSettings_BitRate(this.h))
}

func (this *QVideoEncoderSettings) SetBitRate(bitrate int) {
	C.QVideoEncoderSettings_SetBitRate(this.h, (C.int)(bitrate))
}

func (this *QVideoEncoderSettings) Quality() QMultimedia__EncodingQuality {
	return (QMultimedia__EncodingQuality)(C.QVideoEncoderSettings_Quality(this.h))
}

func (this *QVideoEncoderSettings) SetQuality(quality QMultimedia__EncodingQuality) {
	C.QVideoEncoderSettings_SetQuality(this.h, (C.int)(quality))
}

func (this *QVideoEncoderSettings) EncodingOption(option string) *qt.QVariant {
	option_ms := C.struct_miqt_string{}
	option_ms.data = C.CString(option)
	option_ms.len = C.size_t(len(option))
	defer C.free(unsafe.Pointer(option_ms.data))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QVideoEncoderSettings_EncodingOption(this.h, option_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoEncoderSettings) EncodingOptions() map[string]qt.QVariant {
	var _mm C.struct_miqt_map = C.QVideoEncoderSettings_EncodingOptions(this.h)
	_ret := make(map[string]qt.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _mapkey_ms C.struct_miqt_string = _Keys[i]
		_mapkey_ret := C.GoStringN(_mapkey_ms.data, C.int(int64(_mapkey_ms.len)))
		C.free(unsafe.Pointer(_mapkey_ms.data))
		_entry_Key := _mapkey_ret
		_mapval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QVideoEncoderSettings) SetEncodingOption(option string, value *qt.QVariant) {
	option_ms := C.struct_miqt_string{}
	option_ms.data = C.CString(option)
	option_ms.len = C.size_t(len(option))
	defer C.free(unsafe.Pointer(option_ms.data))
	C.QVideoEncoderSettings_SetEncodingOption(this.h, option_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QVideoEncoderSettings) SetEncodingOptions(options map[string]qt.QVariant) {
	options_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(options))))
	defer C.free(unsafe.Pointer(options_Keys_CArray))
	options_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(options))))
	defer C.free(unsafe.Pointer(options_Values_CArray))
	options_ctr := 0
	for options_k, options_v := range options {
		options_k_ms := C.struct_miqt_string{}
		options_k_ms.data = C.CString(options_k)
		options_k_ms.len = C.size_t(len(options_k))
		defer C.free(unsafe.Pointer(options_k_ms.data))
		options_Keys_CArray[options_ctr] = options_k_ms
		options_Values_CArray[options_ctr] = (*C.QVariant)(options_v.UnsafePointer())
		options_ctr++
	}
	options_mm := C.struct_miqt_map{
		len:    C.size_t(len(options)),
		keys:   unsafe.Pointer(options_Keys_CArray),
		values: unsafe.Pointer(options_Values_CArray),
	}
	C.QVideoEncoderSettings_SetEncodingOptions(this.h, options_mm)
}

// Delete this object from C++ memory.
func (this *QVideoEncoderSettings) Delete() {
	C.QVideoEncoderSettings_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoEncoderSettings) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoEncoderSettings) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QImageEncoderSettings struct {
	h          *C.QImageEncoderSettings
	isSubclass bool
}

func (this *QImageEncoderSettings) cPointer() *C.QImageEncoderSettings {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QImageEncoderSettings) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQImageEncoderSettings constructs the type using only CGO pointers.
func newQImageEncoderSettings(h *C.QImageEncoderSettings) *QImageEncoderSettings {
	if h == nil {
		return nil
	}

	return &QImageEncoderSettings{h: h}
}

// UnsafeNewQImageEncoderSettings constructs the type using only unsafe pointers.
func UnsafeNewQImageEncoderSettings(h unsafe.Pointer) *QImageEncoderSettings {
	return newQImageEncoderSettings((*C.QImageEncoderSettings)(h))
}

// NewQImageEncoderSettings constructs a new QImageEncoderSettings object.
func NewQImageEncoderSettings() *QImageEncoderSettings {

	ret := newQImageEncoderSettings(C.QImageEncoderSettings_new())
	ret.isSubclass = true
	return ret
}

// NewQImageEncoderSettings2 constructs a new QImageEncoderSettings object.
func NewQImageEncoderSettings2(other *QImageEncoderSettings) *QImageEncoderSettings {

	ret := newQImageEncoderSettings(C.QImageEncoderSettings_new2(other.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QImageEncoderSettings) OperatorAssign(other *QImageEncoderSettings) {
	C.QImageEncoderSettings_OperatorAssign(this.h, other.cPointer())
}

func (this *QImageEncoderSettings) OperatorEqual(other *QImageEncoderSettings) bool {
	return (bool)(C.QImageEncoderSettings_OperatorEqual(this.h, other.cPointer()))
}

func (this *QImageEncoderSettings) OperatorNotEqual(other *QImageEncoderSettings) bool {
	return (bool)(C.QImageEncoderSettings_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QImageEncoderSettings) IsNull() bool {
	return (bool)(C.QImageEncoderSettings_IsNull(this.h))
}

func (this *QImageEncoderSettings) Codec() string {
	var _ms C.struct_miqt_string = C.QImageEncoderSettings_Codec(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageEncoderSettings) SetCodec(codec string) {
	codec_ms := C.struct_miqt_string{}
	codec_ms.data = C.CString(codec)
	codec_ms.len = C.size_t(len(codec))
	defer C.free(unsafe.Pointer(codec_ms.data))
	C.QImageEncoderSettings_SetCodec(this.h, codec_ms)
}

func (this *QImageEncoderSettings) Resolution() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QImageEncoderSettings_Resolution(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageEncoderSettings) SetResolution(resolution *qt.QSize) {
	C.QImageEncoderSettings_SetResolution(this.h, (*C.QSize)(resolution.UnsafePointer()))
}

func (this *QImageEncoderSettings) SetResolution2(width int, height int) {
	C.QImageEncoderSettings_SetResolution2(this.h, (C.int)(width), (C.int)(height))
}

func (this *QImageEncoderSettings) Quality() QMultimedia__EncodingQuality {
	return (QMultimedia__EncodingQuality)(C.QImageEncoderSettings_Quality(this.h))
}

func (this *QImageEncoderSettings) SetQuality(quality QMultimedia__EncodingQuality) {
	C.QImageEncoderSettings_SetQuality(this.h, (C.int)(quality))
}

func (this *QImageEncoderSettings) EncodingOption(option string) *qt.QVariant {
	option_ms := C.struct_miqt_string{}
	option_ms.data = C.CString(option)
	option_ms.len = C.size_t(len(option))
	defer C.free(unsafe.Pointer(option_ms.data))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QImageEncoderSettings_EncodingOption(this.h, option_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageEncoderSettings) EncodingOptions() map[string]qt.QVariant {
	var _mm C.struct_miqt_map = C.QImageEncoderSettings_EncodingOptions(this.h)
	_ret := make(map[string]qt.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _mapkey_ms C.struct_miqt_string = _Keys[i]
		_mapkey_ret := C.GoStringN(_mapkey_ms.data, C.int(int64(_mapkey_ms.len)))
		C.free(unsafe.Pointer(_mapkey_ms.data))
		_entry_Key := _mapkey_ret
		_mapval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QImageEncoderSettings) SetEncodingOption(option string, value *qt.QVariant) {
	option_ms := C.struct_miqt_string{}
	option_ms.data = C.CString(option)
	option_ms.len = C.size_t(len(option))
	defer C.free(unsafe.Pointer(option_ms.data))
	C.QImageEncoderSettings_SetEncodingOption(this.h, option_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QImageEncoderSettings) SetEncodingOptions(options map[string]qt.QVariant) {
	options_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(options))))
	defer C.free(unsafe.Pointer(options_Keys_CArray))
	options_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(options))))
	defer C.free(unsafe.Pointer(options_Values_CArray))
	options_ctr := 0
	for options_k, options_v := range options {
		options_k_ms := C.struct_miqt_string{}
		options_k_ms.data = C.CString(options_k)
		options_k_ms.len = C.size_t(len(options_k))
		defer C.free(unsafe.Pointer(options_k_ms.data))
		options_Keys_CArray[options_ctr] = options_k_ms
		options_Values_CArray[options_ctr] = (*C.QVariant)(options_v.UnsafePointer())
		options_ctr++
	}
	options_mm := C.struct_miqt_map{
		len:    C.size_t(len(options)),
		keys:   unsafe.Pointer(options_Keys_CArray),
		values: unsafe.Pointer(options_Values_CArray),
	}
	C.QImageEncoderSettings_SetEncodingOptions(this.h, options_mm)
}

// Delete this object from C++ memory.
func (this *QImageEncoderSettings) Delete() {
	C.QImageEncoderSettings_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QImageEncoderSettings) GoGC() {
	runtime.SetFinalizer(this, func(this *QImageEncoderSettings) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
