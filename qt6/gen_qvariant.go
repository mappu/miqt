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
func NewQVariant2(typeVal QMetaType) *QVariant {
	ret := C.QVariant_new2(typeVal.cPointer())
	return newQVariant(ret)
}

// NewQVariant3 constructs a new QVariant object.
func NewQVariant3(other *QVariant) *QVariant {
	ret := C.QVariant_new3(other.cPointer())
	return newQVariant(ret)
}

// NewQVariant4 constructs a new QVariant object.
func NewQVariant4(i int) *QVariant {
	ret := C.QVariant_new4((C.int)(i))
	return newQVariant(ret)
}

// NewQVariant5 constructs a new QVariant object.
func NewQVariant5(ui uint) *QVariant {
	ret := C.QVariant_new5((C.uint)(ui))
	return newQVariant(ret)
}

// NewQVariant6 constructs a new QVariant object.
func NewQVariant6(ll int64) *QVariant {
	ret := C.QVariant_new6((C.longlong)(ll))
	return newQVariant(ret)
}

// NewQVariant7 constructs a new QVariant object.
func NewQVariant7(ull uint64) *QVariant {
	ret := C.QVariant_new7((C.ulonglong)(ull))
	return newQVariant(ret)
}

// NewQVariant8 constructs a new QVariant object.
func NewQVariant8(b bool) *QVariant {
	ret := C.QVariant_new8((C.bool)(b))
	return newQVariant(ret)
}

// NewQVariant9 constructs a new QVariant object.
func NewQVariant9(d float64) *QVariant {
	ret := C.QVariant_new9((C.double)(d))
	return newQVariant(ret)
}

// NewQVariant10 constructs a new QVariant object.
func NewQVariant10(f float32) *QVariant {
	ret := C.QVariant_new10((C.float)(f))
	return newQVariant(ret)
}

// NewQVariant11 constructs a new QVariant object.
func NewQVariant11(str string) *QVariant {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QVariant_new11(str_Cstring)
	return newQVariant(ret)
}

// NewQVariant12 constructs a new QVariant object.
func NewQVariant12(bytearray []byte) *QVariant {
	bytearray_alias := C.struct_miqt_string{}
	bytearray_alias.data = (*C.char)(unsafe.Pointer(&bytearray[0]))
	bytearray_alias.len = C.size_t(len(bytearray))
	ret := C.QVariant_new12(bytearray_alias)
	return newQVariant(ret)
}

// NewQVariant13 constructs a new QVariant object.
func NewQVariant13(bitarray *QBitArray) *QVariant {
	ret := C.QVariant_new13(bitarray.cPointer())
	return newQVariant(ret)
}

// NewQVariant14 constructs a new QVariant object.
func NewQVariant14(stringVal string) *QVariant {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	ret := C.QVariant_new14(stringVal_ms)
	return newQVariant(ret)
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
	ret := C.QVariant_new15(stringlist_ma)
	return newQVariant(ret)
}

// NewQVariant16 constructs a new QVariant object.
func NewQVariant16(qchar QChar) *QVariant {
	ret := C.QVariant_new16(qchar.cPointer())
	return newQVariant(ret)
}

// NewQVariant17 constructs a new QVariant object.
func NewQVariant17(date QDate) *QVariant {
	ret := C.QVariant_new17(date.cPointer())
	return newQVariant(ret)
}

// NewQVariant18 constructs a new QVariant object.
func NewQVariant18(time QTime) *QVariant {
	ret := C.QVariant_new18(time.cPointer())
	return newQVariant(ret)
}

// NewQVariant19 constructs a new QVariant object.
func NewQVariant19(datetime *QDateTime) *QVariant {
	ret := C.QVariant_new19(datetime.cPointer())
	return newQVariant(ret)
}

// NewQVariant20 constructs a new QVariant object.
func NewQVariant20(size *QSize) *QVariant {
	ret := C.QVariant_new20(size.cPointer())
	return newQVariant(ret)
}

// NewQVariant21 constructs a new QVariant object.
func NewQVariant21(size *QSizeF) *QVariant {
	ret := C.QVariant_new21(size.cPointer())
	return newQVariant(ret)
}

// NewQVariant22 constructs a new QVariant object.
func NewQVariant22(pt *QPoint) *QVariant {
	ret := C.QVariant_new22(pt.cPointer())
	return newQVariant(ret)
}

// NewQVariant23 constructs a new QVariant object.
func NewQVariant23(pt *QPointF) *QVariant {
	ret := C.QVariant_new23(pt.cPointer())
	return newQVariant(ret)
}

// NewQVariant24 constructs a new QVariant object.
func NewQVariant24(line *QLine) *QVariant {
	ret := C.QVariant_new24(line.cPointer())
	return newQVariant(ret)
}

// NewQVariant25 constructs a new QVariant object.
func NewQVariant25(line *QLineF) *QVariant {
	ret := C.QVariant_new25(line.cPointer())
	return newQVariant(ret)
}

// NewQVariant26 constructs a new QVariant object.
func NewQVariant26(rect *QRect) *QVariant {
	ret := C.QVariant_new26(rect.cPointer())
	return newQVariant(ret)
}

// NewQVariant27 constructs a new QVariant object.
func NewQVariant27(rect *QRectF) *QVariant {
	ret := C.QVariant_new27(rect.cPointer())
	return newQVariant(ret)
}

// NewQVariant28 constructs a new QVariant object.
func NewQVariant28(locale *QLocale) *QVariant {
	ret := C.QVariant_new28(locale.cPointer())
	return newQVariant(ret)
}

// NewQVariant29 constructs a new QVariant object.
func NewQVariant29(re *QRegularExpression) *QVariant {
	ret := C.QVariant_new29(re.cPointer())
	return newQVariant(ret)
}

// NewQVariant30 constructs a new QVariant object.
func NewQVariant30(easing *QEasingCurve) *QVariant {
	ret := C.QVariant_new30(easing.cPointer())
	return newQVariant(ret)
}

// NewQVariant31 constructs a new QVariant object.
func NewQVariant31(uuid *QUuid) *QVariant {
	ret := C.QVariant_new31(uuid.cPointer())
	return newQVariant(ret)
}

// NewQVariant32 constructs a new QVariant object.
func NewQVariant32(url *QUrl) *QVariant {
	ret := C.QVariant_new32(url.cPointer())
	return newQVariant(ret)
}

// NewQVariant33 constructs a new QVariant object.
func NewQVariant33(jsonValue *QJsonValue) *QVariant {
	ret := C.QVariant_new33(jsonValue.cPointer())
	return newQVariant(ret)
}

// NewQVariant34 constructs a new QVariant object.
func NewQVariant34(jsonObject *QJsonObject) *QVariant {
	ret := C.QVariant_new34(jsonObject.cPointer())
	return newQVariant(ret)
}

// NewQVariant35 constructs a new QVariant object.
func NewQVariant35(jsonArray *QJsonArray) *QVariant {
	ret := C.QVariant_new35(jsonArray.cPointer())
	return newQVariant(ret)
}

// NewQVariant36 constructs a new QVariant object.
func NewQVariant36(jsonDocument *QJsonDocument) *QVariant {
	ret := C.QVariant_new36(jsonDocument.cPointer())
	return newQVariant(ret)
}

// NewQVariant37 constructs a new QVariant object.
func NewQVariant37(modelIndex *QModelIndex) *QVariant {
	ret := C.QVariant_new37(modelIndex.cPointer())
	return newQVariant(ret)
}

// NewQVariant38 constructs a new QVariant object.
func NewQVariant38(modelIndex *QPersistentModelIndex) *QVariant {
	ret := C.QVariant_new38(modelIndex.cPointer())
	return newQVariant(ret)
}

// NewQVariant39 constructs a new QVariant object.
func NewQVariant39(typeVal QVariant__Type) *QVariant {
	ret := C.QVariant_new39((C.int)(typeVal))
	return newQVariant(ret)
}

// NewQVariant40 constructs a new QVariant object.
func NewQVariant40(typeVal QMetaType, copyVal unsafe.Pointer) *QVariant {
	ret := C.QVariant_new40(typeVal.cPointer(), copyVal)
	return newQVariant(ret)
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
	_ret := C.QVariant_MetaType(this.h)
	_goptr := newQMetaType(_ret)
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
	_ret := C.QVariant_Compare(lhs.cPointer(), rhs.cPointer())
	_goptr := newQPartialOrdering(_ret)
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

type QtPrivate__QVariantTypeCoercer struct {
	h *C.QtPrivate__QVariantTypeCoercer
}

func (this *QtPrivate__QVariantTypeCoercer) cPointer() *C.QtPrivate__QVariantTypeCoercer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__QVariantTypeCoercer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtPrivate__QVariantTypeCoercer(h *C.QtPrivate__QVariantTypeCoercer) *QtPrivate__QVariantTypeCoercer {
	if h == nil {
		return nil
	}
	return &QtPrivate__QVariantTypeCoercer{h: h}
}

func UnsafeNewQtPrivate__QVariantTypeCoercer(h unsafe.Pointer) *QtPrivate__QVariantTypeCoercer {
	return newQtPrivate__QVariantTypeCoercer((*C.QtPrivate__QVariantTypeCoercer)(h))
}

func (this *QtPrivate__QVariantTypeCoercer) Convert(value *QVariant, typeVal *QMetaType) unsafe.Pointer {
	return (unsafe.Pointer)(C.QtPrivate__QVariantTypeCoercer_Convert(this.h, value.cPointer(), typeVal.cPointer()))
}

func (this *QtPrivate__QVariantTypeCoercer) Coerce(value *QVariant, typeVal *QMetaType) unsafe.Pointer {
	return (unsafe.Pointer)(C.QtPrivate__QVariantTypeCoercer_Coerce(this.h, value.cPointer(), typeVal.cPointer()))
}

// Delete this object from C++ memory.
func (this *QtPrivate__QVariantTypeCoercer) Delete() {
	C.QtPrivate__QVariantTypeCoercer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__QVariantTypeCoercer) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__QVariantTypeCoercer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QVariantConstPointer struct {
	h *C.QVariantConstPointer
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

func newQVariantConstPointer(h *C.QVariantConstPointer) *QVariantConstPointer {
	if h == nil {
		return nil
	}
	return &QVariantConstPointer{h: h}
}

func UnsafeNewQVariantConstPointer(h unsafe.Pointer) *QVariantConstPointer {
	return newQVariantConstPointer((*C.QVariantConstPointer)(h))
}

// NewQVariantConstPointer constructs a new QVariantConstPointer object.
func NewQVariantConstPointer(variant QVariant) *QVariantConstPointer {
	ret := C.QVariantConstPointer_new(variant.cPointer())
	return newQVariantConstPointer(ret)
}

// NewQVariantConstPointer2 constructs a new QVariantConstPointer object.
func NewQVariantConstPointer2(param1 *QVariantConstPointer) *QVariantConstPointer {
	ret := C.QVariantConstPointer_new2(param1.cPointer())
	return newQVariantConstPointer(ret)
}

func (this *QVariantConstPointer) OperatorMultiply() *QVariant {
	_ret := C.QVariantConstPointer_OperatorMultiply(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariantConstPointer) OperatorMinusGreater() *QVariant {
	return UnsafeNewQVariant(unsafe.Pointer(C.QVariantConstPointer_OperatorMinusGreater(this.h)))
}

func (this *QVariantConstPointer) OperatorAssign(param1 *QVariantConstPointer) {
	C.QVariantConstPointer_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QVariantConstPointer) Delete() {
	C.QVariantConstPointer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVariantConstPointer) GoGC() {
	runtime.SetFinalizer(this, func(this *QVariantConstPointer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
