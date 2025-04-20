#pragma once
#ifndef MIQT_QT6_PDF_GEN_QPDFVIEW_H
#define MIQT_QT6_PDF_GEN_QPDFVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractScrollArea;
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEnterEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMargins;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPdfDocument;
class QPdfPageNavigator;
class QPdfView;
class QPoint;
class QResizeEvent;
class QShowEvent;
class QSize;
class QStyleOptionFrame;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPdfDocument QPdfDocument;
typedef struct QPdfPageNavigator QPdfPageNavigator;
typedef struct QPdfView QPdfView;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QPdfView* QPdfView_new(QWidget* parent);
QPdfView* QPdfView_new2();
void QPdfView_virtbase(QPdfView* src, QAbstractScrollArea** outptr_QAbstractScrollArea);
QMetaObject* QPdfView_metaObject(const QPdfView* self);
void* QPdfView_metacast(QPdfView* self, const char* param1);
struct miqt_string QPdfView_tr(const char* s);
void QPdfView_setDocument(QPdfView* self, QPdfDocument* document);
QPdfDocument* QPdfView_document(const QPdfView* self);
QPdfPageNavigator* QPdfView_pageNavigator(const QPdfView* self);
int QPdfView_pageMode(const QPdfView* self);
int QPdfView_zoomMode(const QPdfView* self);
double QPdfView_zoomFactor(const QPdfView* self);
int QPdfView_pageSpacing(const QPdfView* self);
void QPdfView_setPageSpacing(QPdfView* self, int spacing);
QMargins* QPdfView_documentMargins(const QPdfView* self);
void QPdfView_setDocumentMargins(QPdfView* self, QMargins* margins);
void QPdfView_setPageMode(QPdfView* self, int mode);
void QPdfView_setZoomMode(QPdfView* self, int mode);
void QPdfView_setZoomFactor(QPdfView* self, double factor);
void QPdfView_documentChanged(QPdfView* self, QPdfDocument* document);
void QPdfView_connect_documentChanged(QPdfView* self, intptr_t slot);
void QPdfView_pageModeChanged(QPdfView* self, int pageMode);
void QPdfView_connect_pageModeChanged(QPdfView* self, intptr_t slot);
void QPdfView_zoomModeChanged(QPdfView* self, int zoomMode);
void QPdfView_connect_zoomModeChanged(QPdfView* self, intptr_t slot);
void QPdfView_zoomFactorChanged(QPdfView* self, double zoomFactor);
void QPdfView_connect_zoomFactorChanged(QPdfView* self, intptr_t slot);
void QPdfView_pageSpacingChanged(QPdfView* self, int pageSpacing);
void QPdfView_connect_pageSpacingChanged(QPdfView* self, intptr_t slot);
void QPdfView_documentMarginsChanged(QPdfView* self, QMargins* documentMargins);
void QPdfView_connect_documentMarginsChanged(QPdfView* self, intptr_t slot);
void QPdfView_paintEvent(QPdfView* self, QPaintEvent* event);
void QPdfView_resizeEvent(QPdfView* self, QResizeEvent* event);
void QPdfView_scrollContentsBy(QPdfView* self, int dx, int dy);
struct miqt_string QPdfView_tr2(const char* s, const char* c);
struct miqt_string QPdfView_tr3(const char* s, const char* c, int n);
bool QPdfView_override_virtual_paintEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QPdfView_override_virtual_resizeEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QPdfView_override_virtual_scrollContentsBy(void* self, intptr_t slot);
void QPdfView_virtualbase_scrollContentsBy(void* self, int dx, int dy);
bool QPdfView_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QPdfView_virtualbase_minimumSizeHint(const void* self);
bool QPdfView_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QPdfView_virtualbase_sizeHint(const void* self);
bool QPdfView_override_virtual_setupViewport(void* self, intptr_t slot);
void QPdfView_virtualbase_setupViewport(void* self, QWidget* viewport);
bool QPdfView_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPdfView_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QPdfView_override_virtual_event(void* self, intptr_t slot);
bool QPdfView_virtualbase_event(void* self, QEvent* param1);
bool QPdfView_override_virtual_viewportEvent(void* self, intptr_t slot);
bool QPdfView_virtualbase_viewportEvent(void* self, QEvent* param1);
bool QPdfView_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QPdfView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);
bool QPdfView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1);
bool QPdfView_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
bool QPdfView_override_virtual_wheelEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
bool QPdfView_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
bool QPdfView_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1);
bool QPdfView_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* param1);
bool QPdfView_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* param1);
bool QPdfView_override_virtual_dropEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_dropEvent(void* self, QDropEvent* param1);
bool QPdfView_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QPdfView_override_virtual_viewportSizeHint(void* self, intptr_t slot);
QSize* QPdfView_virtualbase_viewportSizeHint(const void* self);
bool QPdfView_override_virtual_changeEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_changeEvent(void* self, QEvent* param1);
bool QPdfView_override_virtual_initStyleOption(void* self, intptr_t slot);
void QPdfView_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);
bool QPdfView_override_virtual_devType(void* self, intptr_t slot);
int QPdfView_virtualbase_devType(const void* self);
bool QPdfView_override_virtual_setVisible(void* self, intptr_t slot);
void QPdfView_virtualbase_setVisible(void* self, bool visible);
bool QPdfView_override_virtual_heightForWidth(void* self, intptr_t slot);
int QPdfView_virtualbase_heightForWidth(const void* self, int param1);
bool QPdfView_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QPdfView_virtualbase_hasHeightForWidth(const void* self);
bool QPdfView_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QPdfView_virtualbase_paintEngine(const void* self);
bool QPdfView_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QPdfView_override_virtual_focusInEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QPdfView_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QPdfView_override_virtual_enterEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QPdfView_override_virtual_leaveEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_leaveEvent(void* self, QEvent* event);
bool QPdfView_override_virtual_moveEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QPdfView_override_virtual_closeEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QPdfView_override_virtual_tabletEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QPdfView_override_virtual_actionEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QPdfView_override_virtual_showEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_showEvent(void* self, QShowEvent* event);
bool QPdfView_override_virtual_hideEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QPdfView_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QPdfView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QPdfView_override_virtual_metric(void* self, intptr_t slot);
int QPdfView_virtualbase_metric(const void* self, int param1);
bool QPdfView_override_virtual_initPainter(void* self, intptr_t slot);
void QPdfView_virtualbase_initPainter(const void* self, QPainter* painter);
bool QPdfView_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QPdfView_virtualbase_redirected(const void* self, QPoint* offset);
bool QPdfView_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QPdfView_virtualbase_sharedPainter(const void* self);
bool QPdfView_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QPdfView_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QPdfView_virtualbase_inputMethodQuery(const void* self, int param1);
bool QPdfView_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QPdfView_virtualbase_focusNextPrevChild(void* self, bool next);
bool QPdfView_override_virtual_timerEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPdfView_override_virtual_childEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPdfView_override_virtual_customEvent(void* self, intptr_t slot);
void QPdfView_virtualbase_customEvent(void* self, QEvent* event);
bool QPdfView_override_virtual_connectNotify(void* self, intptr_t slot);
void QPdfView_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPdfView_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPdfView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QPdfView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
QMargins* QPdfView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
void QPdfView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QPdfView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QPdfView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QPdfView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QPdfView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QPdfView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QPdfView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPdfView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPdfView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPdfView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QPdfView_delete(QPdfView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
