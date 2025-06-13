#pragma once
#ifndef MIQT_QT_PRINTSUPPORT_GEN_QPRINTPREVIEWWIDGET_H
#define MIQT_QT_PRINTSUPPORT_GEN_QPRINTPREVIEWWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QPrintPreviewWidget;
class QPrinter;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QPrintPreviewWidget QPrintPreviewWidget;
typedef struct QPrinter QPrinter;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QPrintPreviewWidget* QPrintPreviewWidget_new(QWidget* parent);
QPrintPreviewWidget* QPrintPreviewWidget_new2(QPrinter* printer);
QPrintPreviewWidget* QPrintPreviewWidget_new3();
QPrintPreviewWidget* QPrintPreviewWidget_new4(QPrinter* printer, QWidget* parent);
QPrintPreviewWidget* QPrintPreviewWidget_new5(QPrinter* printer, QWidget* parent, int flags);
QPrintPreviewWidget* QPrintPreviewWidget_new6(QWidget* parent, int flags);
void QPrintPreviewWidget_virtbase(QPrintPreviewWidget* src, QWidget** outptr_QWidget);
QMetaObject* QPrintPreviewWidget_metaObject(const QPrintPreviewWidget* self);
void* QPrintPreviewWidget_metacast(QPrintPreviewWidget* self, const char* param1);
struct miqt_string QPrintPreviewWidget_tr(const char* s);
struct miqt_string QPrintPreviewWidget_trUtf8(const char* s);
double QPrintPreviewWidget_zoomFactor(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_orientation(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_viewMode(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_zoomMode(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_currentPage(const QPrintPreviewWidget* self);
int QPrintPreviewWidget_pageCount(const QPrintPreviewWidget* self);
void QPrintPreviewWidget_setVisible(QPrintPreviewWidget* self, bool visible);
void QPrintPreviewWidget_print(QPrintPreviewWidget* self);
void QPrintPreviewWidget_zoomIn(QPrintPreviewWidget* self);
void QPrintPreviewWidget_zoomOut(QPrintPreviewWidget* self);
void QPrintPreviewWidget_setZoomFactor(QPrintPreviewWidget* self, double zoomFactor);
void QPrintPreviewWidget_setOrientation(QPrintPreviewWidget* self, int orientation);
void QPrintPreviewWidget_setViewMode(QPrintPreviewWidget* self, int viewMode);
void QPrintPreviewWidget_setZoomMode(QPrintPreviewWidget* self, int zoomMode);
void QPrintPreviewWidget_setCurrentPage(QPrintPreviewWidget* self, int pageNumber);
void QPrintPreviewWidget_fitToWidth(QPrintPreviewWidget* self);
void QPrintPreviewWidget_fitInView(QPrintPreviewWidget* self);
void QPrintPreviewWidget_setLandscapeOrientation(QPrintPreviewWidget* self);
void QPrintPreviewWidget_setPortraitOrientation(QPrintPreviewWidget* self);
void QPrintPreviewWidget_setSinglePageViewMode(QPrintPreviewWidget* self);
void QPrintPreviewWidget_setFacingPagesViewMode(QPrintPreviewWidget* self);
void QPrintPreviewWidget_setAllPagesViewMode(QPrintPreviewWidget* self);
void QPrintPreviewWidget_updatePreview(QPrintPreviewWidget* self);
void QPrintPreviewWidget_paintRequested(QPrintPreviewWidget* self, QPrinter* printer);
void QPrintPreviewWidget_connect_paintRequested(QPrintPreviewWidget* self, intptr_t slot);
void QPrintPreviewWidget_previewChanged(QPrintPreviewWidget* self);
void QPrintPreviewWidget_connect_previewChanged(QPrintPreviewWidget* self, intptr_t slot);
struct miqt_string QPrintPreviewWidget_tr2(const char* s, const char* c);
struct miqt_string QPrintPreviewWidget_tr3(const char* s, const char* c, int n);
struct miqt_string QPrintPreviewWidget_trUtf82(const char* s, const char* c);
struct miqt_string QPrintPreviewWidget_trUtf83(const char* s, const char* c, int n);
void QPrintPreviewWidget_zoomInWithZoom(QPrintPreviewWidget* self, double zoom);
void QPrintPreviewWidget_zoomOutWithZoom(QPrintPreviewWidget* self, double zoom);

bool QPrintPreviewWidget_override_virtual_setVisible(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_setVisible(void* self, bool visible);
bool QPrintPreviewWidget_override_virtual_devType(void* self, intptr_t slot);
int QPrintPreviewWidget_virtualbase_devType(const void* self);
bool QPrintPreviewWidget_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QPrintPreviewWidget_virtualbase_sizeHint(const void* self);
bool QPrintPreviewWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QPrintPreviewWidget_virtualbase_minimumSizeHint(const void* self);
bool QPrintPreviewWidget_override_virtual_heightForWidth(void* self, intptr_t slot);
int QPrintPreviewWidget_virtualbase_heightForWidth(const void* self, int param1);
bool QPrintPreviewWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QPrintPreviewWidget_virtualbase_hasHeightForWidth(const void* self);
bool QPrintPreviewWidget_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QPrintPreviewWidget_virtualbase_paintEngine(const void* self);
bool QPrintPreviewWidget_override_virtual_event(void* self, intptr_t slot);
bool QPrintPreviewWidget_virtualbase_event(void* self, QEvent* event);
bool QPrintPreviewWidget_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QPrintPreviewWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QPrintPreviewWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QPrintPreviewWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QPrintPreviewWidget_override_virtual_wheelEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QPrintPreviewWidget_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QPrintPreviewWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QPrintPreviewWidget_override_virtual_focusInEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QPrintPreviewWidget_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QPrintPreviewWidget_override_virtual_enterEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_enterEvent(void* self, QEvent* event);
bool QPrintPreviewWidget_override_virtual_leaveEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_leaveEvent(void* self, QEvent* event);
bool QPrintPreviewWidget_override_virtual_paintEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QPrintPreviewWidget_override_virtual_moveEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QPrintPreviewWidget_override_virtual_resizeEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QPrintPreviewWidget_override_virtual_closeEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QPrintPreviewWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QPrintPreviewWidget_override_virtual_tabletEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QPrintPreviewWidget_override_virtual_actionEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QPrintPreviewWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QPrintPreviewWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QPrintPreviewWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QPrintPreviewWidget_override_virtual_dropEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QPrintPreviewWidget_override_virtual_showEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_showEvent(void* self, QShowEvent* event);
bool QPrintPreviewWidget_override_virtual_hideEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QPrintPreviewWidget_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QPrintPreviewWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QPrintPreviewWidget_override_virtual_changeEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_changeEvent(void* self, QEvent* param1);
bool QPrintPreviewWidget_override_virtual_metric(void* self, intptr_t slot);
int QPrintPreviewWidget_virtualbase_metric(const void* self, int param1);
bool QPrintPreviewWidget_override_virtual_initPainter(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_initPainter(const void* self, QPainter* painter);
bool QPrintPreviewWidget_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QPrintPreviewWidget_virtualbase_redirected(const void* self, QPoint* offset);
bool QPrintPreviewWidget_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QPrintPreviewWidget_virtualbase_sharedPainter(const void* self);
bool QPrintPreviewWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QPrintPreviewWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QPrintPreviewWidget_virtualbase_inputMethodQuery(const void* self, int param1);
bool QPrintPreviewWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QPrintPreviewWidget_virtualbase_focusNextPrevChild(void* self, bool next);
bool QPrintPreviewWidget_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPrintPreviewWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPrintPreviewWidget_override_virtual_timerEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPrintPreviewWidget_override_virtual_childEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPrintPreviewWidget_override_virtual_customEvent(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_customEvent(void* self, QEvent* event);
bool QPrintPreviewWidget_override_virtual_connectNotify(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPrintPreviewWidget_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPrintPreviewWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QPrintPreviewWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QPrintPreviewWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QPrintPreviewWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QPrintPreviewWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QPrintPreviewWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QPrintPreviewWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPrintPreviewWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPrintPreviewWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPrintPreviewWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QPrintPreviewWidget_delete(QPrintPreviewWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
