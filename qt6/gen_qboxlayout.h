#pragma once
#ifndef MIQT_QT6_GEN_QBOXLAYOUT_H
#define MIQT_QT6_GEN_QBOXLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBoxLayout;
class QChildEvent;
class QEvent;
class QHBoxLayout;
class QLayout;
class QLayoutItem;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRect;
class QSize;
class QSpacerItem;
class QTimerEvent;
class QVBoxLayout;
class QWidget;
#else
typedef struct QBoxLayout QBoxLayout;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHBoxLayout QHBoxLayout;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSpacerItem QSpacerItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVBoxLayout QVBoxLayout;
typedef struct QWidget QWidget;
#endif

QBoxLayout* QBoxLayout_new(int param1);
QBoxLayout* QBoxLayout_new2(int param1, QWidget* parent);
void QBoxLayout_virtbase(QBoxLayout* src, QLayout** outptr_QLayout);
QMetaObject* QBoxLayout_metaObject(const QBoxLayout* self);
void* QBoxLayout_metacast(QBoxLayout* self, const char* param1);
struct miqt_string QBoxLayout_tr(const char* s);
int QBoxLayout_direction(const QBoxLayout* self);
void QBoxLayout_setDirection(QBoxLayout* self, int direction);
void QBoxLayout_addSpacing(QBoxLayout* self, int size);
void QBoxLayout_addStretch(QBoxLayout* self);
void QBoxLayout_addSpacerItem(QBoxLayout* self, QSpacerItem* spacerItem);
void QBoxLayout_addWidget(QBoxLayout* self, QWidget* param1);
void QBoxLayout_addLayout(QBoxLayout* self, QLayout* layout);
void QBoxLayout_addStrut(QBoxLayout* self, int param1);
void QBoxLayout_addItem(QBoxLayout* self, QLayoutItem* param1);
void QBoxLayout_insertSpacing(QBoxLayout* self, int index, int size);
void QBoxLayout_insertStretch(QBoxLayout* self, int index);
void QBoxLayout_insertSpacerItem(QBoxLayout* self, int index, QSpacerItem* spacerItem);
void QBoxLayout_insertWidget(QBoxLayout* self, int index, QWidget* widget);
void QBoxLayout_insertLayout(QBoxLayout* self, int index, QLayout* layout);
void QBoxLayout_insertItem(QBoxLayout* self, int index, QLayoutItem* param2);
int QBoxLayout_spacing(const QBoxLayout* self);
void QBoxLayout_setSpacing(QBoxLayout* self, int spacing);
bool QBoxLayout_setStretchFactor(QBoxLayout* self, QWidget* w, int stretch);
bool QBoxLayout_setStretchFactor2(QBoxLayout* self, QLayout* l, int stretch);
void QBoxLayout_setStretch(QBoxLayout* self, int index, int stretch);
int QBoxLayout_stretch(const QBoxLayout* self, int index);
QSize* QBoxLayout_sizeHint(const QBoxLayout* self);
QSize* QBoxLayout_minimumSize(const QBoxLayout* self);
QSize* QBoxLayout_maximumSize(const QBoxLayout* self);
bool QBoxLayout_hasHeightForWidth(const QBoxLayout* self);
int QBoxLayout_heightForWidth(const QBoxLayout* self, int param1);
int QBoxLayout_minimumHeightForWidth(const QBoxLayout* self, int param1);
int QBoxLayout_expandingDirections(const QBoxLayout* self);
void QBoxLayout_invalidate(QBoxLayout* self);
QLayoutItem* QBoxLayout_itemAt(const QBoxLayout* self, int param1);
QLayoutItem* QBoxLayout_takeAt(QBoxLayout* self, int param1);
int QBoxLayout_count(const QBoxLayout* self);
void QBoxLayout_setGeometry(QBoxLayout* self, QRect* geometry);
struct miqt_string QBoxLayout_tr2(const char* s, const char* c);
struct miqt_string QBoxLayout_tr3(const char* s, const char* c, int n);
void QBoxLayout_addStretchWithStretch(QBoxLayout* self, int stretch);
void QBoxLayout_addWidget2(QBoxLayout* self, QWidget* param1, int stretch);
void QBoxLayout_addWidget3(QBoxLayout* self, QWidget* param1, int stretch, int alignment);
void QBoxLayout_addLayout2(QBoxLayout* self, QLayout* layout, int stretch);
void QBoxLayout_insertStretch2(QBoxLayout* self, int index, int stretch);
void QBoxLayout_insertWidget2(QBoxLayout* self, int index, QWidget* widget, int stretch);
void QBoxLayout_insertWidget3(QBoxLayout* self, int index, QWidget* widget, int stretch, int alignment);
void QBoxLayout_insertLayout2(QBoxLayout* self, int index, QLayout* layout, int stretch);

bool QBoxLayout_override_virtual_addItem(void* self, intptr_t slot);
void QBoxLayout_virtualbase_addItem(void* self, QLayoutItem* param1);
bool QBoxLayout_override_virtual_spacing(void* self, intptr_t slot);
int QBoxLayout_virtualbase_spacing(const void* self);
bool QBoxLayout_override_virtual_setSpacing(void* self, intptr_t slot);
void QBoxLayout_virtualbase_setSpacing(void* self, int spacing);
bool QBoxLayout_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QBoxLayout_virtualbase_sizeHint(const void* self);
bool QBoxLayout_override_virtual_minimumSize(void* self, intptr_t slot);
QSize* QBoxLayout_virtualbase_minimumSize(const void* self);
bool QBoxLayout_override_virtual_maximumSize(void* self, intptr_t slot);
QSize* QBoxLayout_virtualbase_maximumSize(const void* self);
bool QBoxLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QBoxLayout_virtualbase_hasHeightForWidth(const void* self);
bool QBoxLayout_override_virtual_heightForWidth(void* self, intptr_t slot);
int QBoxLayout_virtualbase_heightForWidth(const void* self, int param1);
bool QBoxLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot);
int QBoxLayout_virtualbase_minimumHeightForWidth(const void* self, int param1);
bool QBoxLayout_override_virtual_expandingDirections(void* self, intptr_t slot);
int QBoxLayout_virtualbase_expandingDirections(const void* self);
bool QBoxLayout_override_virtual_invalidate(void* self, intptr_t slot);
void QBoxLayout_virtualbase_invalidate(void* self);
bool QBoxLayout_override_virtual_itemAt(void* self, intptr_t slot);
QLayoutItem* QBoxLayout_virtualbase_itemAt(const void* self, int param1);
bool QBoxLayout_override_virtual_takeAt(void* self, intptr_t slot);
QLayoutItem* QBoxLayout_virtualbase_takeAt(void* self, int param1);
bool QBoxLayout_override_virtual_count(void* self, intptr_t slot);
int QBoxLayout_virtualbase_count(const void* self);
bool QBoxLayout_override_virtual_setGeometry(void* self, intptr_t slot);
void QBoxLayout_virtualbase_setGeometry(void* self, QRect* geometry);
bool QBoxLayout_override_virtual_geometry(void* self, intptr_t slot);
QRect* QBoxLayout_virtualbase_geometry(const void* self);
bool QBoxLayout_override_virtual_indexOf(void* self, intptr_t slot);
int QBoxLayout_virtualbase_indexOf(const void* self, QWidget* param1);
bool QBoxLayout_override_virtual_isEmpty(void* self, intptr_t slot);
bool QBoxLayout_virtualbase_isEmpty(const void* self);
bool QBoxLayout_override_virtual_controlTypes(void* self, intptr_t slot);
int QBoxLayout_virtualbase_controlTypes(const void* self);
bool QBoxLayout_override_virtual_replaceWidget(void* self, intptr_t slot);
QLayoutItem* QBoxLayout_virtualbase_replaceWidget(void* self, QWidget* from, QWidget* to, int options);
bool QBoxLayout_override_virtual_layout(void* self, intptr_t slot);
QLayout* QBoxLayout_virtualbase_layout(void* self);
bool QBoxLayout_override_virtual_childEvent(void* self, intptr_t slot);
void QBoxLayout_virtualbase_childEvent(void* self, QChildEvent* e);
bool QBoxLayout_override_virtual_event(void* self, intptr_t slot);
bool QBoxLayout_virtualbase_event(void* self, QEvent* event);
bool QBoxLayout_override_virtual_eventFilter(void* self, intptr_t slot);
bool QBoxLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QBoxLayout_override_virtual_timerEvent(void* self, intptr_t slot);
void QBoxLayout_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QBoxLayout_override_virtual_customEvent(void* self, intptr_t slot);
void QBoxLayout_virtualbase_customEvent(void* self, QEvent* event);
bool QBoxLayout_override_virtual_connectNotify(void* self, intptr_t slot);
void QBoxLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QBoxLayout_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QBoxLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QBoxLayout_override_virtual_widget(void* self, intptr_t slot);
QWidget* QBoxLayout_virtualbase_widget(const void* self);
bool QBoxLayout_override_virtual_spacerItem(void* self, intptr_t slot);
QSpacerItem* QBoxLayout_virtualbase_spacerItem(void* self);

void QBoxLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
void QBoxLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
void QBoxLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
bool QBoxLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
QRect* QBoxLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
QObject* QBoxLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QBoxLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QBoxLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QBoxLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QBoxLayout_delete(QBoxLayout* self);

QHBoxLayout* QHBoxLayout_new(QWidget* parent);
QHBoxLayout* QHBoxLayout_new2();
void QHBoxLayout_virtbase(QHBoxLayout* src, QBoxLayout** outptr_QBoxLayout);
QMetaObject* QHBoxLayout_metaObject(const QHBoxLayout* self);
void* QHBoxLayout_metacast(QHBoxLayout* self, const char* param1);
struct miqt_string QHBoxLayout_tr(const char* s);
struct miqt_string QHBoxLayout_tr2(const char* s, const char* c);
struct miqt_string QHBoxLayout_tr3(const char* s, const char* c, int n);

bool QHBoxLayout_override_virtual_addItem(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_addItem(void* self, QLayoutItem* param1);
bool QHBoxLayout_override_virtual_spacing(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_spacing(const void* self);
bool QHBoxLayout_override_virtual_setSpacing(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_setSpacing(void* self, int spacing);
bool QHBoxLayout_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QHBoxLayout_virtualbase_sizeHint(const void* self);
bool QHBoxLayout_override_virtual_minimumSize(void* self, intptr_t slot);
QSize* QHBoxLayout_virtualbase_minimumSize(const void* self);
bool QHBoxLayout_override_virtual_maximumSize(void* self, intptr_t slot);
QSize* QHBoxLayout_virtualbase_maximumSize(const void* self);
bool QHBoxLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QHBoxLayout_virtualbase_hasHeightForWidth(const void* self);
bool QHBoxLayout_override_virtual_heightForWidth(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_heightForWidth(const void* self, int param1);
bool QHBoxLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_minimumHeightForWidth(const void* self, int param1);
bool QHBoxLayout_override_virtual_expandingDirections(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_expandingDirections(const void* self);
bool QHBoxLayout_override_virtual_invalidate(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_invalidate(void* self);
bool QHBoxLayout_override_virtual_itemAt(void* self, intptr_t slot);
QLayoutItem* QHBoxLayout_virtualbase_itemAt(const void* self, int param1);
bool QHBoxLayout_override_virtual_takeAt(void* self, intptr_t slot);
QLayoutItem* QHBoxLayout_virtualbase_takeAt(void* self, int param1);
bool QHBoxLayout_override_virtual_count(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_count(const void* self);
bool QHBoxLayout_override_virtual_setGeometry(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_setGeometry(void* self, QRect* geometry);
bool QHBoxLayout_override_virtual_geometry(void* self, intptr_t slot);
QRect* QHBoxLayout_virtualbase_geometry(const void* self);
bool QHBoxLayout_override_virtual_indexOf(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_indexOf(const void* self, QWidget* param1);
bool QHBoxLayout_override_virtual_isEmpty(void* self, intptr_t slot);
bool QHBoxLayout_virtualbase_isEmpty(const void* self);
bool QHBoxLayout_override_virtual_controlTypes(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_controlTypes(const void* self);
bool QHBoxLayout_override_virtual_replaceWidget(void* self, intptr_t slot);
QLayoutItem* QHBoxLayout_virtualbase_replaceWidget(void* self, QWidget* from, QWidget* to, int options);
bool QHBoxLayout_override_virtual_layout(void* self, intptr_t slot);
QLayout* QHBoxLayout_virtualbase_layout(void* self);
bool QHBoxLayout_override_virtual_childEvent(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_childEvent(void* self, QChildEvent* e);
bool QHBoxLayout_override_virtual_event(void* self, intptr_t slot);
bool QHBoxLayout_virtualbase_event(void* self, QEvent* event);
bool QHBoxLayout_override_virtual_eventFilter(void* self, intptr_t slot);
bool QHBoxLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QHBoxLayout_override_virtual_timerEvent(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QHBoxLayout_override_virtual_customEvent(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_customEvent(void* self, QEvent* event);
bool QHBoxLayout_override_virtual_connectNotify(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QHBoxLayout_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QHBoxLayout_override_virtual_widget(void* self, intptr_t slot);
QWidget* QHBoxLayout_virtualbase_widget(const void* self);
bool QHBoxLayout_override_virtual_spacerItem(void* self, intptr_t slot);
QSpacerItem* QHBoxLayout_virtualbase_spacerItem(void* self);

void QHBoxLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
void QHBoxLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
void QHBoxLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
bool QHBoxLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
QRect* QHBoxLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
QObject* QHBoxLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QHBoxLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QHBoxLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QHBoxLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QHBoxLayout_delete(QHBoxLayout* self);

QVBoxLayout* QVBoxLayout_new(QWidget* parent);
QVBoxLayout* QVBoxLayout_new2();
void QVBoxLayout_virtbase(QVBoxLayout* src, QBoxLayout** outptr_QBoxLayout);
QMetaObject* QVBoxLayout_metaObject(const QVBoxLayout* self);
void* QVBoxLayout_metacast(QVBoxLayout* self, const char* param1);
struct miqt_string QVBoxLayout_tr(const char* s);
struct miqt_string QVBoxLayout_tr2(const char* s, const char* c);
struct miqt_string QVBoxLayout_tr3(const char* s, const char* c, int n);

bool QVBoxLayout_override_virtual_addItem(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_addItem(void* self, QLayoutItem* param1);
bool QVBoxLayout_override_virtual_spacing(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_spacing(const void* self);
bool QVBoxLayout_override_virtual_setSpacing(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_setSpacing(void* self, int spacing);
bool QVBoxLayout_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QVBoxLayout_virtualbase_sizeHint(const void* self);
bool QVBoxLayout_override_virtual_minimumSize(void* self, intptr_t slot);
QSize* QVBoxLayout_virtualbase_minimumSize(const void* self);
bool QVBoxLayout_override_virtual_maximumSize(void* self, intptr_t slot);
QSize* QVBoxLayout_virtualbase_maximumSize(const void* self);
bool QVBoxLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QVBoxLayout_virtualbase_hasHeightForWidth(const void* self);
bool QVBoxLayout_override_virtual_heightForWidth(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_heightForWidth(const void* self, int param1);
bool QVBoxLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_minimumHeightForWidth(const void* self, int param1);
bool QVBoxLayout_override_virtual_expandingDirections(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_expandingDirections(const void* self);
bool QVBoxLayout_override_virtual_invalidate(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_invalidate(void* self);
bool QVBoxLayout_override_virtual_itemAt(void* self, intptr_t slot);
QLayoutItem* QVBoxLayout_virtualbase_itemAt(const void* self, int param1);
bool QVBoxLayout_override_virtual_takeAt(void* self, intptr_t slot);
QLayoutItem* QVBoxLayout_virtualbase_takeAt(void* self, int param1);
bool QVBoxLayout_override_virtual_count(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_count(const void* self);
bool QVBoxLayout_override_virtual_setGeometry(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_setGeometry(void* self, QRect* geometry);
bool QVBoxLayout_override_virtual_geometry(void* self, intptr_t slot);
QRect* QVBoxLayout_virtualbase_geometry(const void* self);
bool QVBoxLayout_override_virtual_indexOf(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_indexOf(const void* self, QWidget* param1);
bool QVBoxLayout_override_virtual_isEmpty(void* self, intptr_t slot);
bool QVBoxLayout_virtualbase_isEmpty(const void* self);
bool QVBoxLayout_override_virtual_controlTypes(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_controlTypes(const void* self);
bool QVBoxLayout_override_virtual_replaceWidget(void* self, intptr_t slot);
QLayoutItem* QVBoxLayout_virtualbase_replaceWidget(void* self, QWidget* from, QWidget* to, int options);
bool QVBoxLayout_override_virtual_layout(void* self, intptr_t slot);
QLayout* QVBoxLayout_virtualbase_layout(void* self);
bool QVBoxLayout_override_virtual_childEvent(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_childEvent(void* self, QChildEvent* e);
bool QVBoxLayout_override_virtual_event(void* self, intptr_t slot);
bool QVBoxLayout_virtualbase_event(void* self, QEvent* event);
bool QVBoxLayout_override_virtual_eventFilter(void* self, intptr_t slot);
bool QVBoxLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QVBoxLayout_override_virtual_timerEvent(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QVBoxLayout_override_virtual_customEvent(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_customEvent(void* self, QEvent* event);
bool QVBoxLayout_override_virtual_connectNotify(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QVBoxLayout_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QVBoxLayout_override_virtual_widget(void* self, intptr_t slot);
QWidget* QVBoxLayout_virtualbase_widget(const void* self);
bool QVBoxLayout_override_virtual_spacerItem(void* self, intptr_t slot);
QSpacerItem* QVBoxLayout_virtualbase_spacerItem(void* self);

void QVBoxLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
void QVBoxLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
void QVBoxLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
bool QVBoxLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
QRect* QVBoxLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
QObject* QVBoxLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QVBoxLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QVBoxLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QVBoxLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QVBoxLayout_delete(QVBoxLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
