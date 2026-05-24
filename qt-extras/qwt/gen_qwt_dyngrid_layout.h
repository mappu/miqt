#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_DYNGRID_LAYOUT_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_DYNGRID_LAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

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
class QTimerEvent;
class QWidget;
class QwtDynGridLayout;
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
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
typedef struct QwtDynGridLayout QwtDynGridLayout;
#endif

QwtDynGridLayout* QwtDynGridLayout_new(QWidget* param1);
QwtDynGridLayout* QwtDynGridLayout_new2();
QwtDynGridLayout* QwtDynGridLayout_new3(QWidget* param1, int margin);
QwtDynGridLayout* QwtDynGridLayout_new4(QWidget* param1, int margin, int spacing);
QwtDynGridLayout* QwtDynGridLayout_new5(int spacing);
void QwtDynGridLayout_virtbase(QwtDynGridLayout* src, QLayout** outptr_QLayout);
QMetaObject* QwtDynGridLayout_metaObject(const QwtDynGridLayout* self);
void* QwtDynGridLayout_metacast(QwtDynGridLayout* self, const char* param1);
struct miqt_string QwtDynGridLayout_tr(const char* s);
struct miqt_string QwtDynGridLayout_trUtf8(const char* s);
void QwtDynGridLayout_invalidate(QwtDynGridLayout* self);
void QwtDynGridLayout_setMaxColumns(QwtDynGridLayout* self, unsigned int maxColumns);
unsigned int QwtDynGridLayout_maxColumns(const QwtDynGridLayout* self);
unsigned int QwtDynGridLayout_numRows(const QwtDynGridLayout* self);
unsigned int QwtDynGridLayout_numColumns(const QwtDynGridLayout* self);
void QwtDynGridLayout_addItem(QwtDynGridLayout* self, QLayoutItem* param1);
QLayoutItem* QwtDynGridLayout_itemAt(const QwtDynGridLayout* self, int index);
QLayoutItem* QwtDynGridLayout_takeAt(QwtDynGridLayout* self, int index);
int QwtDynGridLayout_count(const QwtDynGridLayout* self);
void QwtDynGridLayout_setExpandingDirections(QwtDynGridLayout* self, int expandingDirections);
int QwtDynGridLayout_expandingDirections(const QwtDynGridLayout* self);
struct miqt_array /* of QRect* */  QwtDynGridLayout_layoutItems(const QwtDynGridLayout* self, QRect* param1, unsigned int numColumns);
int QwtDynGridLayout_maxItemWidth(const QwtDynGridLayout* self);
void QwtDynGridLayout_setGeometry(QwtDynGridLayout* self, QRect* rect);
bool QwtDynGridLayout_hasHeightForWidth(const QwtDynGridLayout* self);
int QwtDynGridLayout_heightForWidth(const QwtDynGridLayout* self, int param1);
QSize* QwtDynGridLayout_sizeHint(const QwtDynGridLayout* self);
bool QwtDynGridLayout_isEmpty(const QwtDynGridLayout* self);
unsigned int QwtDynGridLayout_itemCount(const QwtDynGridLayout* self);
unsigned int QwtDynGridLayout_columnsForWidth(const QwtDynGridLayout* self, int width);
struct miqt_string QwtDynGridLayout_tr2(const char* s, const char* c);
struct miqt_string QwtDynGridLayout_tr3(const char* s, const char* c, int n);
struct miqt_string QwtDynGridLayout_trUtf82(const char* s, const char* c);
struct miqt_string QwtDynGridLayout_trUtf83(const char* s, const char* c, int n);

bool QwtDynGridLayout_override_virtual_invalidate(void* self, intptr_t slot);
void QwtDynGridLayout_virtualbase_invalidate(void* self);
bool QwtDynGridLayout_override_virtual_addItem(void* self, intptr_t slot);
void QwtDynGridLayout_virtualbase_addItem(void* self, QLayoutItem* param1);
bool QwtDynGridLayout_override_virtual_itemAt(void* self, intptr_t slot);
QLayoutItem* QwtDynGridLayout_virtualbase_itemAt(const void* self, int index);
bool QwtDynGridLayout_override_virtual_takeAt(void* self, intptr_t slot);
QLayoutItem* QwtDynGridLayout_virtualbase_takeAt(void* self, int index);
bool QwtDynGridLayout_override_virtual_count(void* self, intptr_t slot);
int QwtDynGridLayout_virtualbase_count(const void* self);
bool QwtDynGridLayout_override_virtual_expandingDirections(void* self, intptr_t slot);
int QwtDynGridLayout_virtualbase_expandingDirections(const void* self);
bool QwtDynGridLayout_override_virtual_maxItemWidth(void* self, intptr_t slot);
int QwtDynGridLayout_virtualbase_maxItemWidth(const void* self);
bool QwtDynGridLayout_override_virtual_setGeometry(void* self, intptr_t slot);
void QwtDynGridLayout_virtualbase_setGeometry(void* self, QRect* rect);
bool QwtDynGridLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtDynGridLayout_virtualbase_hasHeightForWidth(const void* self);
bool QwtDynGridLayout_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtDynGridLayout_virtualbase_heightForWidth(const void* self, int param1);
bool QwtDynGridLayout_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtDynGridLayout_virtualbase_sizeHint(const void* self);
bool QwtDynGridLayout_override_virtual_isEmpty(void* self, intptr_t slot);
bool QwtDynGridLayout_virtualbase_isEmpty(const void* self);
bool QwtDynGridLayout_override_virtual_columnsForWidth(void* self, intptr_t slot);
unsigned int QwtDynGridLayout_virtualbase_columnsForWidth(const void* self, int width);
bool QwtDynGridLayout_override_virtual_geometry(void* self, intptr_t slot);
QRect* QwtDynGridLayout_virtualbase_geometry(const void* self);
bool QwtDynGridLayout_override_virtual_minimumSize(void* self, intptr_t slot);
QSize* QwtDynGridLayout_virtualbase_minimumSize(const void* self);
bool QwtDynGridLayout_override_virtual_maximumSize(void* self, intptr_t slot);
QSize* QwtDynGridLayout_virtualbase_maximumSize(const void* self);
bool QwtDynGridLayout_override_virtual_indexOf(void* self, intptr_t slot);
int QwtDynGridLayout_virtualbase_indexOf(const void* self, QWidget* param1);
bool QwtDynGridLayout_override_virtual_controlTypes(void* self, intptr_t slot);
int QwtDynGridLayout_virtualbase_controlTypes(const void* self);
bool QwtDynGridLayout_override_virtual_layout(void* self, intptr_t slot);
QLayout* QwtDynGridLayout_virtualbase_layout(void* self);
bool QwtDynGridLayout_override_virtual_childEvent(void* self, intptr_t slot);
void QwtDynGridLayout_virtualbase_childEvent(void* self, QChildEvent* e);
bool QwtDynGridLayout_override_virtual_event(void* self, intptr_t slot);
bool QwtDynGridLayout_virtualbase_event(void* self, QEvent* event);
bool QwtDynGridLayout_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtDynGridLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QwtDynGridLayout_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtDynGridLayout_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtDynGridLayout_override_virtual_customEvent(void* self, intptr_t slot);
void QwtDynGridLayout_virtualbase_customEvent(void* self, QEvent* event);
bool QwtDynGridLayout_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtDynGridLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtDynGridLayout_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtDynGridLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QwtDynGridLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot);
int QwtDynGridLayout_virtualbase_minimumHeightForWidth(const void* self, int param1);
bool QwtDynGridLayout_override_virtual_widget(void* self, intptr_t slot);
QWidget* QwtDynGridLayout_virtualbase_widget(void* self);
bool QwtDynGridLayout_override_virtual_spacerItem(void* self, intptr_t slot);
QSpacerItem* QwtDynGridLayout_virtualbase_spacerItem(void* self);

void QwtDynGridLayout_protectedbase_layoutGrid(bool* _dynamic_cast_ok, const void* self, unsigned int numColumns, struct miqt_array /* of int */  rowHeight, struct miqt_array /* of int */  colWidth);
void QwtDynGridLayout_protectedbase_stretchGrid(bool* _dynamic_cast_ok, const void* self, QRect* rect, unsigned int numColumns, struct miqt_array /* of int */  rowHeight, struct miqt_array /* of int */  colWidth);
void QwtDynGridLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
void QwtDynGridLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
void QwtDynGridLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
bool QwtDynGridLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
QRect* QwtDynGridLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
QObject* QwtDynGridLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtDynGridLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtDynGridLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtDynGridLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtDynGridLayout_delete(QwtDynGridLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
