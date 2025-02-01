#pragma once
#ifndef MIQT_QT_GEN_QAPPLICATION_H
#define MIQT_QT_GEN_QAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QApplication;
class QChildEvent;
class QCoreApplication;
class QDesktopWidget;
class QEvent;
class QFont;
class QFontMetrics;
class QGuiApplication;
class QIcon;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPalette;
class QPoint;
class QSize;
class QStyle;
class QTimerEvent;
class QWidget;
#else
typedef struct QApplication QApplication;
typedef struct QChildEvent QChildEvent;
typedef struct QCoreApplication QCoreApplication;
typedef struct QDesktopWidget QDesktopWidget;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QFontMetrics QFontMetrics;
typedef struct QGuiApplication QGuiApplication;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPalette QPalette;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
typedef struct QStyle QStyle;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QApplication* QApplication_new(int* argc, char** argv);
QApplication* QApplication_new2(int* argc, char** argv, int param3);
void QApplication_virtbase(QApplication* src, QGuiApplication** outptr_QGuiApplication);
QMetaObject* QApplication_metaObject(const QApplication* self);
void* QApplication_metacast(QApplication* self, const char* param1);
struct miqt_string QApplication_tr(const char* s);
struct miqt_string QApplication_trUtf8(const char* s);
QStyle* QApplication_style();
void QApplication_setStyle(QStyle* style);
QStyle* QApplication_setStyleWithStyle(struct miqt_string style);
int QApplication_colorSpec();
void QApplication_setColorSpec(int colorSpec);
QPalette* QApplication_palette(QWidget* param1);
QPalette* QApplication_paletteWithClassName(const char* className);
void QApplication_setPalette(QPalette* param1);
QFont* QApplication_font();
QFont* QApplication_fontWithQWidget(QWidget* param1);
QFont* QApplication_fontWithClassName(const char* className);
void QApplication_setFont(QFont* param1);
QFontMetrics* QApplication_fontMetrics();
void QApplication_setWindowIcon(QIcon* icon);
QIcon* QApplication_windowIcon();
struct miqt_array /* of QWidget* */  QApplication_allWidgets();
struct miqt_array /* of QWidget* */  QApplication_topLevelWidgets();
QDesktopWidget* QApplication_desktop();
QWidget* QApplication_activePopupWidget();
QWidget* QApplication_activeModalWidget();
QWidget* QApplication_focusWidget();
QWidget* QApplication_activeWindow();
void QApplication_setActiveWindow(QWidget* act);
QWidget* QApplication_widgetAt(QPoint* p);
QWidget* QApplication_widgetAt2(int x, int y);
QWidget* QApplication_topLevelAt(QPoint* p);
QWidget* QApplication_topLevelAt2(int x, int y);
void QApplication_beep();
void QApplication_alert(QWidget* widget);
void QApplication_setCursorFlashTime(int cursorFlashTime);
int QApplication_cursorFlashTime();
void QApplication_setDoubleClickInterval(int doubleClickInterval);
int QApplication_doubleClickInterval();
void QApplication_setKeyboardInputInterval(int keyboardInputInterval);
int QApplication_keyboardInputInterval();
void QApplication_setWheelScrollLines(int wheelScrollLines);
int QApplication_wheelScrollLines();
void QApplication_setGlobalStrut(QSize* globalStrut);
QSize* QApplication_globalStrut();
void QApplication_setStartDragTime(int ms);
int QApplication_startDragTime();
void QApplication_setStartDragDistance(int l);
int QApplication_startDragDistance();
bool QApplication_isEffectEnabled(int param1);
void QApplication_setEffectEnabled(int param1);
int QApplication_exec();
bool QApplication_notify(QApplication* self, QObject* param1, QEvent* param2);
void QApplication_focusChanged(QApplication* self, QWidget* old, QWidget* now);
void QApplication_connect_focusChanged(QApplication* self, intptr_t slot);
struct miqt_string QApplication_styleSheet(const QApplication* self);
void QApplication_setStyleSheet(QApplication* self, struct miqt_string sheet);
void QApplication_setAutoSipEnabled(QApplication* self, const bool enabled);
bool QApplication_autoSipEnabled(const QApplication* self);
void QApplication_closeAllWindows();
void QApplication_aboutQt();
bool QApplication_event(QApplication* self, QEvent* param1);
struct miqt_string QApplication_tr2(const char* s, const char* c);
struct miqt_string QApplication_tr3(const char* s, const char* c, int n);
struct miqt_string QApplication_trUtf82(const char* s, const char* c);
struct miqt_string QApplication_trUtf83(const char* s, const char* c, int n);
void QApplication_setPalette2(QPalette* param1, const char* className);
void QApplication_setFont2(QFont* param1, const char* className);
void QApplication_alert2(QWidget* widget, int duration);
void QApplication_setEffectEnabled2(int param1, bool enable);
bool QApplication_override_virtual_notify(void* self, intptr_t slot);
bool QApplication_virtualbase_notify(void* self, QObject* param1, QEvent* param2);
bool QApplication_override_virtual_event(void* self, intptr_t slot);
bool QApplication_virtualbase_event(void* self, QEvent* param1);
bool QApplication_override_virtual_eventFilter(void* self, intptr_t slot);
bool QApplication_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QApplication_override_virtual_timerEvent(void* self, intptr_t slot);
void QApplication_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QApplication_override_virtual_childEvent(void* self, intptr_t slot);
void QApplication_virtualbase_childEvent(void* self, QChildEvent* event);
bool QApplication_override_virtual_customEvent(void* self, intptr_t slot);
void QApplication_virtualbase_customEvent(void* self, QEvent* event);
bool QApplication_override_virtual_connectNotify(void* self, intptr_t slot);
void QApplication_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QApplication_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QApplication_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QApplication_delete(QApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
