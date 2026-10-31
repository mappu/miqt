package qt6

/*

#include "gen_qsize.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"unsafe"
)

// QSize is a plain Go struct with the same memory layout as the
// Qt class. The zero value is not always the same as the default constructor;
// use NewQSize().
type QSize struct {
	wd int32
	ht int32
}

func (this *QSize) cPointer() *C.QSize {
	return (*C.QSize)(unsafe.Pointer(this))
}

func (this *QSize) UnsafePointer() unsafe.Pointer {
	return unsafe.Pointer(this)
}

// newQSize views C++ memory as this type, without copying it.
func newQSize(h *C.QSize) *QSize {
	return (*QSize)(unsafe.Pointer(h))
}

// UnsafeNewQSize views C++ memory as this type, without copying it.
func UnsafeNewQSize(h unsafe.Pointer) *QSize {
	return (*QSize)(h)
}

// NewQSize constructs a new QSize object.
func NewQSize() QSize {

	return libmiqt.ValueCast[QSize](C.QSize_new())
}

// NewQSize2 constructs a new QSize object.
func NewQSize2(w int, h int) QSize {

	return libmiqt.ValueCast[QSize](C.QSize_new2((C.int)(w), (C.int)(h)))
}

// NewQSize3 constructs a new QSize object.
func NewQSize3(param1 QSize) QSize {

	return libmiqt.ValueCast[QSize](C.QSize_new3(libmiqt.ValueCast[C.struct_miqt_qsize](param1)))
}

func (this QSize) IsNull() bool {
	return (bool)(C.QSize_isNull(libmiqt.ValueCast[C.struct_miqt_qsize](this)))
}

func (this QSize) IsEmpty() bool {
	return (bool)(C.QSize_isEmpty(libmiqt.ValueCast[C.struct_miqt_qsize](this)))
}

func (this QSize) IsValid() bool {
	return (bool)(C.QSize_isValid(libmiqt.ValueCast[C.struct_miqt_qsize](this)))
}

func (this QSize) Width() int {
	return (int)(C.QSize_width(libmiqt.ValueCast[C.struct_miqt_qsize](this)))
}

func (this QSize) Height() int {
	return (int)(C.QSize_height(libmiqt.ValueCast[C.struct_miqt_qsize](this)))
}

func (this *QSize) SetWidth(w int) {
	C.QSize_setWidth(this.cPointer(), (C.int)(w))
}

func (this *QSize) SetHeight(h int) {
	C.QSize_setHeight(this.cPointer(), (C.int)(h))
}

func (this *QSize) Transpose() {
	C.QSize_transpose(this.cPointer())
}

func (this QSize) Transposed() QSize {
	return libmiqt.ValueCast[QSize](C.QSize_transposed(libmiqt.ValueCast[C.struct_miqt_qsize](this)))
}

func (this *QSize) Scale(w int, h int, mode AspectRatioMode) {
	C.QSize_scale(this.cPointer(), (C.int)(w), (C.int)(h), (C.int)(mode))
}

func (this *QSize) Scale2(s QSize, mode AspectRatioMode) {
	C.QSize_scale2(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qsize](s), (C.int)(mode))
}

func (this QSize) Scaled(w int, h int, mode AspectRatioMode) QSize {
	return libmiqt.ValueCast[QSize](C.QSize_scaled(libmiqt.ValueCast[C.struct_miqt_qsize](this), (C.int)(w), (C.int)(h), (C.int)(mode)))
}

func (this QSize) Scaled2(s QSize, mode AspectRatioMode) QSize {
	return libmiqt.ValueCast[QSize](C.QSize_scaled2(libmiqt.ValueCast[C.struct_miqt_qsize](this), libmiqt.ValueCast[C.struct_miqt_qsize](s), (C.int)(mode)))
}

func (this QSize) ExpandedTo(param1 QSize) QSize {
	return libmiqt.ValueCast[QSize](C.QSize_expandedTo(libmiqt.ValueCast[C.struct_miqt_qsize](this), libmiqt.ValueCast[C.struct_miqt_qsize](param1)))
}

func (this QSize) BoundedTo(param1 QSize) QSize {
	return libmiqt.ValueCast[QSize](C.QSize_boundedTo(libmiqt.ValueCast[C.struct_miqt_qsize](this), libmiqt.ValueCast[C.struct_miqt_qsize](param1)))
}

func (this QSize) GrownBy(m QMargins) QSize {
	return libmiqt.ValueCast[QSize](C.QSize_grownBy(libmiqt.ValueCast[C.struct_miqt_qsize](this), libmiqt.ValueCast[C.struct_miqt_qmargins](m)))
}

func (this QSize) ShrunkBy(m QMargins) QSize {
	return libmiqt.ValueCast[QSize](C.QSize_shrunkBy(libmiqt.ValueCast[C.struct_miqt_qsize](this), libmiqt.ValueCast[C.struct_miqt_qmargins](m)))
}

func (this *QSize) OperatorPlusAssign(param1 QSize) *QSize {
	return newQSize(C.QSize_operatorPlusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qsize](param1)))
}

func (this *QSize) OperatorMinusAssign(param1 QSize) *QSize {
	return newQSize(C.QSize_operatorMinusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qsize](param1)))
}

func (this *QSize) OperatorMultiplyAssign(c float64) *QSize {
	return newQSize(C.QSize_operatorMultiplyAssign(this.cPointer(), (C.double)(c)))
}

func (this *QSize) OperatorDivideAssign(c float64) *QSize {
	return newQSize(C.QSize_operatorDivideAssign(this.cPointer(), (C.double)(c)))
}

func (this QSize) ToSizeF() QSizeF {
	return libmiqt.ValueCast[QSizeF](C.QSize_toSizeF(libmiqt.ValueCast[C.struct_miqt_qsize](this)))
}

func (this *QSize) OperatorAssign(param1 QSize) {
	C.QSize_operatorAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qsize](param1))
}

// QSizeF is a plain Go struct with the same memory layout as the
// Qt class. The zero value is not always the same as the default constructor;
// use NewQSizeF().
type QSizeF struct {
	wd float64
	ht float64
}

func (this *QSizeF) cPointer() *C.QSizeF {
	return (*C.QSizeF)(unsafe.Pointer(this))
}

func (this *QSizeF) UnsafePointer() unsafe.Pointer {
	return unsafe.Pointer(this)
}

// newQSizeF views C++ memory as this type, without copying it.
func newQSizeF(h *C.QSizeF) *QSizeF {
	return (*QSizeF)(unsafe.Pointer(h))
}

// UnsafeNewQSizeF views C++ memory as this type, without copying it.
func UnsafeNewQSizeF(h unsafe.Pointer) *QSizeF {
	return (*QSizeF)(h)
}

// NewQSizeF constructs a new QSizeF object.
func NewQSizeF() QSizeF {

	return libmiqt.ValueCast[QSizeF](C.QSizeF_new())
}

// NewQSizeF2 constructs a new QSizeF object.
func NewQSizeF2(sz QSize) QSizeF {

	return libmiqt.ValueCast[QSizeF](C.QSizeF_new2(libmiqt.ValueCast[C.struct_miqt_qsize](sz)))
}

// NewQSizeF3 constructs a new QSizeF object.
func NewQSizeF3(w float64, h float64) QSizeF {

	return libmiqt.ValueCast[QSizeF](C.QSizeF_new3((C.double)(w), (C.double)(h)))
}

// NewQSizeF4 constructs a new QSizeF object.
func NewQSizeF4(param1 QSizeF) QSizeF {

	return libmiqt.ValueCast[QSizeF](C.QSizeF_new4(libmiqt.ValueCast[C.struct_miqt_qsizef](param1)))
}

func (this QSizeF) IsNull() bool {
	return (bool)(C.QSizeF_isNull(libmiqt.ValueCast[C.struct_miqt_qsizef](this)))
}

func (this QSizeF) IsEmpty() bool {
	return (bool)(C.QSizeF_isEmpty(libmiqt.ValueCast[C.struct_miqt_qsizef](this)))
}

func (this QSizeF) IsValid() bool {
	return (bool)(C.QSizeF_isValid(libmiqt.ValueCast[C.struct_miqt_qsizef](this)))
}

func (this QSizeF) Width() float64 {
	return (float64)(C.QSizeF_width(libmiqt.ValueCast[C.struct_miqt_qsizef](this)))
}

func (this QSizeF) Height() float64 {
	return (float64)(C.QSizeF_height(libmiqt.ValueCast[C.struct_miqt_qsizef](this)))
}

func (this *QSizeF) SetWidth(w float64) {
	C.QSizeF_setWidth(this.cPointer(), (C.double)(w))
}

func (this *QSizeF) SetHeight(h float64) {
	C.QSizeF_setHeight(this.cPointer(), (C.double)(h))
}

func (this *QSizeF) Transpose() {
	C.QSizeF_transpose(this.cPointer())
}

func (this QSizeF) Transposed() QSizeF {
	return libmiqt.ValueCast[QSizeF](C.QSizeF_transposed(libmiqt.ValueCast[C.struct_miqt_qsizef](this)))
}

func (this *QSizeF) Scale(w float64, h float64, mode AspectRatioMode) {
	C.QSizeF_scale(this.cPointer(), (C.double)(w), (C.double)(h), (C.int)(mode))
}

func (this *QSizeF) Scale2(s QSizeF, mode AspectRatioMode) {
	C.QSizeF_scale2(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qsizef](s), (C.int)(mode))
}

func (this QSizeF) Scaled(w float64, h float64, mode AspectRatioMode) QSizeF {
	return libmiqt.ValueCast[QSizeF](C.QSizeF_scaled(libmiqt.ValueCast[C.struct_miqt_qsizef](this), (C.double)(w), (C.double)(h), (C.int)(mode)))
}

func (this QSizeF) Scaled2(s QSizeF, mode AspectRatioMode) QSizeF {
	return libmiqt.ValueCast[QSizeF](C.QSizeF_scaled2(libmiqt.ValueCast[C.struct_miqt_qsizef](this), libmiqt.ValueCast[C.struct_miqt_qsizef](s), (C.int)(mode)))
}

func (this QSizeF) ExpandedTo(param1 QSizeF) QSizeF {
	return libmiqt.ValueCast[QSizeF](C.QSizeF_expandedTo(libmiqt.ValueCast[C.struct_miqt_qsizef](this), libmiqt.ValueCast[C.struct_miqt_qsizef](param1)))
}

func (this QSizeF) BoundedTo(param1 QSizeF) QSizeF {
	return libmiqt.ValueCast[QSizeF](C.QSizeF_boundedTo(libmiqt.ValueCast[C.struct_miqt_qsizef](this), libmiqt.ValueCast[C.struct_miqt_qsizef](param1)))
}

func (this QSizeF) GrownBy(m QMarginsF) QSizeF {
	return libmiqt.ValueCast[QSizeF](C.QSizeF_grownBy(libmiqt.ValueCast[C.struct_miqt_qsizef](this), libmiqt.ValueCast[C.struct_miqt_qmarginsf](m)))
}

func (this QSizeF) ShrunkBy(m QMarginsF) QSizeF {
	return libmiqt.ValueCast[QSizeF](C.QSizeF_shrunkBy(libmiqt.ValueCast[C.struct_miqt_qsizef](this), libmiqt.ValueCast[C.struct_miqt_qmarginsf](m)))
}

func (this *QSizeF) OperatorPlusAssign(param1 QSizeF) *QSizeF {
	return newQSizeF(C.QSizeF_operatorPlusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qsizef](param1)))
}

func (this *QSizeF) OperatorMinusAssign(param1 QSizeF) *QSizeF {
	return newQSizeF(C.QSizeF_operatorMinusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qsizef](param1)))
}

func (this *QSizeF) OperatorMultiplyAssign(c float64) *QSizeF {
	return newQSizeF(C.QSizeF_operatorMultiplyAssign(this.cPointer(), (C.double)(c)))
}

func (this *QSizeF) OperatorDivideAssign(c float64) *QSizeF {
	return newQSizeF(C.QSizeF_operatorDivideAssign(this.cPointer(), (C.double)(c)))
}

func (this QSizeF) ToSize() QSize {
	return libmiqt.ValueCast[QSize](C.QSizeF_toSize(libmiqt.ValueCast[C.struct_miqt_qsizef](this)))
}

func (this *QSizeF) OperatorAssign(param1 QSizeF) {
	C.QSizeF_operatorAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qsizef](param1))
}
