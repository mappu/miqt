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
	h          *C.QAudioBuffer
	isSubclass bool
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

	ret := newQAudioBuffer(C.QAudioBuffer_new())
	ret.isSubclass = true
	return ret
}

// NewQAudioBuffer2 constructs a new QAudioBuffer object.
func NewQAudioBuffer2(other *QAudioBuffer) *QAudioBuffer {

	ret := newQAudioBuffer(C.QAudioBuffer_new2(other.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQAudioBuffer3 constructs a new QAudioBuffer object.
func NewQAudioBuffer3(data []byte, format *QAudioFormat) *QAudioBuffer {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))

	ret := newQAudioBuffer(C.QAudioBuffer_new3(data_alias, format.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQAudioBuffer4 constructs a new QAudioBuffer object.
func NewQAudioBuffer4(numFrames int, format *QAudioFormat) *QAudioBuffer {

	ret := newQAudioBuffer(C.QAudioBuffer_new4((C.int)(numFrames), format.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQAudioBuffer5 constructs a new QAudioBuffer object.
func NewQAudioBuffer5(data []byte, format *QAudioFormat, startTime int64) *QAudioBuffer {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))

	ret := newQAudioBuffer(C.QAudioBuffer_new5(data_alias, format.cPointer(), (C.longlong)(startTime)))
	ret.isSubclass = true
	return ret
}

// NewQAudioBuffer6 constructs a new QAudioBuffer object.
func NewQAudioBuffer6(numFrames int, format *QAudioFormat, startTime int64) *QAudioBuffer {

	ret := newQAudioBuffer(C.QAudioBuffer_new6((C.int)(numFrames), format.cPointer(), (C.longlong)(startTime)))
	ret.isSubclass = true
	return ret
}

func (this *QAudioBuffer) OperatorAssign(other *QAudioBuffer) {
	C.QAudioBuffer_OperatorAssign(this.h, other.cPointer())
}

func (this *QAudioBuffer) Swap(other *QAudioBuffer) {
	C.QAudioBuffer_Swap(this.h, other.cPointer())
}

func (this *QAudioBuffer) IsValid() bool {
	return (bool)(C.QAudioBuffer_IsValid(this.h))
}

func (this *QAudioBuffer) Detach() {
	C.QAudioBuffer_Detach(this.h)
}

func (this *QAudioBuffer) Format() *QAudioFormat {
	_goptr := newQAudioFormat(C.QAudioBuffer_Format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioBuffer) FrameCount() int64 {
	return (int64)(C.QAudioBuffer_FrameCount(this.h))
}

func (this *QAudioBuffer) SampleCount() int64 {
	return (int64)(C.QAudioBuffer_SampleCount(this.h))
}

func (this *QAudioBuffer) ByteCount() int64 {
	return (int64)(C.QAudioBuffer_ByteCount(this.h))
}

func (this *QAudioBuffer) Duration() int64 {
	return (int64)(C.QAudioBuffer_Duration(this.h))
}

func (this *QAudioBuffer) StartTime() int64 {
	return (int64)(C.QAudioBuffer_StartTime(this.h))
}

// Delete this object from C++ memory.
func (this *QAudioBuffer) Delete() {
	C.QAudioBuffer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioBuffer) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioBuffer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
