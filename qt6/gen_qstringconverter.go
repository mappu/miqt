package qt6

/*

#include "gen_qstringconverter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStringEncoder struct {
	h  *C.QStringEncoder
	gc *[1]unsafe.Pointer
	*QStringConverter
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStringEncoder) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStringConverter.miqtSetGC(gc)
}

func (this *QStringEncoder) cPointer() *C.QStringEncoder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStringEncoder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStringEncoder constructs the type using only CGO pointers.
func newQStringEncoder(h *C.QStringEncoder) *QStringEncoder {
	if h == nil {
		return nil
	}
	var outptr_QStringConverter *C.QStringConverter = nil
	C.QStringEncoder_virtbase(h, &outptr_QStringConverter)

	return &QStringEncoder{h: h,
		QStringConverter: newQStringConverter(outptr_QStringConverter)}
}

// UnsafeNewQStringEncoder constructs the type using only unsafe pointers.
func UnsafeNewQStringEncoder(h unsafe.Pointer) *QStringEncoder {
	return newQStringEncoder((*C.QStringEncoder)(h))
}

// NewQStringEncoder constructs a new QStringEncoder object.
func NewQStringEncoder() *QStringEncoder {

	return newQStringEncoder(C.QStringEncoder_new())
}

// NewQStringEncoder2 constructs a new QStringEncoder object.
func NewQStringEncoder2(encoding QStringConverter__Encoding) *QStringEncoder {

	return newQStringEncoder(C.QStringEncoder_new2((C.int)(encoding)))
}

// NewQStringEncoder3 constructs a new QStringEncoder object.
func NewQStringEncoder3(name string) *QStringEncoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))

	return newQStringEncoder(C.QStringEncoder_new3(name_Cstring))
}

// NewQStringEncoder4 constructs a new QStringEncoder object.
func NewQStringEncoder4(encoding QStringConverter__Encoding, flags QStringConverterBase__Flag) *QStringEncoder {

	return newQStringEncoder(C.QStringEncoder_new4((C.int)(encoding), (C.int)(flags)))
}

// NewQStringEncoder5 constructs a new QStringEncoder object.
func NewQStringEncoder5(name string, flags QStringConverterBase__Flag) *QStringEncoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))

	return newQStringEncoder(C.QStringEncoder_new5(name_Cstring, (C.int)(flags)))
}

func (this *QStringEncoder) RequiredSpace(inputLength int64) int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QStringEncoder_requiredSpace(this.h, (C.ptrdiff_t)(inputLength)))
}

// Delete this object from C++ memory.
func (this *QStringEncoder) Delete() {
	C.QStringEncoder_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStringEncoder) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStringEncoder_delete((*C.QStringEncoder)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStringDecoder struct {
	h  *C.QStringDecoder
	gc *[1]unsafe.Pointer
	*QStringConverter
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStringDecoder) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QStringConverter.miqtSetGC(gc)
}

func (this *QStringDecoder) cPointer() *C.QStringDecoder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStringDecoder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStringDecoder constructs the type using only CGO pointers.
func newQStringDecoder(h *C.QStringDecoder) *QStringDecoder {
	if h == nil {
		return nil
	}
	var outptr_QStringConverter *C.QStringConverter = nil
	C.QStringDecoder_virtbase(h, &outptr_QStringConverter)

	return &QStringDecoder{h: h,
		QStringConverter: newQStringConverter(outptr_QStringConverter)}
}

// UnsafeNewQStringDecoder constructs the type using only unsafe pointers.
func UnsafeNewQStringDecoder(h unsafe.Pointer) *QStringDecoder {
	return newQStringDecoder((*C.QStringDecoder)(h))
}

// NewQStringDecoder constructs a new QStringDecoder object.
func NewQStringDecoder(encoding QStringConverter__Encoding) *QStringDecoder {

	return newQStringDecoder(C.QStringDecoder_new((C.int)(encoding)))
}

// NewQStringDecoder2 constructs a new QStringDecoder object.
func NewQStringDecoder2() *QStringDecoder {

	return newQStringDecoder(C.QStringDecoder_new2())
}

// NewQStringDecoder3 constructs a new QStringDecoder object.
func NewQStringDecoder3(name string) *QStringDecoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))

	return newQStringDecoder(C.QStringDecoder_new3(name_Cstring))
}

// NewQStringDecoder4 constructs a new QStringDecoder object.
func NewQStringDecoder4(encoding QStringConverter__Encoding, flags QStringConverterBase__Flag) *QStringDecoder {

	return newQStringDecoder(C.QStringDecoder_new4((C.int)(encoding), (C.int)(flags)))
}

// NewQStringDecoder5 constructs a new QStringDecoder object.
func NewQStringDecoder5(name string, f QStringConverterBase__Flag) *QStringDecoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))

	return newQStringDecoder(C.QStringDecoder_new5(name_Cstring, (C.int)(f)))
}

func (this *QStringDecoder) RequiredSpace(inputLength int64) int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QStringDecoder_requiredSpace(this.h, (C.ptrdiff_t)(inputLength)))
}

func (this *QStringDecoder) AppendToBuffer(out *QChar, ba QByteArrayView) *QChar {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(out)
	defer runtime.KeepAlive(ba)
	return newQChar(C.QStringDecoder_appendToBuffer(this.h, out.cPointer(), ba.cPointer()))
}

func QStringDecoder_DecoderForHtml(data QByteArrayView) *QStringDecoder {
	defer runtime.KeepAlive(data)
	_goptr := newQStringDecoder(C.QStringDecoder_decoderForHtml(data.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QStringDecoder) Delete() {
	C.QStringDecoder_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStringDecoder) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStringDecoder_delete((*C.QStringDecoder)(gc[0]))
	})
	this.miqtSetGC(gc)
}
