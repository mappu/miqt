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
#include <QStyleOptionMenuItem>
#include <QStyleOptionProgressBar>
#include <QStyleOptionRubberBand>
#include <QStyleOptionSizeGrip>
#include <QStyleOptionSlider>
#include <QStyleOptionSpinBox>
#include <QStyleOptionTab>
#include <QStyleOptionTabBarBase>
#include <QStyleOptionTabV4>
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

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QStyleOption* QStyleOption_new() {
	return new QStyleOption();
}

QStyleOption* QStyleOption_new2(QStyleOption* other) {
	return new QStyleOption(*other);
}

QStyleOption* QStyleOption_new3(int version) {
	return new QStyleOption(static_cast<int>(version));
}

QStyleOption* QStyleOption_new4(int version, int typeVal) {
	return new QStyleOption(static_cast<int>(version), static_cast<int>(typeVal));
}

void QStyleOption_Init(QStyleOption* self, QWidget* w) {
	self->init(w);
}

void QStyleOption_InitFrom(QStyleOption* self, QWidget* w) {
	self->initFrom(w);
}

void QStyleOption_OperatorAssign(QStyleOption* self, QStyleOption* other) {
	self->operator=(*other);
}

void QStyleOption_Delete(QStyleOption* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOption*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionFocusRect_Delete(QStyleOptionFocusRect* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionFocusRect*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionFrame_Delete(QStyleOptionFrame* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionFrame*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionTabWidgetFrame_Delete(QStyleOptionTabWidgetFrame* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionTabWidgetFrame*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionTabBarBase_Delete(QStyleOptionTabBarBase* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionTabBarBase*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionHeader_Delete(QStyleOptionHeader* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionHeader*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionButton_Delete(QStyleOptionButton* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionButton*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionTab_Delete(QStyleOptionTab* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionTab*>( self );
	} else {
		delete self;
	}
}

QStyleOptionTabV4* QStyleOptionTabV4_new() {
	return new QStyleOptionTabV4();
}

QStyleOptionTabV4* QStyleOptionTabV4_new2(QStyleOptionTabV4* param1) {
	return new QStyleOptionTabV4(*param1);
}

void QStyleOptionTabV4_virtbase(QStyleOptionTabV4* src, QStyleOptionTab** outptr_QStyleOptionTab) {
	*outptr_QStyleOptionTab = static_cast<QStyleOptionTab*>(src);
}

void QStyleOptionTabV4_OperatorAssign(QStyleOptionTabV4* self, QStyleOptionTabV4* param1) {
	self->operator=(*param1);
}

void QStyleOptionTabV4_Delete(QStyleOptionTabV4* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionTabV4*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionToolBar_Delete(QStyleOptionToolBar* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionToolBar*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionProgressBar_Delete(QStyleOptionProgressBar* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionProgressBar*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionMenuItem_Delete(QStyleOptionMenuItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionMenuItem*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionDockWidget_Delete(QStyleOptionDockWidget* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionDockWidget*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionViewItem_Delete(QStyleOptionViewItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionViewItem*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionToolBox_Delete(QStyleOptionToolBox* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionToolBox*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionRubberBand_Delete(QStyleOptionRubberBand* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionRubberBand*>( self );
	} else {
		delete self;
	}
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

QStyleOptionComplex* QStyleOptionComplex_new4(int version, int typeVal) {
	return new QStyleOptionComplex(static_cast<int>(version), static_cast<int>(typeVal));
}

void QStyleOptionComplex_virtbase(QStyleOptionComplex* src, QStyleOption** outptr_QStyleOption) {
	*outptr_QStyleOption = static_cast<QStyleOption*>(src);
}

void QStyleOptionComplex_Delete(QStyleOptionComplex* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionComplex*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionSlider_Delete(QStyleOptionSlider* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionSlider*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionSpinBox_Delete(QStyleOptionSpinBox* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionSpinBox*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionToolButton_Delete(QStyleOptionToolButton* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionToolButton*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionComboBox_Delete(QStyleOptionComboBox* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionComboBox*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionTitleBar_Delete(QStyleOptionTitleBar* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionTitleBar*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionGroupBox_Delete(QStyleOptionGroupBox* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionGroupBox*>( self );
	} else {
		delete self;
	}
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

void QStyleOptionSizeGrip_Delete(QStyleOptionSizeGrip* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionSizeGrip*>( self );
	} else {
		delete self;
	}
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

double QStyleOptionGraphicsItem_LevelOfDetailFromTransform(QTransform* worldTransform) {
	qreal _ret = QStyleOptionGraphicsItem::levelOfDetailFromTransform(*worldTransform);
	return static_cast<double>(_ret);
}

void QStyleOptionGraphicsItem_Delete(QStyleOptionGraphicsItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionGraphicsItem*>( self );
	} else {
		delete self;
	}
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

QStyleHintReturn* QStyleHintReturn_new4(int version, int typeVal) {
	return new QStyleHintReturn(static_cast<int>(version), static_cast<int>(typeVal));
}

void QStyleHintReturn_OperatorAssign(QStyleHintReturn* self, QStyleHintReturn* param1) {
	self->operator=(*param1);
}

void QStyleHintReturn_Delete(QStyleHintReturn* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleHintReturn*>( self );
	} else {
		delete self;
	}
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

void QStyleHintReturnMask_OperatorAssign(QStyleHintReturnMask* self, QStyleHintReturnMask* param1) {
	self->operator=(*param1);
}

void QStyleHintReturnMask_Delete(QStyleHintReturnMask* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleHintReturnMask*>( self );
	} else {
		delete self;
	}
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

void QStyleHintReturnVariant_OperatorAssign(QStyleHintReturnVariant* self, QStyleHintReturnVariant* param1) {
	self->operator=(*param1);
}

void QStyleHintReturnVariant_Delete(QStyleHintReturnVariant* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleHintReturnVariant*>( self );
	} else {
		delete self;
	}
}

