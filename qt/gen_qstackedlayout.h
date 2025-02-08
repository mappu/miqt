#pragma once
#ifndef MIQT_QT_GEN_QSTACKEDLAYOUT_H
#define MIQT_QT_GEN_QSTACKEDLAYOUT_H

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
class QLayout;
class QLayoutItem;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRect;
class QSize;
class QSpacerItem;
class QStackedLayout;
class QTimerEvent;
class QWidget;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSpacerItem QSpacerItem;
typedef struct QStackedLayout QStackedLayout;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QStackedLayout* QStackedLayout_new(QWidget* parent);
QStackedLayout* QStackedLayout_new2();
QStackedLayout* QStackedLayout_new3(QLayout* parentLayout);
void QStackedLayout_virtbase(QStackedLayout* src, QLayout** outptr_QLayout);
QMetaObject* QStackedLayout_metaObject(const QStackedLayout* self);
void* QStackedLayout_metacast(QStackedLayout* self, const char* param1);
struct miqt_string QStackedLayout_tr(const char* s);
struct miqt_string QStackedLayout_trUtf8(const char* s);
int QStackedLayout_addWidget(QStackedLayout* self, QWidget* w);
int QStackedLayout_insertWidget(QStackedLayout* self, int index, QWidget* w);
QWidget* QStackedLayout_currentWidget(const QStackedLayout* self);
int QStackedLayout_currentIndex(const QStackedLayout* self);
QWidget* QStackedLayout_widget(const QStackedLayout* self, int param1);
int QStackedLayout_count(const QStackedLayout* self);
int QStackedLayout_stackingMode(const QStackedLayout* self);
void QStackedLayout_setStackingMode(QStackedLayout* self, int stackingMode);
void QStackedLayout_addItem(QStackedLayout* self, QLayoutItem* item);
QSize* QStackedLayout_sizeHint(const QStackedLayout* self);
QSize* QStackedLayout_minimumSize(const QStackedLayout* self);
QLayoutItem* QStackedLayout_itemAt(const QStackedLayout* self, int param1);
QLayoutItem* QStackedLayout_takeAt(QStackedLayout* self, int param1);
void QStackedLayout_setGeometry(QStackedLayout* self, QRect* rect);
bool QStackedLayout_hasHeightForWidth(const QStackedLayout* self);
int QStackedLayout_heightForWidth(const QStackedLayout* self, int width);
void QStackedLayout_widgetRemoved(QStackedLayout* self, int index);
void QStackedLayout_connect_widgetRemoved(QStackedLayout* self, intptr_t slot);
void QStackedLayout_currentChanged(QStackedLayout* self, int index);
void QStackedLayout_connect_currentChanged(QStackedLayout* self, intptr_t slot);
void QStackedLayout_setCurrentIndex(QStackedLayout* self, int index);
void QStackedLayout_setCurrentWidget(QStackedLayout* self, QWidget* w);
struct miqt_string QStackedLayout_tr2(const char* s, const char* c);
struct miqt_string QStackedLayout_tr3(const char* s, const char* c, int n);
struct miqt_string QStackedLayout_trUtf82(const char* s, const char* c);
struct miqt_string QStackedLayout_trUtf83(const char* s, const char* c, int n);
bool QStackedLayout_override_virtual_count(void* self, intptr_t slot);
int QStackedLayout_virtualbase_count(const void* self);
bool QStackedLayout_override_virtual_addItem(void* self, intptr_t slot);
void QStackedLayout_virtualbase_addItem(void* self, QLayoutItem* item);
bool QStackedLayout_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QStackedLayout_virtualbase_sizeHint(const void* self);
bool QStackedLayout_override_virtual_minimumSize(void* self, intptr_t slot);
QSize* QStackedLayout_virtualbase_minimumSize(const void* self);
bool QStackedLayout_override_virtual_itemAt(void* self, intptr_t slot);
QLayoutItem* QStackedLayout_virtualbase_itemAt(const void* self, int param1);
bool QStackedLayout_override_virtual_takeAt(void* self, intptr_t slot);
QLayoutItem* QStackedLayout_virtualbase_takeAt(void* self, int param1);
bool QStackedLayout_override_virtual_setGeometry(void* self, intptr_t slot);
void QStackedLayout_virtualbase_setGeometry(void* self, QRect* rect);
bool QStackedLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QStackedLayout_virtualbase_hasHeightForWidth(const void* self);
bool QStackedLayout_override_virtual_heightForWidth(void* self, intptr_t slot);
int QStackedLayout_virtualbase_heightForWidth(const void* self, int width);
bool QStackedLayout_override_virtual_invalidate(void* self, intptr_t slot);
void QStackedLayout_virtualbase_invalidate(void* self);
bool QStackedLayout_override_virtual_geometry(void* self, intptr_t slot);
QRect* QStackedLayout_virtualbase_geometry(const void* self);
bool QStackedLayout_override_virtual_expandingDirections(void* self, intptr_t slot);
int QStackedLayout_virtualbase_expandingDirections(const void* self);
bool QStackedLayout_override_virtual_maximumSize(void* self, intptr_t slot);
QSize* QStackedLayout_virtualbase_maximumSize(const void* self);
bool QStackedLayout_override_virtual_indexOf(void* self, intptr_t slot);
int QStackedLayout_virtualbase_indexOf(const void* self, QWidget* param1);
bool QStackedLayout_override_virtual_isEmpty(void* self, intptr_t slot);
bool QStackedLayout_virtualbase_isEmpty(const void* self);
bool QStackedLayout_override_virtual_controlTypes(void* self, intptr_t slot);
int QStackedLayout_virtualbase_controlTypes(const void* self);
bool QStackedLayout_override_virtual_layout(void* self, intptr_t slot);
QLayout* QStackedLayout_virtualbase_layout(void* self);
bool QStackedLayout_override_virtual_childEvent(void* self, intptr_t slot);
void QStackedLayout_virtualbase_childEvent(void* self, QChildEvent* e);
bool QStackedLayout_override_virtual_event(void* self, intptr_t slot);
bool QStackedLayout_virtualbase_event(void* self, QEvent* event);
bool QStackedLayout_override_virtual_eventFilter(void* self, intptr_t slot);
bool QStackedLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QStackedLayout_override_virtual_timerEvent(void* self, intptr_t slot);
void QStackedLayout_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QStackedLayout_override_virtual_customEvent(void* self, intptr_t slot);
void QStackedLayout_virtualbase_customEvent(void* self, QEvent* event);
bool QStackedLayout_override_virtual_connectNotify(void* self, intptr_t slot);
void QStackedLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QStackedLayout_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QStackedLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QStackedLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot);
int QStackedLayout_virtualbase_minimumHeightForWidth(const void* self, int param1);
bool QStackedLayout_override_virtual_widget(void* self, intptr_t slot);
QWidget* QStackedLayout_virtualbase_widget(void* self);
bool QStackedLayout_override_virtual_spacerItem(void* self, intptr_t slot);
QSpacerItem* QStackedLayout_virtualbase_spacerItem(void* self);
void QStackedLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
void QStackedLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
void QStackedLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
bool QStackedLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
QRect* QStackedLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
QObject* QStackedLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QStackedLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QStackedLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QStackedLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QStackedLayout_delete(QStackedLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
