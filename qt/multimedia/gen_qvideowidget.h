#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QVIDEOWIDGET_H
#define MIQT_QT_MULTIMEDIA_GEN_QVIDEOWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractVideoSurface;
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
class QMediaBindableInterface;
class QMediaObject;
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
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QVideoWidget;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractVideoSurface QAbstractVideoSurface;
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
typedef struct QMediaBindableInterface QMediaBindableInterface;
typedef struct QMediaObject QMediaObject;
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
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVideoWidget QVideoWidget;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QVideoWidget* QVideoWidget_new(QWidget* parent);
QVideoWidget* QVideoWidget_new2();
void QVideoWidget_virtbase(QVideoWidget* src, QWidget** outptr_QWidget, QMediaBindableInterface** outptr_QMediaBindableInterface);
QMetaObject* QVideoWidget_metaObject(const QVideoWidget* self);
void* QVideoWidget_metacast(QVideoWidget* self, const char* param1);
struct miqt_string QVideoWidget_tr(const char* s);
struct miqt_string QVideoWidget_trUtf8(const char* s);
QMediaObject* QVideoWidget_mediaObject(const QVideoWidget* self);
QAbstractVideoSurface* QVideoWidget_videoSurface(const QVideoWidget* self);
int QVideoWidget_aspectRatioMode(const QVideoWidget* self);
int QVideoWidget_brightness(const QVideoWidget* self);
int QVideoWidget_contrast(const QVideoWidget* self);
int QVideoWidget_hue(const QVideoWidget* self);
int QVideoWidget_saturation(const QVideoWidget* self);
QSize* QVideoWidget_sizeHint(const QVideoWidget* self);
void QVideoWidget_setFullScreen(QVideoWidget* self, bool fullScreen);
void QVideoWidget_setAspectRatioMode(QVideoWidget* self, int mode);
void QVideoWidget_setBrightness(QVideoWidget* self, int brightness);
void QVideoWidget_setContrast(QVideoWidget* self, int contrast);
void QVideoWidget_setHue(QVideoWidget* self, int hue);
void QVideoWidget_setSaturation(QVideoWidget* self, int saturation);
void QVideoWidget_fullScreenChanged(QVideoWidget* self, bool fullScreen);
void QVideoWidget_connect_fullScreenChanged(QVideoWidget* self, intptr_t slot);
void QVideoWidget_brightnessChanged(QVideoWidget* self, int brightness);
void QVideoWidget_connect_brightnessChanged(QVideoWidget* self, intptr_t slot);
void QVideoWidget_contrastChanged(QVideoWidget* self, int contrast);
void QVideoWidget_connect_contrastChanged(QVideoWidget* self, intptr_t slot);
void QVideoWidget_hueChanged(QVideoWidget* self, int hue);
void QVideoWidget_connect_hueChanged(QVideoWidget* self, intptr_t slot);
void QVideoWidget_saturationChanged(QVideoWidget* self, int saturation);
void QVideoWidget_connect_saturationChanged(QVideoWidget* self, intptr_t slot);
bool QVideoWidget_event(QVideoWidget* self, QEvent* event);
void QVideoWidget_showEvent(QVideoWidget* self, QShowEvent* event);
void QVideoWidget_hideEvent(QVideoWidget* self, QHideEvent* event);
void QVideoWidget_resizeEvent(QVideoWidget* self, QResizeEvent* event);
void QVideoWidget_moveEvent(QVideoWidget* self, QMoveEvent* event);
void QVideoWidget_paintEvent(QVideoWidget* self, QPaintEvent* event);
bool QVideoWidget_setMediaObject(QVideoWidget* self, QMediaObject* object);
struct miqt_string QVideoWidget_tr2(const char* s, const char* c);
struct miqt_string QVideoWidget_tr3(const char* s, const char* c, int n);
struct miqt_string QVideoWidget_trUtf82(const char* s, const char* c);
struct miqt_string QVideoWidget_trUtf83(const char* s, const char* c, int n);

bool QVideoWidget_override_virtual_mediaObject(void* self, intptr_t slot);
QMediaObject* QVideoWidget_virtualbase_mediaObject(const void* self);
bool QVideoWidget_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QVideoWidget_virtualbase_sizeHint(const void* self);
bool QVideoWidget_override_virtual_event(void* self, intptr_t slot);
bool QVideoWidget_virtualbase_event(void* self, QEvent* event);
bool QVideoWidget_override_virtual_showEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_showEvent(void* self, QShowEvent* event);
bool QVideoWidget_override_virtual_hideEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QVideoWidget_override_virtual_resizeEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QVideoWidget_override_virtual_moveEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QVideoWidget_override_virtual_paintEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QVideoWidget_override_virtual_setMediaObject(void* self, intptr_t slot);
bool QVideoWidget_virtualbase_setMediaObject(void* self, QMediaObject* object);
bool QVideoWidget_override_virtual_devType(void* self, intptr_t slot);
int QVideoWidget_virtualbase_devType(const void* self);
bool QVideoWidget_override_virtual_setVisible(void* self, intptr_t slot);
void QVideoWidget_virtualbase_setVisible(void* self, bool visible);
bool QVideoWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QVideoWidget_virtualbase_minimumSizeHint(const void* self);
bool QVideoWidget_override_virtual_heightForWidth(void* self, intptr_t slot);
int QVideoWidget_virtualbase_heightForWidth(const void* self, int param1);
bool QVideoWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QVideoWidget_virtualbase_hasHeightForWidth(const void* self);
bool QVideoWidget_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QVideoWidget_virtualbase_paintEngine(const void* self);
bool QVideoWidget_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QVideoWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QVideoWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QVideoWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QVideoWidget_override_virtual_wheelEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QVideoWidget_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QVideoWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QVideoWidget_override_virtual_focusInEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QVideoWidget_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QVideoWidget_override_virtual_enterEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_enterEvent(void* self, QEvent* event);
bool QVideoWidget_override_virtual_leaveEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_leaveEvent(void* self, QEvent* event);
bool QVideoWidget_override_virtual_closeEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QVideoWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QVideoWidget_override_virtual_tabletEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QVideoWidget_override_virtual_actionEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QVideoWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QVideoWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QVideoWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QVideoWidget_override_virtual_dropEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QVideoWidget_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QVideoWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QVideoWidget_override_virtual_changeEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_changeEvent(void* self, QEvent* param1);
bool QVideoWidget_override_virtual_metric(void* self, intptr_t slot);
int QVideoWidget_virtualbase_metric(const void* self, int param1);
bool QVideoWidget_override_virtual_initPainter(void* self, intptr_t slot);
void QVideoWidget_virtualbase_initPainter(const void* self, QPainter* painter);
bool QVideoWidget_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QVideoWidget_virtualbase_redirected(const void* self, QPoint* offset);
bool QVideoWidget_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QVideoWidget_virtualbase_sharedPainter(const void* self);
bool QVideoWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QVideoWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QVideoWidget_virtualbase_inputMethodQuery(const void* self, int param1);
bool QVideoWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QVideoWidget_virtualbase_focusNextPrevChild(void* self, bool next);
bool QVideoWidget_override_virtual_eventFilter(void* self, intptr_t slot);
bool QVideoWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QVideoWidget_override_virtual_timerEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QVideoWidget_override_virtual_childEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_childEvent(void* self, QChildEvent* event);
bool QVideoWidget_override_virtual_customEvent(void* self, intptr_t slot);
void QVideoWidget_virtualbase_customEvent(void* self, QEvent* event);
bool QVideoWidget_override_virtual_connectNotify(void* self, intptr_t slot);
void QVideoWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QVideoWidget_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QVideoWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QVideoWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QVideoWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QVideoWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QVideoWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QVideoWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QVideoWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QVideoWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QVideoWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QVideoWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QVideoWidget_delete(QVideoWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
