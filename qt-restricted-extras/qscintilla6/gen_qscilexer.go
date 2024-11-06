package qscintilla6

/*

#include "gen_qscilexer.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexer struct {
	h *C.QsciLexer
	*qt6.QObject
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

func newQsciLexer(h *C.QsciLexer) *QsciLexer {
	if h == nil {
		return nil
	}
	return &QsciLexer{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexer(h unsafe.Pointer) *QsciLexer {
	return newQsciLexer((*C.QsciLexer)(h))
}

func (this *QsciLexer) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexer_MetaObject(this.h)))
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
	return UnsafeNewQsciAbstractAPIs(unsafe.Pointer(C.QsciLexer_Apis(this.h)))
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

func (this *QsciLexer) BlockEnd() string {
	_ret := C.QsciLexer_BlockEnd(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexer) BlockLookback() int {
	return (int)(C.QsciLexer_BlockLookback(this.h))
}

func (this *QsciLexer) BlockStart() string {
	_ret := C.QsciLexer_BlockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexer) BlockStartKeyword() string {
	_ret := C.QsciLexer_BlockStartKeyword(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexer) BraceStyle() int {
	return (int)(C.QsciLexer_BraceStyle(this.h))
}

func (this *QsciLexer) CaseSensitive() bool {
	return (bool)(C.QsciLexer_CaseSensitive(this.h))
}

func (this *QsciLexer) Color(style int) *qt6.QColor {
	_ret := C.QsciLexer_Color(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) EolFill(style int) bool {
	return (bool)(C.QsciLexer_EolFill(this.h, (C.int)(style)))
}

func (this *QsciLexer) Font(style int) *qt6.QFont {
	_ret := C.QsciLexer_Font(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
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

func (this *QsciLexer) Paper(style int) *qt6.QColor {
	_ret := C.QsciLexer_Paper(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) DefaultColor() *qt6.QColor {
	_ret := C.QsciLexer_DefaultColor(this.h)
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) DefaultColorWithStyle(style int) *qt6.QColor {
	_ret := C.QsciLexer_DefaultColorWithStyle(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexer_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexer) DefaultFont() *qt6.QFont {
	_ret := C.QsciLexer_DefaultFont(this.h)
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) DefaultFontWithStyle(style int) *qt6.QFont {
	_ret := C.QsciLexer_DefaultFontWithStyle(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) DefaultPaper() *qt6.QColor {
	_ret := C.QsciLexer_DefaultPaper(this.h)
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) DefaultPaperWithStyle(style int) *qt6.QColor {
	_ret := C.QsciLexer_DefaultPaperWithStyle(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexer) Editor() *QsciScintilla {
	return UnsafeNewQsciScintilla(unsafe.Pointer(C.QsciLexer_Editor(this.h)))
}

func (this *QsciLexer) SetAPIs(apis *QsciAbstractAPIs) {
	C.QsciLexer_SetAPIs(this.h, apis.cPointer())
}

func (this *QsciLexer) SetDefaultColor(c *qt6.QColor) {
	C.QsciLexer_SetDefaultColor(this.h, (*C.QColor)(c.UnsafePointer()))
}

func (this *QsciLexer) SetDefaultFont(f *qt6.QFont) {
	C.QsciLexer_SetDefaultFont(this.h, (*C.QFont)(f.UnsafePointer()))
}

func (this *QsciLexer) SetDefaultPaper(c *qt6.QColor) {
	C.QsciLexer_SetDefaultPaper(this.h, (*C.QColor)(c.UnsafePointer()))
}

func (this *QsciLexer) SetEditor(editor *QsciScintilla) {
	C.QsciLexer_SetEditor(this.h, editor.cPointer())
}

func (this *QsciLexer) ReadSettings(qs *qt6.QSettings) bool {
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

func (this *QsciLexer) WriteSettings(qs *qt6.QSettings) bool {
	return (bool)(C.QsciLexer_WriteSettings(this.h, (*C.QSettings)(qs.UnsafePointer())))
}

func (this *QsciLexer) SetAutoIndentStyle(autoindentstyle int) {
	C.QsciLexer_SetAutoIndentStyle(this.h, (C.int)(autoindentstyle))
}

func (this *QsciLexer) SetColor(c *qt6.QColor) {
	C.QsciLexer_SetColor(this.h, (*C.QColor)(c.UnsafePointer()))
}

func (this *QsciLexer) SetEolFill(eoffill bool) {
	C.QsciLexer_SetEolFill(this.h, (C.bool)(eoffill))
}

func (this *QsciLexer) SetFont(f *qt6.QFont) {
	C.QsciLexer_SetFont(this.h, (*C.QFont)(f.UnsafePointer()))
}

func (this *QsciLexer) SetPaper(c *qt6.QColor) {
	C.QsciLexer_SetPaper(this.h, (*C.QColor)(c.UnsafePointer()))
}

func (this *QsciLexer) ColorChanged(c *qt6.QColor, style int) {
	C.QsciLexer_ColorChanged(this.h, (*C.QColor)(c.UnsafePointer()), (C.int)(style))
}
func (this *QsciLexer) OnColorChanged(slot func(c *qt6.QColor, style int)) {
	C.QsciLexer_connect_ColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_ColorChanged
func miqt_exec_callback_QsciLexer_ColorChanged(cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))
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

func (this *QsciLexer) FontChanged(f *qt6.QFont, style int) {
	C.QsciLexer_FontChanged(this.h, (*C.QFont)(f.UnsafePointer()), (C.int)(style))
}
func (this *QsciLexer) OnFontChanged(slot func(f *qt6.QFont, style int)) {
	C.QsciLexer_connect_FontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_FontChanged
func miqt_exec_callback_QsciLexer_FontChanged(cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(f *qt6.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFont(unsafe.Pointer(f))
	slotval2 := (int)(style)

	gofunc(slotval1, slotval2)
}

func (this *QsciLexer) PaperChanged(c *qt6.QColor, style int) {
	C.QsciLexer_PaperChanged(this.h, (*C.QColor)(c.UnsafePointer()), (C.int)(style))
}
func (this *QsciLexer) OnPaperChanged(slot func(c *qt6.QColor, style int)) {
	C.QsciLexer_connect_PaperChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexer_PaperChanged
func miqt_exec_callback_QsciLexer_PaperChanged(cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))
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

func (this *QsciLexer) BlockEnd1(style *int) string {
	_ret := C.QsciLexer_BlockEnd1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexer) BlockStart1(style *int) string {
	_ret := C.QsciLexer_BlockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexer) BlockStartKeyword1(style *int) string {
	_ret := C.QsciLexer_BlockStartKeyword1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexer) ReadSettings2(qs *qt6.QSettings, prefix string) bool {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	return (bool)(C.QsciLexer_ReadSettings2(this.h, (*C.QSettings)(qs.UnsafePointer()), prefix_Cstring))
}

func (this *QsciLexer) WriteSettings2(qs *qt6.QSettings, prefix string) bool {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	return (bool)(C.QsciLexer_WriteSettings2(this.h, (*C.QSettings)(qs.UnsafePointer()), prefix_Cstring))
}

func (this *QsciLexer) SetColor2(c *qt6.QColor, style int) {
	C.QsciLexer_SetColor2(this.h, (*C.QColor)(c.UnsafePointer()), (C.int)(style))
}

func (this *QsciLexer) SetEolFill2(eoffill bool, style int) {
	C.QsciLexer_SetEolFill2(this.h, (C.bool)(eoffill), (C.int)(style))
}

func (this *QsciLexer) SetFont2(f *qt6.QFont, style int) {
	C.QsciLexer_SetFont2(this.h, (*C.QFont)(f.UnsafePointer()), (C.int)(style))
}

func (this *QsciLexer) SetPaper2(c *qt6.QColor, style int) {
	C.QsciLexer_SetPaper2(this.h, (*C.QColor)(c.UnsafePointer()), (C.int)(style))
}

// Delete this object from C++ memory.
func (this *QsciLexer) Delete() {
	C.QsciLexer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexer) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
