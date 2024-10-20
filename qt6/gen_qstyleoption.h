#ifndef GEN_QSTYLEOPTION_H
#define GEN_QSTYLEOPTION_H

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
void QStyleOption_Delete(QStyleOption* self);

QStyleOptionFocusRect* QStyleOptionFocusRect_new();
QStyleOptionFocusRect* QStyleOptionFocusRect_new2(QStyleOptionFocusRect* other);
void QStyleOptionFocusRect_Delete(QStyleOptionFocusRect* self);

QStyleOptionFrame* QStyleOptionFrame_new();
QStyleOptionFrame* QStyleOptionFrame_new2(QStyleOptionFrame* other);
void QStyleOptionFrame_Delete(QStyleOptionFrame* self);

QStyleOptionTabWidgetFrame* QStyleOptionTabWidgetFrame_new();
QStyleOptionTabWidgetFrame* QStyleOptionTabWidgetFrame_new2(QStyleOptionTabWidgetFrame* other);
void QStyleOptionTabWidgetFrame_Delete(QStyleOptionTabWidgetFrame* self);

QStyleOptionTabBarBase* QStyleOptionTabBarBase_new();
QStyleOptionTabBarBase* QStyleOptionTabBarBase_new2(QStyleOptionTabBarBase* other);
void QStyleOptionTabBarBase_Delete(QStyleOptionTabBarBase* self);

QStyleOptionHeader* QStyleOptionHeader_new();
QStyleOptionHeader* QStyleOptionHeader_new2(QStyleOptionHeader* other);
void QStyleOptionHeader_Delete(QStyleOptionHeader* self);

QStyleOptionHeaderV2* QStyleOptionHeaderV2_new();
QStyleOptionHeaderV2* QStyleOptionHeaderV2_new2(QStyleOptionHeaderV2* other);
void QStyleOptionHeaderV2_Delete(QStyleOptionHeaderV2* self);

QStyleOptionButton* QStyleOptionButton_new();
QStyleOptionButton* QStyleOptionButton_new2(QStyleOptionButton* other);
void QStyleOptionButton_Delete(QStyleOptionButton* self);

QStyleOptionTab* QStyleOptionTab_new();
QStyleOptionTab* QStyleOptionTab_new2(QStyleOptionTab* other);
void QStyleOptionTab_Delete(QStyleOptionTab* self);

QStyleOptionToolBar* QStyleOptionToolBar_new();
QStyleOptionToolBar* QStyleOptionToolBar_new2(QStyleOptionToolBar* other);
void QStyleOptionToolBar_Delete(QStyleOptionToolBar* self);

QStyleOptionProgressBar* QStyleOptionProgressBar_new();
QStyleOptionProgressBar* QStyleOptionProgressBar_new2(QStyleOptionProgressBar* other);
void QStyleOptionProgressBar_Delete(QStyleOptionProgressBar* self);

QStyleOptionMenuItem* QStyleOptionMenuItem_new();
QStyleOptionMenuItem* QStyleOptionMenuItem_new2(QStyleOptionMenuItem* other);
void QStyleOptionMenuItem_Delete(QStyleOptionMenuItem* self);

QStyleOptionDockWidget* QStyleOptionDockWidget_new();
QStyleOptionDockWidget* QStyleOptionDockWidget_new2(QStyleOptionDockWidget* other);
void QStyleOptionDockWidget_Delete(QStyleOptionDockWidget* self);

QStyleOptionViewItem* QStyleOptionViewItem_new();
QStyleOptionViewItem* QStyleOptionViewItem_new2(QStyleOptionViewItem* other);
void QStyleOptionViewItem_Delete(QStyleOptionViewItem* self);

QStyleOptionToolBox* QStyleOptionToolBox_new();
QStyleOptionToolBox* QStyleOptionToolBox_new2(QStyleOptionToolBox* other);
void QStyleOptionToolBox_Delete(QStyleOptionToolBox* self);

QStyleOptionRubberBand* QStyleOptionRubberBand_new();
QStyleOptionRubberBand* QStyleOptionRubberBand_new2(QStyleOptionRubberBand* other);
void QStyleOptionRubberBand_Delete(QStyleOptionRubberBand* self);

QStyleOptionComplex* QStyleOptionComplex_new();
QStyleOptionComplex* QStyleOptionComplex_new2(QStyleOptionComplex* other);
QStyleOptionComplex* QStyleOptionComplex_new3(int version);
QStyleOptionComplex* QStyleOptionComplex_new4(int version, int typeVal);
void QStyleOptionComplex_Delete(QStyleOptionComplex* self);

QStyleOptionSlider* QStyleOptionSlider_new();
QStyleOptionSlider* QStyleOptionSlider_new2(QStyleOptionSlider* other);
void QStyleOptionSlider_Delete(QStyleOptionSlider* self);

QStyleOptionSpinBox* QStyleOptionSpinBox_new();
QStyleOptionSpinBox* QStyleOptionSpinBox_new2(QStyleOptionSpinBox* other);
void QStyleOptionSpinBox_Delete(QStyleOptionSpinBox* self);

QStyleOptionToolButton* QStyleOptionToolButton_new();
QStyleOptionToolButton* QStyleOptionToolButton_new2(QStyleOptionToolButton* other);
void QStyleOptionToolButton_Delete(QStyleOptionToolButton* self);

QStyleOptionComboBox* QStyleOptionComboBox_new();
QStyleOptionComboBox* QStyleOptionComboBox_new2(QStyleOptionComboBox* other);
void QStyleOptionComboBox_Delete(QStyleOptionComboBox* self);

QStyleOptionTitleBar* QStyleOptionTitleBar_new();
QStyleOptionTitleBar* QStyleOptionTitleBar_new2(QStyleOptionTitleBar* other);
void QStyleOptionTitleBar_Delete(QStyleOptionTitleBar* self);

QStyleOptionGroupBox* QStyleOptionGroupBox_new();
QStyleOptionGroupBox* QStyleOptionGroupBox_new2(QStyleOptionGroupBox* other);
void QStyleOptionGroupBox_Delete(QStyleOptionGroupBox* self);

QStyleOptionSizeGrip* QStyleOptionSizeGrip_new();
QStyleOptionSizeGrip* QStyleOptionSizeGrip_new2(QStyleOptionSizeGrip* other);
void QStyleOptionSizeGrip_Delete(QStyleOptionSizeGrip* self);

QStyleOptionGraphicsItem* QStyleOptionGraphicsItem_new();
QStyleOptionGraphicsItem* QStyleOptionGraphicsItem_new2(QStyleOptionGraphicsItem* other);
double QStyleOptionGraphicsItem_LevelOfDetailFromTransform(QTransform* worldTransform);
void QStyleOptionGraphicsItem_Delete(QStyleOptionGraphicsItem* self);

QStyleHintReturn* QStyleHintReturn_new();
QStyleHintReturn* QStyleHintReturn_new2(QStyleHintReturn* param1);
QStyleHintReturn* QStyleHintReturn_new3(int version);
QStyleHintReturn* QStyleHintReturn_new4(int version, int typeVal);
void QStyleHintReturn_OperatorAssign(QStyleHintReturn* self, QStyleHintReturn* param1);
void QStyleHintReturn_Delete(QStyleHintReturn* self);

QStyleHintReturnMask* QStyleHintReturnMask_new();
QStyleHintReturnMask* QStyleHintReturnMask_new2(QStyleHintReturnMask* param1);
void QStyleHintReturnMask_OperatorAssign(QStyleHintReturnMask* self, QStyleHintReturnMask* param1);
void QStyleHintReturnMask_Delete(QStyleHintReturnMask* self);

QStyleHintReturnVariant* QStyleHintReturnVariant_new();
QStyleHintReturnVariant* QStyleHintReturnVariant_new2(QStyleHintReturnVariant* param1);
void QStyleHintReturnVariant_OperatorAssign(QStyleHintReturnVariant* self, QStyleHintReturnVariant* param1);
void QStyleHintReturnVariant_Delete(QStyleHintReturnVariant* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
