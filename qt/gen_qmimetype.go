package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qmimetype.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QMimeType struct {
	h *C.QMimeType
}

func (this *QMimeType) cPointer() *C.QMimeType {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMimeType(h *C.QMimeType) *QMimeType {
	if h == nil {
		return nil
	}
	return &QMimeType{h: h}
}

func newQMimeType_U(h unsafe.Pointer) *QMimeType {
	return newQMimeType((*C.QMimeType)(h))
}

// NewQMimeType constructs a new QMimeType object.
func NewQMimeType() *QMimeType {
	ret := C.QMimeType_new()
	return newQMimeType(ret)
}

// NewQMimeType2 constructs a new QMimeType object.
func NewQMimeType2(other *QMimeType) *QMimeType {
	ret := C.QMimeType_new2(other.cPointer())
	return newQMimeType(ret)
}

func (this *QMimeType) OperatorAssign(other *QMimeType) {
	C.QMimeType_OperatorAssign(this.h, other.cPointer())
}

func (this *QMimeType) Swap(other *QMimeType) {
	C.QMimeType_Swap(this.h, other.cPointer())
}

func (this *QMimeType) OperatorEqual(other *QMimeType) bool {
	ret := C.QMimeType_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QMimeType) OperatorNotEqual(other *QMimeType) bool {
	ret := C.QMimeType_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QMimeType) IsValid() bool {
	ret := C.QMimeType_IsValid(this.h)
	return (bool)(ret)
}

func (this *QMimeType) IsDefault() bool {
	ret := C.QMimeType_IsDefault(this.h)
	return (bool)(ret)
}

func (this *QMimeType) Name() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMimeType_Name(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeType) Comment() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMimeType_Comment(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeType) GenericIconName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMimeType_GenericIconName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeType) IconName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMimeType_IconName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeType) GlobPatterns() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QMimeType_GlobPatterns(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeType) ParentMimeTypes() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QMimeType_ParentMimeTypes(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeType) AllAncestors() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QMimeType_AllAncestors(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeType) Aliases() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QMimeType_Aliases(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeType) Suffixes() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QMimeType_Suffixes(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeType) PreferredSuffix() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMimeType_PreferredSuffix(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeType) Inherits(mimeTypeName string) bool {
	mimeTypeName_Cstring := C.CString(mimeTypeName)
	defer C.free(unsafe.Pointer(mimeTypeName_Cstring))
	ret := C.QMimeType_Inherits(this.h, mimeTypeName_Cstring, C.ulong(len(mimeTypeName)))
	return (bool)(ret)
}

func (this *QMimeType) FilterString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMimeType_FilterString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeType) Delete() {
	C.QMimeType_Delete(this.h)
}
