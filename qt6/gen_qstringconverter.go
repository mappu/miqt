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
	h *C.QStringEncoder
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

func newQStringEncoder(h *C.QStringEncoder) *QStringEncoder {
	if h == nil {
		return nil
	}
	return &QStringEncoder{h: h, QStringConverter: UnsafeNewQStringConverter(unsafe.Pointer(h))}
}

func UnsafeNewQStringEncoder(h unsafe.Pointer) *QStringEncoder {
	return newQStringEncoder((*C.QStringEncoder)(h))
}

// NewQStringEncoder constructs a new QStringEncoder object.
func NewQStringEncoder() *QStringEncoder {
	ret := C.QStringEncoder_new()
	return newQStringEncoder(ret)
}

// NewQStringEncoder2 constructs a new QStringEncoder object.
func NewQStringEncoder2(encoding QStringConverter__Encoding) *QStringEncoder {
	ret := C.QStringEncoder_new2((C.int)(encoding))
	return newQStringEncoder(ret)
}

// NewQStringEncoder3 constructs a new QStringEncoder object.
func NewQStringEncoder3(name string) *QStringEncoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QStringEncoder_new3(name_Cstring)
	return newQStringEncoder(ret)
}

// NewQStringEncoder4 constructs a new QStringEncoder object.
func NewQStringEncoder4(encoding QStringConverter__Encoding, flags QStringConverterBase__Flag) *QStringEncoder {
	ret := C.QStringEncoder_new4((C.int)(encoding), (C.int)(flags))
	return newQStringEncoder(ret)
}

// NewQStringEncoder5 constructs a new QStringEncoder object.
func NewQStringEncoder5(name string, flags QStringConverterBase__Flag) *QStringEncoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QStringEncoder_new5(name_Cstring, (C.int)(flags))
	return newQStringEncoder(ret)
}

func (this *QStringEncoder) RequiredSpace(inputLength int64) int64 {
	return (int64)(C.QStringEncoder_RequiredSpace(this.h, (C.ptrdiff_t)(inputLength)))
}

// Delete this object from C++ memory.
func (this *QStringEncoder) Delete() {
	C.QStringEncoder_Delete(this.h)
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
	h *C.QStringDecoder
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

func newQStringDecoder(h *C.QStringDecoder) *QStringDecoder {
	if h == nil {
		return nil
	}
	return &QStringDecoder{h: h, QStringConverter: UnsafeNewQStringConverter(unsafe.Pointer(h))}
}

func UnsafeNewQStringDecoder(h unsafe.Pointer) *QStringDecoder {
	return newQStringDecoder((*C.QStringDecoder)(h))
}

// NewQStringDecoder constructs a new QStringDecoder object.
func NewQStringDecoder(encoding QStringConverter__Encoding) *QStringDecoder {
	ret := C.QStringDecoder_new((C.int)(encoding))
	return newQStringDecoder(ret)
}

// NewQStringDecoder2 constructs a new QStringDecoder object.
func NewQStringDecoder2() *QStringDecoder {
	ret := C.QStringDecoder_new2()
	return newQStringDecoder(ret)
}

// NewQStringDecoder3 constructs a new QStringDecoder object.
func NewQStringDecoder3(name string) *QStringDecoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QStringDecoder_new3(name_Cstring)
	return newQStringDecoder(ret)
}

// NewQStringDecoder4 constructs a new QStringDecoder object.
func NewQStringDecoder4(encoding QStringConverter__Encoding, flags QStringConverterBase__Flag) *QStringDecoder {
	ret := C.QStringDecoder_new4((C.int)(encoding), (C.int)(flags))
	return newQStringDecoder(ret)
}

// NewQStringDecoder5 constructs a new QStringDecoder object.
func NewQStringDecoder5(name string, f QStringConverterBase__Flag) *QStringDecoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QStringDecoder_new5(name_Cstring, (C.int)(f))
	return newQStringDecoder(ret)
}

func (this *QStringDecoder) RequiredSpace(inputLength int64) int64 {
	return (int64)(C.QStringDecoder_RequiredSpace(this.h, (C.ptrdiff_t)(inputLength)))
}

func (this *QStringDecoder) AppendToBuffer(out *QChar, ba QByteArrayView) *QChar {
	return UnsafeNewQChar(unsafe.Pointer(C.QStringDecoder_AppendToBuffer(this.h, out.cPointer(), ba.cPointer())))
}

func QStringDecoder_DecoderForHtml(data QByteArrayView) *QStringDecoder {
	_ret := C.QStringDecoder_DecoderForHtml(data.cPointer())
	_goptr := newQStringDecoder(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QStringDecoder) Delete() {
	C.QStringDecoder_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStringDecoder) GoGC() {
	runtime.SetFinalizer(this, func(this *QStringDecoder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
