package qscintilla6

/*

#include "gen_qscicommandset.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciCommandSet struct {
	h  *C.QsciCommandSet
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QsciCommandSet) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QsciCommandSet) cPointer() *C.QsciCommandSet {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciCommandSet) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciCommandSet constructs the type using only CGO pointers.
func newQsciCommandSet(h *C.QsciCommandSet) *QsciCommandSet {
	if h == nil {
		return nil
	}

	return &QsciCommandSet{h: h}
}

// UnsafeNewQsciCommandSet constructs the type using only unsafe pointers.
func UnsafeNewQsciCommandSet(h unsafe.Pointer) *QsciCommandSet {
	return newQsciCommandSet((*C.QsciCommandSet)(h))
}

func (this *QsciCommandSet) ReadSettings(qs *qt6.QSettings) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QsciCommandSet_readSettings(this.h, (*C.QSettings)(qs.UnsafePointer())))
}

func (this *QsciCommandSet) WriteSettings(qs *qt6.QSettings) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QsciCommandSet_writeSettings(this.h, (*C.QSettings)(qs.UnsafePointer())))
}

func (this *QsciCommandSet) Commands() []*QsciCommand {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QsciCommandSet_commands(this.h)
	_ret := make([]*QsciCommand, int(_ma.len))
	_outCast := unsafe.Slice((**C.QsciCommand)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQsciCommand(_outCast[i])
	}
	return _ret
}

func (this *QsciCommandSet) ClearKeys() {
	defer runtime.KeepAlive(this)
	C.QsciCommandSet_clearKeys(this.h)
}

func (this *QsciCommandSet) ClearAlternateKeys() {
	defer runtime.KeepAlive(this)
	C.QsciCommandSet_clearAlternateKeys(this.h)
}

func (this *QsciCommandSet) BoundTo(key int) *QsciCommand {
	defer runtime.KeepAlive(this)
	return newQsciCommand(C.QsciCommandSet_boundTo(this.h, (C.int)(key)))
}

func (this *QsciCommandSet) Find(command QsciCommand__Command) *QsciCommand {
	defer runtime.KeepAlive(this)
	return newQsciCommand(C.QsciCommandSet_find(this.h, (C.int)(command)))
}

func (this *QsciCommandSet) ReadSettings2(qs *qt6.QSettings, prefix string) bool {
	defer runtime.KeepAlive(this)
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	return (bool)(C.QsciCommandSet_readSettings2(this.h, (*C.QSettings)(qs.UnsafePointer()), prefix_Cstring))
}

func (this *QsciCommandSet) WriteSettings2(qs *qt6.QSettings, prefix string) bool {
	defer runtime.KeepAlive(this)
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	return (bool)(C.QsciCommandSet_writeSettings2(this.h, (*C.QSettings)(qs.UnsafePointer()), prefix_Cstring))
}
