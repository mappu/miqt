package qt

/*

#include "gen_qloggingcategory.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLoggingCategory struct {
	h *C.QLoggingCategory
}

func (this *QLoggingCategory) cPointer() *C.QLoggingCategory {
	if this == nil {
		return nil
	}
	return this.h
}

func newQLoggingCategory(h *C.QLoggingCategory) *QLoggingCategory {
	if h == nil {
		return nil
	}
	return &QLoggingCategory{h: h}
}

func newQLoggingCategory_U(h unsafe.Pointer) *QLoggingCategory {
	return newQLoggingCategory((*C.QLoggingCategory)(h))
}

// NewQLoggingCategory constructs a new QLoggingCategory object.
func NewQLoggingCategory(category string) *QLoggingCategory {
	category_Cstring := C.CString(category)
	defer C.free(unsafe.Pointer(category_Cstring))
	ret := C.QLoggingCategory_new(category_Cstring)
	return newQLoggingCategory(ret)
}

func (this *QLoggingCategory) IsDebugEnabled() bool {
	_ret := C.QLoggingCategory_IsDebugEnabled(this.h)
	return (bool)(_ret)
}

func (this *QLoggingCategory) IsInfoEnabled() bool {
	_ret := C.QLoggingCategory_IsInfoEnabled(this.h)
	return (bool)(_ret)
}

func (this *QLoggingCategory) IsWarningEnabled() bool {
	_ret := C.QLoggingCategory_IsWarningEnabled(this.h)
	return (bool)(_ret)
}

func (this *QLoggingCategory) IsCriticalEnabled() bool {
	_ret := C.QLoggingCategory_IsCriticalEnabled(this.h)
	return (bool)(_ret)
}

func (this *QLoggingCategory) CategoryName() unsafe.Pointer {
	_ret := C.QLoggingCategory_CategoryName(this.h)
	return (unsafe.Pointer)(_ret)
}

func (this *QLoggingCategory) OperatorCall() *QLoggingCategory {
	_ret := C.QLoggingCategory_OperatorCall(this.h)
	return newQLoggingCategory_U(unsafe.Pointer(_ret))
}

func (this *QLoggingCategory) OperatorCall2() *QLoggingCategory {
	_ret := C.QLoggingCategory_OperatorCall2(this.h)
	return newQLoggingCategory_U(unsafe.Pointer(_ret))
}

func QLoggingCategory_DefaultCategory() *QLoggingCategory {
	_ret := C.QLoggingCategory_DefaultCategory()
	return newQLoggingCategory_U(unsafe.Pointer(_ret))
}

func QLoggingCategory_SetFilterRules(rules string) {
	rules_ms := miqt_strdupg(rules)
	defer C.free(rules_ms)
	C.QLoggingCategory_SetFilterRules((*C.struct_miqt_string)(rules_ms))
}

// Delete this object from C++ memory.
func (this *QLoggingCategory) Delete() {
	C.QLoggingCategory_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLoggingCategory) GoGC() {
	runtime.SetFinalizer(this, func(this *QLoggingCategory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
