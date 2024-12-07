package qt6

/*

#include "gen_qtemporaryfile.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTemporaryFile struct {
	h          *C.QTemporaryFile
	isSubclass bool
	*QFile
}

func (this *QTemporaryFile) cPointer() *C.QTemporaryFile {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTemporaryFile) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTemporaryFile constructs the type using only CGO pointers.
func newQTemporaryFile(h *C.QTemporaryFile, h_QFile *C.QFile, h_QFileDevice *C.QFileDevice, h_QIODevice *C.QIODevice, h_QObject *C.QObject, h_QIODeviceBase *C.QIODeviceBase) *QTemporaryFile {
	if h == nil {
		return nil
	}
	return &QTemporaryFile{h: h,
		QFile: newQFile(h_QFile, h_QFileDevice, h_QIODevice, h_QObject, h_QIODeviceBase)}
}

// UnsafeNewQTemporaryFile constructs the type using only unsafe pointers.
func UnsafeNewQTemporaryFile(h unsafe.Pointer, h_QFile unsafe.Pointer, h_QFileDevice unsafe.Pointer, h_QIODevice unsafe.Pointer, h_QObject unsafe.Pointer, h_QIODeviceBase unsafe.Pointer) *QTemporaryFile {
	if h == nil {
		return nil
	}

	return &QTemporaryFile{h: (*C.QTemporaryFile)(h),
		QFile: UnsafeNewQFile(h_QFile, h_QFileDevice, h_QIODevice, h_QObject, h_QIODeviceBase)}
}

// NewQTemporaryFile constructs a new QTemporaryFile object.
func NewQTemporaryFile() *QTemporaryFile {
	var outptr_QTemporaryFile *C.QTemporaryFile = nil
	var outptr_QFile *C.QFile = nil
	var outptr_QFileDevice *C.QFileDevice = nil
	var outptr_QIODevice *C.QIODevice = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QIODeviceBase *C.QIODeviceBase = nil

	C.QTemporaryFile_new(&outptr_QTemporaryFile, &outptr_QFile, &outptr_QFileDevice, &outptr_QIODevice, &outptr_QObject, &outptr_QIODeviceBase)
	ret := newQTemporaryFile(outptr_QTemporaryFile, outptr_QFile, outptr_QFileDevice, outptr_QIODevice, outptr_QObject, outptr_QIODeviceBase)
	ret.isSubclass = true
	return ret
}

// NewQTemporaryFile2 constructs a new QTemporaryFile object.
func NewQTemporaryFile2(templateName string) *QTemporaryFile {
	templateName_ms := C.struct_miqt_string{}
	templateName_ms.data = C.CString(templateName)
	templateName_ms.len = C.size_t(len(templateName))
	defer C.free(unsafe.Pointer(templateName_ms.data))
	var outptr_QTemporaryFile *C.QTemporaryFile = nil
	var outptr_QFile *C.QFile = nil
	var outptr_QFileDevice *C.QFileDevice = nil
	var outptr_QIODevice *C.QIODevice = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QIODeviceBase *C.QIODeviceBase = nil

	C.QTemporaryFile_new2(templateName_ms, &outptr_QTemporaryFile, &outptr_QFile, &outptr_QFileDevice, &outptr_QIODevice, &outptr_QObject, &outptr_QIODeviceBase)
	ret := newQTemporaryFile(outptr_QTemporaryFile, outptr_QFile, outptr_QFileDevice, outptr_QIODevice, outptr_QObject, outptr_QIODeviceBase)
	ret.isSubclass = true
	return ret
}

// NewQTemporaryFile3 constructs a new QTemporaryFile object.
func NewQTemporaryFile3(parent *QObject) *QTemporaryFile {
	var outptr_QTemporaryFile *C.QTemporaryFile = nil
	var outptr_QFile *C.QFile = nil
	var outptr_QFileDevice *C.QFileDevice = nil
	var outptr_QIODevice *C.QIODevice = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QIODeviceBase *C.QIODeviceBase = nil

	C.QTemporaryFile_new3(parent.cPointer(), &outptr_QTemporaryFile, &outptr_QFile, &outptr_QFileDevice, &outptr_QIODevice, &outptr_QObject, &outptr_QIODeviceBase)
	ret := newQTemporaryFile(outptr_QTemporaryFile, outptr_QFile, outptr_QFileDevice, outptr_QIODevice, outptr_QObject, outptr_QIODeviceBase)
	ret.isSubclass = true
	return ret
}

// NewQTemporaryFile4 constructs a new QTemporaryFile object.
func NewQTemporaryFile4(templateName string, parent *QObject) *QTemporaryFile {
	templateName_ms := C.struct_miqt_string{}
	templateName_ms.data = C.CString(templateName)
	templateName_ms.len = C.size_t(len(templateName))
	defer C.free(unsafe.Pointer(templateName_ms.data))
	var outptr_QTemporaryFile *C.QTemporaryFile = nil
	var outptr_QFile *C.QFile = nil
	var outptr_QFileDevice *C.QFileDevice = nil
	var outptr_QIODevice *C.QIODevice = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QIODeviceBase *C.QIODeviceBase = nil

	C.QTemporaryFile_new4(templateName_ms, parent.cPointer(), &outptr_QTemporaryFile, &outptr_QFile, &outptr_QFileDevice, &outptr_QIODevice, &outptr_QObject, &outptr_QIODeviceBase)
	ret := newQTemporaryFile(outptr_QTemporaryFile, outptr_QFile, outptr_QFileDevice, outptr_QIODevice, outptr_QObject, outptr_QIODeviceBase)
	ret.isSubclass = true
	return ret
}

func (this *QTemporaryFile) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QTemporaryFile_MetaObject(this.h)))
}

func (this *QTemporaryFile) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTemporaryFile_Metacast(this.h, param1_Cstring))
}

func QTemporaryFile_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTemporaryFile_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryFile) AutoRemove() bool {
	return (bool)(C.QTemporaryFile_AutoRemove(this.h))
}

func (this *QTemporaryFile) SetAutoRemove(b bool) {
	C.QTemporaryFile_SetAutoRemove(this.h, (C.bool)(b))
}

func (this *QTemporaryFile) Open() bool {
	return (bool)(C.QTemporaryFile_Open(this.h))
}

func (this *QTemporaryFile) FileName() string {
	var _ms C.struct_miqt_string = C.QTemporaryFile_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryFile) FileTemplate() string {
	var _ms C.struct_miqt_string = C.QTemporaryFile_FileTemplate(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryFile) SetFileTemplate(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTemporaryFile_SetFileTemplate(this.h, name_ms)
}

func (this *QTemporaryFile) Rename(newName string) bool {
	newName_ms := C.struct_miqt_string{}
	newName_ms.data = C.CString(newName)
	newName_ms.len = C.size_t(len(newName))
	defer C.free(unsafe.Pointer(newName_ms.data))
	return (bool)(C.QTemporaryFile_Rename(this.h, newName_ms))
}

func QTemporaryFile_CreateNativeFile(fileName string) *QTemporaryFile {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return UnsafeNewQTemporaryFile(unsafe.Pointer(C.QTemporaryFile_CreateNativeFile(fileName_ms)), nil, nil, nil, nil, nil)
}

func QTemporaryFile_CreateNativeFileWithFile(file *QFile) *QTemporaryFile {
	return UnsafeNewQTemporaryFile(unsafe.Pointer(C.QTemporaryFile_CreateNativeFileWithFile(file.cPointer())), nil, nil, nil, nil, nil)
}

func QTemporaryFile_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTemporaryFile_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTemporaryFile_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTemporaryFile_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTemporaryFile) callVirtualBase_FileName() string {

	var _ms C.struct_miqt_string = C.QTemporaryFile_virtualbase_FileName(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QTemporaryFile) OnFileName(slot func(super func() string) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTemporaryFile_override_virtual_FileName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTemporaryFile_FileName
func miqt_exec_callback_QTemporaryFile_FileName(self *C.QTemporaryFile, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_FileName)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QTemporaryFile) callVirtualBase_OpenWithFlags(flags QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QTemporaryFile_virtualbase_OpenWithFlags(unsafe.Pointer(this.h), (C.int)(flags)))

}
func (this *QTemporaryFile) OnOpenWithFlags(slot func(super func(flags QIODeviceBase__OpenModeFlag) bool, flags QIODeviceBase__OpenModeFlag) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTemporaryFile_override_virtual_OpenWithFlags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTemporaryFile_OpenWithFlags
func miqt_exec_callback_QTemporaryFile_OpenWithFlags(self *C.QTemporaryFile, cb C.intptr_t, flags C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(flags QIODeviceBase__OpenModeFlag) bool, flags QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QIODeviceBase__OpenModeFlag)(flags)

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_OpenWithFlags, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_Size() int64 {

	return (int64)(C.QTemporaryFile_virtualbase_Size(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OnSize(slot func(super func() int64) int64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTemporaryFile_override_virtual_Size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTemporaryFile_Size
func miqt_exec_callback_QTemporaryFile_Size(self *C.QTemporaryFile, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_Resize(sz int64) bool {

	return (bool)(C.QTemporaryFile_virtualbase_Resize(unsafe.Pointer(this.h), (C.longlong)(sz)))

}
func (this *QTemporaryFile) OnResize(slot func(super func(sz int64) bool, sz int64) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTemporaryFile_override_virtual_Resize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTemporaryFile_Resize
func miqt_exec_callback_QTemporaryFile_Resize(self *C.QTemporaryFile, cb C.intptr_t, sz C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sz int64) bool, sz int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(sz)

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_Resize, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_Permissions() QFileDevice__Permission {

	return (QFileDevice__Permission)(C.QTemporaryFile_virtualbase_Permissions(unsafe.Pointer(this.h)))

}
func (this *QTemporaryFile) OnPermissions(slot func(super func() QFileDevice__Permission) QFileDevice__Permission) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTemporaryFile_override_virtual_Permissions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTemporaryFile_Permissions
func miqt_exec_callback_QTemporaryFile_Permissions(self *C.QTemporaryFile, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QFileDevice__Permission) QFileDevice__Permission)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_Permissions)

	return (C.int)(virtualReturn)

}

func (this *QTemporaryFile) callVirtualBase_SetPermissions(permissionSpec QFileDevice__Permission) bool {

	return (bool)(C.QTemporaryFile_virtualbase_SetPermissions(unsafe.Pointer(this.h), (C.int)(permissionSpec)))

}
func (this *QTemporaryFile) OnSetPermissions(slot func(super func(permissionSpec QFileDevice__Permission) bool, permissionSpec QFileDevice__Permission) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTemporaryFile_override_virtual_SetPermissions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTemporaryFile_SetPermissions
func miqt_exec_callback_QTemporaryFile_SetPermissions(self *C.QTemporaryFile, cb C.intptr_t, permissionSpec C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(permissionSpec QFileDevice__Permission) bool, permissionSpec QFileDevice__Permission) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QFileDevice__Permission)(permissionSpec)

	virtualReturn := gofunc((&QTemporaryFile{h: self}).callVirtualBase_SetPermissions, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QTemporaryFile) Delete() {
	C.QTemporaryFile_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTemporaryFile) GoGC() {
	runtime.SetFinalizer(this, func(this *QTemporaryFile) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
