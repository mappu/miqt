package designer

/*

#include "gen_abstractlanguage.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QDesignerLanguageExtension struct {
	h *C.QDesignerLanguageExtension
}

func (this *QDesignerLanguageExtension) cPointer() *C.QDesignerLanguageExtension {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerLanguageExtension) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerLanguageExtension constructs the type using only CGO pointers.
func newQDesignerLanguageExtension(h *C.QDesignerLanguageExtension) *QDesignerLanguageExtension {
	if h == nil {
		return nil
	}

	return &QDesignerLanguageExtension{h: h}
}

// UnsafeNewQDesignerLanguageExtension constructs the type using only unsafe pointers.
func UnsafeNewQDesignerLanguageExtension(h unsafe.Pointer) *QDesignerLanguageExtension {
	return newQDesignerLanguageExtension((*C.QDesignerLanguageExtension)(h))
}

func (this *QDesignerLanguageExtension) Name() string {
	var _ms C.struct_miqt_string = C.QDesignerLanguageExtension_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerLanguageExtension) CreateFormWindowSettingsDialog(formWindow *QDesignerFormWindowInterface, parentWidget *qt6.QWidget) *qt6.QDialog {
	return qt6.UnsafeNewQDialog(unsafe.Pointer(C.QDesignerLanguageExtension_createFormWindowSettingsDialog(this.h, formWindow.cPointer(), (*C.QWidget)(parentWidget.UnsafePointer()))))
}

func (this *QDesignerLanguageExtension) CreateResourceBrowser(parentWidget *qt6.QWidget) *QDesignerResourceBrowserInterface {
	return newQDesignerResourceBrowserInterface(C.QDesignerLanguageExtension_createResourceBrowser(this.h, (*C.QWidget)(parentWidget.UnsafePointer())))
}

func (this *QDesignerLanguageExtension) CreatePromotionDialog(formEditor *QDesignerFormEditorInterface, parentWidget *qt6.QWidget) *qt6.QDialog {
	return qt6.UnsafeNewQDialog(unsafe.Pointer(C.QDesignerLanguageExtension_createPromotionDialog(this.h, formEditor.cPointer(), (*C.QWidget)(parentWidget.UnsafePointer()))))
}

func (this *QDesignerLanguageExtension) IsLanguageResource(path string) bool {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	return (bool)(C.QDesignerLanguageExtension_isLanguageResource(this.h, path_ms))
}

func (this *QDesignerLanguageExtension) ClassNameOf(object *qt6.QObject) string {
	var _ms C.struct_miqt_string = C.QDesignerLanguageExtension_classNameOf(this.h, (*C.QObject)(object.UnsafePointer()))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerLanguageExtension) SignalMatchesSlot(signal string, slot string) bool {
	signal_ms := C.struct_miqt_string{}
	signal_ms.data = C.CString(signal)
	signal_ms.len = C.size_t(len(signal))
	defer C.free(unsafe.Pointer(signal_ms.data))
	slot_ms := C.struct_miqt_string{}
	slot_ms.data = C.CString(slot)
	slot_ms.len = C.size_t(len(slot))
	defer C.free(unsafe.Pointer(slot_ms.data))
	return (bool)(C.QDesignerLanguageExtension_signalMatchesSlot(this.h, signal_ms, slot_ms))
}

func (this *QDesignerLanguageExtension) WidgetBoxContents() string {
	var _ms C.struct_miqt_string = C.QDesignerLanguageExtension_widgetBoxContents(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerLanguageExtension) UiExtension() string {
	var _ms C.struct_miqt_string = C.QDesignerLanguageExtension_uiExtension(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QDesignerLanguageExtension) Delete() {
	C.QDesignerLanguageExtension_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerLanguageExtension) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerLanguageExtension) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
