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
	QOperatingSystemVersion__OSType__Unknown QOperatingSystemVersion__OSType = 0
	QOperatingSystemVersion__OSType__Windows QOperatingSystemVersion__OSType = 1
	QOperatingSystemVersion__OSType__MacOS   QOperatingSystemVersion__OSType = 2
	QOperatingSystemVersion__OSType__IOS     QOperatingSystemVersion__OSType = 3
	QOperatingSystemVersion__OSType__TvOS    QOperatingSystemVersion__OSType = 4
	QOperatingSystemVersion__OSType__WatchOS QOperatingSystemVersion__OSType = 5
	QOperatingSystemVersion__OSType__Android QOperatingSystemVersion__OSType = 6
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

func newQOperatingSystemVersion(h *C.QOperatingSystemVersion) *QOperatingSystemVersion {
	if h == nil {
		return nil
	}
	return &QOperatingSystemVersion{h: h}
}

func newQOperatingSystemVersion_U(h unsafe.Pointer) *QOperatingSystemVersion {
	return newQOperatingSystemVersion((*C.QOperatingSystemVersion)(h))
}

// NewQOperatingSystemVersion constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion(osType QOperatingSystemVersion__OSType, vmajor int) *QOperatingSystemVersion {
	ret := C.QOperatingSystemVersion_new((C.uintptr_t)(osType), (C.int)(vmajor))
	return newQOperatingSystemVersion(ret)
}

// NewQOperatingSystemVersion2 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion2(osType QOperatingSystemVersion__OSType, vmajor int, vminor int) *QOperatingSystemVersion {
	ret := C.QOperatingSystemVersion_new2((C.uintptr_t)(osType), (C.int)(vmajor), (C.int)(vminor))
	return newQOperatingSystemVersion(ret)
}

// NewQOperatingSystemVersion3 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion3(osType QOperatingSystemVersion__OSType, vmajor int, vminor int, vmicro int) *QOperatingSystemVersion {
	ret := C.QOperatingSystemVersion_new3((C.uintptr_t)(osType), (C.int)(vmajor), (C.int)(vminor), (C.int)(vmicro))
	return newQOperatingSystemVersion(ret)
}

func QOperatingSystemVersion_Current() *QOperatingSystemVersion {
	ret := C.QOperatingSystemVersion_Current()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQOperatingSystemVersion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QOperatingSystemVersion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QOperatingSystemVersion_CurrentType() QOperatingSystemVersion__OSType {
	ret := C.QOperatingSystemVersion_CurrentType()
	return (QOperatingSystemVersion__OSType)(ret)
}

func (this *QOperatingSystemVersion) MajorVersion() int {
	ret := C.QOperatingSystemVersion_MajorVersion(this.h)
	return (int)(ret)
}

func (this *QOperatingSystemVersion) MinorVersion() int {
	ret := C.QOperatingSystemVersion_MinorVersion(this.h)
	return (int)(ret)
}

func (this *QOperatingSystemVersion) MicroVersion() int {
	ret := C.QOperatingSystemVersion_MicroVersion(this.h)
	return (int)(ret)
}

func (this *QOperatingSystemVersion) SegmentCount() int {
	ret := C.QOperatingSystemVersion_SegmentCount(this.h)
	return (int)(ret)
}

func (this *QOperatingSystemVersion) Type() QOperatingSystemVersion__OSType {
	ret := C.QOperatingSystemVersion_Type(this.h)
	return (QOperatingSystemVersion__OSType)(ret)
}

func (this *QOperatingSystemVersion) Name() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QOperatingSystemVersion_Name(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QOperatingSystemVersion) Delete() {
	C.QOperatingSystemVersion_Delete(this.h)
}
