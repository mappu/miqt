#pragma once
#ifndef MIQT_QT_GEN_QFORMLAYOUT_H
#define MIQT_QT_GEN_QFORMLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QFormLayout;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QFormLayout__TakeRowResult)
typedef QFormLayout::TakeRowResult QFormLayout__TakeRowResult;
#else
class QFormLayout__TakeRowResult;
#endif
class QLayout;
class QLayoutItem;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRect;
class QSize;
class QSpacerItem;
class QTimerEvent;
class QWidget;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFormLayout QFormLayout;
typedef struct QFormLayout__TakeRowResult QFormLayout__TakeRowResult;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSpacerItem QSpacerItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QFormLayout* QFormLayout_new(QWidget* parent);
QFormLayout* QFormLayout_new2();
void QFormLayout_virtbase(QFormLayout* src, QLayout** outptr_QLayout);
QMetaObject* QFormLayout_metaObject(const QFormLayout* self);
void* QFormLayout_metacast(QFormLayout* self, const char* param1);
struct miqt_string QFormLayout_tr(const char* s);
struct miqt_string QFormLayout_trUtf8(const char* s);
void QFormLayout_setFieldGrowthPolicy(QFormLayout* self, int policy);
int QFormLayout_fieldGrowthPolicy(const QFormLayout* self);
void QFormLayout_setRowWrapPolicy(QFormLayout* self, int policy);
int QFormLayout_rowWrapPolicy(const QFormLayout* self);
void QFormLayout_setLabelAlignment(QFormLayout* self, int alignment);
int QFormLayout_labelAlignment(const QFormLayout* self);
void QFormLayout_setFormAlignment(QFormLayout* self, int alignment);
int QFormLayout_formAlignment(const QFormLayout* self);
void QFormLayout_setHorizontalSpacing(QFormLayout* self, int spacing);
int QFormLayout_horizontalSpacing(const QFormLayout* self);
void QFormLayout_setVerticalSpacing(QFormLayout* self, int spacing);
int QFormLayout_verticalSpacing(const QFormLayout* self);
int QFormLayout_spacing(const QFormLayout* self);
void QFormLayout_setSpacing(QFormLayout* self, int spacing);
void QFormLayout_addRow(QFormLayout* self, QWidget* label, QWidget* field);
void QFormLayout_addRow2(QFormLayout* self, QWidget* label, QLayout* field);
void QFormLayout_addRow3(QFormLayout* self, struct miqt_string labelText, QWidget* field);
void QFormLayout_addRow4(QFormLayout* self, struct miqt_string labelText, QLayout* field);
void QFormLayout_addRowWithWidget(QFormLayout* self, QWidget* widget);
void QFormLayout_addRowWithLayout(QFormLayout* self, QLayout* layout);
void QFormLayout_insertRow(QFormLayout* self, int row, QWidget* label, QWidget* field);
void QFormLayout_insertRow2(QFormLayout* self, int row, QWidget* label, QLayout* field);
void QFormLayout_insertRow3(QFormLayout* self, int row, struct miqt_string labelText, QWidget* field);
void QFormLayout_insertRow4(QFormLayout* self, int row, struct miqt_string labelText, QLayout* field);
void QFormLayout_insertRow5(QFormLayout* self, int row, QWidget* widget);
void QFormLayout_insertRow6(QFormLayout* self, int row, QLayout* layout);
void QFormLayout_removeRow(QFormLayout* self, int row);
void QFormLayout_removeRowWithWidget(QFormLayout* self, QWidget* widget);
void QFormLayout_removeRowWithLayout(QFormLayout* self, QLayout* layout);
QFormLayout__TakeRowResult* QFormLayout_takeRow(QFormLayout* self, int row);
QFormLayout__TakeRowResult* QFormLayout_takeRowWithWidget(QFormLayout* self, QWidget* widget);
QFormLayout__TakeRowResult* QFormLayout_takeRowWithLayout(QFormLayout* self, QLayout* layout);
void QFormLayout_setItem(QFormLayout* self, int row, int role, QLayoutItem* item);
void QFormLayout_setWidget(QFormLayout* self, int row, int role, QWidget* widget);
void QFormLayout_setLayout(QFormLayout* self, int row, int role, QLayout* layout);
QLayoutItem* QFormLayout_itemAt(const QFormLayout* self, int row, int role);
QWidget* QFormLayout_labelForField(const QFormLayout* self, QWidget* field);
QWidget* QFormLayout_labelForFieldWithField(const QFormLayout* self, QLayout* field);
void QFormLayout_addItem(QFormLayout* self, QLayoutItem* item);
QLayoutItem* QFormLayout_itemAtWithIndex(const QFormLayout* self, int index);
QLayoutItem* QFormLayout_takeAt(QFormLayout* self, int index);
void QFormLayout_setGeometry(QFormLayout* self, QRect* rect);
QSize* QFormLayout_minimumSize(const QFormLayout* self);
QSize* QFormLayout_sizeHint(const QFormLayout* self);
void QFormLayout_invalidate(QFormLayout* self);
bool QFormLayout_hasHeightForWidth(const QFormLayout* self);
int QFormLayout_heightForWidth(const QFormLayout* self, int width);
int QFormLayout_expandingDirections(const QFormLayout* self);
int QFormLayout_count(const QFormLayout* self);
int QFormLayout_rowCount(const QFormLayout* self);
struct miqt_string QFormLayout_tr2(const char* s, const char* c);
struct miqt_string QFormLayout_tr3(const char* s, const char* c, int n);
struct miqt_string QFormLayout_trUtf82(const char* s, const char* c);
struct miqt_string QFormLayout_trUtf83(const char* s, const char* c, int n);
bool QFormLayout_override_virtual_addItem(void* self, intptr_t slot);
void QFormLayout_virtualbase_addItem(void* self, QLayoutItem* item);
bool QFormLayout_override_virtual_itemAtWithIndex(void* self, intptr_t slot);
QLayoutItem* QFormLayout_virtualbase_itemAtWithIndex(const void* self, int index);
bool QFormLayout_override_virtual_takeAt(void* self, intptr_t slot);
QLayoutItem* QFormLayout_virtualbase_takeAt(void* self, int index);
bool QFormLayout_override_virtual_setGeometry(void* self, intptr_t slot);
void QFormLayout_virtualbase_setGeometry(void* self, QRect* rect);
bool QFormLayout_override_virtual_minimumSize(void* self, intptr_t slot);
QSize* QFormLayout_virtualbase_minimumSize(const void* self);
bool QFormLayout_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QFormLayout_virtualbase_sizeHint(const void* self);
bool QFormLayout_override_virtual_invalidate(void* self, intptr_t slot);
void QFormLayout_virtualbase_invalidate(void* self);
bool QFormLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QFormLayout_virtualbase_hasHeightForWidth(const void* self);
bool QFormLayout_override_virtual_heightForWidth(void* self, intptr_t slot);
int QFormLayout_virtualbase_heightForWidth(const void* self, int width);
bool QFormLayout_override_virtual_expandingDirections(void* self, intptr_t slot);
int QFormLayout_virtualbase_expandingDirections(const void* self);
bool QFormLayout_override_virtual_count(void* self, intptr_t slot);
int QFormLayout_virtualbase_count(const void* self);
bool QFormLayout_override_virtual_geometry(void* self, intptr_t slot);
QRect* QFormLayout_virtualbase_geometry(const void* self);
bool QFormLayout_override_virtual_maximumSize(void* self, intptr_t slot);
QSize* QFormLayout_virtualbase_maximumSize(const void* self);
bool QFormLayout_override_virtual_indexOf(void* self, intptr_t slot);
int QFormLayout_virtualbase_indexOf(const void* self, QWidget* param1);
bool QFormLayout_override_virtual_isEmpty(void* self, intptr_t slot);
bool QFormLayout_virtualbase_isEmpty(const void* self);
bool QFormLayout_override_virtual_controlTypes(void* self, intptr_t slot);
int QFormLayout_virtualbase_controlTypes(const void* self);
bool QFormLayout_override_virtual_layout(void* self, intptr_t slot);
QLayout* QFormLayout_virtualbase_layout(void* self);
bool QFormLayout_override_virtual_childEvent(void* self, intptr_t slot);
void QFormLayout_virtualbase_childEvent(void* self, QChildEvent* e);
bool QFormLayout_override_virtual_event(void* self, intptr_t slot);
bool QFormLayout_virtualbase_event(void* self, QEvent* event);
bool QFormLayout_override_virtual_eventFilter(void* self, intptr_t slot);
bool QFormLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QFormLayout_override_virtual_timerEvent(void* self, intptr_t slot);
void QFormLayout_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QFormLayout_override_virtual_customEvent(void* self, intptr_t slot);
void QFormLayout_virtualbase_customEvent(void* self, QEvent* event);
bool QFormLayout_override_virtual_connectNotify(void* self, intptr_t slot);
void QFormLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QFormLayout_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QFormLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QFormLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot);
int QFormLayout_virtualbase_minimumHeightForWidth(const void* self, int param1);
bool QFormLayout_override_virtual_widget(void* self, intptr_t slot);
QWidget* QFormLayout_virtualbase_widget(void* self);
bool QFormLayout_override_virtual_spacerItem(void* self, intptr_t slot);
QSpacerItem* QFormLayout_virtualbase_spacerItem(void* self);
void QFormLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
void QFormLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
void QFormLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
bool QFormLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
QRect* QFormLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
QObject* QFormLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QFormLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QFormLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QFormLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QFormLayout_delete(QFormLayout* self);

void QFormLayout__TakeRowResult_delete(QFormLayout__TakeRowResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
