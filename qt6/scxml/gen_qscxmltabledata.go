package scxml

/*

#include "gen_qscxmltabledata.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScxmlTableData struct {
	h *C.QScxmlTableData
}

func (this *QScxmlTableData) cPointer() *C.QScxmlTableData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlTableData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlTableData constructs the type using only CGO pointers.
func newQScxmlTableData(h *C.QScxmlTableData) *QScxmlTableData {
	if h == nil {
		return nil
	}

	return &QScxmlTableData{h: h}
}

// UnsafeNewQScxmlTableData constructs the type using only unsafe pointers.
func UnsafeNewQScxmlTableData(h unsafe.Pointer) *QScxmlTableData {
	return newQScxmlTableData((*C.QScxmlTableData)(h))
}

func (this *QScxmlTableData) String(id int) string {
	var _ms C.struct_miqt_string = C.QScxmlTableData_string(this.h, (C.int)(id))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlTableData) Instructions() *int {
	return (*int)(unsafe.Pointer(C.QScxmlTableData_instructions(this.h)))
}

func (this *QScxmlTableData) EvaluatorInfo(evaluatorId int) *QScxmlExecutableContent__EvaluatorInfo {
	_goptr := newQScxmlExecutableContent__EvaluatorInfo(C.QScxmlTableData_evaluatorInfo(this.h, (C.int)(evaluatorId)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScxmlTableData) AssignmentInfo(assignmentId int) *QScxmlExecutableContent__AssignmentInfo {
	_goptr := newQScxmlExecutableContent__AssignmentInfo(C.QScxmlTableData_assignmentInfo(this.h, (C.int)(assignmentId)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScxmlTableData) ForeachInfo(foreachId int) *QScxmlExecutableContent__ForeachInfo {
	_goptr := newQScxmlExecutableContent__ForeachInfo(C.QScxmlTableData_foreachInfo(this.h, (C.int)(foreachId)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScxmlTableData) DataNames(count *int) *int {
	return (*int)(unsafe.Pointer(C.QScxmlTableData_dataNames(this.h, (*C.int)(unsafe.Pointer(count)))))
}

func (this *QScxmlTableData) InitialSetup() int {
	return (int)(C.QScxmlTableData_initialSetup(this.h))
}

func (this *QScxmlTableData) Name() string {
	var _ms C.struct_miqt_string = C.QScxmlTableData_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlTableData) StateMachineTable() *int {
	return (*int)(unsafe.Pointer(C.QScxmlTableData_stateMachineTable(this.h)))
}

func (this *QScxmlTableData) ServiceFactory(id int) *QScxmlInvokableServiceFactory {
	return newQScxmlInvokableServiceFactory(C.QScxmlTableData_serviceFactory(this.h, (C.int)(id)))
}

func (this *QScxmlTableData) OperatorAssign(param1 *QScxmlTableData) {
	C.QScxmlTableData_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QScxmlTableData) Delete() {
	C.QScxmlTableData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlTableData) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlTableData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
