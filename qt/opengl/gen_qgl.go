package opengl

/*

#include "gen_qgl.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGL__FormatOption int

const (
	QGL__DoubleBuffer          QGL__FormatOption = 1
	QGL__DepthBuffer           QGL__FormatOption = 2
	QGL__Rgba                  QGL__FormatOption = 4
	QGL__AlphaChannel          QGL__FormatOption = 8
	QGL__AccumBuffer           QGL__FormatOption = 16
	QGL__StencilBuffer         QGL__FormatOption = 32
	QGL__StereoBuffers         QGL__FormatOption = 64
	QGL__DirectRendering       QGL__FormatOption = 128
	QGL__HasOverlay            QGL__FormatOption = 256
	QGL__SampleBuffers         QGL__FormatOption = 512
	QGL__DeprecatedFunctions   QGL__FormatOption = 1024
	QGL__SingleBuffer          QGL__FormatOption = 65536
	QGL__NoDepthBuffer         QGL__FormatOption = 131072
	QGL__ColorIndex            QGL__FormatOption = 262144
	QGL__NoAlphaChannel        QGL__FormatOption = 524288
	QGL__NoAccumBuffer         QGL__FormatOption = 1048576
	QGL__NoStencilBuffer       QGL__FormatOption = 2097152
	QGL__NoStereoBuffers       QGL__FormatOption = 4194304
	QGL__IndirectRendering     QGL__FormatOption = 8388608
	QGL__NoOverlay             QGL__FormatOption = 16777216
	QGL__NoSampleBuffers       QGL__FormatOption = 33554432
	QGL__NoDeprecatedFunctions QGL__FormatOption = 67108864
)

type QGLFormat__OpenGLContextProfile int

const (
	QGLFormat__NoProfile            QGLFormat__OpenGLContextProfile = 0
	QGLFormat__CoreProfile          QGLFormat__OpenGLContextProfile = 1
	QGLFormat__CompatibilityProfile QGLFormat__OpenGLContextProfile = 2
)

type QGLFormat__OpenGLVersionFlag int

const (
	QGLFormat__OpenGL_Version_None              QGLFormat__OpenGLVersionFlag = 0
	QGLFormat__OpenGL_Version_1_1               QGLFormat__OpenGLVersionFlag = 1
	QGLFormat__OpenGL_Version_1_2               QGLFormat__OpenGLVersionFlag = 2
	QGLFormat__OpenGL_Version_1_3               QGLFormat__OpenGLVersionFlag = 4
	QGLFormat__OpenGL_Version_1_4               QGLFormat__OpenGLVersionFlag = 8
	QGLFormat__OpenGL_Version_1_5               QGLFormat__OpenGLVersionFlag = 16
	QGLFormat__OpenGL_Version_2_0               QGLFormat__OpenGLVersionFlag = 32
	QGLFormat__OpenGL_Version_2_1               QGLFormat__OpenGLVersionFlag = 64
	QGLFormat__OpenGL_ES_Common_Version_1_0     QGLFormat__OpenGLVersionFlag = 128
	QGLFormat__OpenGL_ES_CommonLite_Version_1_0 QGLFormat__OpenGLVersionFlag = 256
	QGLFormat__OpenGL_ES_Common_Version_1_1     QGLFormat__OpenGLVersionFlag = 512
	QGLFormat__OpenGL_ES_CommonLite_Version_1_1 QGLFormat__OpenGLVersionFlag = 1024
	QGLFormat__OpenGL_ES_Version_2_0            QGLFormat__OpenGLVersionFlag = 2048
	QGLFormat__OpenGL_Version_3_0               QGLFormat__OpenGLVersionFlag = 4096
	QGLFormat__OpenGL_Version_3_1               QGLFormat__OpenGLVersionFlag = 8192
	QGLFormat__OpenGL_Version_3_2               QGLFormat__OpenGLVersionFlag = 16384
	QGLFormat__OpenGL_Version_3_3               QGLFormat__OpenGLVersionFlag = 32768
	QGLFormat__OpenGL_Version_4_0               QGLFormat__OpenGLVersionFlag = 65536
	QGLFormat__OpenGL_Version_4_1               QGLFormat__OpenGLVersionFlag = 131072
	QGLFormat__OpenGL_Version_4_2               QGLFormat__OpenGLVersionFlag = 262144
	QGLFormat__OpenGL_Version_4_3               QGLFormat__OpenGLVersionFlag = 524288
)

type QGLContext__BindOption int

const (
	QGLContext__NoBindOption                  QGLContext__BindOption = 0
	QGLContext__InvertedYBindOption           QGLContext__BindOption = 1
	QGLContext__MipmapBindOption              QGLContext__BindOption = 2
	QGLContext__PremultipliedAlphaBindOption  QGLContext__BindOption = 4
	QGLContext__LinearFilteringBindOption     QGLContext__BindOption = 8
	QGLContext__MemoryManagedBindOption       QGLContext__BindOption = 16
	QGLContext__CanFlipNativePixmapBindOption QGLContext__BindOption = 32
	QGLContext__TemporarilyCachedBindOption   QGLContext__BindOption = 64
	QGLContext__DefaultBindOption             QGLContext__BindOption = 11
	QGLContext__InternalBindOption            QGLContext__BindOption = 20
)

type QGLFormat struct {
	h *C.QGLFormat
}

func (this *QGLFormat) cPointer() *C.QGLFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGLFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGLFormat constructs the type using only CGO pointers.
func newQGLFormat(h *C.QGLFormat) *QGLFormat {
	if h == nil {
		return nil
	}

	return &QGLFormat{h: h}
}

// UnsafeNewQGLFormat constructs the type using only unsafe pointers.
func UnsafeNewQGLFormat(h unsafe.Pointer) *QGLFormat {
	return newQGLFormat((*C.QGLFormat)(h))
}

// NewQGLFormat constructs a new QGLFormat object.
func NewQGLFormat() *QGLFormat {

	return newQGLFormat(C.QGLFormat_new())
}

// NewQGLFormat2 constructs a new QGLFormat object.
func NewQGLFormat2(options QGL__FormatOption) *QGLFormat {

	return newQGLFormat(C.QGLFormat_new2((C.int)(options)))
}

// NewQGLFormat3 constructs a new QGLFormat object.
func NewQGLFormat3(other *QGLFormat) *QGLFormat {

	return newQGLFormat(C.QGLFormat_new3(other.cPointer()))
}

// NewQGLFormat4 constructs a new QGLFormat object.
func NewQGLFormat4(options QGL__FormatOption, plane int) *QGLFormat {

	return newQGLFormat(C.QGLFormat_new4((C.int)(options), (C.int)(plane)))
}

func (this *QGLFormat) OperatorAssign(other *QGLFormat) {
	C.QGLFormat_operatorAssign(this.h, other.cPointer())
}

func (this *QGLFormat) SetDepthBufferSize(size int) {
	C.QGLFormat_setDepthBufferSize(this.h, (C.int)(size))
}

func (this *QGLFormat) DepthBufferSize() int {
	return (int)(C.QGLFormat_depthBufferSize(this.h))
}

func (this *QGLFormat) SetAccumBufferSize(size int) {
	C.QGLFormat_setAccumBufferSize(this.h, (C.int)(size))
}

func (this *QGLFormat) AccumBufferSize() int {
	return (int)(C.QGLFormat_accumBufferSize(this.h))
}

func (this *QGLFormat) SetRedBufferSize(size int) {
	C.QGLFormat_setRedBufferSize(this.h, (C.int)(size))
}

func (this *QGLFormat) RedBufferSize() int {
	return (int)(C.QGLFormat_redBufferSize(this.h))
}

func (this *QGLFormat) SetGreenBufferSize(size int) {
	C.QGLFormat_setGreenBufferSize(this.h, (C.int)(size))
}

func (this *QGLFormat) GreenBufferSize() int {
	return (int)(C.QGLFormat_greenBufferSize(this.h))
}

func (this *QGLFormat) SetBlueBufferSize(size int) {
	C.QGLFormat_setBlueBufferSize(this.h, (C.int)(size))
}

func (this *QGLFormat) BlueBufferSize() int {
	return (int)(C.QGLFormat_blueBufferSize(this.h))
}

func (this *QGLFormat) SetAlphaBufferSize(size int) {
	C.QGLFormat_setAlphaBufferSize(this.h, (C.int)(size))
}

func (this *QGLFormat) AlphaBufferSize() int {
	return (int)(C.QGLFormat_alphaBufferSize(this.h))
}

func (this *QGLFormat) SetStencilBufferSize(size int) {
	C.QGLFormat_setStencilBufferSize(this.h, (C.int)(size))
}

func (this *QGLFormat) StencilBufferSize() int {
	return (int)(C.QGLFormat_stencilBufferSize(this.h))
}

func (this *QGLFormat) SetSampleBuffers(enable bool) {
	C.QGLFormat_setSampleBuffers(this.h, (C.bool)(enable))
}

func (this *QGLFormat) SampleBuffers() bool {
	return (bool)(C.QGLFormat_sampleBuffers(this.h))
}

func (this *QGLFormat) SetSamples(numSamples int) {
	C.QGLFormat_setSamples(this.h, (C.int)(numSamples))
}

func (this *QGLFormat) Samples() int {
	return (int)(C.QGLFormat_samples(this.h))
}

func (this *QGLFormat) SetSwapInterval(interval int) {
	C.QGLFormat_setSwapInterval(this.h, (C.int)(interval))
}

func (this *QGLFormat) SwapInterval() int {
	return (int)(C.QGLFormat_swapInterval(this.h))
}

func (this *QGLFormat) DoubleBuffer() bool {
	return (bool)(C.QGLFormat_doubleBuffer(this.h))
}

func (this *QGLFormat) SetDoubleBuffer(enable bool) {
	C.QGLFormat_setDoubleBuffer(this.h, (C.bool)(enable))
}

func (this *QGLFormat) Depth() bool {
	return (bool)(C.QGLFormat_depth(this.h))
}

func (this *QGLFormat) SetDepth(enable bool) {
	C.QGLFormat_setDepth(this.h, (C.bool)(enable))
}

func (this *QGLFormat) Rgba() bool {
	return (bool)(C.QGLFormat_rgba(this.h))
}

func (this *QGLFormat) SetRgba(enable bool) {
	C.QGLFormat_setRgba(this.h, (C.bool)(enable))
}

func (this *QGLFormat) Alpha() bool {
	return (bool)(C.QGLFormat_alpha(this.h))
}

func (this *QGLFormat) SetAlpha(enable bool) {
	C.QGLFormat_setAlpha(this.h, (C.bool)(enable))
}

func (this *QGLFormat) Accum() bool {
	return (bool)(C.QGLFormat_accum(this.h))
}

func (this *QGLFormat) SetAccum(enable bool) {
	C.QGLFormat_setAccum(this.h, (C.bool)(enable))
}

func (this *QGLFormat) Stencil() bool {
	return (bool)(C.QGLFormat_stencil(this.h))
}

func (this *QGLFormat) SetStencil(enable bool) {
	C.QGLFormat_setStencil(this.h, (C.bool)(enable))
}

func (this *QGLFormat) Stereo() bool {
	return (bool)(C.QGLFormat_stereo(this.h))
}

func (this *QGLFormat) SetStereo(enable bool) {
	C.QGLFormat_setStereo(this.h, (C.bool)(enable))
}

func (this *QGLFormat) DirectRendering() bool {
	return (bool)(C.QGLFormat_directRendering(this.h))
}

func (this *QGLFormat) SetDirectRendering(enable bool) {
	C.QGLFormat_setDirectRendering(this.h, (C.bool)(enable))
}

func (this *QGLFormat) HasOverlay() bool {
	return (bool)(C.QGLFormat_hasOverlay(this.h))
}

func (this *QGLFormat) SetOverlay(enable bool) {
	C.QGLFormat_setOverlay(this.h, (C.bool)(enable))
}

func (this *QGLFormat) Plane() int {
	return (int)(C.QGLFormat_plane(this.h))
}

func (this *QGLFormat) SetPlane(plane int) {
	C.QGLFormat_setPlane(this.h, (C.int)(plane))
}

func (this *QGLFormat) SetOption(opt QGL__FormatOption) {
	C.QGLFormat_setOption(this.h, (C.int)(opt))
}

func (this *QGLFormat) TestOption(opt QGL__FormatOption) bool {
	return (bool)(C.QGLFormat_testOption(this.h, (C.int)(opt)))
}

func QGLFormat_DefaultFormat() *QGLFormat {
	_goptr := newQGLFormat(C.QGLFormat_defaultFormat())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QGLFormat_SetDefaultFormat(f *QGLFormat) {
	C.QGLFormat_setDefaultFormat(f.cPointer())
}

func QGLFormat_DefaultOverlayFormat() *QGLFormat {
	_goptr := newQGLFormat(C.QGLFormat_defaultOverlayFormat())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QGLFormat_SetDefaultOverlayFormat(f *QGLFormat) {
	C.QGLFormat_setDefaultOverlayFormat(f.cPointer())
}

func QGLFormat_HasOpenGL() bool {
	return (bool)(C.QGLFormat_hasOpenGL())
}

func QGLFormat_HasOpenGLOverlays() bool {
	return (bool)(C.QGLFormat_hasOpenGLOverlays())
}

func (this *QGLFormat) SetVersion(major int, minor int) {
	C.QGLFormat_setVersion(this.h, (C.int)(major), (C.int)(minor))
}

func (this *QGLFormat) MajorVersion() int {
	return (int)(C.QGLFormat_majorVersion(this.h))
}

func (this *QGLFormat) MinorVersion() int {
	return (int)(C.QGLFormat_minorVersion(this.h))
}

func (this *QGLFormat) SetProfile(profile QGLFormat__OpenGLContextProfile) {
	C.QGLFormat_setProfile(this.h, (C.int)(profile))
}

func (this *QGLFormat) Profile() QGLFormat__OpenGLContextProfile {
	return (QGLFormat__OpenGLContextProfile)(C.QGLFormat_profile(this.h))
}

func QGLFormat_OpenGLVersionFlags() QGLFormat__OpenGLVersionFlag {
	return (QGLFormat__OpenGLVersionFlag)(C.QGLFormat_openGLVersionFlags())
}

func QGLFormat_FromSurfaceFormat(format *qt.QSurfaceFormat) *QGLFormat {
	_goptr := newQGLFormat(C.QGLFormat_fromSurfaceFormat((*C.QSurfaceFormat)(format.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QGLFormat_ToSurfaceFormat(format *QGLFormat) *qt.QSurfaceFormat {
	_goptr := qt.UnsafeNewQSurfaceFormat(unsafe.Pointer(C.QGLFormat_toSurfaceFormat(format.cPointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QGLFormat) Delete() {
	C.QGLFormat_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGLFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QGLFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGLContext struct {
	h *C.QGLContext
}

func (this *QGLContext) cPointer() *C.QGLContext {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGLContext) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGLContext constructs the type using only CGO pointers.
func newQGLContext(h *C.QGLContext) *QGLContext {
	if h == nil {
		return nil
	}

	return &QGLContext{h: h}
}

// UnsafeNewQGLContext constructs the type using only unsafe pointers.
func UnsafeNewQGLContext(h unsafe.Pointer) *QGLContext {
	return newQGLContext((*C.QGLContext)(h))
}

// NewQGLContext constructs a new QGLContext object.
func NewQGLContext(format *QGLFormat, device *qt.QPaintDevice) *QGLContext {

	return newQGLContext(C.QGLContext_new(format.cPointer(), (*C.QPaintDevice)(device.UnsafePointer())))
}

// NewQGLContext2 constructs a new QGLContext object.
func NewQGLContext2(format *QGLFormat) *QGLContext {

	return newQGLContext(C.QGLContext_new2(format.cPointer()))
}

func (this *QGLContext) Create(shareContext *QGLContext) bool {
	return (bool)(C.QGLContext_create(this.h, shareContext.cPointer()))
}

func (this *QGLContext) IsValid() bool {
	return (bool)(C.QGLContext_isValid(this.h))
}

func (this *QGLContext) IsSharing() bool {
	return (bool)(C.QGLContext_isSharing(this.h))
}

func (this *QGLContext) Reset() {
	C.QGLContext_reset(this.h)
}

func QGLContext_AreSharing(context1 *QGLContext, context2 *QGLContext) bool {
	return (bool)(C.QGLContext_areSharing(context1.cPointer(), context2.cPointer()))
}

func (this *QGLContext) Format() *QGLFormat {
	_goptr := newQGLFormat(C.QGLContext_format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGLContext) RequestedFormat() *QGLFormat {
	_goptr := newQGLFormat(C.QGLContext_requestedFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGLContext) SetFormat(format *QGLFormat) {
	C.QGLContext_setFormat(this.h, format.cPointer())
}

func (this *QGLContext) MoveToThread(thread *qt.QThread) {
	C.QGLContext_moveToThread(this.h, (*C.QThread)(thread.UnsafePointer()))
}

func (this *QGLContext) MakeCurrent() {
	C.QGLContext_makeCurrent(this.h)
}

func (this *QGLContext) DoneCurrent() {
	C.QGLContext_doneCurrent(this.h)
}

func (this *QGLContext) SwapBuffers() {
	C.QGLContext_swapBuffers(this.h)
}

func QGLContext_SetTextureCacheLimit(size int) {
	C.QGLContext_setTextureCacheLimit((C.int)(size))
}

func QGLContext_TextureCacheLimit() int {
	return (int)(C.QGLContext_textureCacheLimit())
}

func (this *QGLContext) Device() *qt.QPaintDevice {
	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QGLContext_device(this.h)))
}

func (this *QGLContext) OverlayTransparentColor() *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QGLContext_overlayTransparentColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QGLContext_CurrentContext() *QGLContext {
	return newQGLContext(C.QGLContext_currentContext())
}

// DeviceIsPixmap can only be called from a QGLContext that was directly constructed.
func (this *QGLContext) DeviceIsPixmap() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGLContext_protectedbase_deviceIsPixmap(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// WindowCreated can only be called from a QGLContext that was directly constructed.
func (this *QGLContext) WindowCreated() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGLContext_protectedbase_windowCreated(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetWindowCreated can only be called from a QGLContext that was directly constructed.
func (this *QGLContext) SetWindowCreated(on bool) {

	var _dynamic_cast_ok C.bool = false
	C.QGLContext_protectedbase_setWindowCreated(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(on))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Initialized can only be called from a QGLContext that was directly constructed.
func (this *QGLContext) Initialized() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGLContext_protectedbase_initialized(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetInitialized can only be called from a QGLContext that was directly constructed.
func (this *QGLContext) SetInitialized(on bool) {

	var _dynamic_cast_ok C.bool = false
	C.QGLContext_protectedbase_setInitialized(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(on))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ColorIndex can only be called from a QGLContext that was directly constructed.
func (this *QGLContext) ColorIndex(c *qt.QColor) uint {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (uint)(C.QGLContext_protectedbase_colorIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetValid can only be called from a QGLContext that was directly constructed.
func (this *QGLContext) SetValid(valid bool) {

	var _dynamic_cast_ok C.bool = false
	C.QGLContext_protectedbase_setValid(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(valid))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetDevice can only be called from a QGLContext that was directly constructed.
func (this *QGLContext) SetDevice(pDev *qt.QPaintDevice) {

	var _dynamic_cast_ok C.bool = false
	C.QGLContext_protectedbase_setDevice(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QPaintDevice)(pDev.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGLContext) callVirtualBase_Create(shareContext *QGLContext) bool {

	return (bool)(C.QGLContext_virtualbase_create(unsafe.Pointer(this.h), shareContext.cPointer()))

}
func (this *QGLContext) OnCreate(slot func(super func(shareContext *QGLContext) bool, shareContext *QGLContext) bool) {
	ok := C.QGLContext_override_virtual_create(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLContext_create
func miqt_exec_callback_QGLContext_create(self *C.QGLContext, cb C.intptr_t, shareContext *C.QGLContext) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(shareContext *QGLContext) bool, shareContext *QGLContext) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGLContext(shareContext)

	virtualReturn := gofunc((&QGLContext{h: self}).callVirtualBase_Create, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGLContext) callVirtualBase_MakeCurrent() {

	C.QGLContext_virtualbase_makeCurrent(unsafe.Pointer(this.h))

}
func (this *QGLContext) OnMakeCurrent(slot func(super func())) {
	ok := C.QGLContext_override_virtual_makeCurrent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLContext_makeCurrent
func miqt_exec_callback_QGLContext_makeCurrent(self *C.QGLContext, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGLContext{h: self}).callVirtualBase_MakeCurrent)

}

func (this *QGLContext) callVirtualBase_DoneCurrent() {

	C.QGLContext_virtualbase_doneCurrent(unsafe.Pointer(this.h))

}
func (this *QGLContext) OnDoneCurrent(slot func(super func())) {
	ok := C.QGLContext_override_virtual_doneCurrent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLContext_doneCurrent
func miqt_exec_callback_QGLContext_doneCurrent(self *C.QGLContext, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGLContext{h: self}).callVirtualBase_DoneCurrent)

}

func (this *QGLContext) callVirtualBase_SwapBuffers() {

	C.QGLContext_virtualbase_swapBuffers(unsafe.Pointer(this.h))

}
func (this *QGLContext) OnSwapBuffers(slot func(super func())) {
	ok := C.QGLContext_override_virtual_swapBuffers(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLContext_swapBuffers
func miqt_exec_callback_QGLContext_swapBuffers(self *C.QGLContext, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGLContext{h: self}).callVirtualBase_SwapBuffers)

}

func (this *QGLContext) callVirtualBase_ChooseContext(shareContext *QGLContext) bool {

	return (bool)(C.QGLContext_virtualbase_chooseContext(unsafe.Pointer(this.h), shareContext.cPointer()))

}
func (this *QGLContext) OnChooseContext(slot func(super func(shareContext *QGLContext) bool, shareContext *QGLContext) bool) {
	ok := C.QGLContext_override_virtual_chooseContext(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLContext_chooseContext
func miqt_exec_callback_QGLContext_chooseContext(self *C.QGLContext, cb C.intptr_t, shareContext *C.QGLContext) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(shareContext *QGLContext) bool, shareContext *QGLContext) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGLContext(shareContext)

	virtualReturn := gofunc((&QGLContext{h: self}).callVirtualBase_ChooseContext, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QGLContext) Delete() {
	C.QGLContext_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGLContext) GoGC() {
	runtime.SetFinalizer(this, func(this *QGLContext) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGLWidget struct {
	h *C.QGLWidget
	*qt.QWidget
}

func (this *QGLWidget) cPointer() *C.QGLWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGLWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGLWidget constructs the type using only CGO pointers.
func newQGLWidget(h *C.QGLWidget) *QGLWidget {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QGLWidget_virtbase(h, &outptr_QWidget)

	return &QGLWidget{h: h,
		QWidget: qt.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQGLWidget constructs the type using only unsafe pointers.
func UnsafeNewQGLWidget(h unsafe.Pointer) *QGLWidget {
	return newQGLWidget((*C.QGLWidget)(h))
}

// NewQGLWidget constructs a new QGLWidget object.
func NewQGLWidget(parent *qt.QWidget) *QGLWidget {

	return newQGLWidget(C.QGLWidget_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQGLWidget2 constructs a new QGLWidget object.
func NewQGLWidget2() *QGLWidget {

	return newQGLWidget(C.QGLWidget_new2())
}

// NewQGLWidget3 constructs a new QGLWidget object.
func NewQGLWidget3(context *QGLContext) *QGLWidget {

	return newQGLWidget(C.QGLWidget_new3(context.cPointer()))
}

// NewQGLWidget4 constructs a new QGLWidget object.
func NewQGLWidget4(format *QGLFormat) *QGLWidget {

	return newQGLWidget(C.QGLWidget_new4(format.cPointer()))
}

// NewQGLWidget5 constructs a new QGLWidget object.
func NewQGLWidget5(parent *qt.QWidget, shareWidget *QGLWidget) *QGLWidget {

	return newQGLWidget(C.QGLWidget_new5((*C.QWidget)(parent.UnsafePointer()), shareWidget.cPointer()))
}

// NewQGLWidget6 constructs a new QGLWidget object.
func NewQGLWidget6(parent *qt.QWidget, shareWidget *QGLWidget, f qt.WindowType) *QGLWidget {

	return newQGLWidget(C.QGLWidget_new6((*C.QWidget)(parent.UnsafePointer()), shareWidget.cPointer(), (C.int)(f)))
}

// NewQGLWidget7 constructs a new QGLWidget object.
func NewQGLWidget7(context *QGLContext, parent *qt.QWidget) *QGLWidget {

	return newQGLWidget(C.QGLWidget_new7(context.cPointer(), (*C.QWidget)(parent.UnsafePointer())))
}

// NewQGLWidget8 constructs a new QGLWidget object.
func NewQGLWidget8(context *QGLContext, parent *qt.QWidget, shareWidget *QGLWidget) *QGLWidget {

	return newQGLWidget(C.QGLWidget_new8(context.cPointer(), (*C.QWidget)(parent.UnsafePointer()), shareWidget.cPointer()))
}

// NewQGLWidget9 constructs a new QGLWidget object.
func NewQGLWidget9(context *QGLContext, parent *qt.QWidget, shareWidget *QGLWidget, f qt.WindowType) *QGLWidget {

	return newQGLWidget(C.QGLWidget_new9(context.cPointer(), (*C.QWidget)(parent.UnsafePointer()), shareWidget.cPointer(), (C.int)(f)))
}

// NewQGLWidget10 constructs a new QGLWidget object.
func NewQGLWidget10(format *QGLFormat, parent *qt.QWidget) *QGLWidget {

	return newQGLWidget(C.QGLWidget_new10(format.cPointer(), (*C.QWidget)(parent.UnsafePointer())))
}

// NewQGLWidget11 constructs a new QGLWidget object.
func NewQGLWidget11(format *QGLFormat, parent *qt.QWidget, shareWidget *QGLWidget) *QGLWidget {

	return newQGLWidget(C.QGLWidget_new11(format.cPointer(), (*C.QWidget)(parent.UnsafePointer()), shareWidget.cPointer()))
}

// NewQGLWidget12 constructs a new QGLWidget object.
func NewQGLWidget12(format *QGLFormat, parent *qt.QWidget, shareWidget *QGLWidget, f qt.WindowType) *QGLWidget {

	return newQGLWidget(C.QGLWidget_new12(format.cPointer(), (*C.QWidget)(parent.UnsafePointer()), shareWidget.cPointer(), (C.int)(f)))
}

func (this *QGLWidget) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QGLWidget_metaObject(this.h)))
}

func (this *QGLWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGLWidget_metacast(this.h, param1_Cstring))
}

func QGLWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGLWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGLWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGLWidget_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGLWidget) QglColor(c *qt.QColor) {
	C.QGLWidget_qglColor(this.h, (*C.QColor)(c.UnsafePointer()))
}

func (this *QGLWidget) QglClearColor(c *qt.QColor) {
	C.QGLWidget_qglClearColor(this.h, (*C.QColor)(c.UnsafePointer()))
}

func (this *QGLWidget) IsValid() bool {
	return (bool)(C.QGLWidget_isValid(this.h))
}

func (this *QGLWidget) IsSharing() bool {
	return (bool)(C.QGLWidget_isSharing(this.h))
}

func (this *QGLWidget) MakeCurrent() {
	C.QGLWidget_makeCurrent(this.h)
}

func (this *QGLWidget) DoneCurrent() {
	C.QGLWidget_doneCurrent(this.h)
}

func (this *QGLWidget) DoubleBuffer() bool {
	return (bool)(C.QGLWidget_doubleBuffer(this.h))
}

func (this *QGLWidget) SwapBuffers() {
	C.QGLWidget_swapBuffers(this.h)
}

func (this *QGLWidget) Format() *QGLFormat {
	_goptr := newQGLFormat(C.QGLWidget_format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGLWidget) SetFormat(format *QGLFormat) {
	C.QGLWidget_setFormat(this.h, format.cPointer())
}

func (this *QGLWidget) Context() *QGLContext {
	return newQGLContext(C.QGLWidget_context(this.h))
}

func (this *QGLWidget) SetContext(context *QGLContext) {
	C.QGLWidget_setContext(this.h, context.cPointer())
}

func (this *QGLWidget) RenderPixmap() *qt.QPixmap {
	_goptr := qt.UnsafeNewQPixmap(unsafe.Pointer(C.QGLWidget_renderPixmap(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGLWidget) GrabFrameBuffer() *qt.QImage {
	_goptr := qt.UnsafeNewQImage(unsafe.Pointer(C.QGLWidget_grabFrameBuffer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGLWidget) MakeOverlayCurrent() {
	C.QGLWidget_makeOverlayCurrent(this.h)
}

func (this *QGLWidget) OverlayContext() *QGLContext {
	return newQGLContext(C.QGLWidget_overlayContext(this.h))
}

func QGLWidget_ConvertToGLFormat(img *qt.QImage) *qt.QImage {
	_goptr := qt.UnsafeNewQImage(unsafe.Pointer(C.QGLWidget_convertToGLFormat((*C.QImage)(img.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGLWidget) RenderText(x int, y int, str string) {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	C.QGLWidget_renderText(this.h, (C.int)(x), (C.int)(y), str_ms)
}

func (this *QGLWidget) RenderText2(x float64, y float64, z float64, str string) {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	C.QGLWidget_renderText2(this.h, (C.double)(x), (C.double)(y), (C.double)(z), str_ms)
}

func (this *QGLWidget) PaintEngine() *qt.QPaintEngine {
	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QGLWidget_paintEngine(this.h)))
}

func (this *QGLWidget) UpdateGL() {
	C.QGLWidget_updateGL(this.h)
}

func (this *QGLWidget) UpdateOverlayGL() {
	C.QGLWidget_updateOverlayGL(this.h)
}

func QGLWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGLWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGLWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGLWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGLWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGLWidget_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGLWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGLWidget_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGLWidget) SetContext2(context *QGLContext, shareContext *QGLContext) {
	C.QGLWidget_setContext2(this.h, context.cPointer(), shareContext.cPointer())
}

func (this *QGLWidget) SetContext3(context *QGLContext, shareContext *QGLContext, deleteOldContext bool) {
	C.QGLWidget_setContext3(this.h, context.cPointer(), shareContext.cPointer(), (C.bool)(deleteOldContext))
}

func (this *QGLWidget) RenderPixmapWithInt(w int) *qt.QPixmap {
	_goptr := qt.UnsafeNewQPixmap(unsafe.Pointer(C.QGLWidget_renderPixmapWithInt(this.h, (C.int)(w))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGLWidget) RenderPixmap2(w int, h int) *qt.QPixmap {
	_goptr := qt.UnsafeNewQPixmap(unsafe.Pointer(C.QGLWidget_renderPixmap2(this.h, (C.int)(w), (C.int)(h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGLWidget) RenderPixmap3(w int, h int, useContext bool) *qt.QPixmap {
	_goptr := qt.UnsafeNewQPixmap(unsafe.Pointer(C.QGLWidget_renderPixmap3(this.h, (C.int)(w), (C.int)(h), (C.bool)(useContext))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGLWidget) GrabFrameBufferWithWithAlpha(withAlpha bool) *qt.QImage {
	_goptr := qt.UnsafeNewQImage(unsafe.Pointer(C.QGLWidget_grabFrameBufferWithWithAlpha(this.h, (C.bool)(withAlpha))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGLWidget) RenderText3(x int, y int, str string, fnt *qt.QFont) {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	C.QGLWidget_renderText3(this.h, (C.int)(x), (C.int)(y), str_ms, (*C.QFont)(fnt.UnsafePointer()))
}

func (this *QGLWidget) RenderText4(x float64, y float64, z float64, str string, fnt *qt.QFont) {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	C.QGLWidget_renderText4(this.h, (C.double)(x), (C.double)(y), (C.double)(z), str_ms, (*C.QFont)(fnt.UnsafePointer()))
}

// SetAutoBufferSwap can only be called from a QGLWidget that was directly constructed.
func (this *QGLWidget) SetAutoBufferSwap(on bool) {

	var _dynamic_cast_ok C.bool = false
	C.QGLWidget_protectedbase_setAutoBufferSwap(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(on))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AutoBufferSwap can only be called from a QGLWidget that was directly constructed.
func (this *QGLWidget) AutoBufferSwap() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGLWidget_protectedbase_autoBufferSwap(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// UpdateMicroFocus can only be called from a QGLWidget that was directly constructed.
func (this *QGLWidget) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QGLWidget_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QGLWidget that was directly constructed.
func (this *QGLWidget) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QGLWidget_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QGLWidget that was directly constructed.
func (this *QGLWidget) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QGLWidget_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QGLWidget that was directly constructed.
func (this *QGLWidget) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGLWidget_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QGLWidget that was directly constructed.
func (this *QGLWidget) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGLWidget_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QGLWidget that was directly constructed.
func (this *QGLWidget) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QGLWidget_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGLWidget that was directly constructed.
func (this *QGLWidget) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGLWidget_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGLWidget that was directly constructed.
func (this *QGLWidget) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGLWidget_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGLWidget that was directly constructed.
func (this *QGLWidget) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGLWidget_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QGLWidget) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QGLWidget_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QGLWidget) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QGLWidget_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_paintEngine
func miqt_exec_callback_QGLWidget_paintEngine(self *C.QGLWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGLWidget{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QGLWidget) callVirtualBase_UpdateGL() {

	C.QGLWidget_virtualbase_updateGL(unsafe.Pointer(this.h))

}
func (this *QGLWidget) OnUpdateGL(slot func(super func())) {
	ok := C.QGLWidget_override_virtual_updateGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_updateGL
func miqt_exec_callback_QGLWidget_updateGL(self *C.QGLWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGLWidget{h: self}).callVirtualBase_UpdateGL)

}

func (this *QGLWidget) callVirtualBase_UpdateOverlayGL() {

	C.QGLWidget_virtualbase_updateOverlayGL(unsafe.Pointer(this.h))

}
func (this *QGLWidget) OnUpdateOverlayGL(slot func(super func())) {
	ok := C.QGLWidget_override_virtual_updateOverlayGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_updateOverlayGL
func miqt_exec_callback_QGLWidget_updateOverlayGL(self *C.QGLWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGLWidget{h: self}).callVirtualBase_UpdateOverlayGL)

}

func (this *QGLWidget) callVirtualBase_Event(param1 *qt.QEvent) bool {

	return (bool)(C.QGLWidget_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QGLWidget) OnEvent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	ok := C.QGLWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_event
func miqt_exec_callback_QGLWidget_event(self *C.QGLWidget, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QGLWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGLWidget) callVirtualBase_InitializeGL() {

	C.QGLWidget_virtualbase_initializeGL(unsafe.Pointer(this.h))

}
func (this *QGLWidget) OnInitializeGL(slot func(super func())) {
	ok := C.QGLWidget_override_virtual_initializeGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_initializeGL
func miqt_exec_callback_QGLWidget_initializeGL(self *C.QGLWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGLWidget{h: self}).callVirtualBase_InitializeGL)

}

func (this *QGLWidget) callVirtualBase_ResizeGL(w int, h int) {

	C.QGLWidget_virtualbase_resizeGL(unsafe.Pointer(this.h), (C.int)(w), (C.int)(h))

}
func (this *QGLWidget) OnResizeGL(slot func(super func(w int, h int), w int, h int)) {
	ok := C.QGLWidget_override_virtual_resizeGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_resizeGL
func miqt_exec_callback_QGLWidget_resizeGL(self *C.QGLWidget, cb C.intptr_t, w C.int, h C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(w int, h int), w int, h int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(w)

	slotval2 := (int)(h)

	gofunc((&QGLWidget{h: self}).callVirtualBase_ResizeGL, slotval1, slotval2)

}

func (this *QGLWidget) callVirtualBase_PaintGL() {

	C.QGLWidget_virtualbase_paintGL(unsafe.Pointer(this.h))

}
func (this *QGLWidget) OnPaintGL(slot func(super func())) {
	ok := C.QGLWidget_override_virtual_paintGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_paintGL
func miqt_exec_callback_QGLWidget_paintGL(self *C.QGLWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGLWidget{h: self}).callVirtualBase_PaintGL)

}

func (this *QGLWidget) callVirtualBase_InitializeOverlayGL() {

	C.QGLWidget_virtualbase_initializeOverlayGL(unsafe.Pointer(this.h))

}
func (this *QGLWidget) OnInitializeOverlayGL(slot func(super func())) {
	ok := C.QGLWidget_override_virtual_initializeOverlayGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_initializeOverlayGL
func miqt_exec_callback_QGLWidget_initializeOverlayGL(self *C.QGLWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGLWidget{h: self}).callVirtualBase_InitializeOverlayGL)

}

func (this *QGLWidget) callVirtualBase_ResizeOverlayGL(w int, h int) {

	C.QGLWidget_virtualbase_resizeOverlayGL(unsafe.Pointer(this.h), (C.int)(w), (C.int)(h))

}
func (this *QGLWidget) OnResizeOverlayGL(slot func(super func(w int, h int), w int, h int)) {
	ok := C.QGLWidget_override_virtual_resizeOverlayGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_resizeOverlayGL
func miqt_exec_callback_QGLWidget_resizeOverlayGL(self *C.QGLWidget, cb C.intptr_t, w C.int, h C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(w int, h int), w int, h int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(w)

	slotval2 := (int)(h)

	gofunc((&QGLWidget{h: self}).callVirtualBase_ResizeOverlayGL, slotval1, slotval2)

}

func (this *QGLWidget) callVirtualBase_PaintOverlayGL() {

	C.QGLWidget_virtualbase_paintOverlayGL(unsafe.Pointer(this.h))

}
func (this *QGLWidget) OnPaintOverlayGL(slot func(super func())) {
	ok := C.QGLWidget_override_virtual_paintOverlayGL(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_paintOverlayGL
func miqt_exec_callback_QGLWidget_paintOverlayGL(self *C.QGLWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGLWidget{h: self}).callVirtualBase_PaintOverlayGL)

}

func (this *QGLWidget) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QGLWidget_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QGLWidget) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QGLWidget_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_paintEvent
func miqt_exec_callback_QGLWidget_paintEvent(self *C.QGLWidget, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QGLWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_ResizeEvent(param1 *qt.QResizeEvent) {

	C.QGLWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QGLWidget) OnResizeEvent(slot func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent)) {
	ok := C.QGLWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_resizeEvent
func miqt_exec_callback_QGLWidget_resizeEvent(self *C.QGLWidget, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(param1))

	gofunc((&QGLWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_GlInit() {

	C.QGLWidget_virtualbase_glInit(unsafe.Pointer(this.h))

}
func (this *QGLWidget) OnGlInit(slot func(super func())) {
	ok := C.QGLWidget_override_virtual_glInit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_glInit
func miqt_exec_callback_QGLWidget_glInit(self *C.QGLWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGLWidget{h: self}).callVirtualBase_GlInit)

}

func (this *QGLWidget) callVirtualBase_GlDraw() {

	C.QGLWidget_virtualbase_glDraw(unsafe.Pointer(this.h))

}
func (this *QGLWidget) OnGlDraw(slot func(super func())) {
	ok := C.QGLWidget_override_virtual_glDraw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_glDraw
func miqt_exec_callback_QGLWidget_glDraw(self *C.QGLWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGLWidget{h: self}).callVirtualBase_GlDraw)

}

func (this *QGLWidget) callVirtualBase_DevType() int {

	return (int)(C.QGLWidget_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QGLWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QGLWidget_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_devType
func miqt_exec_callback_QGLWidget_devType(self *C.QGLWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGLWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QGLWidget) callVirtualBase_SetVisible(visible bool) {

	C.QGLWidget_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QGLWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QGLWidget_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_setVisible
func miqt_exec_callback_QGLWidget_setVisible(self *C.QGLWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QGLWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QGLWidget) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QGLWidget_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGLWidget) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QGLWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_sizeHint
func miqt_exec_callback_QGLWidget_sizeHint(self *C.QGLWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGLWidget{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QGLWidget) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QGLWidget_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGLWidget) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QGLWidget_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_minimumSizeHint
func miqt_exec_callback_QGLWidget_minimumSizeHint(self *C.QGLWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGLWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QGLWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QGLWidget_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QGLWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QGLWidget_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_heightForWidth
func miqt_exec_callback_QGLWidget_heightForWidth(self *C.QGLWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QGLWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGLWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QGLWidget_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QGLWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QGLWidget_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_hasHeightForWidth
func miqt_exec_callback_QGLWidget_hasHeightForWidth(self *C.QGLWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGLWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QGLWidget) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QGLWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QGLWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_mousePressEvent
func miqt_exec_callback_QGLWidget_mousePressEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QGLWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QGLWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_mouseReleaseEvent
func miqt_exec_callback_QGLWidget_mouseReleaseEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QGLWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QGLWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_mouseDoubleClickEvent
func miqt_exec_callback_QGLWidget_mouseDoubleClickEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QGLWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QGLWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_mouseMoveEvent
func miqt_exec_callback_QGLWidget_mouseMoveEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QGLWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QGLWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_wheelEvent
func miqt_exec_callback_QGLWidget_wheelEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QGLWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QGLWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_keyPressEvent
func miqt_exec_callback_QGLWidget_keyPressEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QGLWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QGLWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_keyReleaseEvent
func miqt_exec_callback_QGLWidget_keyReleaseEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QGLWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QGLWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_focusInEvent
func miqt_exec_callback_QGLWidget_focusInEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QGLWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QGLWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_focusOutEvent
func miqt_exec_callback_QGLWidget_focusOutEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QGLWidget_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGLWidget_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_enterEvent
func miqt_exec_callback_QGLWidget_enterEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QGLWidget_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGLWidget_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_leaveEvent
func miqt_exec_callback_QGLWidget_leaveEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QGLWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QGLWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_moveEvent
func miqt_exec_callback_QGLWidget_moveEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QGLWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QGLWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_closeEvent
func miqt_exec_callback_QGLWidget_closeEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QGLWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QGLWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_contextMenuEvent
func miqt_exec_callback_QGLWidget_contextMenuEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QGLWidget_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QGLWidget_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_tabletEvent
func miqt_exec_callback_QGLWidget_tabletEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QGLWidget_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QGLWidget_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_actionEvent
func miqt_exec_callback_QGLWidget_actionEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QGLWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QGLWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_dragEnterEvent
func miqt_exec_callback_QGLWidget_dragEnterEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QGLWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QGLWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_dragMoveEvent
func miqt_exec_callback_QGLWidget_dragMoveEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QGLWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QGLWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_dragLeaveEvent
func miqt_exec_callback_QGLWidget_dragLeaveEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QGLWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QGLWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_dropEvent
func miqt_exec_callback_QGLWidget_dropEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QGLWidget_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QGLWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_showEvent
func miqt_exec_callback_QGLWidget_showEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QGLWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QGLWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_hideEvent
func miqt_exec_callback_QGLWidget_hideEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QGLWidget_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QGLWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QGLWidget_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_nativeEvent
func miqt_exec_callback_QGLWidget_nativeEvent(self *C.QGLWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QGLWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QGLWidget) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QGLWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QGLWidget) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QGLWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_changeEvent
func miqt_exec_callback_QGLWidget_changeEvent(self *C.QGLWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QGLWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QGLWidget_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QGLWidget) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QGLWidget_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_metric
func miqt_exec_callback_QGLWidget_metric(self *C.QGLWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QGLWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGLWidget) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QGLWidget_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QGLWidget) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QGLWidget_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_initPainter
func miqt_exec_callback_QGLWidget_initPainter(self *C.QGLWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QGLWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QGLWidget) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QGLWidget_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QGLWidget) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QGLWidget_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_redirected
func miqt_exec_callback_QGLWidget_redirected(self *C.QGLWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QGLWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QGLWidget) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QGLWidget_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QGLWidget) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QGLWidget_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_sharedPainter
func miqt_exec_callback_QGLWidget_sharedPainter(self *C.QGLWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGLWidget{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QGLWidget) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QGLWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QGLWidget) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QGLWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_inputMethodEvent
func miqt_exec_callback_QGLWidget_inputMethodEvent(self *C.QGLWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QGLWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGLWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGLWidget) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QGLWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_inputMethodQuery
func miqt_exec_callback_QGLWidget_inputMethodQuery(self *C.QGLWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QGLWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QGLWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QGLWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QGLWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QGLWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_focusNextPrevChild
func miqt_exec_callback_QGLWidget_focusNextPrevChild(self *C.QGLWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QGLWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGLWidget) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QGLWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGLWidget) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QGLWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_eventFilter
func miqt_exec_callback_QGLWidget_eventFilter(self *C.QGLWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGLWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGLWidget) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QGLWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QGLWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_timerEvent
func miqt_exec_callback_QGLWidget_timerEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QGLWidget_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QGLWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_childEvent
func miqt_exec_callback_QGLWidget_childEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QGLWidget_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGLWidget) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGLWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_customEvent
func miqt_exec_callback_QGLWidget_customEvent(self *C.QGLWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGLWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGLWidget) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QGLWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGLWidget) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QGLWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_connectNotify
func miqt_exec_callback_QGLWidget_connectNotify(self *C.QGLWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGLWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGLWidget) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QGLWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGLWidget) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QGLWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGLWidget_disconnectNotify
func miqt_exec_callback_QGLWidget_disconnectNotify(self *C.QGLWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGLWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGLWidget) Delete() {
	C.QGLWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGLWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QGLWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
