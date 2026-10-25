package multimedia

/*

#include "gen_qaudioformat.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAudioFormat__SampleType int

const (
	QAudioFormat__Unknown     QAudioFormat__SampleType = 0
	QAudioFormat__SignedInt   QAudioFormat__SampleType = 1
	QAudioFormat__UnSignedInt QAudioFormat__SampleType = 2
	QAudioFormat__Float       QAudioFormat__SampleType = 3
)

type QAudioFormat__Endian int

const (
	QAudioFormat__BigEndian    QAudioFormat__Endian = 0
	QAudioFormat__LittleEndian QAudioFormat__Endian = 1
)

type QAudioFormat struct {
	h  *C.QAudioFormat
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAudioFormat) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAudioFormat) cPointer() *C.QAudioFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioFormat constructs the type using only CGO pointers.
func newQAudioFormat(h *C.QAudioFormat) *QAudioFormat {
	if h == nil {
		return nil
	}

	return &QAudioFormat{h: h}
}

// UnsafeNewQAudioFormat constructs the type using only unsafe pointers.
func UnsafeNewQAudioFormat(h unsafe.Pointer) *QAudioFormat {
	return newQAudioFormat((*C.QAudioFormat)(h))
}

// NewQAudioFormat constructs a new QAudioFormat object.
func NewQAudioFormat() *QAudioFormat {

	return newQAudioFormat(C.QAudioFormat_new())
}

// NewQAudioFormat2 constructs a new QAudioFormat object.
func NewQAudioFormat2(other *QAudioFormat) *QAudioFormat {
	defer runtime.KeepAlive(other)

	return newQAudioFormat(C.QAudioFormat_new2(other.cPointer()))
}

func (this *QAudioFormat) OperatorAssign(other *QAudioFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QAudioFormat_operatorAssign(this.h, other.cPointer())
}

func (this *QAudioFormat) OperatorEqual(other *QAudioFormat) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QAudioFormat_operatorEqual(this.h, other.cPointer()))
}

func (this *QAudioFormat) OperatorNotEqual(other *QAudioFormat) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QAudioFormat_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QAudioFormat) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAudioFormat_isValid(this.h))
}

func (this *QAudioFormat) SetSampleRate(sampleRate int) {
	defer runtime.KeepAlive(this)
	C.QAudioFormat_setSampleRate(this.h, (C.int)(sampleRate))
}

func (this *QAudioFormat) SampleRate() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioFormat_sampleRate(this.h))
}

func (this *QAudioFormat) SetChannelCount(channelCount int) {
	defer runtime.KeepAlive(this)
	C.QAudioFormat_setChannelCount(this.h, (C.int)(channelCount))
}

func (this *QAudioFormat) ChannelCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioFormat_channelCount(this.h))
}

func (this *QAudioFormat) SetSampleSize(sampleSize int) {
	defer runtime.KeepAlive(this)
	C.QAudioFormat_setSampleSize(this.h, (C.int)(sampleSize))
}

func (this *QAudioFormat) SampleSize() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioFormat_sampleSize(this.h))
}

func (this *QAudioFormat) SetCodec(codec string) {
	defer runtime.KeepAlive(this)
	codec_ms := C.struct_miqt_string{}
	codec_ms.data = C.CString(codec)
	codec_ms.len = C.size_t(len(codec))
	defer C.free(unsafe.Pointer(codec_ms.data))
	C.QAudioFormat_setCodec(this.h, codec_ms)
}

func (this *QAudioFormat) Codec() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAudioFormat_codec(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioFormat) SetByteOrder(byteOrder QAudioFormat__Endian) {
	defer runtime.KeepAlive(this)
	C.QAudioFormat_setByteOrder(this.h, (C.int)(byteOrder))
}

func (this *QAudioFormat) ByteOrder() QAudioFormat__Endian {
	defer runtime.KeepAlive(this)
	return (QAudioFormat__Endian)(C.QAudioFormat_byteOrder(this.h))
}

func (this *QAudioFormat) SetSampleType(sampleType QAudioFormat__SampleType) {
	defer runtime.KeepAlive(this)
	C.QAudioFormat_setSampleType(this.h, (C.int)(sampleType))
}

func (this *QAudioFormat) SampleType() QAudioFormat__SampleType {
	defer runtime.KeepAlive(this)
	return (QAudioFormat__SampleType)(C.QAudioFormat_sampleType(this.h))
}

func (this *QAudioFormat) BytesForDuration(duration int64) int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioFormat_bytesForDuration(this.h, (C.longlong)(duration)))
}

func (this *QAudioFormat) DurationForBytes(byteCount int) int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QAudioFormat_durationForBytes(this.h, (C.int)(byteCount)))
}

func (this *QAudioFormat) BytesForFrames(frameCount int) int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioFormat_bytesForFrames(this.h, (C.int)(frameCount)))
}

func (this *QAudioFormat) FramesForBytes(byteCount int) int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioFormat_framesForBytes(this.h, (C.int)(byteCount)))
}

func (this *QAudioFormat) FramesForDuration(duration int64) int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioFormat_framesForDuration(this.h, (C.longlong)(duration)))
}

func (this *QAudioFormat) DurationForFrames(frameCount int) int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QAudioFormat_durationForFrames(this.h, (C.int)(frameCount)))
}

func (this *QAudioFormat) BytesPerFrame() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioFormat_bytesPerFrame(this.h))
}

// Delete this object from C++ memory.
func (this *QAudioFormat) Delete() {
	C.QAudioFormat_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAudioFormat) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAudioFormat_delete((*C.QAudioFormat)(gc[0]))
	})
	this.miqtSetGC(gc)
}
