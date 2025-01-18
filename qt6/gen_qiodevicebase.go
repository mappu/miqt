package qt6

/*

#include "gen_qiodevicebase.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QIODeviceBase__OpenModeFlag int

const (
	QIODeviceBase__NotOpen      QIODeviceBase__OpenModeFlag = 0
	QIODeviceBase__ReadOnly     QIODeviceBase__OpenModeFlag = 1
	QIODeviceBase__WriteOnly    QIODeviceBase__OpenModeFlag = 2
	QIODeviceBase__ReadWrite    QIODeviceBase__OpenModeFlag = 3
	QIODeviceBase__Append       QIODeviceBase__OpenModeFlag = 4
	QIODeviceBase__Truncate     QIODeviceBase__OpenModeFlag = 8
	QIODeviceBase__Text         QIODeviceBase__OpenModeFlag = 16
	QIODeviceBase__Unbuffered   QIODeviceBase__OpenModeFlag = 32
	QIODeviceBase__NewOnly      QIODeviceBase__OpenModeFlag = 64
	QIODeviceBase__ExistingOnly QIODeviceBase__OpenModeFlag = 128
)

type QIODeviceBase struct {
	h *C.QIODeviceBase
}

func (this *QIODeviceBase) cPointer() *C.QIODeviceBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QIODeviceBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQIODeviceBase constructs the type using only CGO pointers.
func newQIODeviceBase(h *C.QIODeviceBase) *QIODeviceBase {
	if h == nil {
		return nil
	}

	return &QIODeviceBase{h: h}
}

// UnsafeNewQIODeviceBase constructs the type using only unsafe pointers.
func UnsafeNewQIODeviceBase(h unsafe.Pointer) *QIODeviceBase {
	return newQIODeviceBase((*C.QIODeviceBase)(h))
}
