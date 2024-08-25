package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qvariant.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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

func newQVariant(h *C.QVariant) *QVariant {
	return &QVariant{h: h}
}

func newQVariant_U(h unsafe.Pointer) *QVariant {
	return newQVariant((*C.QVariant)(h))
}

// NewQVariant constructs a new QVariant object.
func NewQVariant() *QVariant {
	ret := C.QVariant_new()
	return newQVariant(ret)
}

// NewQVariant2 constructs a new QVariant object.
func NewQVariant2(other *QVariant) *QVariant {
	ret := C.QVariant_new2(other.cPointer())
	return newQVariant(ret)
}

// NewQVariant3 constructs a new QVariant object.
func NewQVariant3(s *QDataStream) *QVariant {
	ret := C.QVariant_new3(s.cPointer())
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
	ret := C.QVariant_new6((C.int64_t)(ll))
	return newQVariant(ret)
}

// NewQVariant7 constructs a new QVariant object.
func NewQVariant7(ull uint64) *QVariant {
	ret := C.QVariant_new7((C.uint64_t)(ull))
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
func NewQVariant12(bytearray *QByteArray) *QVariant {
	ret := C.QVariant_new12(bytearray.cPointer())
	return newQVariant(ret)
}

// NewQVariant13 constructs a new QVariant object.
func NewQVariant13(bitarray *QBitArray) *QVariant {
	ret := C.QVariant_new13(bitarray.cPointer())
	return newQVariant(ret)
}

// NewQVariant14 constructs a new QVariant object.
func NewQVariant14(stringVal string) *QVariant {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QVariant_new14(stringVal_Cstring, C.ulong(len(stringVal)))
	return newQVariant(ret)
}

// NewQVariant15 constructs a new QVariant object.
func NewQVariant15(stringlist []string) *QVariant {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	stringlist_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(stringlist))))
	stringlist_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(stringlist))))
	defer C.free(unsafe.Pointer(stringlist_CArray))
	defer C.free(unsafe.Pointer(stringlist_Lengths))
	for i := range stringlist {
		single_cstring := C.CString(stringlist[i])
		defer C.free(unsafe.Pointer(single_cstring))
		stringlist_CArray[i] = single_cstring
		stringlist_Lengths[i] = (C.size_t)(len(stringlist[i]))
	}
	ret := C.QVariant_new15(&stringlist_CArray[0], &stringlist_Lengths[0], C.ulong(len(stringlist)))
	return newQVariant(ret)
}

// NewQVariant16 constructs a new QVariant object.
func NewQVariant16(qchar QChar) *QVariant {
	ret := C.QVariant_new16(qchar.cPointer())
	return newQVariant(ret)
}

// NewQVariant17 constructs a new QVariant object.
func NewQVariant17(date *QDate) *QVariant {
	ret := C.QVariant_new17(date.cPointer())
	return newQVariant(ret)
}

// NewQVariant18 constructs a new QVariant object.
func NewQVariant18(time *QTime) *QVariant {
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
func NewQVariant29(regExp *QRegExp) *QVariant {
	ret := C.QVariant_new29(regExp.cPointer())
	return newQVariant(ret)
}

// NewQVariant30 constructs a new QVariant object.
func NewQVariant30(re *QRegularExpression) *QVariant {
	ret := C.QVariant_new30(re.cPointer())
	return newQVariant(ret)
}

// NewQVariant31 constructs a new QVariant object.
func NewQVariant31(easing *QEasingCurve) *QVariant {
	ret := C.QVariant_new31(easing.cPointer())
	return newQVariant(ret)
}

// NewQVariant32 constructs a new QVariant object.
func NewQVariant32(uuid *QUuid) *QVariant {
	ret := C.QVariant_new32(uuid.cPointer())
	return newQVariant(ret)
}

// NewQVariant33 constructs a new QVariant object.
func NewQVariant33(url *QUrl) *QVariant {
	ret := C.QVariant_new33(url.cPointer())
	return newQVariant(ret)
}

// NewQVariant34 constructs a new QVariant object.
func NewQVariant34(jsonValue *QJsonValue) *QVariant {
	ret := C.QVariant_new34(jsonValue.cPointer())
	return newQVariant(ret)
}

// NewQVariant35 constructs a new QVariant object.
func NewQVariant35(jsonObject *QJsonObject) *QVariant {
	ret := C.QVariant_new35(jsonObject.cPointer())
	return newQVariant(ret)
}

// NewQVariant36 constructs a new QVariant object.
func NewQVariant36(jsonArray *QJsonArray) *QVariant {
	ret := C.QVariant_new36(jsonArray.cPointer())
	return newQVariant(ret)
}

// NewQVariant37 constructs a new QVariant object.
func NewQVariant37(jsonDocument *QJsonDocument) *QVariant {
	ret := C.QVariant_new37(jsonDocument.cPointer())
	return newQVariant(ret)
}

// NewQVariant38 constructs a new QVariant object.
func NewQVariant38(modelIndex *QModelIndex) *QVariant {
	ret := C.QVariant_new38(modelIndex.cPointer())
	return newQVariant(ret)
}

// NewQVariant39 constructs a new QVariant object.
func NewQVariant39(modelIndex *QPersistentModelIndex) *QVariant {
	ret := C.QVariant_new39(modelIndex.cPointer())
	return newQVariant(ret)
}

func (this *QVariant) OperatorAssign(other *QVariant) {
	C.QVariant_OperatorAssign(this.h, other.cPointer())
}

func (this *QVariant) Swap(other *QVariant) {
	C.QVariant_Swap(this.h, other.cPointer())
}

func (this *QVariant) UserType() int {
	ret := C.QVariant_UserType(this.h)
	return (int)(ret)
}

func (this *QVariant) TypeName() unsafe.Pointer {
	ret := C.QVariant_TypeName(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QVariant) CanConvert(targetTypeId int) bool {
	ret := C.QVariant_CanConvert(this.h, (C.int)(targetTypeId))
	return (bool)(ret)
}

func (this *QVariant) Convert(targetTypeId int) bool {
	ret := C.QVariant_Convert(this.h, (C.int)(targetTypeId))
	return (bool)(ret)
}

func (this *QVariant) IsValid() bool {
	ret := C.QVariant_IsValid(this.h)
	return (bool)(ret)
}

func (this *QVariant) IsNull() bool {
	ret := C.QVariant_IsNull(this.h)
	return (bool)(ret)
}

func (this *QVariant) Clear() {
	C.QVariant_Clear(this.h)
}

func (this *QVariant) Detach() {
	C.QVariant_Detach(this.h)
}

func (this *QVariant) IsDetached() bool {
	ret := C.QVariant_IsDetached(this.h)
	return (bool)(ret)
}

func (this *QVariant) ToInt() int {
	ret := C.QVariant_ToInt(this.h)
	return (int)(ret)
}

func (this *QVariant) ToUInt() uint {
	ret := C.QVariant_ToUInt(this.h)
	return (uint)(ret)
}

func (this *QVariant) ToLongLong() int64 {
	ret := C.QVariant_ToLongLong(this.h)
	return (int64)(ret)
}

func (this *QVariant) ToULongLong() uint64 {
	ret := C.QVariant_ToULongLong(this.h)
	return (uint64)(ret)
}

func (this *QVariant) ToBool() bool {
	ret := C.QVariant_ToBool(this.h)
	return (bool)(ret)
}

func (this *QVariant) ToDouble() float64 {
	ret := C.QVariant_ToDouble(this.h)
	return (float64)(ret)
}

func (this *QVariant) ToFloat() float32 {
	ret := C.QVariant_ToFloat(this.h)
	return (float32)(ret)
}

func (this *QVariant) ToReal() float64 {
	ret := C.QVariant_ToReal(this.h)
	return (float64)(ret)
}

func (this *QVariant) ToByteArray() *QByteArray {
	ret := C.QVariant_ToByteArray(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToBitArray() *QBitArray {
	ret := C.QVariant_ToBitArray(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBitArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBitArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QVariant_ToString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QVariant) ToStringList() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QVariant_ToStringList(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QVariant) ToChar() *QChar {
	ret := C.QVariant_ToChar(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToDate() *QDate {
	ret := C.QVariant_ToDate(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToTime() *QTime {
	ret := C.QVariant_ToTime(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToDateTime() *QDateTime {
	ret := C.QVariant_ToDateTime(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToPoint() *QPoint {
	ret := C.QVariant_ToPoint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToPointF() *QPointF {
	ret := C.QVariant_ToPointF(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToRect() *QRect {
	ret := C.QVariant_ToRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToSize() *QSize {
	ret := C.QVariant_ToSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToSizeF() *QSizeF {
	ret := C.QVariant_ToSizeF(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToLine() *QLine {
	ret := C.QVariant_ToLine(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLine(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLine) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToLineF() *QLineF {
	ret := C.QVariant_ToLineF(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLineF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLineF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToRectF() *QRectF {
	ret := C.QVariant_ToRectF(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToLocale() *QLocale {
	ret := C.QVariant_ToLocale(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLocale(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLocale) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToRegExp() *QRegExp {
	ret := C.QVariant_ToRegExp(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegExp(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegExp) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToRegularExpression() *QRegularExpression {
	ret := C.QVariant_ToRegularExpression(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegularExpression(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegularExpression) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToEasingCurve() *QEasingCurve {
	ret := C.QVariant_ToEasingCurve(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQEasingCurve(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QEasingCurve) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToUuid() *QUuid {
	ret := C.QVariant_ToUuid(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUuid(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUuid) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToUrl() *QUrl {
	ret := C.QVariant_ToUrl(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToJsonValue() *QJsonValue {
	ret := C.QVariant_ToJsonValue(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToJsonObject() *QJsonObject {
	ret := C.QVariant_ToJsonObject(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToJsonArray() *QJsonArray {
	ret := C.QVariant_ToJsonArray(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToJsonDocument() *QJsonDocument {
	ret := C.QVariant_ToJsonDocument(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonDocument(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonDocument) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToModelIndex() *QModelIndex {
	ret := C.QVariant_ToModelIndex(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) ToPersistentModelIndex() *QPersistentModelIndex {
	ret := C.QVariant_ToPersistentModelIndex(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPersistentModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPersistentModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariant) Load(ds *QDataStream) {
	C.QVariant_Load(this.h, ds.cPointer())
}

func (this *QVariant) Save(ds *QDataStream) {
	C.QVariant_Save(this.h, ds.cPointer())
}

func QVariant_TypeToName(typeId int) unsafe.Pointer {
	ret := C.QVariant_TypeToName((C.int)(typeId))
	return (unsafe.Pointer)(ret)
}

func (this *QVariant) OperatorEqual(v *QVariant) bool {
	ret := C.QVariant_OperatorEqual(this.h, v.cPointer())
	return (bool)(ret)
}

func (this *QVariant) OperatorNotEqual(v *QVariant) bool {
	ret := C.QVariant_OperatorNotEqual(this.h, v.cPointer())
	return (bool)(ret)
}

func (this *QVariant) OperatorLesser(v *QVariant) bool {
	ret := C.QVariant_OperatorLesser(this.h, v.cPointer())
	return (bool)(ret)
}

func (this *QVariant) OperatorLesserOrEqual(v *QVariant) bool {
	ret := C.QVariant_OperatorLesserOrEqual(this.h, v.cPointer())
	return (bool)(ret)
}

func (this *QVariant) OperatorGreater(v *QVariant) bool {
	ret := C.QVariant_OperatorGreater(this.h, v.cPointer())
	return (bool)(ret)
}

func (this *QVariant) OperatorGreaterOrEqual(v *QVariant) bool {
	ret := C.QVariant_OperatorGreaterOrEqual(this.h, v.cPointer())
	return (bool)(ret)
}

func (this *QVariant) ToInt1(ok *bool) int {
	ret := C.QVariant_ToInt1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (int)(ret)
}

func (this *QVariant) ToUInt1(ok *bool) uint {
	ret := C.QVariant_ToUInt1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (uint)(ret)
}

func (this *QVariant) ToLongLong1(ok *bool) int64 {
	ret := C.QVariant_ToLongLong1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (int64)(ret)
}

func (this *QVariant) ToULongLong1(ok *bool) uint64 {
	ret := C.QVariant_ToULongLong1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (uint64)(ret)
}

func (this *QVariant) ToDouble1(ok *bool) float64 {
	ret := C.QVariant_ToDouble1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (float64)(ret)
}

func (this *QVariant) ToFloat1(ok *bool) float32 {
	ret := C.QVariant_ToFloat1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (float32)(ret)
}

func (this *QVariant) ToReal1(ok *bool) float64 {
	ret := C.QVariant_ToReal1(this.h, (*C.bool)(unsafe.Pointer(ok)))
	return (float64)(ret)
}

func (this *QVariant) Delete() {
	C.QVariant_Delete(this.h)
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

func newQVariantComparisonHelper(h *C.QVariantComparisonHelper) *QVariantComparisonHelper {
	return &QVariantComparisonHelper{h: h}
}

func newQVariantComparisonHelper_U(h unsafe.Pointer) *QVariantComparisonHelper {
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

func (this *QVariantComparisonHelper) Delete() {
	C.QVariantComparisonHelper_Delete(this.h)
}

type QSequentialIterable struct {
	h *C.QSequentialIterable
}

func (this *QSequentialIterable) cPointer() *C.QSequentialIterable {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSequentialIterable(h *C.QSequentialIterable) *QSequentialIterable {
	return &QSequentialIterable{h: h}
}

func newQSequentialIterable_U(h unsafe.Pointer) *QSequentialIterable {
	return newQSequentialIterable((*C.QSequentialIterable)(h))
}

// NewQSequentialIterable constructs a new QSequentialIterable object.
func NewQSequentialIterable(param1 *QSequentialIterable) *QSequentialIterable {
	ret := C.QSequentialIterable_new(param1.cPointer())
	return newQSequentialIterable(ret)
}

func (this *QSequentialIterable) At(idx int) *QVariant {
	ret := C.QSequentialIterable_At(this.h, (C.int)(idx))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSequentialIterable) Size() int {
	ret := C.QSequentialIterable_Size(this.h)
	return (int)(ret)
}

func (this *QSequentialIterable) CanReverseIterate() bool {
	ret := C.QSequentialIterable_CanReverseIterate(this.h)
	return (bool)(ret)
}

func (this *QSequentialIterable) Delete() {
	C.QSequentialIterable_Delete(this.h)
}

type QAssociativeIterable struct {
	h *C.QAssociativeIterable
}

func (this *QAssociativeIterable) cPointer() *C.QAssociativeIterable {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAssociativeIterable(h *C.QAssociativeIterable) *QAssociativeIterable {
	return &QAssociativeIterable{h: h}
}

func newQAssociativeIterable_U(h unsafe.Pointer) *QAssociativeIterable {
	return newQAssociativeIterable((*C.QAssociativeIterable)(h))
}

// NewQAssociativeIterable constructs a new QAssociativeIterable object.
func NewQAssociativeIterable(param1 *QAssociativeIterable) *QAssociativeIterable {
	ret := C.QAssociativeIterable_new(param1.cPointer())
	return newQAssociativeIterable(ret)
}

func (this *QAssociativeIterable) Value(key *QVariant) *QVariant {
	ret := C.QAssociativeIterable_Value(this.h, key.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAssociativeIterable) Size() int {
	ret := C.QAssociativeIterable_Size(this.h)
	return (int)(ret)
}

func (this *QAssociativeIterable) Delete() {
	C.QAssociativeIterable_Delete(this.h)
}
