#pragma once
#ifndef MIQT_QT_GEN_QGRIDLAYOUT_H
#define MIQT_QT_GEN_QGRIDLAYOUT_H

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
class QGridLayout;
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
typedef struct QGridLayout QGridLayout;
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

QGridLayout* QGridLayout_new(QWidget* parent);
QGridLayout* QGridLayout_new2();
void QGridLayout_virtbase(QGridLayout* src, QLayout** outptr_QLayout);
QMetaObject* QGridLayout_metaObject(const QGridLayout* self);
void* QGridLayout_metacast(QGridLayout* self, const char* param1);
struct miqt_string QGridLayout_tr(const char* s);
struct miqt_string QGridLayout_trUtf8(const char* s);
QSize* QGridLayout_sizeHint(const QGridLayout* self);
QSize* QGridLayout_minimumSize(const QGridLayout* self);
QSize* QGridLayout_maximumSize(const QGridLayout* self);
void QGridLayout_setHorizontalSpacing(QGridLayout* self, int spacing);
int QGridLayout_horizontalSpacing(const QGridLayout* self);
void QGridLayout_setVerticalSpacing(QGridLayout* self, int spacing);
int QGridLayout_verticalSpacing(const QGridLayout* self);
void QGridLayout_setSpacing(QGridLayout* self, int spacing);
int QGridLayout_spacing(const QGridLayout* self);
void QGridLayout_setRowStretch(QGridLayout* self, int row, int stretch);
void QGridLayout_setColumnStretch(QGridLayout* self, int column, int stretch);
int QGridLayout_rowStretch(const QGridLayout* self, int row);
int QGridLayout_columnStretch(const QGridLayout* self, int column);
void QGridLayout_setRowMinimumHeight(QGridLayout* self, int row, int minSize);
void QGridLayout_setColumnMinimumWidth(QGridLayout* self, int column, int minSize);
int QGridLayout_rowMinimumHeight(const QGridLayout* self, int row);
int QGridLayout_columnMinimumWidth(const QGridLayout* self, int column);
int QGridLayout_columnCount(const QGridLayout* self);
int QGridLayout_rowCount(const QGridLayout* self);
QRect* QGridLayout_cellRect(const QGridLayout* self, int row, int column);
bool QGridLayout_hasHeightForWidth(const QGridLayout* self);
int QGridLayout_heightForWidth(const QGridLayout* self, int param1);
int QGridLayout_minimumHeightForWidth(const QGridLayout* self, int param1);
int QGridLayout_expandingDirections(const QGridLayout* self);
void QGridLayout_invalidate(QGridLayout* self);
void QGridLayout_addWidget(QGridLayout* self, QWidget* w);
void QGridLayout_addWidget2(QGridLayout* self, QWidget* param1, int row, int column);
void QGridLayout_addWidget3(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan);
void QGridLayout_addLayout(QGridLayout* self, QLayout* param1, int row, int column);
void QGridLayout_addLayout2(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan);
void QGridLayout_setOriginCorner(QGridLayout* self, int originCorner);
int QGridLayout_originCorner(const QGridLayout* self);
QLayoutItem* QGridLayout_itemAt(const QGridLayout* self, int index);
QLayoutItem* QGridLayout_itemAtPosition(const QGridLayout* self, int row, int column);
QLayoutItem* QGridLayout_takeAt(QGridLayout* self, int index);
int QGridLayout_count(const QGridLayout* self);
void QGridLayout_setGeometry(QGridLayout* self, QRect* geometry);
void QGridLayout_addItem(QGridLayout* self, QLayoutItem* item, int row, int column);
void QGridLayout_setDefaultPositioning(QGridLayout* self, int n, int orient);
void QGridLayout_getItemPosition(const QGridLayout* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan);
void QGridLayout_addItemWithQLayoutItem(QGridLayout* self, QLayoutItem* param1);
struct miqt_string QGridLayout_tr2(const char* s, const char* c);
struct miqt_string QGridLayout_tr3(const char* s, const char* c, int n);
struct miqt_string QGridLayout_trUtf82(const char* s, const char* c);
struct miqt_string QGridLayout_trUtf83(const char* s, const char* c, int n);
void QGridLayout_addWidget4(QGridLayout* self, QWidget* param1, int row, int column, int param4);
void QGridLayout_addWidget5(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan, int param6);
void QGridLayout_addLayout3(QGridLayout* self, QLayout* param1, int row, int column, int param4);
void QGridLayout_addLayout4(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan, int param6);
void QGridLayout_addItem2(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan);
void QGridLayout_addItem3(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan);
void QGridLayout_addItem4(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int param6);
bool QGridLayout_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QGridLayout_virtualbase_sizeHint(const void* self);
bool QGridLayout_override_virtual_minimumSize(void* self, intptr_t slot);
QSize* QGridLayout_virtualbase_minimumSize(const void* self);
bool QGridLayout_override_virtual_maximumSize(void* self, intptr_t slot);
QSize* QGridLayout_virtualbase_maximumSize(const void* self);
bool QGridLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QGridLayout_virtualbase_hasHeightForWidth(const void* self);
bool QGridLayout_override_virtual_heightForWidth(void* self, intptr_t slot);
int QGridLayout_virtualbase_heightForWidth(const void* self, int param1);
bool QGridLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot);
int QGridLayout_virtualbase_minimumHeightForWidth(const void* self, int param1);
bool QGridLayout_override_virtual_expandingDirections(void* self, intptr_t slot);
int QGridLayout_virtualbase_expandingDirections(const void* self);
bool QGridLayout_override_virtual_invalidate(void* self, intptr_t slot);
void QGridLayout_virtualbase_invalidate(void* self);
bool QGridLayout_override_virtual_itemAt(void* self, intptr_t slot);
QLayoutItem* QGridLayout_virtualbase_itemAt(const void* self, int index);
bool QGridLayout_override_virtual_takeAt(void* self, intptr_t slot);
QLayoutItem* QGridLayout_virtualbase_takeAt(void* self, int index);
bool QGridLayout_override_virtual_count(void* self, intptr_t slot);
int QGridLayout_virtualbase_count(const void* self);
bool QGridLayout_override_virtual_setGeometry(void* self, intptr_t slot);
void QGridLayout_virtualbase_setGeometry(void* self, QRect* geometry);
bool QGridLayout_override_virtual_addItemWithQLayoutItem(void* self, intptr_t slot);
void QGridLayout_virtualbase_addItemWithQLayoutItem(void* self, QLayoutItem* param1);
bool QGridLayout_override_virtual_geometry(void* self, intptr_t slot);
QRect* QGridLayout_virtualbase_geometry(const void* self);
bool QGridLayout_override_virtual_indexOf(void* self, intptr_t slot);
int QGridLayout_virtualbase_indexOf(const void* self, QWidget* param1);
bool QGridLayout_override_virtual_isEmpty(void* self, intptr_t slot);
bool QGridLayout_virtualbase_isEmpty(const void* self);
bool QGridLayout_override_virtual_controlTypes(void* self, intptr_t slot);
int QGridLayout_virtualbase_controlTypes(const void* self);
bool QGridLayout_override_virtual_layout(void* self, intptr_t slot);
QLayout* QGridLayout_virtualbase_layout(void* self);
bool QGridLayout_override_virtual_childEvent(void* self, intptr_t slot);
void QGridLayout_virtualbase_childEvent(void* self, QChildEvent* e);
bool QGridLayout_override_virtual_event(void* self, intptr_t slot);
bool QGridLayout_virtualbase_event(void* self, QEvent* event);
bool QGridLayout_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGridLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGridLayout_override_virtual_timerEvent(void* self, intptr_t slot);
void QGridLayout_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGridLayout_override_virtual_customEvent(void* self, intptr_t slot);
void QGridLayout_virtualbase_customEvent(void* self, QEvent* event);
bool QGridLayout_override_virtual_connectNotify(void* self, intptr_t slot);
void QGridLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGridLayout_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGridLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QGridLayout_override_virtual_widget(void* self, intptr_t slot);
QWidget* QGridLayout_virtualbase_widget(void* self);
bool QGridLayout_override_virtual_spacerItem(void* self, intptr_t slot);
QSpacerItem* QGridLayout_virtualbase_spacerItem(void* self);
void QGridLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
void QGridLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
void QGridLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
bool QGridLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
QRect* QGridLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
QObject* QGridLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGridLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGridLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGridLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QGridLayout_delete(QGridLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
