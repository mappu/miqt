#pragma once
#ifndef MIQT_QT_GEN_QLAYOUTITEM_H
#define MIQT_QT_GEN_QLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLayout;
class QLayoutItem;
class QRect;
class QSize;
class QSizePolicy;
class QSpacerItem;
class QWidget;
class QWidgetItem;
class QWidgetItemV2;
#else
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QSpacerItem QSpacerItem;
typedef struct QWidget QWidget;
typedef struct QWidgetItem QWidgetItem;
typedef struct QWidgetItemV2 QWidgetItemV2;
#endif

QLayoutItem* QLayoutItem_new();
QLayoutItem* QLayoutItem_new2(QLayoutItem* param1);
QLayoutItem* QLayoutItem_new3(int alignment);
QSize* QLayoutItem_sizeHint(const QLayoutItem* self);
QSize* QLayoutItem_minimumSize(const QLayoutItem* self);
QSize* QLayoutItem_maximumSize(const QLayoutItem* self);
int QLayoutItem_expandingDirections(const QLayoutItem* self);
void QLayoutItem_setGeometry(QLayoutItem* self, QRect* geometry);
QRect* QLayoutItem_geometry(const QLayoutItem* self);
bool QLayoutItem_isEmpty(const QLayoutItem* self);
bool QLayoutItem_hasHeightForWidth(const QLayoutItem* self);
int QLayoutItem_heightForWidth(const QLayoutItem* self, int param1);
int QLayoutItem_minimumHeightForWidth(const QLayoutItem* self, int param1);
void QLayoutItem_invalidate(QLayoutItem* self);
QWidget* QLayoutItem_widget(QLayoutItem* self);
QLayout* QLayoutItem_layout(QLayoutItem* self);
QSpacerItem* QLayoutItem_spacerItem(QLayoutItem* self);
int QLayoutItem_alignment(const QLayoutItem* self);
void QLayoutItem_setAlignment(QLayoutItem* self, int a);
int QLayoutItem_controlTypes(const QLayoutItem* self);
bool QLayoutItem_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QLayoutItem_virtualbase_sizeHint(const void* self);
bool QLayoutItem_override_virtual_minimumSize(void* self, intptr_t slot);
QSize* QLayoutItem_virtualbase_minimumSize(const void* self);
bool QLayoutItem_override_virtual_maximumSize(void* self, intptr_t slot);
QSize* QLayoutItem_virtualbase_maximumSize(const void* self);
bool QLayoutItem_override_virtual_expandingDirections(void* self, intptr_t slot);
int QLayoutItem_virtualbase_expandingDirections(const void* self);
bool QLayoutItem_override_virtual_setGeometry(void* self, intptr_t slot);
void QLayoutItem_virtualbase_setGeometry(void* self, QRect* geometry);
bool QLayoutItem_override_virtual_geometry(void* self, intptr_t slot);
QRect* QLayoutItem_virtualbase_geometry(const void* self);
bool QLayoutItem_override_virtual_isEmpty(void* self, intptr_t slot);
bool QLayoutItem_virtualbase_isEmpty(const void* self);
bool QLayoutItem_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QLayoutItem_virtualbase_hasHeightForWidth(const void* self);
bool QLayoutItem_override_virtual_heightForWidth(void* self, intptr_t slot);
int QLayoutItem_virtualbase_heightForWidth(const void* self, int param1);
bool QLayoutItem_override_virtual_minimumHeightForWidth(void* self, intptr_t slot);
int QLayoutItem_virtualbase_minimumHeightForWidth(const void* self, int param1);
bool QLayoutItem_override_virtual_invalidate(void* self, intptr_t slot);
void QLayoutItem_virtualbase_invalidate(void* self);
bool QLayoutItem_override_virtual_widget(void* self, intptr_t slot);
QWidget* QLayoutItem_virtualbase_widget(void* self);
bool QLayoutItem_override_virtual_layout(void* self, intptr_t slot);
QLayout* QLayoutItem_virtualbase_layout(void* self);
bool QLayoutItem_override_virtual_spacerItem(void* self, intptr_t slot);
QSpacerItem* QLayoutItem_virtualbase_spacerItem(void* self);
bool QLayoutItem_override_virtual_controlTypes(void* self, intptr_t slot);
int QLayoutItem_virtualbase_controlTypes(const void* self);
void QLayoutItem_delete(QLayoutItem* self);

QSpacerItem* QSpacerItem_new(int w, int h);
QSpacerItem* QSpacerItem_new2(QSpacerItem* param1);
QSpacerItem* QSpacerItem_new3(int w, int h, int hData);
QSpacerItem* QSpacerItem_new4(int w, int h, int hData, int vData);
void QSpacerItem_virtbase(QSpacerItem* src, QLayoutItem** outptr_QLayoutItem);
void QSpacerItem_changeSize(QSpacerItem* self, int w, int h);
QSize* QSpacerItem_sizeHint(const QSpacerItem* self);
QSize* QSpacerItem_minimumSize(const QSpacerItem* self);
QSize* QSpacerItem_maximumSize(const QSpacerItem* self);
int QSpacerItem_expandingDirections(const QSpacerItem* self);
bool QSpacerItem_isEmpty(const QSpacerItem* self);
void QSpacerItem_setGeometry(QSpacerItem* self, QRect* geometry);
QRect* QSpacerItem_geometry(const QSpacerItem* self);
QSpacerItem* QSpacerItem_spacerItem(QSpacerItem* self);
QSizePolicy* QSpacerItem_sizePolicy(const QSpacerItem* self);
void QSpacerItem_changeSize3(QSpacerItem* self, int w, int h, int hData);
void QSpacerItem_changeSize4(QSpacerItem* self, int w, int h, int hData, int vData);
bool QSpacerItem_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QSpacerItem_virtualbase_sizeHint(const void* self);
bool QSpacerItem_override_virtual_minimumSize(void* self, intptr_t slot);
QSize* QSpacerItem_virtualbase_minimumSize(const void* self);
bool QSpacerItem_override_virtual_maximumSize(void* self, intptr_t slot);
QSize* QSpacerItem_virtualbase_maximumSize(const void* self);
bool QSpacerItem_override_virtual_expandingDirections(void* self, intptr_t slot);
int QSpacerItem_virtualbase_expandingDirections(const void* self);
bool QSpacerItem_override_virtual_isEmpty(void* self, intptr_t slot);
bool QSpacerItem_virtualbase_isEmpty(const void* self);
bool QSpacerItem_override_virtual_setGeometry(void* self, intptr_t slot);
void QSpacerItem_virtualbase_setGeometry(void* self, QRect* geometry);
bool QSpacerItem_override_virtual_geometry(void* self, intptr_t slot);
QRect* QSpacerItem_virtualbase_geometry(const void* self);
bool QSpacerItem_override_virtual_spacerItem(void* self, intptr_t slot);
QSpacerItem* QSpacerItem_virtualbase_spacerItem(void* self);
bool QSpacerItem_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QSpacerItem_virtualbase_hasHeightForWidth(const void* self);
bool QSpacerItem_override_virtual_heightForWidth(void* self, intptr_t slot);
int QSpacerItem_virtualbase_heightForWidth(const void* self, int param1);
bool QSpacerItem_override_virtual_minimumHeightForWidth(void* self, intptr_t slot);
int QSpacerItem_virtualbase_minimumHeightForWidth(const void* self, int param1);
bool QSpacerItem_override_virtual_invalidate(void* self, intptr_t slot);
void QSpacerItem_virtualbase_invalidate(void* self);
bool QSpacerItem_override_virtual_widget(void* self, intptr_t slot);
QWidget* QSpacerItem_virtualbase_widget(void* self);
bool QSpacerItem_override_virtual_layout(void* self, intptr_t slot);
QLayout* QSpacerItem_virtualbase_layout(void* self);
bool QSpacerItem_override_virtual_controlTypes(void* self, intptr_t slot);
int QSpacerItem_virtualbase_controlTypes(const void* self);
void QSpacerItem_delete(QSpacerItem* self);

QWidgetItem* QWidgetItem_new(QWidget* w);
void QWidgetItem_virtbase(QWidgetItem* src, QLayoutItem** outptr_QLayoutItem);
QSize* QWidgetItem_sizeHint(const QWidgetItem* self);
QSize* QWidgetItem_minimumSize(const QWidgetItem* self);
QSize* QWidgetItem_maximumSize(const QWidgetItem* self);
int QWidgetItem_expandingDirections(const QWidgetItem* self);
bool QWidgetItem_isEmpty(const QWidgetItem* self);
void QWidgetItem_setGeometry(QWidgetItem* self, QRect* geometry);
QRect* QWidgetItem_geometry(const QWidgetItem* self);
QWidget* QWidgetItem_widget(QWidgetItem* self);
bool QWidgetItem_hasHeightForWidth(const QWidgetItem* self);
int QWidgetItem_heightForWidth(const QWidgetItem* self, int param1);
int QWidgetItem_controlTypes(const QWidgetItem* self);
bool QWidgetItem_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QWidgetItem_virtualbase_sizeHint(const void* self);
bool QWidgetItem_override_virtual_minimumSize(void* self, intptr_t slot);
QSize* QWidgetItem_virtualbase_minimumSize(const void* self);
bool QWidgetItem_override_virtual_maximumSize(void* self, intptr_t slot);
QSize* QWidgetItem_virtualbase_maximumSize(const void* self);
bool QWidgetItem_override_virtual_expandingDirections(void* self, intptr_t slot);
int QWidgetItem_virtualbase_expandingDirections(const void* self);
bool QWidgetItem_override_virtual_isEmpty(void* self, intptr_t slot);
bool QWidgetItem_virtualbase_isEmpty(const void* self);
bool QWidgetItem_override_virtual_setGeometry(void* self, intptr_t slot);
void QWidgetItem_virtualbase_setGeometry(void* self, QRect* geometry);
bool QWidgetItem_override_virtual_geometry(void* self, intptr_t slot);
QRect* QWidgetItem_virtualbase_geometry(const void* self);
bool QWidgetItem_override_virtual_widget(void* self, intptr_t slot);
QWidget* QWidgetItem_virtualbase_widget(void* self);
bool QWidgetItem_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QWidgetItem_virtualbase_hasHeightForWidth(const void* self);
bool QWidgetItem_override_virtual_heightForWidth(void* self, intptr_t slot);
int QWidgetItem_virtualbase_heightForWidth(const void* self, int param1);
bool QWidgetItem_override_virtual_controlTypes(void* self, intptr_t slot);
int QWidgetItem_virtualbase_controlTypes(const void* self);
bool QWidgetItem_override_virtual_minimumHeightForWidth(void* self, intptr_t slot);
int QWidgetItem_virtualbase_minimumHeightForWidth(const void* self, int param1);
bool QWidgetItem_override_virtual_invalidate(void* self, intptr_t slot);
void QWidgetItem_virtualbase_invalidate(void* self);
bool QWidgetItem_override_virtual_layout(void* self, intptr_t slot);
QLayout* QWidgetItem_virtualbase_layout(void* self);
bool QWidgetItem_override_virtual_spacerItem(void* self, intptr_t slot);
QSpacerItem* QWidgetItem_virtualbase_spacerItem(void* self);
void QWidgetItem_delete(QWidgetItem* self);

QWidgetItemV2* QWidgetItemV2_new(QWidget* widget);
void QWidgetItemV2_virtbase(QWidgetItemV2* src, QWidgetItem** outptr_QWidgetItem);
QSize* QWidgetItemV2_sizeHint(const QWidgetItemV2* self);
QSize* QWidgetItemV2_minimumSize(const QWidgetItemV2* self);
QSize* QWidgetItemV2_maximumSize(const QWidgetItemV2* self);
int QWidgetItemV2_heightForWidth(const QWidgetItemV2* self, int width);
bool QWidgetItemV2_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QWidgetItemV2_virtualbase_sizeHint(const void* self);
bool QWidgetItemV2_override_virtual_minimumSize(void* self, intptr_t slot);
QSize* QWidgetItemV2_virtualbase_minimumSize(const void* self);
bool QWidgetItemV2_override_virtual_maximumSize(void* self, intptr_t slot);
QSize* QWidgetItemV2_virtualbase_maximumSize(const void* self);
bool QWidgetItemV2_override_virtual_heightForWidth(void* self, intptr_t slot);
int QWidgetItemV2_virtualbase_heightForWidth(const void* self, int width);
bool QWidgetItemV2_override_virtual_expandingDirections(void* self, intptr_t slot);
int QWidgetItemV2_virtualbase_expandingDirections(const void* self);
bool QWidgetItemV2_override_virtual_isEmpty(void* self, intptr_t slot);
bool QWidgetItemV2_virtualbase_isEmpty(const void* self);
bool QWidgetItemV2_override_virtual_setGeometry(void* self, intptr_t slot);
void QWidgetItemV2_virtualbase_setGeometry(void* self, QRect* geometry);
bool QWidgetItemV2_override_virtual_geometry(void* self, intptr_t slot);
QRect* QWidgetItemV2_virtualbase_geometry(const void* self);
bool QWidgetItemV2_override_virtual_widget(void* self, intptr_t slot);
QWidget* QWidgetItemV2_virtualbase_widget(void* self);
bool QWidgetItemV2_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QWidgetItemV2_virtualbase_hasHeightForWidth(const void* self);
bool QWidgetItemV2_override_virtual_controlTypes(void* self, intptr_t slot);
int QWidgetItemV2_virtualbase_controlTypes(const void* self);
bool QWidgetItemV2_override_virtual_minimumHeightForWidth(void* self, intptr_t slot);
int QWidgetItemV2_virtualbase_minimumHeightForWidth(const void* self, int param1);
bool QWidgetItemV2_override_virtual_invalidate(void* self, intptr_t slot);
void QWidgetItemV2_virtualbase_invalidate(void* self);
bool QWidgetItemV2_override_virtual_layout(void* self, intptr_t slot);
QLayout* QWidgetItemV2_virtualbase_layout(void* self);
bool QWidgetItemV2_override_virtual_spacerItem(void* self, intptr_t slot);
QSpacerItem* QWidgetItemV2_virtualbase_spacerItem(void* self);
void QWidgetItemV2_delete(QWidgetItemV2* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
