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
func newQStringEncoder(h *C.QStringEncoder, h_QStringConverter *C.QStringConverter, h_QStringConverterBase *C.QStringConverterBase) *QStringEncoder {
	if h == nil {
		return nil
	}
	return &QStringEncoder{h: h,
		QStringConverter: newQStringConverter(h_QStringConverter, h_QStringConverterBase)}
}

// UnsafeNewQStringEncoder constructs the type using only unsafe pointers.
func UnsafeNewQStringEncoder(h unsafe.Pointer, h_QStringConverter unsafe.Pointer, h_QStringConverterBase unsafe.Pointer) *QStringEncoder {
	if h == nil {
		return nil
	}

	return &QStringEncoder{h: (*C.QStringEncoder)(h),
		QStringConverter: UnsafeNewQStringConverter(h_QStringConverter, h_QStringConverterBase)}
}

// NewQStringEncoder constructs a new QStringEncoder object.
func NewQStringEncoder() *QStringEncoder {
	var outptr_QStringEncoder *C.QStringEncoder = nil
	var outptr_QStringConverter *C.QStringConverter = nil
	var outptr_QStringConverterBase *C.QStringConverterBase = nil

	C.QStringEncoder_new(&outptr_QStringEncoder, &outptr_QStringConverter, &outptr_QStringConverterBase)
	ret := newQStringEncoder(outptr_QStringEncoder, outptr_QStringConverter, outptr_QStringConverterBase)
	ret.isSubclass = true
	return ret
}

// NewQStringEncoder2 constructs a new QStringEncoder object.
func NewQStringEncoder2(encoding QStringConverter__Encoding) *QStringEncoder {
	var outptr_QStringEncoder *C.QStringEncoder = nil
	var outptr_QStringConverter *C.QStringConverter = nil
	var outptr_QStringConverterBase *C.QStringConverterBase = nil

	C.QStringEncoder_new2((C.int)(encoding), &outptr_QStringEncoder, &outptr_QStringConverter, &outptr_QStringConverterBase)
	ret := newQStringEncoder(outptr_QStringEncoder, outptr_QStringConverter, outptr_QStringConverterBase)
	ret.isSubclass = true
	return ret
}

// NewQStringEncoder3 constructs a new QStringEncoder object.
func NewQStringEncoder3(name string) *QStringEncoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	var outptr_QStringEncoder *C.QStringEncoder = nil
	var outptr_QStringConverter *C.QStringConverter = nil
	var outptr_QStringConverterBase *C.QStringConverterBase = nil

	C.QStringEncoder_new3(name_Cstring, &outptr_QStringEncoder, &outptr_QStringConverter, &outptr_QStringConverterBase)
	ret := newQStringEncoder(outptr_QStringEncoder, outptr_QStringConverter, outptr_QStringConverterBase)
	ret.isSubclass = true
	return ret
}

// NewQStringEncoder4 constructs a new QStringEncoder object.
func NewQStringEncoder4(encoding QStringConverter__Encoding, flags QStringConverterBase__Flag) *QStringEncoder {
	var outptr_QStringEncoder *C.QStringEncoder = nil
	var outptr_QStringConverter *C.QStringConverter = nil
	var outptr_QStringConverterBase *C.QStringConverterBase = nil

	C.QStringEncoder_new4((C.int)(encoding), (C.int)(flags), &outptr_QStringEncoder, &outptr_QStringConverter, &outptr_QStringConverterBase)
	ret := newQStringEncoder(outptr_QStringEncoder, outptr_QStringConverter, outptr_QStringConverterBase)
	ret.isSubclass = true
	return ret
}

// NewQStringEncoder5 constructs a new QStringEncoder object.
func NewQStringEncoder5(name string, flags QStringConverterBase__Flag) *QStringEncoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	var outptr_QStringEncoder *C.QStringEncoder = nil
	var outptr_QStringConverter *C.QStringConverter = nil
	var outptr_QStringConverterBase *C.QStringConverterBase = nil

	C.QStringEncoder_new5(name_Cstring, (C.int)(flags), &outptr_QStringEncoder, &outptr_QStringConverter, &outptr_QStringConverterBase)
	ret := newQStringEncoder(outptr_QStringEncoder, outptr_QStringConverter, outptr_QStringConverterBase)
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
func newQStringDecoder(h *C.QStringDecoder, h_QStringConverter *C.QStringConverter, h_QStringConverterBase *C.QStringConverterBase) *QStringDecoder {
	if h == nil {
		return nil
	}
	return &QStringDecoder{h: h,
		QStringConverter: newQStringConverter(h_QStringConverter, h_QStringConverterBase)}
}

// UnsafeNewQStringDecoder constructs the type using only unsafe pointers.
func UnsafeNewQStringDecoder(h unsafe.Pointer, h_QStringConverter unsafe.Pointer, h_QStringConverterBase unsafe.Pointer) *QStringDecoder {
	if h == nil {
		return nil
	}

	return &QStringDecoder{h: (*C.QStringDecoder)(h),
		QStringConverter: UnsafeNewQStringConverter(h_QStringConverter, h_QStringConverterBase)}
}

// NewQStringDecoder constructs a new QStringDecoder object.
func NewQStringDecoder(encoding QStringConverter__Encoding) *QStringDecoder {
	var outptr_QStringDecoder *C.QStringDecoder = nil
	var outptr_QStringConverter *C.QStringConverter = nil
	var outptr_QStringConverterBase *C.QStringConverterBase = nil

	C.QStringDecoder_new((C.int)(encoding), &outptr_QStringDecoder, &outptr_QStringConverter, &outptr_QStringConverterBase)
	ret := newQStringDecoder(outptr_QStringDecoder, outptr_QStringConverter, outptr_QStringConverterBase)
	ret.isSubclass = true
	return ret
}

// NewQStringDecoder2 constructs a new QStringDecoder object.
func NewQStringDecoder2() *QStringDecoder {
	var outptr_QStringDecoder *C.QStringDecoder = nil
	var outptr_QStringConverter *C.QStringConverter = nil
	var outptr_QStringConverterBase *C.QStringConverterBase = nil

	C.QStringDecoder_new2(&outptr_QStringDecoder, &outptr_QStringConverter, &outptr_QStringConverterBase)
	ret := newQStringDecoder(outptr_QStringDecoder, outptr_QStringConverter, outptr_QStringConverterBase)
	ret.isSubclass = true
	return ret
}

// NewQStringDecoder3 constructs a new QStringDecoder object.
func NewQStringDecoder3(name string) *QStringDecoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	var outptr_QStringDecoder *C.QStringDecoder = nil
	var outptr_QStringConverter *C.QStringConverter = nil
	var outptr_QStringConverterBase *C.QStringConverterBase = nil

	C.QStringDecoder_new3(name_Cstring, &outptr_QStringDecoder, &outptr_QStringConverter, &outptr_QStringConverterBase)
	ret := newQStringDecoder(outptr_QStringDecoder, outptr_QStringConverter, outptr_QStringConverterBase)
	ret.isSubclass = true
	return ret
}

// NewQStringDecoder4 constructs a new QStringDecoder object.
func NewQStringDecoder4(encoding QStringConverter__Encoding, flags QStringConverterBase__Flag) *QStringDecoder {
	var outptr_QStringDecoder *C.QStringDecoder = nil
	var outptr_QStringConverter *C.QStringConverter = nil
	var outptr_QStringConverterBase *C.QStringConverterBase = nil

	C.QStringDecoder_new4((C.int)(encoding), (C.int)(flags), &outptr_QStringDecoder, &outptr_QStringConverter, &outptr_QStringConverterBase)
	ret := newQStringDecoder(outptr_QStringDecoder, outptr_QStringConverter, outptr_QStringConverterBase)
	ret.isSubclass = true
	return ret
}

// NewQStringDecoder5 constructs a new QStringDecoder object.
func NewQStringDecoder5(name string, f QStringConverterBase__Flag) *QStringDecoder {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	var outptr_QStringDecoder *C.QStringDecoder = nil
	var outptr_QStringConverter *C.QStringConverter = nil
	var outptr_QStringConverterBase *C.QStringConverterBase = nil

	C.QStringDecoder_new5(name_Cstring, (C.int)(f), &outptr_QStringDecoder, &outptr_QStringConverter, &outptr_QStringConverterBase)
	ret := newQStringDecoder(outptr_QStringDecoder, outptr_QStringConverter, outptr_QStringConverterBase)
	ret.isSubclass = true
	return ret
}

func (this *QStringDecoder) RequiredSpace(inputLength int64) int64 {
	return (int64)(C.QStringDecoder_RequiredSpace(this.h, (C.ptrdiff_t)(inputLength)))
}

func (this *QStringDecoder) AppendToBuffer(out *QChar, ba QByteArrayView) *QChar {
	return UnsafeNewQChar(unsafe.Pointer(C.QStringDecoder_AppendToBuffer(this.h, out.cPointer(), ba.cPointer())))
}

func QStringDecoder_DecoderForHtml(data QByteArrayView) *QStringDecoder {
	_ret := C.QStringDecoder_DecoderForHtml(data.cPointer())
	_goptr := newQStringDecoder(_ret, nil, nil)
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
