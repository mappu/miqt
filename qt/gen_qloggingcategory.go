package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qloggingcategory.h"
#include <stdlib.h>

*/
import "C"

import (
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
	ret := C.QLoggingCategory_IsDebugEnabled(this.h)
	return (bool)(ret)
}

func (this *QLoggingCategory) IsInfoEnabled() bool {
	ret := C.QLoggingCategory_IsInfoEnabled(this.h)
	return (bool)(ret)
}

func (this *QLoggingCategory) IsWarningEnabled() bool {
	ret := C.QLoggingCategory_IsWarningEnabled(this.h)
	return (bool)(ret)
}

func (this *QLoggingCategory) IsCriticalEnabled() bool {
	ret := C.QLoggingCategory_IsCriticalEnabled(this.h)
	return (bool)(ret)
}

func (this *QLoggingCategory) CategoryName() unsafe.Pointer {
	ret := C.QLoggingCategory_CategoryName(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QLoggingCategory) OperatorCall() *QLoggingCategory {
	ret := C.QLoggingCategory_OperatorCall(this.h)
	return newQLoggingCategory_U(unsafe.Pointer(ret))
}

func (this *QLoggingCategory) OperatorCall2() *QLoggingCategory {
	ret := C.QLoggingCategory_OperatorCall2(this.h)
	return newQLoggingCategory_U(unsafe.Pointer(ret))
}

func QLoggingCategory_DefaultCategory() *QLoggingCategory {
	ret := C.QLoggingCategory_DefaultCategory()
	return newQLoggingCategory_U(unsafe.Pointer(ret))
}

func QLoggingCategory_SetFilterRules(rules string) {
	rules_Cstring := C.CString(rules)
	defer C.free(unsafe.Pointer(rules_Cstring))
	C.QLoggingCategory_SetFilterRules(rules_Cstring, C.ulong(len(rules)))
}

func (this *QLoggingCategory) Delete() {
	C.QLoggingCategory_Delete(this.h)
}
