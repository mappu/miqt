package qt6

/*

#include "gen_qiconengine.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QIconEngine__IconEngineHook int

const (
	QIconEngine__IsNullHook       QIconEngine__IconEngineHook = 3
	QIconEngine__ScaledPixmapHook QIconEngine__IconEngineHook = 4
)

type QIconEngine struct {
	h          *C.QIconEngine
	isSubclass bool
}

func (this *QIconEngine) cPointer() *C.QIconEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QIconEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQIconEngine constructs the type using only CGO pointers.
func newQIconEngine(h *C.QIconEngine) *QIconEngine {
	if h == nil {
		return nil
	}
	return &QIconEngine{h: h}
}

// UnsafeNewQIconEngine constructs the type using only unsafe pointers.
func UnsafeNewQIconEngine(h unsafe.Pointer) *QIconEngine {
	if h == nil {
		return nil
	}

	return &QIconEngine{h: (*C.QIconEngine)(h)}
}

func (this *QIconEngine) Paint(painter *QPainter, rect *QRect, mode QIcon__Mode, state QIcon__State) {
	C.QIconEngine_Paint(this.h, painter.cPointer(), rect.cPointer(), (C.int)(mode), (C.int)(state))
}

func (this *QIconEngine) ActualSize(size *QSize, mode QIcon__Mode, state QIcon__State) *QSize {
	_ret := C.QIconEngine_ActualSize(this.h, size.cPointer(), (C.int)(mode), (C.int)(state))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIconEngine) Pixmap(size *QSize, mode QIcon__Mode, state QIcon__State) *QPixmap {
	_ret := C.QIconEngine_Pixmap(this.h, size.cPointer(), (C.int)(mode), (C.int)(state))
	_goptr := newQPixmap(_ret, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIconEngine) AddPixmap(pixmap *QPixmap, mode QIcon__Mode, state QIcon__State) {
	C.QIconEngine_AddPixmap(this.h, pixmap.cPointer(), (C.int)(mode), (C.int)(state))
}

func (this *QIconEngine) AddFile(fileName string, size *QSize, mode QIcon__Mode, state QIcon__State) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QIconEngine_AddFile(this.h, fileName_ms, size.cPointer(), (C.int)(mode), (C.int)(state))
}

func (this *QIconEngine) Key() string {
	var _ms C.struct_miqt_string = C.QIconEngine_Key(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QIconEngine) Clone() *QIconEngine {
	return UnsafeNewQIconEngine(unsafe.Pointer(C.QIconEngine_Clone(this.h)))
}

func (this *QIconEngine) Read(in *QDataStream) bool {
	return (bool)(C.QIconEngine_Read(this.h, in.cPointer()))
}

func (this *QIconEngine) Write(out *QDataStream) bool {
	return (bool)(C.QIconEngine_Write(this.h, out.cPointer()))
}

func (this *QIconEngine) AvailableSizes(mode QIcon__Mode, state QIcon__State) []QSize {
	var _ma C.struct_miqt_array = C.QIconEngine_AvailableSizes(this.h, (C.int)(mode), (C.int)(state))
	_ret := make([]QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQSize(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QIconEngine) IconName() string {
	var _ms C.struct_miqt_string = C.QIconEngine_IconName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QIconEngine) IsNull() bool {
	return (bool)(C.QIconEngine_IsNull(this.h))
}

func (this *QIconEngine) ScaledPixmap(size *QSize, mode QIcon__Mode, state QIcon__State, scale float64) *QPixmap {
	_ret := C.QIconEngine_ScaledPixmap(this.h, size.cPointer(), (C.int)(mode), (C.int)(state), (C.double)(scale))
	_goptr := newQPixmap(_ret, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIconEngine) VirtualHook(id int, data unsafe.Pointer) {
	C.QIconEngine_VirtualHook(this.h, (C.int)(id), data)
}

// Delete this object from C++ memory.
func (this *QIconEngine) Delete() {
	C.QIconEngine_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QIconEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QIconEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QIconEngine__ScaledPixmapArgument struct {
	h          *C.QIconEngine__ScaledPixmapArgument
	isSubclass bool
}

func (this *QIconEngine__ScaledPixmapArgument) cPointer() *C.QIconEngine__ScaledPixmapArgument {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QIconEngine__ScaledPixmapArgument) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQIconEngine__ScaledPixmapArgument constructs the type using only CGO pointers.
func newQIconEngine__ScaledPixmapArgument(h *C.QIconEngine__ScaledPixmapArgument) *QIconEngine__ScaledPixmapArgument {
	if h == nil {
		return nil
	}
	return &QIconEngine__ScaledPixmapArgument{h: h}
}

// UnsafeNewQIconEngine__ScaledPixmapArgument constructs the type using only unsafe pointers.
func UnsafeNewQIconEngine__ScaledPixmapArgument(h unsafe.Pointer) *QIconEngine__ScaledPixmapArgument {
	if h == nil {
		return nil
	}

	return &QIconEngine__ScaledPixmapArgument{h: (*C.QIconEngine__ScaledPixmapArgument)(h)}
}

// NewQIconEngine__ScaledPixmapArgument constructs a new QIconEngine::ScaledPixmapArgument object.
func NewQIconEngine__ScaledPixmapArgument(param1 *QIconEngine__ScaledPixmapArgument) *QIconEngine__ScaledPixmapArgument {
	var outptr_QIconEngine__ScaledPixmapArgument *C.QIconEngine__ScaledPixmapArgument = nil

	C.QIconEngine__ScaledPixmapArgument_new(param1.cPointer(), &outptr_QIconEngine__ScaledPixmapArgument)
	ret := newQIconEngine__ScaledPixmapArgument(outptr_QIconEngine__ScaledPixmapArgument)
	ret.isSubclass = true
	return ret
}

func (this *QIconEngine__ScaledPixmapArgument) OperatorAssign(param1 *QIconEngine__ScaledPixmapArgument) {
	C.QIconEngine__ScaledPixmapArgument_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QIconEngine__ScaledPixmapArgument) Delete() {
	C.QIconEngine__ScaledPixmapArgument_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QIconEngine__ScaledPixmapArgument) GoGC() {
	runtime.SetFinalizer(this, func(this *QIconEngine__ScaledPixmapArgument) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
