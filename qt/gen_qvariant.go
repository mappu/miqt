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

	return newQVariant(C.QVariant_new())
}

// NewQVariant2 constructs a new QVariant object.
func NewQVariant2(typeVal QVariant__Type) *QVariant {

	return newQVariant(C.QVariant_new2((C.int)(typeVal)))
}

// NewQVariant3 constructs a new QVariant object.
func NewQVariant3(typeId int, copyVal unsafe.Pointer) *QVariant {

	return newQVariant(C.QVariant_new3((C.int)(typeId), copyVal))
}

// NewQVariant4 constructs a new QVariant object.
func NewQVariant4(typeId int, copyVal unsafe.Pointer, flags uint) *QVariant {

	return newQVariant(C.QVariant_new4((C.int)(typeId), copyVal, (C.uint)(flags)))
}

// NewQVariant5 constructs a new QVariant object.
func NewQVariant5(other *QVariant) *QVariant {

	return newQVariant(C.QVariant_new5(other.cPointer()))
}

// NewQVariant6 constructs a new QVariant object.
func NewQVariant6(s *QDataStream) *QVariant {

	return newQVariant(C.QVariant_new6(s.cPointer()))
}

// NewQVariant7 constructs a new QVariant object.
func NewQVariant7(i int) *QVariant {

	return newQVariant(C.QVariant_new7((C.int)(i)))
}

// NewQVariant8 constructs a new QVariant object.
func NewQVariant8(ui uint) *QVariant {

	return newQVariant(C.QVariant_new8((C.uint)(ui)))
}

// NewQVariant9 constructs a new QVariant object.
func NewQVariant9(ll int64) *QVariant {

	return newQVariant(C.QVariant_new9((C.longlong)(ll)))
}

// NewQVariant10 constructs a new QVariant object.
func NewQVariant10(ull uint64) *QVariant {

	return newQVariant(C.QVariant_new10((C.ulonglong)(ull)))
}

// NewQVariant11 constructs a new QVariant object.
func NewQVariant11(b bool) *QVariant {

	return newQVariant(C.QVariant_new11((C.bool)(b)))
}

// NewQVariant12 constructs a new QVariant object.
func NewQVariant12(d float64) *QVariant {

	return newQVariant(C.QVariant_new12((C.double)(d)))
}

// NewQVariant13 constructs a new QVariant object.
func NewQVariant13(f float32) *QVariant {

	return newQVariant(C.QVariant_new13((C.float)(f)))
}

// NewQVariant14 constructs a new QVariant object.
func NewQVariant14(str string) *QVariant {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))

	return newQVariant(C.QVariant_new14(str_Cstring))
}

// NewQVariant15 constructs a new QVariant object.
func NewQVariant15(bytearray []byte) *QVariant {
	bytearray_alias := C.struct_miqt_string{}
	if len(bytearray) > 0 {
		bytearray_alias.data = (*C.char)(unsafe.Pointer(&bytearray[0]))
	} else {
		bytearray_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	bytearray_alias.len = C.size_t(len(bytearray))

	return newQVariant(C.QVariant_new15(bytearray_alias))
}

// NewQVariant16 constructs a new QVariant object.
func NewQVariant16(bitarray *QBitArray) *QVariant {

	return newQVariant(C.QVariant_new16(bitarray.cPointer()))
}

// NewQVariant17 constructs a new QVariant object.
func NewQVariant17(stringVal string) *QVariant {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))

	return newQVariant(C.QVariant_new17(stringVal_ms))
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

	return newQVariant(C.QVariant_new18(stringlist_ma))
}

// NewQVariant19 constructs a new QVariant object.
func NewQVariant19(qchar QChar) *QVariant {

	return newQVariant(C.QVariant_new19(qchar.cPointer()))
}

// NewQVariant20 constructs a new QVariant object.
func NewQVariant20(date *QDate) *QVariant {

	return newQVariant(C.QVariant_new20(date.cPointer()))
}

// NewQVariant21 constructs a new QVariant object.
func NewQVariant21(time *QTime) *QVariant {

	return newQVariant(C.QVariant_new21(time.cPointer()))
}

// NewQVariant22 constructs a new QVariant object.
func NewQVariant22(datetime *QDateTime) *QVariant {

	return newQVariant(C.QVariant_new22(datetime.cPointer()))
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

	return newQVariant(C.QVariant_new23(mapVal_mm))
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

	return newQVariant(C.QVariant_new24(hash_mm))
}

// NewQVariant25 constructs a new QVariant object.
func NewQVariant25(size *QSize) *QVariant {

	return newQVariant(C.QVariant_new25(size.cPointer()))
}

// NewQVariant26 constructs a new QVariant object.
func NewQVariant26(size *QSizeF) *QVariant {

	return newQVariant(C.QVariant_new26(size.cPointer()))
}

// NewQVariant27 constructs a new QVariant object.
func NewQVariant27(pt *QPoint) *QVariant {

	return newQVariant(C.QVariant_new27(pt.cPointer()))
}

// NewQVariant28 constructs a new QVariant object.
func NewQVariant28(pt *QPointF) *QVariant {

	return newQVariant(C.QVariant_new28(pt.cPointer()))
}

// NewQVariant29 constructs a new QVariant object.
func NewQVariant29(line *QLine) *QVariant {

	return newQVariant(C.QVariant_new29(line.cPointer()))
}

// NewQVariant30 constructs a new QVariant object.
func NewQVariant30(line *QLineF) *QVariant {

	return newQVariant(C.QVariant_new30(line.cPointer()))
}

// NewQVariant31 constructs a new QVariant object.
func NewQVariant31(rect *QRect) *QVariant {

	return newQVariant(C.QVariant_new31(rect.cPointer()))
}

// NewQVariant32 constructs a new QVariant object.
func NewQVariant32(rect *QRectF) *QVariant {

	return newQVariant(C.QVariant_new32(rect.cPointer()))
}

// NewQVariant33 constructs a new QVariant object.
func NewQVariant33(locale *QLocale) *QVariant {

	return newQVariant(C.QVariant_new33(locale.cPointer()))
}

// NewQVariant34 constructs a new QVariant object.
func NewQVariant34(regExp *QRegExp) *QVariant {

	return newQVariant(C.QVariant_new34(regExp.cPointer()))
}

// NewQVariant35 constructs a new QVariant object.
func NewQVariant35(re *QRegularExpression) *QVariant {

	return newQVariant(C.QVariant_new35(re.cPointer()))
}

// NewQVariant36 constructs a new QVariant object.
func NewQVariant36(easing *QEasingCurve) *QVariant {

	return newQVariant(C.QVariant_new36(easing.cPointer()))
}

// NewQVariant37 constructs a new QVariant object.
func NewQVariant37(uuid *QUuid) *QVariant {

	return newQVariant(C.QVariant_new37(uuid.cPointer()))
}

// NewQVariant38 constructs a new QVariant object.
func NewQVariant38(url *QUrl) *QVariant {

	return newQVariant(C.QVariant_new38(url.cPointer()))
}

// NewQVariant39 constructs a new QVariant object.
func NewQVariant39(jsonValue *QJsonValue) *QVariant {

	return newQVariant(C.QVariant_new39(jsonValue.cPointer()))
}

// NewQVariant40 constructs a new QVariant object.
func NewQVariant40(jsonObject *QJsonObject) *QVariant {

	return newQVariant(C.QVariant_new40(jsonObject.cPointer()))
}

// NewQVariant41 constructs a new QVariant object.
func NewQVariant41(jsonArray *QJsonArray) *QVariant {

	return newQVariant(C.QVariant_new41(jsonArray.cPointer()))
}

// NewQVariant42 constructs a new QVariant object.
func NewQVariant42(jsonDocument *QJsonDocument) *QVariant {

	return newQVariant(C.QVariant_new42(jsonDocument.cPointer()))
}

// NewQVariant43 constructs a new QVariant object.
func NewQVariant43(modelIndex *QModelIndex) *QVariant {

	return newQVariant(C.QVariant_new43(modelIndex.cPointer()))
}

// NewQVariant44 constructs a new QVariant object.
func NewQVariant44(modelIndex *QPersistentModelIndex) *QVariant {

	return newQVariant(C.QVariant_new44(modelIndex.cPointer()))
}

func (this *QVariant) OperatorAssign(other *QVariant) {
	C.QVariant_operatorAssign(this.h, other.cPointer())
}

func (this *QVariant) Swap(other *QVariant) {
	C.QVariant_swap(this.h, other.cPointer())
}

func (this *QVariant) Type() QVariant__Type {
	return (QVariant__Type)(C.QVariant_type(this.h))
}

func (this *QVariant) UserType() int {
	return (int)(C.QVariant_userType(this.h))
}

func (this *QVariant) TypeName() string {
	_ret := C.QVariant_typeName(this.h)
	return C.GoString(_ret)
}

func (this *QVariant) CanConvert(targetTypeId int) bool {
	return (bool)(C.QVariant_canConvert(this.h, (C.int)(targetTypeId)))
}

func (this *QVariant) Convert(targetTypeId int) bool {
	return (bool)(C.QVariant_convert(this.h, (C.int)(targetTypeId)))
}

func (this *QVariant) IsValid() bool {
	return (bool)(C.QVariant_isValid(this.h))
}

func (this *QVariant) IsNull() bool {
	return (bool)(C.QVariant_isNull(this.h))
}

func (this *QVariant) Clear() {
	C.QVariant_clear(this.h)
}

func (this *QVariant) Detach() {
	C.QVariant_detach(this.h)
}

func (this *QVariant) IsDetached() bool {
	return (bool)(C.QVariant_isDetached(this.h))
}

func (this *QVariant) ToInt() int {
	return (int)(C.QVariant_toInt(this.h))
}

func (this *QVariant) ToUInt() uint {
	return (uint)(C.QVariant_toUInt(this.h))
}

func (this *QVariant) ToLongLong() int64 {
	return (int64)(C.QVariant_toLongLong(this.h))
}

func (this *QVariant) ToULongLong() uint64 {
	return (uint64)(C.QVariant_toULongLong(this.h))
}

func (this *QVariant) ToBool() bool {
	return (bool)(C.QVariant_toBool(this.h))
}

func (this *QVariant) ToDouble() float64 {
	return (float64)(C.QVariant_toDouble(this.h))
}

func (this *QVariant) ToFloat() float32 {
	return (float32)(C.QVariant_toFloat(this.h))
}

func (this *QVariant) ToReal() float64 {
	return (float64)(C.QVariant_toReal(this.h))
}

func (this *QVariant) ToByteArray() []byte {
	var _bytearray C.struct_miqt_string = C.QVariant_toByteArray(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QVariant) ToBitArray() *QBitArray {
	_goptr := newQBitArray(C.QVariant_toBitArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToString() string {
	var _ms C.struct_miqt_string = C.QVariant_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVariant) ToStringList() []string {
	var _ma C.struct_miqt_array = C.QVariant_toStringList(this.h)
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
	_goptr := newQChar(C.QVariant_toChar(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToDate() *QDate {
	_goptr := newQDate(C.QVariant_toDate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToTime() *QTime {
	_goptr := newQTime(C.QVariant_toTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToDateTime() *QDateTime {
	_goptr := newQDateTime(C.QVariant_toDateTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToMap() map[string]QVariant {
	var _mm C.struct_miqt_map = C.QVariant_toMap(this.h)
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
	var _mm C.struct_miqt_map = C.QVariant_toHash(this.h)
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
	_goptr := newQPoint(C.QVariant_toPoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToPointF() *QPointF {
	_goptr := newQPointF(C.QVariant_toPointF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToRect() *QRect {
	_goptr := newQRect(C.QVariant_toRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToSize() *QSize {
	_goptr := newQSize(C.QVariant_toSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToSizeF() *QSizeF {
	_goptr := newQSizeF(C.QVariant_toSizeF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToLine() *QLine {
	_goptr := newQLine(C.QVariant_toLine(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToLineF() *QLineF {
	_goptr := newQLineF(C.QVariant_toLineF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToRectF() *QRectF {
	_goptr := newQRectF(C.QVariant_toRectF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToLocale() *QLocale {
	_goptr := newQLocale(C.QVariant_toLocale(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToRegExp() *QRegExp {
	_goptr := newQRegExp(C.QVariant_toRegExp(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToRegularExpression() *QRegularExpression {
	_goptr := newQRegularExpression(C.QVariant_toRegularExpression(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToEasingCurve() *QEasingCurve {
	_goptr := newQEasingCurve(C.QVariant_toEasingCurve(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToUuid() *QUuid {
	_goptr := newQUuid(C.QVariant_toUuid(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToUrl() *QUrl {
	_goptr := newQUrl(C.QVariant_toUrl(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonValue() *QJsonValue {
	_goptr := newQJsonValue(C.QVariant_toJsonValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonObject() *QJsonObject {
	_goptr := newQJsonObject(C.QVariant_toJsonObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonArray() *QJsonArray {
	_goptr := newQJsonArray(C.QVariant_toJsonArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonDocument() *QJsonDocument {
	_goptr := newQJsonDocument(C.QVariant_toJsonDocument(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToModelIndex() *QModelIndex {
	_goptr := newQModelIndex(C.QVariant_toModelIndex(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToPersistentModelIndex() *QPersistentModelIndex {
	_goptr := newQPersistentModelIndex(C.QVariant_toPersistentModelIndex(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) Load(ds *QDataStream) {
	C.QVariant_load(this.h, ds.cPointer())
}

func (this *QVariant) Save(ds *QDataStream) {
	C.QVariant_save(this.h, ds.cPointer())
}

func QVariant_TypeToName(typeId int) string {
	_ret := C.QVariant_typeToName((C.int)(typeId))
	return C.GoString(_ret)
}

func QVariant_NameToType(name string) QVariant__Type {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	return (QVariant__Type)(C.QVariant_nameToType(name_Cstring))
}

func (this *QVariant) Data() unsafe.Pointer {
	return (unsafe.Pointer)(C.QVariant_data(this.h))
}

func (this *QVariant) ConstData() unsafe.Pointer {
	return (unsafe.Pointer)(C.QVariant_constData(this.h))
}

func (this *QVariant) Data2() unsafe.Pointer {
	return (unsafe.Pointer)(C.QVariant_data2(this.h))
}

func (this *QVariant) OperatorEqual(v *QVariant) bool {
	return (bool)(C.QVariant_operatorEqual(this.h, v.cPointer()))
}

func (this *QVariant) OperatorNotEqual(v *QVariant) bool {
	return (bool)(C.QVariant_operatorNotEqual(this.h, v.cPointer()))
}

func (this *QVariant) OperatorLesser(v *QVariant) bool {
	return (bool)(C.QVariant_operatorLesser(this.h, v.cPointer()))
}

func (this *QVariant) OperatorLesserOrEqual(v *QVariant) bool {
	return (bool)(C.QVariant_operatorLesserOrEqual(this.h, v.cPointer()))
}

func (this *QVariant) OperatorGreater(v *QVariant) bool {
	return (bool)(C.QVariant_operatorGreater(this.h, v.cPointer()))
}

func (this *QVariant) OperatorGreaterOrEqual(v *QVariant) bool {
	return (bool)(C.QVariant_operatorGreaterOrEqual(this.h, v.cPointer()))
}

func (this *QVariant) ToInt1(ok *bool) int {
	return (int)(C.QVariant_toInt1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToUInt1(ok *bool) uint {
	return (uint)(C.QVariant_toUInt1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToLongLong1(ok *bool) int64 {
	return (int64)(C.QVariant_toLongLong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToULongLong1(ok *bool) uint64 {
	return (uint64)(C.QVariant_toULongLong1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToDouble1(ok *bool) float64 {
	return (float64)(C.QVariant_toDouble1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToFloat1(ok *bool) float32 {
	return (float32)(C.QVariant_toFloat1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToReal1(ok *bool) float64 {
	return (float64)(C.QVariant_toReal1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

// Delete this object from C++ memory.
func (this *QVariant) Delete() {
	C.QVariant_delete(this.h)
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

// newQVariantComparisonHelper constructs the type using only CGO pointers.
func newQVariantComparisonHelper(h *C.QVariantComparisonHelper) *QVariantComparisonHelper {
	if h == nil {
		return nil
	}

	return &QVariantComparisonHelper{h: h}
}

// UnsafeNewQVariantComparisonHelper constructs the type using only unsafe pointers.
func UnsafeNewQVariantComparisonHelper(h unsafe.Pointer) *QVariantComparisonHelper {
	return newQVariantComparisonHelper((*C.QVariantComparisonHelper)(h))
}

// NewQVariantComparisonHelper constructs a new QVariantComparisonHelper object.
func NewQVariantComparisonHelper(varVal *QVariant) *QVariantComparisonHelper {

	return newQVariantComparisonHelper(C.QVariantComparisonHelper_new(varVal.cPointer()))
}

// NewQVariantComparisonHelper2 constructs a new QVariantComparisonHelper object.
func NewQVariantComparisonHelper2(param1 *QVariantComparisonHelper) *QVariantComparisonHelper {

	return newQVariantComparisonHelper(C.QVariantComparisonHelper_new2(param1.cPointer()))
}

// Delete this object from C++ memory.
func (this *QVariantComparisonHelper) Delete() {
	C.QVariantComparisonHelper_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVariantComparisonHelper) GoGC() {
	runtime.SetFinalizer(this, func(this *QVariantComparisonHelper) {
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

// newQVariant__Handler constructs the type using only CGO pointers.
func newQVariant__Handler(h *C.QVariant__Handler) *QVariant__Handler {
	if h == nil {
		return nil
	}

	return &QVariant__Handler{h: h}
}

// UnsafeNewQVariant__Handler constructs the type using only unsafe pointers.
func UnsafeNewQVariant__Handler(h unsafe.Pointer) *QVariant__Handler {
	return newQVariant__Handler((*C.QVariant__Handler)(h))
}

// Delete this object from C++ memory.
func (this *QVariant__Handler) Delete() {
	C.QVariant__Handler_delete(this.h)
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

// newQSequentialIterable__const_iterator constructs the type using only CGO pointers.
func newQSequentialIterable__const_iterator(h *C.QSequentialIterable__const_iterator) *QSequentialIterable__const_iterator {
	if h == nil {
		return nil
	}

	return &QSequentialIterable__const_iterator{h: h}
}

// UnsafeNewQSequentialIterable__const_iterator constructs the type using only unsafe pointers.
func UnsafeNewQSequentialIterable__const_iterator(h unsafe.Pointer) *QSequentialIterable__const_iterator {
	return newQSequentialIterable__const_iterator((*C.QSequentialIterable__const_iterator)(h))
}

// NewQSequentialIterable__const_iterator constructs a new QSequentialIterable::const_iterator object.
func NewQSequentialIterable__const_iterator(other *QSequentialIterable__const_iterator) *QSequentialIterable__const_iterator {

	return newQSequentialIterable__const_iterator(C.QSequentialIterable__const_iterator_new(other.cPointer()))
}

func (this *QSequentialIterable__const_iterator) OperatorAssign(other *QSequentialIterable__const_iterator) {
	C.QSequentialIterable__const_iterator_operatorAssign(this.h, other.cPointer())
}

func (this *QSequentialIterable__const_iterator) OperatorMultiply() *QVariant {
	_goptr := newQVariant(C.QSequentialIterable__const_iterator_operatorMultiply(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSequentialIterable__const_iterator) OperatorEqual(o *QSequentialIterable__const_iterator) bool {
	return (bool)(C.QSequentialIterable__const_iterator_operatorEqual(this.h, o.cPointer()))
}

func (this *QSequentialIterable__const_iterator) OperatorNotEqual(o *QSequentialIterable__const_iterator) bool {
	return (bool)(C.QSequentialIterable__const_iterator_operatorNotEqual(this.h, o.cPointer()))
}

func (this *QSequentialIterable__const_iterator) OperatorPlusPlus() *QSequentialIterable__const_iterator {
	return newQSequentialIterable__const_iterator(C.QSequentialIterable__const_iterator_operatorPlusPlus(this.h))
}

func (this *QSequentialIterable__const_iterator) OperatorPlusPlusWithInt(param1 int) *QSequentialIterable__const_iterator {
	_goptr := newQSequentialIterable__const_iterator(C.QSequentialIterable__const_iterator_operatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSequentialIterable__const_iterator) OperatorMinusMinus() *QSequentialIterable__const_iterator {
	return newQSequentialIterable__const_iterator(C.QSequentialIterable__const_iterator_operatorMinusMinus(this.h))
}

func (this *QSequentialIterable__const_iterator) OperatorMinusMinusWithInt(param1 int) *QSequentialIterable__const_iterator {
	_goptr := newQSequentialIterable__const_iterator(C.QSequentialIterable__const_iterator_operatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSequentialIterable__const_iterator) OperatorPlusAssign(j int) *QSequentialIterable__const_iterator {
	return newQSequentialIterable__const_iterator(C.QSequentialIterable__const_iterator_operatorPlusAssign(this.h, (C.int)(j)))
}

func (this *QSequentialIterable__const_iterator) OperatorMinusAssign(j int) *QSequentialIterable__const_iterator {
	return newQSequentialIterable__const_iterator(C.QSequentialIterable__const_iterator_operatorMinusAssign(this.h, (C.int)(j)))
}

func (this *QSequentialIterable__const_iterator) OperatorPlus(j int) *QSequentialIterable__const_iterator {
	_goptr := newQSequentialIterable__const_iterator(C.QSequentialIterable__const_iterator_operatorPlus(this.h, (C.int)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSequentialIterable__const_iterator) OperatorMinus(j int) *QSequentialIterable__const_iterator {
	_goptr := newQSequentialIterable__const_iterator(C.QSequentialIterable__const_iterator_operatorMinus(this.h, (C.int)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QSequentialIterable__const_iterator) Delete() {
	C.QSequentialIterable__const_iterator_delete(this.h)
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

// newQAssociativeIterable__const_iterator constructs the type using only CGO pointers.
func newQAssociativeIterable__const_iterator(h *C.QAssociativeIterable__const_iterator) *QAssociativeIterable__const_iterator {
	if h == nil {
		return nil
	}

	return &QAssociativeIterable__const_iterator{h: h}
}

// UnsafeNewQAssociativeIterable__const_iterator constructs the type using only unsafe pointers.
func UnsafeNewQAssociativeIterable__const_iterator(h unsafe.Pointer) *QAssociativeIterable__const_iterator {
	return newQAssociativeIterable__const_iterator((*C.QAssociativeIterable__const_iterator)(h))
}

// NewQAssociativeIterable__const_iterator constructs a new QAssociativeIterable::const_iterator object.
func NewQAssociativeIterable__const_iterator(other *QAssociativeIterable__const_iterator) *QAssociativeIterable__const_iterator {

	return newQAssociativeIterable__const_iterator(C.QAssociativeIterable__const_iterator_new(other.cPointer()))
}

func (this *QAssociativeIterable__const_iterator) OperatorAssign(other *QAssociativeIterable__const_iterator) {
	C.QAssociativeIterable__const_iterator_operatorAssign(this.h, other.cPointer())
}

func (this *QAssociativeIterable__const_iterator) Key() *QVariant {
	_goptr := newQVariant(C.QAssociativeIterable__const_iterator_key(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAssociativeIterable__const_iterator) Value() *QVariant {
	_goptr := newQVariant(C.QAssociativeIterable__const_iterator_value(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAssociativeIterable__const_iterator) OperatorMultiply() *QVariant {
	_goptr := newQVariant(C.QAssociativeIterable__const_iterator_operatorMultiply(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAssociativeIterable__const_iterator) OperatorEqual(o *QAssociativeIterable__const_iterator) bool {
	return (bool)(C.QAssociativeIterable__const_iterator_operatorEqual(this.h, o.cPointer()))
}

func (this *QAssociativeIterable__const_iterator) OperatorNotEqual(o *QAssociativeIterable__const_iterator) bool {
	return (bool)(C.QAssociativeIterable__const_iterator_operatorNotEqual(this.h, o.cPointer()))
}

func (this *QAssociativeIterable__const_iterator) OperatorPlusPlus() *QAssociativeIterable__const_iterator {
	return newQAssociativeIterable__const_iterator(C.QAssociativeIterable__const_iterator_operatorPlusPlus(this.h))
}

func (this *QAssociativeIterable__const_iterator) OperatorPlusPlusWithInt(param1 int) *QAssociativeIterable__const_iterator {
	_goptr := newQAssociativeIterable__const_iterator(C.QAssociativeIterable__const_iterator_operatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAssociativeIterable__const_iterator) OperatorMinusMinus() *QAssociativeIterable__const_iterator {
	return newQAssociativeIterable__const_iterator(C.QAssociativeIterable__const_iterator_operatorMinusMinus(this.h))
}

func (this *QAssociativeIterable__const_iterator) OperatorMinusMinusWithInt(param1 int) *QAssociativeIterable__const_iterator {
	_goptr := newQAssociativeIterable__const_iterator(C.QAssociativeIterable__const_iterator_operatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAssociativeIterable__const_iterator) OperatorPlusAssign(j int) *QAssociativeIterable__const_iterator {
	return newQAssociativeIterable__const_iterator(C.QAssociativeIterable__const_iterator_operatorPlusAssign(this.h, (C.int)(j)))
}

func (this *QAssociativeIterable__const_iterator) OperatorMinusAssign(j int) *QAssociativeIterable__const_iterator {
	return newQAssociativeIterable__const_iterator(C.QAssociativeIterable__const_iterator_operatorMinusAssign(this.h, (C.int)(j)))
}

func (this *QAssociativeIterable__const_iterator) OperatorPlus(j int) *QAssociativeIterable__const_iterator {
	_goptr := newQAssociativeIterable__const_iterator(C.QAssociativeIterable__const_iterator_operatorPlus(this.h, (C.int)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAssociativeIterable__const_iterator) OperatorMinus(j int) *QAssociativeIterable__const_iterator {
	_goptr := newQAssociativeIterable__const_iterator(C.QAssociativeIterable__const_iterator_operatorMinus(this.h, (C.int)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QAssociativeIterable__const_iterator) Delete() {
	C.QAssociativeIterable__const_iterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAssociativeIterable__const_iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QAssociativeIterable__const_iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
