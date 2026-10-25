package qt6

/*

#include "gen_qoperatingsystemversion.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QOperatingSystemVersionBase__OSType int

const (
	QOperatingSystemVersionBase__Unknown QOperatingSystemVersionBase__OSType = 0
	QOperatingSystemVersionBase__Windows QOperatingSystemVersionBase__OSType = 1
	QOperatingSystemVersionBase__MacOS   QOperatingSystemVersionBase__OSType = 2
	QOperatingSystemVersionBase__IOS     QOperatingSystemVersionBase__OSType = 3
	QOperatingSystemVersionBase__TvOS    QOperatingSystemVersionBase__OSType = 4
	QOperatingSystemVersionBase__WatchOS QOperatingSystemVersionBase__OSType = 5
	QOperatingSystemVersionBase__Android QOperatingSystemVersionBase__OSType = 6
)

type QOperatingSystemVersion__OSType int

const (
	QOperatingSystemVersion__Unknown QOperatingSystemVersion__OSType = 0
	QOperatingSystemVersion__Windows QOperatingSystemVersion__OSType = 1
	QOperatingSystemVersion__MacOS   QOperatingSystemVersion__OSType = 2
	QOperatingSystemVersion__IOS     QOperatingSystemVersion__OSType = 3
	QOperatingSystemVersion__TvOS    QOperatingSystemVersion__OSType = 4
	QOperatingSystemVersion__WatchOS QOperatingSystemVersion__OSType = 5
	QOperatingSystemVersion__Android QOperatingSystemVersion__OSType = 6
)

type QOperatingSystemVersionBase struct {
	h  *C.QOperatingSystemVersionBase
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QOperatingSystemVersionBase) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QOperatingSystemVersionBase) cPointer() *C.QOperatingSystemVersionBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QOperatingSystemVersionBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQOperatingSystemVersionBase constructs the type using only CGO pointers.
func newQOperatingSystemVersionBase(h *C.QOperatingSystemVersionBase) *QOperatingSystemVersionBase {
	if h == nil {
		return nil
	}

	return &QOperatingSystemVersionBase{h: h}
}

// UnsafeNewQOperatingSystemVersionBase constructs the type using only unsafe pointers.
func UnsafeNewQOperatingSystemVersionBase(h unsafe.Pointer) *QOperatingSystemVersionBase {
	return newQOperatingSystemVersionBase((*C.QOperatingSystemVersionBase)(h))
}

// NewQOperatingSystemVersionBase constructs a new QOperatingSystemVersionBase object.
func NewQOperatingSystemVersionBase(osType QOperatingSystemVersionBase__OSType, vmajor int) *QOperatingSystemVersionBase {

	return newQOperatingSystemVersionBase(C.QOperatingSystemVersionBase_new((C.int)(osType), (C.int)(vmajor)))
}

// NewQOperatingSystemVersionBase2 constructs a new QOperatingSystemVersionBase object.
func NewQOperatingSystemVersionBase2(param1 *QOperatingSystemVersionBase) *QOperatingSystemVersionBase {
	defer runtime.KeepAlive(param1)

	return newQOperatingSystemVersionBase(C.QOperatingSystemVersionBase_new2(param1.cPointer()))
}

// NewQOperatingSystemVersionBase3 constructs a new QOperatingSystemVersionBase object.
func NewQOperatingSystemVersionBase3(osType QOperatingSystemVersionBase__OSType, vmajor int, vminor int) *QOperatingSystemVersionBase {

	return newQOperatingSystemVersionBase(C.QOperatingSystemVersionBase_new3((C.int)(osType), (C.int)(vmajor), (C.int)(vminor)))
}

// NewQOperatingSystemVersionBase4 constructs a new QOperatingSystemVersionBase object.
func NewQOperatingSystemVersionBase4(osType QOperatingSystemVersionBase__OSType, vmajor int, vminor int, vmicro int) *QOperatingSystemVersionBase {

	return newQOperatingSystemVersionBase(C.QOperatingSystemVersionBase_new4((C.int)(osType), (C.int)(vmajor), (C.int)(vminor), (C.int)(vmicro)))
}

func QOperatingSystemVersionBase_Current() *QOperatingSystemVersionBase {
	_goptr := newQOperatingSystemVersionBase(C.QOperatingSystemVersionBase_current())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QOperatingSystemVersionBase_Name(osversion QOperatingSystemVersionBase) string {
	defer runtime.KeepAlive(osversion)
	var _ms C.struct_miqt_string = C.QOperatingSystemVersionBase_name(osversion.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QOperatingSystemVersionBase_CurrentType() QOperatingSystemVersionBase__OSType {
	return (QOperatingSystemVersionBase__OSType)(C.QOperatingSystemVersionBase_currentType())
}

func (this *QOperatingSystemVersionBase) Version() *QVersionNumber {
	defer runtime.KeepAlive(this)
	_goptr := newQVersionNumber(C.QOperatingSystemVersionBase_version(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QOperatingSystemVersionBase) MajorVersion() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QOperatingSystemVersionBase_majorVersion(this.h))
}

func (this *QOperatingSystemVersionBase) MinorVersion() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QOperatingSystemVersionBase_minorVersion(this.h))
}

func (this *QOperatingSystemVersionBase) MicroVersion() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QOperatingSystemVersionBase_microVersion(this.h))
}

func (this *QOperatingSystemVersionBase) SegmentCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QOperatingSystemVersionBase_segmentCount(this.h))
}

func (this *QOperatingSystemVersionBase) Type() QOperatingSystemVersionBase__OSType {
	defer runtime.KeepAlive(this)
	return (QOperatingSystemVersionBase__OSType)(C.QOperatingSystemVersionBase_type(this.h))
}

func (this *QOperatingSystemVersionBase) Name2() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QOperatingSystemVersionBase_name2(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QOperatingSystemVersionBase) Delete() {
	C.QOperatingSystemVersionBase_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QOperatingSystemVersionBase) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QOperatingSystemVersionBase_delete((*C.QOperatingSystemVersionBase)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QOperatingSystemVersion struct {
	h  *C.QOperatingSystemVersion
	gc *[1]unsafe.Pointer
	*QOperatingSystemVersionBase
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QOperatingSystemVersion) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QOperatingSystemVersionBase.miqtSetGC(gc)
}

func (this *QOperatingSystemVersion) cPointer() *C.QOperatingSystemVersion {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QOperatingSystemVersion) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQOperatingSystemVersion constructs the type using only CGO pointers.
func newQOperatingSystemVersion(h *C.QOperatingSystemVersion) *QOperatingSystemVersion {
	if h == nil {
		return nil
	}
	var outptr_QOperatingSystemVersionBase *C.QOperatingSystemVersionBase = nil
	C.QOperatingSystemVersion_virtbase(h, &outptr_QOperatingSystemVersionBase)

	return &QOperatingSystemVersion{h: h,
		QOperatingSystemVersionBase: newQOperatingSystemVersionBase(outptr_QOperatingSystemVersionBase)}
}

// UnsafeNewQOperatingSystemVersion constructs the type using only unsafe pointers.
func UnsafeNewQOperatingSystemVersion(h unsafe.Pointer) *QOperatingSystemVersion {
	return newQOperatingSystemVersion((*C.QOperatingSystemVersion)(h))
}

// NewQOperatingSystemVersion constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion(osversion *QOperatingSystemVersionBase) *QOperatingSystemVersion {
	defer runtime.KeepAlive(osversion)

	return newQOperatingSystemVersion(C.QOperatingSystemVersion_new(osversion.cPointer()))
}

// NewQOperatingSystemVersion2 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion2(osType QOperatingSystemVersion__OSType, vmajor int) *QOperatingSystemVersion {

	return newQOperatingSystemVersion(C.QOperatingSystemVersion_new2((C.int)(osType), (C.int)(vmajor)))
}

// NewQOperatingSystemVersion3 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion3(param1 *QOperatingSystemVersion) *QOperatingSystemVersion {
	defer runtime.KeepAlive(param1)

	return newQOperatingSystemVersion(C.QOperatingSystemVersion_new3(param1.cPointer()))
}

// NewQOperatingSystemVersion4 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion4(osType QOperatingSystemVersion__OSType, vmajor int, vminor int) *QOperatingSystemVersion {

	return newQOperatingSystemVersion(C.QOperatingSystemVersion_new4((C.int)(osType), (C.int)(vmajor), (C.int)(vminor)))
}

// NewQOperatingSystemVersion5 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion5(osType QOperatingSystemVersion__OSType, vmajor int, vminor int, vmicro int) *QOperatingSystemVersion {

	return newQOperatingSystemVersion(C.QOperatingSystemVersion_new5((C.int)(osType), (C.int)(vmajor), (C.int)(vminor), (C.int)(vmicro)))
}

func QOperatingSystemVersion_Current() *QOperatingSystemVersion {
	_goptr := newQOperatingSystemVersion(C.QOperatingSystemVersion_current())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QOperatingSystemVersion_CurrentType() QOperatingSystemVersion__OSType {
	return (QOperatingSystemVersion__OSType)(C.QOperatingSystemVersion_currentType())
}

func (this *QOperatingSystemVersion) Version() *QVersionNumber {
	defer runtime.KeepAlive(this)
	_goptr := newQVersionNumber(C.QOperatingSystemVersion_version(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QOperatingSystemVersion) MajorVersion() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QOperatingSystemVersion_majorVersion(this.h))
}

func (this *QOperatingSystemVersion) MinorVersion() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QOperatingSystemVersion_minorVersion(this.h))
}

func (this *QOperatingSystemVersion) MicroVersion() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QOperatingSystemVersion_microVersion(this.h))
}

func (this *QOperatingSystemVersion) SegmentCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QOperatingSystemVersion_segmentCount(this.h))
}

func (this *QOperatingSystemVersion) Type() QOperatingSystemVersion__OSType {
	defer runtime.KeepAlive(this)
	return (QOperatingSystemVersion__OSType)(C.QOperatingSystemVersion_type(this.h))
}

func (this *QOperatingSystemVersion) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QOperatingSystemVersion_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QOperatingSystemVersion) Delete() {
	C.QOperatingSystemVersion_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QOperatingSystemVersion) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QOperatingSystemVersion_delete((*C.QOperatingSystemVersion)(gc[0]))
	})
	this.miqtSetGC(gc)
}
