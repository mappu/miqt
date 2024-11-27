package webengine

/*

#include "gen_qwebenginescript.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QWebEngineScript__InjectionPoint int

const (
	QWebEngineScript__Deferred         QWebEngineScript__InjectionPoint = 0
	QWebEngineScript__DocumentReady    QWebEngineScript__InjectionPoint = 1
	QWebEngineScript__DocumentCreation QWebEngineScript__InjectionPoint = 2
)

type QWebEngineScript__ScriptWorldId int

const (
	QWebEngineScript__MainWorld        QWebEngineScript__ScriptWorldId = 0
	QWebEngineScript__ApplicationWorld QWebEngineScript__ScriptWorldId = 1
	QWebEngineScript__UserWorld        QWebEngineScript__ScriptWorldId = 2
)

type QWebEngineScript struct {
	h          *C.QWebEngineScript
	isSubclass bool
}

func (this *QWebEngineScript) cPointer() *C.QWebEngineScript {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineScript) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineScript constructs the type using only CGO pointers.
func newQWebEngineScript(h *C.QWebEngineScript) *QWebEngineScript {
	if h == nil {
		return nil
	}
	return &QWebEngineScript{h: h}
}

// UnsafeNewQWebEngineScript constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineScript(h unsafe.Pointer) *QWebEngineScript {
	if h == nil {
		return nil
	}

	return &QWebEngineScript{h: (*C.QWebEngineScript)(h)}
}

// NewQWebEngineScript constructs a new QWebEngineScript object.
func NewQWebEngineScript() *QWebEngineScript {
	var outptr_QWebEngineScript *C.QWebEngineScript = nil

	C.QWebEngineScript_new(&outptr_QWebEngineScript)
	ret := newQWebEngineScript(outptr_QWebEngineScript)
	ret.isSubclass = true
	return ret
}

// NewQWebEngineScript2 constructs a new QWebEngineScript object.
func NewQWebEngineScript2(other *QWebEngineScript) *QWebEngineScript {
	var outptr_QWebEngineScript *C.QWebEngineScript = nil

	C.QWebEngineScript_new2(other.cPointer(), &outptr_QWebEngineScript)
	ret := newQWebEngineScript(outptr_QWebEngineScript)
	ret.isSubclass = true
	return ret
}

func (this *QWebEngineScript) OperatorAssign(other *QWebEngineScript) {
	C.QWebEngineScript_OperatorAssign(this.h, other.cPointer())
}

func (this *QWebEngineScript) IsNull() bool {
	return (bool)(C.QWebEngineScript_IsNull(this.h))
}

func (this *QWebEngineScript) Name() string {
	var _ms C.struct_miqt_string = C.QWebEngineScript_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineScript) SetName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWebEngineScript_SetName(this.h, name_ms)
}

func (this *QWebEngineScript) SourceCode() string {
	var _ms C.struct_miqt_string = C.QWebEngineScript_SourceCode(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineScript) SetSourceCode(sourceCode string) {
	sourceCode_ms := C.struct_miqt_string{}
	sourceCode_ms.data = C.CString(sourceCode)
	sourceCode_ms.len = C.size_t(len(sourceCode))
	defer C.free(unsafe.Pointer(sourceCode_ms.data))
	C.QWebEngineScript_SetSourceCode(this.h, sourceCode_ms)
}

func (this *QWebEngineScript) InjectionPoint() QWebEngineScript__InjectionPoint {
	return (QWebEngineScript__InjectionPoint)(C.QWebEngineScript_InjectionPoint(this.h))
}

func (this *QWebEngineScript) SetInjectionPoint(injectionPoint QWebEngineScript__InjectionPoint) {
	C.QWebEngineScript_SetInjectionPoint(this.h, (C.int)(injectionPoint))
}

func (this *QWebEngineScript) WorldId() uint {
	return (uint)(C.QWebEngineScript_WorldId(this.h))
}

func (this *QWebEngineScript) SetWorldId(worldId uint) {
	C.QWebEngineScript_SetWorldId(this.h, (C.uint)(worldId))
}

func (this *QWebEngineScript) RunsOnSubFrames() bool {
	return (bool)(C.QWebEngineScript_RunsOnSubFrames(this.h))
}

func (this *QWebEngineScript) SetRunsOnSubFrames(on bool) {
	C.QWebEngineScript_SetRunsOnSubFrames(this.h, (C.bool)(on))
}

func (this *QWebEngineScript) OperatorEqual(other *QWebEngineScript) bool {
	return (bool)(C.QWebEngineScript_OperatorEqual(this.h, other.cPointer()))
}

func (this *QWebEngineScript) OperatorNotEqual(other *QWebEngineScript) bool {
	return (bool)(C.QWebEngineScript_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QWebEngineScript) Swap(other *QWebEngineScript) {
	C.QWebEngineScript_Swap(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QWebEngineScript) Delete() {
	C.QWebEngineScript_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineScript) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineScript) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
