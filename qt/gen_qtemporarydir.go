package qt

/*

#include "gen_qtemporarydir.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QTemporaryDir struct {
	h *C.QTemporaryDir
}

func (this *QTemporaryDir) cPointer() *C.QTemporaryDir {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTemporaryDir(h *C.QTemporaryDir) *QTemporaryDir {
	if h == nil {
		return nil
	}
	return &QTemporaryDir{h: h}
}

func newQTemporaryDir_U(h unsafe.Pointer) *QTemporaryDir {
	return newQTemporaryDir((*C.QTemporaryDir)(h))
}

// NewQTemporaryDir constructs a new QTemporaryDir object.
func NewQTemporaryDir() *QTemporaryDir {
	ret := C.QTemporaryDir_new()
	return newQTemporaryDir(ret)
}

// NewQTemporaryDir2 constructs a new QTemporaryDir object.
func NewQTemporaryDir2(templateName string) *QTemporaryDir {
	templateName_Cstring := C.CString(templateName)
	defer C.free(unsafe.Pointer(templateName_Cstring))
	ret := C.QTemporaryDir_new2(templateName_Cstring, C.size_t(len(templateName)))
	return newQTemporaryDir(ret)
}

func (this *QTemporaryDir) IsValid() bool {
	ret := C.QTemporaryDir_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTemporaryDir) ErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTemporaryDir_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTemporaryDir) AutoRemove() bool {
	ret := C.QTemporaryDir_AutoRemove(this.h)
	return (bool)(ret)
}

func (this *QTemporaryDir) SetAutoRemove(b bool) {
	C.QTemporaryDir_SetAutoRemove(this.h, (C.bool)(b))
}

func (this *QTemporaryDir) Remove() bool {
	ret := C.QTemporaryDir_Remove(this.h)
	return (bool)(ret)
}

func (this *QTemporaryDir) Path() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTemporaryDir_Path(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTemporaryDir) FilePath(fileName string) string {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTemporaryDir_FilePath(this.h, fileName_Cstring, C.size_t(len(fileName)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTemporaryDir) Delete() {
	C.QTemporaryDir_Delete(this.h)
}
