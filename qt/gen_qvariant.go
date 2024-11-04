package qt

/*

#include "gen_qvariant.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QVariant__Type int

const (
	QVariant__Invalid              QVariant__Type = 0
	QVariant__Bool                 QVariant__Type = 1
	QVariant__Int                  QVariant__Type = 2
	QVariant__UInt                 QVariant__Type = 3
	QVariant__LongLong             QVariant__Type = 4
	QVariant__ULongLong            QVariant__Type = 5
	QVariant__Double               QVariant__Type = 6
	QVariant__Char                 QVariant__Type = 7
	QVariant__Map                  QVariant__Type = 8
	QVariant__List                 QVariant__Type = 9
	QVariant__String               QVariant__Type = 10
	QVariant__StringList           QVariant__Type = 11
	QVariant__ByteArray            QVariant__Type = 12
	QVariant__BitArray             QVariant__Type = 13
	QVariant__Date                 QVariant__Type = 14
	QVariant__Time                 QVariant__Type = 15
	QVariant__DateTime             QVariant__Type = 16
	QVariant__Url                  QVariant__Type = 17
	QVariant__Locale               QVariant__Type = 18
	QVariant__Rect                 QVariant__Type = 19
	QVariant__RectF                QVariant__Type = 20
	QVariant__Size                 QVariant__Type = 21
	QVariant__SizeF                QVariant__Type = 22
	QVariant__Line                 QVariant__Type = 23
	QVariant__LineF                QVariant__Type = 24
	QVariant__Point                QVariant__Type = 25
	QVariant__PointF               QVariant__Type = 26
	QVariant__RegExp               QVariant__Type = 27
	QVariant__RegularExpression    QVariant__Type = 44
	QVariant__Hash                 QVariant__Type = 28
	QVariant__EasingCurve          QVariant__Type = 29
	QVariant__Uuid                 QVariant__Type = 30
	QVariant__ModelIndex           QVariant__Type = 42
	QVariant__PersistentModelIndex QVariant__Type = 50
	QVariant__LastCoreType         QVariant__Type = 55
	QVariant__Font                 QVariant__Type = 64
	QVariant__Pixmap               QVariant__Type = 65
	QVariant__Brush                QVariant__Type = 66
	QVariant__Color                QVariant__Type = 67
	QVariant__Palette              QVariant__Type = 68
	QVariant__Image                QVariant__Type = 70
	QVariant__Polygon              QVariant__Type = 71
	QVariant__Region               QVariant__Type = 72
	QVariant__Bitmap               QVariant__Type = 73
	QVariant__Cursor               QVariant__Type = 74
	QVariant__KeySequence          QVariant__Type = 75
	QVariant__Pen                  QVariant__Type = 76
	QVariant__TextLength           QVariant__Type = 77
	QVariant__TextFormat           QVariant__Type = 78
	QVariant__Matrix               QVariant__Type = 79
	QVariant__Transform            QVariant__Type = 80
	QVariant__Matrix4x4            QVariant__Type = 81
	QVariant__Vector2D             QVariant__Type = 82
	QVariant__Vector3D             QVariant__Type = 83
	QVariant__Vector4D             QVariant__Type = 84
	QVariant__Quaternion           QVariant__Type = 85
	QVariant__PolygonF             QVariant__Type = 86
	QVariant__Icon                 QVariant__Type = 69
	QVariant__LastGuiType          QVariant__Type = 87
	QVariant__SizePolicy           QVariant__Type = 121
	QVariant__UserType             QVariant__Type = 1024
	QVariant__LastType             QVariant__Type = 4294967295
)

type QVariant struct {
	h *C.QVariant
}

func (this *QVariant) cPointer() *C.QVariant {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVariant) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQVariant(h *C.QVariant) *QVariant {
	if h == nil {
		return nil
	}
	return &QVariant{h: h}
}

func UnsafeNewQVariant(h unsafe.Pointer) *QVariant {
	return newQVariant((*C.QVariant)(h))
}

// NewQVariant constructs a new QVariant object.
func NewQVariant() *QVariant {
	ret := C.QVariant_new()
	return newQVariant(ret)
}

// NewQVariant2 constructs a new QVariant object.
func NewQVariant2(typeVal QVariant__Type) *QVariant {
	ret := C.QVariant_new2((C.int)(typeVal))
	return newQVariant(ret)
}

// NewQVariant3 constructs a new QVariant object.
func NewQVariant3(typeId int, copyVal unsafe.Pointer) *QVariant {
	ret := C.QVariant_new3((C.int)(typeId), copyVal)
	return newQVariant(ret)
}

// NewQVariant4 constructs a new QVariant object.
func NewQVariant4(typeId int, copyVal unsafe.Pointer, flags uint) *QVariant {
	ret := C.QVariant_new4((C.int)(typeId), copyVal, (C.uint)(flags))
	return newQVariant(ret)
}

// NewQVariant5 constructs a new QVariant object.
func NewQVariant5(other *QVariant) *QVariant {
	ret := C.QVariant_new5(other.cPointer())
	return newQVariant(ret)
}

// NewQVariant6 constructs a new QVariant object.
func NewQVariant6(s *QDataStream) *QVariant {
	ret := C.QVariant_new6(s.cPointer())
	return newQVariant(ret)
}

// NewQVariant7 constructs a new QVariant object.
func NewQVariant7(i int) *QVariant {
	ret := C.QVariant_new7((C.int)(i))
	return newQVariant(ret)
}

// NewQVariant8 constructs a new QVariant object.
func NewQVariant8(ui uint) *QVariant {
	ret := C.QVariant_new8((C.uint)(ui))
	return newQVariant(ret)
}

// NewQVariant9 constructs a new QVariant object.
func NewQVariant9(ll int64) *QVariant {
	ret := C.QVariant_new9((C.longlong)(ll))
	return newQVariant(ret)
}

// NewQVariant10 constructs a new QVariant object.
func NewQVariant10(ull uint64) *QVariant {
	ret := C.QVariant_new10((C.ulonglong)(ull))
	return newQVariant(ret)
}

// NewQVariant11 constructs a new QVariant object.
func NewQVariant11(b bool) *QVariant {
	ret := C.QVariant_new11((C.bool)(b))
	return newQVariant(ret)
}

// NewQVariant12 constructs a new QVariant object.
func NewQVariant12(d float64) *QVariant {
	ret := C.QVariant_new12((C.double)(d))
	return newQVariant(ret)
}

// NewQVariant13 constructs a new QVariant object.
func NewQVariant13(f float32) *QVariant {
	ret := C.QVariant_new13((C.float)(f))
	return newQVariant(ret)
}

// NewQVariant14 constructs a new QVariant object.
func NewQVariant14(str string) *QVariant {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QVariant_new14(str_Cstring)
	return newQVariant(ret)
}

// NewQVariant15 constructs a new QVariant object.
func NewQVariant15(bytearray []byte) *QVariant {
	bytearray_alias := C.struct_miqt_string{}
	bytearray_alias.data = (*C.char)(unsafe.Pointer(&bytearray[0]))
	bytearray_alias.len = C.size_t(len(bytearray))
	ret := C.QVariant_new15(bytearray_alias)
	return newQVariant(ret)
}

// NewQVariant16 constructs a new QVariant object.
func NewQVariant16(bitarray *QBitArray) *QVariant {
	ret := C.QVariant_new16(bitarray.cPointer())
	return newQVariant(ret)
}

// NewQVariant17 constructs a new QVariant object.
func NewQVariant17(stringVal string) *QVariant {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	ret := C.QVariant_new17(stringVal_ms)
	return newQVariant(ret)
}

// NewQVariant18 constructs a new QVariant object.
func NewQVariant18(stringlist []string) *QVariant {
	stringlist_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(stringlist))))
	defer C.free(unsafe.Pointer(stringlist_CArray))
	for i := range stringlist {
		stringlist_i_ms := C.struct_miqt_string{}
		stringlist_i_ms.data = C.CString(stringlist[i])
		stringlist_i_ms.len = C.size_t(len(stringlist[i]))
		defer C.free(unsafe.Pointer(stringlist_i_ms.data))
		stringlist_CArray[i] = stringlist_i_ms
	}
	stringlist_ma := C.struct_miqt_array{len: C.size_t(len(stringlist)), data: unsafe.Pointer(stringlist_CArray)}
	ret := C.QVariant_new18(stringlist_ma)
	return newQVariant(ret)
}

// NewQVariant19 constructs a new QVariant object.
func NewQVariant19(qchar QChar) *QVariant {
	ret := C.QVariant_new19(qchar.cPointer())
	return newQVariant(ret)
}

// NewQVariant20 constructs a new QVariant object.
func NewQVariant20(date *QDate) *QVariant {
	ret := C.QVariant_new20(date.cPointer())
	return newQVariant(ret)
}

// NewQVariant21 constructs a new QVariant object.
func NewQVariant21(time *QTime) *QVariant {
	ret := C.QVariant_new21(time.cPointer())
	return newQVariant(ret)
}

// NewQVariant22 constructs a new QVariant object.
func NewQVariant22(datetime *QDateTime) *QVariant {
	ret := C.QVariant_new22(datetime.cPointer())
	return newQVariant(ret)
}

// NewQVariant23 constructs a new QVariant object.
func NewQVariant23(mapVal map[string]QVariant) *QVariant {
	mapVal_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Keys_CArray))
	mapVal_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Values_CArray))
	mapVal_ctr := 0
	for mapVal_k, mapVal_v := range mapVal {
		mapVal_k_ms := C.struct_miqt_string{}
		mapVal_k_ms.data = C.CString(mapVal_k)
		mapVal_k_ms.len = C.size_t(len(mapVal_k))
		defer C.free(unsafe.Pointer(mapVal_k_ms.data))
		mapVal_Keys_CArray[mapVal_ctr] = mapVal_k_ms
		mapVal_Values_CArray[mapVal_ctr] = mapVal_v.cPointer()
		mapVal_ctr++
	}
	mapVal_mm := C.struct_miqt_map{
		len:    C.size_t(len(mapVal)),
		keys:   unsafe.Pointer(mapVal_Keys_CArray),
		values: unsafe.Pointer(mapVal_Values_CArray),
	}
	ret := C.QVariant_new23(mapVal_mm)
	return newQVariant(ret)
}

// NewQVariant24 constructs a new QVariant object.
func NewQVariant24(hash map[string]QVariant) *QVariant {
	hash_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(hash))))
	defer C.free(unsafe.Pointer(hash_Keys_CArray))
	hash_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(hash))))
	defer C.free(unsafe.Pointer(hash_Values_CArray))
	hash_ctr := 0
	for hash_k, hash_v := range hash {
		hash_k_ms := C.struct_miqt_string{}
		hash_k_ms.data = C.CString(hash_k)
		hash_k_ms.len = C.size_t(len(hash_k))
		defer C.free(unsafe.Pointer(hash_k_ms.data))
		hash_Keys_CArray[hash_ctr] = hash_k_ms
		hash_Values_CArray[hash_ctr] = hash_v.cPointer()
		hash_ctr++
	}
	hash_mm := C.struct_miqt_map{
		len:    C.size_t(len(hash)),
		keys:   unsafe.Pointer(hash_Keys_CArray),
		values: unsafe.Pointer(hash_Values_CArray),
	}
	ret := C.QVariant_new24(hash_mm)
	return newQVariant(ret)
}

// NewQVariant25 constructs a new QVariant object.
func NewQVariant25(size *QSize) *QVariant {
	ret := C.QVariant_new25(size.cPointer())
	return newQVariant(ret)
}

// NewQVariant26 constructs a new QVariant object.
func NewQVariant26(size *QSizeF) *QVariant {
	ret := C.QVariant_new26(size.cPointer())
	return newQVariant(ret)
}

// NewQVariant27 constructs a new QVariant object.
func NewQVariant27(pt *QPoint) *QVariant {
	ret := C.QVariant_new27(pt.cPointer())
	return newQVariant(ret)
}

// NewQVariant28 constructs a new QVariant object.
func NewQVariant28(pt *QPointF) *QVariant {
	ret := C.QVariant_new28(pt.cPointer())
	return newQVariant(ret)
}

// NewQVariant29 constructs a new QVariant object.
func NewQVariant29(line *QLine) *QVariant {
	ret := C.QVariant_new29(line.cPointer())
	return newQVariant(ret)
}

// NewQVariant30 constructs a new QVariant object.
func NewQVariant30(line *QLineF) *QVariant {
	ret := C.QVariant_new30(line.cPointer())
	return newQVariant(ret)
}

// NewQVariant31 constructs a new QVariant object.
func NewQVariant31(rect *QRect) *QVariant {
	ret := C.QVariant_new31(rect.cPointer())
	return newQVariant(ret)
}

// NewQVariant32 constructs a new QVariant object.
func NewQVariant32(rect *QRectF) *QVariant {
	ret := C.QVariant_new32(rect.cPointer())
	return newQVariant(ret)
}

// NewQVariant33 constructs a new QVariant object.
func NewQVariant33(locale *QLocale) *QVariant {
	ret := C.QVariant_new33(locale.cPointer())
	return newQVariant(ret)
}

// NewQVariant34 constructs a new QVariant object.
func NewQVariant34(regExp *QRegExp) *QVariant {
	ret := C.QVariant_new34(regExp.cPointer())
	return newQVariant(ret)
}

// NewQVariant35 constructs a new QVariant object.
func NewQVariant35(re *QRegularExpression) *QVariant {
	ret := C.QVariant_new35(re.cPointer())
	return newQVariant(ret)
}

// NewQVariant36 constructs a new QVariant object.
func NewQVariant36(easing *QEasingCurve) *QVariant {
	ret := C.QVariant_new36(easing.cPointer())
	return newQVariant(ret)
}

// NewQVariant37 constructs a new QVariant object.
func NewQVariant37(uuid *QUuid) *QVariant {
	ret := C.QVariant_new37(uuid.cPointer())
	return newQVariant(ret)
}

// NewQVariant38 constructs a new QVariant object.
func NewQVariant38(url *QUrl) *QVariant {
	ret := C.QVariant_new38(url.cPointer())
	return newQVariant(ret)
}

// NewQVariant39 constructs a new QVariant object.
func NewQVariant39(jsonValue *QJsonValue) *QVariant {
	ret := C.QVariant_new39(jsonValue.cPointer())
	return newQVariant(ret)
}

// NewQVariant40 constructs a new QVariant object.
func NewQVariant40(jsonObject *QJsonObject) *QVariant {
	ret := C.QVariant_new40(jsonObject.cPointer())
	return newQVariant(ret)
}

// NewQVariant41 constructs a new QVariant object.
func NewQVariant41(jsonArray *QJsonArray) *QVariant {
	ret := C.QVariant_new41(jsonArray.cPointer())
	return newQVariant(ret)
}

// NewQVariant42 constructs a new QVariant object.
func NewQVariant42(jsonDocument *QJsonDocument) *QVariant {
	ret := C.QVariant_new42(jsonDocument.cPointer())
	return newQVariant(ret)
}

// NewQVariant43 constructs a new QVariant object.
func NewQVariant43(modelIndex *QModelIndex) *QVariant {
	ret := C.QVariant_new43(modelIndex.cPointer())
	return newQVariant(ret)
}

// NewQVariant44 constructs a new QVariant object.
func NewQVariant44(modelIndex *QPersistentModelIndex) *QVariant {
	ret := C.QVariant_new44(modelIndex.cPointer())
	return newQVariant(ret)
}

func (this *QVariant) OperatorAssign(other *QVariant) {
	C.QVariant_OperatorAssign(this.h, other.cPointer())
}

func (this *QVariant) Swap(other *QVariant) {
	C.QVariant_Swap(this.h, other.cPointer())
}

func (this *QVariant) Type() QVariant__Type {
	return (QVariant__Type)(C.QVariant_Type(this.h))
}

func (this *QVariant) UserType() int {
	return (int)(C.QVariant_UserType(this.h))
}

func (this *QVariant) TypeName() string {
	_ret := C.QVariant_TypeName(this.h)
	return C.GoString(_ret)
}

func (this *QVariant) CanConvert(targetTypeId int) bool {
	return (bool)(C.QVariant_CanConvert(this.h, (C.int)(targetTypeId)))
}

func (this *QVariant) Convert(targetTypeId int) bool {
	return (bool)(C.QVariant_Convert(this.h, (C.int)(targetTypeId)))
}

func (this *QVariant) IsValid() bool {
	return (bool)(C.QVariant_IsValid(this.h))
}

func (this *QVariant) IsNull() bool {
	return (bool)(C.QVariant_IsNull(this.h))
}

func (this *QVariant) Clear() {
	C.QVariant_Clear(this.h)
}

func (this *QVariant) Detach() {
	C.QVariant_Detach(this.h)
}

func (this *QVariant) IsDetached() bool {
	return (bool)(C.QVariant_IsDetached(this.h))
}

func (this *QVariant) ToInt() int {
	return (int)(C.QVariant_ToInt(this.h))
}

func (this *QVariant) ToUInt() uint {
	return (uint)(C.QVariant_ToUInt(this.h))
}

func (this *QVariant) ToLongLong() int64 {
	return (int64)(C.QVariant_ToLongLong(this.h))
}

func (this *QVariant) ToULongLong() uint64 {
	return (uint64)(C.QVariant_ToULongLong(this.h))
}

func (this *QVariant) ToBool() bool {
	return (bool)(C.QVariant_ToBool(this.h))
}

func (this *QVariant) ToDouble() float64 {
	return (float64)(C.QVariant_ToDouble(this.h))
}

func (this *QVariant) ToFloat() float32 {
	return (float32)(C.QVariant_ToFloat(this.h))
}

func (this *QVariant) ToReal() float64 {
	return (float64)(C.QVariant_ToReal(this.h))
}

func (this *QVariant) ToByteArray() []byte {
	var _bytearray C.struct_miqt_string = C.QVariant_ToByteArray(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QVariant) ToBitArray() *QBitArray {
	_ret := C.QVariant_ToBitArray(this.h)
	_goptr := newQBitArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToString() string {
	var _ms C.struct_miqt_string = C.QVariant_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVariant) ToStringList() []string {
	var _ma C.struct_miqt_array = C.QVariant_ToStringList(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QVariant) ToChar() *QChar {
	_ret := C.QVariant_ToChar(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToDate() *QDate {
	_ret := C.QVariant_ToDate(this.h)
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToTime() *QTime {
	_ret := C.QVariant_ToTime(this.h)
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToDateTime() *QDateTime {
	_ret := C.QVariant_ToDateTime(this.h)
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToMap() map[string]QVariant {
	var _mm C.struct_miqt_map = C.QVariant_ToMap(this.h)
	_ret := make(map[string]QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _mapkey_ms C.struct_miqt_string = _Keys[i]
		_mapkey_ret := C.GoStringN(_mapkey_ms.data, C.int(int64(_mapkey_ms.len)))
		C.free(unsafe.Pointer(_mapkey_ms.data))
		_entry_Key := _mapkey_ret
		_mapval_ret := _Values[i]
		_mapval_goptr := newQVariant(_mapval_ret)
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QVariant) ToHash() map[string]QVariant {
	var _mm C.struct_miqt_map = C.QVariant_ToHash(this.h)
	_ret := make(map[string]QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _hashkey_ms C.struct_miqt_string = _Keys[i]
		_hashkey_ret := C.GoStringN(_hashkey_ms.data, C.int(int64(_hashkey_ms.len)))
		C.free(unsafe.Pointer(_hashkey_ms.data))
		_entry_Key := _hashkey_ret
		_hashval_ret := _Values[i]
		_hashval_goptr := newQVariant(_hashval_ret)
		_hashval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_hashval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QVariant) ToPoint() *QPoint {
	_ret := C.QVariant_ToPoint(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToPointF() *QPointF {
	_ret := C.QVariant_ToPointF(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToRect() *QRect {
	_ret := C.QVariant_ToRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToSize() *QSize {
	_ret := C.QVariant_ToSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToSizeF() *QSizeF {
	_ret := C.QVariant_ToSizeF(this.h)
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToLine() *QLine {
	_ret := C.QVariant_ToLine(this.h)
	_goptr := newQLine(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToLineF() *QLineF {
	_ret := C.QVariant_ToLineF(this.h)
	_goptr := newQLineF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToRectF() *QRectF {
	_ret := C.QVariant_ToRectF(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToLocale() *QLocale {
	_ret := C.QVariant_ToLocale(this.h)
	_goptr := newQLocale(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToRegExp() *QRegExp {
	_ret := C.QVariant_ToRegExp(this.h)
	_goptr := newQRegExp(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToRegularExpression() *QRegularExpression {
	_ret := C.QVariant_ToRegularExpression(this.h)
	_goptr := newQRegularExpression(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToEasingCurve() *QEasingCurve {
	_ret := C.QVariant_ToEasingCurve(this.h)
	_goptr := newQEasingCurve(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToUuid() *QUuid {
	_ret := C.QVariant_ToUuid(this.h)
	_goptr := newQUuid(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToUrl() *QUrl {
	_ret := C.QVariant_ToUrl(this.h)
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonValue() *QJsonValue {
	_ret := C.QVariant_ToJsonValue(this.h)
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonObject() *QJsonObject {
	_ret := C.QVariant_ToJsonObject(this.h)
	_goptr := newQJsonObject(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonArray() *QJsonArray {
	_ret := C.QVariant_ToJsonArray(this.h)
	_goptr := newQJsonArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonDocument() *QJsonDocument {
	_ret := C.QVariant_ToJsonDocument(this.h)
	_goptr := newQJsonDocument(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToModelIndex() *QModelIndex {
	_ret := C.QVariant_ToModelIndex(this.h)
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToPersistentModelIndex() *QPersistentModelIndex {
	_ret := C.QVariant_ToPersistentModelIndex(this.h)
	_goptr := newQPersistentModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) Load(ds *QDataStream) {
	C.QVariant_Load(this.h, ds.cPointer())
}

func (this *QVariant) Save(ds *QDataStream) {
	C.QVariant_Save(this.h, ds.cPointer())
}

func QVariant_TypeToName(typeId int) string {
	_ret := C.QVariant_TypeToName((C.int)(typeId))
	return C.GoString(_ret)
}

func QVariant_NameToType(name string) QVariant__Type {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	return (QVariant__Type)(C.QVariant_NameToType(name_Cstring))
}

func (this *QVariant) Data() unsafe.Pointer {
	return (unsafe.Pointer)(C.QVariant_Data(this.h))
}

func (this *QVariant) ConstData() unsafe.Pointer {
	return (unsafe.Pointer)(C.QVariant_ConstData(this.h))
}

func (this *QVariant) Data2() unsafe.Pointer {
	return (unsafe.Pointer)(C.QVariant_Data2(this.h))
}

func (this *QVariant) OperatorEqual(v *QVariant) bool {
	return (bool)(C.QVariant_OperatorEqual(this.h, v.cPointer()))
}

func (this *QVariant) OperatorNotEqual(v *QVariant) bool {
	return (bool)(C.QVariant_OperatorNotEqual(this.h, v.cPointer()))
}

func (this *QVariant) OperatorLesser(v *QVariant) bool {
	return (bool)(C.QVariant_OperatorLesser(this.h, v.cPointer()))
}

func (this *QVariant) OperatorLesserOrEqual(v *QVariant) bool {
	return (bool)(C.QVariant_OperatorLesserOrEqual(this.h, v.cPointer()))
}

func (this *QVariant) OperatorGreater(v *QVariant) bool {
	return (bool)(C.QVariant_OperatorGreater(this.h, v.cPointer()))
}

func (this *QVariant) OperatorGreaterOrEqual(v *QVariant) bool {
	return (bool)(C.QVariant_OperatorGreaterOrEqual(this.h, v.cPointer()))
}

func (this *QVariant) ToInt1(ok *bool) int {
	return (int)(C.QVariant_ToInt1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToUInt1(ok *bool) uint {
	return (uint)(C.QVariant_ToUInt1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToLongLong1(ok *bool) int64 {
	return (int64)(C.QVariant_ToLongLong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToULongLong1(ok *bool) uint64 {
	return (uint64)(C.QVariant_ToULongLong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToDouble1(ok *bool) float64 {
	return (float64)(C.QVariant_ToDouble1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToFloat1(ok *bool) float32 {
	return (float32)(C.QVariant_ToFloat1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToReal1(ok *bool) float64 {
	return (float64)(C.QVariant_ToReal1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

// Delete this object from C++ memory.
func (this *QVariant) Delete() {
	C.QVariant_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVariant) GoGC() {
	runtime.SetFinalizer(this, func(this *QVariant) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QVariantComparisonHelper struct {
	h *C.QVariantComparisonHelper
}

func (this *QVariantComparisonHelper) cPointer() *C.QVariantComparisonHelper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVariantComparisonHelper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQVariantComparisonHelper(h *C.QVariantComparisonHelper) *QVariantComparisonHelper {
	if h == nil {
		return nil
	}
	return &QVariantComparisonHelper{h: h}
}

func UnsafeNewQVariantComparisonHelper(h unsafe.Pointer) *QVariantComparisonHelper {
	return newQVariantComparisonHelper((*C.QVariantComparisonHelper)(h))
}

// NewQVariantComparisonHelper constructs a new QVariantComparisonHelper object.
func NewQVariantComparisonHelper(varVal *QVariant) *QVariantComparisonHelper {
	ret := C.QVariantComparisonHelper_new(varVal.cPointer())
	return newQVariantComparisonHelper(ret)
}

// NewQVariantComparisonHelper2 constructs a new QVariantComparisonHelper object.
func NewQVariantComparisonHelper2(param1 *QVariantComparisonHelper) *QVariantComparisonHelper {
	ret := C.QVariantComparisonHelper_new2(param1.cPointer())
	return newQVariantComparisonHelper(ret)
}

// Delete this object from C++ memory.
func (this *QVariantComparisonHelper) Delete() {
	C.QVariantComparisonHelper_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVariantComparisonHelper) GoGC() {
	runtime.SetFinalizer(this, func(this *QVariantComparisonHelper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QVariant__Private__Data struct {
	h *C.QVariant__Private__Data
}

func (this *QVariant__Private__Data) cPointer() *C.QVariant__Private__Data {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVariant__Private__Data) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQVariant__Private__Data(h *C.QVariant__Private__Data) *QVariant__Private__Data {
	if h == nil {
		return nil
	}
	return &QVariant__Private__Data{h: h}
}

func UnsafeNewQVariant__Private__Data(h unsafe.Pointer) *QVariant__Private__Data {
	return newQVariant__Private__Data((*C.QVariant__Private__Data)(h))
}

// NewQVariant__Private__Data constructs a new QVariant::Private::Data object.
func NewQVariant__Private__Data() *QVariant__Private__Data {
	ret := C.QVariant__Private__Data_new()
	return newQVariant__Private__Data(ret)
}

// NewQVariant__Private__Data2 constructs a new QVariant::Private::Data object.
func NewQVariant__Private__Data2(param1 *QVariant__Private__Data) *QVariant__Private__Data {
	ret := C.QVariant__Private__Data_new2(param1.cPointer())
	return newQVariant__Private__Data(ret)
}

func (this *QVariant__Private__Data) OperatorAssign(param1 *QVariant__Private__Data) {
	C.QVariant__Private__Data_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QVariant__Private__Data) Delete() {
	C.QVariant__Private__Data_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVariant__Private__Data) GoGC() {
	runtime.SetFinalizer(this, func(this *QVariant__Private__Data) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QVariant__Handler struct {
	h *C.QVariant__Handler
}

func (this *QVariant__Handler) cPointer() *C.QVariant__Handler {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVariant__Handler) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQVariant__Handler(h *C.QVariant__Handler) *QVariant__Handler {
	if h == nil {
		return nil
	}
	return &QVariant__Handler{h: h}
}

func UnsafeNewQVariant__Handler(h unsafe.Pointer) *QVariant__Handler {
	return newQVariant__Handler((*C.QVariant__Handler)(h))
}

// Delete this object from C++ memory.
func (this *QVariant__Handler) Delete() {
	C.QVariant__Handler_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVariant__Handler) GoGC() {
	runtime.SetFinalizer(this, func(this *QVariant__Handler) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QSequentialIterable__const_iterator struct {
	h *C.QSequentialIterable__const_iterator
}

func (this *QSequentialIterable__const_iterator) cPointer() *C.QSequentialIterable__const_iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSequentialIterable__const_iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSequentialIterable__const_iterator(h *C.QSequentialIterable__const_iterator) *QSequentialIterable__const_iterator {
	if h == nil {
		return nil
	}
	return &QSequentialIterable__const_iterator{h: h}
}

func UnsafeNewQSequentialIterable__const_iterator(h unsafe.Pointer) *QSequentialIterable__const_iterator {
	return newQSequentialIterable__const_iterator((*C.QSequentialIterable__const_iterator)(h))
}

// NewQSequentialIterable__const_iterator constructs a new QSequentialIterable::const_iterator object.
func NewQSequentialIterable__const_iterator(other *QSequentialIterable__const_iterator) *QSequentialIterable__const_iterator {
	ret := C.QSequentialIterable__const_iterator_new(other.cPointer())
	return newQSequentialIterable__const_iterator(ret)
}

func (this *QSequentialIterable__const_iterator) OperatorAssign(other *QSequentialIterable__const_iterator) {
	C.QSequentialIterable__const_iterator_OperatorAssign(this.h, other.cPointer())
}

func (this *QSequentialIterable__const_iterator) OperatorMultiply() *QVariant {
	_ret := C.QSequentialIterable__const_iterator_OperatorMultiply(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSequentialIterable__const_iterator) OperatorEqual(o *QSequentialIterable__const_iterator) bool {
	return (bool)(C.QSequentialIterable__const_iterator_OperatorEqual(this.h, o.cPointer()))
}

func (this *QSequentialIterable__const_iterator) OperatorNotEqual(o *QSequentialIterable__const_iterator) bool {
	return (bool)(C.QSequentialIterable__const_iterator_OperatorNotEqual(this.h, o.cPointer()))
}

func (this *QSequentialIterable__const_iterator) OperatorPlusPlus() *QSequentialIterable__const_iterator {
	return UnsafeNewQSequentialIterable__const_iterator(unsafe.Pointer(C.QSequentialIterable__const_iterator_OperatorPlusPlus(this.h)))
}

func (this *QSequentialIterable__const_iterator) OperatorPlusPlusWithInt(param1 int) *QSequentialIterable__const_iterator {
	_ret := C.QSequentialIterable__const_iterator_OperatorPlusPlusWithInt(this.h, (C.int)(param1))
	_goptr := newQSequentialIterable__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSequentialIterable__const_iterator) OperatorMinusMinus() *QSequentialIterable__const_iterator {
	return UnsafeNewQSequentialIterable__const_iterator(unsafe.Pointer(C.QSequentialIterable__const_iterator_OperatorMinusMinus(this.h)))
}

func (this *QSequentialIterable__const_iterator) OperatorMinusMinusWithInt(param1 int) *QSequentialIterable__const_iterator {
	_ret := C.QSequentialIterable__const_iterator_OperatorMinusMinusWithInt(this.h, (C.int)(param1))
	_goptr := newQSequentialIterable__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSequentialIterable__const_iterator) OperatorPlusAssign(j int) *QSequentialIterable__const_iterator {
	return UnsafeNewQSequentialIterable__const_iterator(unsafe.Pointer(C.QSequentialIterable__const_iterator_OperatorPlusAssign(this.h, (C.int)(j))))
}

func (this *QSequentialIterable__const_iterator) OperatorMinusAssign(j int) *QSequentialIterable__const_iterator {
	return UnsafeNewQSequentialIterable__const_iterator(unsafe.Pointer(C.QSequentialIterable__const_iterator_OperatorMinusAssign(this.h, (C.int)(j))))
}

func (this *QSequentialIterable__const_iterator) OperatorPlus(j int) *QSequentialIterable__const_iterator {
	_ret := C.QSequentialIterable__const_iterator_OperatorPlus(this.h, (C.int)(j))
	_goptr := newQSequentialIterable__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSequentialIterable__const_iterator) OperatorMinus(j int) *QSequentialIterable__const_iterator {
	_ret := C.QSequentialIterable__const_iterator_OperatorMinus(this.h, (C.int)(j))
	_goptr := newQSequentialIterable__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QSequentialIterable__const_iterator) Delete() {
	C.QSequentialIterable__const_iterator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSequentialIterable__const_iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QSequentialIterable__const_iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAssociativeIterable__const_iterator struct {
	h *C.QAssociativeIterable__const_iterator
}

func (this *QAssociativeIterable__const_iterator) cPointer() *C.QAssociativeIterable__const_iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAssociativeIterable__const_iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAssociativeIterable__const_iterator(h *C.QAssociativeIterable__const_iterator) *QAssociativeIterable__const_iterator {
	if h == nil {
		return nil
	}
	return &QAssociativeIterable__const_iterator{h: h}
}

func UnsafeNewQAssociativeIterable__const_iterator(h unsafe.Pointer) *QAssociativeIterable__const_iterator {
	return newQAssociativeIterable__const_iterator((*C.QAssociativeIterable__const_iterator)(h))
}

// NewQAssociativeIterable__const_iterator constructs a new QAssociativeIterable::const_iterator object.
func NewQAssociativeIterable__const_iterator(other *QAssociativeIterable__const_iterator) *QAssociativeIterable__const_iterator {
	ret := C.QAssociativeIterable__const_iterator_new(other.cPointer())
	return newQAssociativeIterable__const_iterator(ret)
}

func (this *QAssociativeIterable__const_iterator) OperatorAssign(other *QAssociativeIterable__const_iterator) {
	C.QAssociativeIterable__const_iterator_OperatorAssign(this.h, other.cPointer())
}

func (this *QAssociativeIterable__const_iterator) Key() *QVariant {
	_ret := C.QAssociativeIterable__const_iterator_Key(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAssociativeIterable__const_iterator) Value() *QVariant {
	_ret := C.QAssociativeIterable__const_iterator_Value(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAssociativeIterable__const_iterator) OperatorMultiply() *QVariant {
	_ret := C.QAssociativeIterable__const_iterator_OperatorMultiply(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAssociativeIterable__const_iterator) OperatorEqual(o *QAssociativeIterable__const_iterator) bool {
	return (bool)(C.QAssociativeIterable__const_iterator_OperatorEqual(this.h, o.cPointer()))
}

func (this *QAssociativeIterable__const_iterator) OperatorNotEqual(o *QAssociativeIterable__const_iterator) bool {
	return (bool)(C.QAssociativeIterable__const_iterator_OperatorNotEqual(this.h, o.cPointer()))
}

func (this *QAssociativeIterable__const_iterator) OperatorPlusPlus() *QAssociativeIterable__const_iterator {
	return UnsafeNewQAssociativeIterable__const_iterator(unsafe.Pointer(C.QAssociativeIterable__const_iterator_OperatorPlusPlus(this.h)))
}

func (this *QAssociativeIterable__const_iterator) OperatorPlusPlusWithInt(param1 int) *QAssociativeIterable__const_iterator {
	_ret := C.QAssociativeIterable__const_iterator_OperatorPlusPlusWithInt(this.h, (C.int)(param1))
	_goptr := newQAssociativeIterable__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAssociativeIterable__const_iterator) OperatorMinusMinus() *QAssociativeIterable__const_iterator {
	return UnsafeNewQAssociativeIterable__const_iterator(unsafe.Pointer(C.QAssociativeIterable__const_iterator_OperatorMinusMinus(this.h)))
}

func (this *QAssociativeIterable__const_iterator) OperatorMinusMinusWithInt(param1 int) *QAssociativeIterable__const_iterator {
	_ret := C.QAssociativeIterable__const_iterator_OperatorMinusMinusWithInt(this.h, (C.int)(param1))
	_goptr := newQAssociativeIterable__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAssociativeIterable__const_iterator) OperatorPlusAssign(j int) *QAssociativeIterable__const_iterator {
	return UnsafeNewQAssociativeIterable__const_iterator(unsafe.Pointer(C.QAssociativeIterable__const_iterator_OperatorPlusAssign(this.h, (C.int)(j))))
}

func (this *QAssociativeIterable__const_iterator) OperatorMinusAssign(j int) *QAssociativeIterable__const_iterator {
	return UnsafeNewQAssociativeIterable__const_iterator(unsafe.Pointer(C.QAssociativeIterable__const_iterator_OperatorMinusAssign(this.h, (C.int)(j))))
}

func (this *QAssociativeIterable__const_iterator) OperatorPlus(j int) *QAssociativeIterable__const_iterator {
	_ret := C.QAssociativeIterable__const_iterator_OperatorPlus(this.h, (C.int)(j))
	_goptr := newQAssociativeIterable__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAssociativeIterable__const_iterator) OperatorMinus(j int) *QAssociativeIterable__const_iterator {
	_ret := C.QAssociativeIterable__const_iterator_OperatorMinus(this.h, (C.int)(j))
	_goptr := newQAssociativeIterable__const_iterator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QAssociativeIterable__const_iterator) Delete() {
	C.QAssociativeIterable__const_iterator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAssociativeIterable__const_iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QAssociativeIterable__const_iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
