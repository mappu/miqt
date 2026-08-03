package designer

/*

#include "gen_abstractoptionspage.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QDesignerOptionsPageInterface struct {
	h *C.QDesignerOptionsPageInterface
}

func (this *QDesignerOptionsPageInterface) cPointer() *C.QDesignerOptionsPageInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerOptionsPageInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerOptionsPageInterface constructs the type using only CGO pointers.
func newQDesignerOptionsPageInterface(h *C.QDesignerOptionsPageInterface) *QDesignerOptionsPageInterface {
	if h == nil {
		return nil
	}

	return &QDesignerOptionsPageInterface{h: h}
}

// UnsafeNewQDesignerOptionsPageInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerOptionsPageInterface(h unsafe.Pointer) *QDesignerOptionsPageInterface {
	return newQDesignerOptionsPageInterface((*C.QDesignerOptionsPageInterface)(h))
}

func (this *QDesignerOptionsPageInterface) Name() string {
	var _ms C.struct_miqt_string = C.QDesignerOptionsPageInterface_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerOptionsPageInterface) CreatePage(parent *qt.QWidget) *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerOptionsPageInterface_createPage(this.h, (*C.QWidget)(parent.UnsafePointer()))))
}

func (this *QDesignerOptionsPageInterface) Apply() {
	C.QDesignerOptionsPageInterface_apply(this.h)
}

func (this *QDesignerOptionsPageInterface) Finish() {
	C.QDesignerOptionsPageInterface_finish(this.h)
}

func (this *QDesignerOptionsPageInterface) OperatorAssign(param1 *QDesignerOptionsPageInterface) {
	C.QDesignerOptionsPageInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDesignerOptionsPageInterface) Delete() {
	C.QDesignerOptionsPageInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerOptionsPageInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerOptionsPageInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
