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

// newQSurfaceFormat constructs the type using only CGO pointers.
func newQSurfaceFormat(h *C.QSurfaceFormat) *QSurfaceFormat {
	if h == nil {
		return nil
	}

	return &QSurfaceFormat{h: h}
}

// UnsafeNewQSurfaceFormat constructs the type using only unsafe pointers.
func UnsafeNewQSurfaceFormat(h unsafe.Pointer) *QSurfaceFormat {
	return newQSurfaceFormat((*C.QSurfaceFormat)(h))
}

// NewQSurfaceFormat constructs a new QSurfaceFormat object.
func NewQSurfaceFormat() *QSurfaceFormat {

	return newQSurfaceFormat(C.QSurfaceFormat_new())
}

// NewQSurfaceFormat2 constructs a new QSurfaceFormat object.
func NewQSurfaceFormat2(options QSurfaceFormat__FormatOption) *QSurfaceFormat {

	return newQSurfaceFormat(C.QSurfaceFormat_new2((C.int)(options)))
}

// NewQSurfaceFormat3 constructs a new QSurfaceFormat object.
func NewQSurfaceFormat3(other *QSurfaceFormat) *QSurfaceFormat {

	return newQSurfaceFormat(C.QSurfaceFormat_new3(other.cPointer()))
}

func (this *QSurfaceFormat) OperatorAssign(other *QSurfaceFormat) {
	C.QSurfaceFormat_operatorAssign(this.h, other.cPointer())
}

func (this *QSurfaceFormat) SetDepthBufferSize(size int) {
	C.QSurfaceFormat_setDepthBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) DepthBufferSize() int {
	return (int)(C.QSurfaceFormat_depthBufferSize(this.h))
}

func (this *QSurfaceFormat) SetStencilBufferSize(size int) {
	C.QSurfaceFormat_setStencilBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) StencilBufferSize() int {
	return (int)(C.QSurfaceFormat_stencilBufferSize(this.h))
}

func (this *QSurfaceFormat) SetRedBufferSize(size int) {
	C.QSurfaceFormat_setRedBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) RedBufferSize() int {
	return (int)(C.QSurfaceFormat_redBufferSize(this.h))
}

func (this *QSurfaceFormat) SetGreenBufferSize(size int) {
	C.QSurfaceFormat_setGreenBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) GreenBufferSize() int {
	return (int)(C.QSurfaceFormat_greenBufferSize(this.h))
}

func (this *QSurfaceFormat) SetBlueBufferSize(size int) {
	C.QSurfaceFormat_setBlueBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) BlueBufferSize() int {
	return (int)(C.QSurfaceFormat_blueBufferSize(this.h))
}

func (this *QSurfaceFormat) SetAlphaBufferSize(size int) {
	C.QSurfaceFormat_setAlphaBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) AlphaBufferSize() int {
	return (int)(C.QSurfaceFormat_alphaBufferSize(this.h))
}

func (this *QSurfaceFormat) SetSamples(numSamples int) {
	C.QSurfaceFormat_setSamples(this.h, (C.int)(numSamples))
}

func (this *QSurfaceFormat) Samples() int {
	return (int)(C.QSurfaceFormat_samples(this.h))
}

func (this *QSurfaceFormat) SetSwapBehavior(behavior QSurfaceFormat__SwapBehavior) {
	C.QSurfaceFormat_setSwapBehavior(this.h, (C.int)(behavior))
}

func (this *QSurfaceFormat) SwapBehavior() QSurfaceFormat__SwapBehavior {
	return (QSurfaceFormat__SwapBehavior)(C.QSurfaceFormat_swapBehavior(this.h))
}

func (this *QSurfaceFormat) HasAlpha() bool {
	return (bool)(C.QSurfaceFormat_hasAlpha(this.h))
}

func (this *QSurfaceFormat) SetProfile(profile QSurfaceFormat__OpenGLContextProfile) {
	C.QSurfaceFormat_setProfile(this.h, (C.int)(profile))
}

func (this *QSurfaceFormat) Profile() QSurfaceFormat__OpenGLContextProfile {
	return (QSurfaceFormat__OpenGLContextProfile)(C.QSurfaceFormat_profile(this.h))
}

func (this *QSurfaceFormat) SetRenderableType(typeVal QSurfaceFormat__RenderableType) {
	C.QSurfaceFormat_setRenderableType(this.h, (C.int)(typeVal))
}

func (this *QSurfaceFormat) RenderableType() QSurfaceFormat__RenderableType {
	return (QSurfaceFormat__RenderableType)(C.QSurfaceFormat_renderableType(this.h))
}

func (this *QSurfaceFormat) SetMajorVersion(majorVersion int) {
	C.QSurfaceFormat_setMajorVersion(this.h, (C.int)(majorVersion))
}

func (this *QSurfaceFormat) MajorVersion() int {
	return (int)(C.QSurfaceFormat_majorVersion(this.h))
}

func (this *QSurfaceFormat) SetMinorVersion(minorVersion int) {
	C.QSurfaceFormat_setMinorVersion(this.h, (C.int)(minorVersion))
}

func (this *QSurfaceFormat) MinorVersion() int {
	return (int)(C.QSurfaceFormat_minorVersion(this.h))
}

func (this *QSurfaceFormat) Version() struct {
	First  int
	Second int
} {
	var _mm C.struct_miqt_map = C.QSurfaceFormat_version(this.h)
	_First_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.values))
	_entry_First := (int)(_First_CArray[0])

	_entry_Second := (int)(_Second_CArray[0])

	return struct {
		First  int
		Second int
	}{First: _entry_First, Second: _entry_Second}
}

func (this *QSurfaceFormat) SetVersion(major int, minor int) {
	C.QSurfaceFormat_setVersion(this.h, (C.int)(major), (C.int)(minor))
}

func (this *QSurfaceFormat) Stereo() bool {
	return (bool)(C.QSurfaceFormat_stereo(this.h))
}

func (this *QSurfaceFormat) SetStereo(enable bool) {
	C.QSurfaceFormat_setStereo(this.h, (C.bool)(enable))
}

func (this *QSurfaceFormat) SetOption(opt QSurfaceFormat__FormatOption) {
	C.QSurfaceFormat_setOption(this.h, (C.int)(opt))
}

func (this *QSurfaceFormat) TestOption(opt QSurfaceFormat__FormatOption) bool {
	return (bool)(C.QSurfaceFormat_testOption(this.h, (C.int)(opt)))
}

func (this *QSurfaceFormat) SetOptions(options QSurfaceFormat__FormatOption) {
	C.QSurfaceFormat_setOptions(this.h, (C.int)(options))
}

func (this *QSurfaceFormat) SetOptionWithOption(option QSurfaceFormat__FormatOption) {
	C.QSurfaceFormat_setOptionWithOption(this.h, (C.int)(option))
}

func (this *QSurfaceFormat) TestOptionWithOption(option QSurfaceFormat__FormatOption) bool {
	return (bool)(C.QSurfaceFormat_testOptionWithOption(this.h, (C.int)(option)))
}

func (this *QSurfaceFormat) Options() QSurfaceFormat__FormatOption {
	return (QSurfaceFormat__FormatOption)(C.QSurfaceFormat_options(this.h))
}

func (this *QSurfaceFormat) SwapInterval() int {
	return (int)(C.QSurfaceFormat_swapInterval(this.h))
}

func (this *QSurfaceFormat) SetSwapInterval(interval int) {
	C.QSurfaceFormat_setSwapInterval(this.h, (C.int)(interval))
}

func (this *QSurfaceFormat) ColorSpace() QSurfaceFormat__ColorSpace {
	return (QSurfaceFormat__ColorSpace)(C.QSurfaceFormat_colorSpace(this.h))
}

func (this *QSurfaceFormat) SetColorSpace(colorSpace QSurfaceFormat__ColorSpace) {
	C.QSurfaceFormat_setColorSpace(this.h, (C.int)(colorSpace))
}

func QSurfaceFormat_SetDefaultFormat(format *QSurfaceFormat) {
	C.QSurfaceFormat_setDefaultFormat(format.cPointer())
}

func QSurfaceFormat_DefaultFormat() *QSurfaceFormat {
	_goptr := newQSurfaceFormat(C.QSurfaceFormat_defaultFormat())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSurfaceFormat) SetOption2(option QSurfaceFormat__FormatOption, on bool) {
	C.QSurfaceFormat_setOption2(this.h, (C.int)(option), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QSurfaceFormat) Delete() {
	C.QSurfaceFormat_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSurfaceFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QSurfaceFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
