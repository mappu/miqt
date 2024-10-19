package qt

/*

#include "gen_qtextformat.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextLength__Type int

const (
	QTextLength__VariableLength   QTextLength__Type = 0
	QTextLength__FixedLength      QTextLength__Type = 1
	QTextLength__PercentageLength QTextLength__Type = 2
)

type QTextFormat__FormatType int

const (
	QTextFormat__InvalidFormat QTextFormat__FormatType = -1
	QTextFormat__BlockFormat   QTextFormat__FormatType = 1
	QTextFormat__CharFormat    QTextFormat__FormatType = 2
	QTextFormat__ListFormat    QTextFormat__FormatType = 3
	QTextFormat__TableFormat   QTextFormat__FormatType = 4
	QTextFormat__FrameFormat   QTextFormat__FormatType = 5
	QTextFormat__UserFormat    QTextFormat__FormatType = 100
)

type QTextFormat__Property int

const (
	QTextFormat__ObjectIndex                       QTextFormat__Property = 0
	QTextFormat__CssFloat                          QTextFormat__Property = 2048
	QTextFormat__LayoutDirection                   QTextFormat__Property = 2049
	QTextFormat__OutlinePen                        QTextFormat__Property = 2064
	QTextFormat__BackgroundBrush                   QTextFormat__Property = 2080
	QTextFormat__ForegroundBrush                   QTextFormat__Property = 2081
	QTextFormat__BackgroundImageUrl                QTextFormat__Property = 2083
	QTextFormat__BlockAlignment                    QTextFormat__Property = 4112
	QTextFormat__BlockTopMargin                    QTextFormat__Property = 4144
	QTextFormat__BlockBottomMargin                 QTextFormat__Property = 4145
	QTextFormat__BlockLeftMargin                   QTextFormat__Property = 4146
	QTextFormat__BlockRightMargin                  QTextFormat__Property = 4147
	QTextFormat__TextIndent                        QTextFormat__Property = 4148
	QTextFormat__TabPositions                      QTextFormat__Property = 4149
	QTextFormat__BlockIndent                       QTextFormat__Property = 4160
	QTextFormat__LineHeight                        QTextFormat__Property = 4168
	QTextFormat__LineHeightType                    QTextFormat__Property = 4169
	QTextFormat__BlockNonBreakableLines            QTextFormat__Property = 4176
	QTextFormat__BlockTrailingHorizontalRulerWidth QTextFormat__Property = 4192
	QTextFormat__HeadingLevel                      QTextFormat__Property = 4208
	QTextFormat__BlockQuoteLevel                   QTextFormat__Property = 4224
	QTextFormat__BlockCodeLanguage                 QTextFormat__Property = 4240
	QTextFormat__BlockCodeFence                    QTextFormat__Property = 4241
	QTextFormat__BlockMarker                       QTextFormat__Property = 4256
	QTextFormat__FirstFontProperty                 QTextFormat__Property = 8160
	QTextFormat__FontCapitalization                QTextFormat__Property = 8160
	QTextFormat__FontLetterSpacingType             QTextFormat__Property = 8243
	QTextFormat__FontLetterSpacing                 QTextFormat__Property = 8161
	QTextFormat__FontWordSpacing                   QTextFormat__Property = 8162
	QTextFormat__FontStretch                       QTextFormat__Property = 8244
	QTextFormat__FontStyleHint                     QTextFormat__Property = 8163
	QTextFormat__FontStyleStrategy                 QTextFormat__Property = 8164
	QTextFormat__FontKerning                       QTextFormat__Property = 8165
	QTextFormat__FontHintingPreference             QTextFormat__Property = 8166
	QTextFormat__FontFamilies                      QTextFormat__Property = 8167
	QTextFormat__FontStyleName                     QTextFormat__Property = 8168
	QTextFormat__FontFamily                        QTextFormat__Property = 8192
	QTextFormat__FontPointSize                     QTextFormat__Property = 8193
	QTextFormat__FontSizeAdjustment                QTextFormat__Property = 8194
	QTextFormat__FontSizeIncrement                 QTextFormat__Property = 8194
	QTextFormat__FontWeight                        QTextFormat__Property = 8195
	QTextFormat__FontItalic                        QTextFormat__Property = 8196
	QTextFormat__FontUnderline                     QTextFormat__Property = 8197
	QTextFormat__FontOverline                      QTextFormat__Property = 8198
	QTextFormat__FontStrikeOut                     QTextFormat__Property = 8199
	QTextFormat__FontFixedPitch                    QTextFormat__Property = 8200
	QTextFormat__FontPixelSize                     QTextFormat__Property = 8201
	QTextFormat__LastFontProperty                  QTextFormat__Property = 8201
	QTextFormat__TextUnderlineColor                QTextFormat__Property = 8208
	QTextFormat__TextVerticalAlignment             QTextFormat__Property = 8225
	QTextFormat__TextOutline                       QTextFormat__Property = 8226
	QTextFormat__TextUnderlineStyle                QTextFormat__Property = 8227
	QTextFormat__TextToolTip                       QTextFormat__Property = 8228
	QTextFormat__IsAnchor                          QTextFormat__Property = 8240
	QTextFormat__AnchorHref                        QTextFormat__Property = 8241
	QTextFormat__AnchorName                        QTextFormat__Property = 8242
	QTextFormat__ObjectType                        QTextFormat__Property = 12032
	QTextFormat__ListStyle                         QTextFormat__Property = 12288
	QTextFormat__ListIndent                        QTextFormat__Property = 12289
	QTextFormat__ListNumberPrefix                  QTextFormat__Property = 12290
	QTextFormat__ListNumberSuffix                  QTextFormat__Property = 12291
	QTextFormat__FrameBorder                       QTextFormat__Property = 16384
	QTextFormat__FrameMargin                       QTextFormat__Property = 16385
	QTextFormat__FramePadding                      QTextFormat__Property = 16386
	QTextFormat__FrameWidth                        QTextFormat__Property = 16387
	QTextFormat__FrameHeight                       QTextFormat__Property = 16388
	QTextFormat__FrameTopMargin                    QTextFormat__Property = 16389
	QTextFormat__FrameBottomMargin                 QTextFormat__Property = 16390
	QTextFormat__FrameLeftMargin                   QTextFormat__Property = 16391
	QTextFormat__FrameRightMargin                  QTextFormat__Property = 16392
	QTextFormat__FrameBorderBrush                  QTextFormat__Property = 16393
	QTextFormat__FrameBorderStyle                  QTextFormat__Property = 16400
	QTextFormat__TableColumns                      QTextFormat__Property = 16640
	QTextFormat__TableColumnWidthConstraints       QTextFormat__Property = 16641
	QTextFormat__TableCellSpacing                  QTextFormat__Property = 16642
	QTextFormat__TableCellPadding                  QTextFormat__Property = 16643
	QTextFormat__TableHeaderRowCount               QTextFormat__Property = 16644
	QTextFormat__TableBorderCollapse               QTextFormat__Property = 16645
	QTextFormat__TableCellRowSpan                  QTextFormat__Property = 18448
	QTextFormat__TableCellColumnSpan               QTextFormat__Property = 18449
	QTextFormat__TableCellTopPadding               QTextFormat__Property = 18450
	QTextFormat__TableCellBottomPadding            QTextFormat__Property = 18451
	QTextFormat__TableCellLeftPadding              QTextFormat__Property = 18452
	QTextFormat__TableCellRightPadding             QTextFormat__Property = 18453
	QTextFormat__TableCellTopBorder                QTextFormat__Property = 18454
	QTextFormat__TableCellBottomBorder             QTextFormat__Property = 18455
	QTextFormat__TableCellLeftBorder               QTextFormat__Property = 18456
	QTextFormat__TableCellRightBorder              QTextFormat__Property = 18457
	QTextFormat__TableCellTopBorderStyle           QTextFormat__Property = 18458
	QTextFormat__TableCellBottomBorderStyle        QTextFormat__Property = 18459
	QTextFormat__TableCellLeftBorderStyle          QTextFormat__Property = 18460
	QTextFormat__TableCellRightBorderStyle         QTextFormat__Property = 18461
	QTextFormat__TableCellTopBorderBrush           QTextFormat__Property = 18462
	QTextFormat__TableCellBottomBorderBrush        QTextFormat__Property = 18463
	QTextFormat__TableCellLeftBorderBrush          QTextFormat__Property = 18464
	QTextFormat__TableCellRightBorderBrush         QTextFormat__Property = 18465
	QTextFormat__ImageName                         QTextFormat__Property = 20480
	QTextFormat__ImageTitle                        QTextFormat__Property = 20481
	QTextFormat__ImageAltText                      QTextFormat__Property = 20482
	QTextFormat__ImageWidth                        QTextFormat__Property = 20496
	QTextFormat__ImageHeight                       QTextFormat__Property = 20497
	QTextFormat__ImageQuality                      QTextFormat__Property = 20500
	QTextFormat__FullWidthSelection                QTextFormat__Property = 24576
	QTextFormat__PageBreakPolicy                   QTextFormat__Property = 28672
	QTextFormat__UserProperty                      QTextFormat__Property = 1048576
)

type QTextFormat__ObjectTypes int

const (
	QTextFormat__NoObject        QTextFormat__ObjectTypes = 0
	QTextFormat__ImageObject     QTextFormat__ObjectTypes = 1
	QTextFormat__TableObject     QTextFormat__ObjectTypes = 2
	QTextFormat__TableCellObject QTextFormat__ObjectTypes = 3
	QTextFormat__UserObject      QTextFormat__ObjectTypes = 4096
)

type QTextFormat__PageBreakFlag int

const (
	QTextFormat__PageBreak_Auto         QTextFormat__PageBreakFlag = 0
	QTextFormat__PageBreak_AlwaysBefore QTextFormat__PageBreakFlag = 1
	QTextFormat__PageBreak_AlwaysAfter  QTextFormat__PageBreakFlag = 16
)

type QTextCharFormat__VerticalAlignment int

const (
	QTextCharFormat__AlignNormal      QTextCharFormat__VerticalAlignment = 0
	QTextCharFormat__AlignSuperScript QTextCharFormat__VerticalAlignment = 1
	QTextCharFormat__AlignSubScript   QTextCharFormat__VerticalAlignment = 2
	QTextCharFormat__AlignMiddle      QTextCharFormat__VerticalAlignment = 3
	QTextCharFormat__AlignTop         QTextCharFormat__VerticalAlignment = 4
	QTextCharFormat__AlignBottom      QTextCharFormat__VerticalAlignment = 5
	QTextCharFormat__AlignBaseline    QTextCharFormat__VerticalAlignment = 6
)

type QTextCharFormat__UnderlineStyle int

const (
	QTextCharFormat__NoUnderline         QTextCharFormat__UnderlineStyle = 0
	QTextCharFormat__SingleUnderline     QTextCharFormat__UnderlineStyle = 1
	QTextCharFormat__DashUnderline       QTextCharFormat__UnderlineStyle = 2
	QTextCharFormat__DotLine             QTextCharFormat__UnderlineStyle = 3
	QTextCharFormat__DashDotLine         QTextCharFormat__UnderlineStyle = 4
	QTextCharFormat__DashDotDotLine      QTextCharFormat__UnderlineStyle = 5
	QTextCharFormat__WaveUnderline       QTextCharFormat__UnderlineStyle = 6
	QTextCharFormat__SpellCheckUnderline QTextCharFormat__UnderlineStyle = 7
)

type QTextCharFormat__FontPropertiesInheritanceBehavior int

const (
	QTextCharFormat__FontPropertiesSpecifiedOnly QTextCharFormat__FontPropertiesInheritanceBehavior = 0
	QTextCharFormat__FontPropertiesAll           QTextCharFormat__FontPropertiesInheritanceBehavior = 1
)

type QTextBlockFormat__LineHeightTypes int

const (
	QTextBlockFormat__SingleHeight       QTextBlockFormat__LineHeightTypes = 0
	QTextBlockFormat__ProportionalHeight QTextBlockFormat__LineHeightTypes = 1
	QTextBlockFormat__FixedHeight        QTextBlockFormat__LineHeightTypes = 2
	QTextBlockFormat__MinimumHeight      QTextBlockFormat__LineHeightTypes = 3
	QTextBlockFormat__LineDistanceHeight QTextBlockFormat__LineHeightTypes = 4
)

type QTextBlockFormat__MarkerType int

const (
	QTextBlockFormat__NoMarker  QTextBlockFormat__MarkerType = 0
	QTextBlockFormat__Unchecked QTextBlockFormat__MarkerType = 1
	QTextBlockFormat__Checked   QTextBlockFormat__MarkerType = 2
)

type QTextListFormat__Style int

const (
	QTextListFormat__ListDisc           QTextListFormat__Style = -1
	QTextListFormat__ListCircle         QTextListFormat__Style = -2
	QTextListFormat__ListSquare         QTextListFormat__Style = -3
	QTextListFormat__ListDecimal        QTextListFormat__Style = -4
	QTextListFormat__ListLowerAlpha     QTextListFormat__Style = -5
	QTextListFormat__ListUpperAlpha     QTextListFormat__Style = -6
	QTextListFormat__ListLowerRoman     QTextListFormat__Style = -7
	QTextListFormat__ListUpperRoman     QTextListFormat__Style = -8
	QTextListFormat__ListStyleUndefined QTextListFormat__Style = 0
)

type QTextFrameFormat__Position int

const (
	QTextFrameFormat__InFlow     QTextFrameFormat__Position = 0
	QTextFrameFormat__FloatLeft  QTextFrameFormat__Position = 1
	QTextFrameFormat__FloatRight QTextFrameFormat__Position = 2
)

type QTextFrameFormat__BorderStyle int

const (
	QTextFrameFormat__BorderStyle_None       QTextFrameFormat__BorderStyle = 0
	QTextFrameFormat__BorderStyle_Dotted     QTextFrameFormat__BorderStyle = 1
	QTextFrameFormat__BorderStyle_Dashed     QTextFrameFormat__BorderStyle = 2
	QTextFrameFormat__BorderStyle_Solid      QTextFrameFormat__BorderStyle = 3
	QTextFrameFormat__BorderStyle_Double     QTextFrameFormat__BorderStyle = 4
	QTextFrameFormat__BorderStyle_DotDash    QTextFrameFormat__BorderStyle = 5
	QTextFrameFormat__BorderStyle_DotDotDash QTextFrameFormat__BorderStyle = 6
	QTextFrameFormat__BorderStyle_Groove     QTextFrameFormat__BorderStyle = 7
	QTextFrameFormat__BorderStyle_Ridge      QTextFrameFormat__BorderStyle = 8
	QTextFrameFormat__BorderStyle_Inset      QTextFrameFormat__BorderStyle = 9
	QTextFrameFormat__BorderStyle_Outset     QTextFrameFormat__BorderStyle = 10
)

type QTextLength struct {
	h *C.QTextLength
}

func (this *QTextLength) cPointer() *C.QTextLength {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextLength) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTextLength(h *C.QTextLength) *QTextLength {
	if h == nil {
		return nil
	}
	return &QTextLength{h: h}
}

func UnsafeNewQTextLength(h unsafe.Pointer) *QTextLength {
	return newQTextLength((*C.QTextLength)(h))
}

// NewQTextLength constructs a new QTextLength object.
func NewQTextLength() *QTextLength {
	ret := C.QTextLength_new()
	return newQTextLength(ret)
}

// NewQTextLength2 constructs a new QTextLength object.
func NewQTextLength2(typeVal QTextLength__Type, value float64) *QTextLength {
	ret := C.QTextLength_new2((C.int)(typeVal), (C.double)(value))
	return newQTextLength(ret)
}

// NewQTextLength3 constructs a new QTextLength object.
func NewQTextLength3(param1 *QTextLength) *QTextLength {
	ret := C.QTextLength_new3(param1.cPointer())
	return newQTextLength(ret)
}

func (this *QTextLength) Type() QTextLength__Type {
	return (QTextLength__Type)(C.QTextLength_Type(this.h))
}

func (this *QTextLength) Value(maximumLength float64) float64 {
	return (float64)(C.QTextLength_Value(this.h, (C.double)(maximumLength)))
}

func (this *QTextLength) RawValue() float64 {
	return (float64)(C.QTextLength_RawValue(this.h))
}

func (this *QTextLength) OperatorEqual(other *QTextLength) bool {
	return (bool)(C.QTextLength_OperatorEqual(this.h, other.cPointer()))
}

func (this *QTextLength) OperatorNotEqual(other *QTextLength) bool {
	return (bool)(C.QTextLength_OperatorNotEqual(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QTextLength) Delete() {
	C.QTextLength_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextLength) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextLength) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextFormat struct {
	h *C.QTextFormat
}

func (this *QTextFormat) cPointer() *C.QTextFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTextFormat(h *C.QTextFormat) *QTextFormat {
	if h == nil {
		return nil
	}
	return &QTextFormat{h: h}
}

func UnsafeNewQTextFormat(h unsafe.Pointer) *QTextFormat {
	return newQTextFormat((*C.QTextFormat)(h))
}

// NewQTextFormat constructs a new QTextFormat object.
func NewQTextFormat() *QTextFormat {
	ret := C.QTextFormat_new()
	return newQTextFormat(ret)
}

// NewQTextFormat2 constructs a new QTextFormat object.
func NewQTextFormat2(typeVal int) *QTextFormat {
	ret := C.QTextFormat_new2((C.int)(typeVal))
	return newQTextFormat(ret)
}

// NewQTextFormat3 constructs a new QTextFormat object.
func NewQTextFormat3(rhs *QTextFormat) *QTextFormat {
	ret := C.QTextFormat_new3(rhs.cPointer())
	return newQTextFormat(ret)
}

func (this *QTextFormat) OperatorAssign(rhs *QTextFormat) {
	C.QTextFormat_OperatorAssign(this.h, rhs.cPointer())
}

func (this *QTextFormat) Swap(other *QTextFormat) {
	C.QTextFormat_Swap(this.h, other.cPointer())
}

func (this *QTextFormat) Merge(other *QTextFormat) {
	C.QTextFormat_Merge(this.h, other.cPointer())
}

func (this *QTextFormat) IsValid() bool {
	return (bool)(C.QTextFormat_IsValid(this.h))
}

func (this *QTextFormat) IsEmpty() bool {
	return (bool)(C.QTextFormat_IsEmpty(this.h))
}

func (this *QTextFormat) Type() int {
	return (int)(C.QTextFormat_Type(this.h))
}

func (this *QTextFormat) ObjectIndex() int {
	return (int)(C.QTextFormat_ObjectIndex(this.h))
}

func (this *QTextFormat) SetObjectIndex(object int) {
	C.QTextFormat_SetObjectIndex(this.h, (C.int)(object))
}

func (this *QTextFormat) Property(propertyId int) *QVariant {
	_ret := C.QTextFormat_Property(this.h, (C.int)(propertyId))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFormat) SetProperty(propertyId int, value *QVariant) {
	C.QTextFormat_SetProperty(this.h, (C.int)(propertyId), value.cPointer())
}

func (this *QTextFormat) ClearProperty(propertyId int) {
	C.QTextFormat_ClearProperty(this.h, (C.int)(propertyId))
}

func (this *QTextFormat) HasProperty(propertyId int) bool {
	return (bool)(C.QTextFormat_HasProperty(this.h, (C.int)(propertyId)))
}

func (this *QTextFormat) BoolProperty(propertyId int) bool {
	return (bool)(C.QTextFormat_BoolProperty(this.h, (C.int)(propertyId)))
}

func (this *QTextFormat) IntProperty(propertyId int) int {
	return (int)(C.QTextFormat_IntProperty(this.h, (C.int)(propertyId)))
}

func (this *QTextFormat) DoubleProperty(propertyId int) float64 {
	return (float64)(C.QTextFormat_DoubleProperty(this.h, (C.int)(propertyId)))
}

func (this *QTextFormat) StringProperty(propertyId int) string {
	var _ms C.struct_miqt_string = C.QTextFormat_StringProperty(this.h, (C.int)(propertyId))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextFormat) ColorProperty(propertyId int) *QColor {
	_ret := C.QTextFormat_ColorProperty(this.h, (C.int)(propertyId))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFormat) PenProperty(propertyId int) *QPen {
	_ret := C.QTextFormat_PenProperty(this.h, (C.int)(propertyId))
	_goptr := newQPen(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFormat) BrushProperty(propertyId int) *QBrush {
	_ret := C.QTextFormat_BrushProperty(this.h, (C.int)(propertyId))
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFormat) LengthProperty(propertyId int) *QTextLength {
	_ret := C.QTextFormat_LengthProperty(this.h, (C.int)(propertyId))
	_goptr := newQTextLength(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFormat) LengthVectorProperty(propertyId int) []QTextLength {
	var _ma *C.struct_miqt_array = C.QTextFormat_LengthVectorProperty(this.h, (C.int)(propertyId))
	_ret := make([]QTextLength, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextLength)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_ret := _outCast[i]
		_vv_goptr := newQTextLength(_vv_ret)
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTextFormat) SetProperty2(propertyId int, lengths []QTextLength) {
	// For the C ABI, malloc a C array of raw pointers
	lengths_CArray := (*[0xffff]*C.QTextLength)(C.malloc(C.size_t(8 * len(lengths))))
	defer C.free(unsafe.Pointer(lengths_CArray))
	for i := range lengths {
		lengths_CArray[i] = lengths[i].cPointer()
	}
	lengths_ma := &C.struct_miqt_array{len: C.size_t(len(lengths)), data: unsafe.Pointer(lengths_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(lengths_ma))
	C.QTextFormat_SetProperty2(this.h, (C.int)(propertyId), lengths_ma)
}

func (this *QTextFormat) PropertyCount() int {
	return (int)(C.QTextFormat_PropertyCount(this.h))
}

func (this *QTextFormat) SetObjectType(typeVal int) {
	C.QTextFormat_SetObjectType(this.h, (C.int)(typeVal))
}

func (this *QTextFormat) ObjectType() int {
	return (int)(C.QTextFormat_ObjectType(this.h))
}

func (this *QTextFormat) IsCharFormat() bool {
	return (bool)(C.QTextFormat_IsCharFormat(this.h))
}

func (this *QTextFormat) IsBlockFormat() bool {
	return (bool)(C.QTextFormat_IsBlockFormat(this.h))
}

func (this *QTextFormat) IsListFormat() bool {
	return (bool)(C.QTextFormat_IsListFormat(this.h))
}

func (this *QTextFormat) IsFrameFormat() bool {
	return (bool)(C.QTextFormat_IsFrameFormat(this.h))
}

func (this *QTextFormat) IsImageFormat() bool {
	return (bool)(C.QTextFormat_IsImageFormat(this.h))
}

func (this *QTextFormat) IsTableFormat() bool {
	return (bool)(C.QTextFormat_IsTableFormat(this.h))
}

func (this *QTextFormat) IsTableCellFormat() bool {
	return (bool)(C.QTextFormat_IsTableCellFormat(this.h))
}

func (this *QTextFormat) ToBlockFormat() *QTextBlockFormat {
	_ret := C.QTextFormat_ToBlockFormat(this.h)
	_goptr := newQTextBlockFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFormat) ToCharFormat() *QTextCharFormat {
	_ret := C.QTextFormat_ToCharFormat(this.h)
	_goptr := newQTextCharFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFormat) ToListFormat() *QTextListFormat {
	_ret := C.QTextFormat_ToListFormat(this.h)
	_goptr := newQTextListFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFormat) ToTableFormat() *QTextTableFormat {
	_ret := C.QTextFormat_ToTableFormat(this.h)
	_goptr := newQTextTableFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFormat) ToFrameFormat() *QTextFrameFormat {
	_ret := C.QTextFormat_ToFrameFormat(this.h)
	_goptr := newQTextFrameFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFormat) ToImageFormat() *QTextImageFormat {
	_ret := C.QTextFormat_ToImageFormat(this.h)
	_goptr := newQTextImageFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFormat) ToTableCellFormat() *QTextTableCellFormat {
	_ret := C.QTextFormat_ToTableCellFormat(this.h)
	_goptr := newQTextTableCellFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFormat) OperatorEqual(rhs *QTextFormat) bool {
	return (bool)(C.QTextFormat_OperatorEqual(this.h, rhs.cPointer()))
}

func (this *QTextFormat) OperatorNotEqual(rhs *QTextFormat) bool {
	return (bool)(C.QTextFormat_OperatorNotEqual(this.h, rhs.cPointer()))
}

func (this *QTextFormat) SetLayoutDirection(direction LayoutDirection) {
	C.QTextFormat_SetLayoutDirection(this.h, (C.int)(direction))
}

func (this *QTextFormat) LayoutDirection() LayoutDirection {
	return (LayoutDirection)(C.QTextFormat_LayoutDirection(this.h))
}

func (this *QTextFormat) SetBackground(brush *QBrush) {
	C.QTextFormat_SetBackground(this.h, brush.cPointer())
}

func (this *QTextFormat) Background() *QBrush {
	_ret := C.QTextFormat_Background(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFormat) ClearBackground() {
	C.QTextFormat_ClearBackground(this.h)
}

func (this *QTextFormat) SetForeground(brush *QBrush) {
	C.QTextFormat_SetForeground(this.h, brush.cPointer())
}

func (this *QTextFormat) Foreground() *QBrush {
	_ret := C.QTextFormat_Foreground(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFormat) ClearForeground() {
	C.QTextFormat_ClearForeground(this.h)
}

// Delete this object from C++ memory.
func (this *QTextFormat) Delete() {
	C.QTextFormat_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextCharFormat struct {
	h *C.QTextCharFormat
	*QTextFormat
}

func (this *QTextCharFormat) cPointer() *C.QTextCharFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextCharFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTextCharFormat(h *C.QTextCharFormat) *QTextCharFormat {
	if h == nil {
		return nil
	}
	return &QTextCharFormat{h: h, QTextFormat: UnsafeNewQTextFormat(unsafe.Pointer(h))}
}

func UnsafeNewQTextCharFormat(h unsafe.Pointer) *QTextCharFormat {
	return newQTextCharFormat((*C.QTextCharFormat)(h))
}

// NewQTextCharFormat constructs a new QTextCharFormat object.
func NewQTextCharFormat() *QTextCharFormat {
	ret := C.QTextCharFormat_new()
	return newQTextCharFormat(ret)
}

// NewQTextCharFormat2 constructs a new QTextCharFormat object.
func NewQTextCharFormat2(param1 *QTextCharFormat) *QTextCharFormat {
	ret := C.QTextCharFormat_new2(param1.cPointer())
	return newQTextCharFormat(ret)
}

func (this *QTextCharFormat) IsValid() bool {
	return (bool)(C.QTextCharFormat_IsValid(this.h))
}

func (this *QTextCharFormat) SetFont(font *QFont, behavior QTextCharFormat__FontPropertiesInheritanceBehavior) {
	C.QTextCharFormat_SetFont(this.h, font.cPointer(), (C.int)(behavior))
}

func (this *QTextCharFormat) SetFontWithFont(font *QFont) {
	C.QTextCharFormat_SetFontWithFont(this.h, font.cPointer())
}

func (this *QTextCharFormat) Font() *QFont {
	_ret := C.QTextCharFormat_Font(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCharFormat) SetFontFamily(family string) {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	C.QTextCharFormat_SetFontFamily(this.h, family_ms)
}

func (this *QTextCharFormat) FontFamily() string {
	var _ms C.struct_miqt_string = C.QTextCharFormat_FontFamily(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextCharFormat) SetFontFamilies(families []string) {
	// For the C ABI, malloc a C array of raw pointers
	families_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(8 * len(families))))
	defer C.free(unsafe.Pointer(families_CArray))
	for i := range families {
		families_i_ms := C.struct_miqt_string{}
		families_i_ms.data = C.CString(families[i])
		families_i_ms.len = C.size_t(len(families[i]))
		defer C.free(unsafe.Pointer(families_i_ms.data))
		families_CArray[i] = families_i_ms
	}
	families_ma := &C.struct_miqt_array{len: C.size_t(len(families)), data: unsafe.Pointer(families_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(families_ma))
	C.QTextCharFormat_SetFontFamilies(this.h, families_ma)
}

func (this *QTextCharFormat) FontFamilies() *QVariant {
	_ret := C.QTextCharFormat_FontFamilies(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCharFormat) SetFontStyleName(styleName string) {
	styleName_ms := C.struct_miqt_string{}
	styleName_ms.data = C.CString(styleName)
	styleName_ms.len = C.size_t(len(styleName))
	defer C.free(unsafe.Pointer(styleName_ms.data))
	C.QTextCharFormat_SetFontStyleName(this.h, styleName_ms)
}

func (this *QTextCharFormat) FontStyleName() *QVariant {
	_ret := C.QTextCharFormat_FontStyleName(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCharFormat) SetFontPointSize(size float64) {
	C.QTextCharFormat_SetFontPointSize(this.h, (C.double)(size))
}

func (this *QTextCharFormat) FontPointSize() float64 {
	return (float64)(C.QTextCharFormat_FontPointSize(this.h))
}

func (this *QTextCharFormat) SetFontWeight(weight int) {
	C.QTextCharFormat_SetFontWeight(this.h, (C.int)(weight))
}

func (this *QTextCharFormat) FontWeight() int {
	return (int)(C.QTextCharFormat_FontWeight(this.h))
}

func (this *QTextCharFormat) SetFontItalic(italic bool) {
	C.QTextCharFormat_SetFontItalic(this.h, (C.bool)(italic))
}

func (this *QTextCharFormat) FontItalic() bool {
	return (bool)(C.QTextCharFormat_FontItalic(this.h))
}

func (this *QTextCharFormat) SetFontCapitalization(capitalization QFont__Capitalization) {
	C.QTextCharFormat_SetFontCapitalization(this.h, (C.int)(capitalization))
}

func (this *QTextCharFormat) FontCapitalization() QFont__Capitalization {
	return (QFont__Capitalization)(C.QTextCharFormat_FontCapitalization(this.h))
}

func (this *QTextCharFormat) SetFontLetterSpacingType(letterSpacingType QFont__SpacingType) {
	C.QTextCharFormat_SetFontLetterSpacingType(this.h, (C.int)(letterSpacingType))
}

func (this *QTextCharFormat) FontLetterSpacingType() QFont__SpacingType {
	return (QFont__SpacingType)(C.QTextCharFormat_FontLetterSpacingType(this.h))
}

func (this *QTextCharFormat) SetFontLetterSpacing(spacing float64) {
	C.QTextCharFormat_SetFontLetterSpacing(this.h, (C.double)(spacing))
}

func (this *QTextCharFormat) FontLetterSpacing() float64 {
	return (float64)(C.QTextCharFormat_FontLetterSpacing(this.h))
}

func (this *QTextCharFormat) SetFontWordSpacing(spacing float64) {
	C.QTextCharFormat_SetFontWordSpacing(this.h, (C.double)(spacing))
}

func (this *QTextCharFormat) FontWordSpacing() float64 {
	return (float64)(C.QTextCharFormat_FontWordSpacing(this.h))
}

func (this *QTextCharFormat) SetFontUnderline(underline bool) {
	C.QTextCharFormat_SetFontUnderline(this.h, (C.bool)(underline))
}

func (this *QTextCharFormat) FontUnderline() bool {
	return (bool)(C.QTextCharFormat_FontUnderline(this.h))
}

func (this *QTextCharFormat) SetFontOverline(overline bool) {
	C.QTextCharFormat_SetFontOverline(this.h, (C.bool)(overline))
}

func (this *QTextCharFormat) FontOverline() bool {
	return (bool)(C.QTextCharFormat_FontOverline(this.h))
}

func (this *QTextCharFormat) SetFontStrikeOut(strikeOut bool) {
	C.QTextCharFormat_SetFontStrikeOut(this.h, (C.bool)(strikeOut))
}

func (this *QTextCharFormat) FontStrikeOut() bool {
	return (bool)(C.QTextCharFormat_FontStrikeOut(this.h))
}

func (this *QTextCharFormat) SetUnderlineColor(color *QColor) {
	C.QTextCharFormat_SetUnderlineColor(this.h, color.cPointer())
}

func (this *QTextCharFormat) UnderlineColor() *QColor {
	_ret := C.QTextCharFormat_UnderlineColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCharFormat) SetFontFixedPitch(fixedPitch bool) {
	C.QTextCharFormat_SetFontFixedPitch(this.h, (C.bool)(fixedPitch))
}

func (this *QTextCharFormat) FontFixedPitch() bool {
	return (bool)(C.QTextCharFormat_FontFixedPitch(this.h))
}

func (this *QTextCharFormat) SetFontStretch(factor int) {
	C.QTextCharFormat_SetFontStretch(this.h, (C.int)(factor))
}

func (this *QTextCharFormat) FontStretch() int {
	return (int)(C.QTextCharFormat_FontStretch(this.h))
}

func (this *QTextCharFormat) SetFontStyleHint(hint QFont__StyleHint) {
	C.QTextCharFormat_SetFontStyleHint(this.h, (C.int)(hint))
}

func (this *QTextCharFormat) SetFontStyleStrategy(strategy QFont__StyleStrategy) {
	C.QTextCharFormat_SetFontStyleStrategy(this.h, (C.int)(strategy))
}

func (this *QTextCharFormat) FontStyleHint() QFont__StyleHint {
	return (QFont__StyleHint)(C.QTextCharFormat_FontStyleHint(this.h))
}

func (this *QTextCharFormat) FontStyleStrategy() QFont__StyleStrategy {
	return (QFont__StyleStrategy)(C.QTextCharFormat_FontStyleStrategy(this.h))
}

func (this *QTextCharFormat) SetFontHintingPreference(hintingPreference QFont__HintingPreference) {
	C.QTextCharFormat_SetFontHintingPreference(this.h, (C.int)(hintingPreference))
}

func (this *QTextCharFormat) FontHintingPreference() QFont__HintingPreference {
	return (QFont__HintingPreference)(C.QTextCharFormat_FontHintingPreference(this.h))
}

func (this *QTextCharFormat) SetFontKerning(enable bool) {
	C.QTextCharFormat_SetFontKerning(this.h, (C.bool)(enable))
}

func (this *QTextCharFormat) FontKerning() bool {
	return (bool)(C.QTextCharFormat_FontKerning(this.h))
}

func (this *QTextCharFormat) SetUnderlineStyle(style QTextCharFormat__UnderlineStyle) {
	C.QTextCharFormat_SetUnderlineStyle(this.h, (C.int)(style))
}

func (this *QTextCharFormat) UnderlineStyle() QTextCharFormat__UnderlineStyle {
	return (QTextCharFormat__UnderlineStyle)(C.QTextCharFormat_UnderlineStyle(this.h))
}

func (this *QTextCharFormat) SetVerticalAlignment(alignment QTextCharFormat__VerticalAlignment) {
	C.QTextCharFormat_SetVerticalAlignment(this.h, (C.int)(alignment))
}

func (this *QTextCharFormat) VerticalAlignment() QTextCharFormat__VerticalAlignment {
	return (QTextCharFormat__VerticalAlignment)(C.QTextCharFormat_VerticalAlignment(this.h))
}

func (this *QTextCharFormat) SetTextOutline(pen *QPen) {
	C.QTextCharFormat_SetTextOutline(this.h, pen.cPointer())
}

func (this *QTextCharFormat) TextOutline() *QPen {
	_ret := C.QTextCharFormat_TextOutline(this.h)
	_goptr := newQPen(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCharFormat) SetToolTip(tip string) {
	tip_ms := C.struct_miqt_string{}
	tip_ms.data = C.CString(tip)
	tip_ms.len = C.size_t(len(tip))
	defer C.free(unsafe.Pointer(tip_ms.data))
	C.QTextCharFormat_SetToolTip(this.h, tip_ms)
}

func (this *QTextCharFormat) ToolTip() string {
	var _ms C.struct_miqt_string = C.QTextCharFormat_ToolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextCharFormat) SetAnchor(anchor bool) {
	C.QTextCharFormat_SetAnchor(this.h, (C.bool)(anchor))
}

func (this *QTextCharFormat) IsAnchor() bool {
	return (bool)(C.QTextCharFormat_IsAnchor(this.h))
}

func (this *QTextCharFormat) SetAnchorHref(value string) {
	value_ms := C.struct_miqt_string{}
	value_ms.data = C.CString(value)
	value_ms.len = C.size_t(len(value))
	defer C.free(unsafe.Pointer(value_ms.data))
	C.QTextCharFormat_SetAnchorHref(this.h, value_ms)
}

func (this *QTextCharFormat) AnchorHref() string {
	var _ms C.struct_miqt_string = C.QTextCharFormat_AnchorHref(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextCharFormat) SetAnchorName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTextCharFormat_SetAnchorName(this.h, name_ms)
}

func (this *QTextCharFormat) AnchorName() string {
	var _ms C.struct_miqt_string = C.QTextCharFormat_AnchorName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextCharFormat) SetAnchorNames(names []string) {
	// For the C ABI, malloc a C array of raw pointers
	names_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(8 * len(names))))
	defer C.free(unsafe.Pointer(names_CArray))
	for i := range names {
		names_i_ms := C.struct_miqt_string{}
		names_i_ms.data = C.CString(names[i])
		names_i_ms.len = C.size_t(len(names[i]))
		defer C.free(unsafe.Pointer(names_i_ms.data))
		names_CArray[i] = names_i_ms
	}
	names_ma := &C.struct_miqt_array{len: C.size_t(len(names)), data: unsafe.Pointer(names_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(names_ma))
	C.QTextCharFormat_SetAnchorNames(this.h, names_ma)
}

func (this *QTextCharFormat) AnchorNames() []string {
	var _ma *C.struct_miqt_array = C.QTextCharFormat_AnchorNames(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTextCharFormat) SetTableCellRowSpan(tableCellRowSpan int) {
	C.QTextCharFormat_SetTableCellRowSpan(this.h, (C.int)(tableCellRowSpan))
}

func (this *QTextCharFormat) TableCellRowSpan() int {
	return (int)(C.QTextCharFormat_TableCellRowSpan(this.h))
}

func (this *QTextCharFormat) SetTableCellColumnSpan(tableCellColumnSpan int) {
	C.QTextCharFormat_SetTableCellColumnSpan(this.h, (C.int)(tableCellColumnSpan))
}

func (this *QTextCharFormat) TableCellColumnSpan() int {
	return (int)(C.QTextCharFormat_TableCellColumnSpan(this.h))
}

func (this *QTextCharFormat) SetFontStyleHint2(hint QFont__StyleHint, strategy QFont__StyleStrategy) {
	C.QTextCharFormat_SetFontStyleHint2(this.h, (C.int)(hint), (C.int)(strategy))
}

// Delete this object from C++ memory.
func (this *QTextCharFormat) Delete() {
	C.QTextCharFormat_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextCharFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextCharFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextBlockFormat struct {
	h *C.QTextBlockFormat
	*QTextFormat
}

func (this *QTextBlockFormat) cPointer() *C.QTextBlockFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextBlockFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTextBlockFormat(h *C.QTextBlockFormat) *QTextBlockFormat {
	if h == nil {
		return nil
	}
	return &QTextBlockFormat{h: h, QTextFormat: UnsafeNewQTextFormat(unsafe.Pointer(h))}
}

func UnsafeNewQTextBlockFormat(h unsafe.Pointer) *QTextBlockFormat {
	return newQTextBlockFormat((*C.QTextBlockFormat)(h))
}

// NewQTextBlockFormat constructs a new QTextBlockFormat object.
func NewQTextBlockFormat() *QTextBlockFormat {
	ret := C.QTextBlockFormat_new()
	return newQTextBlockFormat(ret)
}

// NewQTextBlockFormat2 constructs a new QTextBlockFormat object.
func NewQTextBlockFormat2(param1 *QTextBlockFormat) *QTextBlockFormat {
	ret := C.QTextBlockFormat_new2(param1.cPointer())
	return newQTextBlockFormat(ret)
}

func (this *QTextBlockFormat) IsValid() bool {
	return (bool)(C.QTextBlockFormat_IsValid(this.h))
}

func (this *QTextBlockFormat) SetAlignment(alignment AlignmentFlag) {
	C.QTextBlockFormat_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QTextBlockFormat) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QTextBlockFormat_Alignment(this.h))
}

func (this *QTextBlockFormat) SetTopMargin(margin float64) {
	C.QTextBlockFormat_SetTopMargin(this.h, (C.double)(margin))
}

func (this *QTextBlockFormat) TopMargin() float64 {
	return (float64)(C.QTextBlockFormat_TopMargin(this.h))
}

func (this *QTextBlockFormat) SetBottomMargin(margin float64) {
	C.QTextBlockFormat_SetBottomMargin(this.h, (C.double)(margin))
}

func (this *QTextBlockFormat) BottomMargin() float64 {
	return (float64)(C.QTextBlockFormat_BottomMargin(this.h))
}

func (this *QTextBlockFormat) SetLeftMargin(margin float64) {
	C.QTextBlockFormat_SetLeftMargin(this.h, (C.double)(margin))
}

func (this *QTextBlockFormat) LeftMargin() float64 {
	return (float64)(C.QTextBlockFormat_LeftMargin(this.h))
}

func (this *QTextBlockFormat) SetRightMargin(margin float64) {
	C.QTextBlockFormat_SetRightMargin(this.h, (C.double)(margin))
}

func (this *QTextBlockFormat) RightMargin() float64 {
	return (float64)(C.QTextBlockFormat_RightMargin(this.h))
}

func (this *QTextBlockFormat) SetTextIndent(aindent float64) {
	C.QTextBlockFormat_SetTextIndent(this.h, (C.double)(aindent))
}

func (this *QTextBlockFormat) TextIndent() float64 {
	return (float64)(C.QTextBlockFormat_TextIndent(this.h))
}

func (this *QTextBlockFormat) SetIndent(indent int) {
	C.QTextBlockFormat_SetIndent(this.h, (C.int)(indent))
}

func (this *QTextBlockFormat) Indent() int {
	return (int)(C.QTextBlockFormat_Indent(this.h))
}

func (this *QTextBlockFormat) SetHeadingLevel(alevel int) {
	C.QTextBlockFormat_SetHeadingLevel(this.h, (C.int)(alevel))
}

func (this *QTextBlockFormat) HeadingLevel() int {
	return (int)(C.QTextBlockFormat_HeadingLevel(this.h))
}

func (this *QTextBlockFormat) SetLineHeight(height float64, heightType int) {
	C.QTextBlockFormat_SetLineHeight(this.h, (C.double)(height), (C.int)(heightType))
}

func (this *QTextBlockFormat) LineHeight(scriptLineHeight float64, scaling float64) float64 {
	return (float64)(C.QTextBlockFormat_LineHeight(this.h, (C.double)(scriptLineHeight), (C.double)(scaling)))
}

func (this *QTextBlockFormat) LineHeight2() float64 {
	return (float64)(C.QTextBlockFormat_LineHeight2(this.h))
}

func (this *QTextBlockFormat) LineHeightType() int {
	return (int)(C.QTextBlockFormat_LineHeightType(this.h))
}

func (this *QTextBlockFormat) SetNonBreakableLines(b bool) {
	C.QTextBlockFormat_SetNonBreakableLines(this.h, (C.bool)(b))
}

func (this *QTextBlockFormat) NonBreakableLines() bool {
	return (bool)(C.QTextBlockFormat_NonBreakableLines(this.h))
}

func (this *QTextBlockFormat) SetPageBreakPolicy(flags QTextFormat__PageBreakFlag) {
	C.QTextBlockFormat_SetPageBreakPolicy(this.h, (C.int)(flags))
}

func (this *QTextBlockFormat) PageBreakPolicy() QTextFormat__PageBreakFlag {
	return (QTextFormat__PageBreakFlag)(C.QTextBlockFormat_PageBreakPolicy(this.h))
}

func (this *QTextBlockFormat) SetTabPositions(tabs []QTextOption__Tab) {
	// For the C ABI, malloc a C array of raw pointers
	tabs_CArray := (*[0xffff]*C.QTextOption__Tab)(C.malloc(C.size_t(8 * len(tabs))))
	defer C.free(unsafe.Pointer(tabs_CArray))
	for i := range tabs {
		tabs_CArray[i] = tabs[i].cPointer()
	}
	tabs_ma := &C.struct_miqt_array{len: C.size_t(len(tabs)), data: unsafe.Pointer(tabs_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(tabs_ma))
	C.QTextBlockFormat_SetTabPositions(this.h, tabs_ma)
}

func (this *QTextBlockFormat) TabPositions() []QTextOption__Tab {
	var _ma *C.struct_miqt_array = C.QTextBlockFormat_TabPositions(this.h)
	_ret := make([]QTextOption__Tab, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextOption__Tab)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQTextOption__Tab(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTextBlockFormat) SetMarker(marker QTextBlockFormat__MarkerType) {
	C.QTextBlockFormat_SetMarker(this.h, (C.int)(marker))
}

func (this *QTextBlockFormat) Marker() QTextBlockFormat__MarkerType {
	return (QTextBlockFormat__MarkerType)(C.QTextBlockFormat_Marker(this.h))
}

// Delete this object from C++ memory.
func (this *QTextBlockFormat) Delete() {
	C.QTextBlockFormat_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextBlockFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextBlockFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextListFormat struct {
	h *C.QTextListFormat
	*QTextFormat
}

func (this *QTextListFormat) cPointer() *C.QTextListFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextListFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTextListFormat(h *C.QTextListFormat) *QTextListFormat {
	if h == nil {
		return nil
	}
	return &QTextListFormat{h: h, QTextFormat: UnsafeNewQTextFormat(unsafe.Pointer(h))}
}

func UnsafeNewQTextListFormat(h unsafe.Pointer) *QTextListFormat {
	return newQTextListFormat((*C.QTextListFormat)(h))
}

// NewQTextListFormat constructs a new QTextListFormat object.
func NewQTextListFormat() *QTextListFormat {
	ret := C.QTextListFormat_new()
	return newQTextListFormat(ret)
}

// NewQTextListFormat2 constructs a new QTextListFormat object.
func NewQTextListFormat2(param1 *QTextListFormat) *QTextListFormat {
	ret := C.QTextListFormat_new2(param1.cPointer())
	return newQTextListFormat(ret)
}

func (this *QTextListFormat) IsValid() bool {
	return (bool)(C.QTextListFormat_IsValid(this.h))
}

func (this *QTextListFormat) SetStyle(style QTextListFormat__Style) {
	C.QTextListFormat_SetStyle(this.h, (C.int)(style))
}

func (this *QTextListFormat) Style() QTextListFormat__Style {
	return (QTextListFormat__Style)(C.QTextListFormat_Style(this.h))
}

func (this *QTextListFormat) SetIndent(indent int) {
	C.QTextListFormat_SetIndent(this.h, (C.int)(indent))
}

func (this *QTextListFormat) Indent() int {
	return (int)(C.QTextListFormat_Indent(this.h))
}

func (this *QTextListFormat) SetNumberPrefix(numberPrefix string) {
	numberPrefix_ms := C.struct_miqt_string{}
	numberPrefix_ms.data = C.CString(numberPrefix)
	numberPrefix_ms.len = C.size_t(len(numberPrefix))
	defer C.free(unsafe.Pointer(numberPrefix_ms.data))
	C.QTextListFormat_SetNumberPrefix(this.h, numberPrefix_ms)
}

func (this *QTextListFormat) NumberPrefix() string {
	var _ms C.struct_miqt_string = C.QTextListFormat_NumberPrefix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextListFormat) SetNumberSuffix(numberSuffix string) {
	numberSuffix_ms := C.struct_miqt_string{}
	numberSuffix_ms.data = C.CString(numberSuffix)
	numberSuffix_ms.len = C.size_t(len(numberSuffix))
	defer C.free(unsafe.Pointer(numberSuffix_ms.data))
	C.QTextListFormat_SetNumberSuffix(this.h, numberSuffix_ms)
}

func (this *QTextListFormat) NumberSuffix() string {
	var _ms C.struct_miqt_string = C.QTextListFormat_NumberSuffix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTextListFormat) Delete() {
	C.QTextListFormat_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextListFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextListFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextImageFormat struct {
	h *C.QTextImageFormat
	*QTextCharFormat
}

func (this *QTextImageFormat) cPointer() *C.QTextImageFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextImageFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTextImageFormat(h *C.QTextImageFormat) *QTextImageFormat {
	if h == nil {
		return nil
	}
	return &QTextImageFormat{h: h, QTextCharFormat: UnsafeNewQTextCharFormat(unsafe.Pointer(h))}
}

func UnsafeNewQTextImageFormat(h unsafe.Pointer) *QTextImageFormat {
	return newQTextImageFormat((*C.QTextImageFormat)(h))
}

// NewQTextImageFormat constructs a new QTextImageFormat object.
func NewQTextImageFormat() *QTextImageFormat {
	ret := C.QTextImageFormat_new()
	return newQTextImageFormat(ret)
}

func (this *QTextImageFormat) IsValid() bool {
	return (bool)(C.QTextImageFormat_IsValid(this.h))
}

func (this *QTextImageFormat) SetName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTextImageFormat_SetName(this.h, name_ms)
}

func (this *QTextImageFormat) Name() string {
	var _ms C.struct_miqt_string = C.QTextImageFormat_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextImageFormat) SetWidth(width float64) {
	C.QTextImageFormat_SetWidth(this.h, (C.double)(width))
}

func (this *QTextImageFormat) Width() float64 {
	return (float64)(C.QTextImageFormat_Width(this.h))
}

func (this *QTextImageFormat) SetHeight(height float64) {
	C.QTextImageFormat_SetHeight(this.h, (C.double)(height))
}

func (this *QTextImageFormat) Height() float64 {
	return (float64)(C.QTextImageFormat_Height(this.h))
}

func (this *QTextImageFormat) SetQuality() {
	C.QTextImageFormat_SetQuality(this.h)
}

func (this *QTextImageFormat) Quality() int {
	return (int)(C.QTextImageFormat_Quality(this.h))
}

func (this *QTextImageFormat) SetQuality1(quality int) {
	C.QTextImageFormat_SetQuality1(this.h, (C.int)(quality))
}

// Delete this object from C++ memory.
func (this *QTextImageFormat) Delete() {
	C.QTextImageFormat_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextImageFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextImageFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextFrameFormat struct {
	h *C.QTextFrameFormat
	*QTextFormat
}

func (this *QTextFrameFormat) cPointer() *C.QTextFrameFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextFrameFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTextFrameFormat(h *C.QTextFrameFormat) *QTextFrameFormat {
	if h == nil {
		return nil
	}
	return &QTextFrameFormat{h: h, QTextFormat: UnsafeNewQTextFormat(unsafe.Pointer(h))}
}

func UnsafeNewQTextFrameFormat(h unsafe.Pointer) *QTextFrameFormat {
	return newQTextFrameFormat((*C.QTextFrameFormat)(h))
}

// NewQTextFrameFormat constructs a new QTextFrameFormat object.
func NewQTextFrameFormat() *QTextFrameFormat {
	ret := C.QTextFrameFormat_new()
	return newQTextFrameFormat(ret)
}

// NewQTextFrameFormat2 constructs a new QTextFrameFormat object.
func NewQTextFrameFormat2(param1 *QTextFrameFormat) *QTextFrameFormat {
	ret := C.QTextFrameFormat_new2(param1.cPointer())
	return newQTextFrameFormat(ret)
}

func (this *QTextFrameFormat) IsValid() bool {
	return (bool)(C.QTextFrameFormat_IsValid(this.h))
}

func (this *QTextFrameFormat) SetPosition(f QTextFrameFormat__Position) {
	C.QTextFrameFormat_SetPosition(this.h, (C.int)(f))
}

func (this *QTextFrameFormat) Position() QTextFrameFormat__Position {
	return (QTextFrameFormat__Position)(C.QTextFrameFormat_Position(this.h))
}

func (this *QTextFrameFormat) SetBorder(border float64) {
	C.QTextFrameFormat_SetBorder(this.h, (C.double)(border))
}

func (this *QTextFrameFormat) Border() float64 {
	return (float64)(C.QTextFrameFormat_Border(this.h))
}

func (this *QTextFrameFormat) SetBorderBrush(brush *QBrush) {
	C.QTextFrameFormat_SetBorderBrush(this.h, brush.cPointer())
}

func (this *QTextFrameFormat) BorderBrush() *QBrush {
	_ret := C.QTextFrameFormat_BorderBrush(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFrameFormat) SetBorderStyle(style QTextFrameFormat__BorderStyle) {
	C.QTextFrameFormat_SetBorderStyle(this.h, (C.int)(style))
}

func (this *QTextFrameFormat) BorderStyle() QTextFrameFormat__BorderStyle {
	return (QTextFrameFormat__BorderStyle)(C.QTextFrameFormat_BorderStyle(this.h))
}

func (this *QTextFrameFormat) SetMargin(margin float64) {
	C.QTextFrameFormat_SetMargin(this.h, (C.double)(margin))
}

func (this *QTextFrameFormat) Margin() float64 {
	return (float64)(C.QTextFrameFormat_Margin(this.h))
}

func (this *QTextFrameFormat) SetTopMargin(margin float64) {
	C.QTextFrameFormat_SetTopMargin(this.h, (C.double)(margin))
}

func (this *QTextFrameFormat) TopMargin() float64 {
	return (float64)(C.QTextFrameFormat_TopMargin(this.h))
}

func (this *QTextFrameFormat) SetBottomMargin(margin float64) {
	C.QTextFrameFormat_SetBottomMargin(this.h, (C.double)(margin))
}

func (this *QTextFrameFormat) BottomMargin() float64 {
	return (float64)(C.QTextFrameFormat_BottomMargin(this.h))
}

func (this *QTextFrameFormat) SetLeftMargin(margin float64) {
	C.QTextFrameFormat_SetLeftMargin(this.h, (C.double)(margin))
}

func (this *QTextFrameFormat) LeftMargin() float64 {
	return (float64)(C.QTextFrameFormat_LeftMargin(this.h))
}

func (this *QTextFrameFormat) SetRightMargin(margin float64) {
	C.QTextFrameFormat_SetRightMargin(this.h, (C.double)(margin))
}

func (this *QTextFrameFormat) RightMargin() float64 {
	return (float64)(C.QTextFrameFormat_RightMargin(this.h))
}

func (this *QTextFrameFormat) SetPadding(padding float64) {
	C.QTextFrameFormat_SetPadding(this.h, (C.double)(padding))
}

func (this *QTextFrameFormat) Padding() float64 {
	return (float64)(C.QTextFrameFormat_Padding(this.h))
}

func (this *QTextFrameFormat) SetWidth(width float64) {
	C.QTextFrameFormat_SetWidth(this.h, (C.double)(width))
}

func (this *QTextFrameFormat) SetWidthWithLength(length *QTextLength) {
	C.QTextFrameFormat_SetWidthWithLength(this.h, length.cPointer())
}

func (this *QTextFrameFormat) Width() *QTextLength {
	_ret := C.QTextFrameFormat_Width(this.h)
	_goptr := newQTextLength(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFrameFormat) SetHeight(height float64) {
	C.QTextFrameFormat_SetHeight(this.h, (C.double)(height))
}

func (this *QTextFrameFormat) SetHeightWithHeight(height *QTextLength) {
	C.QTextFrameFormat_SetHeightWithHeight(this.h, height.cPointer())
}

func (this *QTextFrameFormat) Height() *QTextLength {
	_ret := C.QTextFrameFormat_Height(this.h)
	_goptr := newQTextLength(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFrameFormat) SetPageBreakPolicy(flags QTextFormat__PageBreakFlag) {
	C.QTextFrameFormat_SetPageBreakPolicy(this.h, (C.int)(flags))
}

func (this *QTextFrameFormat) PageBreakPolicy() QTextFormat__PageBreakFlag {
	return (QTextFormat__PageBreakFlag)(C.QTextFrameFormat_PageBreakPolicy(this.h))
}

// Delete this object from C++ memory.
func (this *QTextFrameFormat) Delete() {
	C.QTextFrameFormat_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextFrameFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextFrameFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextTableFormat struct {
	h *C.QTextTableFormat
	*QTextFrameFormat
}

func (this *QTextTableFormat) cPointer() *C.QTextTableFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextTableFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTextTableFormat(h *C.QTextTableFormat) *QTextTableFormat {
	if h == nil {
		return nil
	}
	return &QTextTableFormat{h: h, QTextFrameFormat: UnsafeNewQTextFrameFormat(unsafe.Pointer(h))}
}

func UnsafeNewQTextTableFormat(h unsafe.Pointer) *QTextTableFormat {
	return newQTextTableFormat((*C.QTextTableFormat)(h))
}

// NewQTextTableFormat constructs a new QTextTableFormat object.
func NewQTextTableFormat() *QTextTableFormat {
	ret := C.QTextTableFormat_new()
	return newQTextTableFormat(ret)
}

func (this *QTextTableFormat) IsValid() bool {
	return (bool)(C.QTextTableFormat_IsValid(this.h))
}

func (this *QTextTableFormat) Columns() int {
	return (int)(C.QTextTableFormat_Columns(this.h))
}

func (this *QTextTableFormat) SetColumns(columns int) {
	C.QTextTableFormat_SetColumns(this.h, (C.int)(columns))
}

func (this *QTextTableFormat) SetColumnWidthConstraints(constraints []QTextLength) {
	// For the C ABI, malloc a C array of raw pointers
	constraints_CArray := (*[0xffff]*C.QTextLength)(C.malloc(C.size_t(8 * len(constraints))))
	defer C.free(unsafe.Pointer(constraints_CArray))
	for i := range constraints {
		constraints_CArray[i] = constraints[i].cPointer()
	}
	constraints_ma := &C.struct_miqt_array{len: C.size_t(len(constraints)), data: unsafe.Pointer(constraints_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(constraints_ma))
	C.QTextTableFormat_SetColumnWidthConstraints(this.h, constraints_ma)
}

func (this *QTextTableFormat) ColumnWidthConstraints() []QTextLength {
	var _ma *C.struct_miqt_array = C.QTextTableFormat_ColumnWidthConstraints(this.h)
	_ret := make([]QTextLength, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextLength)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_ret := _outCast[i]
		_vv_goptr := newQTextLength(_vv_ret)
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTextTableFormat) ClearColumnWidthConstraints() {
	C.QTextTableFormat_ClearColumnWidthConstraints(this.h)
}

func (this *QTextTableFormat) CellSpacing() float64 {
	return (float64)(C.QTextTableFormat_CellSpacing(this.h))
}

func (this *QTextTableFormat) SetCellSpacing(spacing float64) {
	C.QTextTableFormat_SetCellSpacing(this.h, (C.double)(spacing))
}

func (this *QTextTableFormat) CellPadding() float64 {
	return (float64)(C.QTextTableFormat_CellPadding(this.h))
}

func (this *QTextTableFormat) SetCellPadding(padding float64) {
	C.QTextTableFormat_SetCellPadding(this.h, (C.double)(padding))
}

func (this *QTextTableFormat) SetAlignment(alignment AlignmentFlag) {
	C.QTextTableFormat_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QTextTableFormat) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QTextTableFormat_Alignment(this.h))
}

func (this *QTextTableFormat) SetHeaderRowCount(count int) {
	C.QTextTableFormat_SetHeaderRowCount(this.h, (C.int)(count))
}

func (this *QTextTableFormat) HeaderRowCount() int {
	return (int)(C.QTextTableFormat_HeaderRowCount(this.h))
}

func (this *QTextTableFormat) SetBorderCollapse(borderCollapse bool) {
	C.QTextTableFormat_SetBorderCollapse(this.h, (C.bool)(borderCollapse))
}

func (this *QTextTableFormat) BorderCollapse() bool {
	return (bool)(C.QTextTableFormat_BorderCollapse(this.h))
}

// Delete this object from C++ memory.
func (this *QTextTableFormat) Delete() {
	C.QTextTableFormat_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextTableFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextTableFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextTableCellFormat struct {
	h *C.QTextTableCellFormat
	*QTextCharFormat
}

func (this *QTextTableCellFormat) cPointer() *C.QTextTableCellFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextTableCellFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTextTableCellFormat(h *C.QTextTableCellFormat) *QTextTableCellFormat {
	if h == nil {
		return nil
	}
	return &QTextTableCellFormat{h: h, QTextCharFormat: UnsafeNewQTextCharFormat(unsafe.Pointer(h))}
}

func UnsafeNewQTextTableCellFormat(h unsafe.Pointer) *QTextTableCellFormat {
	return newQTextTableCellFormat((*C.QTextTableCellFormat)(h))
}

// NewQTextTableCellFormat constructs a new QTextTableCellFormat object.
func NewQTextTableCellFormat() *QTextTableCellFormat {
	ret := C.QTextTableCellFormat_new()
	return newQTextTableCellFormat(ret)
}

func (this *QTextTableCellFormat) IsValid() bool {
	return (bool)(C.QTextTableCellFormat_IsValid(this.h))
}

func (this *QTextTableCellFormat) SetTopPadding(padding float64) {
	C.QTextTableCellFormat_SetTopPadding(this.h, (C.double)(padding))
}

func (this *QTextTableCellFormat) TopPadding() float64 {
	return (float64)(C.QTextTableCellFormat_TopPadding(this.h))
}

func (this *QTextTableCellFormat) SetBottomPadding(padding float64) {
	C.QTextTableCellFormat_SetBottomPadding(this.h, (C.double)(padding))
}

func (this *QTextTableCellFormat) BottomPadding() float64 {
	return (float64)(C.QTextTableCellFormat_BottomPadding(this.h))
}

func (this *QTextTableCellFormat) SetLeftPadding(padding float64) {
	C.QTextTableCellFormat_SetLeftPadding(this.h, (C.double)(padding))
}

func (this *QTextTableCellFormat) LeftPadding() float64 {
	return (float64)(C.QTextTableCellFormat_LeftPadding(this.h))
}

func (this *QTextTableCellFormat) SetRightPadding(padding float64) {
	C.QTextTableCellFormat_SetRightPadding(this.h, (C.double)(padding))
}

func (this *QTextTableCellFormat) RightPadding() float64 {
	return (float64)(C.QTextTableCellFormat_RightPadding(this.h))
}

func (this *QTextTableCellFormat) SetPadding(padding float64) {
	C.QTextTableCellFormat_SetPadding(this.h, (C.double)(padding))
}

func (this *QTextTableCellFormat) SetTopBorder(width float64) {
	C.QTextTableCellFormat_SetTopBorder(this.h, (C.double)(width))
}

func (this *QTextTableCellFormat) TopBorder() float64 {
	return (float64)(C.QTextTableCellFormat_TopBorder(this.h))
}

func (this *QTextTableCellFormat) SetBottomBorder(width float64) {
	C.QTextTableCellFormat_SetBottomBorder(this.h, (C.double)(width))
}

func (this *QTextTableCellFormat) BottomBorder() float64 {
	return (float64)(C.QTextTableCellFormat_BottomBorder(this.h))
}

func (this *QTextTableCellFormat) SetLeftBorder(width float64) {
	C.QTextTableCellFormat_SetLeftBorder(this.h, (C.double)(width))
}

func (this *QTextTableCellFormat) LeftBorder() float64 {
	return (float64)(C.QTextTableCellFormat_LeftBorder(this.h))
}

func (this *QTextTableCellFormat) SetRightBorder(width float64) {
	C.QTextTableCellFormat_SetRightBorder(this.h, (C.double)(width))
}

func (this *QTextTableCellFormat) RightBorder() float64 {
	return (float64)(C.QTextTableCellFormat_RightBorder(this.h))
}

func (this *QTextTableCellFormat) SetBorder(width float64) {
	C.QTextTableCellFormat_SetBorder(this.h, (C.double)(width))
}

func (this *QTextTableCellFormat) SetTopBorderStyle(style QTextFrameFormat__BorderStyle) {
	C.QTextTableCellFormat_SetTopBorderStyle(this.h, (C.int)(style))
}

func (this *QTextTableCellFormat) TopBorderStyle() QTextFrameFormat__BorderStyle {
	return (QTextFrameFormat__BorderStyle)(C.QTextTableCellFormat_TopBorderStyle(this.h))
}

func (this *QTextTableCellFormat) SetBottomBorderStyle(style QTextFrameFormat__BorderStyle) {
	C.QTextTableCellFormat_SetBottomBorderStyle(this.h, (C.int)(style))
}

func (this *QTextTableCellFormat) BottomBorderStyle() QTextFrameFormat__BorderStyle {
	return (QTextFrameFormat__BorderStyle)(C.QTextTableCellFormat_BottomBorderStyle(this.h))
}

func (this *QTextTableCellFormat) SetLeftBorderStyle(style QTextFrameFormat__BorderStyle) {
	C.QTextTableCellFormat_SetLeftBorderStyle(this.h, (C.int)(style))
}

func (this *QTextTableCellFormat) LeftBorderStyle() QTextFrameFormat__BorderStyle {
	return (QTextFrameFormat__BorderStyle)(C.QTextTableCellFormat_LeftBorderStyle(this.h))
}

func (this *QTextTableCellFormat) SetRightBorderStyle(style QTextFrameFormat__BorderStyle) {
	C.QTextTableCellFormat_SetRightBorderStyle(this.h, (C.int)(style))
}

func (this *QTextTableCellFormat) RightBorderStyle() QTextFrameFormat__BorderStyle {
	return (QTextFrameFormat__BorderStyle)(C.QTextTableCellFormat_RightBorderStyle(this.h))
}

func (this *QTextTableCellFormat) SetBorderStyle(style QTextFrameFormat__BorderStyle) {
	C.QTextTableCellFormat_SetBorderStyle(this.h, (C.int)(style))
}

func (this *QTextTableCellFormat) SetTopBorderBrush(brush *QBrush) {
	C.QTextTableCellFormat_SetTopBorderBrush(this.h, brush.cPointer())
}

func (this *QTextTableCellFormat) TopBorderBrush() *QBrush {
	_ret := C.QTextTableCellFormat_TopBorderBrush(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTableCellFormat) SetBottomBorderBrush(brush *QBrush) {
	C.QTextTableCellFormat_SetBottomBorderBrush(this.h, brush.cPointer())
}

func (this *QTextTableCellFormat) BottomBorderBrush() *QBrush {
	_ret := C.QTextTableCellFormat_BottomBorderBrush(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTableCellFormat) SetLeftBorderBrush(brush *QBrush) {
	C.QTextTableCellFormat_SetLeftBorderBrush(this.h, brush.cPointer())
}

func (this *QTextTableCellFormat) LeftBorderBrush() *QBrush {
	_ret := C.QTextTableCellFormat_LeftBorderBrush(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTableCellFormat) SetRightBorderBrush(brush *QBrush) {
	C.QTextTableCellFormat_SetRightBorderBrush(this.h, brush.cPointer())
}

func (this *QTextTableCellFormat) RightBorderBrush() *QBrush {
	_ret := C.QTextTableCellFormat_RightBorderBrush(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextTableCellFormat) SetBorderBrush(brush *QBrush) {
	C.QTextTableCellFormat_SetBorderBrush(this.h, brush.cPointer())
}

// Delete this object from C++ memory.
func (this *QTextTableCellFormat) Delete() {
	C.QTextTableCellFormat_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextTableCellFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextTableCellFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
