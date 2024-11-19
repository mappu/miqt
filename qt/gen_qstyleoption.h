#pragma once
#ifndef MIQT_QT_GEN_QSTYLEOPTION_H
#define MIQT_QT_GEN_QSTYLEOPTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QStyleHintReturn;
class QStyleHintReturnMask;
class QStyleHintReturnVariant;
class QStyleOption;
class QStyleOptionButton;
class QStyleOptionComboBox;
class QStyleOptionComplex;
class QStyleOptionDockWidget;
class QStyleOptionFocusRect;
class QStyleOptionFrame;
class QStyleOptionGraphicsItem;
class QStyleOptionGroupBox;
class QStyleOptionHeader;
class QStyleOptionMenuItem;
class QStyleOptionProgressBar;
class QStyleOptionRubberBand;
class QStyleOptionSizeGrip;
class QStyleOptionSlider;
class QStyleOptionSpinBox;
class QStyleOptionTab;
class QStyleOptionTabBarBase;
class QStyleOptionTabV4;
class QStyleOptionTabWidgetFrame;
class QStyleOptionTitleBar;
class QStyleOptionToolBar;
class QStyleOptionToolBox;
class QStyleOptionToolButton;
class QStyleOptionViewItem;
class QTransform;
class QWidget;
#else
typedef struct QStyleHintReturn QStyleHintReturn;
typedef struct QStyleHintReturnMask QStyleHintReturnMask;
typedef struct QStyleHintReturnVariant QStyleHintReturnVariant;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionButton QStyleOptionButton;
typedef struct QStyleOptionComboBox QStyleOptionComboBox;
typedef struct QStyleOptionComplex QStyleOptionComplex;
typedef struct QStyleOptionDockWidget QStyleOptionDockWidget;
typedef struct QStyleOptionFocusRect QStyleOptionFocusRect;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QStyleOptionGroupBox QStyleOptionGroupBox;
typedef struct QStyleOptionHeader QStyleOptionHeader;
typedef struct QStyleOptionMenuItem QStyleOptionMenuItem;
typedef struct QStyleOptionProgressBar QStyleOptionProgressBar;
typedef struct QStyleOptionRubberBand QStyleOptionRubberBand;
typedef struct QStyleOptionSizeGrip QStyleOptionSizeGrip;
typedef struct QStyleOptionSlider QStyleOptionSlider;
typedef struct QStyleOptionSpinBox QStyleOptionSpinBox;
typedef struct QStyleOptionTab QStyleOptionTab;
typedef struct QStyleOptionTabBarBase QStyleOptionTabBarBase;
typedef struct QStyleOptionTabV4 QStyleOptionTabV4;
typedef struct QStyleOptionTabWidgetFrame QStyleOptionTabWidgetFrame;
typedef struct QStyleOptionTitleBar QStyleOptionTitleBar;
typedef struct QStyleOptionToolBar QStyleOptionToolBar;
typedef struct QStyleOptionToolBox QStyleOptionToolBox;
typedef struct QStyleOptionToolButton QStyleOptionToolButton;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTransform QTransform;
typedef struct QWidget QWidget;
#endif

void QStyleOption_new(QStyleOption** outptr_QStyleOption);
void QStyleOption_new2(QStyleOption* other, QStyleOption** outptr_QStyleOption);
void QStyleOption_new3(int version, QStyleOption** outptr_QStyleOption);
void QStyleOption_new4(int version, int typeVal, QStyleOption** outptr_QStyleOption);
void QStyleOption_Init(QStyleOption* self, QWidget* w);
void QStyleOption_InitFrom(QStyleOption* self, QWidget* w);
void QStyleOption_OperatorAssign(QStyleOption* self, QStyleOption* other);
void QStyleOption_Delete(QStyleOption* self, bool isSubclass);

void QStyleOptionFocusRect_new(QStyleOptionFocusRect** outptr_QStyleOptionFocusRect, QStyleOption** outptr_QStyleOption);
void QStyleOptionFocusRect_new2(QStyleOptionFocusRect* other, QStyleOptionFocusRect** outptr_QStyleOptionFocusRect, QStyleOption** outptr_QStyleOption);
void QStyleOptionFocusRect_Delete(QStyleOptionFocusRect* self, bool isSubclass);

void QStyleOptionFrame_new(QStyleOptionFrame** outptr_QStyleOptionFrame, QStyleOption** outptr_QStyleOption);
void QStyleOptionFrame_new2(QStyleOptionFrame* other, QStyleOptionFrame** outptr_QStyleOptionFrame, QStyleOption** outptr_QStyleOption);
void QStyleOptionFrame_Delete(QStyleOptionFrame* self, bool isSubclass);

void QStyleOptionTabWidgetFrame_new(QStyleOptionTabWidgetFrame** outptr_QStyleOptionTabWidgetFrame, QStyleOption** outptr_QStyleOption);
void QStyleOptionTabWidgetFrame_new2(QStyleOptionTabWidgetFrame* other, QStyleOptionTabWidgetFrame** outptr_QStyleOptionTabWidgetFrame, QStyleOption** outptr_QStyleOption);
void QStyleOptionTabWidgetFrame_Delete(QStyleOptionTabWidgetFrame* self, bool isSubclass);

void QStyleOptionTabBarBase_new(QStyleOptionTabBarBase** outptr_QStyleOptionTabBarBase, QStyleOption** outptr_QStyleOption);
void QStyleOptionTabBarBase_new2(QStyleOptionTabBarBase* other, QStyleOptionTabBarBase** outptr_QStyleOptionTabBarBase, QStyleOption** outptr_QStyleOption);
void QStyleOptionTabBarBase_Delete(QStyleOptionTabBarBase* self, bool isSubclass);

void QStyleOptionHeader_new(QStyleOptionHeader** outptr_QStyleOptionHeader, QStyleOption** outptr_QStyleOption);
void QStyleOptionHeader_new2(QStyleOptionHeader* other, QStyleOptionHeader** outptr_QStyleOptionHeader, QStyleOption** outptr_QStyleOption);
void QStyleOptionHeader_Delete(QStyleOptionHeader* self, bool isSubclass);

void QStyleOptionButton_new(QStyleOptionButton** outptr_QStyleOptionButton, QStyleOption** outptr_QStyleOption);
void QStyleOptionButton_new2(QStyleOptionButton* other, QStyleOptionButton** outptr_QStyleOptionButton, QStyleOption** outptr_QStyleOption);
void QStyleOptionButton_Delete(QStyleOptionButton* self, bool isSubclass);

void QStyleOptionTab_new(QStyleOptionTab** outptr_QStyleOptionTab, QStyleOption** outptr_QStyleOption);
void QStyleOptionTab_new2(QStyleOptionTab* other, QStyleOptionTab** outptr_QStyleOptionTab, QStyleOption** outptr_QStyleOption);
void QStyleOptionTab_Delete(QStyleOptionTab* self, bool isSubclass);

void QStyleOptionTabV4_new(QStyleOptionTabV4** outptr_QStyleOptionTabV4, QStyleOptionTab** outptr_QStyleOptionTab, QStyleOption** outptr_QStyleOption);
void QStyleOptionTabV4_new2(QStyleOptionTabV4* param1, QStyleOptionTabV4** outptr_QStyleOptionTabV4, QStyleOptionTab** outptr_QStyleOptionTab, QStyleOption** outptr_QStyleOption);
void QStyleOptionTabV4_OperatorAssign(QStyleOptionTabV4* self, QStyleOptionTabV4* param1);
void QStyleOptionTabV4_Delete(QStyleOptionTabV4* self, bool isSubclass);

void QStyleOptionToolBar_new(QStyleOptionToolBar** outptr_QStyleOptionToolBar, QStyleOption** outptr_QStyleOption);
void QStyleOptionToolBar_new2(QStyleOptionToolBar* other, QStyleOptionToolBar** outptr_QStyleOptionToolBar, QStyleOption** outptr_QStyleOption);
void QStyleOptionToolBar_Delete(QStyleOptionToolBar* self, bool isSubclass);

void QStyleOptionProgressBar_new(QStyleOptionProgressBar** outptr_QStyleOptionProgressBar, QStyleOption** outptr_QStyleOption);
void QStyleOptionProgressBar_new2(QStyleOptionProgressBar* other, QStyleOptionProgressBar** outptr_QStyleOptionProgressBar, QStyleOption** outptr_QStyleOption);
void QStyleOptionProgressBar_Delete(QStyleOptionProgressBar* self, bool isSubclass);

void QStyleOptionMenuItem_new(QStyleOptionMenuItem** outptr_QStyleOptionMenuItem, QStyleOption** outptr_QStyleOption);
void QStyleOptionMenuItem_new2(QStyleOptionMenuItem* other, QStyleOptionMenuItem** outptr_QStyleOptionMenuItem, QStyleOption** outptr_QStyleOption);
void QStyleOptionMenuItem_Delete(QStyleOptionMenuItem* self, bool isSubclass);

void QStyleOptionDockWidget_new(QStyleOptionDockWidget** outptr_QStyleOptionDockWidget, QStyleOption** outptr_QStyleOption);
void QStyleOptionDockWidget_new2(QStyleOptionDockWidget* other, QStyleOptionDockWidget** outptr_QStyleOptionDockWidget, QStyleOption** outptr_QStyleOption);
void QStyleOptionDockWidget_Delete(QStyleOptionDockWidget* self, bool isSubclass);

void QStyleOptionViewItem_new(QStyleOptionViewItem** outptr_QStyleOptionViewItem, QStyleOption** outptr_QStyleOption);
void QStyleOptionViewItem_new2(QStyleOptionViewItem* other, QStyleOptionViewItem** outptr_QStyleOptionViewItem, QStyleOption** outptr_QStyleOption);
void QStyleOptionViewItem_Delete(QStyleOptionViewItem* self, bool isSubclass);

void QStyleOptionToolBox_new(QStyleOptionToolBox** outptr_QStyleOptionToolBox, QStyleOption** outptr_QStyleOption);
void QStyleOptionToolBox_new2(QStyleOptionToolBox* other, QStyleOptionToolBox** outptr_QStyleOptionToolBox, QStyleOption** outptr_QStyleOption);
void QStyleOptionToolBox_Delete(QStyleOptionToolBox* self, bool isSubclass);

void QStyleOptionRubberBand_new(QStyleOptionRubberBand** outptr_QStyleOptionRubberBand, QStyleOption** outptr_QStyleOption);
void QStyleOptionRubberBand_new2(QStyleOptionRubberBand* other, QStyleOptionRubberBand** outptr_QStyleOptionRubberBand, QStyleOption** outptr_QStyleOption);
void QStyleOptionRubberBand_Delete(QStyleOptionRubberBand* self, bool isSubclass);

void QStyleOptionComplex_new(QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionComplex_new2(QStyleOptionComplex* other, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionComplex_new3(int version, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionComplex_new4(int version, int typeVal, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionComplex_Delete(QStyleOptionComplex* self, bool isSubclass);

void QStyleOptionSlider_new(QStyleOptionSlider** outptr_QStyleOptionSlider, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionSlider_new2(QStyleOptionSlider* other, QStyleOptionSlider** outptr_QStyleOptionSlider, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionSlider_Delete(QStyleOptionSlider* self, bool isSubclass);

void QStyleOptionSpinBox_new(QStyleOptionSpinBox** outptr_QStyleOptionSpinBox, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionSpinBox_new2(QStyleOptionSpinBox* other, QStyleOptionSpinBox** outptr_QStyleOptionSpinBox, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionSpinBox_Delete(QStyleOptionSpinBox* self, bool isSubclass);

void QStyleOptionToolButton_new(QStyleOptionToolButton** outptr_QStyleOptionToolButton, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionToolButton_new2(QStyleOptionToolButton* other, QStyleOptionToolButton** outptr_QStyleOptionToolButton, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionToolButton_Delete(QStyleOptionToolButton* self, bool isSubclass);

void QStyleOptionComboBox_new(QStyleOptionComboBox** outptr_QStyleOptionComboBox, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionComboBox_new2(QStyleOptionComboBox* other, QStyleOptionComboBox** outptr_QStyleOptionComboBox, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionComboBox_Delete(QStyleOptionComboBox* self, bool isSubclass);

void QStyleOptionTitleBar_new(QStyleOptionTitleBar** outptr_QStyleOptionTitleBar, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionTitleBar_new2(QStyleOptionTitleBar* other, QStyleOptionTitleBar** outptr_QStyleOptionTitleBar, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionTitleBar_Delete(QStyleOptionTitleBar* self, bool isSubclass);

void QStyleOptionGroupBox_new(QStyleOptionGroupBox** outptr_QStyleOptionGroupBox, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionGroupBox_new2(QStyleOptionGroupBox* other, QStyleOptionGroupBox** outptr_QStyleOptionGroupBox, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionGroupBox_Delete(QStyleOptionGroupBox* self, bool isSubclass);

void QStyleOptionSizeGrip_new(QStyleOptionSizeGrip** outptr_QStyleOptionSizeGrip, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionSizeGrip_new2(QStyleOptionSizeGrip* other, QStyleOptionSizeGrip** outptr_QStyleOptionSizeGrip, QStyleOptionComplex** outptr_QStyleOptionComplex, QStyleOption** outptr_QStyleOption);
void QStyleOptionSizeGrip_Delete(QStyleOptionSizeGrip* self, bool isSubclass);

void QStyleOptionGraphicsItem_new(QStyleOptionGraphicsItem** outptr_QStyleOptionGraphicsItem, QStyleOption** outptr_QStyleOption);
void QStyleOptionGraphicsItem_new2(QStyleOptionGraphicsItem* other, QStyleOptionGraphicsItem** outptr_QStyleOptionGraphicsItem, QStyleOption** outptr_QStyleOption);
double QStyleOptionGraphicsItem_LevelOfDetailFromTransform(QTransform* worldTransform);
void QStyleOptionGraphicsItem_Delete(QStyleOptionGraphicsItem* self, bool isSubclass);

void QStyleHintReturn_new(QStyleHintReturn** outptr_QStyleHintReturn);
void QStyleHintReturn_new2(QStyleHintReturn* param1, QStyleHintReturn** outptr_QStyleHintReturn);
void QStyleHintReturn_new3(int version, QStyleHintReturn** outptr_QStyleHintReturn);
void QStyleHintReturn_new4(int version, int typeVal, QStyleHintReturn** outptr_QStyleHintReturn);
void QStyleHintReturn_OperatorAssign(QStyleHintReturn* self, QStyleHintReturn* param1);
void QStyleHintReturn_Delete(QStyleHintReturn* self, bool isSubclass);

void QStyleHintReturnMask_new(QStyleHintReturnMask** outptr_QStyleHintReturnMask, QStyleHintReturn** outptr_QStyleHintReturn);
void QStyleHintReturnMask_new2(QStyleHintReturnMask* param1, QStyleHintReturnMask** outptr_QStyleHintReturnMask, QStyleHintReturn** outptr_QStyleHintReturn);
void QStyleHintReturnMask_OperatorAssign(QStyleHintReturnMask* self, QStyleHintReturnMask* param1);
void QStyleHintReturnMask_Delete(QStyleHintReturnMask* self, bool isSubclass);

void QStyleHintReturnVariant_new(QStyleHintReturnVariant** outptr_QStyleHintReturnVariant, QStyleHintReturn** outptr_QStyleHintReturn);
void QStyleHintReturnVariant_new2(QStyleHintReturnVariant* param1, QStyleHintReturnVariant** outptr_QStyleHintReturnVariant, QStyleHintReturn** outptr_QStyleHintReturn);
void QStyleHintReturnVariant_OperatorAssign(QStyleHintReturnVariant* self, QStyleHintReturnVariant* param1);
void QStyleHintReturnVariant_Delete(QStyleHintReturnVariant* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
