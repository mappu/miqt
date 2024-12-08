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
	h          *C.QStringEncoder
	isSubclass bool
	*QStringConverter
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

	ret := newQStringEncoder(C.QStringEncoder_new())
	ret.isSubclass = true
	return ret
}

// NewQStringEncoder2 constructs a new QStringEncoder object.
func NewQStringEncoder2(encoding QStringConverter__Encoding) *QStringEncoder {

	ret := newQStringEncoder(C.QStringEncoder_new2((C.int)(encoding)))
	ret.isSubclass = true
	return ret
}

// NewQStringEncoder3 constructs a new QStringEncoder object.
func NewQStringEncoder3(name string) *QStringEncoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))

	ret := newQStringEncoder(C.QStringEncoder_new3(name_Cstring))
	ret.isSubclass = true
	return ret
}

// NewQStringEncoder4 constructs a new QStringEncoder object.
func NewQStringEncoder4(encoding QStringConverter__Encoding, flags QStringConverterBase__Flag) *QStringEncoder {

	ret := newQStringEncoder(C.QStringEncoder_new4((C.int)(encoding), (C.int)(flags)))
	ret.isSubclass = true
	return ret
}

// NewQStringEncoder5 constructs a new QStringEncoder object.
func NewQStringEncoder5(name string, flags QStringConverterBase__Flag) *QStringEncoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))

	ret := newQStringEncoder(C.QStringEncoder_new5(name_Cstring, (C.int)(flags)))
	ret.isSubclass = true
	return ret
}

func (this *QStringEncoder) RequiredSpace(inputLength int64) int64 {
	return (int64)(C.QStringEncoder_RequiredSpace(this.h, (C.ptrdiff_t)(inputLength)))
}

// Delete this object from C++ memory.
func (this *QStringEncoder) Delete() {
	C.QStringEncoder_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStringEncoder) GoGC() {
	runtime.SetFinalizer(this, func(this *QStringEncoder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStringDecoder struct {
	h          *C.QStringDecoder
	isSubclass bool
	*QStringConverter
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

	ret := newQStringDecoder(C.QStringDecoder_new((C.int)(encoding)))
	ret.isSubclass = true
	return ret
}

// NewQStringDecoder2 constructs a new QStringDecoder object.
func NewQStringDecoder2() *QStringDecoder {

	ret := newQStringDecoder(C.QStringDecoder_new2())
	ret.isSubclass = true
	return ret
}

// NewQStringDecoder3 constructs a new QStringDecoder object.
func NewQStringDecoder3(name string) *QStringDecoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))

	ret := newQStringDecoder(C.QStringDecoder_new3(name_Cstring))
	ret.isSubclass = true
	return ret
}

// NewQStringDecoder4 constructs a new QStringDecoder object.
func NewQStringDecoder4(encoding QStringConverter__Encoding, flags QStringConverterBase__Flag) *QStringDecoder {

	ret := newQStringDecoder(C.QStringDecoder_new4((C.int)(encoding), (C.int)(flags)))
	ret.isSubclass = true
	return ret
}

// NewQStringDecoder5 constructs a new QStringDecoder object.
func NewQStringDecoder5(name string, f QStringConverterBase__Flag) *QStringDecoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))

	ret := newQStringDecoder(C.QStringDecoder_new5(name_Cstring, (C.int)(f)))
	ret.isSubclass = true
	return ret
}

func (this *QStringDecoder) RequiredSpace(inputLength int64) int64 {
	return (int64)(C.QStringDecoder_RequiredSpace(this.h, (C.ptrdiff_t)(inputLength)))
}

func (this *QStringDecoder) AppendToBuffer(out *QChar, ba QByteArrayView) *QChar {
	return newQChar(C.QStringDecoder_AppendToBuffer(this.h, out.cPointer(), ba.cPointer()))
}

func QStringDecoder_DecoderForHtml(data QByteArrayView) *QStringDecoder {
	_goptr := newQStringDecoder(C.QStringDecoder_DecoderForHtml(data.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QStringDecoder) Delete() {
	C.QStringDecoder_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStringDecoder) GoGC() {
	runtime.SetFinalizer(this, func(this *QStringDecoder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
