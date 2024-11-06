package multimedia

/*

#include "gen_qmediametadata.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QMediaMetaData__Key int

const (
	QMediaMetaData__Title              QMediaMetaData__Key = 0
	QMediaMetaData__Author             QMediaMetaData__Key = 1
	QMediaMetaData__Comment            QMediaMetaData__Key = 2
	QMediaMetaData__Description        QMediaMetaData__Key = 3
	QMediaMetaData__Genre              QMediaMetaData__Key = 4
	QMediaMetaData__Date               QMediaMetaData__Key = 5
	QMediaMetaData__Language           QMediaMetaData__Key = 6
	QMediaMetaData__Publisher          QMediaMetaData__Key = 7
	QMediaMetaData__Copyright          QMediaMetaData__Key = 8
	QMediaMetaData__Url                QMediaMetaData__Key = 9
	QMediaMetaData__Duration           QMediaMetaData__Key = 10
	QMediaMetaData__MediaType          QMediaMetaData__Key = 11
	QMediaMetaData__FileFormat         QMediaMetaData__Key = 12
	QMediaMetaData__AudioBitRate       QMediaMetaData__Key = 13
	QMediaMetaData__AudioCodec         QMediaMetaData__Key = 14
	QMediaMetaData__VideoBitRate       QMediaMetaData__Key = 15
	QMediaMetaData__VideoCodec         QMediaMetaData__Key = 16
	QMediaMetaData__VideoFrameRate     QMediaMetaData__Key = 17
	QMediaMetaData__AlbumTitle         QMediaMetaData__Key = 18
	QMediaMetaData__AlbumArtist        QMediaMetaData__Key = 19
	QMediaMetaData__ContributingArtist QMediaMetaData__Key = 20
	QMediaMetaData__TrackNumber        QMediaMetaData__Key = 21
	QMediaMetaData__Composer           QMediaMetaData__Key = 22
	QMediaMetaData__LeadPerformer      QMediaMetaData__Key = 23
	QMediaMetaData__ThumbnailImage     QMediaMetaData__Key = 24
	QMediaMetaData__CoverArtImage      QMediaMetaData__Key = 25
	QMediaMetaData__Orientation        QMediaMetaData__Key = 26
	QMediaMetaData__Resolution         QMediaMetaData__Key = 27
)

type QMediaMetaData struct {
	h *C.QMediaMetaData
}

func (this *QMediaMetaData) cPointer() *C.QMediaMetaData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaMetaData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMediaMetaData(h *C.QMediaMetaData) *QMediaMetaData {
	if h == nil {
		return nil
	}
	return &QMediaMetaData{h: h}
}

func UnsafeNewQMediaMetaData(h unsafe.Pointer) *QMediaMetaData {
	return newQMediaMetaData((*C.QMediaMetaData)(h))
}

// NewQMediaMetaData constructs a new QMediaMetaData object.
func NewQMediaMetaData(param1 *QMediaMetaData) *QMediaMetaData {
	ret := C.QMediaMetaData_new(param1.cPointer())
	return newQMediaMetaData(ret)
}

// NewQMediaMetaData2 constructs a new QMediaMetaData object.
func NewQMediaMetaData2() *QMediaMetaData {
	ret := C.QMediaMetaData_new2()
	return newQMediaMetaData(ret)
}

func (this *QMediaMetaData) Value(k QMediaMetaData__Key) *qt6.QVariant {
	_ret := C.QMediaMetaData_Value(this.h, (C.int)(k))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaMetaData) Insert(k QMediaMetaData__Key, value *qt6.QVariant) {
	C.QMediaMetaData_Insert(this.h, (C.int)(k), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QMediaMetaData) Remove(k QMediaMetaData__Key) {
	C.QMediaMetaData_Remove(this.h, (C.int)(k))
}

func (this *QMediaMetaData) Keys() []QMediaMetaData__Key {
	var _ma C.struct_miqt_array = C.QMediaMetaData_Keys(this.h)
	_ret := make([]QMediaMetaData__Key, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QMediaMetaData__Key)(_outCast[i])
	}
	return _ret
}

func (this *QMediaMetaData) OperatorSubscript(k QMediaMetaData__Key) *qt6.QVariant {
	return qt6.UnsafeNewQVariant(unsafe.Pointer(C.QMediaMetaData_OperatorSubscript(this.h, (C.int)(k))))
}

func (this *QMediaMetaData) Clear() {
	C.QMediaMetaData_Clear(this.h)
}

func (this *QMediaMetaData) IsEmpty() bool {
	return (bool)(C.QMediaMetaData_IsEmpty(this.h))
}

func (this *QMediaMetaData) StringValue(k QMediaMetaData__Key) string {
	var _ms C.struct_miqt_string = C.QMediaMetaData_StringValue(this.h, (C.int)(k))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaMetaData_MetaDataKeyToString(k QMediaMetaData__Key) string {
	var _ms C.struct_miqt_string = C.QMediaMetaData_MetaDataKeyToString((C.int)(k))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaMetaData) Delete() {
	C.QMediaMetaData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaMetaData) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaMetaData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
