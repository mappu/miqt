package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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

func newQStaticPlugin(h *C.QStaticPlugin) *QStaticPlugin {
	if h == nil {
		return nil
	}
	return &QStaticPlugin{h: h}
}

func newQStaticPlugin_U(h unsafe.Pointer) *QStaticPlugin {
	return newQStaticPlugin((*C.QStaticPlugin)(h))
}

func (this *QStaticPlugin) MetaData() *QJsonObject {
	ret := C.QStaticPlugin_MetaData(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStaticPlugin) Delete() {
	C.QStaticPlugin_Delete(this.h)
}
