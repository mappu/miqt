package qt

/*

#include "gen_qplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStaticPlugin struct {
	h *C.QStaticPlugin
}

func (this *QStaticPlugin) cPointer() *C.QStaticPlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStaticPlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQStaticPlugin(h *C.QStaticPlugin) *QStaticPlugin {
	if h == nil {
		return nil
	}
	return &QStaticPlugin{h: h}
}

func UnsafeNewQStaticPlugin(h unsafe.Pointer) *QStaticPlugin {
	return newQStaticPlugin((*C.QStaticPlugin)(h))
}

func (this *QStaticPlugin) MetaData() *QJsonObject {
	_ret := C.QStaticPlugin_MetaData(this.h)
	_goptr := newQJsonObject(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QStaticPlugin) Delete() {
	C.QStaticPlugin_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStaticPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QStaticPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
