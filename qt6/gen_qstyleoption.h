#pragma once
#ifndef MIQT_QT6_GEN_QSTYLEOPTION_H
#define MIQT_QT6_GEN_QSTYLEOPTION_H

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
class QStyleOptionHeaderV2;
class QStyleOptionMenuItem;
class QStyleOptionProgressBar;
class QStyleOptionRubberBand;
class QStyleOptionSizeGrip;
class QStyleOptionSlider;
class QStyleOptionSpinBox;
class QStyleOptionTab;
class QStyleOptionTabBarBase;
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
typedef struct QStyleOptionHeaderV2 QStyleOptionHeaderV2;
typedef struct QStyleOptionMenuItem QStyleOptionMenuItem;
typedef struct QStyleOptionProgressBar QStyleOptionProgressBar;
typedef struct QStyleOptionRubberBand QStyleOptionRubberBand;
typedef struct QStyleOptionSizeGrip QStyleOptionSizeGrip;
typedef struct QStyleOptionSlider QStyleOptionSlider;
typedef struct QStyleOptionSpinBox QStyleOptionSpinBox;
typedef struct QStyleOptionTab QStyleOptionTab;
typedef struct QStyleOptionTabBarBase QStyleOptionTabBarBase;
typedef struct QStyleOptionTabWidgetFrame QStyleOptionTabWidgetFrame;
typedef struct QStyleOptionTitleBar QStyleOptionTitleBar;
typedef struct QStyleOptionToolBar QStyleOptionToolBar;
typedef struct QStyleOptionToolBox QStyleOptionToolBox;
typedef struct QStyleOptionToolButton QStyleOptionToolButton;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTransform QTransform;
typedef struct QWidget QWidget;
#endif

QStyleOption* QStyleOption_new();
QStyleOption* QStyleOption_new2(QStyleOption* other);
QStyleOption* QStyleOption_new3(int version);
QStyleOption* QStyleOption_new4(int version, int typeVal);
void QStyleOption_InitFrom(QStyleOption* self, QWidget* w);
void QStyleOption_OperatorAssign(QStyleOption* self, QStyleOption* other);
void QStyleOption_Delete(QStyleOption* self, bool isSubclass);

QStyleOptionFocusRect* QStyleOptionFocusRect_new();
QStyleOptionFocusRect* QStyleOptionFocusRect_new2(QStyleOptionFocusRect* other);
void QStyleOptionFocusRect_virtbase(QStyleOptionFocusRect* src, QStyleOption** outptr_QStyleOption);
void QStyleOptionFocusRect_Delete(QStyleOptionFocusRect* self, bool isSubclass);

QStyleOptionFrame* QStyleOptionFrame_new();
QStyleOptionFrame* QStyleOptionFrame_new2(QStyleOptionFrame* other);
void QStyleOptionFrame_virtbase(QStyleOptionFrame* src, QStyleOption** outptr_QStyleOption);
void QStyleOptionFrame_Delete(QStyleOptionFrame* self, bool isSubclass);

QStyleOptionTabWidgetFrame* QStyleOptionTabWidgetFrame_new();
QStyleOptionTabWidgetFrame* QStyleOptionTabWidgetFrame_new2(QStyleOptionTabWidgetFrame* other);
void QStyleOptionTabWidgetFrame_virtbase(QStyleOptionTabWidgetFrame* src, QStyleOption** outptr_QStyleOption);
void QStyleOptionTabWidgetFrame_Delete(QStyleOptionTabWidgetFrame* self, bool isSubclass);

QStyleOptionTabBarBase* QStyleOptionTabBarBase_new();
QStyleOptionTabBarBase* QStyleOptionTabBarBase_new2(QStyleOptionTabBarBase* other);
void QStyleOptionTabBarBase_virtbase(QStyleOptionTabBarBase* src, QStyleOption** outptr_QStyleOption);
void QStyleOptionTabBarBase_Delete(QStyleOptionTabBarBase* self, bool isSubclass);

QStyleOptionHeader* QStyleOptionHeader_new();
QStyleOptionHeader* QStyleOptionHeader_new2(QStyleOptionHeader* other);
void QStyleOptionHeader_virtbase(QStyleOptionHeader* src, QStyleOption** outptr_QStyleOption);
void QStyleOptionHeader_Delete(QStyleOptionHeader* self, bool isSubclass);

QStyleOptionHeaderV2* QStyleOptionHeaderV2_new();
QStyleOptionHeaderV2* QStyleOptionHeaderV2_new2(QStyleOptionHeaderV2* other);
void QStyleOptionHeaderV2_virtbase(QStyleOptionHeaderV2* src, QStyleOptionHeader** outptr_QStyleOptionHeader);
void QStyleOptionHeaderV2_Delete(QStyleOptionHeaderV2* self, bool isSubclass);

QStyleOptionButton* QStyleOptionButton_new();
QStyleOptionButton* QStyleOptionButton_new2(QStyleOptionButton* other);
void QStyleOptionButton_virtbase(QStyleOptionButton* src, QStyleOption** outptr_QStyleOption);
void QStyleOptionButton_Delete(QStyleOptionButton* self, bool isSubclass);

QStyleOptionTab* QStyleOptionTab_new();
QStyleOptionTab* QStyleOptionTab_new2(QStyleOptionTab* other);
void QStyleOptionTab_virtbase(QStyleOptionTab* src, QStyleOption** outptr_QStyleOption);
void QStyleOptionTab_Delete(QStyleOptionTab* self, bool isSubclass);

QStyleOptionToolBar* QStyleOptionToolBar_new();
QStyleOptionToolBar* QStyleOptionToolBar_new2(QStyleOptionToolBar* other);
void QStyleOptionToolBar_virtbase(QStyleOptionToolBar* src, QStyleOption** outptr_QStyleOption);
void QStyleOptionToolBar_Delete(QStyleOptionToolBar* self, bool isSubclass);

QStyleOptionProgressBar* QStyleOptionProgressBar_new();
QStyleOptionProgressBar* QStyleOptionProgressBar_new2(QStyleOptionProgressBar* other);
void QStyleOptionProgressBar_virtbase(QStyleOptionProgressBar* src, QStyleOption** outptr_QStyleOption);
void QStyleOptionProgressBar_Delete(QStyleOptionProgressBar* self, bool isSubclass);

QStyleOptionMenuItem* QStyleOptionMenuItem_new();
QStyleOptionMenuItem* QStyleOptionMenuItem_new2(QStyleOptionMenuItem* other);
void QStyleOptionMenuItem_virtbase(QStyleOptionMenuItem* src, QStyleOption** outptr_QStyleOption);
void QStyleOptionMenuItem_Delete(QStyleOptionMenuItem* self, bool isSubclass);

QStyleOptionDockWidget* QStyleOptionDockWidget_new();
QStyleOptionDockWidget* QStyleOptionDockWidget_new2(QStyleOptionDockWidget* other);
void QStyleOptionDockWidget_virtbase(QStyleOptionDockWidget* src, QStyleOption** outptr_QStyleOption);
void QStyleOptionDockWidget_Delete(QStyleOptionDockWidget* self, bool isSubclass);

QStyleOptionViewItem* QStyleOptionViewItem_new();
QStyleOptionViewItem* QStyleOptionViewItem_new2(QStyleOptionViewItem* other);
void QStyleOptionViewItem_virtbase(QStyleOptionViewItem* src, QStyleOption** outptr_QStyleOption);
void QStyleOptionViewItem_Delete(QStyleOptionViewItem* self, bool isSubclass);

QStyleOptionToolBox* QStyleOptionToolBox_new();
QStyleOptionToolBox* QStyleOptionToolBox_new2(QStyleOptionToolBox* other);
void QStyleOptionToolBox_virtbase(QStyleOptionToolBox* src, QStyleOption** outptr_QStyleOption);
void QStyleOptionToolBox_Delete(QStyleOptionToolBox* self, bool isSubclass);

QStyleOptionRubberBand* QStyleOptionRubberBand_new();
QStyleOptionRubberBand* QStyleOptionRubberBand_new2(QStyleOptionRubberBand* other);
void QStyleOptionRubberBand_virtbase(QStyleOptionRubberBand* src, QStyleOption** outptr_QStyleOption);
void QStyleOptionRubberBand_Delete(QStyleOptionRubberBand* self, bool isSubclass);

QStyleOptionComplex* QStyleOptionComplex_new();
QStyleOptionComplex* QStyleOptionComplex_new2(QStyleOptionComplex* other);
QStyleOptionComplex* QStyleOptionComplex_new3(int version);
QStyleOptionComplex* QStyleOptionComplex_new4(int version, int typeVal);
void QStyleOptionComplex_virtbase(QStyleOptionComplex* src, QStyleOption** outptr_QStyleOption);
void QStyleOptionComplex_Delete(QStyleOptionComplex* self, bool isSubclass);

QStyleOptionSlider* QStyleOptionSlider_new();
QStyleOptionSlider* QStyleOptionSlider_new2(QStyleOptionSlider* other);
void QStyleOptionSlider_virtbase(QStyleOptionSlider* src, QStyleOptionComplex** outptr_QStyleOptionComplex);
void QStyleOptionSlider_Delete(QStyleOptionSlider* self, bool isSubclass);

QStyleOptionSpinBox* QStyleOptionSpinBox_new();
QStyleOptionSpinBox* QStyleOptionSpinBox_new2(QStyleOptionSpinBox* other);
void QStyleOptionSpinBox_virtbase(QStyleOptionSpinBox* src, QStyleOptionComplex** outptr_QStyleOptionComplex);
void QStyleOptionSpinBox_Delete(QStyleOptionSpinBox* self, bool isSubclass);

QStyleOptionToolButton* QStyleOptionToolButton_new();
QStyleOptionToolButton* QStyleOptionToolButton_new2(QStyleOptionToolButton* other);
void QStyleOptionToolButton_virtbase(QStyleOptionToolButton* src, QStyleOptionComplex** outptr_QStyleOptionComplex);
void QStyleOptionToolButton_Delete(QStyleOptionToolButton* self, bool isSubclass);

QStyleOptionComboBox* QStyleOptionComboBox_new();
QStyleOptionComboBox* QStyleOptionComboBox_new2(QStyleOptionComboBox* other);
void QStyleOptionComboBox_virtbase(QStyleOptionComboBox* src, QStyleOptionComplex** outptr_QStyleOptionComplex);
void QStyleOptionComboBox_Delete(QStyleOptionComboBox* self, bool isSubclass);

QStyleOptionTitleBar* QStyleOptionTitleBar_new();
QStyleOptionTitleBar* QStyleOptionTitleBar_new2(QStyleOptionTitleBar* other);
void QStyleOptionTitleBar_virtbase(QStyleOptionTitleBar* src, QStyleOptionComplex** outptr_QStyleOptionComplex);
void QStyleOptionTitleBar_Delete(QStyleOptionTitleBar* self, bool isSubclass);

QStyleOptionGroupBox* QStyleOptionGroupBox_new();
QStyleOptionGroupBox* QStyleOptionGroupBox_new2(QStyleOptionGroupBox* other);
void QStyleOptionGroupBox_virtbase(QStyleOptionGroupBox* src, QStyleOptionComplex** outptr_QStyleOptionComplex);
void QStyleOptionGroupBox_Delete(QStyleOptionGroupBox* self, bool isSubclass);

QStyleOptionSizeGrip* QStyleOptionSizeGrip_new();
QStyleOptionSizeGrip* QStyleOptionSizeGrip_new2(QStyleOptionSizeGrip* other);
void QStyleOptionSizeGrip_virtbase(QStyleOptionSizeGrip* src, QStyleOptionComplex** outptr_QStyleOptionComplex);
void QStyleOptionSizeGrip_Delete(QStyleOptionSizeGrip* self, bool isSubclass);

QStyleOptionGraphicsItem* QStyleOptionGraphicsItem_new();
QStyleOptionGraphicsItem* QStyleOptionGraphicsItem_new2(QStyleOptionGraphicsItem* other);
void QStyleOptionGraphicsItem_virtbase(QStyleOptionGraphicsItem* src, QStyleOption** outptr_QStyleOption);
double QStyleOptionGraphicsItem_LevelOfDetailFromTransform(QTransform* worldTransform);
void QStyleOptionGraphicsItem_Delete(QStyleOptionGraphicsItem* self, bool isSubclass);

QStyleHintReturn* QStyleHintReturn_new();
QStyleHintReturn* QStyleHintReturn_new2(QStyleHintReturn* param1);
QStyleHintReturn* QStyleHintReturn_new3(int version);
QStyleHintReturn* QStyleHintReturn_new4(int version, int typeVal);
void QStyleHintReturn_OperatorAssign(QStyleHintReturn* self, QStyleHintReturn* param1);
void QStyleHintReturn_Delete(QStyleHintReturn* self, bool isSubclass);

QStyleHintReturnMask* QStyleHintReturnMask_new();
QStyleHintReturnMask* QStyleHintReturnMask_new2(QStyleHintReturnMask* param1);
void QStyleHintReturnMask_virtbase(QStyleHintReturnMask* src, QStyleHintReturn** outptr_QStyleHintReturn);
void QStyleHintReturnMask_OperatorAssign(QStyleHintReturnMask* self, QStyleHintReturnMask* param1);
void QStyleHintReturnMask_Delete(QStyleHintReturnMask* self, bool isSubclass);

QStyleHintReturnVariant* QStyleHintReturnVariant_new();
QStyleHintReturnVariant* QStyleHintReturnVariant_new2(QStyleHintReturnVariant* param1);
void QStyleHintReturnVariant_virtbase(QStyleHintReturnVariant* src, QStyleHintReturn** outptr_QStyleHintReturn);
void QStyleHintReturnVariant_OperatorAssign(QStyleHintReturnVariant* self, QStyleHintReturnVariant* param1);
void QStyleHintReturnVariant_Delete(QStyleHintReturnVariant* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
