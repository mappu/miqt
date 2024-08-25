package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qfontdatabase.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFontDatabase struct {
	h *C.QFontDatabase
}

func (this *QFontDatabase) cPointer() *C.QFontDatabase {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFontDatabase(h *C.QFontDatabase) *QFontDatabase {
	return &QFontDatabase{h: h}
}

func newQFontDatabase_U(h unsafe.Pointer) *QFontDatabase {
	return newQFontDatabase((*C.QFontDatabase)(h))
}

// NewQFontDatabase constructs a new QFontDatabase object.
func NewQFontDatabase() *QFontDatabase {
	ret := C.QFontDatabase_new()
	return newQFontDatabase(ret)
}

func QFontDatabase_StandardSizes() []int {
	var _out *C.int = nil
	var _out_len C.size_t = 0
	C.QFontDatabase_StandardSizes(&_out, &_out_len)
	ret := make([]int, int(_out_len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFontDatabase) Styles(family string) []string {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFontDatabase_Styles(this.h, family_Cstring, C.ulong(len(family)), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFontDatabase) PointSizes(family string) []int {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	var _out *C.int = nil
	var _out_len C.size_t = 0
	C.QFontDatabase_PointSizes(this.h, family_Cstring, C.ulong(len(family)), &_out, &_out_len)
	ret := make([]int, int(_out_len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFontDatabase) SmoothSizes(family string, style string) []int {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	style_Cstring := C.CString(style)
	defer C.free(unsafe.Pointer(style_Cstring))
	var _out *C.int = nil
	var _out_len C.size_t = 0
	C.QFontDatabase_SmoothSizes(this.h, family_Cstring, C.ulong(len(family)), style_Cstring, C.ulong(len(style)), &_out, &_out_len)
	ret := make([]int, int(_out_len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFontDatabase) StyleString(font *QFont) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFontDatabase_StyleString(this.h, font.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFontDatabase) StyleStringWithFontInfo(fontInfo *QFontInfo) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFontDatabase_StyleStringWithFontInfo(this.h, fontInfo.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFontDatabase) Font(family string, style string, pointSize int) *QFont {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	style_Cstring := C.CString(style)
	defer C.free(unsafe.Pointer(style_Cstring))
	ret := C.QFontDatabase_Font(this.h, family_Cstring, C.ulong(len(family)), style_Cstring, C.ulong(len(style)), (C.int)(pointSize))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontDatabase) IsBitmapScalable(family string) bool {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	ret := C.QFontDatabase_IsBitmapScalable(this.h, family_Cstring, C.ulong(len(family)))
	return (bool)(ret)
}

func (this *QFontDatabase) IsSmoothlyScalable(family string) bool {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	ret := C.QFontDatabase_IsSmoothlyScalable(this.h, family_Cstring, C.ulong(len(family)))
	return (bool)(ret)
}

func (this *QFontDatabase) IsScalable(family string) bool {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	ret := C.QFontDatabase_IsScalable(this.h, family_Cstring, C.ulong(len(family)))
	return (bool)(ret)
}

func (this *QFontDatabase) IsFixedPitch(family string) bool {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	ret := C.QFontDatabase_IsFixedPitch(this.h, family_Cstring, C.ulong(len(family)))
	return (bool)(ret)
}

func (this *QFontDatabase) Italic(family string, style string) bool {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	style_Cstring := C.CString(style)
	defer C.free(unsafe.Pointer(style_Cstring))
	ret := C.QFontDatabase_Italic(this.h, family_Cstring, C.ulong(len(family)), style_Cstring, C.ulong(len(style)))
	return (bool)(ret)
}

func (this *QFontDatabase) Bold(family string, style string) bool {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	style_Cstring := C.CString(style)
	defer C.free(unsafe.Pointer(style_Cstring))
	ret := C.QFontDatabase_Bold(this.h, family_Cstring, C.ulong(len(family)), style_Cstring, C.ulong(len(style)))
	return (bool)(ret)
}

func (this *QFontDatabase) Weight(family string, style string) int {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	style_Cstring := C.CString(style)
	defer C.free(unsafe.Pointer(style_Cstring))
	ret := C.QFontDatabase_Weight(this.h, family_Cstring, C.ulong(len(family)), style_Cstring, C.ulong(len(style)))
	return (int)(ret)
}

func (this *QFontDatabase) HasFamily(family string) bool {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	ret := C.QFontDatabase_HasFamily(this.h, family_Cstring, C.ulong(len(family)))
	return (bool)(ret)
}

func (this *QFontDatabase) IsPrivateFamily(family string) bool {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	ret := C.QFontDatabase_IsPrivateFamily(this.h, family_Cstring, C.ulong(len(family)))
	return (bool)(ret)
}

func QFontDatabase_AddApplicationFont(fileName string) int {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QFontDatabase_AddApplicationFont(fileName_Cstring, C.ulong(len(fileName)))
	return (int)(ret)
}

func QFontDatabase_AddApplicationFontFromData(fontData *QByteArray) int {
	ret := C.QFontDatabase_AddApplicationFontFromData(fontData.cPointer())
	return (int)(ret)
}

func QFontDatabase_ApplicationFontFamilies(id int) []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFontDatabase_ApplicationFontFamilies((C.int)(id), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFontDatabase_RemoveApplicationFont(id int) bool {
	ret := C.QFontDatabase_RemoveApplicationFont((C.int)(id))
	return (bool)(ret)
}

func QFontDatabase_RemoveAllApplicationFonts() bool {
	ret := C.QFontDatabase_RemoveAllApplicationFonts()
	return (bool)(ret)
}

func QFontDatabase_SupportsThreadedFontRendering() bool {
	ret := C.QFontDatabase_SupportsThreadedFontRendering()
	return (bool)(ret)
}

func (this *QFontDatabase) PointSizes2(family string, style string) []int {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	style_Cstring := C.CString(style)
	defer C.free(unsafe.Pointer(style_Cstring))
	var _out *C.int = nil
	var _out_len C.size_t = 0
	C.QFontDatabase_PointSizes2(this.h, family_Cstring, C.ulong(len(family)), style_Cstring, C.ulong(len(style)), &_out, &_out_len)
	ret := make([]int, int(_out_len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFontDatabase) IsBitmapScalable2(family string, style string) bool {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	style_Cstring := C.CString(style)
	defer C.free(unsafe.Pointer(style_Cstring))
	ret := C.QFontDatabase_IsBitmapScalable2(this.h, family_Cstring, C.ulong(len(family)), style_Cstring, C.ulong(len(style)))
	return (bool)(ret)
}

func (this *QFontDatabase) IsSmoothlyScalable2(family string, style string) bool {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	style_Cstring := C.CString(style)
	defer C.free(unsafe.Pointer(style_Cstring))
	ret := C.QFontDatabase_IsSmoothlyScalable2(this.h, family_Cstring, C.ulong(len(family)), style_Cstring, C.ulong(len(style)))
	return (bool)(ret)
}

func (this *QFontDatabase) IsScalable2(family string, style string) bool {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	style_Cstring := C.CString(style)
	defer C.free(unsafe.Pointer(style_Cstring))
	ret := C.QFontDatabase_IsScalable2(this.h, family_Cstring, C.ulong(len(family)), style_Cstring, C.ulong(len(style)))
	return (bool)(ret)
}

func (this *QFontDatabase) IsFixedPitch2(family string, style string) bool {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	style_Cstring := C.CString(style)
	defer C.free(unsafe.Pointer(style_Cstring))
	ret := C.QFontDatabase_IsFixedPitch2(this.h, family_Cstring, C.ulong(len(family)), style_Cstring, C.ulong(len(style)))
	return (bool)(ret)
}

func (this *QFontDatabase) Delete() {
	C.QFontDatabase_Delete(this.h)
}
