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
	QVariant__LastType             QVariant__Type = -1 // overflow

)

type QVariant struct {
	h  *C.QVariant
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QVariant) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
func NewQVariant2(typeVal QMetaType) *QVariant {
	defer runtime.KeepAlive(typeVal)

	return newQVariant(C.QVariant_new2(typeVal.cPointer()))
}

// NewQVariant3 constructs a new QVariant object.
func NewQVariant3(other *QVariant) *QVariant {
	defer runtime.KeepAlive(other)

	return newQVariant(C.QVariant_new3(other.cPointer()))
}

// NewQVariant4 constructs a new QVariant object.
func NewQVariant4(i int) *QVariant {

	return newQVariant(C.QVariant_new4((C.int)(i)))
}

// NewQVariant5 constructs a new QVariant object.
func NewQVariant5(ui uint) *QVariant {

	return newQVariant(C.QVariant_new5((C.uint)(ui)))
}

// NewQVariant6 constructs a new QVariant object.
func NewQVariant6(ll int64) *QVariant {

	return newQVariant(C.QVariant_new6((C.longlong)(ll)))
}

// NewQVariant7 constructs a new QVariant object.
func NewQVariant7(ull uint64) *QVariant {

	return newQVariant(C.QVariant_new7((C.ulonglong)(ull)))
}

// NewQVariant8 constructs a new QVariant object.
func NewQVariant8(b bool) *QVariant {

	return newQVariant(C.QVariant_new8((C.bool)(b)))
}

// NewQVariant9 constructs a new QVariant object.
func NewQVariant9(d float64) *QVariant {

	return newQVariant(C.QVariant_new9((C.double)(d)))
}

// NewQVariant10 constructs a new QVariant object.
func NewQVariant10(f float32) *QVariant {

	return newQVariant(C.QVariant_new10((C.float)(f)))
}

// NewQVariant11 constructs a new QVariant object.
func NewQVariant11(str string) *QVariant {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))

	return newQVariant(C.QVariant_new11(str_Cstring))
}

// NewQVariant12 constructs a new QVariant object.
func NewQVariant12(bytearray []byte) *QVariant {
	bytearray_alias := C.struct_miqt_string{}
	if len(bytearray) > 0 {
		bytearray_alias.data = (*C.char)(unsafe.Pointer(&bytearray[0]))
	} else {
		bytearray_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	bytearray_alias.len = C.size_t(len(bytearray))

	return newQVariant(C.QVariant_new12(bytearray_alias))
}

// NewQVariant13 constructs a new QVariant object.
func NewQVariant13(bitarray *QBitArray) *QVariant {
	defer runtime.KeepAlive(bitarray)

	return newQVariant(C.QVariant_new13(bitarray.cPointer()))
}

// NewQVariant14 constructs a new QVariant object.
func NewQVariant14(stringVal string) *QVariant {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))

	return newQVariant(C.QVariant_new14(stringVal_ms))
}

// NewQVariant15 constructs a new QVariant object.
func NewQVariant15(stringlist []string) *QVariant {
	stringlist_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(stringlist))))
	defer C.free(unsafe.Pointer(stringlist_CArray_ptr))
	stringlist_CArray := unsafe.Slice(stringlist_CArray_ptr, len(stringlist))
	for i := range stringlist {
		stringlist_i_ms := C.struct_miqt_string{}
		stringlist_i_ms.data = C.CString(stringlist[i])
		stringlist_i_ms.len = C.size_t(len(stringlist[i]))
		defer C.free(unsafe.Pointer(stringlist_i_ms.data))
		stringlist_CArray[i] = stringlist_i_ms
	}
	stringlist_ma := C.struct_miqt_array{len: C.size_t(len(stringlist)), data: unsafe.Pointer(stringlist_CArray_ptr)}

	return newQVariant(C.QVariant_new15(stringlist_ma))
}

// NewQVariant16 constructs a new QVariant object.
func NewQVariant16(qchar QChar) *QVariant {
	defer runtime.KeepAlive(qchar)

	return newQVariant(C.QVariant_new16(qchar.cPointer()))
}

// NewQVariant17 constructs a new QVariant object.
func NewQVariant17(date QDate) *QVariant {
	defer runtime.KeepAlive(date)

	return newQVariant(C.QVariant_new17(date.cPointer()))
}

// NewQVariant18 constructs a new QVariant object.
func NewQVariant18(time QTime) *QVariant {
	defer runtime.KeepAlive(time)

	return newQVariant(C.QVariant_new18(time.cPointer()))
}

// NewQVariant19 constructs a new QVariant object.
func NewQVariant19(datetime *QDateTime) *QVariant {
	defer runtime.KeepAlive(datetime)

	return newQVariant(C.QVariant_new19(datetime.cPointer()))
}

// NewQVariant20 constructs a new QVariant object.
func NewQVariant20(mapVal map[string]QVariant) *QVariant {
	defer runtime.KeepAlive(mapVal)
	mapVal_Keys_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Keys_CArray_ptr))
	mapVal_Keys_CArray := unsafe.Slice(mapVal_Keys_CArray_ptr, len(mapVal))
	mapVal_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Values_CArray_ptr))
	mapVal_Values_CArray := unsafe.Slice(mapVal_Values_CArray_ptr, len(mapVal))
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
		keys:   unsafe.Pointer(mapVal_Keys_CArray_ptr),
		values: unsafe.Pointer(mapVal_Values_CArray_ptr),
	}

	return newQVariant(C.QVariant_new20(mapVal_mm))
}

// NewQVariant21 constructs a new QVariant object.
func NewQVariant21(hash map[string]QVariant) *QVariant {
	defer runtime.KeepAlive(hash)
	hash_Keys_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(hash))))
	defer C.free(unsafe.Pointer(hash_Keys_CArray_ptr))
	hash_Keys_CArray := unsafe.Slice(hash_Keys_CArray_ptr, len(hash))
	hash_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(hash))))
	defer C.free(unsafe.Pointer(hash_Values_CArray_ptr))
	hash_Values_CArray := unsafe.Slice(hash_Values_CArray_ptr, len(hash))
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
		keys:   unsafe.Pointer(hash_Keys_CArray_ptr),
		values: unsafe.Pointer(hash_Values_CArray_ptr),
	}

	return newQVariant(C.QVariant_new21(hash_mm))
}

// NewQVariant22 constructs a new QVariant object.
func NewQVariant22(size *QSize) *QVariant {
	defer runtime.KeepAlive(size)

	return newQVariant(C.QVariant_new22(size.cPointer()))
}

// NewQVariant23 constructs a new QVariant object.
func NewQVariant23(size *QSizeF) *QVariant {
	defer runtime.KeepAlive(size)

	return newQVariant(C.QVariant_new23(size.cPointer()))
}

// NewQVariant24 constructs a new QVariant object.
func NewQVariant24(pt *QPoint) *QVariant {
	defer runtime.KeepAlive(pt)

	return newQVariant(C.QVariant_new24(pt.cPointer()))
}

// NewQVariant25 constructs a new QVariant object.
func NewQVariant25(pt *QPointF) *QVariant {
	defer runtime.KeepAlive(pt)

	return newQVariant(C.QVariant_new25(pt.cPointer()))
}

// NewQVariant26 constructs a new QVariant object.
func NewQVariant26(line *QLine) *QVariant {
	defer runtime.KeepAlive(line)

	return newQVariant(C.QVariant_new26(line.cPointer()))
}

// NewQVariant27 constructs a new QVariant object.
func NewQVariant27(line *QLineF) *QVariant {
	defer runtime.KeepAlive(line)

	return newQVariant(C.QVariant_new27(line.cPointer()))
}

// NewQVariant28 constructs a new QVariant object.
func NewQVariant28(rect *QRect) *QVariant {
	defer runtime.KeepAlive(rect)

	return newQVariant(C.QVariant_new28(rect.cPointer()))
}

// NewQVariant29 constructs a new QVariant object.
func NewQVariant29(rect *QRectF) *QVariant {
	defer runtime.KeepAlive(rect)

	return newQVariant(C.QVariant_new29(rect.cPointer()))
}

// NewQVariant30 constructs a new QVariant object.
func NewQVariant30(locale *QLocale) *QVariant {
	defer runtime.KeepAlive(locale)

	return newQVariant(C.QVariant_new30(locale.cPointer()))
}

// NewQVariant31 constructs a new QVariant object.
func NewQVariant31(re *QRegularExpression) *QVariant {
	defer runtime.KeepAlive(re)

	return newQVariant(C.QVariant_new31(re.cPointer()))
}

// NewQVariant32 constructs a new QVariant object.
func NewQVariant32(easing *QEasingCurve) *QVariant {
	defer runtime.KeepAlive(easing)

	return newQVariant(C.QVariant_new32(easing.cPointer()))
}

// NewQVariant33 constructs a new QVariant object.
func NewQVariant33(uuid *QUuid) *QVariant {
	defer runtime.KeepAlive(uuid)

	return newQVariant(C.QVariant_new33(uuid.cPointer()))
}

// NewQVariant34 constructs a new QVariant object.
func NewQVariant34(url *QUrl) *QVariant {
	defer runtime.KeepAlive(url)

	return newQVariant(C.QVariant_new34(url.cPointer()))
}

// NewQVariant35 constructs a new QVariant object.
func NewQVariant35(jsonValue *QJsonValue) *QVariant {
	defer runtime.KeepAlive(jsonValue)

	return newQVariant(C.QVariant_new35(jsonValue.cPointer()))
}

// NewQVariant36 constructs a new QVariant object.
func NewQVariant36(jsonObject *QJsonObject) *QVariant {
	defer runtime.KeepAlive(jsonObject)

	return newQVariant(C.QVariant_new36(jsonObject.cPointer()))
}

// NewQVariant37 constructs a new QVariant object.
func NewQVariant37(jsonArray *QJsonArray) *QVariant {
	defer runtime.KeepAlive(jsonArray)

	return newQVariant(C.QVariant_new37(jsonArray.cPointer()))
}

// NewQVariant38 constructs a new QVariant object.
func NewQVariant38(jsonDocument *QJsonDocument) *QVariant {
	defer runtime.KeepAlive(jsonDocument)

	return newQVariant(C.QVariant_new38(jsonDocument.cPointer()))
}

// NewQVariant39 constructs a new QVariant object.
func NewQVariant39(modelIndex *QModelIndex) *QVariant {
	defer runtime.KeepAlive(modelIndex)

	return newQVariant(C.QVariant_new39(modelIndex.cPointer()))
}

// NewQVariant40 constructs a new QVariant object.
func NewQVariant40(modelIndex *QPersistentModelIndex) *QVariant {
	defer runtime.KeepAlive(modelIndex)

	return newQVariant(C.QVariant_new40(modelIndex.cPointer()))
}

// NewQVariant41 constructs a new QVariant object.
func NewQVariant41(typeVal QVariant__Type) *QVariant {

	return newQVariant(C.QVariant_new41((C.int)(typeVal)))
}

// NewQVariant42 constructs a new QVariant object.
func NewQVariant42(typeVal QMetaType, copyVal unsafe.Pointer) *QVariant {
	defer runtime.KeepAlive(typeVal)

	return newQVariant(C.QVariant_new42(typeVal.cPointer(), copyVal))
}

// NewQVariant43 constructs a new QVariant object.
func NewQVariant43(list []QVariant) *QVariant {
	defer runtime.KeepAlive(list)
	list_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray_ptr))
	list_CArray := unsafe.Slice(list_CArray_ptr, len(list))
	for i := range list {
		list_CArray[i] = list[i].cPointer()
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray_ptr)}

	return newQVariant(C.QVariant_new43(list_ma))
}

func (this *QVariant) OperatorAssign(other *QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QVariant_operatorAssign(this.h, other.cPointer())
}

func (this *QVariant) Swap(other *QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QVariant_swap(this.h, other.cPointer())
}

func (this *QVariant) UserType() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QVariant_userType(this.h))
}

func (this *QVariant) TypeId() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QVariant_typeId(this.h))
}

func (this *QVariant) TypeName() string {
	defer runtime.KeepAlive(this)
	_ret := C.QVariant_typeName(this.h)
	return C.GoString(_ret)
}

func (this *QVariant) MetaType() *QMetaType {
	defer runtime.KeepAlive(this)
	_goptr := newQMetaType(C.QVariant_metaType(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) CanConvert(targetType QMetaType) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(targetType)
	return (bool)(C.QVariant_canConvert(this.h, targetType.cPointer()))
}

func (this *QVariant) Convert(typeVal QMetaType) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(typeVal)
	return (bool)(C.QVariant_convert(this.h, typeVal.cPointer()))
}

func (this *QVariant) CanView(targetType QMetaType) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(targetType)
	return (bool)(C.QVariant_canView(this.h, targetType.cPointer()))
}

func (this *QVariant) CanConvertWithTargetTypeId(targetTypeId int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVariant_canConvertWithTargetTypeId(this.h, (C.int)(targetTypeId)))
}

func (this *QVariant) ConvertWithTargetTypeId(targetTypeId int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVariant_convertWithTargetTypeId(this.h, (C.int)(targetTypeId)))
}

func (this *QVariant) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVariant_isValid(this.h))
}

func (this *QVariant) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVariant_isNull(this.h))
}

func (this *QVariant) Clear() {
	defer runtime.KeepAlive(this)
	C.QVariant_clear(this.h)
}

func (this *QVariant) Detach() {
	defer runtime.KeepAlive(this)
	C.QVariant_detach(this.h)
}

func (this *QVariant) IsDetached() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVariant_isDetached(this.h))
}

func (this *QVariant) ToInt() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QVariant_toInt(this.h))
}

func (this *QVariant) ToUInt() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QVariant_toUInt(this.h))
}

func (this *QVariant) ToLongLong() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QVariant_toLongLong(this.h))
}

func (this *QVariant) ToULongLong() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QVariant_toULongLong(this.h))
}

func (this *QVariant) ToBool() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVariant_toBool(this.h))
}

func (this *QVariant) ToDouble() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QVariant_toDouble(this.h))
}

func (this *QVariant) ToFloat() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVariant_toFloat(this.h))
}

func (this *QVariant) ToReal() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QVariant_toReal(this.h))
}

func (this *QVariant) ToByteArray() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QVariant_toByteArray(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QVariant) ToBitArray() *QBitArray {
	defer runtime.KeepAlive(this)
	_goptr := newQBitArray(C.QVariant_toBitArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QVariant_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVariant) ToStringList() []string {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QVariant_toStringList(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QVariant) ToChar() *QChar {
	defer runtime.KeepAlive(this)
	_goptr := newQChar(C.QVariant_toChar(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToDate() *QDate {
	defer runtime.KeepAlive(this)
	_goptr := newQDate(C.QVariant_toDate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToTime() *QTime {
	defer runtime.KeepAlive(this)
	_goptr := newQTime(C.QVariant_toTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToDateTime() *QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := newQDateTime(C.QVariant_toDateTime(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToList() []QVariant {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QVariant_toList(this.h)
	_ret := make([]QVariant, int(_ma.len))
	_outCast := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQVariant(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QVariant) ToMap() map[string]QVariant {
	defer runtime.KeepAlive(this)
	var _mm C.struct_miqt_map = C.QVariant_toMap(this.h)
	_ret := make(map[string]QVariant, int(_mm.len))
	_Keys := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_mm.keys)), int(_mm.len))
	_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_mm.values)), int(_mm.len))
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
	defer runtime.KeepAlive(this)
	var _mm C.struct_miqt_map = C.QVariant_toHash(this.h)
	_ret := make(map[string]QVariant, int(_mm.len))
	_Keys := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_mm.keys)), int(_mm.len))
	_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_mm.values)), int(_mm.len))
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
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QVariant_toPoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToPointF() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QVariant_toPointF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToRect() *QRect {
	defer runtime.KeepAlive(this)
	_goptr := newQRect(C.QVariant_toRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToSize() *QSize {
	defer runtime.KeepAlive(this)
	_goptr := newQSize(C.QVariant_toSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToSizeF() *QSizeF {
	defer runtime.KeepAlive(this)
	_goptr := newQSizeF(C.QVariant_toSizeF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToLine() *QLine {
	defer runtime.KeepAlive(this)
	_goptr := newQLine(C.QVariant_toLine(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToLineF() *QLineF {
	defer runtime.KeepAlive(this)
	_goptr := newQLineF(C.QVariant_toLineF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToRectF() *QRectF {
	defer runtime.KeepAlive(this)
	_goptr := newQRectF(C.QVariant_toRectF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToLocale() *QLocale {
	defer runtime.KeepAlive(this)
	_goptr := newQLocale(C.QVariant_toLocale(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToRegularExpression() *QRegularExpression {
	defer runtime.KeepAlive(this)
	_goptr := newQRegularExpression(C.QVariant_toRegularExpression(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToEasingCurve() *QEasingCurve {
	defer runtime.KeepAlive(this)
	_goptr := newQEasingCurve(C.QVariant_toEasingCurve(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToUuid() *QUuid {
	defer runtime.KeepAlive(this)
	_goptr := newQUuid(C.QVariant_toUuid(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToUrl() *QUrl {
	defer runtime.KeepAlive(this)
	_goptr := newQUrl(C.QVariant_toUrl(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonValue() *QJsonValue {
	defer runtime.KeepAlive(this)
	_goptr := newQJsonValue(C.QVariant_toJsonValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonObject() *QJsonObject {
	defer runtime.KeepAlive(this)
	_goptr := newQJsonObject(C.QVariant_toJsonObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonArray() *QJsonArray {
	defer runtime.KeepAlive(this)
	_goptr := newQJsonArray(C.QVariant_toJsonArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToJsonDocument() *QJsonDocument {
	defer runtime.KeepAlive(this)
	_goptr := newQJsonDocument(C.QVariant_toJsonDocument(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToModelIndex() *QModelIndex {
	defer runtime.KeepAlive(this)
	_goptr := newQModelIndex(C.QVariant_toModelIndex(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToPersistentModelIndex() *QPersistentModelIndex {
	defer runtime.KeepAlive(this)
	_goptr := newQPersistentModelIndex(C.QVariant_toPersistentModelIndex(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) Load(ds *QDataStream) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(ds)
	C.QVariant_load(this.h, ds.cPointer())
}

func (this *QVariant) Save(ds *QDataStream) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(ds)
	C.QVariant_save(this.h, ds.cPointer())
}

func (this *QVariant) Type() QVariant__Type {
	defer runtime.KeepAlive(this)
	return (QVariant__Type)(C.QVariant_type(this.h))
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
	defer runtime.KeepAlive(this)
	return (unsafe.Pointer)(C.QVariant_data(this.h))
}

func (this *QVariant) ConstData() unsafe.Pointer {
	defer runtime.KeepAlive(this)
	return (unsafe.Pointer)(C.QVariant_constData(this.h))
}

func (this *QVariant) Data2() unsafe.Pointer {
	defer runtime.KeepAlive(this)
	return (unsafe.Pointer)(C.QVariant_data2(this.h))
}

func (this *QVariant) SetValue(avalue *QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(avalue)
	C.QVariant_setValue(this.h, avalue.cPointer())
}

func QVariant_Compare(lhs *QVariant, rhs *QVariant) *QPartialOrdering {
	defer runtime.KeepAlive(lhs)
	defer runtime.KeepAlive(rhs)
	_goptr := newQPartialOrdering(C.QVariant_compare(lhs.cPointer(), rhs.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariant) ToIntWithOk(ok *bool) int {
	defer runtime.KeepAlive(this)
	return (int)(C.QVariant_toIntWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToUIntWithOk(ok *bool) uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QVariant_toUIntWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToLongLongWithOk(ok *bool) int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QVariant_toLongLongWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToULongLongWithOk(ok *bool) uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QVariant_toULongLongWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToDoubleWithOk(ok *bool) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QVariant_toDoubleWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToFloatWithOk(ok *bool) float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVariant_toFloatWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QVariant) ToRealWithOk(ok *bool) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QVariant_toRealWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

// Delete this object from C++ memory.
func (this *QVariant) Delete() {
	C.QVariant_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QVariant) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QVariant_delete((*C.QVariant)(gc[0]))
	})
	this.miqtSetGC(gc)
}
