package qt

/*

#include "gen_qsurfaceformat.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSurfaceFormat__FormatOption int

const (
	QSurfaceFormat__StereoBuffers       QSurfaceFormat__FormatOption = 1
	QSurfaceFormat__DebugContext        QSurfaceFormat__FormatOption = 2
	QSurfaceFormat__DeprecatedFunctions QSurfaceFormat__FormatOption = 4
	QSurfaceFormat__ResetNotification   QSurfaceFormat__FormatOption = 8
)

type QSurfaceFormat__SwapBehavior int

const (
	QSurfaceFormat__DefaultSwapBehavior QSurfaceFormat__SwapBehavior = 0
	QSurfaceFormat__SingleBuffer        QSurfaceFormat__SwapBehavior = 1
	QSurfaceFormat__DoubleBuffer        QSurfaceFormat__SwapBehavior = 2
	QSurfaceFormat__TripleBuffer        QSurfaceFormat__SwapBehavior = 3
)

type QSurfaceFormat__RenderableType int

const (
	QSurfaceFormat__DefaultRenderableType QSurfaceFormat__RenderableType = 0
	QSurfaceFormat__OpenGL                QSurfaceFormat__RenderableType = 1
	QSurfaceFormat__OpenGLES              QSurfaceFormat__RenderableType = 2
	QSurfaceFormat__OpenVG                QSurfaceFormat__RenderableType = 4
)

type QSurfaceFormat__OpenGLContextProfile int

const (
	QSurfaceFormat__NoProfile            QSurfaceFormat__OpenGLContextProfile = 0
	QSurfaceFormat__CoreProfile          QSurfaceFormat__OpenGLContextProfile = 1
	QSurfaceFormat__CompatibilityProfile QSurfaceFormat__OpenGLContextProfile = 2
)

type QSurfaceFormat__ColorSpace int

const (
	QSurfaceFormat__DefaultColorSpace QSurfaceFormat__ColorSpace = 0
	QSurfaceFormat__sRGBColorSpace    QSurfaceFormat__ColorSpace = 1
)

type QSurfaceFormat struct {
	h *C.QSurfaceFormat
}

func (this *QSurfaceFormat) cPointer() *C.QSurfaceFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSurfaceFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSurfaceFormat(h *C.QSurfaceFormat) *QSurfaceFormat {
	if h == nil {
		return nil
	}
	return &QSurfaceFormat{h: h}
}

func UnsafeNewQSurfaceFormat(h unsafe.Pointer) *QSurfaceFormat {
	return newQSurfaceFormat((*C.QSurfaceFormat)(h))
}

// NewQSurfaceFormat constructs a new QSurfaceFormat object.
func NewQSurfaceFormat() *QSurfaceFormat {
	ret := C.QSurfaceFormat_new()
	return newQSurfaceFormat(ret)
}

// NewQSurfaceFormat2 constructs a new QSurfaceFormat object.
func NewQSurfaceFormat2(options QSurfaceFormat__FormatOption) *QSurfaceFormat {
	ret := C.QSurfaceFormat_new2((C.int)(options))
	return newQSurfaceFormat(ret)
}

// NewQSurfaceFormat3 constructs a new QSurfaceFormat object.
func NewQSurfaceFormat3(other *QSurfaceFormat) *QSurfaceFormat {
	ret := C.QSurfaceFormat_new3(other.cPointer())
	return newQSurfaceFormat(ret)
}

func (this *QSurfaceFormat) OperatorAssign(other *QSurfaceFormat) {
	C.QSurfaceFormat_OperatorAssign(this.h, other.cPointer())
}

func (this *QSurfaceFormat) SetDepthBufferSize(size int) {
	C.QSurfaceFormat_SetDepthBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) DepthBufferSize() int {
	return (int)(C.QSurfaceFormat_DepthBufferSize(this.h))
}

func (this *QSurfaceFormat) SetStencilBufferSize(size int) {
	C.QSurfaceFormat_SetStencilBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) StencilBufferSize() int {
	return (int)(C.QSurfaceFormat_StencilBufferSize(this.h))
}

func (this *QSurfaceFormat) SetRedBufferSize(size int) {
	C.QSurfaceFormat_SetRedBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) RedBufferSize() int {
	return (int)(C.QSurfaceFormat_RedBufferSize(this.h))
}

func (this *QSurfaceFormat) SetGreenBufferSize(size int) {
	C.QSurfaceFormat_SetGreenBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) GreenBufferSize() int {
	return (int)(C.QSurfaceFormat_GreenBufferSize(this.h))
}

func (this *QSurfaceFormat) SetBlueBufferSize(size int) {
	C.QSurfaceFormat_SetBlueBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) BlueBufferSize() int {
	return (int)(C.QSurfaceFormat_BlueBufferSize(this.h))
}

func (this *QSurfaceFormat) SetAlphaBufferSize(size int) {
	C.QSurfaceFormat_SetAlphaBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) AlphaBufferSize() int {
	return (int)(C.QSurfaceFormat_AlphaBufferSize(this.h))
}

func (this *QSurfaceFormat) SetSamples(numSamples int) {
	C.QSurfaceFormat_SetSamples(this.h, (C.int)(numSamples))
}

func (this *QSurfaceFormat) Samples() int {
	return (int)(C.QSurfaceFormat_Samples(this.h))
}

func (this *QSurfaceFormat) SetSwapBehavior(behavior QSurfaceFormat__SwapBehavior) {
	C.QSurfaceFormat_SetSwapBehavior(this.h, (C.int)(behavior))
}

func (this *QSurfaceFormat) SwapBehavior() QSurfaceFormat__SwapBehavior {
	return (QSurfaceFormat__SwapBehavior)(C.QSurfaceFormat_SwapBehavior(this.h))
}

func (this *QSurfaceFormat) HasAlpha() bool {
	return (bool)(C.QSurfaceFormat_HasAlpha(this.h))
}

func (this *QSurfaceFormat) SetProfile(profile QSurfaceFormat__OpenGLContextProfile) {
	C.QSurfaceFormat_SetProfile(this.h, (C.int)(profile))
}

func (this *QSurfaceFormat) Profile() QSurfaceFormat__OpenGLContextProfile {
	return (QSurfaceFormat__OpenGLContextProfile)(C.QSurfaceFormat_Profile(this.h))
}

func (this *QSurfaceFormat) SetRenderableType(typeVal QSurfaceFormat__RenderableType) {
	C.QSurfaceFormat_SetRenderableType(this.h, (C.int)(typeVal))
}

func (this *QSurfaceFormat) RenderableType() QSurfaceFormat__RenderableType {
	return (QSurfaceFormat__RenderableType)(C.QSurfaceFormat_RenderableType(this.h))
}

func (this *QSurfaceFormat) SetMajorVersion(majorVersion int) {
	C.QSurfaceFormat_SetMajorVersion(this.h, (C.int)(majorVersion))
}

func (this *QSurfaceFormat) MajorVersion() int {
	return (int)(C.QSurfaceFormat_MajorVersion(this.h))
}

func (this *QSurfaceFormat) SetMinorVersion(minorVersion int) {
	C.QSurfaceFormat_SetMinorVersion(this.h, (C.int)(minorVersion))
}

func (this *QSurfaceFormat) MinorVersion() int {
	return (int)(C.QSurfaceFormat_MinorVersion(this.h))
}

func (this *QSurfaceFormat) SetVersion(major int, minor int) {
	C.QSurfaceFormat_SetVersion(this.h, (C.int)(major), (C.int)(minor))
}

func (this *QSurfaceFormat) Stereo() bool {
	return (bool)(C.QSurfaceFormat_Stereo(this.h))
}

func (this *QSurfaceFormat) SetStereo(enable bool) {
	C.QSurfaceFormat_SetStereo(this.h, (C.bool)(enable))
}

func (this *QSurfaceFormat) SetOption(opt QSurfaceFormat__FormatOption) {
	C.QSurfaceFormat_SetOption(this.h, (C.int)(opt))
}

func (this *QSurfaceFormat) TestOption(opt QSurfaceFormat__FormatOption) bool {
	return (bool)(C.QSurfaceFormat_TestOption(this.h, (C.int)(opt)))
}

func (this *QSurfaceFormat) SetOptions(options QSurfaceFormat__FormatOption) {
	C.QSurfaceFormat_SetOptions(this.h, (C.int)(options))
}

func (this *QSurfaceFormat) SetOptionWithOption(option QSurfaceFormat__FormatOption) {
	C.QSurfaceFormat_SetOptionWithOption(this.h, (C.int)(option))
}

func (this *QSurfaceFormat) TestOptionWithOption(option QSurfaceFormat__FormatOption) bool {
	return (bool)(C.QSurfaceFormat_TestOptionWithOption(this.h, (C.int)(option)))
}

func (this *QSurfaceFormat) Options() QSurfaceFormat__FormatOption {
	return (QSurfaceFormat__FormatOption)(C.QSurfaceFormat_Options(this.h))
}

func (this *QSurfaceFormat) SwapInterval() int {
	return (int)(C.QSurfaceFormat_SwapInterval(this.h))
}

func (this *QSurfaceFormat) SetSwapInterval(interval int) {
	C.QSurfaceFormat_SetSwapInterval(this.h, (C.int)(interval))
}

func (this *QSurfaceFormat) ColorSpace() QSurfaceFormat__ColorSpace {
	return (QSurfaceFormat__ColorSpace)(C.QSurfaceFormat_ColorSpace(this.h))
}

func (this *QSurfaceFormat) SetColorSpace(colorSpace QSurfaceFormat__ColorSpace) {
	C.QSurfaceFormat_SetColorSpace(this.h, (C.int)(colorSpace))
}

func QSurfaceFormat_SetDefaultFormat(format *QSurfaceFormat) {
	C.QSurfaceFormat_SetDefaultFormat(format.cPointer())
}

func QSurfaceFormat_DefaultFormat() *QSurfaceFormat {
	_ret := C.QSurfaceFormat_DefaultFormat()
	_goptr := newQSurfaceFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSurfaceFormat) SetOption2(option QSurfaceFormat__FormatOption, on bool) {
	C.QSurfaceFormat_SetOption2(this.h, (C.int)(option), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QSurfaceFormat) Delete() {
	C.QSurfaceFormat_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSurfaceFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QSurfaceFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
