package qt

/*

#include "gen_qfileiconprovider.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFileIconProvider__IconType int

const (
	QFileIconProvider__IconType__Computer QFileIconProvider__IconType = 0
	QFileIconProvider__IconType__Desktop  QFileIconProvider__IconType = 1
	QFileIconProvider__IconType__Trashcan QFileIconProvider__IconType = 2
	QFileIconProvider__IconType__Network  QFileIconProvider__IconType = 3
	QFileIconProvider__IconType__Drive    QFileIconProvider__IconType = 4
	QFileIconProvider__IconType__Folder   QFileIconProvider__IconType = 5
	QFileIconProvider__IconType__File     QFileIconProvider__IconType = 6
)

type QFileIconProvider__Option int

const (
	QFileIconProvider__Option__DontUseCustomDirectoryIcons QFileIconProvider__Option = 1
)

type QFileIconProvider struct {
	h *C.QFileIconProvider
}

func (this *QFileIconProvider) cPointer() *C.QFileIconProvider {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFileIconProvider(h *C.QFileIconProvider) *QFileIconProvider {
	if h == nil {
		return nil
	}
	return &QFileIconProvider{h: h}
}

func newQFileIconProvider_U(h unsafe.Pointer) *QFileIconProvider {
	return newQFileIconProvider((*C.QFileIconProvider)(h))
}

// NewQFileIconProvider constructs a new QFileIconProvider object.
func NewQFileIconProvider() *QFileIconProvider {
	ret := C.QFileIconProvider_new()
	return newQFileIconProvider(ret)
}

func (this *QFileIconProvider) Icon(typeVal QFileIconProvider__IconType) *QIcon {
	ret := C.QFileIconProvider_Icon(this.h, (C.uintptr_t)(typeVal))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileIconProvider) IconWithInfo(info *QFileInfo) *QIcon {
	ret := C.QFileIconProvider_IconWithInfo(this.h, info.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileIconProvider) Type(info *QFileInfo) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileIconProvider_Type(this.h, info.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileIconProvider) SetOptions(options int) {
	C.QFileIconProvider_SetOptions(this.h, (C.int)(options))
}

func (this *QFileIconProvider) Options() int {
	ret := C.QFileIconProvider_Options(this.h)
	return (int)(ret)
}

func (this *QFileIconProvider) Delete() {
	C.QFileIconProvider_Delete(this.h)
}
