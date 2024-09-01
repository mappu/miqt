package qt

/*

#include "gen_qpluginloader.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPluginLoader struct {
	h *C.QPluginLoader
	*QObject
}

func (this *QPluginLoader) cPointer() *C.QPluginLoader {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPluginLoader(h *C.QPluginLoader) *QPluginLoader {
	if h == nil {
		return nil
	}
	return &QPluginLoader{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQPluginLoader_U(h unsafe.Pointer) *QPluginLoader {
	return newQPluginLoader((*C.QPluginLoader)(h))
}

// NewQPluginLoader constructs a new QPluginLoader object.
func NewQPluginLoader() *QPluginLoader {
	ret := C.QPluginLoader_new()
	return newQPluginLoader(ret)
}

// NewQPluginLoader2 constructs a new QPluginLoader object.
func NewQPluginLoader2(fileName string) *QPluginLoader {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QPluginLoader_new2(fileName_Cstring, C.size_t(len(fileName)))
	return newQPluginLoader(ret)
}

// NewQPluginLoader3 constructs a new QPluginLoader object.
func NewQPluginLoader3(parent *QObject) *QPluginLoader {
	ret := C.QPluginLoader_new3(parent.cPointer())
	return newQPluginLoader(ret)
}

// NewQPluginLoader4 constructs a new QPluginLoader object.
func NewQPluginLoader4(fileName string, parent *QObject) *QPluginLoader {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QPluginLoader_new4(fileName_Cstring, C.size_t(len(fileName)), parent.cPointer())
	return newQPluginLoader(ret)
}

func (this *QPluginLoader) MetaObject() *QMetaObject {
	ret := C.QPluginLoader_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QPluginLoader_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPluginLoader_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPluginLoader_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPluginLoader_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPluginLoader) Instance() *QObject {
	ret := C.QPluginLoader_Instance(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QPluginLoader) MetaData() *QJsonObject {
	ret := C.QPluginLoader_MetaData(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPluginLoader_StaticInstances() []*QObject {
	var _out **C.QObject = nil
	var _out_len C.size_t = 0
	C.QPluginLoader_StaticInstances(&_out, &_out_len)
	ret := make([]*QObject, int(_out_len))
	_outCast := (*[0xffff]*C.QObject)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQObject(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPluginLoader_StaticPlugins() []QStaticPlugin {
	var _out **C.QStaticPlugin = nil
	var _out_len C.size_t = 0
	C.QPluginLoader_StaticPlugins(&_out, &_out_len)
	ret := make([]QStaticPlugin, int(_out_len))
	_outCast := (*[0xffff]*C.QStaticPlugin)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQStaticPlugin(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPluginLoader) Load() bool {
	ret := C.QPluginLoader_Load(this.h)
	return (bool)(ret)
}

func (this *QPluginLoader) Unload() bool {
	ret := C.QPluginLoader_Unload(this.h)
	return (bool)(ret)
}

func (this *QPluginLoader) IsLoaded() bool {
	ret := C.QPluginLoader_IsLoaded(this.h)
	return (bool)(ret)
}

func (this *QPluginLoader) SetFileName(fileName string) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	C.QPluginLoader_SetFileName(this.h, fileName_Cstring, C.size_t(len(fileName)))
}

func (this *QPluginLoader) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPluginLoader_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPluginLoader) ErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPluginLoader_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPluginLoader) SetLoadHints(loadHints int) {
	C.QPluginLoader_SetLoadHints(this.h, (C.int)(loadHints))
}

func (this *QPluginLoader) LoadHints() int {
	ret := C.QPluginLoader_LoadHints(this.h)
	return (int)(ret)
}

func QPluginLoader_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPluginLoader_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPluginLoader_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPluginLoader_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPluginLoader_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPluginLoader_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPluginLoader_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPluginLoader_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPluginLoader) Delete() {
	C.QPluginLoader_Delete(this.h)
}
