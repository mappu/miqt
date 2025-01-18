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

type QAudioFormat__SampleFormat uint16

const (
	QAudioFormat__Unknown        QAudioFormat__SampleFormat = 0
	QAudioFormat__UInt8          QAudioFormat__SampleFormat = 1
	QAudioFormat__Int16          QAudioFormat__SampleFormat = 2
	QAudioFormat__Int32          QAudioFormat__SampleFormat = 3
	QAudioFormat__Float          QAudioFormat__SampleFormat = 4
	QAudioFormat__NSampleFormats QAudioFormat__SampleFormat = 5
)

type QAudioFormat__AudioChannelPosition int

const (
	QAudioFormat__UnknownPosition    QAudioFormat__AudioChannelPosition = 0
	QAudioFormat__FrontLeft          QAudioFormat__AudioChannelPosition = 1
	QAudioFormat__FrontRight         QAudioFormat__AudioChannelPosition = 2
	QAudioFormat__FrontCenter        QAudioFormat__AudioChannelPosition = 3
	QAudioFormat__LFE                QAudioFormat__AudioChannelPosition = 4
	QAudioFormat__BackLeft           QAudioFormat__AudioChannelPosition = 5
	QAudioFormat__BackRight          QAudioFormat__AudioChannelPosition = 6
	QAudioFormat__FrontLeftOfCenter  QAudioFormat__AudioChannelPosition = 7
	QAudioFormat__FrontRightOfCenter QAudioFormat__AudioChannelPosition = 8
	QAudioFormat__BackCenter         QAudioFormat__AudioChannelPosition = 9
	QAudioFormat__SideLeft           QAudioFormat__AudioChannelPosition = 10
	QAudioFormat__SideRight          QAudioFormat__AudioChannelPosition = 11
	QAudioFormat__TopCenter          QAudioFormat__AudioChannelPosition = 12
	QAudioFormat__TopFrontLeft       QAudioFormat__AudioChannelPosition = 13
	QAudioFormat__TopFrontCenter     QAudioFormat__AudioChannelPosition = 14
	QAudioFormat__TopFrontRight      QAudioFormat__AudioChannelPosition = 15
	QAudioFormat__TopBackLeft        QAudioFormat__AudioChannelPosition = 16
	QAudioFormat__TopBackCenter      QAudioFormat__AudioChannelPosition = 17
	QAudioFormat__TopBackRight       QAudioFormat__AudioChannelPosition = 18
	QAudioFormat__LFE2               QAudioFormat__AudioChannelPosition = 19
	QAudioFormat__TopSideLeft        QAudioFormat__AudioChannelPosition = 20
	QAudioFormat__TopSideRight       QAudioFormat__AudioChannelPosition = 21
	QAudioFormat__BottomFrontCenter  QAudioFormat__AudioChannelPosition = 22
	QAudioFormat__BottomFrontLeft    QAudioFormat__AudioChannelPosition = 23
	QAudioFormat__BottomFrontRight   QAudioFormat__AudioChannelPosition = 24
)

type QAudioFormat__ChannelConfig uint

const (
	QAudioFormat__ChannelConfigUnknown       QAudioFormat__ChannelConfig = 0
	QAudioFormat__ChannelConfigMono          QAudioFormat__ChannelConfig = 8
	QAudioFormat__ChannelConfigStereo        QAudioFormat__ChannelConfig = 6
	QAudioFormat__ChannelConfig2Dot1         QAudioFormat__ChannelConfig = 22
	QAudioFormat__ChannelConfig3Dot0         QAudioFormat__ChannelConfig = 14
	QAudioFormat__ChannelConfig3Dot1         QAudioFormat__ChannelConfig = 30
	QAudioFormat__ChannelConfigSurround5Dot0 QAudioFormat__ChannelConfig = 110
	QAudioFormat__ChannelConfigSurround5Dot1 QAudioFormat__ChannelConfig = 126
	QAudioFormat__ChannelConfigSurround7Dot0 QAudioFormat__ChannelConfig = 3182
	QAudioFormat__ChannelConfigSurround7Dot1 QAudioFormat__ChannelConfig = 3198
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
func NewQAudioFormat2(param1 *QAudioFormat) *QAudioFormat {

	return newQAudioFormat(C.QAudioFormat_new2(param1.cPointer()))
}

func (this *QAudioFormat) IsValid() bool {
	return (bool)(C.QAudioFormat_IsValid(this.h))
}

func (this *QAudioFormat) SetSampleRate(sampleRate int) {
	C.QAudioFormat_SetSampleRate(this.h, (C.int)(sampleRate))
}

func (this *QAudioFormat) SampleRate() int {
	return (int)(C.QAudioFormat_SampleRate(this.h))
}

func (this *QAudioFormat) SetChannelConfig(config QAudioFormat__ChannelConfig) {
	C.QAudioFormat_SetChannelConfig(this.h, (C.uint32_t)(config))
}

func (this *QAudioFormat) ChannelConfig() QAudioFormat__ChannelConfig {
	return (QAudioFormat__ChannelConfig)(C.QAudioFormat_ChannelConfig(this.h))
}

func (this *QAudioFormat) SetChannelCount(channelCount int) {
	C.QAudioFormat_SetChannelCount(this.h, (C.int)(channelCount))
}

func (this *QAudioFormat) ChannelCount() int {
	return (int)(C.QAudioFormat_ChannelCount(this.h))
}

func (this *QAudioFormat) ChannelOffset(channel QAudioFormat__AudioChannelPosition) int {
	return (int)(C.QAudioFormat_ChannelOffset(this.h, (C.int)(channel)))
}

func (this *QAudioFormat) SetSampleFormat(f QAudioFormat__SampleFormat) {
	C.QAudioFormat_SetSampleFormat(this.h, (C.uint16_t)(f))
}

func (this *QAudioFormat) SampleFormat() QAudioFormat__SampleFormat {
	return (QAudioFormat__SampleFormat)(C.QAudioFormat_SampleFormat(this.h))
}

func (this *QAudioFormat) BytesForDuration(microseconds int64) int {
	return (int)(C.QAudioFormat_BytesForDuration(this.h, (C.longlong)(microseconds)))
}

func (this *QAudioFormat) DurationForBytes(byteCount int) int64 {
	return (int64)(C.QAudioFormat_DurationForBytes(this.h, (C.int)(byteCount)))
}

func (this *QAudioFormat) BytesForFrames(frameCount int) int {
	return (int)(C.QAudioFormat_BytesForFrames(this.h, (C.int)(frameCount)))
}

func (this *QAudioFormat) FramesForBytes(byteCount int) int {
	return (int)(C.QAudioFormat_FramesForBytes(this.h, (C.int)(byteCount)))
}

func (this *QAudioFormat) FramesForDuration(microseconds int64) int {
	return (int)(C.QAudioFormat_FramesForDuration(this.h, (C.longlong)(microseconds)))
}

func (this *QAudioFormat) DurationForFrames(frameCount int) int64 {
	return (int64)(C.QAudioFormat_DurationForFrames(this.h, (C.int)(frameCount)))
}

func (this *QAudioFormat) BytesPerFrame() int {
	return (int)(C.QAudioFormat_BytesPerFrame(this.h))
}

func (this *QAudioFormat) BytesPerSample() int {
	return (int)(C.QAudioFormat_BytesPerSample(this.h))
}

func (this *QAudioFormat) NormalizedSampleValue(sample unsafe.Pointer) float32 {
	return (float32)(C.QAudioFormat_NormalizedSampleValue(this.h, sample))
}

func QAudioFormat_DefaultChannelConfigForChannelCount(channelCount int) QAudioFormat__ChannelConfig {
	return (QAudioFormat__ChannelConfig)(C.QAudioFormat_DefaultChannelConfigForChannelCount((C.int)(channelCount)))
}

// Delete this object from C++ memory.
func (this *QAudioFormat) Delete() {
	C.QAudioFormat_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
