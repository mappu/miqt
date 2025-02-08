#pragma once
#ifndef MIQT_QT6_GEN_QLAYOUT_H
#define MIQT_QT6_GEN_QLAYOUT_H

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
class QMargins;
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
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSpacerItem QSpacerItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QLayout* QLayout_new(QWidget* parent);
QLayout* QLayout_new2();
void QLayout_virtbase(QLayout* src, QObject** outptr_QObject, QLayoutItem** outptr_QLayoutItem);
QMetaObject* QLayout_metaObject(const QLayout* self);
void* QLayout_metacast(QLayout* self, const char* param1);
struct miqt_string QLayout_tr(const char* s);
int QLayout_spacing(const QLayout* self);
void QLayout_setSpacing(QLayout* self, int spacing);
void QLayout_setContentsMargins(QLayout* self, int left, int top, int right, int bottom);
void QLayout_setContentsMarginsWithMargins(QLayout* self, QMargins* margins);
void QLayout_unsetContentsMargins(QLayout* self);
void QLayout_getContentsMargins(const QLayout* self, int* left, int* top, int* right, int* bottom);
QMargins* QLayout_contentsMargins(const QLayout* self);
QRect* QLayout_contentsRect(const QLayout* self);
bool QLayout_setAlignment(QLayout* self, QWidget* w, int alignment);
bool QLayout_setAlignment2(QLayout* self, QLayout* l, int alignment);
void QLayout_setSizeConstraint(QLayout* self, int sizeConstraint);
int QLayout_sizeConstraint(const QLayout* self);
void QLayout_setMenuBar(QLayout* self, QWidget* w);
QWidget* QLayout_menuBar(const QLayout* self);
QWidget* QLayout_parentWidget(const QLayout* self);
void QLayout_invalidate(QLayout* self);
QRect* QLayout_geometry(const QLayout* self);
bool QLayout_activate(QLayout* self);
void QLayout_update(QLayout* self);
void QLayout_addWidget(QLayout* self, QWidget* w);
void QLayout_addItem(QLayout* self, QLayoutItem* param1);
void QLayout_removeWidget(QLayout* self, QWidget* w);
void QLayout_removeItem(QLayout* self, QLayoutItem* param1);
int QLayout_expandingDirections(const QLayout* self);
QSize* QLayout_minimumSize(const QLayout* self);
QSize* QLayout_maximumSize(const QLayout* self);
void QLayout_setGeometry(QLayout* self, QRect* geometry);
QLayoutItem* QLayout_itemAt(const QLayout* self, int index);
QLayoutItem* QLayout_takeAt(QLayout* self, int index);
int QLayout_indexOf(const QLayout* self, QWidget* param1);
int QLayout_indexOfWithQLayoutItem(const QLayout* self, QLayoutItem* param1);
int QLayout_count(const QLayout* self);
bool QLayout_isEmpty(const QLayout* self);
int QLayout_controlTypes(const QLayout* self);
QLayoutItem* QLayout_replaceWidget(QLayout* self, QWidget* from, QWidget* to, int options);
int QLayout_totalMinimumHeightForWidth(const QLayout* self, int w);
int QLayout_totalHeightForWidth(const QLayout* self, int w);
QSize* QLayout_totalMinimumSize(const QLayout* self);
QSize* QLayout_totalMaximumSize(const QLayout* self);
QSize* QLayout_totalSizeHint(const QLayout* self);
QLayout* QLayout_layout(QLayout* self);
void QLayout_setEnabled(QLayout* self, bool enabled);
bool QLayout_isEnabled(const QLayout* self);
QSize* QLayout_closestAcceptableSize(QWidget* w, QSize* s);
void QLayout_childEvent(QLayout* self, QChildEvent* e);
struct miqt_string QLayout_tr2(const char* s, const char* c);
struct miqt_string QLayout_tr3(const char* s, const char* c, int n);
bool QLayout_override_virtual_spacing(void* self, intptr_t slot);
int QLayout_virtualbase_spacing(const void* self);
bool QLayout_override_virtual_setSpacing(void* self, intptr_t slot);
void QLayout_virtualbase_setSpacing(void* self, int spacing);
bool QLayout_override_virtual_invalidate(void* self, intptr_t slot);
void QLayout_virtualbase_invalidate(void* self);
bool QLayout_override_virtual_geometry(void* self, intptr_t slot);
QRect* QLayout_virtualbase_geometry(const void* self);
bool QLayout_override_virtual_addItem(void* self, intptr_t slot);
void QLayout_virtualbase_addItem(void* self, QLayoutItem* param1);
bool QLayout_override_virtual_expandingDirections(void* self, intptr_t slot);
int QLayout_virtualbase_expandingDirections(const void* self);
bool QLayout_override_virtual_minimumSize(void* self, intptr_t slot);
QSize* QLayout_virtualbase_minimumSize(const void* self);
bool QLayout_override_virtual_maximumSize(void* self, intptr_t slot);
QSize* QLayout_virtualbase_maximumSize(const void* self);
bool QLayout_override_virtual_setGeometry(void* self, intptr_t slot);
void QLayout_virtualbase_setGeometry(void* self, QRect* geometry);
bool QLayout_override_virtual_itemAt(void* self, intptr_t slot);
QLayoutItem* QLayout_virtualbase_itemAt(const void* self, int index);
bool QLayout_override_virtual_takeAt(void* self, intptr_t slot);
QLayoutItem* QLayout_virtualbase_takeAt(void* self, int index);
bool QLayout_override_virtual_indexOf(void* self, intptr_t slot);
int QLayout_virtualbase_indexOf(const void* self, QWidget* param1);
bool QLayout_override_virtual_indexOfWithQLayoutItem(void* self, intptr_t slot);
int QLayout_virtualbase_indexOfWithQLayoutItem(const void* self, QLayoutItem* param1);
bool QLayout_override_virtual_count(void* self, intptr_t slot);
int QLayout_virtualbase_count(const void* self);
bool QLayout_override_virtual_isEmpty(void* self, intptr_t slot);
bool QLayout_virtualbase_isEmpty(const void* self);
bool QLayout_override_virtual_controlTypes(void* self, intptr_t slot);
int QLayout_virtualbase_controlTypes(const void* self);
bool QLayout_override_virtual_replaceWidget(void* self, intptr_t slot);
QLayoutItem* QLayout_virtualbase_replaceWidget(void* self, QWidget* from, QWidget* to, int options);
bool QLayout_override_virtual_layout(void* self, intptr_t slot);
QLayout* QLayout_virtualbase_layout(void* self);
bool QLayout_override_virtual_childEvent(void* self, intptr_t slot);
void QLayout_virtualbase_childEvent(void* self, QChildEvent* e);
bool QLayout_override_virtual_event(void* self, intptr_t slot);
bool QLayout_virtualbase_event(void* self, QEvent* event);
bool QLayout_override_virtual_eventFilter(void* self, intptr_t slot);
bool QLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QLayout_override_virtual_timerEvent(void* self, intptr_t slot);
void QLayout_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QLayout_override_virtual_customEvent(void* self, intptr_t slot);
void QLayout_virtualbase_customEvent(void* self, QEvent* event);
bool QLayout_override_virtual_connectNotify(void* self, intptr_t slot);
void QLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QLayout_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QLayout_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QLayout_virtualbase_sizeHint(const void* self);
bool QLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QLayout_virtualbase_hasHeightForWidth(const void* self);
bool QLayout_override_virtual_heightForWidth(void* self, intptr_t slot);
int QLayout_virtualbase_heightForWidth(const void* self, int param1);
bool QLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot);
int QLayout_virtualbase_minimumHeightForWidth(const void* self, int param1);
bool QLayout_override_virtual_widget(void* self, intptr_t slot);
QWidget* QLayout_virtualbase_widget(const void* self);
bool QLayout_override_virtual_spacerItem(void* self, intptr_t slot);
QSpacerItem* QLayout_virtualbase_spacerItem(void* self);
void QLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
void QLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
void QLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
bool QLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
QRect* QLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
QObject* QLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QLayout_delete(QLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
