package scxml

/*

#include "gen_qscxmlexecutablecontent.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScxmlExecutableContent__ int

const (
	QScxmlExecutableContent__NoContainer   QScxmlExecutableContent__ = -1
	QScxmlExecutableContent__NoString      QScxmlExecutableContent__ = -1
	QScxmlExecutableContent__NoInstruction QScxmlExecutableContent__ = -1
	QScxmlExecutableContent__NoEvaluator   QScxmlExecutableContent__ = -1
)

type QScxmlExecutableContent__EvaluatorInfo struct {
	h *C.QScxmlExecutableContent__EvaluatorInfo
}

func (this *QScxmlExecutableContent__EvaluatorInfo) cPointer() *C.QScxmlExecutableContent__EvaluatorInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlExecutableContent__EvaluatorInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlExecutableContent__EvaluatorInfo constructs the type using only CGO pointers.
func newQScxmlExecutableContent__EvaluatorInfo(h *C.QScxmlExecutableContent__EvaluatorInfo) *QScxmlExecutableContent__EvaluatorInfo {
	if h == nil {
		return nil
	}

	return &QScxmlExecutableContent__EvaluatorInfo{h: h}
}

// UnsafeNewQScxmlExecutableContent__EvaluatorInfo constructs the type using only unsafe pointers.
func UnsafeNewQScxmlExecutableContent__EvaluatorInfo(h unsafe.Pointer) *QScxmlExecutableContent__EvaluatorInfo {
	return newQScxmlExecutableContent__EvaluatorInfo((*C.QScxmlExecutableContent__EvaluatorInfo)(h))
}

func (this *QScxmlExecutableContent__EvaluatorInfo) Expr() int {
	return (int)(C.QScxmlExecutableContent__EvaluatorInfo_expr(this.h))
}

func (this *QScxmlExecutableContent__EvaluatorInfo) SetExpr(expr int) {
	C.QScxmlExecutableContent__EvaluatorInfo_setExpr(this.h, (C.int)(expr))
}

func (this *QScxmlExecutableContent__EvaluatorInfo) Context() int {
	return (int)(C.QScxmlExecutableContent__EvaluatorInfo_context(this.h))
}

func (this *QScxmlExecutableContent__EvaluatorInfo) SetContext(context int) {
	C.QScxmlExecutableContent__EvaluatorInfo_setContext(this.h, (C.int)(context))
}

// Delete this object from C++ memory.
func (this *QScxmlExecutableContent__EvaluatorInfo) Delete() {
	C.QScxmlExecutableContent__EvaluatorInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlExecutableContent__EvaluatorInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlExecutableContent__EvaluatorInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScxmlExecutableContent__AssignmentInfo struct {
	h *C.QScxmlExecutableContent__AssignmentInfo
}

func (this *QScxmlExecutableContent__AssignmentInfo) cPointer() *C.QScxmlExecutableContent__AssignmentInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlExecutableContent__AssignmentInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlExecutableContent__AssignmentInfo constructs the type using only CGO pointers.
func newQScxmlExecutableContent__AssignmentInfo(h *C.QScxmlExecutableContent__AssignmentInfo) *QScxmlExecutableContent__AssignmentInfo {
	if h == nil {
		return nil
	}

	return &QScxmlExecutableContent__AssignmentInfo{h: h}
}

// UnsafeNewQScxmlExecutableContent__AssignmentInfo constructs the type using only unsafe pointers.
func UnsafeNewQScxmlExecutableContent__AssignmentInfo(h unsafe.Pointer) *QScxmlExecutableContent__AssignmentInfo {
	return newQScxmlExecutableContent__AssignmentInfo((*C.QScxmlExecutableContent__AssignmentInfo)(h))
}

func (this *QScxmlExecutableContent__AssignmentInfo) Dest() int {
	return (int)(C.QScxmlExecutableContent__AssignmentInfo_dest(this.h))
}

func (this *QScxmlExecutableContent__AssignmentInfo) SetDest(dest int) {
	C.QScxmlExecutableContent__AssignmentInfo_setDest(this.h, (C.int)(dest))
}

func (this *QScxmlExecutableContent__AssignmentInfo) Expr() int {
	return (int)(C.QScxmlExecutableContent__AssignmentInfo_expr(this.h))
}

func (this *QScxmlExecutableContent__AssignmentInfo) SetExpr(expr int) {
	C.QScxmlExecutableContent__AssignmentInfo_setExpr(this.h, (C.int)(expr))
}

func (this *QScxmlExecutableContent__AssignmentInfo) Context() int {
	return (int)(C.QScxmlExecutableContent__AssignmentInfo_context(this.h))
}

func (this *QScxmlExecutableContent__AssignmentInfo) SetContext(context int) {
	C.QScxmlExecutableContent__AssignmentInfo_setContext(this.h, (C.int)(context))
}

// Delete this object from C++ memory.
func (this *QScxmlExecutableContent__AssignmentInfo) Delete() {
	C.QScxmlExecutableContent__AssignmentInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlExecutableContent__AssignmentInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlExecutableContent__AssignmentInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScxmlExecutableContent__ForeachInfo struct {
	h *C.QScxmlExecutableContent__ForeachInfo
}

func (this *QScxmlExecutableContent__ForeachInfo) cPointer() *C.QScxmlExecutableContent__ForeachInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlExecutableContent__ForeachInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlExecutableContent__ForeachInfo constructs the type using only CGO pointers.
func newQScxmlExecutableContent__ForeachInfo(h *C.QScxmlExecutableContent__ForeachInfo) *QScxmlExecutableContent__ForeachInfo {
	if h == nil {
		return nil
	}

	return &QScxmlExecutableContent__ForeachInfo{h: h}
}

// UnsafeNewQScxmlExecutableContent__ForeachInfo constructs the type using only unsafe pointers.
func UnsafeNewQScxmlExecutableContent__ForeachInfo(h unsafe.Pointer) *QScxmlExecutableContent__ForeachInfo {
	return newQScxmlExecutableContent__ForeachInfo((*C.QScxmlExecutableContent__ForeachInfo)(h))
}

func (this *QScxmlExecutableContent__ForeachInfo) Array() int {
	return (int)(C.QScxmlExecutableContent__ForeachInfo_array(this.h))
}

func (this *QScxmlExecutableContent__ForeachInfo) SetArray(array int) {
	C.QScxmlExecutableContent__ForeachInfo_setArray(this.h, (C.int)(array))
}

func (this *QScxmlExecutableContent__ForeachInfo) Item() int {
	return (int)(C.QScxmlExecutableContent__ForeachInfo_item(this.h))
}

func (this *QScxmlExecutableContent__ForeachInfo) SetItem(item int) {
	C.QScxmlExecutableContent__ForeachInfo_setItem(this.h, (C.int)(item))
}

func (this *QScxmlExecutableContent__ForeachInfo) Index() int {
	return (int)(C.QScxmlExecutableContent__ForeachInfo_index(this.h))
}

func (this *QScxmlExecutableContent__ForeachInfo) SetIndex(index int) {
	C.QScxmlExecutableContent__ForeachInfo_setIndex(this.h, (C.int)(index))
}

func (this *QScxmlExecutableContent__ForeachInfo) Context() int {
	return (int)(C.QScxmlExecutableContent__ForeachInfo_context(this.h))
}

func (this *QScxmlExecutableContent__ForeachInfo) SetContext(context int) {
	C.QScxmlExecutableContent__ForeachInfo_setContext(this.h, (C.int)(context))
}

// Delete this object from C++ memory.
func (this *QScxmlExecutableContent__ForeachInfo) Delete() {
	C.QScxmlExecutableContent__ForeachInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlExecutableContent__ForeachInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlExecutableContent__ForeachInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScxmlExecutableContent__ParameterInfo struct {
	h *C.QScxmlExecutableContent__ParameterInfo
}

func (this *QScxmlExecutableContent__ParameterInfo) cPointer() *C.QScxmlExecutableContent__ParameterInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlExecutableContent__ParameterInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlExecutableContent__ParameterInfo constructs the type using only CGO pointers.
func newQScxmlExecutableContent__ParameterInfo(h *C.QScxmlExecutableContent__ParameterInfo) *QScxmlExecutableContent__ParameterInfo {
	if h == nil {
		return nil
	}

	return &QScxmlExecutableContent__ParameterInfo{h: h}
}

// UnsafeNewQScxmlExecutableContent__ParameterInfo constructs the type using only unsafe pointers.
func UnsafeNewQScxmlExecutableContent__ParameterInfo(h unsafe.Pointer) *QScxmlExecutableContent__ParameterInfo {
	return newQScxmlExecutableContent__ParameterInfo((*C.QScxmlExecutableContent__ParameterInfo)(h))
}

func (this *QScxmlExecutableContent__ParameterInfo) Name() int {
	return (int)(C.QScxmlExecutableContent__ParameterInfo_name(this.h))
}

func (this *QScxmlExecutableContent__ParameterInfo) SetName(name int) {
	C.QScxmlExecutableContent__ParameterInfo_setName(this.h, (C.int)(name))
}

func (this *QScxmlExecutableContent__ParameterInfo) Expr() int {
	return (int)(C.QScxmlExecutableContent__ParameterInfo_expr(this.h))
}

func (this *QScxmlExecutableContent__ParameterInfo) SetExpr(expr int) {
	C.QScxmlExecutableContent__ParameterInfo_setExpr(this.h, (C.int)(expr))
}

func (this *QScxmlExecutableContent__ParameterInfo) Location() int {
	return (int)(C.QScxmlExecutableContent__ParameterInfo_location(this.h))
}

func (this *QScxmlExecutableContent__ParameterInfo) SetLocation(location int) {
	C.QScxmlExecutableContent__ParameterInfo_setLocation(this.h, (C.int)(location))
}

// Delete this object from C++ memory.
func (this *QScxmlExecutableContent__ParameterInfo) Delete() {
	C.QScxmlExecutableContent__ParameterInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlExecutableContent__ParameterInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlExecutableContent__ParameterInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScxmlExecutableContent__InvokeInfo struct {
	h *C.QScxmlExecutableContent__InvokeInfo
}

func (this *QScxmlExecutableContent__InvokeInfo) cPointer() *C.QScxmlExecutableContent__InvokeInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlExecutableContent__InvokeInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlExecutableContent__InvokeInfo constructs the type using only CGO pointers.
func newQScxmlExecutableContent__InvokeInfo(h *C.QScxmlExecutableContent__InvokeInfo) *QScxmlExecutableContent__InvokeInfo {
	if h == nil {
		return nil
	}

	return &QScxmlExecutableContent__InvokeInfo{h: h}
}

// UnsafeNewQScxmlExecutableContent__InvokeInfo constructs the type using only unsafe pointers.
func UnsafeNewQScxmlExecutableContent__InvokeInfo(h unsafe.Pointer) *QScxmlExecutableContent__InvokeInfo {
	return newQScxmlExecutableContent__InvokeInfo((*C.QScxmlExecutableContent__InvokeInfo)(h))
}

func (this *QScxmlExecutableContent__InvokeInfo) Id() int {
	return (int)(C.QScxmlExecutableContent__InvokeInfo_id(this.h))
}

func (this *QScxmlExecutableContent__InvokeInfo) SetId(id int) {
	C.QScxmlExecutableContent__InvokeInfo_setId(this.h, (C.int)(id))
}

func (this *QScxmlExecutableContent__InvokeInfo) Prefix() int {
	return (int)(C.QScxmlExecutableContent__InvokeInfo_prefix(this.h))
}

func (this *QScxmlExecutableContent__InvokeInfo) SetPrefix(prefix int) {
	C.QScxmlExecutableContent__InvokeInfo_setPrefix(this.h, (C.int)(prefix))
}

func (this *QScxmlExecutableContent__InvokeInfo) Location() int {
	return (int)(C.QScxmlExecutableContent__InvokeInfo_location(this.h))
}

func (this *QScxmlExecutableContent__InvokeInfo) SetLocation(location int) {
	C.QScxmlExecutableContent__InvokeInfo_setLocation(this.h, (C.int)(location))
}

func (this *QScxmlExecutableContent__InvokeInfo) Context() int {
	return (int)(C.QScxmlExecutableContent__InvokeInfo_context(this.h))
}

func (this *QScxmlExecutableContent__InvokeInfo) SetContext(context int) {
	C.QScxmlExecutableContent__InvokeInfo_setContext(this.h, (C.int)(context))
}

func (this *QScxmlExecutableContent__InvokeInfo) Expr() int {
	return (int)(C.QScxmlExecutableContent__InvokeInfo_expr(this.h))
}

func (this *QScxmlExecutableContent__InvokeInfo) SetExpr(expr int) {
	C.QScxmlExecutableContent__InvokeInfo_setExpr(this.h, (C.int)(expr))
}

func (this *QScxmlExecutableContent__InvokeInfo) Finalize() int {
	return (int)(C.QScxmlExecutableContent__InvokeInfo_finalize(this.h))
}

func (this *QScxmlExecutableContent__InvokeInfo) SetFinalize(finalize int) {
	C.QScxmlExecutableContent__InvokeInfo_setFinalize(this.h, (C.int)(finalize))
}

func (this *QScxmlExecutableContent__InvokeInfo) Autoforward() bool {
	return (bool)(C.QScxmlExecutableContent__InvokeInfo_autoforward(this.h))
}

func (this *QScxmlExecutableContent__InvokeInfo) SetAutoforward(autoforward bool) {
	C.QScxmlExecutableContent__InvokeInfo_setAutoforward(this.h, (C.bool)(autoforward))
}

// Delete this object from C++ memory.
func (this *QScxmlExecutableContent__InvokeInfo) Delete() {
	C.QScxmlExecutableContent__InvokeInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlExecutableContent__InvokeInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlExecutableContent__InvokeInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
