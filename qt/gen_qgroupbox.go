package qt

/*

#include "gen_qgroupbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGroupBox struct {
	h *C.QGroupBox
	*QWidget
}

func (this *QGroupBox) cPointer() *C.QGroupBox {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGroupBox(h *C.QGroupBox) *QGroupBox {
	if h == nil {
		return nil
	}
	return &QGroupBox{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQGroupBox_U(h unsafe.Pointer) *QGroupBox {
	return newQGroupBox((*C.QGroupBox)(h))
}

// NewQGroupBox constructs a new QGroupBox object.
func NewQGroupBox() *QGroupBox {
	ret := C.QGroupBox_new()
	return newQGroupBox(ret)
}

// NewQGroupBox2 constructs a new QGroupBox object.
func NewQGroupBox2(title string) *QGroupBox {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QGroupBox_new2(title_Cstring, C.ulong(len(title)))
	return newQGroupBox(ret)
}

// NewQGroupBox3 constructs a new QGroupBox object.
func NewQGroupBox3(parent *QWidget) *QGroupBox {
	ret := C.QGroupBox_new3(parent.cPointer())
	return newQGroupBox(ret)
}

// NewQGroupBox4 constructs a new QGroupBox object.
func NewQGroupBox4(title string, parent *QWidget) *QGroupBox {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QGroupBox_new4(title_Cstring, C.ulong(len(title)), parent.cPointer())
	return newQGroupBox(ret)
}

func (this *QGroupBox) MetaObject() *QMetaObject {
	ret := C.QGroupBox_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGroupBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGroupBox_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGroupBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGroupBox_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGroupBox) Title() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGroupBox_Title(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGroupBox) SetTitle(title string) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	C.QGroupBox_SetTitle(this.h, title_Cstring, C.ulong(len(title)))
}

func (this *QGroupBox) Alignment() int {
	ret := C.QGroupBox_Alignment(this.h)
	return (int)(ret)
}

func (this *QGroupBox) SetAlignment(alignment int) {
	C.QGroupBox_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QGroupBox) MinimumSizeHint() *QSize {
	ret := C.QGroupBox_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGroupBox) IsFlat() bool {
	ret := C.QGroupBox_IsFlat(this.h)
	return (bool)(ret)
}

func (this *QGroupBox) SetFlat(flat bool) {
	C.QGroupBox_SetFlat(this.h, (C.bool)(flat))
}

func (this *QGroupBox) IsCheckable() bool {
	ret := C.QGroupBox_IsCheckable(this.h)
	return (bool)(ret)
}

func (this *QGroupBox) SetCheckable(checkable bool) {
	C.QGroupBox_SetCheckable(this.h, (C.bool)(checkable))
}

func (this *QGroupBox) IsChecked() bool {
	ret := C.QGroupBox_IsChecked(this.h)
	return (bool)(ret)
}

func (this *QGroupBox) SetChecked(checked bool) {
	C.QGroupBox_SetChecked(this.h, (C.bool)(checked))
}

func (this *QGroupBox) Clicked() {
	C.QGroupBox_Clicked(this.h)
}

func (this *QGroupBox) Toggled(param1 bool) {
	C.QGroupBox_Toggled(this.h, (C.bool)(param1))
}

func (this *QGroupBox) OnToggled(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGroupBox_connect_Toggled(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QGroupBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGroupBox_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGroupBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGroupBox_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGroupBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGroupBox_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGroupBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGroupBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGroupBox) Clicked1(checked bool) {
	C.QGroupBox_Clicked1(this.h, (C.bool)(checked))
}

func (this *QGroupBox) OnClicked1(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGroupBox_connect_Clicked1(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGroupBox) Delete() {
	C.QGroupBox_Delete(this.h)
}
