package qt6

/*

#include "gen_qabstractfileiconprovider.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAbstractFileIconProvider__IconType int

const (
	QAbstractFileIconProvider__Computer QAbstractFileIconProvider__IconType = 0
	QAbstractFileIconProvider__Desktop  QAbstractFileIconProvider__IconType = 1
	QAbstractFileIconProvider__Trashcan QAbstractFileIconProvider__IconType = 2
	QAbstractFileIconProvider__Network  QAbstractFileIconProvider__IconType = 3
	QAbstractFileIconProvider__Drive    QAbstractFileIconProvider__IconType = 4
	QAbstractFileIconProvider__Folder   QAbstractFileIconProvider__IconType = 5
	QAbstractFileIconProvider__File     QAbstractFileIconProvider__IconType = 6
)

type QAbstractFileIconProvider__Option int

const (
	QAbstractFileIconProvider__DontUseCustomDirectoryIcons QAbstractFileIconProvider__Option = 1
)

type QAbstractFileIconProvider struct {
	h *C.QAbstractFileIconProvider
}

func (this *QAbstractFileIconProvider) cPointer() *C.QAbstractFileIconProvider {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractFileIconProvider) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAbstractFileIconProvider(h *C.QAbstractFileIconProvider) *QAbstractFileIconProvider {
	if h == nil {
		return nil
	}
	return &QAbstractFileIconProvider{h: h}
}

func UnsafeNewQAbstractFileIconProvider(h unsafe.Pointer) *QAbstractFileIconProvider {
	return newQAbstractFileIconProvider((*C.QAbstractFileIconProvider)(h))
}

// NewQAbstractFileIconProvider constructs a new QAbstractFileIconProvider object.
func NewQAbstractFileIconProvider() *QAbstractFileIconProvider {
	ret := C.QAbstractFileIconProvider_new()
	return newQAbstractFileIconProvider(ret)
}

func (this *QAbstractFileIconProvider) Icon(param1 QAbstractFileIconProvider__IconType) *QIcon {
	_ret := C.QAbstractFileIconProvider_Icon(this.h, (C.int)(param1))
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractFileIconProvider) IconWithQFileInfo(param1 *QFileInfo) *QIcon {
	_ret := C.QAbstractFileIconProvider_IconWithQFileInfo(this.h, param1.cPointer())
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractFileIconProvider) Type(param1 *QFileInfo) string {
	var _ms C.struct_miqt_string = C.QAbstractFileIconProvider_Type(this.h, param1.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractFileIconProvider) SetOptions(options QAbstractFileIconProvider__Option) {
	C.QAbstractFileIconProvider_SetOptions(this.h, (C.int)(options))
}

func (this *QAbstractFileIconProvider) Options() QAbstractFileIconProvider__Option {
	return (QAbstractFileIconProvider__Option)(C.QAbstractFileIconProvider_Options(this.h))
}

// Delete this object from C++ memory.
func (this *QAbstractFileIconProvider) Delete() {
	C.QAbstractFileIconProvider_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractFileIconProvider) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractFileIconProvider) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
