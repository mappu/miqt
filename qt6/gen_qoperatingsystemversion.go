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
	h          *C.QOperatingSystemVersionBase
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QOperatingSystemVersionBase{h: (*C.QOperatingSystemVersionBase)(h)}
}

// NewQOperatingSystemVersionBase constructs a new QOperatingSystemVersionBase object.
func NewQOperatingSystemVersionBase(osType QOperatingSystemVersionBase__OSType, vmajor int) *QOperatingSystemVersionBase {
	var outptr_QOperatingSystemVersionBase *C.QOperatingSystemVersionBase = nil

	C.QOperatingSystemVersionBase_new((C.int)(osType), (C.int)(vmajor), &outptr_QOperatingSystemVersionBase)
	ret := newQOperatingSystemVersionBase(outptr_QOperatingSystemVersionBase)
	ret.isSubclass = true
	return ret
}

// NewQOperatingSystemVersionBase2 constructs a new QOperatingSystemVersionBase object.
func NewQOperatingSystemVersionBase2(param1 *QOperatingSystemVersionBase) *QOperatingSystemVersionBase {
	var outptr_QOperatingSystemVersionBase *C.QOperatingSystemVersionBase = nil

	C.QOperatingSystemVersionBase_new2(param1.cPointer(), &outptr_QOperatingSystemVersionBase)
	ret := newQOperatingSystemVersionBase(outptr_QOperatingSystemVersionBase)
	ret.isSubclass = true
	return ret
}

// NewQOperatingSystemVersionBase3 constructs a new QOperatingSystemVersionBase object.
func NewQOperatingSystemVersionBase3(osType QOperatingSystemVersionBase__OSType, vmajor int, vminor int) *QOperatingSystemVersionBase {
	var outptr_QOperatingSystemVersionBase *C.QOperatingSystemVersionBase = nil

	C.QOperatingSystemVersionBase_new3((C.int)(osType), (C.int)(vmajor), (C.int)(vminor), &outptr_QOperatingSystemVersionBase)
	ret := newQOperatingSystemVersionBase(outptr_QOperatingSystemVersionBase)
	ret.isSubclass = true
	return ret
}

// NewQOperatingSystemVersionBase4 constructs a new QOperatingSystemVersionBase object.
func NewQOperatingSystemVersionBase4(osType QOperatingSystemVersionBase__OSType, vmajor int, vminor int, vmicro int) *QOperatingSystemVersionBase {
	var outptr_QOperatingSystemVersionBase *C.QOperatingSystemVersionBase = nil

	C.QOperatingSystemVersionBase_new4((C.int)(osType), (C.int)(vmajor), (C.int)(vminor), (C.int)(vmicro), &outptr_QOperatingSystemVersionBase)
	ret := newQOperatingSystemVersionBase(outptr_QOperatingSystemVersionBase)
	ret.isSubclass = true
	return ret
}

func QOperatingSystemVersionBase_Current() *QOperatingSystemVersionBase {
	_ret := C.QOperatingSystemVersionBase_Current()
	_goptr := newQOperatingSystemVersionBase(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QOperatingSystemVersionBase_Name(osversion QOperatingSystemVersionBase) string {
	var _ms C.struct_miqt_string = C.QOperatingSystemVersionBase_Name(osversion.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QOperatingSystemVersionBase_CurrentType() QOperatingSystemVersionBase__OSType {
	return (QOperatingSystemVersionBase__OSType)(C.QOperatingSystemVersionBase_CurrentType())
}

func (this *QOperatingSystemVersionBase) Version() *QVersionNumber {
	_ret := C.QOperatingSystemVersionBase_Version(this.h)
	_goptr := newQVersionNumber(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QOperatingSystemVersionBase) MajorVersion() int {
	return (int)(C.QOperatingSystemVersionBase_MajorVersion(this.h))
}

func (this *QOperatingSystemVersionBase) MinorVersion() int {
	return (int)(C.QOperatingSystemVersionBase_MinorVersion(this.h))
}

func (this *QOperatingSystemVersionBase) MicroVersion() int {
	return (int)(C.QOperatingSystemVersionBase_MicroVersion(this.h))
}

func (this *QOperatingSystemVersionBase) SegmentCount() int {
	return (int)(C.QOperatingSystemVersionBase_SegmentCount(this.h))
}

func (this *QOperatingSystemVersionBase) Type() QOperatingSystemVersionBase__OSType {
	return (QOperatingSystemVersionBase__OSType)(C.QOperatingSystemVersionBase_Type(this.h))
}

func (this *QOperatingSystemVersionBase) Name2() string {
	var _ms C.struct_miqt_string = C.QOperatingSystemVersionBase_Name2(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QOperatingSystemVersionBase) Delete() {
	C.QOperatingSystemVersionBase_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QOperatingSystemVersionBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QOperatingSystemVersionBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QOperatingSystemVersion struct {
	h          *C.QOperatingSystemVersion
	isSubclass bool
	*QOperatingSystemVersionBase
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
func newQOperatingSystemVersion(h *C.QOperatingSystemVersion, h_QOperatingSystemVersionBase *C.QOperatingSystemVersionBase) *QOperatingSystemVersion {
	if h == nil {
		return nil
	}
	return &QOperatingSystemVersion{h: h,
		QOperatingSystemVersionBase: newQOperatingSystemVersionBase(h_QOperatingSystemVersionBase)}
}

// UnsafeNewQOperatingSystemVersion constructs the type using only unsafe pointers.
func UnsafeNewQOperatingSystemVersion(h unsafe.Pointer, h_QOperatingSystemVersionBase unsafe.Pointer) *QOperatingSystemVersion {
	if h == nil {
		return nil
	}

	return &QOperatingSystemVersion{h: (*C.QOperatingSystemVersion)(h),
		QOperatingSystemVersionBase: UnsafeNewQOperatingSystemVersionBase(h_QOperatingSystemVersionBase)}
}

// NewQOperatingSystemVersion constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion(osversion *QOperatingSystemVersionBase) *QOperatingSystemVersion {
	var outptr_QOperatingSystemVersion *C.QOperatingSystemVersion = nil
	var outptr_QOperatingSystemVersionBase *C.QOperatingSystemVersionBase = nil

	C.QOperatingSystemVersion_new(osversion.cPointer(), &outptr_QOperatingSystemVersion, &outptr_QOperatingSystemVersionBase)
	ret := newQOperatingSystemVersion(outptr_QOperatingSystemVersion, outptr_QOperatingSystemVersionBase)
	ret.isSubclass = true
	return ret
}

// NewQOperatingSystemVersion2 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion2(osType QOperatingSystemVersion__OSType, vmajor int) *QOperatingSystemVersion {
	var outptr_QOperatingSystemVersion *C.QOperatingSystemVersion = nil
	var outptr_QOperatingSystemVersionBase *C.QOperatingSystemVersionBase = nil

	C.QOperatingSystemVersion_new2((C.int)(osType), (C.int)(vmajor), &outptr_QOperatingSystemVersion, &outptr_QOperatingSystemVersionBase)
	ret := newQOperatingSystemVersion(outptr_QOperatingSystemVersion, outptr_QOperatingSystemVersionBase)
	ret.isSubclass = true
	return ret
}

// NewQOperatingSystemVersion3 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion3(param1 *QOperatingSystemVersion) *QOperatingSystemVersion {
	var outptr_QOperatingSystemVersion *C.QOperatingSystemVersion = nil
	var outptr_QOperatingSystemVersionBase *C.QOperatingSystemVersionBase = nil

	C.QOperatingSystemVersion_new3(param1.cPointer(), &outptr_QOperatingSystemVersion, &outptr_QOperatingSystemVersionBase)
	ret := newQOperatingSystemVersion(outptr_QOperatingSystemVersion, outptr_QOperatingSystemVersionBase)
	ret.isSubclass = true
	return ret
}

// NewQOperatingSystemVersion4 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion4(osType QOperatingSystemVersion__OSType, vmajor int, vminor int) *QOperatingSystemVersion {
	var outptr_QOperatingSystemVersion *C.QOperatingSystemVersion = nil
	var outptr_QOperatingSystemVersionBase *C.QOperatingSystemVersionBase = nil

	C.QOperatingSystemVersion_new4((C.int)(osType), (C.int)(vmajor), (C.int)(vminor), &outptr_QOperatingSystemVersion, &outptr_QOperatingSystemVersionBase)
	ret := newQOperatingSystemVersion(outptr_QOperatingSystemVersion, outptr_QOperatingSystemVersionBase)
	ret.isSubclass = true
	return ret
}

// NewQOperatingSystemVersion5 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion5(osType QOperatingSystemVersion__OSType, vmajor int, vminor int, vmicro int) *QOperatingSystemVersion {
	var outptr_QOperatingSystemVersion *C.QOperatingSystemVersion = nil
	var outptr_QOperatingSystemVersionBase *C.QOperatingSystemVersionBase = nil

	C.QOperatingSystemVersion_new5((C.int)(osType), (C.int)(vmajor), (C.int)(vminor), (C.int)(vmicro), &outptr_QOperatingSystemVersion, &outptr_QOperatingSystemVersionBase)
	ret := newQOperatingSystemVersion(outptr_QOperatingSystemVersion, outptr_QOperatingSystemVersionBase)
	ret.isSubclass = true
	return ret
}

func QOperatingSystemVersion_Current() *QOperatingSystemVersion {
	_ret := C.QOperatingSystemVersion_Current()
	_goptr := newQOperatingSystemVersion(_ret, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QOperatingSystemVersion_CurrentType() QOperatingSystemVersion__OSType {
	return (QOperatingSystemVersion__OSType)(C.QOperatingSystemVersion_CurrentType())
}

func (this *QOperatingSystemVersion) Version() *QVersionNumber {
	_ret := C.QOperatingSystemVersion_Version(this.h)
	_goptr := newQVersionNumber(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QOperatingSystemVersion) MajorVersion() int {
	return (int)(C.QOperatingSystemVersion_MajorVersion(this.h))
}

func (this *QOperatingSystemVersion) MinorVersion() int {
	return (int)(C.QOperatingSystemVersion_MinorVersion(this.h))
}

func (this *QOperatingSystemVersion) MicroVersion() int {
	return (int)(C.QOperatingSystemVersion_MicroVersion(this.h))
}

func (this *QOperatingSystemVersion) SegmentCount() int {
	return (int)(C.QOperatingSystemVersion_SegmentCount(this.h))
}

func (this *QOperatingSystemVersion) Type() QOperatingSystemVersion__OSType {
	return (QOperatingSystemVersion__OSType)(C.QOperatingSystemVersion_Type(this.h))
}

func (this *QOperatingSystemVersion) Name() string {
	var _ms C.struct_miqt_string = C.QOperatingSystemVersion_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QOperatingSystemVersion) Delete() {
	C.QOperatingSystemVersion_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QOperatingSystemVersion) GoGC() {
	runtime.SetFinalizer(this, func(this *QOperatingSystemVersion) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
