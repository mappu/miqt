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
	h  *C.QStaticPlugin
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStaticPlugin) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQStaticPlugin constructs the type using only CGO pointers.
func newQStaticPlugin(h *C.QStaticPlugin) *QStaticPlugin {
	if h == nil {
		return nil
	}

	return &QStaticPlugin{h: h}
}

// UnsafeNewQStaticPlugin constructs the type using only unsafe pointers.
func UnsafeNewQStaticPlugin(h unsafe.Pointer) *QStaticPlugin {
	return newQStaticPlugin((*C.QStaticPlugin)(h))
}

func (this *QStaticPlugin) MetaData() *QJsonObject {
	defer runtime.KeepAlive(this)
	_goptr := newQJsonObject(C.QStaticPlugin_metaData(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QStaticPlugin) Delete() {
	C.QStaticPlugin_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStaticPlugin) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStaticPlugin_delete((*C.QStaticPlugin)(gc[0]))
	})
	this.miqtSetGC(gc)
}

func QPluginArchRequirements2() byte {
	return (byte)(C.miqt_QPluginArchRequirements2())
}

func QRegisterStaticPluginFunctionWithStaticPlugin(staticPlugin QStaticPlugin) {
	defer runtime.KeepAlive(staticPlugin)
	C.miqt_QRegisterStaticPluginFunctionWithStaticPlugin(staticPlugin.cPointer())
}
