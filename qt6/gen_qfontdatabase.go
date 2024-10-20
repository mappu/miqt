package qt6

/*

#include "gen_qfontdatabase.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFontDatabase__WritingSystem int

const (
	QFontDatabase__Any                 QFontDatabase__WritingSystem = 0
	QFontDatabase__Latin               QFontDatabase__WritingSystem = 1
	QFontDatabase__Greek               QFontDatabase__WritingSystem = 2
	QFontDatabase__Cyrillic            QFontDatabase__WritingSystem = 3
	QFontDatabase__Armenian            QFontDatabase__WritingSystem = 4
	QFontDatabase__Hebrew              QFontDatabase__WritingSystem = 5
	QFontDatabase__Arabic              QFontDatabase__WritingSystem = 6
	QFontDatabase__Syriac              QFontDatabase__WritingSystem = 7
	QFontDatabase__Thaana              QFontDatabase__WritingSystem = 8
	QFontDatabase__Devanagari          QFontDatabase__WritingSystem = 9
	QFontDatabase__Bengali             QFontDatabase__WritingSystem = 10
	QFontDatabase__Gurmukhi            QFontDatabase__WritingSystem = 11
	QFontDatabase__Gujarati            QFontDatabase__WritingSystem = 12
	QFontDatabase__Oriya               QFontDatabase__WritingSystem = 13
	QFontDatabase__Tamil               QFontDatabase__WritingSystem = 14
	QFontDatabase__Telugu              QFontDatabase__WritingSystem = 15
	QFontDatabase__Kannada             QFontDatabase__WritingSystem = 16
	QFontDatabase__Malayalam           QFontDatabase__WritingSystem = 17
	QFontDatabase__Sinhala             QFontDatabase__WritingSystem = 18
	QFontDatabase__Thai                QFontDatabase__WritingSystem = 19
	QFontDatabase__Lao                 QFontDatabase__WritingSystem = 20
	QFontDatabase__Tibetan             QFontDatabase__WritingSystem = 21
	QFontDatabase__Myanmar             QFontDatabase__WritingSystem = 22
	QFontDatabase__Georgian            QFontDatabase__WritingSystem = 23
	QFontDatabase__Khmer               QFontDatabase__WritingSystem = 24
	QFontDatabase__SimplifiedChinese   QFontDatabase__WritingSystem = 25
	QFontDatabase__TraditionalChinese  QFontDatabase__WritingSystem = 26
	QFontDatabase__Japanese            QFontDatabase__WritingSystem = 27
	QFontDatabase__Korean              QFontDatabase__WritingSystem = 28
	QFontDatabase__Vietnamese          QFontDatabase__WritingSystem = 29
	QFontDatabase__Symbol              QFontDatabase__WritingSystem = 30
	QFontDatabase__Other               QFontDatabase__WritingSystem = 30
	QFontDatabase__Ogham               QFontDatabase__WritingSystem = 31
	QFontDatabase__Runic               QFontDatabase__WritingSystem = 32
	QFontDatabase__Nko                 QFontDatabase__WritingSystem = 33
	QFontDatabase__WritingSystemsCount QFontDatabase__WritingSystem = 34
)

type QFontDatabase__SystemFont int

const (
	QFontDatabase__GeneralFont          QFontDatabase__SystemFont = 0
	QFontDatabase__FixedFont            QFontDatabase__SystemFont = 1
	QFontDatabase__TitleFont            QFontDatabase__SystemFont = 2
	QFontDatabase__SmallestReadableFont QFontDatabase__SystemFont = 3
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

func (this *QFontDatabase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQFontDatabase(h *C.QFontDatabase) *QFontDatabase {
	if h == nil {
		return nil
	}
	return &QFontDatabase{h: h}
}

func UnsafeNewQFontDatabase(h unsafe.Pointer) *QFontDatabase {
	return newQFontDatabase((*C.QFontDatabase)(h))
}

// NewQFontDatabase constructs a new QFontDatabase object.
func NewQFontDatabase() *QFontDatabase {
	ret := C.QFontDatabase_new()
	return newQFontDatabase(ret)
}

func QFontDatabase_StandardSizes() []int {
	var _ma *C.struct_miqt_array = C.QFontDatabase_StandardSizes()
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFontDatabase_WritingSystems() []QFontDatabase__WritingSystem {
	var _ma *C.struct_miqt_array = C.QFontDatabase_WritingSystems()
	_ret := make([]QFontDatabase__WritingSystem, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QFontDatabase__WritingSystem)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFontDatabase_WritingSystemsWithFamily(family string) []QFontDatabase__WritingSystem {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	var _ma *C.struct_miqt_array = C.QFontDatabase_WritingSystemsWithFamily(family_ms)
	_ret := make([]QFontDatabase__WritingSystem, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QFontDatabase__WritingSystem)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFontDatabase_Families() []string {
	var _ma *C.struct_miqt_array = C.QFontDatabase_Families()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFontDatabase_Styles(family string) []string {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	var _ma *C.struct_miqt_array = C.QFontDatabase_Styles(family_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFontDatabase_PointSizes(family string) []int {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	var _ma *C.struct_miqt_array = C.QFontDatabase_PointSizes(family_ms)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFontDatabase_SmoothSizes(family string, style string) []int {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	style_ms := C.struct_miqt_string{}
	style_ms.data = C.CString(style)
	style_ms.len = C.size_t(len(style))
	defer C.free(unsafe.Pointer(style_ms.data))
	var _ma *C.struct_miqt_array = C.QFontDatabase_SmoothSizes(family_ms, style_ms)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFontDatabase_StyleString(font *QFont) string {
	var _ms C.struct_miqt_string = C.QFontDatabase_StyleString(font.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontDatabase_StyleStringWithFontInfo(fontInfo *QFontInfo) string {
	var _ms C.struct_miqt_string = C.QFontDatabase_StyleStringWithFontInfo(fontInfo.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontDatabase_Font(family string, style string, pointSize int) *QFont {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	style_ms := C.struct_miqt_string{}
	style_ms.data = C.CString(style)
	style_ms.len = C.size_t(len(style))
	defer C.free(unsafe.Pointer(style_ms.data))
	_ret := C.QFontDatabase_Font(family_ms, style_ms, (C.int)(pointSize))
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFontDatabase_IsBitmapScalable(family string) bool {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	return (bool)(C.QFontDatabase_IsBitmapScalable(family_ms))
}

func QFontDatabase_IsSmoothlyScalable(family string) bool {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	return (bool)(C.QFontDatabase_IsSmoothlyScalable(family_ms))
}

func QFontDatabase_IsScalable(family string) bool {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	return (bool)(C.QFontDatabase_IsScalable(family_ms))
}

func QFontDatabase_IsFixedPitch(family string) bool {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	return (bool)(C.QFontDatabase_IsFixedPitch(family_ms))
}

func QFontDatabase_Italic(family string, style string) bool {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	style_ms := C.struct_miqt_string{}
	style_ms.data = C.CString(style)
	style_ms.len = C.size_t(len(style))
	defer C.free(unsafe.Pointer(style_ms.data))
	return (bool)(C.QFontDatabase_Italic(family_ms, style_ms))
}

func QFontDatabase_Bold(family string, style string) bool {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	style_ms := C.struct_miqt_string{}
	style_ms.data = C.CString(style)
	style_ms.len = C.size_t(len(style))
	defer C.free(unsafe.Pointer(style_ms.data))
	return (bool)(C.QFontDatabase_Bold(family_ms, style_ms))
}

func QFontDatabase_Weight(family string, style string) int {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	style_ms := C.struct_miqt_string{}
	style_ms.data = C.CString(style)
	style_ms.len = C.size_t(len(style))
	defer C.free(unsafe.Pointer(style_ms.data))
	return (int)(C.QFontDatabase_Weight(family_ms, style_ms))
}

func QFontDatabase_HasFamily(family string) bool {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	return (bool)(C.QFontDatabase_HasFamily(family_ms))
}

func QFontDatabase_IsPrivateFamily(family string) bool {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	return (bool)(C.QFontDatabase_IsPrivateFamily(family_ms))
}

func QFontDatabase_WritingSystemName(writingSystem QFontDatabase__WritingSystem) string {
	var _ms C.struct_miqt_string = C.QFontDatabase_WritingSystemName((C.int)(writingSystem))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontDatabase_WritingSystemSample(writingSystem QFontDatabase__WritingSystem) string {
	var _ms C.struct_miqt_string = C.QFontDatabase_WritingSystemSample((C.int)(writingSystem))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontDatabase_AddApplicationFont(fileName string) int {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (int)(C.QFontDatabase_AddApplicationFont(fileName_ms))
}

func QFontDatabase_AddApplicationFontFromData(fontData []byte) int {
	fontData_alias := C.struct_miqt_string{}
	fontData_alias.data = (*C.char)(unsafe.Pointer(&fontData[0]))
	fontData_alias.len = C.size_t(len(fontData))
	return (int)(C.QFontDatabase_AddApplicationFontFromData(fontData_alias))
}

func QFontDatabase_ApplicationFontFamilies(id int) []string {
	var _ma *C.struct_miqt_array = C.QFontDatabase_ApplicationFontFamilies((C.int)(id))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFontDatabase_RemoveApplicationFont(id int) bool {
	return (bool)(C.QFontDatabase_RemoveApplicationFont((C.int)(id)))
}

func QFontDatabase_RemoveAllApplicationFonts() bool {
	return (bool)(C.QFontDatabase_RemoveAllApplicationFonts())
}

func QFontDatabase_SystemFont(typeVal QFontDatabase__SystemFont) *QFont {
	_ret := C.QFontDatabase_SystemFont((C.int)(typeVal))
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFontDatabase_Families1(writingSystem QFontDatabase__WritingSystem) []string {
	var _ma *C.struct_miqt_array = C.QFontDatabase_Families1((C.int)(writingSystem))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFontDatabase_PointSizes2(family string, style string) []int {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	style_ms := C.struct_miqt_string{}
	style_ms.data = C.CString(style)
	style_ms.len = C.size_t(len(style))
	defer C.free(unsafe.Pointer(style_ms.data))
	var _ma *C.struct_miqt_array = C.QFontDatabase_PointSizes2(family_ms, style_ms)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFontDatabase_IsBitmapScalable2(family string, style string) bool {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	style_ms := C.struct_miqt_string{}
	style_ms.data = C.CString(style)
	style_ms.len = C.size_t(len(style))
	defer C.free(unsafe.Pointer(style_ms.data))
	return (bool)(C.QFontDatabase_IsBitmapScalable2(family_ms, style_ms))
}

func QFontDatabase_IsSmoothlyScalable2(family string, style string) bool {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	style_ms := C.struct_miqt_string{}
	style_ms.data = C.CString(style)
	style_ms.len = C.size_t(len(style))
	defer C.free(unsafe.Pointer(style_ms.data))
	return (bool)(C.QFontDatabase_IsSmoothlyScalable2(family_ms, style_ms))
}

func QFontDatabase_IsScalable2(family string, style string) bool {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	style_ms := C.struct_miqt_string{}
	style_ms.data = C.CString(style)
	style_ms.len = C.size_t(len(style))
	defer C.free(unsafe.Pointer(style_ms.data))
	return (bool)(C.QFontDatabase_IsScalable2(family_ms, style_ms))
}

func QFontDatabase_IsFixedPitch2(family string, style string) bool {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	style_ms := C.struct_miqt_string{}
	style_ms.data = C.CString(style)
	style_ms.len = C.size_t(len(style))
	defer C.free(unsafe.Pointer(style_ms.data))
	return (bool)(C.QFontDatabase_IsFixedPitch2(family_ms, style_ms))
}

// Delete this object from C++ memory.
func (this *QFontDatabase) Delete() {
	C.QFontDatabase_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFontDatabase) GoGC() {
	runtime.SetFinalizer(this, func(this *QFontDatabase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}