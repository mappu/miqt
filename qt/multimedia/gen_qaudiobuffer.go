package multimedia

/*

#include "gen_qaudiobuffer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAudioBuffer struct {
	h  *C.QAudioBuffer
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAudioBuffer) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAudioBuffer) cPointer() *C.QAudioBuffer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioBuffer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioBuffer constructs the type using only CGO pointers.
func newQAudioBuffer(h *C.QAudioBuffer) *QAudioBuffer {
	if h == nil {
		return nil
	}

	return &QAudioBuffer{h: h}
}

// UnsafeNewQAudioBuffer constructs the type using only unsafe pointers.
func UnsafeNewQAudioBuffer(h unsafe.Pointer) *QAudioBuffer {
	return newQAudioBuffer((*C.QAudioBuffer)(h))
}

// NewQAudioBuffer constructs a new QAudioBuffer object.
func NewQAudioBuffer() *QAudioBuffer {

	return newQAudioBuffer(C.QAudioBuffer_new())
}

// NewQAudioBuffer2 constructs a new QAudioBuffer object.
func NewQAudioBuffer2(other *QAudioBuffer) *QAudioBuffer {
	defer runtime.KeepAlive(other)

	return newQAudioBuffer(C.QAudioBuffer_new2(other.cPointer()))
}

// NewQAudioBuffer3 constructs a new QAudioBuffer object.
func NewQAudioBuffer3(data []byte, format *QAudioFormat) *QAudioBuffer {
	defer runtime.KeepAlive(format)
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))

	return newQAudioBuffer(C.QAudioBuffer_new3(data_alias, format.cPointer()))
}

// NewQAudioBuffer4 constructs a new QAudioBuffer object.
func NewQAudioBuffer4(numFrames int, format *QAudioFormat) *QAudioBuffer {
	defer runtime.KeepAlive(format)

	return newQAudioBuffer(C.QAudioBuffer_new4((C.int)(numFrames), format.cPointer()))
}

// NewQAudioBuffer5 constructs a new QAudioBuffer object.
func NewQAudioBuffer5(data []byte, format *QAudioFormat, startTime int64) *QAudioBuffer {
	defer runtime.KeepAlive(format)
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))

	return newQAudioBuffer(C.QAudioBuffer_new5(data_alias, format.cPointer(), (C.longlong)(startTime)))
}

// NewQAudioBuffer6 constructs a new QAudioBuffer object.
func NewQAudioBuffer6(numFrames int, format *QAudioFormat, startTime int64) *QAudioBuffer {
	defer runtime.KeepAlive(format)

	return newQAudioBuffer(C.QAudioBuffer_new6((C.int)(numFrames), format.cPointer(), (C.longlong)(startTime)))
}

func (this *QAudioBuffer) OperatorAssign(other *QAudioBuffer) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QAudioBuffer_operatorAssign(this.h, other.cPointer())
}

func (this *QAudioBuffer) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAudioBuffer_isValid(this.h))
}

func (this *QAudioBuffer) Format() *QAudioFormat {
	defer runtime.KeepAlive(this)
	_goptr := newQAudioFormat(C.QAudioBuffer_format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioBuffer) FrameCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioBuffer_frameCount(this.h))
}

func (this *QAudioBuffer) SampleCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioBuffer_sampleCount(this.h))
}

func (this *QAudioBuffer) ByteCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAudioBuffer_byteCount(this.h))
}

func (this *QAudioBuffer) Duration() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QAudioBuffer_duration(this.h))
}

func (this *QAudioBuffer) StartTime() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QAudioBuffer_startTime(this.h))
}

func (this *QAudioBuffer) ConstData() unsafe.Pointer {
	defer runtime.KeepAlive(this)
	return (unsafe.Pointer)(C.QAudioBuffer_constData(this.h))
}

func (this *QAudioBuffer) Data() unsafe.Pointer {
	defer runtime.KeepAlive(this)
	return (unsafe.Pointer)(C.QAudioBuffer_data(this.h))
}

func (this *QAudioBuffer) Data2() unsafe.Pointer {
	defer runtime.KeepAlive(this)
	return (unsafe.Pointer)(C.QAudioBuffer_data2(this.h))
}

// Delete this object from C++ memory.
func (this *QAudioBuffer) Delete() {
	C.QAudioBuffer_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAudioBuffer) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAudioBuffer_delete((*C.QAudioBuffer)(gc[0]))
	})
	this.miqtSetGC(gc)
}
