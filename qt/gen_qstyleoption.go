package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qstyleoption.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QStyleOption struct {
	h *C.QStyleOption
}

func (this *QStyleOption) cPointer() *C.QStyleOption {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOption(h *C.QStyleOption) *QStyleOption {
	return &QStyleOption{h: h}
}

func newQStyleOption_U(h unsafe.Pointer) *QStyleOption {
	return newQStyleOption((*C.QStyleOption)(h))
}

// NewQStyleOption constructs a new QStyleOption object.
func NewQStyleOption() *QStyleOption {
	ret := C.QStyleOption_new()
	return newQStyleOption(ret)
}

// NewQStyleOption2 constructs a new QStyleOption object.
func NewQStyleOption2(other *QStyleOption) *QStyleOption {
	ret := C.QStyleOption_new2(other.cPointer())
	return newQStyleOption(ret)
}

// NewQStyleOption3 constructs a new QStyleOption object.
func NewQStyleOption3(version int) *QStyleOption {
	ret := C.QStyleOption_new3((C.int)(version))
	return newQStyleOption(ret)
}

// NewQStyleOption4 constructs a new QStyleOption object.
func NewQStyleOption4(version int, typeVal int) *QStyleOption {
	ret := C.QStyleOption_new4((C.int)(version), (C.int)(typeVal))
	return newQStyleOption(ret)
}

func (this *QStyleOption) Init(w *QWidget) {
	C.QStyleOption_Init(this.h, w.cPointer())
}

func (this *QStyleOption) InitFrom(w *QWidget) {
	C.QStyleOption_InitFrom(this.h, w.cPointer())
}

func (this *QStyleOption) OperatorAssign(other *QStyleOption) {
	C.QStyleOption_OperatorAssign(this.h, other.cPointer())
}

func (this *QStyleOption) Delete() {
	C.QStyleOption_Delete(this.h)
}

type QStyleOptionFocusRect struct {
	h *C.QStyleOptionFocusRect
	*QStyleOption
}

func (this *QStyleOptionFocusRect) cPointer() *C.QStyleOptionFocusRect {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionFocusRect(h *C.QStyleOptionFocusRect) *QStyleOptionFocusRect {
	return &QStyleOptionFocusRect{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionFocusRect_U(h unsafe.Pointer) *QStyleOptionFocusRect {
	return newQStyleOptionFocusRect((*C.QStyleOptionFocusRect)(h))
}

// NewQStyleOptionFocusRect constructs a new QStyleOptionFocusRect object.
func NewQStyleOptionFocusRect() *QStyleOptionFocusRect {
	ret := C.QStyleOptionFocusRect_new()
	return newQStyleOptionFocusRect(ret)
}

// NewQStyleOptionFocusRect2 constructs a new QStyleOptionFocusRect object.
func NewQStyleOptionFocusRect2(other *QStyleOptionFocusRect) *QStyleOptionFocusRect {
	ret := C.QStyleOptionFocusRect_new2(other.cPointer())
	return newQStyleOptionFocusRect(ret)
}

func (this *QStyleOptionFocusRect) Delete() {
	C.QStyleOptionFocusRect_Delete(this.h)
}

type QStyleOptionFrame struct {
	h *C.QStyleOptionFrame
	*QStyleOption
}

func (this *QStyleOptionFrame) cPointer() *C.QStyleOptionFrame {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionFrame(h *C.QStyleOptionFrame) *QStyleOptionFrame {
	return &QStyleOptionFrame{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionFrame_U(h unsafe.Pointer) *QStyleOptionFrame {
	return newQStyleOptionFrame((*C.QStyleOptionFrame)(h))
}

// NewQStyleOptionFrame constructs a new QStyleOptionFrame object.
func NewQStyleOptionFrame() *QStyleOptionFrame {
	ret := C.QStyleOptionFrame_new()
	return newQStyleOptionFrame(ret)
}

// NewQStyleOptionFrame2 constructs a new QStyleOptionFrame object.
func NewQStyleOptionFrame2(other *QStyleOptionFrame) *QStyleOptionFrame {
	ret := C.QStyleOptionFrame_new2(other.cPointer())
	return newQStyleOptionFrame(ret)
}

func (this *QStyleOptionFrame) Delete() {
	C.QStyleOptionFrame_Delete(this.h)
}

type QStyleOptionTabWidgetFrame struct {
	h *C.QStyleOptionTabWidgetFrame
	*QStyleOption
}

func (this *QStyleOptionTabWidgetFrame) cPointer() *C.QStyleOptionTabWidgetFrame {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionTabWidgetFrame(h *C.QStyleOptionTabWidgetFrame) *QStyleOptionTabWidgetFrame {
	return &QStyleOptionTabWidgetFrame{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionTabWidgetFrame_U(h unsafe.Pointer) *QStyleOptionTabWidgetFrame {
	return newQStyleOptionTabWidgetFrame((*C.QStyleOptionTabWidgetFrame)(h))
}

// NewQStyleOptionTabWidgetFrame constructs a new QStyleOptionTabWidgetFrame object.
func NewQStyleOptionTabWidgetFrame() *QStyleOptionTabWidgetFrame {
	ret := C.QStyleOptionTabWidgetFrame_new()
	return newQStyleOptionTabWidgetFrame(ret)
}

// NewQStyleOptionTabWidgetFrame2 constructs a new QStyleOptionTabWidgetFrame object.
func NewQStyleOptionTabWidgetFrame2(other *QStyleOptionTabWidgetFrame) *QStyleOptionTabWidgetFrame {
	ret := C.QStyleOptionTabWidgetFrame_new2(other.cPointer())
	return newQStyleOptionTabWidgetFrame(ret)
}

func (this *QStyleOptionTabWidgetFrame) Delete() {
	C.QStyleOptionTabWidgetFrame_Delete(this.h)
}

type QStyleOptionTabBarBase struct {
	h *C.QStyleOptionTabBarBase
	*QStyleOption
}

func (this *QStyleOptionTabBarBase) cPointer() *C.QStyleOptionTabBarBase {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionTabBarBase(h *C.QStyleOptionTabBarBase) *QStyleOptionTabBarBase {
	return &QStyleOptionTabBarBase{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionTabBarBase_U(h unsafe.Pointer) *QStyleOptionTabBarBase {
	return newQStyleOptionTabBarBase((*C.QStyleOptionTabBarBase)(h))
}

// NewQStyleOptionTabBarBase constructs a new QStyleOptionTabBarBase object.
func NewQStyleOptionTabBarBase() *QStyleOptionTabBarBase {
	ret := C.QStyleOptionTabBarBase_new()
	return newQStyleOptionTabBarBase(ret)
}

// NewQStyleOptionTabBarBase2 constructs a new QStyleOptionTabBarBase object.
func NewQStyleOptionTabBarBase2(other *QStyleOptionTabBarBase) *QStyleOptionTabBarBase {
	ret := C.QStyleOptionTabBarBase_new2(other.cPointer())
	return newQStyleOptionTabBarBase(ret)
}

func (this *QStyleOptionTabBarBase) Delete() {
	C.QStyleOptionTabBarBase_Delete(this.h)
}

type QStyleOptionHeader struct {
	h *C.QStyleOptionHeader
	*QStyleOption
}

func (this *QStyleOptionHeader) cPointer() *C.QStyleOptionHeader {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionHeader(h *C.QStyleOptionHeader) *QStyleOptionHeader {
	return &QStyleOptionHeader{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionHeader_U(h unsafe.Pointer) *QStyleOptionHeader {
	return newQStyleOptionHeader((*C.QStyleOptionHeader)(h))
}

// NewQStyleOptionHeader constructs a new QStyleOptionHeader object.
func NewQStyleOptionHeader() *QStyleOptionHeader {
	ret := C.QStyleOptionHeader_new()
	return newQStyleOptionHeader(ret)
}

// NewQStyleOptionHeader2 constructs a new QStyleOptionHeader object.
func NewQStyleOptionHeader2(other *QStyleOptionHeader) *QStyleOptionHeader {
	ret := C.QStyleOptionHeader_new2(other.cPointer())
	return newQStyleOptionHeader(ret)
}

func (this *QStyleOptionHeader) Delete() {
	C.QStyleOptionHeader_Delete(this.h)
}

type QStyleOptionButton struct {
	h *C.QStyleOptionButton
	*QStyleOption
}

func (this *QStyleOptionButton) cPointer() *C.QStyleOptionButton {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionButton(h *C.QStyleOptionButton) *QStyleOptionButton {
	return &QStyleOptionButton{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionButton_U(h unsafe.Pointer) *QStyleOptionButton {
	return newQStyleOptionButton((*C.QStyleOptionButton)(h))
}

// NewQStyleOptionButton constructs a new QStyleOptionButton object.
func NewQStyleOptionButton() *QStyleOptionButton {
	ret := C.QStyleOptionButton_new()
	return newQStyleOptionButton(ret)
}

// NewQStyleOptionButton2 constructs a new QStyleOptionButton object.
func NewQStyleOptionButton2(other *QStyleOptionButton) *QStyleOptionButton {
	ret := C.QStyleOptionButton_new2(other.cPointer())
	return newQStyleOptionButton(ret)
}

func (this *QStyleOptionButton) Delete() {
	C.QStyleOptionButton_Delete(this.h)
}

type QStyleOptionTab struct {
	h *C.QStyleOptionTab
	*QStyleOption
}

func (this *QStyleOptionTab) cPointer() *C.QStyleOptionTab {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionTab(h *C.QStyleOptionTab) *QStyleOptionTab {
	return &QStyleOptionTab{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionTab_U(h unsafe.Pointer) *QStyleOptionTab {
	return newQStyleOptionTab((*C.QStyleOptionTab)(h))
}

// NewQStyleOptionTab constructs a new QStyleOptionTab object.
func NewQStyleOptionTab() *QStyleOptionTab {
	ret := C.QStyleOptionTab_new()
	return newQStyleOptionTab(ret)
}

// NewQStyleOptionTab2 constructs a new QStyleOptionTab object.
func NewQStyleOptionTab2(other *QStyleOptionTab) *QStyleOptionTab {
	ret := C.QStyleOptionTab_new2(other.cPointer())
	return newQStyleOptionTab(ret)
}

func (this *QStyleOptionTab) Delete() {
	C.QStyleOptionTab_Delete(this.h)
}

type QStyleOptionTabV4 struct {
	h *C.QStyleOptionTabV4
	*QStyleOptionTab
}

func (this *QStyleOptionTabV4) cPointer() *C.QStyleOptionTabV4 {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionTabV4(h *C.QStyleOptionTabV4) *QStyleOptionTabV4 {
	return &QStyleOptionTabV4{h: h, QStyleOptionTab: newQStyleOptionTab_U(unsafe.Pointer(h))}
}

func newQStyleOptionTabV4_U(h unsafe.Pointer) *QStyleOptionTabV4 {
	return newQStyleOptionTabV4((*C.QStyleOptionTabV4)(h))
}

// NewQStyleOptionTabV4 constructs a new QStyleOptionTabV4 object.
func NewQStyleOptionTabV4() *QStyleOptionTabV4 {
	ret := C.QStyleOptionTabV4_new()
	return newQStyleOptionTabV4(ret)
}

// NewQStyleOptionTabV42 constructs a new QStyleOptionTabV4 object.
func NewQStyleOptionTabV42(param1 *QStyleOptionTabV4) *QStyleOptionTabV4 {
	ret := C.QStyleOptionTabV4_new2(param1.cPointer())
	return newQStyleOptionTabV4(ret)
}

func (this *QStyleOptionTabV4) OperatorAssign(param1 *QStyleOptionTabV4) {
	C.QStyleOptionTabV4_OperatorAssign(this.h, param1.cPointer())
}

func (this *QStyleOptionTabV4) Delete() {
	C.QStyleOptionTabV4_Delete(this.h)
}

type QStyleOptionToolBar struct {
	h *C.QStyleOptionToolBar
	*QStyleOption
}

func (this *QStyleOptionToolBar) cPointer() *C.QStyleOptionToolBar {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionToolBar(h *C.QStyleOptionToolBar) *QStyleOptionToolBar {
	return &QStyleOptionToolBar{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionToolBar_U(h unsafe.Pointer) *QStyleOptionToolBar {
	return newQStyleOptionToolBar((*C.QStyleOptionToolBar)(h))
}

// NewQStyleOptionToolBar constructs a new QStyleOptionToolBar object.
func NewQStyleOptionToolBar() *QStyleOptionToolBar {
	ret := C.QStyleOptionToolBar_new()
	return newQStyleOptionToolBar(ret)
}

// NewQStyleOptionToolBar2 constructs a new QStyleOptionToolBar object.
func NewQStyleOptionToolBar2(other *QStyleOptionToolBar) *QStyleOptionToolBar {
	ret := C.QStyleOptionToolBar_new2(other.cPointer())
	return newQStyleOptionToolBar(ret)
}

func (this *QStyleOptionToolBar) Delete() {
	C.QStyleOptionToolBar_Delete(this.h)
}

type QStyleOptionProgressBar struct {
	h *C.QStyleOptionProgressBar
	*QStyleOption
}

func (this *QStyleOptionProgressBar) cPointer() *C.QStyleOptionProgressBar {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionProgressBar(h *C.QStyleOptionProgressBar) *QStyleOptionProgressBar {
	return &QStyleOptionProgressBar{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionProgressBar_U(h unsafe.Pointer) *QStyleOptionProgressBar {
	return newQStyleOptionProgressBar((*C.QStyleOptionProgressBar)(h))
}

// NewQStyleOptionProgressBar constructs a new QStyleOptionProgressBar object.
func NewQStyleOptionProgressBar() *QStyleOptionProgressBar {
	ret := C.QStyleOptionProgressBar_new()
	return newQStyleOptionProgressBar(ret)
}

// NewQStyleOptionProgressBar2 constructs a new QStyleOptionProgressBar object.
func NewQStyleOptionProgressBar2(other *QStyleOptionProgressBar) *QStyleOptionProgressBar {
	ret := C.QStyleOptionProgressBar_new2(other.cPointer())
	return newQStyleOptionProgressBar(ret)
}

func (this *QStyleOptionProgressBar) Delete() {
	C.QStyleOptionProgressBar_Delete(this.h)
}

type QStyleOptionMenuItem struct {
	h *C.QStyleOptionMenuItem
	*QStyleOption
}

func (this *QStyleOptionMenuItem) cPointer() *C.QStyleOptionMenuItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionMenuItem(h *C.QStyleOptionMenuItem) *QStyleOptionMenuItem {
	return &QStyleOptionMenuItem{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionMenuItem_U(h unsafe.Pointer) *QStyleOptionMenuItem {
	return newQStyleOptionMenuItem((*C.QStyleOptionMenuItem)(h))
}

// NewQStyleOptionMenuItem constructs a new QStyleOptionMenuItem object.
func NewQStyleOptionMenuItem() *QStyleOptionMenuItem {
	ret := C.QStyleOptionMenuItem_new()
	return newQStyleOptionMenuItem(ret)
}

// NewQStyleOptionMenuItem2 constructs a new QStyleOptionMenuItem object.
func NewQStyleOptionMenuItem2(other *QStyleOptionMenuItem) *QStyleOptionMenuItem {
	ret := C.QStyleOptionMenuItem_new2(other.cPointer())
	return newQStyleOptionMenuItem(ret)
}

func (this *QStyleOptionMenuItem) Delete() {
	C.QStyleOptionMenuItem_Delete(this.h)
}

type QStyleOptionDockWidget struct {
	h *C.QStyleOptionDockWidget
	*QStyleOption
}

func (this *QStyleOptionDockWidget) cPointer() *C.QStyleOptionDockWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionDockWidget(h *C.QStyleOptionDockWidget) *QStyleOptionDockWidget {
	return &QStyleOptionDockWidget{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionDockWidget_U(h unsafe.Pointer) *QStyleOptionDockWidget {
	return newQStyleOptionDockWidget((*C.QStyleOptionDockWidget)(h))
}

// NewQStyleOptionDockWidget constructs a new QStyleOptionDockWidget object.
func NewQStyleOptionDockWidget() *QStyleOptionDockWidget {
	ret := C.QStyleOptionDockWidget_new()
	return newQStyleOptionDockWidget(ret)
}

// NewQStyleOptionDockWidget2 constructs a new QStyleOptionDockWidget object.
func NewQStyleOptionDockWidget2(other *QStyleOptionDockWidget) *QStyleOptionDockWidget {
	ret := C.QStyleOptionDockWidget_new2(other.cPointer())
	return newQStyleOptionDockWidget(ret)
}

func (this *QStyleOptionDockWidget) Delete() {
	C.QStyleOptionDockWidget_Delete(this.h)
}

type QStyleOptionViewItem struct {
	h *C.QStyleOptionViewItem
	*QStyleOption
}

func (this *QStyleOptionViewItem) cPointer() *C.QStyleOptionViewItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionViewItem(h *C.QStyleOptionViewItem) *QStyleOptionViewItem {
	return &QStyleOptionViewItem{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionViewItem_U(h unsafe.Pointer) *QStyleOptionViewItem {
	return newQStyleOptionViewItem((*C.QStyleOptionViewItem)(h))
}

// NewQStyleOptionViewItem constructs a new QStyleOptionViewItem object.
func NewQStyleOptionViewItem() *QStyleOptionViewItem {
	ret := C.QStyleOptionViewItem_new()
	return newQStyleOptionViewItem(ret)
}

// NewQStyleOptionViewItem2 constructs a new QStyleOptionViewItem object.
func NewQStyleOptionViewItem2(other *QStyleOptionViewItem) *QStyleOptionViewItem {
	ret := C.QStyleOptionViewItem_new2(other.cPointer())
	return newQStyleOptionViewItem(ret)
}

func (this *QStyleOptionViewItem) Delete() {
	C.QStyleOptionViewItem_Delete(this.h)
}

type QStyleOptionToolBox struct {
	h *C.QStyleOptionToolBox
	*QStyleOption
}

func (this *QStyleOptionToolBox) cPointer() *C.QStyleOptionToolBox {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionToolBox(h *C.QStyleOptionToolBox) *QStyleOptionToolBox {
	return &QStyleOptionToolBox{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionToolBox_U(h unsafe.Pointer) *QStyleOptionToolBox {
	return newQStyleOptionToolBox((*C.QStyleOptionToolBox)(h))
}

// NewQStyleOptionToolBox constructs a new QStyleOptionToolBox object.
func NewQStyleOptionToolBox() *QStyleOptionToolBox {
	ret := C.QStyleOptionToolBox_new()
	return newQStyleOptionToolBox(ret)
}

// NewQStyleOptionToolBox2 constructs a new QStyleOptionToolBox object.
func NewQStyleOptionToolBox2(other *QStyleOptionToolBox) *QStyleOptionToolBox {
	ret := C.QStyleOptionToolBox_new2(other.cPointer())
	return newQStyleOptionToolBox(ret)
}

func (this *QStyleOptionToolBox) Delete() {
	C.QStyleOptionToolBox_Delete(this.h)
}

type QStyleOptionRubberBand struct {
	h *C.QStyleOptionRubberBand
	*QStyleOption
}

func (this *QStyleOptionRubberBand) cPointer() *C.QStyleOptionRubberBand {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionRubberBand(h *C.QStyleOptionRubberBand) *QStyleOptionRubberBand {
	return &QStyleOptionRubberBand{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionRubberBand_U(h unsafe.Pointer) *QStyleOptionRubberBand {
	return newQStyleOptionRubberBand((*C.QStyleOptionRubberBand)(h))
}

// NewQStyleOptionRubberBand constructs a new QStyleOptionRubberBand object.
func NewQStyleOptionRubberBand() *QStyleOptionRubberBand {
	ret := C.QStyleOptionRubberBand_new()
	return newQStyleOptionRubberBand(ret)
}

// NewQStyleOptionRubberBand2 constructs a new QStyleOptionRubberBand object.
func NewQStyleOptionRubberBand2(other *QStyleOptionRubberBand) *QStyleOptionRubberBand {
	ret := C.QStyleOptionRubberBand_new2(other.cPointer())
	return newQStyleOptionRubberBand(ret)
}

func (this *QStyleOptionRubberBand) Delete() {
	C.QStyleOptionRubberBand_Delete(this.h)
}

type QStyleOptionComplex struct {
	h *C.QStyleOptionComplex
	*QStyleOption
}

func (this *QStyleOptionComplex) cPointer() *C.QStyleOptionComplex {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionComplex(h *C.QStyleOptionComplex) *QStyleOptionComplex {
	return &QStyleOptionComplex{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionComplex_U(h unsafe.Pointer) *QStyleOptionComplex {
	return newQStyleOptionComplex((*C.QStyleOptionComplex)(h))
}

// NewQStyleOptionComplex constructs a new QStyleOptionComplex object.
func NewQStyleOptionComplex() *QStyleOptionComplex {
	ret := C.QStyleOptionComplex_new()
	return newQStyleOptionComplex(ret)
}

// NewQStyleOptionComplex2 constructs a new QStyleOptionComplex object.
func NewQStyleOptionComplex2(other *QStyleOptionComplex) *QStyleOptionComplex {
	ret := C.QStyleOptionComplex_new2(other.cPointer())
	return newQStyleOptionComplex(ret)
}

// NewQStyleOptionComplex3 constructs a new QStyleOptionComplex object.
func NewQStyleOptionComplex3(version int) *QStyleOptionComplex {
	ret := C.QStyleOptionComplex_new3((C.int)(version))
	return newQStyleOptionComplex(ret)
}

// NewQStyleOptionComplex4 constructs a new QStyleOptionComplex object.
func NewQStyleOptionComplex4(version int, typeVal int) *QStyleOptionComplex {
	ret := C.QStyleOptionComplex_new4((C.int)(version), (C.int)(typeVal))
	return newQStyleOptionComplex(ret)
}

func (this *QStyleOptionComplex) Delete() {
	C.QStyleOptionComplex_Delete(this.h)
}

type QStyleOptionSlider struct {
	h *C.QStyleOptionSlider
	*QStyleOptionComplex
}

func (this *QStyleOptionSlider) cPointer() *C.QStyleOptionSlider {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionSlider(h *C.QStyleOptionSlider) *QStyleOptionSlider {
	return &QStyleOptionSlider{h: h, QStyleOptionComplex: newQStyleOptionComplex_U(unsafe.Pointer(h))}
}

func newQStyleOptionSlider_U(h unsafe.Pointer) *QStyleOptionSlider {
	return newQStyleOptionSlider((*C.QStyleOptionSlider)(h))
}

// NewQStyleOptionSlider constructs a new QStyleOptionSlider object.
func NewQStyleOptionSlider() *QStyleOptionSlider {
	ret := C.QStyleOptionSlider_new()
	return newQStyleOptionSlider(ret)
}

// NewQStyleOptionSlider2 constructs a new QStyleOptionSlider object.
func NewQStyleOptionSlider2(other *QStyleOptionSlider) *QStyleOptionSlider {
	ret := C.QStyleOptionSlider_new2(other.cPointer())
	return newQStyleOptionSlider(ret)
}

func (this *QStyleOptionSlider) Delete() {
	C.QStyleOptionSlider_Delete(this.h)
}

type QStyleOptionSpinBox struct {
	h *C.QStyleOptionSpinBox
	*QStyleOptionComplex
}

func (this *QStyleOptionSpinBox) cPointer() *C.QStyleOptionSpinBox {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionSpinBox(h *C.QStyleOptionSpinBox) *QStyleOptionSpinBox {
	return &QStyleOptionSpinBox{h: h, QStyleOptionComplex: newQStyleOptionComplex_U(unsafe.Pointer(h))}
}

func newQStyleOptionSpinBox_U(h unsafe.Pointer) *QStyleOptionSpinBox {
	return newQStyleOptionSpinBox((*C.QStyleOptionSpinBox)(h))
}

// NewQStyleOptionSpinBox constructs a new QStyleOptionSpinBox object.
func NewQStyleOptionSpinBox() *QStyleOptionSpinBox {
	ret := C.QStyleOptionSpinBox_new()
	return newQStyleOptionSpinBox(ret)
}

// NewQStyleOptionSpinBox2 constructs a new QStyleOptionSpinBox object.
func NewQStyleOptionSpinBox2(other *QStyleOptionSpinBox) *QStyleOptionSpinBox {
	ret := C.QStyleOptionSpinBox_new2(other.cPointer())
	return newQStyleOptionSpinBox(ret)
}

func (this *QStyleOptionSpinBox) Delete() {
	C.QStyleOptionSpinBox_Delete(this.h)
}

type QStyleOptionToolButton struct {
	h *C.QStyleOptionToolButton
	*QStyleOptionComplex
}

func (this *QStyleOptionToolButton) cPointer() *C.QStyleOptionToolButton {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionToolButton(h *C.QStyleOptionToolButton) *QStyleOptionToolButton {
	return &QStyleOptionToolButton{h: h, QStyleOptionComplex: newQStyleOptionComplex_U(unsafe.Pointer(h))}
}

func newQStyleOptionToolButton_U(h unsafe.Pointer) *QStyleOptionToolButton {
	return newQStyleOptionToolButton((*C.QStyleOptionToolButton)(h))
}

// NewQStyleOptionToolButton constructs a new QStyleOptionToolButton object.
func NewQStyleOptionToolButton() *QStyleOptionToolButton {
	ret := C.QStyleOptionToolButton_new()
	return newQStyleOptionToolButton(ret)
}

// NewQStyleOptionToolButton2 constructs a new QStyleOptionToolButton object.
func NewQStyleOptionToolButton2(other *QStyleOptionToolButton) *QStyleOptionToolButton {
	ret := C.QStyleOptionToolButton_new2(other.cPointer())
	return newQStyleOptionToolButton(ret)
}

func (this *QStyleOptionToolButton) Delete() {
	C.QStyleOptionToolButton_Delete(this.h)
}

type QStyleOptionComboBox struct {
	h *C.QStyleOptionComboBox
	*QStyleOptionComplex
}

func (this *QStyleOptionComboBox) cPointer() *C.QStyleOptionComboBox {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionComboBox(h *C.QStyleOptionComboBox) *QStyleOptionComboBox {
	return &QStyleOptionComboBox{h: h, QStyleOptionComplex: newQStyleOptionComplex_U(unsafe.Pointer(h))}
}

func newQStyleOptionComboBox_U(h unsafe.Pointer) *QStyleOptionComboBox {
	return newQStyleOptionComboBox((*C.QStyleOptionComboBox)(h))
}

// NewQStyleOptionComboBox constructs a new QStyleOptionComboBox object.
func NewQStyleOptionComboBox() *QStyleOptionComboBox {
	ret := C.QStyleOptionComboBox_new()
	return newQStyleOptionComboBox(ret)
}

// NewQStyleOptionComboBox2 constructs a new QStyleOptionComboBox object.
func NewQStyleOptionComboBox2(other *QStyleOptionComboBox) *QStyleOptionComboBox {
	ret := C.QStyleOptionComboBox_new2(other.cPointer())
	return newQStyleOptionComboBox(ret)
}

func (this *QStyleOptionComboBox) Delete() {
	C.QStyleOptionComboBox_Delete(this.h)
}

type QStyleOptionTitleBar struct {
	h *C.QStyleOptionTitleBar
	*QStyleOptionComplex
}

func (this *QStyleOptionTitleBar) cPointer() *C.QStyleOptionTitleBar {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionTitleBar(h *C.QStyleOptionTitleBar) *QStyleOptionTitleBar {
	return &QStyleOptionTitleBar{h: h, QStyleOptionComplex: newQStyleOptionComplex_U(unsafe.Pointer(h))}
}

func newQStyleOptionTitleBar_U(h unsafe.Pointer) *QStyleOptionTitleBar {
	return newQStyleOptionTitleBar((*C.QStyleOptionTitleBar)(h))
}

// NewQStyleOptionTitleBar constructs a new QStyleOptionTitleBar object.
func NewQStyleOptionTitleBar() *QStyleOptionTitleBar {
	ret := C.QStyleOptionTitleBar_new()
	return newQStyleOptionTitleBar(ret)
}

// NewQStyleOptionTitleBar2 constructs a new QStyleOptionTitleBar object.
func NewQStyleOptionTitleBar2(other *QStyleOptionTitleBar) *QStyleOptionTitleBar {
	ret := C.QStyleOptionTitleBar_new2(other.cPointer())
	return newQStyleOptionTitleBar(ret)
}

func (this *QStyleOptionTitleBar) Delete() {
	C.QStyleOptionTitleBar_Delete(this.h)
}

type QStyleOptionGroupBox struct {
	h *C.QStyleOptionGroupBox
	*QStyleOptionComplex
}

func (this *QStyleOptionGroupBox) cPointer() *C.QStyleOptionGroupBox {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionGroupBox(h *C.QStyleOptionGroupBox) *QStyleOptionGroupBox {
	return &QStyleOptionGroupBox{h: h, QStyleOptionComplex: newQStyleOptionComplex_U(unsafe.Pointer(h))}
}

func newQStyleOptionGroupBox_U(h unsafe.Pointer) *QStyleOptionGroupBox {
	return newQStyleOptionGroupBox((*C.QStyleOptionGroupBox)(h))
}

// NewQStyleOptionGroupBox constructs a new QStyleOptionGroupBox object.
func NewQStyleOptionGroupBox() *QStyleOptionGroupBox {
	ret := C.QStyleOptionGroupBox_new()
	return newQStyleOptionGroupBox(ret)
}

// NewQStyleOptionGroupBox2 constructs a new QStyleOptionGroupBox object.
func NewQStyleOptionGroupBox2(other *QStyleOptionGroupBox) *QStyleOptionGroupBox {
	ret := C.QStyleOptionGroupBox_new2(other.cPointer())
	return newQStyleOptionGroupBox(ret)
}

func (this *QStyleOptionGroupBox) Delete() {
	C.QStyleOptionGroupBox_Delete(this.h)
}

type QStyleOptionSizeGrip struct {
	h *C.QStyleOptionSizeGrip
	*QStyleOptionComplex
}

func (this *QStyleOptionSizeGrip) cPointer() *C.QStyleOptionSizeGrip {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionSizeGrip(h *C.QStyleOptionSizeGrip) *QStyleOptionSizeGrip {
	return &QStyleOptionSizeGrip{h: h, QStyleOptionComplex: newQStyleOptionComplex_U(unsafe.Pointer(h))}
}

func newQStyleOptionSizeGrip_U(h unsafe.Pointer) *QStyleOptionSizeGrip {
	return newQStyleOptionSizeGrip((*C.QStyleOptionSizeGrip)(h))
}

// NewQStyleOptionSizeGrip constructs a new QStyleOptionSizeGrip object.
func NewQStyleOptionSizeGrip() *QStyleOptionSizeGrip {
	ret := C.QStyleOptionSizeGrip_new()
	return newQStyleOptionSizeGrip(ret)
}

// NewQStyleOptionSizeGrip2 constructs a new QStyleOptionSizeGrip object.
func NewQStyleOptionSizeGrip2(other *QStyleOptionSizeGrip) *QStyleOptionSizeGrip {
	ret := C.QStyleOptionSizeGrip_new2(other.cPointer())
	return newQStyleOptionSizeGrip(ret)
}

func (this *QStyleOptionSizeGrip) Delete() {
	C.QStyleOptionSizeGrip_Delete(this.h)
}

type QStyleOptionGraphicsItem struct {
	h *C.QStyleOptionGraphicsItem
	*QStyleOption
}

func (this *QStyleOptionGraphicsItem) cPointer() *C.QStyleOptionGraphicsItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleOptionGraphicsItem(h *C.QStyleOptionGraphicsItem) *QStyleOptionGraphicsItem {
	return &QStyleOptionGraphicsItem{h: h, QStyleOption: newQStyleOption_U(unsafe.Pointer(h))}
}

func newQStyleOptionGraphicsItem_U(h unsafe.Pointer) *QStyleOptionGraphicsItem {
	return newQStyleOptionGraphicsItem((*C.QStyleOptionGraphicsItem)(h))
}

// NewQStyleOptionGraphicsItem constructs a new QStyleOptionGraphicsItem object.
func NewQStyleOptionGraphicsItem() *QStyleOptionGraphicsItem {
	ret := C.QStyleOptionGraphicsItem_new()
	return newQStyleOptionGraphicsItem(ret)
}

// NewQStyleOptionGraphicsItem2 constructs a new QStyleOptionGraphicsItem object.
func NewQStyleOptionGraphicsItem2(other *QStyleOptionGraphicsItem) *QStyleOptionGraphicsItem {
	ret := C.QStyleOptionGraphicsItem_new2(other.cPointer())
	return newQStyleOptionGraphicsItem(ret)
}

func QStyleOptionGraphicsItem_LevelOfDetailFromTransform(worldTransform *QTransform) float64 {
	ret := C.QStyleOptionGraphicsItem_LevelOfDetailFromTransform(worldTransform.cPointer())
	return (float64)(ret)
}

func (this *QStyleOptionGraphicsItem) Delete() {
	C.QStyleOptionGraphicsItem_Delete(this.h)
}

type QStyleHintReturn struct {
	h *C.QStyleHintReturn
}

func (this *QStyleHintReturn) cPointer() *C.QStyleHintReturn {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleHintReturn(h *C.QStyleHintReturn) *QStyleHintReturn {
	return &QStyleHintReturn{h: h}
}

func newQStyleHintReturn_U(h unsafe.Pointer) *QStyleHintReturn {
	return newQStyleHintReturn((*C.QStyleHintReturn)(h))
}

// NewQStyleHintReturn constructs a new QStyleHintReturn object.
func NewQStyleHintReturn() *QStyleHintReturn {
	ret := C.QStyleHintReturn_new()
	return newQStyleHintReturn(ret)
}

// NewQStyleHintReturn2 constructs a new QStyleHintReturn object.
func NewQStyleHintReturn2(param1 *QStyleHintReturn) *QStyleHintReturn {
	ret := C.QStyleHintReturn_new2(param1.cPointer())
	return newQStyleHintReturn(ret)
}

// NewQStyleHintReturn3 constructs a new QStyleHintReturn object.
func NewQStyleHintReturn3(version int) *QStyleHintReturn {
	ret := C.QStyleHintReturn_new3((C.int)(version))
	return newQStyleHintReturn(ret)
}

// NewQStyleHintReturn4 constructs a new QStyleHintReturn object.
func NewQStyleHintReturn4(version int, typeVal int) *QStyleHintReturn {
	ret := C.QStyleHintReturn_new4((C.int)(version), (C.int)(typeVal))
	return newQStyleHintReturn(ret)
}

func (this *QStyleHintReturn) OperatorAssign(param1 *QStyleHintReturn) {
	C.QStyleHintReturn_OperatorAssign(this.h, param1.cPointer())
}

func (this *QStyleHintReturn) Delete() {
	C.QStyleHintReturn_Delete(this.h)
}

type QStyleHintReturnMask struct {
	h *C.QStyleHintReturnMask
	*QStyleHintReturn
}

func (this *QStyleHintReturnMask) cPointer() *C.QStyleHintReturnMask {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleHintReturnMask(h *C.QStyleHintReturnMask) *QStyleHintReturnMask {
	return &QStyleHintReturnMask{h: h, QStyleHintReturn: newQStyleHintReturn_U(unsafe.Pointer(h))}
}

func newQStyleHintReturnMask_U(h unsafe.Pointer) *QStyleHintReturnMask {
	return newQStyleHintReturnMask((*C.QStyleHintReturnMask)(h))
}

// NewQStyleHintReturnMask constructs a new QStyleHintReturnMask object.
func NewQStyleHintReturnMask() *QStyleHintReturnMask {
	ret := C.QStyleHintReturnMask_new()
	return newQStyleHintReturnMask(ret)
}

// NewQStyleHintReturnMask2 constructs a new QStyleHintReturnMask object.
func NewQStyleHintReturnMask2(param1 *QStyleHintReturnMask) *QStyleHintReturnMask {
	ret := C.QStyleHintReturnMask_new2(param1.cPointer())
	return newQStyleHintReturnMask(ret)
}

func (this *QStyleHintReturnMask) OperatorAssign(param1 *QStyleHintReturnMask) {
	C.QStyleHintReturnMask_OperatorAssign(this.h, param1.cPointer())
}

func (this *QStyleHintReturnMask) Delete() {
	C.QStyleHintReturnMask_Delete(this.h)
}

type QStyleHintReturnVariant struct {
	h *C.QStyleHintReturnVariant
	*QStyleHintReturn
}

func (this *QStyleHintReturnVariant) cPointer() *C.QStyleHintReturnVariant {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleHintReturnVariant(h *C.QStyleHintReturnVariant) *QStyleHintReturnVariant {
	return &QStyleHintReturnVariant{h: h, QStyleHintReturn: newQStyleHintReturn_U(unsafe.Pointer(h))}
}

func newQStyleHintReturnVariant_U(h unsafe.Pointer) *QStyleHintReturnVariant {
	return newQStyleHintReturnVariant((*C.QStyleHintReturnVariant)(h))
}

// NewQStyleHintReturnVariant constructs a new QStyleHintReturnVariant object.
func NewQStyleHintReturnVariant() *QStyleHintReturnVariant {
	ret := C.QStyleHintReturnVariant_new()
	return newQStyleHintReturnVariant(ret)
}

// NewQStyleHintReturnVariant2 constructs a new QStyleHintReturnVariant object.
func NewQStyleHintReturnVariant2(param1 *QStyleHintReturnVariant) *QStyleHintReturnVariant {
	ret := C.QStyleHintReturnVariant_new2(param1.cPointer())
	return newQStyleHintReturnVariant(ret)
}

func (this *QStyleHintReturnVariant) OperatorAssign(param1 *QStyleHintReturnVariant) {
	C.QStyleHintReturnVariant_OperatorAssign(this.h, param1.cPointer())
}

func (this *QStyleHintReturnVariant) Delete() {
	C.QStyleHintReturnVariant_Delete(this.h)
}
