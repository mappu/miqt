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
#include "_cgo_export.h"

void QStyleOption_new(QStyleOption** outptr_QStyleOption) {
	QStyleOption* ret = new QStyleOption();
	*outptr_QStyleOption = ret;
}

void QStyleOption_new2(QStyleOption* other, QStyleOption** outptr_QStyleOption) {
	QStyleOption* ret = new QStyleOption(*other);
	*outptr_QStyleOption = ret;
}

void QStyleOption_new3(int version, QStyleOption** outptr_QStyleOption) {
	QStyleOption* ret = new QStyleOption(static_cast<int>(version));
	*outptr_QStyleOption = ret;
}

void QStyleOption_new4(int version, int typeVal, QStyleOption** outptr_QStyleOption) {
	QStyleOption* ret = new QStyleOption(static_cast<int>(version), static_cast<int>(typeVal));
	*outptr_QStyleOption = ret;
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

void QStyleOptionFocusRect_new(QStyleOptionFocusRect** outptr_QStyleOptionFocusRect, QStyleOption** outptr_QStyleOption) {
	QStyleOptionFocusRect* ret = new QStyleOptionFocusRect();
	*outptr_QStyleOptionFocusRect = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionFocusRect_new2(QStyleOptionFocusRect* other, QStyleOptionFocusRect** outptr_QStyleOptionFocusRect, QStyleOption** outptr_QStyleOption) {
	QStyleOptionFocusRect* ret = new QStyleOptionFocusRect(*other);
	*outptr_QStyleOptionFocusRect = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionFocusRect_Delete(QStyleOptionFocusRect* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionFocusRect*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionFrame_new(QStyleOptionFrame** outptr_QStyleOptionFrame, QStyleOption** outptr_QStyleOption) {
	QStyleOptionFrame* ret = new QStyleOptionFrame();
	*outptr_QStyleOptionFrame = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionFrame_new2(QStyleOptionFrame* other, QStyleOptionFrame** outptr_QStyleOptionFrame, QStyleOption** outptr_QStyleOption) {
	QStyleOptionFrame* ret = new QStyleOptionFrame(*other);
	*outptr_QStyleOptionFrame = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionFrame_Delete(QStyleOptionFrame* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionFrame*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionTabWidgetFrame_new(QStyleOptionTabWidgetFrame** outptr_QStyleOptionTabWidgetFrame, QStyleOption** outptr_QStyleOption) {
	QStyleOptionTabWidgetFrame* ret = new QStyleOptionTabWidgetFrame();
	*outptr_QStyleOptionTabWidgetFrame = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionTabWidgetFrame_new2(QStyleOptionTabWidgetFrame* other, QStyleOptionTabWidgetFrame** outptr_QStyleOptionTabWidgetFrame, QStyleOption** outptr_QStyleOption) {
	QStyleOptionTabWidgetFrame* ret = new QStyleOptionTabWidgetFrame(*other);
	*outptr_QStyleOptionTabWidgetFrame = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionTabWidgetFrame_Delete(QStyleOptionTabWidgetFrame* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionTabWidgetFrame*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionTabBarBase_new(QStyleOptionTabBarBase** outptr_QStyleOptionTabBarBase, QStyleOption** outptr_QStyleOption) {
	QStyleOptionTabBarBase* ret = new QStyleOptionTabBarBase();
	*outptr_QStyleOptionTabBarBase = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionTabBarBase_new2(QStyleOptionTabBarBase* other, QStyleOptionTabBarBase** outptr_QStyleOptionTabBarBase, QStyleOption** outptr_QStyleOption) {
	QStyleOptionTabBarBase* ret = new QStyleOptionTabBarBase(*other);
	*outptr_QStyleOptionTabBarBase = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionTabBarBase_Delete(QStyleOptionTabBarBase* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionTabBarBase*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionHeader_new(QStyleOptionHeader** outptr_QStyleOptionHeader, QStyleOption** outptr_QStyleOption) {
	QStyleOptionHeader* ret = new QStyleOptionHeader();
	*outptr_QStyleOptionHeader = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionHeader_new2(QStyleOptionHeader* other, QStyleOptionHeader** outptr_QStyleOptionHeader, QStyleOption** outptr_QStyleOption) {
	QStyleOptionHeader* ret = new QStyleOptionHeader(*other);
	*outptr_QStyleOptionHeader = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionHeader_Delete(QStyleOptionHeader* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionHeader*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionButton_new(QStyleOptionButton** outptr_QStyleOptionButton, QStyleOption** outptr_QStyleOption) {
	QStyleOptionButton* ret = new QStyleOptionButton();
	*outptr_QStyleOptionButton = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionButton_new2(QStyleOptionButton* other, QStyleOptionButton** outptr_QStyleOptionButton, QStyleOption** outptr_QStyleOption) {
	QStyleOptionButton* ret = new QStyleOptionButton(*other);
	*outptr_QStyleOptionButton = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionButton_Delete(QStyleOptionButton* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionButton*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionTab_new(QStyleOptionTab** outptr_QStyleOptionTab, QStyleOption** outptr_QStyleOption) {
	QStyleOptionTab* ret = new QStyleOptionTab();
	*outptr_QStyleOptionTab = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionTab_new2(QStyleOptionTab* other, QStyleOptionTab** outptr_QStyleOptionTab, QStyleOption** outptr_QStyleOption) {
	QStyleOptionTab* ret = new QStyleOptionTab(*other);
	*outptr_QStyleOptionTab = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionTab_Delete(QStyleOptionTab* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionTab*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionTabV4_new(QStyleOptionTabV4** outptr_QStyleOptionTabV4, QStyleOptionTab** outptr_QStyleOptionTab, QStyleOption** outptr_QStyleOption) {
	QStyleOptionTabV4* ret = new QStyleOptionTabV4();
	*outptr_QStyleOptionTabV4 = ret;
	*outptr_QStyleOptionTab = static_cast<QStyleOptionTab*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionTabV4_new2(QStyleOptionTabV4* param1, QStyleOptionTabV4** outptr_QStyleOptionTabV4, QStyleOptionTab** outptr_QStyleOptionTab, QStyleOption** outptr_QStyleOption) {
	QStyleOptionTabV4* ret = new QStyleOptionTabV4(*param1);
	*outptr_QStyleOptionTabV4 = ret;
	*outptr_QStyleOptionTab = static_cast<QStyleOptionTab*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
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

void QStyleOptionToolBar_new(QStyleOptionToolBar** outptr_QStyleOptionToolBar, QStyleOption** outptr_QStyleOption) {
	QStyleOptionToolBar* ret = new QStyleOptionToolBar();
	*outptr_QStyleOptionToolBar = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionToolBar_new2(QStyleOptionToolBar* other, QStyleOptionToolBar** outptr_QStyleOptionToolBar, QStyleOption** outptr_QStyleOption) {
	QStyleOptionToolBar* ret = new QStyleOptionToolBar(*other);
	*outptr_QStyleOptionToolBar = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionToolBar_Delete(QStyleOptionToolBar* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionToolBar*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionProgressBar_new(QStyleOptionProgressBar** outptr_QStyleOptionProgressBar, QStyleOption** outptr_QStyleOption) {
	QStyleOptionProgressBar* ret = new QStyleOptionProgressBar();
	*outptr_QStyleOptionProgressBar = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionProgressBar_new2(QStyleOptionProgressBar* other, QStyleOptionProgressBar** outptr_QStyleOptionProgressBar, QStyleOption** outptr_QStyleOption) {
	QStyleOptionProgressBar* ret = new QStyleOptionProgressBar(*other);
	*outptr_QStyleOptionProgressBar = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionProgressBar_Delete(QStyleOptionProgressBar* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionProgressBar*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionMenuItem_new(QStyleOptionMenuItem** outptr_QStyleOptionMenuItem, QStyleOption** outptr_QStyleOption) {
	QStyleOptionMenuItem* ret = new QStyleOptionMenuItem();
	*outptr_QStyleOptionMenuItem = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionMenuItem_new2(QStyleOptionMenuItem* other, QStyleOptionMenuItem** outptr_QStyleOptionMenuItem, QStyleOption** outptr_QStyleOption) {
	QStyleOptionMenuItem* ret = new QStyleOptionMenuItem(*other);
	*outptr_QStyleOptionMenuItem = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionMenuItem_Delete(QStyleOptionMenuItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionMenuItem*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionDockWidget_new(QStyleOptionDockWidget** outptr_QStyleOptionDockWidget, QStyleOption** outptr_QStyleOption) {
	QStyleOptionDockWidget* ret = new QStyleOptionDockWidget();
	*outptr_QStyleOptionDockWidget = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionDockWidget_new2(QStyleOptionDockWidget* other, QStyleOptionDockWidget** outptr_QStyleOptionDockWidget, QStyleOption** outptr_QStyleOption) {
	QStyleOptionDockWidget* ret = new QStyleOptionDockWidget(*other);
	*outptr_QStyleOptionDockWidget = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionDockWidget_Delete(QStyleOptionDockWidget* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionDockWidget*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionViewItem_new(QStyleOptionViewItem** outptr_QStyleOptionViewItem, QStyleOption** outptr_QStyleOption) {
	QStyleOptionViewItem* ret = new QStyleOptionViewItem();
	*outptr_QStyleOptionViewItem = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionViewItem_new2(QStyleOptionViewItem* other, QStyleOptionViewItem** outptr_QStyleOptionViewItem, QStyleOption** outptr_QStyleOption) {
	QStyleOptionViewItem* ret = new QStyleOptionViewItem(*other);
	*outptr_QStyleOptionViewItem = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionViewItem_Delete(QStyleOptionViewItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionViewItem*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionToolBox_new(QStyleOptionToolBox** outptr_QStyleOptionToolBox, QStyleOption** outptr_QStyleOption) {
	QStyleOptionToolBox* ret = new QStyleOptionToolBox();
	*outptr_QStyleOptionToolBox = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionToolBox_new2(QStyleOptionToolBox* other, QStyleOptionToolBox** outptr_QStyleOptionToolBox, QStyleOption** outptr_QStyleOption) {
	QStyleOptionToolBox* ret = new QStyleOptionToolBox(*other);
	*outptr_QStyleOptionToolBox = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionToolBox_Delete(QStyleOptionToolBox* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionToolBox*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionRubberBand_new(QStyleOptionRubberBand** outptr_QStyleOptionRubberBand, QStyleOption** outptr_QStyleOption) {
	QStyleOptionRubberBand* ret = new QStyleOptionRubberBand();
	*outptr_QStyleOptionRubberBand = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionRubberBand_new2(QStyleOptionRubberBand* other, QStyleOptionRubberBand** outptr_QStyleOptionRubberBand, QStyleOption** outptr_QStyleOption) {
	QStyleOptionRubberBand* ret = new QStyleOptionRubberBand(*other);
	*outptr_QStyleOptionRubberBand = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionRubberBand_Delete(QStyleOptionRubberBand* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionRubberBand*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionComplex_new(QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionComplex* ret = new QStyleOptionComplex();
	*outptr_QStyleOptionComplex = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionComplex_new2(QStyleOptionComplex* other, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionComplex* ret = new QStyleOptionComplex(*other);
	*outptr_QStyleOptionComplex = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionComplex_new3(int version, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionComplex* ret = new QStyleOptionComplex(static_cast<int>(version));
	*outptr_QStyleOptionComplex = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionComplex_new4(int version, int typeVal, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionComplex* ret = new QStyleOptionComplex(static_cast<int>(version), static_cast<int>(typeVal));
	*outptr_QStyleOptionComplex = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionComplex_Delete(QStyleOptionComplex* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionComplex*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionSlider_new(QStyleOptionSlider** outptr_QStyleOptionSlider, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionSlider* ret = new QStyleOptionSlider();
	*outptr_QStyleOptionSlider = ret;
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionSlider_new2(QStyleOptionSlider* other, QStyleOptionSlider** outptr_QStyleOptionSlider, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionSlider* ret = new QStyleOptionSlider(*other);
	*outptr_QStyleOptionSlider = ret;
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionSlider_Delete(QStyleOptionSlider* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionSlider*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionSpinBox_new(QStyleOptionSpinBox** outptr_QStyleOptionSpinBox, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionSpinBox* ret = new QStyleOptionSpinBox();
	*outptr_QStyleOptionSpinBox = ret;
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionSpinBox_new2(QStyleOptionSpinBox* other, QStyleOptionSpinBox** outptr_QStyleOptionSpinBox, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionSpinBox* ret = new QStyleOptionSpinBox(*other);
	*outptr_QStyleOptionSpinBox = ret;
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionSpinBox_Delete(QStyleOptionSpinBox* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionSpinBox*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionToolButton_new(QStyleOptionToolButton** outptr_QStyleOptionToolButton, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionToolButton* ret = new QStyleOptionToolButton();
	*outptr_QStyleOptionToolButton = ret;
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionToolButton_new2(QStyleOptionToolButton* other, QStyleOptionToolButton** outptr_QStyleOptionToolButton, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionToolButton* ret = new QStyleOptionToolButton(*other);
	*outptr_QStyleOptionToolButton = ret;
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionToolButton_Delete(QStyleOptionToolButton* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionToolButton*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionComboBox_new(QStyleOptionComboBox** outptr_QStyleOptionComboBox, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionComboBox* ret = new QStyleOptionComboBox();
	*outptr_QStyleOptionComboBox = ret;
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionComboBox_new2(QStyleOptionComboBox* other, QStyleOptionComboBox** outptr_QStyleOptionComboBox, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionComboBox* ret = new QStyleOptionComboBox(*other);
	*outptr_QStyleOptionComboBox = ret;
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionComboBox_Delete(QStyleOptionComboBox* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionComboBox*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionTitleBar_new(QStyleOptionTitleBar** outptr_QStyleOptionTitleBar, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionTitleBar* ret = new QStyleOptionTitleBar();
	*outptr_QStyleOptionTitleBar = ret;
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionTitleBar_new2(QStyleOptionTitleBar* other, QStyleOptionTitleBar** outptr_QStyleOptionTitleBar, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionTitleBar* ret = new QStyleOptionTitleBar(*other);
	*outptr_QStyleOptionTitleBar = ret;
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionTitleBar_Delete(QStyleOptionTitleBar* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionTitleBar*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionGroupBox_new(QStyleOptionGroupBox** outptr_QStyleOptionGroupBox, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionGroupBox* ret = new QStyleOptionGroupBox();
	*outptr_QStyleOptionGroupBox = ret;
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionGroupBox_new2(QStyleOptionGroupBox* other, QStyleOptionGroupBox** outptr_QStyleOptionGroupBox, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionGroupBox* ret = new QStyleOptionGroupBox(*other);
	*outptr_QStyleOptionGroupBox = ret;
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionGroupBox_Delete(QStyleOptionGroupBox* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionGroupBox*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionSizeGrip_new(QStyleOptionSizeGrip** outptr_QStyleOptionSizeGrip, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionSizeGrip* ret = new QStyleOptionSizeGrip();
	*outptr_QStyleOptionSizeGrip = ret;
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionSizeGrip_new2(QStyleOptionSizeGrip* other, QStyleOptionSizeGrip** outptr_QStyleOptionSizeGrip, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption) {
	QStyleOptionSizeGrip* ret = new QStyleOptionSizeGrip(*other);
	*outptr_QStyleOptionSizeGrip = ret;
	*outptr_QStyleOptionComplex = static_cast<QStyleOptionComplex*>(ret);
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionSizeGrip_Delete(QStyleOptionSizeGrip* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStyleOptionSizeGrip*>( self );
	} else {
		delete self;
	}
}

void QStyleOptionGraphicsItem_new(QStyleOptionGraphicsItem** outptr_QStyleOptionGraphicsItem, QStyleOption** outptr_QStyleOption) {
	QStyleOptionGraphicsItem* ret = new QStyleOptionGraphicsItem();
	*outptr_QStyleOptionGraphicsItem = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
}

void QStyleOptionGraphicsItem_new2(QStyleOptionGraphicsItem* other, QStyleOptionGraphicsItem** outptr_QStyleOptionGraphicsItem, QStyleOption** outptr_QStyleOption) {
	QStyleOptionGraphicsItem* ret = new QStyleOptionGraphicsItem(*other);
	*outptr_QStyleOptionGraphicsItem = ret;
	*outptr_QStyleOption = static_cast<QStyleOption*>(ret);
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

void QStyleHintReturn_new(QStyleHintReturn** outptr_QStyleHintReturn) {
	QStyleHintReturn* ret = new QStyleHintReturn();
	*outptr_QStyleHintReturn = ret;
}

void QStyleHintReturn_new2(QStyleHintReturn* param1, QStyleHintReturn** outptr_QStyleHintReturn) {
	QStyleHintReturn* ret = new QStyleHintReturn(*param1);
	*outptr_QStyleHintReturn = ret;
}

void QStyleHintReturn_new3(int version, QStyleHintReturn** outptr_QStyleHintReturn) {
	QStyleHintReturn* ret = new QStyleHintReturn(static_cast<int>(version));
	*outptr_QStyleHintReturn = ret;
}

void QStyleHintReturn_new4(int version, int typeVal, QStyleHintReturn** outptr_QStyleHintReturn) {
	QStyleHintReturn* ret = new QStyleHintReturn(static_cast<int>(version), static_cast<int>(typeVal));
	*outptr_QStyleHintReturn = ret;
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

void QStyleHintReturnMask_new(QStyleHintReturnMask** outptr_QStyleHintReturnMask, QStyleHintReturn** outptr_QStyleHintReturn) {
	QStyleHintReturnMask* ret = new QStyleHintReturnMask();
	*outptr_QStyleHintReturnMask = ret;
	*outptr_QStyleHintReturn = static_cast<QStyleHintReturn*>(ret);
}

void QStyleHintReturnMask_new2(QStyleHintReturnMask* param1, QStyleHintReturnMask** outptr_QStyleHintReturnMask, QStyleHintReturn** outptr_QStyleHintReturn) {
	QStyleHintReturnMask* ret = new QStyleHintReturnMask(*param1);
	*outptr_QStyleHintReturnMask = ret;
	*outptr_QStyleHintReturn = static_cast<QStyleHintReturn*>(ret);
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

void QStyleHintReturnVariant_new(QStyleHintReturnVariant** outptr_QStyleHintReturnVariant, QStyleHintReturn** outptr_QStyleHintReturn) {
	QStyleHintReturnVariant* ret = new QStyleHintReturnVariant();
	*outptr_QStyleHintReturnVariant = ret;
	*outptr_QStyleHintReturn = static_cast<QStyleHintReturn*>(ret);
}

void QStyleHintReturnVariant_new2(QStyleHintReturnVariant* param1, QStyleHintReturnVariant** outptr_QStyleHintReturnVariant, QStyleHintReturn** outptr_QStyleHintReturn) {
	QStyleHintReturnVariant* ret = new QStyleHintReturnVariant(*param1);
	*outptr_QStyleHintReturnVariant = ret;
	*outptr_QStyleHintReturn = static_cast<QStyleHintReturn*>(ret);
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

