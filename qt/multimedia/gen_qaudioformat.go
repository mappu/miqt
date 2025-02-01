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
	h *C.QAudioFormat
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

	return newQAudioFormat(C.QAudioFormat_new2(other.cPointer()))
}

func (this *QAudioFormat) OperatorAssign(other *QAudioFormat) {
	C.QAudioFormat_operatorAssign(this.h, other.cPointer())
}

func (this *QAudioFormat) OperatorEqual(other *QAudioFormat) bool {
	return (bool)(C.QAudioFormat_operatorEqual(this.h, other.cPointer()))
}

func (this *QAudioFormat) OperatorNotEqual(other *QAudioFormat) bool {
	return (bool)(C.QAudioFormat_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QAudioFormat) IsValid() bool {
	return (bool)(C.QAudioFormat_isValid(this.h))
}

func (this *QAudioFormat) SetSampleRate(sampleRate int) {
	C.QAudioFormat_setSampleRate(this.h, (C.int)(sampleRate))
}

func (this *QAudioFormat) SampleRate() int {
	return (int)(C.QAudioFormat_sampleRate(this.h))
}

func (this *QAudioFormat) SetChannelCount(channelCount int) {
	C.QAudioFormat_setChannelCount(this.h, (C.int)(channelCount))
}

func (this *QAudioFormat) ChannelCount() int {
	return (int)(C.QAudioFormat_channelCount(this.h))
}

func (this *QAudioFormat) SetSampleSize(sampleSize int) {
	C.QAudioFormat_setSampleSize(this.h, (C.int)(sampleSize))
}

func (this *QAudioFormat) SampleSize() int {
	return (int)(C.QAudioFormat_sampleSize(this.h))
}

func (this *QAudioFormat) SetCodec(codec string) {
	codec_ms := C.struct_miqt_string{}
	codec_ms.data = C.CString(codec)
	codec_ms.len = C.size_t(len(codec))
	defer C.free(unsafe.Pointer(codec_ms.data))
	C.QAudioFormat_setCodec(this.h, codec_ms)
}

func (this *QAudioFormat) Codec() string {
	var _ms C.struct_miqt_string = C.QAudioFormat_codec(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioFormat) SetByteOrder(byteOrder QAudioFormat__Endian) {
	C.QAudioFormat_setByteOrder(this.h, (C.int)(byteOrder))
}

func (this *QAudioFormat) ByteOrder() QAudioFormat__Endian {
	return (QAudioFormat__Endian)(C.QAudioFormat_byteOrder(this.h))
}

func (this *QAudioFormat) SetSampleType(sampleType QAudioFormat__SampleType) {
	C.QAudioFormat_setSampleType(this.h, (C.int)(sampleType))
}

func (this *QAudioFormat) SampleType() QAudioFormat__SampleType {
	return (QAudioFormat__SampleType)(C.QAudioFormat_sampleType(this.h))
}

func (this *QAudioFormat) BytesForDuration(duration int64) int {
	return (int)(C.QAudioFormat_bytesForDuration(this.h, (C.longlong)(duration)))
}

func (this *QAudioFormat) DurationForBytes(byteCount int) int64 {
	return (int64)(C.QAudioFormat_durationForBytes(this.h, (C.int)(byteCount)))
}

func (this *QAudioFormat) BytesForFrames(frameCount int) int {
	return (int)(C.QAudioFormat_bytesForFrames(this.h, (C.int)(frameCount)))
}

func (this *QAudioFormat) FramesForBytes(byteCount int) int {
	return (int)(C.QAudioFormat_framesForBytes(this.h, (C.int)(byteCount)))
}

func (this *QAudioFormat) FramesForDuration(duration int64) int {
	return (int)(C.QAudioFormat_framesForDuration(this.h, (C.longlong)(duration)))
}

func (this *QAudioFormat) DurationForFrames(frameCount int) int64 {
	return (int64)(C.QAudioFormat_durationForFrames(this.h, (C.int)(frameCount)))
}

func (this *QAudioFormat) BytesPerFrame() int {
	return (int)(C.QAudioFormat_bytesPerFrame(this.h))
}

// Delete this object from C++ memory.
func (this *QAudioFormat) Delete() {
	C.QAudioFormat_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
