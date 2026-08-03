package designer

/*

#include "gen_abstractformwindowcursor.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QDesignerFormWindowCursorInterface__MoveOperation int

const (
	QDesignerFormWindowCursorInterface__NoMove QDesignerFormWindowCursorInterface__MoveOperation = 0
	QDesignerFormWindowCursorInterface__Start  QDesignerFormWindowCursorInterface__MoveOperation = 1
	QDesignerFormWindowCursorInterface__End    QDesignerFormWindowCursorInterface__MoveOperation = 2
	QDesignerFormWindowCursorInterface__Next   QDesignerFormWindowCursorInterface__MoveOperation = 3
	QDesignerFormWindowCursorInterface__Prev   QDesignerFormWindowCursorInterface__MoveOperation = 4
	QDesignerFormWindowCursorInterface__Left   QDesignerFormWindowCursorInterface__MoveOperation = 5
	QDesignerFormWindowCursorInterface__Right  QDesignerFormWindowCursorInterface__MoveOperation = 6
	QDesignerFormWindowCursorInterface__Up     QDesignerFormWindowCursorInterface__MoveOperation = 7
	QDesignerFormWindowCursorInterface__Down   QDesignerFormWindowCursorInterface__MoveOperation = 8
)

type QDesignerFormWindowCursorInterface__MoveMode int

const (
	QDesignerFormWindowCursorInterface__MoveAnchor QDesignerFormWindowCursorInterface__MoveMode = 0
	QDesignerFormWindowCursorInterface__KeepAnchor QDesignerFormWindowCursorInterface__MoveMode = 1
)

type QDesignerFormWindowCursorInterface struct {
	h *C.QDesignerFormWindowCursorInterface
}

func (this *QDesignerFormWindowCursorInterface) cPointer() *C.QDesignerFormWindowCursorInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerFormWindowCursorInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerFormWindowCursorInterface constructs the type using only CGO pointers.
func newQDesignerFormWindowCursorInterface(h *C.QDesignerFormWindowCursorInterface) *QDesignerFormWindowCursorInterface {
	if h == nil {
		return nil
	}

	return &QDesignerFormWindowCursorInterface{h: h}
}

// UnsafeNewQDesignerFormWindowCursorInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerFormWindowCursorInterface(h unsafe.Pointer) *QDesignerFormWindowCursorInterface {
	return newQDesignerFormWindowCursorInterface((*C.QDesignerFormWindowCursorInterface)(h))
}

func (this *QDesignerFormWindowCursorInterface) FormWindow() *QDesignerFormWindowInterface {
	return newQDesignerFormWindowInterface(C.QDesignerFormWindowCursorInterface_formWindow(this.h))
}

func (this *QDesignerFormWindowCursorInterface) MovePosition(op QDesignerFormWindowCursorInterface__MoveOperation, mode QDesignerFormWindowCursorInterface__MoveMode) bool {
	return (bool)(C.QDesignerFormWindowCursorInterface_movePosition(this.h, (C.int)(op), (C.int)(mode)))
}

func (this *QDesignerFormWindowCursorInterface) Position() int {
	return (int)(C.QDesignerFormWindowCursorInterface_position(this.h))
}

func (this *QDesignerFormWindowCursorInterface) SetPosition(pos int, mode QDesignerFormWindowCursorInterface__MoveMode) {
	C.QDesignerFormWindowCursorInterface_setPosition(this.h, (C.int)(pos), (C.int)(mode))
}

func (this *QDesignerFormWindowCursorInterface) Current() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerFormWindowCursorInterface_current(this.h)))
}

func (this *QDesignerFormWindowCursorInterface) WidgetCount() int {
	return (int)(C.QDesignerFormWindowCursorInterface_widgetCount(this.h))
}

func (this *QDesignerFormWindowCursorInterface) Widget(index int) *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerFormWindowCursorInterface_widget(this.h, (C.int)(index))))
}

func (this *QDesignerFormWindowCursorInterface) HasSelection() bool {
	return (bool)(C.QDesignerFormWindowCursorInterface_hasSelection(this.h))
}

func (this *QDesignerFormWindowCursorInterface) SelectedWidgetCount() int {
	return (int)(C.QDesignerFormWindowCursorInterface_selectedWidgetCount(this.h))
}

func (this *QDesignerFormWindowCursorInterface) SelectedWidget(index int) *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerFormWindowCursorInterface_selectedWidget(this.h, (C.int)(index))))
}

func (this *QDesignerFormWindowCursorInterface) SetProperty(name string, value *qt.QVariant) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerFormWindowCursorInterface_setProperty(this.h, name_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QDesignerFormWindowCursorInterface) SetWidgetProperty(widget *qt.QWidget, name string, value *qt.QVariant) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerFormWindowCursorInterface_setWidgetProperty(this.h, (*C.QWidget)(widget.UnsafePointer()), name_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QDesignerFormWindowCursorInterface) ResetWidgetProperty(widget *qt.QWidget, name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerFormWindowCursorInterface_resetWidgetProperty(this.h, (*C.QWidget)(widget.UnsafePointer()), name_ms)
}

func (this *QDesignerFormWindowCursorInterface) IsWidgetSelected(widget *qt.QWidget) bool {
	return (bool)(C.QDesignerFormWindowCursorInterface_isWidgetSelected(this.h, (*C.QWidget)(widget.UnsafePointer())))
}

func (this *QDesignerFormWindowCursorInterface) OperatorAssign(param1 *QDesignerFormWindowCursorInterface) {
	C.QDesignerFormWindowCursorInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDesignerFormWindowCursorInterface) Delete() {
	C.QDesignerFormWindowCursorInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerFormWindowCursorInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerFormWindowCursorInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
