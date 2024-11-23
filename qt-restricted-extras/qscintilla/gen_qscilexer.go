package qscintilla

/*

#include "gen_qscilexer.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexer struct {
	h          *C.QsciLexer
	isSubclass bool
	*qt.QObject
}

func (this *QsciLexer) cPointer() *C.QsciLexer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexer constructs the type using only CGO pointers.
func newQsciLexer(h *C.QsciLexer, h_QObject *C.QObject) *QsciLexer {
	if h == nil {
		return nil
	}
	return &QsciLexer{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQsciLexer constructs the type using only unsafe pointers.
func UnsafeNewQsciLexer(h unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexer {
	if h == nil {
		return nil
	}

	return &QsciLexer{h: (*C.QsciLexer)(h),
		QObject: qt.UnsafeNewQObject(h_QObject)}
}

// NewQsciLexer constructs a new QsciLexer object.
func NewQsciLexer() *QsciLexer {
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexer_new(&outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexer(outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexer2 constructs a new QsciLexer object.
func NewQsciLexer2(parent *qt.QObject) *QsciLexer {
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexer_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexer(outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexer) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexer_MetaObject(this.h)))
}

func (this *QsciLexer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexer_Metacast(this.h, param1_Cstring))
}

func QsciLexer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexer_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexer_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexer) Language() string {
	_ret := C.QsciLexer_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexer) Lexer() string {
	_ret := C.QsciLexer_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexer) LexerId() int {
	return (int)(C.QsciLexer_LexerId(this.h))
}

func (this *QsciLexer) Apis() *QsciAbstractAPIs {
	return UnsafeNewQsciAbstractAPIs(unsafe.Pointer(C.QsciLexer_Apis(this.h)), nil)
}

func (this *QsciLexer) AutoCompletionFillups() string {
	_ret := C.QsciLexer_AutoCompletionFillups(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexer) AutoCompletionWordSeparators() []string {
	var _ma C.struct_miqt_array = C.QsciLexer_AutoCompletionWordSeparators(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QsciLexer) AutoIndentStyle() int {
	return (int)(C.QsciLexer_AutoIndentStyle(this.h))
}

func (this *QsciLexer) BlockEnd(style *int) string {
	_ret := C.QsciLexer_BlockEnd(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexer) BlockLookback() int {
	return (int)(C.QsciLexer_BlockLookback(this.h))
}

func (this *QsciLexer) BlockStart(style *int) string {
	_ret := C.QsciLexer_BlockStart(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexer) BlockStartKeyword(style *int) string {
	_ret := C.QsciLexer_BlockStartKeyword(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexer) BraceStyle() int {
	return (int)(C.QsciLexer_BraceStyle(this.h))
}

func (this *QsciLexer) CaseSensitive() bool {
	return (bool)(C.QsciLexer_CaseSensitive(this.h))
}

func (this *QsciLexer) Color(style int) *qt.QColor {
	_ret := C.QsciLexer_Color(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) EolFill(style int) bool {
	return (bool)(C.QsciLexer_EolFill(this.h, (C.int)(style)))
}

func (this *QsciLexer) Font(style int) *qt.QFont {
	_ret := C.QsciLexer_Font(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) IndentationGuideView() int {
	return (int)(C.QsciLexer_IndentationGuideView(this.h))
}

func (this *QsciLexer) Keywords(set int) string {
	_ret := C.QsciLexer_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexer) DefaultStyle() int {
	return (int)(C.QsciLexer_DefaultStyle(this.h))
}

func (this *QsciLexer) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexer_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexer) Paper(style int) *qt.QColor {
	_ret := C.QsciLexer_Paper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) DefaultColor() *qt.QColor {
	_ret := C.QsciLexer_DefaultColor(this.h)
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) DefaultColorWithStyle(style int) *qt.QColor {
	_ret := C.QsciLexer_DefaultColorWithStyle(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexer_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexer) DefaultFont() *qt.QFont {
	_ret := C.QsciLexer_DefaultFont(this.h)
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) DefaultFontWithStyle(style int) *qt.QFont {
	_ret := C.QsciLexer_DefaultFontWithStyle(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) DefaultPaper() *qt.QColor {
	_ret := C.QsciLexer_DefaultPaper(this.h)
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) DefaultPaperWithStyle(style int) *qt.QColor {
	_ret := C.QsciLexer_DefaultPaperWithStyle(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) Editor() *QsciScintilla {
	return UnsafeNewQsciScintilla(unsafe.Pointer(C.QsciLexer_Editor(this.h)), nil, nil, nil, nil, nil, nil)
}

func (this *QsciLexer) SetAPIs(apis *QsciAbstractAPIs) {
	C.QsciLexer_SetAPIs(this.h, apis.cPointer())
}

func (this *QsciLexer) SetDefaultColor(c *qt.QColor) {
	C.QsciLexer_SetDefaultColor(this.h, (*C.QColor)(c.UnsafePointer()))
}

func (this *QsciLexer) SetDefaultFont(f *qt.QFont) {
	C.QsciLexer_SetDefaultFont(this.h, (*C.QFont)(f.UnsafePointer()))
}

func (this *QsciLexer) SetDefaultPaper(c *qt.QColor) {
	C.QsciLexer_SetDefaultPaper(this.h, (*C.QColor)(c.UnsafePointer()))
}

func (this *QsciLexer) SetEditor(editor *QsciScintilla) {
	C.QsciLexer_SetEditor(this.h, editor.cPointer())
}

func (this *QsciLexer) ReadSettings(qs *qt.QSettings) bool {
	return (bool)(C.QsciLexer_ReadSettings(this.h, (*C.QSettings)(qs.UnsafePointer())))
}

func (this *QsciLexer) RefreshProperties() {
	C.QsciLexer_RefreshProperties(this.h)
}

func (this *QsciLexer) StyleBitsNeeded() int {
	return (int)(C.QsciLexer_StyleBitsNeeded(this.h))
}

func (this *QsciLexer) WordCharacters() string {
	_ret := C.QsciLexer_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexer) WriteSettings(qs *qt.QSettings) bool {
	return (bool)(C.QsciLexer_WriteSettings(this.h, (*C.QSettings)(qs.UnsafePointer())))
}

func (this *QsciLexer) SetAutoIndentStyle(autoindentstyle int) {
	C.QsciLexer_SetAutoIndentStyle(this.h, (C.int)(autoindentstyle))
}

func (this *QsciLexer) SetColor(c *qt.QColor, style int) {
	C.QsciLexer_SetColor(this.h, (*C.QColor)(c.UnsafePointer()), (C.int)(style))
}

func (this *QsciLexer) SetEolFill(eoffill bool, style int) {
	C.QsciLexer_SetEolFill(this.h, (C.bool)(eoffill), (C.int)(style))
}

func (this *QsciLexer) SetFont(f *qt.QFont, style int) {
	C.QsciLexer_SetFont(this.h, (*C.QFont)(f.UnsafePointer()), (C.int)(style))
}

func (this *QsciLexer) SetPaper(c *qt.QColor, style int) {
	C.QsciLexer_SetPaper(this.h, (*C.QColor)(c.UnsafePointer()), (C.int)(style))
}

func (this *QsciLexer) ColorChanged(c *qt.QColor, style int) {
	C.QsciLexer_ColorChanged(this.h, (*C.QColor)(c.UnsafePointer()), (C.int)(style))
}
func (this *QsciLexer) OnColorChanged(slot func(c *qt.QColor, style int)) {
	C.QsciLexer_connect_ColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_ColorChanged
func miqt_exec_callback_QsciLexer_ColorChanged(cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc(slotval1, slotval2)
}

func (this *QsciLexer) EolFillChanged(eolfilled bool, style int) {
	C.QsciLexer_EolFillChanged(this.h, (C.bool)(eolfilled), (C.int)(style))
}
func (this *QsciLexer) OnEolFillChanged(slot func(eolfilled bool, style int)) {
	C.QsciLexer_connect_EolFillChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_EolFillChanged
func miqt_exec_callback_QsciLexer_EolFillChanged(cb C.intptr_t, eolfilled C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(eolfilled bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eolfilled)

	slotval2 := (int)(style)

	gofunc(slotval1, slotval2)
}

func (this *QsciLexer) FontChanged(f *qt.QFont, style int) {
	C.QsciLexer_FontChanged(this.h, (*C.QFont)(f.UnsafePointer()), (C.int)(style))
}
func (this *QsciLexer) OnFontChanged(slot func(f *qt.QFont, style int)) {
	C.QsciLexer_connect_FontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_FontChanged
func miqt_exec_callback_QsciLexer_FontChanged(cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))
	slotval2 := (int)(style)

	gofunc(slotval1, slotval2)
}

func (this *QsciLexer) PaperChanged(c *qt.QColor, style int) {
	C.QsciLexer_PaperChanged(this.h, (*C.QColor)(c.UnsafePointer()), (C.int)(style))
}
func (this *QsciLexer) OnPaperChanged(slot func(c *qt.QColor, style int)) {
	C.QsciLexer_connect_PaperChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_PaperChanged
func miqt_exec_callback_QsciLexer_PaperChanged(cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc(slotval1, slotval2)
}

func (this *QsciLexer) PropertyChanged(prop string, val string) {
	prop_Cstring := C.CString(prop)
	defer C.free(unsafe.Pointer(prop_Cstring))
	val_Cstring := C.CString(val)
	defer C.free(unsafe.Pointer(val_Cstring))
	C.QsciLexer_PropertyChanged(this.h, prop_Cstring, val_Cstring)
}
func (this *QsciLexer) OnPropertyChanged(slot func(prop string, val string)) {
	C.QsciLexer_connect_PropertyChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_PropertyChanged
func miqt_exec_callback_QsciLexer_PropertyChanged(cb C.intptr_t, prop *C.const_char, val *C.const_char) {
	gofunc, ok := cgo.Handle(cb).Value().(func(prop string, val string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	prop_ret := prop
	slotval1 := C.GoString(prop_ret)

	val_ret := val
	slotval2 := C.GoString(val_ret)

	gofunc(slotval1, slotval2)
}

func QsciLexer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexer_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexer_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexer_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexer_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexer) ReadSettings2(qs *qt.QSettings, prefix string) bool {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	return (bool)(C.QsciLexer_ReadSettings2(this.h, (*C.QSettings)(qs.UnsafePointer()), prefix_Cstring))
}

func (this *QsciLexer) WriteSettings2(qs *qt.QSettings, prefix string) bool {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	return (bool)(C.QsciLexer_WriteSettings2(this.h, (*C.QSettings)(qs.UnsafePointer()), prefix_Cstring))
}
func (this *QsciLexer) OnLanguage(slot func() string) {
	C.QsciLexer_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_Language
func miqt_exec_callback_QsciLexer_Language(self *C.QsciLexer, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexer) callVirtualBase_Lexer() string {

	_ret := C.QsciLexer_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexer) OnLexer(slot func(super func() string) string) {
	C.QsciLexer_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_Lexer
func miqt_exec_callback_QsciLexer_Lexer(self *C.QsciLexer, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexer) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexer_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexer) OnLexerId(slot func(super func() int) int) {
	C.QsciLexer_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_LexerId
func miqt_exec_callback_QsciLexer_LexerId(self *C.QsciLexer, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexer) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexer_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexer) OnAutoCompletionFillups(slot func(super func() string) string) {
	C.QsciLexer_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_AutoCompletionFillups
func miqt_exec_callback_QsciLexer_AutoCompletionFillups(self *C.QsciLexer, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexer) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexer_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret

}
func (this *QsciLexer) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	C.QsciLexer_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexer_AutoCompletionWordSeparators(self *C.QsciLexer, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_AutoCompletionWordSeparators)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		defer C.free(unsafe.Pointer(virtualReturn_i_ms.data))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QsciLexer) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexer_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexer) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexer_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_BlockEnd
func miqt_exec_callback_QsciLexer_BlockEnd(self *C.QsciLexer, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexer) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexer_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexer) OnBlockLookback(slot func(super func() int) int) {
	C.QsciLexer_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_BlockLookback
func miqt_exec_callback_QsciLexer_BlockLookback(self *C.QsciLexer, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexer) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexer_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexer) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexer_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_BlockStart
func miqt_exec_callback_QsciLexer_BlockStart(self *C.QsciLexer, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexer) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexer_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexer) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexer_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_BlockStartKeyword
func miqt_exec_callback_QsciLexer_BlockStartKeyword(self *C.QsciLexer, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexer) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexer_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexer) OnBraceStyle(slot func(super func() int) int) {
	C.QsciLexer_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_BraceStyle
func miqt_exec_callback_QsciLexer_BraceStyle(self *C.QsciLexer, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexer) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexer_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexer) OnCaseSensitive(slot func(super func() bool) bool) {
	C.QsciLexer_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_CaseSensitive
func miqt_exec_callback_QsciLexer_CaseSensitive(self *C.QsciLexer, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexer) callVirtualBase_Color(style int) *qt.QColor {

	_ret := C.QsciLexer_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexer) OnColor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexer_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_Color
func miqt_exec_callback_QsciLexer_Color(self *C.QsciLexer, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexer) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexer_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexer) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexer_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_EolFill
func miqt_exec_callback_QsciLexer_EolFill(self *C.QsciLexer, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexer) callVirtualBase_Font(style int) *qt.QFont {

	_ret := C.QsciLexer_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexer) OnFont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	C.QsciLexer_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_Font
func miqt_exec_callback_QsciLexer_Font(self *C.QsciLexer, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexer) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexer_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexer) OnIndentationGuideView(slot func(super func() int) int) {
	C.QsciLexer_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_IndentationGuideView
func miqt_exec_callback_QsciLexer_IndentationGuideView(self *C.QsciLexer, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexer) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexer_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexer) OnKeywords(slot func(super func(set int) string, set int) string) {
	C.QsciLexer_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_Keywords
func miqt_exec_callback_QsciLexer_Keywords(self *C.QsciLexer, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexer) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexer_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexer) OnDefaultStyle(slot func(super func() int) int) {
	C.QsciLexer_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_DefaultStyle
func miqt_exec_callback_QsciLexer_DefaultStyle(self *C.QsciLexer, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexer) OnDescription(slot func(style int) string) {
	C.QsciLexer_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_Description
func miqt_exec_callback_QsciLexer_Description(self *C.QsciLexer, cb C.intptr_t, style C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(style int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc(slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QsciLexer) callVirtualBase_Paper(style int) *qt.QColor {

	_ret := C.QsciLexer_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexer) OnPaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexer_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_Paper
func miqt_exec_callback_QsciLexer_Paper(self *C.QsciLexer, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexer) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexer_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexer) OnDefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexer_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_DefaultColorWithStyle
func miqt_exec_callback_QsciLexer_DefaultColorWithStyle(self *C.QsciLexer, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexer) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexer_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexer) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexer_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_DefaultEolFill
func miqt_exec_callback_QsciLexer_DefaultEolFill(self *C.QsciLexer, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexer) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_ret := C.QsciLexer_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexer) OnDefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	C.QsciLexer_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_DefaultFontWithStyle
func miqt_exec_callback_QsciLexer_DefaultFontWithStyle(self *C.QsciLexer, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexer) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexer_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexer) OnDefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexer_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexer_DefaultPaperWithStyle(self *C.QsciLexer, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexer) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexer_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexer) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	C.QsciLexer_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_SetEditor
func miqt_exec_callback_QsciLexer_SetEditor(self *C.QsciLexer, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQsciScintilla(unsafe.Pointer(editor), nil, nil, nil, nil, nil, nil)

	gofunc((&QsciLexer{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexer) callVirtualBase_RefreshProperties() {

	C.QsciLexer_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexer) OnRefreshProperties(slot func(super func())) {
	C.QsciLexer_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_RefreshProperties
func miqt_exec_callback_QsciLexer_RefreshProperties(self *C.QsciLexer, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexer{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexer) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexer_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexer) OnStyleBitsNeeded(slot func(super func() int) int) {
	C.QsciLexer_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_StyleBitsNeeded
func miqt_exec_callback_QsciLexer_StyleBitsNeeded(self *C.QsciLexer, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexer) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexer_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexer) OnWordCharacters(slot func(super func() string) string) {
	C.QsciLexer_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_WordCharacters
func miqt_exec_callback_QsciLexer_WordCharacters(self *C.QsciLexer, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexer) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexer_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexer) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	C.QsciLexer_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_SetAutoIndentStyle
func miqt_exec_callback_QsciLexer_SetAutoIndentStyle(self *C.QsciLexer, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexer{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexer) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexer_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexer) OnSetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	C.QsciLexer_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_SetColor
func miqt_exec_callback_QsciLexer_SetColor(self *C.QsciLexer, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexer{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexer) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexer_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexer) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	C.QsciLexer_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_SetEolFill
func miqt_exec_callback_QsciLexer_SetEolFill(self *C.QsciLexer, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexer{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexer) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexer_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexer) OnSetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	C.QsciLexer_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_SetFont
func miqt_exec_callback_QsciLexer_SetFont(self *C.QsciLexer, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))
	slotval2 := (int)(style)

	gofunc((&QsciLexer{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexer) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexer_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexer) OnSetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	C.QsciLexer_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_SetPaper
func miqt_exec_callback_QsciLexer_SetPaper(self *C.QsciLexer, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexer{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexer) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexer_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexer) OnReadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	C.QsciLexer_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_ReadProperties
func miqt_exec_callback_QsciLexer_ReadProperties(self *C.QsciLexer, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQSettings(unsafe.Pointer(qs), nil)
	var prefix_ms C.struct_miqt_string = prefix
	prefix_ret := C.GoStringN(prefix_ms.data, C.int(int64(prefix_ms.len)))
	C.free(unsafe.Pointer(prefix_ms.data))
	slotval2 := prefix_ret

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexer) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexer_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexer) OnWriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	C.QsciLexer_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_WriteProperties
func miqt_exec_callback_QsciLexer_WriteProperties(self *C.QsciLexer, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQSettings(unsafe.Pointer(qs), nil)
	var prefix_ms C.struct_miqt_string = prefix
	prefix_ret := C.GoStringN(prefix_ms.data, C.int(int64(prefix_ms.len)))
	C.free(unsafe.Pointer(prefix_ms.data))
	slotval2 := prefix_ret

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexer) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QsciLexer_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexer) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	C.QsciLexer_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_Event
func miqt_exec_callback_QsciLexer_Event(self *C.QsciLexer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexer) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QsciLexer_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexer) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	C.QsciLexer_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_EventFilter
func miqt_exec_callback_QsciLexer_EventFilter(self *C.QsciLexer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexer) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QsciLexer_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QsciLexer) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	C.QsciLexer_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_TimerEvent
func miqt_exec_callback_QsciLexer_TimerEvent(self *C.QsciLexer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QsciLexer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QsciLexer) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QsciLexer_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QsciLexer) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	C.QsciLexer_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_ChildEvent
func miqt_exec_callback_QsciLexer_ChildEvent(self *C.QsciLexer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QsciLexer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QsciLexer) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QsciLexer_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciLexer) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	C.QsciLexer_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_CustomEvent
func miqt_exec_callback_QsciLexer_CustomEvent(self *C.QsciLexer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciLexer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QsciLexer) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QsciLexer_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexer) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	C.QsciLexer_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_ConnectNotify
func miqt_exec_callback_QsciLexer_ConnectNotify(self *C.QsciLexer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QsciLexer) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QsciLexer_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexer) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	C.QsciLexer_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_DisconnectNotify
func miqt_exec_callback_QsciLexer_DisconnectNotify(self *C.QsciLexer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciLexer) Delete() {
	C.QsciLexer_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexer) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
