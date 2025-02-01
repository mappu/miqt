package script

/*

#include "gen_qscriptcontextinfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScriptContextInfo__FunctionType int

const (
	QScriptContextInfo__ScriptFunction     QScriptContextInfo__FunctionType = 0
	QScriptContextInfo__QtFunction         QScriptContextInfo__FunctionType = 1
	QScriptContextInfo__QtPropertyFunction QScriptContextInfo__FunctionType = 2
	QScriptContextInfo__NativeFunction     QScriptContextInfo__FunctionType = 3
)

type QScriptContextInfo struct {
	h *C.QScriptContextInfo
}

func (this *QScriptContextInfo) cPointer() *C.QScriptContextInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScriptContextInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScriptContextInfo constructs the type using only CGO pointers.
func newQScriptContextInfo(h *C.QScriptContextInfo) *QScriptContextInfo {
	if h == nil {
		return nil
	}

	return &QScriptContextInfo{h: h}
}

// UnsafeNewQScriptContextInfo constructs the type using only unsafe pointers.
func UnsafeNewQScriptContextInfo(h unsafe.Pointer) *QScriptContextInfo {
	return newQScriptContextInfo((*C.QScriptContextInfo)(h))
}

// NewQScriptContextInfo constructs a new QScriptContextInfo object.
func NewQScriptContextInfo(context *QScriptContext) *QScriptContextInfo {

	return newQScriptContextInfo(C.QScriptContextInfo_new(context.cPointer()))
}

// NewQScriptContextInfo2 constructs a new QScriptContextInfo object.
func NewQScriptContextInfo2(other *QScriptContextInfo) *QScriptContextInfo {

	return newQScriptContextInfo(C.QScriptContextInfo_new2(other.cPointer()))
}

// NewQScriptContextInfo3 constructs a new QScriptContextInfo object.
func NewQScriptContextInfo3() *QScriptContextInfo {

	return newQScriptContextInfo(C.QScriptContextInfo_new3())
}

func (this *QScriptContextInfo) OperatorAssign(other *QScriptContextInfo) {
	C.QScriptContextInfo_operatorAssign(this.h, other.cPointer())
}

func (this *QScriptContextInfo) IsNull() bool {
	return (bool)(C.QScriptContextInfo_isNull(this.h))
}

func (this *QScriptContextInfo) ScriptId() int64 {
	return (int64)(C.QScriptContextInfo_scriptId(this.h))
}

func (this *QScriptContextInfo) FileName() string {
	var _ms C.struct_miqt_string = C.QScriptContextInfo_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScriptContextInfo) LineNumber() int {
	return (int)(C.QScriptContextInfo_lineNumber(this.h))
}

func (this *QScriptContextInfo) ColumnNumber() int {
	return (int)(C.QScriptContextInfo_columnNumber(this.h))
}

func (this *QScriptContextInfo) FunctionName() string {
	var _ms C.struct_miqt_string = C.QScriptContextInfo_functionName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScriptContextInfo) FunctionType() QScriptContextInfo__FunctionType {
	return (QScriptContextInfo__FunctionType)(C.QScriptContextInfo_functionType(this.h))
}

func (this *QScriptContextInfo) FunctionParameterNames() []string {
	var _ma C.struct_miqt_array = C.QScriptContextInfo_functionParameterNames(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QScriptContextInfo) FunctionStartLineNumber() int {
	return (int)(C.QScriptContextInfo_functionStartLineNumber(this.h))
}

func (this *QScriptContextInfo) FunctionEndLineNumber() int {
	return (int)(C.QScriptContextInfo_functionEndLineNumber(this.h))
}

func (this *QScriptContextInfo) FunctionMetaIndex() int {
	return (int)(C.QScriptContextInfo_functionMetaIndex(this.h))
}

func (this *QScriptContextInfo) OperatorEqual(other *QScriptContextInfo) bool {
	return (bool)(C.QScriptContextInfo_operatorEqual(this.h, other.cPointer()))
}

func (this *QScriptContextInfo) OperatorNotEqual(other *QScriptContextInfo) bool {
	return (bool)(C.QScriptContextInfo_operatorNotEqual(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QScriptContextInfo) Delete() {
	C.QScriptContextInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScriptContextInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QScriptContextInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
