package qt

/*

#include "gen_qoperatingsystemversion.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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

type QOperatingSystemVersion struct {
	h *C.QOperatingSystemVersion
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

	return &QOperatingSystemVersion{h: h}
}

// UnsafeNewQOperatingSystemVersion constructs the type using only unsafe pointers.
func UnsafeNewQOperatingSystemVersion(h unsafe.Pointer) *QOperatingSystemVersion {
	return newQOperatingSystemVersion((*C.QOperatingSystemVersion)(h))
}

// NewQOperatingSystemVersion constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion(osType QOperatingSystemVersion__OSType, vmajor int) *QOperatingSystemVersion {

	return newQOperatingSystemVersion(C.QOperatingSystemVersion_new((C.int)(osType), (C.int)(vmajor)))
}

// NewQOperatingSystemVersion2 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion2(osType QOperatingSystemVersion__OSType, vmajor int, vminor int) *QOperatingSystemVersion {

	return newQOperatingSystemVersion(C.QOperatingSystemVersion_new2((C.int)(osType), (C.int)(vmajor), (C.int)(vminor)))
}

// NewQOperatingSystemVersion3 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion3(osType QOperatingSystemVersion__OSType, vmajor int, vminor int, vmicro int) *QOperatingSystemVersion {

	return newQOperatingSystemVersion(C.QOperatingSystemVersion_new3((C.int)(osType), (C.int)(vmajor), (C.int)(vminor), (C.int)(vmicro)))
}

func QOperatingSystemVersion_Current() *QOperatingSystemVersion {
	_goptr := newQOperatingSystemVersion(C.QOperatingSystemVersion_current())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QOperatingSystemVersion_CurrentType() QOperatingSystemVersion__OSType {
	return (QOperatingSystemVersion__OSType)(C.QOperatingSystemVersion_currentType())
}

func (this *QOperatingSystemVersion) MajorVersion() int {
	return (int)(C.QOperatingSystemVersion_majorVersion(this.h))
}

func (this *QOperatingSystemVersion) MinorVersion() int {
	return (int)(C.QOperatingSystemVersion_minorVersion(this.h))
}

func (this *QOperatingSystemVersion) MicroVersion() int {
	return (int)(C.QOperatingSystemVersion_microVersion(this.h))
}

func (this *QOperatingSystemVersion) SegmentCount() int {
	return (int)(C.QOperatingSystemVersion_segmentCount(this.h))
}

func (this *QOperatingSystemVersion) Type() QOperatingSystemVersion__OSType {
	return (QOperatingSystemVersion__OSType)(C.QOperatingSystemVersion_type(this.h))
}

func (this *QOperatingSystemVersion) Name() string {
	var _ms C.struct_miqt_string = C.QOperatingSystemVersion_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QOperatingSystemVersion) Delete() {
	C.QOperatingSystemVersion_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QOperatingSystemVersion) GoGC() {
	runtime.SetFinalizer(this, func(this *QOperatingSystemVersion) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
