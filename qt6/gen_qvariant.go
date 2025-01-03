package qt6

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
	QVariant__RegularExpression    QVariant__Type = 44
	QVariant__Hash                 QVariant__Type = 28
	QVariant__EasingCurve          QVariant__Type = 29
	QVariant__Uuid                 QVariant__Type = 30
	QVariant__ModelIndex           QVariant__Type = 42
	QVariant__PersistentModelIndex QVariant__Type = 50
	QVariant__LastCoreType         QVariant__Type = 58
	QVariant__Font                 QVariant__Type = 4096
	QVariant__Pixmap               QVariant__Type = 4097
	QVariant__Brush                QVariant__Type = 4098
	QVariant__Color                QVariant__Type = 4099
	QVariant__Palette              QVariant__Type = 4100
	QVariant__Image                QVariant__Type = 4102
	QVariant__Polygon              QVariant__Type = 4103
	QVariant__Region               QVariant__Type = 4104
	QVariant__Bitmap               QVariant__Type = 4105
	QVariant__Cursor               QVariant__Type = 4106
	QVariant__KeySequence          QVariant__Type = 4107
	QVariant__Pen                  QVariant__Type = 4108
	QVariant__TextLength           QVariant__Type = 4109
	QVariant__TextFormat           QVariant__Type = 4110
	QVariant__Transform            QVariant__Type = 4112
	QVariant__Matrix4x4            QVariant__Type = 4113
	QVariant__Vector2D             QVariant__Type = 4114
	QVariant__Vector3D             QVariant__Type = 4115
	QVariant__Vector4D             QVariant__Type = 4116
	QVariant__Quaternion           QVariant__Type = 4117
	QVariant__PolygonF             QVariant__Type = 4118
	QVariant__Icon                 QVariant__Type = 4101
	QVariant__LastGuiType          QVariant__Type = 4119
	QVariant__SizePolicy           QVariant__Type = 8192
	QVariant__UserType             QVariant__Type = 65536
)

type QVariant struct {
	h          *C.QVariant
	isSubclass bool
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

// newQVariant constructs the type using only CGO pointers.
func newQVariant(h *C.QVariant) *QVariant {
	if h == nil {
		return nil
	}

	return &QVariant{h: h}
}

// UnsafeNewQVariant constructs the type using only unsafe pointers.
func UnsafeNewQVariant(h unsafe.Pointer) *QVariant {
	return newQVariant((*C.QVariant)(h))
}

// NewQVariant constructs a new QVariant object.
func NewQVariant() *QVariant {

	ret := newQVariant(C.QVariant_new())
	ret.isSubclass = true
	return ret
}

// NewQVariant2 constructs a new QVariant object.
func NewQVariant2(typeVal QMetaType) *QVariant {

	ret := newQVariant(C.QVariant_new2(typeVal.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant3 constructs a new QVariant object.
func NewQVariant3(other *QVariant) *QVariant {

	ret := newQVariant(C.QVariant_new3(other.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant4 constructs a new QVariant object.
func NewQVariant4(i int) *QVariant {

	ret := newQVariant(C.QVariant_new4((C.int)(i)))
	ret.isSubclass = true
	return ret
}

// NewQVariant5 constructs a new QVariant object.
func NewQVariant5(ui uint) *QVariant {

	ret := newQVariant(C.QVariant_new5((C.uint)(ui)))
	ret.isSubclass = true
	return ret
}

// NewQVariant6 constructs a new QVariant object.
func NewQVariant6(ll int64) *QVariant {

	ret := newQVariant(C.QVariant_new6((C.longlong)(ll)))
	ret.isSubclass = true
	return ret
}

// NewQVariant7 constructs a new QVariant object.
func NewQVariant7(ull uint64) *QVariant {

	ret := newQVariant(C.QVariant_new7((C.ulonglong)(ull)))
	ret.isSubclass = true
	return ret
}

// NewQVariant8 constructs a new QVariant object.
func NewQVariant8(b bool) *QVariant {

	ret := newQVariant(C.QVariant_new8((C.bool)(b)))
	ret.isSubclass = true
	return ret
}

// NewQVariant9 constructs a new QVariant object.
func NewQVariant9(d float64) *QVariant {

	ret := newQVariant(C.QVariant_new9((C.double)(d)))
	ret.isSubclass = true
	return ret
}

// NewQVariant10 constructs a new QVariant object.
func NewQVariant10(f float32) *QVariant {

	ret := newQVariant(C.QVariant_new10((C.float)(f)))
	ret.isSubclass = true
	return ret
}

// NewQVariant11 constructs a new QVariant object.
func NewQVariant11(str string) *QVariant {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))

	ret := newQVariant(C.QVariant_new11(str_Cstring))
	ret.isSubclass = true
	return ret
}

// NewQVariant12 constructs a new QVariant object.
func NewQVariant12(bytearray []byte) *QVariant {
	bytearray_alias := C.struct_miqt_string{}
	bytearray_alias.data = (*C.char)(unsafe.Pointer(&bytearray[0]))
	bytearray_alias.len = C.size_t(len(bytearray))

	ret := newQVariant(C.QVariant_new12(bytearray_alias))
	ret.isSubclass = true
	return ret
}

// NewQVariant13 constructs a new QVariant object.
func NewQVariant13(bitarray *QBitArray) *QVariant {

	ret := newQVariant(C.QVariant_new13(bitarray.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant14 constructs a new QVariant object.
func NewQVariant14(stringVal string) *QVariant {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))

	ret := newQVariant(C.QVariant_new14(stringVal_ms))
	ret.isSubclass = true
	return ret
}

// NewQVariant15 constructs a new QVariant object.
func NewQVariant15(stringlist []string) *QVariant {
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

	ret := newQVariant(C.QVariant_new15(stringlist_ma))
	ret.isSubclass = true
	return ret
}

// NewQVariant16 constructs a new QVariant object.
func NewQVariant16(qchar QChar) *QVariant {

	ret := newQVariant(C.QVariant_new16(qchar.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant17 constructs a new QVariant object.
func NewQVariant17(date QDate) *QVariant {

	ret := newQVariant(C.QVariant_new17(date.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant18 constructs a new QVariant object.
func NewQVariant18(time QTime) *QVariant {

	ret := newQVariant(C.QVariant_new18(time.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant19 constructs a new QVariant object.
func NewQVariant19(datetime *QDateTime) *QVariant {

	ret := newQVariant(C.QVariant_new19(datetime.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant20 constructs a new QVariant object.
func NewQVariant20(mapVal map[string]QVariant) *QVariant {
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

	ret := newQVariant(C.QVariant_new20(mapVal_mm))
	ret.isSubclass = true
	return ret
}

// NewQVariant21 constructs a new QVariant object.
func NewQVariant21(hash map[string]QVariant) *QVariant {
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

	ret := newQVariant(C.QVariant_new21(hash_mm))
	ret.isSubclass = true
	return ret
}

// NewQVariant22 constructs a new QVariant object.
func NewQVariant22(size *QSize) *QVariant {

	ret := newQVariant(C.QVariant_new22(size.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant23 constructs a new QVariant object.
func NewQVariant23(size *QSizeF) *QVariant {

	ret := newQVariant(C.QVariant_new23(size.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant24 constructs a new QVariant object.
func NewQVariant24(pt *QPoint) *QVariant {

	ret := newQVariant(C.QVariant_new24(pt.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant25 constructs a new QVariant object.
func NewQVariant25(pt *QPointF) *QVariant {

	ret := newQVariant(C.QVariant_new25(pt.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant26 constructs a new QVariant object.
func NewQVariant26(line *QLine) *QVariant {

	ret := newQVariant(C.QVariant_new26(line.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant27 constructs a new QVariant object.
func NewQVariant27(line *QLineF) *QVariant {

	ret := newQVariant(C.QVariant_new27(line.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant28 constructs a new QVariant object.
func NewQVariant28(rect *QRect) *QVariant {

	ret := newQVariant(C.QVariant_new28(rect.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant29 constructs a new QVariant object.
func NewQVariant29(rect *QRectF) *QVariant {

	ret := newQVariant(C.QVariant_new29(rect.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant30 constructs a new QVariant object.
func NewQVariant30(locale *QLocale) *QVariant {

	ret := newQVariant(C.QVariant_new30(locale.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant31 constructs a new QVariant object.
func NewQVariant31(re *QRegularExpression) *QVariant {

	ret := newQVariant(C.QVariant_new31(re.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant32 constructs a new QVariant object.
func NewQVariant32(easing *QEasingCurve) *QVariant {

	ret := newQVariant(C.QVariant_new32(easing.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant33 constructs a new QVariant object.
func NewQVariant33(uuid *QUuid) *QVariant {

	ret := newQVariant(C.QVariant_new33(uuid.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant34 constructs a new QVariant object.
func NewQVariant34(url *QUrl) *QVariant {

	ret := newQVariant(C.QVariant_new34(url.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant35 constructs a new QVariant object.
func NewQVariant35(jsonValue *QJsonValue) *QVariant {

	ret := newQVariant(C.QVariant_new35(jsonValue.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant36 constructs a new QVariant object.
func NewQVariant36(jsonObject *QJsonObject) *QVariant {

	ret := newQVariant(C.QVariant_new36(jsonObject.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant37 constructs a new QVariant object.
func NewQVariant37(jsonArray *QJsonArray) *QVariant {

	ret := newQVariant(C.QVariant_new37(jsonArray.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant38 constructs a new QVariant object.
func NewQVariant38(jsonDocument *QJsonDocument) *QVariant {

	ret := newQVariant(C.QVariant_new38(jsonDocument.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant39 constructs a new QVariant object.
func NewQVariant39(modelIndex *QModelIndex) *QVariant {

	ret := newQVariant(C.QVariant_new39(modelIndex.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant40 constructs a new QVariant object.
func NewQVariant40(modelIndex *QPersistentModelIndex) *QVariant {

	ret := newQVariant(C.QVariant_new40(modelIndex.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariant41 constructs a new QVariant object.
func NewQVariant41(typeVal QVariant__Type) *QVariant {

	ret := newQVariant(C.QVariant_new41((C.int)(typeVal)))
	ret.isSubclass = true
	return ret
}

// NewQVariant42 constructs a new QVariant object.
func NewQVariant42(typeVal QMetaType, copyVal unsafe.Pointer) *QVariant {

	ret := newQVariant(C.QVariant_new42(typeVal.cPointer(), copyVal))
	ret.isSubclass = true
	return ret
}

// NewQVariant4099 constructs a new QVariant object.
func NewQVariant4099(color *QColor) *QVariant {

	ret := newQVariant(C.QVariant_new4099(color.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QVariant) OperatorAssign(other *QVariant) {
	C.QVariant_OperatorAssign(this.h, other.cPointer())
}

func (this *QVariant) Swap(other *QVariant) {
	C.QVariant_Swap(this.h, other.cPointer())
}

func (this *QVariant) UserType() int {
	return (int)(C.QVariant_UserType(this.h))
}

func (this *QVariant) TypeId() int {
	return (int)(C.QVariant_TypeId(this.h))
}

func (this *QVariant) TypeName() string {
	_ret := C.QVariant_TypeName(this.h)
	return C.GoString(_ret)
}

func (this *QVariant) MetaType() *QMetaType {
	_goptr := newQMetaType(C.QVariant_MetaType(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) CanConvert(targetType QMetaType) bool {
	return (bool)(C.QVariant_CanConvert(this.h, targetType.cPointer()))
}

func (this *QVariant) Convert(typeVal QMetaType) bool {
	return (bool)(C.QVariant_Convert(this.h, typeVal.cPointer()))
}

func (this *QVariant) CanView(targetType QMetaType) bool {
	return (bool)(C.QVariant_CanView(this.h, targetType.cPointer()))
}

func (this *QVariant) CanConvertWithTargetTypeId(targetTypeId int) bool {
	return (bool)(C.QVariant_CanConvertWithTargetTypeId(this.h, (C.int)(targetTypeId)))
}

func (this *QVariant) ConvertWithTargetTypeId(targetTypeId int) bool {
	return (bool)(C.QVariant_ConvertWithTargetTypeId(this.h, (C.int)(targetTypeId)))
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
	_goptr := newQBitArray(C.QVariant_ToBitArray(this.h))
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
	_goptr := newQChar(C.QVariant_ToChar(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToDate() *QDate {
	_goptr := newQDate(C.QVariant_ToDate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToTime() *QTime {
	_goptr := newQTime(C.QVariant_ToTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToDateTime() *QDateTime {
	_goptr := newQDateTime(C.QVariant_ToDateTime(this.h))
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
		_mapval_goptr := newQVariant(_Values[i])
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
		_hashval_goptr := newQVariant(_Values[i])
		_hashval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_hashval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QVariant) ToPoint() *QPoint {
	_goptr := newQPoint(C.QVariant_ToPoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToPointF() *QPointF {
	_goptr := newQPointF(C.QVariant_ToPointF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToRect() *QRect {
	_goptr := newQRect(C.QVariant_ToRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToSize() *QSize {
	_goptr := newQSize(C.QVariant_ToSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToSizeF() *QSizeF {
	_goptr := newQSizeF(C.QVariant_ToSizeF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToLine() *QLine {
	_goptr := newQLine(C.QVariant_ToLine(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToLineF() *QLineF {
	_goptr := newQLineF(C.QVariant_ToLineF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToRectF() *QRectF {
	_goptr := newQRectF(C.QVariant_ToRectF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToLocale() *QLocale {
	_goptr := newQLocale(C.QVariant_ToLocale(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToRegularExpression() *QRegularExpression {
	_goptr := newQRegularExpression(C.QVariant_ToRegularExpression(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToEasingCurve() *QEasingCurve {
	_goptr := newQEasingCurve(C.QVariant_ToEasingCurve(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToUuid() *QUuid {
	_goptr := newQUuid(C.QVariant_ToUuid(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToUrl() *QUrl {
	_goptr := newQUrl(C.QVariant_ToUrl(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonValue() *QJsonValue {
	_goptr := newQJsonValue(C.QVariant_ToJsonValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonObject() *QJsonObject {
	_goptr := newQJsonObject(C.QVariant_ToJsonObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonArray() *QJsonArray {
	_goptr := newQJsonArray(C.QVariant_ToJsonArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonDocument() *QJsonDocument {
	_goptr := newQJsonDocument(C.QVariant_ToJsonDocument(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToModelIndex() *QModelIndex {
	_goptr := newQModelIndex(C.QVariant_ToModelIndex(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToPersistentModelIndex() *QPersistentModelIndex {
	_goptr := newQPersistentModelIndex(C.QVariant_ToPersistentModelIndex(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) Load(ds *QDataStream) {
	C.QVariant_Load(this.h, ds.cPointer())
}

func (this *QVariant) Save(ds *QDataStream) {
	C.QVariant_Save(this.h, ds.cPointer())
}

func (this *QVariant) Type() QVariant__Type {
	return (QVariant__Type)(C.QVariant_Type(this.h))
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

func (this *QVariant) SetValue(avalue *QVariant) {
	C.QVariant_SetValue(this.h, avalue.cPointer())
}

func QVariant_Compare(lhs *QVariant, rhs *QVariant) *QPartialOrdering {
	_goptr := newQPartialOrdering(C.QVariant_Compare(lhs.cPointer(), rhs.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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
	C.QVariant_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVariant) GoGC() {
	runtime.SetFinalizer(this, func(this *QVariant) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QVariantConstPointer struct {
	h          *C.QVariantConstPointer
	isSubclass bool
}

func (this *QVariantConstPointer) cPointer() *C.QVariantConstPointer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVariantConstPointer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVariantConstPointer constructs the type using only CGO pointers.
func newQVariantConstPointer(h *C.QVariantConstPointer) *QVariantConstPointer {
	if h == nil {
		return nil
	}

	return &QVariantConstPointer{h: h}
}

// UnsafeNewQVariantConstPointer constructs the type using only unsafe pointers.
func UnsafeNewQVariantConstPointer(h unsafe.Pointer) *QVariantConstPointer {
	return newQVariantConstPointer((*C.QVariantConstPointer)(h))
}

// NewQVariantConstPointer constructs a new QVariantConstPointer object.
func NewQVariantConstPointer(variant QVariant) *QVariantConstPointer {

	ret := newQVariantConstPointer(C.QVariantConstPointer_new(variant.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVariantConstPointer2 constructs a new QVariantConstPointer object.
func NewQVariantConstPointer2(param1 *QVariantConstPointer) *QVariantConstPointer {

	ret := newQVariantConstPointer(C.QVariantConstPointer_new2(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QVariantConstPointer) OperatorMultiply() *QVariant {
	_goptr := newQVariant(C.QVariantConstPointer_OperatorMultiply(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariantConstPointer) OperatorMinusGreater() *QVariant {
	return newQVariant(C.QVariantConstPointer_OperatorMinusGreater(this.h))
}

func (this *QVariantConstPointer) OperatorAssign(param1 *QVariantConstPointer) {
	C.QVariantConstPointer_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QVariantConstPointer) Delete() {
	C.QVariantConstPointer_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVariantConstPointer) GoGC() {
	runtime.SetFinalizer(this, func(this *QVariantConstPointer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
