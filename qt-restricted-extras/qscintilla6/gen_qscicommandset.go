package qscintilla6

/*

#include "gen_qscicommandset.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"unsafe"
)

type QsciCommandSet struct {
	h          *C.QsciCommandSet
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QsciCommandSet{h: (*C.QsciCommandSet)(h)}
}

func (this *QsciCommandSet) ReadSettings(qs *qt6.QSettings) bool {
	return (bool)(C.QsciCommandSet_ReadSettings(this.h, (*C.QSettings)(qs.UnsafePointer())))
}

func (this *QsciCommandSet) WriteSettings(qs *qt6.QSettings) bool {
	return (bool)(C.QsciCommandSet_WriteSettings(this.h, (*C.QSettings)(qs.UnsafePointer())))
}

func (this *QsciCommandSet) Commands() []*QsciCommand {
	var _ma C.struct_miqt_array = C.QsciCommandSet_Commands(this.h)
	_ret := make([]*QsciCommand, int(_ma.len))
	_outCast := (*[0xffff]*C.QsciCommand)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQsciCommand(_outCast[i])
	}
	return _ret
}

func (this *QsciCommandSet) ClearKeys() {
	C.QsciCommandSet_ClearKeys(this.h)
}

func (this *QsciCommandSet) ClearAlternateKeys() {
	C.QsciCommandSet_ClearAlternateKeys(this.h)
}

func (this *QsciCommandSet) BoundTo(key int) *QsciCommand {
	return newQsciCommand(C.QsciCommandSet_BoundTo(this.h, (C.int)(key)))
}

func (this *QsciCommandSet) Find(command QsciCommand__Command) *QsciCommand {
	return newQsciCommand(C.QsciCommandSet_Find(this.h, (C.int)(command)))
}

func (this *QsciCommandSet) ReadSettings2(qs *qt6.QSettings, prefix string) bool {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	return (bool)(C.QsciCommandSet_ReadSettings2(this.h, (*C.QSettings)(qs.UnsafePointer()), prefix_Cstring))
}

func (this *QsciCommandSet) WriteSettings2(qs *qt6.QSettings, prefix string) bool {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	return (bool)(C.QsciCommandSet_WriteSettings2(this.h, (*C.QSettings)(qs.UnsafePointer()), prefix_Cstring))
}
