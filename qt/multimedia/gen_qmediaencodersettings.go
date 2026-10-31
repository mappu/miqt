package multimedia

/*

#include "gen_qmediaencodersettings.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QAudioEncoderSettings struct {
	h  *C.QAudioEncoderSettings
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAudioEncoderSettings) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

	return newQAudioEncoderSettings(C.QAudioEncoderSettings_new())
}

// NewQAudioEncoderSettings2 constructs a new QAudioEncoderSettings object.
func NewQAudioEncoderSettings2(other *QAudioEncoderSettings) *QAudioEncoderSettings {
	defer runtime.KeepAlive(other)

	return newQAudioEncoderSettings(C.QAudioEncoderSettings_new2(other.cPointer()))
}

func (this *QAudioEncoderSettings) OperatorAssign(other *QAudioEncoderSettings) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QAudioEncoderSettings_operatorAssign(this.h, other.cPointer())
}

func (this *QAudioEncoderSettings) OperatorEqual(other *QAudioEncoderSettings) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QAudioEncoderSettings_operatorEqual(this.h, other.cPointer()))
}

func (this *QAudioEncoderSettings) OperatorNotEqual(other *QAudioEncoderSettings) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QAudioEncoderSettings_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QAudioEncoderSettings) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAudioEncoderSettings_isNull(this.h))
}

func (this *QAudioEncoderSettings) EncodingMode() QMultimedia__EncodingMode {
	defer runtime.KeepAlive(this)
	return (QMultimedia__EncodingMode)(C.QAudioEncoderSettings_encodingMode(this.h))
}

func (this *QAudioEncoderSettings) SetEncodingMode(encodingMode QMultimedia__EncodingMode) {
	defer runtime.KeepAlive(this)
	C.QAudioEncoderSettings_setEncodingMode(this.h, (C.int)(encodingMode))
}

func (this *QAudioEncoderSettings) Codec() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAudioEncoderSettings_codec(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioEncoderSettings) SetCodec(codec string) {
	defer runtime.KeepAlive(this)
	codec_ms := C.struct_miqt_string{}
	codec_ms.data = C.CString(codec)
	codec_ms.len = C.size_t(len(codec))
	defer C.free(unsafe.Pointer(codec_ms.data))
	C.QAudioEncoderSettings_setCodec(this.h, codec_ms)
}

func (this *QAudioEncoderSettings) BitRate() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioEncoderSettings_bitRate(this.h))
}

func (this *QAudioEncoderSettings) SetBitRate(bitrate int) {
	defer runtime.KeepAlive(this)
	C.QAudioEncoderSettings_setBitRate(this.h, (C.int)(bitrate))
}

func (this *QAudioEncoderSettings) ChannelCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioEncoderSettings_channelCount(this.h))
}

func (this *QAudioEncoderSettings) SetChannelCount(channels int) {
	defer runtime.KeepAlive(this)
	C.QAudioEncoderSettings_setChannelCount(this.h, (C.int)(channels))
}

func (this *QAudioEncoderSettings) SampleRate() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioEncoderSettings_sampleRate(this.h))
}

func (this *QAudioEncoderSettings) SetSampleRate(rate int) {
	defer runtime.KeepAlive(this)
	C.QAudioEncoderSettings_setSampleRate(this.h, (C.int)(rate))
}

func (this *QAudioEncoderSettings) Quality() QMultimedia__EncodingQuality {
	defer runtime.KeepAlive(this)
	return (QMultimedia__EncodingQuality)(C.QAudioEncoderSettings_quality(this.h))
}

func (this *QAudioEncoderSettings) SetQuality(quality QMultimedia__EncodingQuality) {
	defer runtime.KeepAlive(this)
	C.QAudioEncoderSettings_setQuality(this.h, (C.int)(quality))
}

func (this *QAudioEncoderSettings) EncodingOption(option string) *qt.QVariant {
	defer runtime.KeepAlive(this)
	option_ms := C.struct_miqt_string{}
	option_ms.data = C.CString(option)
	option_ms.len = C.size_t(len(option))
	defer C.free(unsafe.Pointer(option_ms.data))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QAudioEncoderSettings_encodingOption(this.h, option_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioEncoderSettings) EncodingOptions() map[string]qt.QVariant {
	defer runtime.KeepAlive(this)
	var _mm C.struct_miqt_map = C.QAudioEncoderSettings_encodingOptions(this.h)
	_ret := make(map[string]qt.QVariant, int(_mm.len))
	_Keys := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_mm.keys)), int(_mm.len))
	_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_mm.values)), int(_mm.len))
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
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	option_ms := C.struct_miqt_string{}
	option_ms.data = C.CString(option)
	option_ms.len = C.size_t(len(option))
	defer C.free(unsafe.Pointer(option_ms.data))
	C.QAudioEncoderSettings_setEncodingOption(this.h, option_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QAudioEncoderSettings) SetEncodingOptions(options map[string]qt.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(options)
	options_Keys_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(options))))
	defer C.free(unsafe.Pointer(options_Keys_CArray_ptr))
	options_Keys_CArray := unsafe.Slice(options_Keys_CArray_ptr, len(options))
	options_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(options))))
	defer C.free(unsafe.Pointer(options_Values_CArray_ptr))
	options_Values_CArray := unsafe.Slice(options_Values_CArray_ptr, len(options))
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
		keys:   unsafe.Pointer(options_Keys_CArray_ptr),
		values: unsafe.Pointer(options_Values_CArray_ptr),
	}
	C.QAudioEncoderSettings_setEncodingOptions(this.h, options_mm)
}

// Delete this object from C++ memory.
func (this *QAudioEncoderSettings) Delete() {
	C.QAudioEncoderSettings_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAudioEncoderSettings) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAudioEncoderSettings_delete((*C.QAudioEncoderSettings)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QVideoEncoderSettings struct {
	h  *C.QVideoEncoderSettings
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QVideoEncoderSettings) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

	return newQVideoEncoderSettings(C.QVideoEncoderSettings_new())
}

// NewQVideoEncoderSettings2 constructs a new QVideoEncoderSettings object.
func NewQVideoEncoderSettings2(other *QVideoEncoderSettings) *QVideoEncoderSettings {
	defer runtime.KeepAlive(other)

	return newQVideoEncoderSettings(C.QVideoEncoderSettings_new2(other.cPointer()))
}

func (this *QVideoEncoderSettings) OperatorAssign(other *QVideoEncoderSettings) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QVideoEncoderSettings_operatorAssign(this.h, other.cPointer())
}

func (this *QVideoEncoderSettings) OperatorEqual(other *QVideoEncoderSettings) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QVideoEncoderSettings_operatorEqual(this.h, other.cPointer()))
}

func (this *QVideoEncoderSettings) OperatorNotEqual(other *QVideoEncoderSettings) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QVideoEncoderSettings_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QVideoEncoderSettings) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVideoEncoderSettings_isNull(this.h))
}

func (this *QVideoEncoderSettings) EncodingMode() QMultimedia__EncodingMode {
	defer runtime.KeepAlive(this)
	return (QMultimedia__EncodingMode)(C.QVideoEncoderSettings_encodingMode(this.h))
}

func (this *QVideoEncoderSettings) SetEncodingMode(encodingMode QMultimedia__EncodingMode) {
	defer runtime.KeepAlive(this)
	C.QVideoEncoderSettings_setEncodingMode(this.h, (C.int)(encodingMode))
}

func (this *QVideoEncoderSettings) Codec() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QVideoEncoderSettings_codec(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoEncoderSettings) SetCodec(codec string) {
	defer runtime.KeepAlive(this)
	codec_ms := C.struct_miqt_string{}
	codec_ms.data = C.CString(codec)
	codec_ms.len = C.size_t(len(codec))
	defer C.free(unsafe.Pointer(codec_ms.data))
	C.QVideoEncoderSettings_setCodec(this.h, codec_ms)
}

func (this *QVideoEncoderSettings) Resolution() qt.QSize {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QSize](C.QVideoEncoderSettings_resolution(this.h))
}

func (this *QVideoEncoderSettings) SetResolution(resolution qt.QSize) {
	defer runtime.KeepAlive(this)
	C.QVideoEncoderSettings_setResolution(this.h, libmiqt.ValueCast[C.struct_miqt_qsize](resolution))
}

func (this *QVideoEncoderSettings) SetResolution2(width int, height int) {
	defer runtime.KeepAlive(this)
	C.QVideoEncoderSettings_setResolution2(this.h, (C.int)(width), (C.int)(height))
}

func (this *QVideoEncoderSettings) FrameRate() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QVideoEncoderSettings_frameRate(this.h))
}

func (this *QVideoEncoderSettings) SetFrameRate(rate float64) {
	defer runtime.KeepAlive(this)
	C.QVideoEncoderSettings_setFrameRate(this.h, (C.double)(rate))
}

func (this *QVideoEncoderSettings) BitRate() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QVideoEncoderSettings_bitRate(this.h))
}

func (this *QVideoEncoderSettings) SetBitRate(bitrate int) {
	defer runtime.KeepAlive(this)
	C.QVideoEncoderSettings_setBitRate(this.h, (C.int)(bitrate))
}

func (this *QVideoEncoderSettings) Quality() QMultimedia__EncodingQuality {
	defer runtime.KeepAlive(this)
	return (QMultimedia__EncodingQuality)(C.QVideoEncoderSettings_quality(this.h))
}

func (this *QVideoEncoderSettings) SetQuality(quality QMultimedia__EncodingQuality) {
	defer runtime.KeepAlive(this)
	C.QVideoEncoderSettings_setQuality(this.h, (C.int)(quality))
}

func (this *QVideoEncoderSettings) EncodingOption(option string) *qt.QVariant {
	defer runtime.KeepAlive(this)
	option_ms := C.struct_miqt_string{}
	option_ms.data = C.CString(option)
	option_ms.len = C.size_t(len(option))
	defer C.free(unsafe.Pointer(option_ms.data))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QVideoEncoderSettings_encodingOption(this.h, option_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoEncoderSettings) EncodingOptions() map[string]qt.QVariant {
	defer runtime.KeepAlive(this)
	var _mm C.struct_miqt_map = C.QVideoEncoderSettings_encodingOptions(this.h)
	_ret := make(map[string]qt.QVariant, int(_mm.len))
	_Keys := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_mm.keys)), int(_mm.len))
	_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_mm.values)), int(_mm.len))
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
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	option_ms := C.struct_miqt_string{}
	option_ms.data = C.CString(option)
	option_ms.len = C.size_t(len(option))
	defer C.free(unsafe.Pointer(option_ms.data))
	C.QVideoEncoderSettings_setEncodingOption(this.h, option_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QVideoEncoderSettings) SetEncodingOptions(options map[string]qt.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(options)
	options_Keys_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(options))))
	defer C.free(unsafe.Pointer(options_Keys_CArray_ptr))
	options_Keys_CArray := unsafe.Slice(options_Keys_CArray_ptr, len(options))
	options_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(options))))
	defer C.free(unsafe.Pointer(options_Values_CArray_ptr))
	options_Values_CArray := unsafe.Slice(options_Values_CArray_ptr, len(options))
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
		keys:   unsafe.Pointer(options_Keys_CArray_ptr),
		values: unsafe.Pointer(options_Values_CArray_ptr),
	}
	C.QVideoEncoderSettings_setEncodingOptions(this.h, options_mm)
}

// Delete this object from C++ memory.
func (this *QVideoEncoderSettings) Delete() {
	C.QVideoEncoderSettings_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QVideoEncoderSettings) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QVideoEncoderSettings_delete((*C.QVideoEncoderSettings)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QImageEncoderSettings struct {
	h  *C.QImageEncoderSettings
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QImageEncoderSettings) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

	return newQImageEncoderSettings(C.QImageEncoderSettings_new())
}

// NewQImageEncoderSettings2 constructs a new QImageEncoderSettings object.
func NewQImageEncoderSettings2(other *QImageEncoderSettings) *QImageEncoderSettings {
	defer runtime.KeepAlive(other)

	return newQImageEncoderSettings(C.QImageEncoderSettings_new2(other.cPointer()))
}

func (this *QImageEncoderSettings) OperatorAssign(other *QImageEncoderSettings) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QImageEncoderSettings_operatorAssign(this.h, other.cPointer())
}

func (this *QImageEncoderSettings) OperatorEqual(other *QImageEncoderSettings) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QImageEncoderSettings_operatorEqual(this.h, other.cPointer()))
}

func (this *QImageEncoderSettings) OperatorNotEqual(other *QImageEncoderSettings) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QImageEncoderSettings_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QImageEncoderSettings) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QImageEncoderSettings_isNull(this.h))
}

func (this *QImageEncoderSettings) Codec() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QImageEncoderSettings_codec(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImageEncoderSettings) SetCodec(codec string) {
	defer runtime.KeepAlive(this)
	codec_ms := C.struct_miqt_string{}
	codec_ms.data = C.CString(codec)
	codec_ms.len = C.size_t(len(codec))
	defer C.free(unsafe.Pointer(codec_ms.data))
	C.QImageEncoderSettings_setCodec(this.h, codec_ms)
}

func (this *QImageEncoderSettings) Resolution() qt.QSize {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QSize](C.QImageEncoderSettings_resolution(this.h))
}

func (this *QImageEncoderSettings) SetResolution(resolution qt.QSize) {
	defer runtime.KeepAlive(this)
	C.QImageEncoderSettings_setResolution(this.h, libmiqt.ValueCast[C.struct_miqt_qsize](resolution))
}

func (this *QImageEncoderSettings) SetResolution2(width int, height int) {
	defer runtime.KeepAlive(this)
	C.QImageEncoderSettings_setResolution2(this.h, (C.int)(width), (C.int)(height))
}

func (this *QImageEncoderSettings) Quality() QMultimedia__EncodingQuality {
	defer runtime.KeepAlive(this)
	return (QMultimedia__EncodingQuality)(C.QImageEncoderSettings_quality(this.h))
}

func (this *QImageEncoderSettings) SetQuality(quality QMultimedia__EncodingQuality) {
	defer runtime.KeepAlive(this)
	C.QImageEncoderSettings_setQuality(this.h, (C.int)(quality))
}

func (this *QImageEncoderSettings) EncodingOption(option string) *qt.QVariant {
	defer runtime.KeepAlive(this)
	option_ms := C.struct_miqt_string{}
	option_ms.data = C.CString(option)
	option_ms.len = C.size_t(len(option))
	defer C.free(unsafe.Pointer(option_ms.data))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QImageEncoderSettings_encodingOption(this.h, option_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImageEncoderSettings) EncodingOptions() map[string]qt.QVariant {
	defer runtime.KeepAlive(this)
	var _mm C.struct_miqt_map = C.QImageEncoderSettings_encodingOptions(this.h)
	_ret := make(map[string]qt.QVariant, int(_mm.len))
	_Keys := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_mm.keys)), int(_mm.len))
	_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_mm.values)), int(_mm.len))
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
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	option_ms := C.struct_miqt_string{}
	option_ms.data = C.CString(option)
	option_ms.len = C.size_t(len(option))
	defer C.free(unsafe.Pointer(option_ms.data))
	C.QImageEncoderSettings_setEncodingOption(this.h, option_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QImageEncoderSettings) SetEncodingOptions(options map[string]qt.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(options)
	options_Keys_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(options))))
	defer C.free(unsafe.Pointer(options_Keys_CArray_ptr))
	options_Keys_CArray := unsafe.Slice(options_Keys_CArray_ptr, len(options))
	options_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(options))))
	defer C.free(unsafe.Pointer(options_Values_CArray_ptr))
	options_Values_CArray := unsafe.Slice(options_Values_CArray_ptr, len(options))
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
		keys:   unsafe.Pointer(options_Keys_CArray_ptr),
		values: unsafe.Pointer(options_Values_CArray_ptr),
	}
	C.QImageEncoderSettings_setEncodingOptions(this.h, options_mm)
}

// Delete this object from C++ memory.
func (this *QImageEncoderSettings) Delete() {
	C.QImageEncoderSettings_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QImageEncoderSettings) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QImageEncoderSettings_delete((*C.QImageEncoderSettings)(gc[0]))
	})
	this.miqtSetGC(gc)
}
