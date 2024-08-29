package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qboxlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QBoxLayout struct {
	h *C.QBoxLayout
	*QLayout
}

func (this *QBoxLayout) cPointer() *C.QBoxLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func newQBoxLayout(h *C.QBoxLayout) *QBoxLayout {
	return &QBoxLayout{h: h, QLayout: newQLayout_U(unsafe.Pointer(h))}
}

func newQBoxLayout_U(h unsafe.Pointer) *QBoxLayout {
	return newQBoxLayout((*C.QBoxLayout)(h))
}

// NewQBoxLayout constructs a new QBoxLayout object.
func NewQBoxLayout(param1 uintptr) *QBoxLayout {
	ret := C.QBoxLayout_new((C.uintptr_t)(param1))
	return newQBoxLayout(ret)
}

// NewQBoxLayout2 constructs a new QBoxLayout object.
func NewQBoxLayout2(param1 uintptr, parent *QWidget) *QBoxLayout {
	ret := C.QBoxLayout_new2((C.uintptr_t)(param1), parent.cPointer())
	return newQBoxLayout(ret)
}

func (this *QBoxLayout) MetaObject() *QMetaObject {
	ret := C.QBoxLayout_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QBoxLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QBoxLayout_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QBoxLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QBoxLayout_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QBoxLayout) Direction() uintptr {
	ret := C.QBoxLayout_Direction(this.h)
	return (uintptr)(ret)
}

func (this *QBoxLayout) SetDirection(direction uintptr) {
	C.QBoxLayout_SetDirection(this.h, (C.uintptr_t)(direction))
}

func (this *QBoxLayout) AddSpacing(size int) {
	C.QBoxLayout_AddSpacing(this.h, (C.int)(size))
}

func (this *QBoxLayout) AddStretch() {
	C.QBoxLayout_AddStretch(this.h)
}

func (this *QBoxLayout) AddSpacerItem(spacerItem *QSpacerItem) {
	C.QBoxLayout_AddSpacerItem(this.h, spacerItem.cPointer())
}

func (this *QBoxLayout) AddWidget(param1 *QWidget) {
	C.QBoxLayout_AddWidget(this.h, param1.cPointer())
}

func (this *QBoxLayout) AddLayout(layout *QLayout) {
	C.QBoxLayout_AddLayout(this.h, layout.cPointer())
}

func (this *QBoxLayout) AddStrut(param1 int) {
	C.QBoxLayout_AddStrut(this.h, (C.int)(param1))
}

func (this *QBoxLayout) AddItem(param1 *QLayoutItem) {
	C.QBoxLayout_AddItem(this.h, param1.cPointer())
}

func (this *QBoxLayout) InsertSpacing(index int, size int) {
	C.QBoxLayout_InsertSpacing(this.h, (C.int)(index), (C.int)(size))
}

func (this *QBoxLayout) InsertStretch(index int) {
	C.QBoxLayout_InsertStretch(this.h, (C.int)(index))
}

func (this *QBoxLayout) InsertSpacerItem(index int, spacerItem *QSpacerItem) {
	C.QBoxLayout_InsertSpacerItem(this.h, (C.int)(index), spacerItem.cPointer())
}

func (this *QBoxLayout) InsertWidget(index int, widget *QWidget) {
	C.QBoxLayout_InsertWidget(this.h, (C.int)(index), widget.cPointer())
}

func (this *QBoxLayout) InsertLayout(index int, layout *QLayout) {
	C.QBoxLayout_InsertLayout(this.h, (C.int)(index), layout.cPointer())
}

func (this *QBoxLayout) InsertItem(index int, param2 *QLayoutItem) {
	C.QBoxLayout_InsertItem(this.h, (C.int)(index), param2.cPointer())
}

func (this *QBoxLayout) Spacing() int {
	ret := C.QBoxLayout_Spacing(this.h)
	return (int)(ret)
}

func (this *QBoxLayout) SetSpacing(spacing int) {
	C.QBoxLayout_SetSpacing(this.h, (C.int)(spacing))
}

func (this *QBoxLayout) SetStretchFactor(w *QWidget, stretch int) bool {
	ret := C.QBoxLayout_SetStretchFactor(this.h, w.cPointer(), (C.int)(stretch))
	return (bool)(ret)
}

func (this *QBoxLayout) SetStretchFactor2(l *QLayout, stretch int) bool {
	ret := C.QBoxLayout_SetStretchFactor2(this.h, l.cPointer(), (C.int)(stretch))
	return (bool)(ret)
}

func (this *QBoxLayout) SetStretch(index int, stretch int) {
	C.QBoxLayout_SetStretch(this.h, (C.int)(index), (C.int)(stretch))
}

func (this *QBoxLayout) Stretch(index int) int {
	ret := C.QBoxLayout_Stretch(this.h, (C.int)(index))
	return (int)(ret)
}

func (this *QBoxLayout) SizeHint() *QSize {
	ret := C.QBoxLayout_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QBoxLayout) MinimumSize() *QSize {
	ret := C.QBoxLayout_MinimumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QBoxLayout) MaximumSize() *QSize {
	ret := C.QBoxLayout_MaximumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QBoxLayout) HasHeightForWidth() bool {
	ret := C.QBoxLayout_HasHeightForWidth(this.h)
	return (bool)(ret)
}

func (this *QBoxLayout) HeightForWidth(param1 int) int {
	ret := C.QBoxLayout_HeightForWidth(this.h, (C.int)(param1))
	return (int)(ret)
}

func (this *QBoxLayout) MinimumHeightForWidth(param1 int) int {
	ret := C.QBoxLayout_MinimumHeightForWidth(this.h, (C.int)(param1))
	return (int)(ret)
}

func (this *QBoxLayout) ExpandingDirections() int {
	ret := C.QBoxLayout_ExpandingDirections(this.h)
	return (int)(ret)
}

func (this *QBoxLayout) Invalidate() {
	C.QBoxLayout_Invalidate(this.h)
}

func (this *QBoxLayout) ItemAt(param1 int) *QLayoutItem {
	ret := C.QBoxLayout_ItemAt(this.h, (C.int)(param1))
	return newQLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QBoxLayout) TakeAt(param1 int) *QLayoutItem {
	ret := C.QBoxLayout_TakeAt(this.h, (C.int)(param1))
	return newQLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QBoxLayout) Count() int {
	ret := C.QBoxLayout_Count(this.h)
	return (int)(ret)
}

func (this *QBoxLayout) SetGeometry(geometry *QRect) {
	C.QBoxLayout_SetGeometry(this.h, geometry.cPointer())
}

func QBoxLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QBoxLayout_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QBoxLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QBoxLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QBoxLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QBoxLayout_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QBoxLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QBoxLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QBoxLayout) AddStretch1(stretch int) {
	C.QBoxLayout_AddStretch1(this.h, (C.int)(stretch))
}

func (this *QBoxLayout) AddWidget2(param1 *QWidget, stretch int) {
	C.QBoxLayout_AddWidget2(this.h, param1.cPointer(), (C.int)(stretch))
}

func (this *QBoxLayout) AddWidget3(param1 *QWidget, stretch int, alignment int) {
	C.QBoxLayout_AddWidget3(this.h, param1.cPointer(), (C.int)(stretch), (C.int)(alignment))
}

func (this *QBoxLayout) AddLayout2(layout *QLayout, stretch int) {
	C.QBoxLayout_AddLayout2(this.h, layout.cPointer(), (C.int)(stretch))
}

func (this *QBoxLayout) InsertStretch2(index int, stretch int) {
	C.QBoxLayout_InsertStretch2(this.h, (C.int)(index), (C.int)(stretch))
}

func (this *QBoxLayout) InsertWidget3(index int, widget *QWidget, stretch int) {
	C.QBoxLayout_InsertWidget3(this.h, (C.int)(index), widget.cPointer(), (C.int)(stretch))
}

func (this *QBoxLayout) InsertWidget4(index int, widget *QWidget, stretch int, alignment int) {
	C.QBoxLayout_InsertWidget4(this.h, (C.int)(index), widget.cPointer(), (C.int)(stretch), (C.int)(alignment))
}

func (this *QBoxLayout) InsertLayout3(index int, layout *QLayout, stretch int) {
	C.QBoxLayout_InsertLayout3(this.h, (C.int)(index), layout.cPointer(), (C.int)(stretch))
}

func (this *QBoxLayout) Delete() {
	C.QBoxLayout_Delete(this.h)
}

type QHBoxLayout struct {
	h *C.QHBoxLayout
	*QBoxLayout
}

func (this *QHBoxLayout) cPointer() *C.QHBoxLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func newQHBoxLayout(h *C.QHBoxLayout) *QHBoxLayout {
	return &QHBoxLayout{h: h, QBoxLayout: newQBoxLayout_U(unsafe.Pointer(h))}
}

func newQHBoxLayout_U(h unsafe.Pointer) *QHBoxLayout {
	return newQHBoxLayout((*C.QHBoxLayout)(h))
}

// NewQHBoxLayout constructs a new QHBoxLayout object.
func NewQHBoxLayout() *QHBoxLayout {
	ret := C.QHBoxLayout_new()
	return newQHBoxLayout(ret)
}

// NewQHBoxLayout2 constructs a new QHBoxLayout object.
func NewQHBoxLayout2(parent *QWidget) *QHBoxLayout {
	ret := C.QHBoxLayout_new2(parent.cPointer())
	return newQHBoxLayout(ret)
}

func (this *QHBoxLayout) MetaObject() *QMetaObject {
	ret := C.QHBoxLayout_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QHBoxLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHBoxLayout_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QHBoxLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHBoxLayout_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QHBoxLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHBoxLayout_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QHBoxLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHBoxLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QHBoxLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHBoxLayout_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QHBoxLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHBoxLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QHBoxLayout) Delete() {
	C.QHBoxLayout_Delete(this.h)
}

type QVBoxLayout struct {
	h *C.QVBoxLayout
	*QBoxLayout
}

func (this *QVBoxLayout) cPointer() *C.QVBoxLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func newQVBoxLayout(h *C.QVBoxLayout) *QVBoxLayout {
	return &QVBoxLayout{h: h, QBoxLayout: newQBoxLayout_U(unsafe.Pointer(h))}
}

func newQVBoxLayout_U(h unsafe.Pointer) *QVBoxLayout {
	return newQVBoxLayout((*C.QVBoxLayout)(h))
}

// NewQVBoxLayout constructs a new QVBoxLayout object.
func NewQVBoxLayout() *QVBoxLayout {
	ret := C.QVBoxLayout_new()
	return newQVBoxLayout(ret)
}

// NewQVBoxLayout2 constructs a new QVBoxLayout object.
func NewQVBoxLayout2(parent *QWidget) *QVBoxLayout {
	ret := C.QVBoxLayout_new2(parent.cPointer())
	return newQVBoxLayout(ret)
}

func (this *QVBoxLayout) MetaObject() *QMetaObject {
	ret := C.QVBoxLayout_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QVBoxLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QVBoxLayout_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QVBoxLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QVBoxLayout_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QVBoxLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QVBoxLayout_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QVBoxLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QVBoxLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QVBoxLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QVBoxLayout_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QVBoxLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QVBoxLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QVBoxLayout) Delete() {
	C.QVBoxLayout_Delete(this.h)
}
