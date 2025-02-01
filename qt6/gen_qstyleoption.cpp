#include <QStyleHintReturn>
#include <QStyleHintReturnMask>
#include <QStyleHintReturnVariant>
#include <QStyleOption>
#include <QStyleOptionButton>
#include <QStyleOptionComboBox>
#include <QStyleOptionComplex>
#include <QStyleOptionDockWidget>
#include <QStyleOptionFocusRect>
#include <QStyleOptionFrame>
#include <QStyleOptionGraphicsItem>
#include <QStyleOptionGroupBox>
#include <QStyleOptionHeader>
#include <QStyleOptionHeaderV2>
#include <QStyleOptionMenuItem>
#include <QStyleOptionProgressBar>
#include <QStyleOptionRubberBand>
#include <QStyleOptionSizeGrip>
#include <QStyleOptionSlider>
#include <QStyleOptionSpinBox>
#include <QStyleOptionTab>
#include <QStyleOptionTabBarBase>
#include <QStyleOptionTabWidgetFrame>
#include <QStyleOptionTitleBar>
#include <QStyleOptionToolBar>
#include <QStyleOptionToolBox>
#include <QStyleOptionToolButton>
#include <QStyleOptionViewItem>
#include <QTransform>
#include <QWidget>
#include <qstyleoption.h>
#include "gen_qstyleoption.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QStyleOption* QStyleOption_new() {
	return new QStyleOption();
}

QStyleOption* QStyleOption_new2(QStyleOption* other) {
	return new QStyleOption(*other);
}

QStyleOption* QStyleOption_new3(int version) {
	return new QStyleOption(static_cast<int>(version));
}

QStyleOption* QStyleOption_new4(int version, int type) {
	return new QStyleOption(static_cast<int>(version), static_cast<int>(type));
}

void QStyleOption_initFrom(QStyleOption* self, QWidget* w) {
	self->initFrom(w);
}

void QStyleOption_operatorAssign(QStyleOption* self, QStyleOption* other) {
	self->operator=(*other);
}

void QStyleOption_delete(QStyleOption* self) {
	delete self;
}

QStyleOptionFocusRect* QStyleOptionFocusRect_new() {
	return new QStyleOptionFocusRect();
}

QStyleOptionFocusRect* QStyleOptionFocusRect_new2(QStyleOptionFocusRect* other) {
	return new QStyleOptionFocusRect(*other);
}

void QStyleOptionFocusRect_virtbase(QStyleOptionFocusRect* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionFocusRect_delete(QStyleOptionFocusRect* self) {
	delete self;
}

QStyleOptionFrame* QStyleOptionFrame_new() {
	return new QStyleOptionFrame();
}

QStyleOptionFrame* QStyleOptionFrame_new2(QStyleOptionFrame* other) {
	return new QStyleOptionFrame(*other);
}

void QStyleOptionFrame_virtbase(QStyleOptionFrame* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionFrame_delete(QStyleOptionFrame* self) {
	delete self;
}

QStyleOptionTabWidgetFrame* QStyleOptionTabWidgetFrame_new() {
	return new QStyleOptionTabWidgetFrame();
}

QStyleOptionTabWidgetFrame* QStyleOptionTabWidgetFrame_new2(QStyleOptionTabWidgetFrame* other) {
	return new QStyleOptionTabWidgetFrame(*other);
}

void QStyleOptionTabWidgetFrame_virtbase(QStyleOptionTabWidgetFrame* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionTabWidgetFrame_delete(QStyleOptionTabWidgetFrame* self) {
	delete self;
}

QStyleOptionTabBarBase* QStyleOptionTabBarBase_new() {
	return new QStyleOptionTabBarBase();
}

QStyleOptionTabBarBase* QStyleOptionTabBarBase_new2(QStyleOptionTabBarBase* other) {
	return new QStyleOptionTabBarBase(*other);
}

void QStyleOptionTabBarBase_virtbase(QStyleOptionTabBarBase* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionTabBarBase_delete(QStyleOptionTabBarBase* self) {
	delete self;
}

QStyleOptionHeader* QStyleOptionHeader_new() {
	return new QStyleOptionHeader();
}

QStyleOptionHeader* QStyleOptionHeader_new2(QStyleOptionHeader* other) {
	return new QStyleOptionHeader(*other);
}

void QStyleOptionHeader_virtbase(QStyleOptionHeader* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionHeader_delete(QStyleOptionHeader* self) {
	delete self;
}

QStyleOptionHeaderV2* QStyleOptionHeaderV2_new() {
	return new QStyleOptionHeaderV2();
}

QStyleOptionHeaderV2* QStyleOptionHeaderV2_new2(QStyleOptionHeaderV2* other) {
	return new QStyleOptionHeaderV2(*other);
}

void QStyleOptionHeaderV2_virtbase(QStyleOptionHeaderV2* src, QStyleOptionHeader** outptr_QStyleOptionHeader) {
	*outptr_QStyleOptionHeader = static_cast<QStyleOptionHeader*>(src);
}

void QStyleOptionHeaderV2_delete(QStyleOptionHeaderV2* self) {
	delete self;
}

QStyleOptionButton* QStyleOptionButton_new() {
	return new QStyleOptionButton();
}

QStyleOptionButton* QStyleOptionButton_new2(QStyleOptionButton* other) {
	return new QStyleOptionButton(*other);
}

void QStyleOptionButton_virtbase(QStyleOptionButton* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionButton_delete(QStyleOptionButton* self) {
	delete self;
}

QStyleOptionTab* QStyleOptionTab_new() {
	return new QStyleOptionTab();
}

QStyleOptionTab* QStyleOptionTab_new2(QStyleOptionTab* other) {
	return new QStyleOptionTab(*other);
}

void QStyleOptionTab_virtbase(QStyleOptionTab* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionTab_delete(QStyleOptionTab* self) {
	delete self;
}

QStyleOptionToolBar* QStyleOptionToolBar_new() {
	return new QStyleOptionToolBar();
}

QStyleOptionToolBar* QStyleOptionToolBar_new2(QStyleOptionToolBar* other) {
	return new QStyleOptionToolBar(*other);
}

void QStyleOptionToolBar_virtbase(QStyleOptionToolBar* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionToolBar_delete(QStyleOptionToolBar* self) {
	delete self;
}

QStyleOptionProgressBar* QStyleOptionProgressBar_new() {
	return new QStyleOptionProgressBar();
}

QStyleOptionProgressBar* QStyleOptionProgressBar_new2(QStyleOptionProgressBar* other) {
	return new QStyleOptionProgressBar(*other);
}

void QStyleOptionProgressBar_virtbase(QStyleOptionProgressBar* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionProgressBar_delete(QStyleOptionProgressBar* self) {
	delete self;
}

QStyleOptionMenuItem* QStyleOptionMenuItem_new() {
	return new QStyleOptionMenuItem();
}

QStyleOptionMenuItem* QStyleOptionMenuItem_new2(QStyleOptionMenuItem* other) {
	return new QStyleOptionMenuItem(*other);
}

void QStyleOptionMenuItem_virtbase(QStyleOptionMenuItem* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionMenuItem_delete(QStyleOptionMenuItem* self) {
	delete self;
}

QStyleOptionDockWidget* QStyleOptionDockWidget_new() {
	return new QStyleOptionDockWidget();
}

QStyleOptionDockWidget* QStyleOptionDockWidget_new2(QStyleOptionDockWidget* other) {
	return new QStyleOptionDockWidget(*other);
}

void QStyleOptionDockWidget_virtbase(QStyleOptionDockWidget* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionDockWidget_delete(QStyleOptionDockWidget* self) {
	delete self;
}

QStyleOptionViewItem* QStyleOptionViewItem_new() {
	return new QStyleOptionViewItem();
}

QStyleOptionViewItem* QStyleOptionViewItem_new2(QStyleOptionViewItem* other) {
	return new QStyleOptionViewItem(*other);
}

void QStyleOptionViewItem_virtbase(QStyleOptionViewItem* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionViewItem_delete(QStyleOptionViewItem* self) {
	delete self;
}

QStyleOptionToolBox* QStyleOptionToolBox_new() {
	return new QStyleOptionToolBox();
}

QStyleOptionToolBox* QStyleOptionToolBox_new2(QStyleOptionToolBox* other) {
	return new QStyleOptionToolBox(*other);
}

void QStyleOptionToolBox_virtbase(QStyleOptionToolBox* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionToolBox_delete(QStyleOptionToolBox* self) {
	delete self;
}

QStyleOptionRubberBand* QStyleOptionRubberBand_new() {
	return new QStyleOptionRubberBand();
}

QStyleOptionRubberBand* QStyleOptionRubberBand_new2(QStyleOptionRubberBand* other) {
	return new QStyleOptionRubberBand(*other);
}

void QStyleOptionRubberBand_virtbase(QStyleOptionRubberBand* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionRubberBand_delete(QStyleOptionRubberBand* self) {
	delete self;
}

QStyleOptionComplex* QStyleOptionComplex_new() {
	return new QStyleOptionComplex();
}

QStyleOptionComplex* QStyleOptionComplex_new2(QStyleOptionComplex* other) {
	return new QStyleOptionComplex(*other);
}

QStyleOptionComplex* QStyleOptionComplex_new3(int version) {
	return new QStyleOptionComplex(static_cast<int>(version));
}

QStyleOptionComplex* QStyleOptionComplex_new4(int version, int type) {
	return new QStyleOptionComplex(static_cast<int>(version), static_cast<int>(type));
}

void QStyleOptionComplex_virtbase(QStyleOptionComplex* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionComplex_delete(QStyleOptionComplex* self) {
	delete self;
}

QStyleOptionSlider* QStyleOptionSlider_new() {
	return new QStyleOptionSlider();
}

QStyleOptionSlider* QStyleOptionSlider_new2(QStyleOptionSlider* other) {
	return new QStyleOptionSlider(*other);
}

void QStyleOptionSlider_virtbase(QStyleOptionSlider* src, QStyleOptionComplex** outptr_QStyleOptionComplex) {
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(src);
}

void QStyleOptionSlider_delete(QStyleOptionSlider* self) {
	delete self;
}

QStyleOptionSpinBox* QStyleOptionSpinBox_new() {
	return new QStyleOptionSpinBox();
}

QStyleOptionSpinBox* QStyleOptionSpinBox_new2(QStyleOptionSpinBox* other) {
	return new QStyleOptionSpinBox(*other);
}

void QStyleOptionSpinBox_virtbase(QStyleOptionSpinBox* src, QStyleOptionComplex** outptr_QStyleOptionComplex) {
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(src);
}

void QStyleOptionSpinBox_delete(QStyleOptionSpinBox* self) {
	delete self;
}

QStyleOptionToolButton* QStyleOptionToolButton_new() {
	return new QStyleOptionToolButton();
}

QStyleOptionToolButton* QStyleOptionToolButton_new2(QStyleOptionToolButton* other) {
	return new QStyleOptionToolButton(*other);
}

void QStyleOptionToolButton_virtbase(QStyleOptionToolButton* src, QStyleOptionComplex** outptr_QStyleOptionComplex) {
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(src);
}

void QStyleOptionToolButton_delete(QStyleOptionToolButton* self) {
	delete self;
}

QStyleOptionComboBox* QStyleOptionComboBox_new() {
	return new QStyleOptionComboBox();
}

QStyleOptionComboBox* QStyleOptionComboBox_new2(QStyleOptionComboBox* other) {
	return new QStyleOptionComboBox(*other);
}

void QStyleOptionComboBox_virtbase(QStyleOptionComboBox* src, QStyleOptionComplex** outptr_QStyleOptionComplex) {
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(src);
}

void QStyleOptionComboBox_delete(QStyleOptionComboBox* self) {
	delete self;
}

QStyleOptionTitleBar* QStyleOptionTitleBar_new() {
	return new QStyleOptionTitleBar();
}

QStyleOptionTitleBar* QStyleOptionTitleBar_new2(QStyleOptionTitleBar* other) {
	return new QStyleOptionTitleBar(*other);
}

void QStyleOptionTitleBar_virtbase(QStyleOptionTitleBar* src, QStyleOptionComplex** outptr_QStyleOptionComplex) {
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(src);
}

void QStyleOptionTitleBar_delete(QStyleOptionTitleBar* self) {
	delete self;
}

QStyleOptionGroupBox* QStyleOptionGroupBox_new() {
	return new QStyleOptionGroupBox();
}

QStyleOptionGroupBox* QStyleOptionGroupBox_new2(QStyleOptionGroupBox* other) {
	return new QStyleOptionGroupBox(*other);
}

void QStyleOptionGroupBox_virtbase(QStyleOptionGroupBox* src, QStyleOptionComplex** outptr_QStyleOptionComplex) {
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(src);
}

void QStyleOptionGroupBox_delete(QStyleOptionGroupBox* self) {
	delete self;
}

QStyleOptionSizeGrip* QStyleOptionSizeGrip_new() {
	return new QStyleOptionSizeGrip();
}

QStyleOptionSizeGrip* QStyleOptionSizeGrip_new2(QStyleOptionSizeGrip* other) {
	return new QStyleOptionSizeGrip(*other);
}

void QStyleOptionSizeGrip_virtbase(QStyleOptionSizeGrip* src, QStyleOptionComplex** outptr_QStyleOptionComplex) {
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(src);
}

void QStyleOptionSizeGrip_delete(QStyleOptionSizeGrip* self) {
	delete self;
}

QStyleOptionGraphicsItem* QStyleOptionGraphicsItem_new() {
	return new QStyleOptionGraphicsItem();
}

QStyleOptionGraphicsItem* QStyleOptionGraphicsItem_new2(QStyleOptionGraphicsItem* other) {
	return new QStyleOptionGraphicsItem(*other);
}

void QStyleOptionGraphicsItem_virtbase(QStyleOptionGraphicsItem* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

double QStyleOptionGraphicsItem_levelOfDetailFromTransform(QTransform* worldTransform) {
	qreal _ret = QStyleOptionGraphicsItem::levelOfDetailFromTransform(*worldTransform);
	return static_cast<double>(_ret);
}

void QStyleOptionGraphicsItem_delete(QStyleOptionGraphicsItem* self) {
	delete self;
}

QStyleHintReturn* QStyleHintReturn_new() {
	return new QStyleHintReturn();
}

QStyleHintReturn* QStyleHintReturn_new2(QStyleHintReturn* param1) {
	return new QStyleHintReturn(*param1);
}

QStyleHintReturn* QStyleHintReturn_new3(int version) {
	return new QStyleHintReturn(static_cast<int>(version));
}

QStyleHintReturn* QStyleHintReturn_new4(int version, int type) {
	return new QStyleHintReturn(static_cast<int>(version), static_cast<int>(type));
}

void QStyleHintReturn_operatorAssign(QStyleHintReturn* self, QStyleHintReturn* param1) {
	self->operator=(*param1);
}

void QStyleHintReturn_delete(QStyleHintReturn* self) {
	delete self;
}

QStyleHintReturnMask* QStyleHintReturnMask_new() {
	return new QStyleHintReturnMask();
}

QStyleHintReturnMask* QStyleHintReturnMask_new2(QStyleHintReturnMask* param1) {
	return new QStyleHintReturnMask(*param1);
}

void QStyleHintReturnMask_virtbase(QStyleHintReturnMask* src, QStyleHintReturn** outptr_QStyleHintReturn) {
	*outptr_QStyleHintReturn = static_cast<QStyleHintReturn*>(src);
}

void QStyleHintReturnMask_operatorAssign(QStyleHintReturnMask* self, QStyleHintReturnMask* param1) {
	self->operator=(*param1);
}

void QStyleHintReturnMask_delete(QStyleHintReturnMask* self) {
	delete self;
}

QStyleHintReturnVariant* QStyleHintReturnVariant_new() {
	return new QStyleHintReturnVariant();
}

QStyleHintReturnVariant* QStyleHintReturnVariant_new2(QStyleHintReturnVariant* param1) {
	return new QStyleHintReturnVariant(*param1);
}

void QStyleHintReturnVariant_virtbase(QStyleHintReturnVariant* src, QStyleHintReturn** outptr_QStyleHintReturn) {
	*outptr_QStyleHintReturn = static_cast<QStyleHintReturn*>(src);
}

void QStyleHintReturnVariant_operatorAssign(QStyleHintReturnVariant* self, QStyleHintReturnVariant* param1) {
	self->operator=(*param1);
}

void QStyleHintReturnVariant_delete(QStyleHintReturnVariant* self) {
	delete self;
}

