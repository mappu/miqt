#pragma once
#ifndef MIQT_QT6_GEN_QAPPLICATION_H
#define MIQT_QT6_GEN_QAPPLICATION_H

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
class QEvent;
class QFont;
class QFontMetrics;
class QGuiApplication;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPalette;
class QPoint;
class QStyle;
class QTimerEvent;
class QWidget;
#else
typedef struct QApplication QApplication;
typedef struct QChildEvent QChildEvent;
typedef struct QCoreApplication QCoreApplication;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QFontMetrics QFontMetrics;
typedef struct QGuiApplication QGuiApplication;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPalette QPalette;
typedef struct QPoint QPoint;
typedef struct QStyle QStyle;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QApplication* QApplication_new(int* argc, char** argv);
QApplication* QApplication_new2(int* argc, char** argv, int param3);
void QApplication_virtbase(QApplication* src, QGuiApplication** outptr_QGuiApplication);
QMetaObject* QApplication_MetaObject(const QApplication* self);
void* QApplication_Metacast(QApplication* self, const char* param1);
struct miqt_string QApplication_Tr(const char* s);
QStyle* QApplication_Style();
void QApplication_SetStyle(QStyle* style);
QStyle* QApplication_SetStyleWithStyle(struct miqt_string style);
QPalette* QApplication_Palette(QWidget* param1);
QPalette* QApplication_PaletteWithClassName(const char* className);
void QApplication_SetPalette(QPalette* param1);
QFont* QApplication_Font();
QFont* QApplication_FontWithQWidget(QWidget* param1);
QFont* QApplication_FontWithClassName(const char* className);
void QApplication_SetFont(QFont* param1);
QFontMetrics* QApplication_FontMetrics();
struct miqt_array /* of QWidget* */  QApplication_AllWidgets();
struct miqt_array /* of QWidget* */  QApplication_TopLevelWidgets();
QWidget* QApplication_ActivePopupWidget();
QWidget* QApplication_ActiveModalWidget();
QWidget* QApplication_FocusWidget();
QWidget* QApplication_ActiveWindow();
void QApplication_SetActiveWindow(QWidget* act);
QWidget* QApplication_WidgetAt(QPoint* p);
QWidget* QApplication_WidgetAt2(int x, int y);
QWidget* QApplication_TopLevelAt(QPoint* p);
QWidget* QApplication_TopLevelAt2(int x, int y);
void QApplication_Beep();
void QApplication_Alert(QWidget* widget);
void QApplication_SetCursorFlashTime(int cursorFlashTime);
int QApplication_CursorFlashTime();
void QApplication_SetDoubleClickInterval(int doubleClickInterval);
int QApplication_DoubleClickInterval();
void QApplication_SetKeyboardInputInterval(int keyboardInputInterval);
int QApplication_KeyboardInputInterval();
void QApplication_SetWheelScrollLines(int wheelScrollLines);
int QApplication_WheelScrollLines();
void QApplication_SetStartDragTime(int ms);
int QApplication_StartDragTime();
void QApplication_SetStartDragDistance(int l);
int QApplication_StartDragDistance();
bool QApplication_IsEffectEnabled(int param1);
void QApplication_SetEffectEnabled(int param1);
int QApplication_Exec();
bool QApplication_Notify(QApplication* self, QObject* param1, QEvent* param2);
void QApplication_FocusChanged(QApplication* self, QWidget* old, QWidget* now);
void QApplication_connect_FocusChanged(QApplication* self, intptr_t slot);
struct miqt_string QApplication_StyleSheet(const QApplication* self);
void QApplication_SetStyleSheet(QApplication* self, struct miqt_string sheet);
void QApplication_SetAutoSipEnabled(QApplication* self, const bool enabled);
bool QApplication_AutoSipEnabled(const QApplication* self);
void QApplication_CloseAllWindows();
void QApplication_AboutQt();
bool QApplication_Event(QApplication* self, QEvent* param1);
struct miqt_string QApplication_Tr2(const char* s, const char* c);
struct miqt_string QApplication_Tr3(const char* s, const char* c, int n);
void QApplication_SetPalette2(QPalette* param1, const char* className);
void QApplication_SetFont2(QFont* param1, const char* className);
void QApplication_Alert2(QWidget* widget, int duration);
void QApplication_SetEffectEnabled2(int param1, bool enable);
bool QApplication_override_virtual_Notify(void* self, intptr_t slot);
bool QApplication_virtualbase_Notify(void* self, QObject* param1, QEvent* param2);
bool QApplication_override_virtual_Event(void* self, intptr_t slot);
bool QApplication_virtualbase_Event(void* self, QEvent* param1);
bool QApplication_override_virtual_EventFilter(void* self, intptr_t slot);
bool QApplication_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QApplication_override_virtual_TimerEvent(void* self, intptr_t slot);
void QApplication_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QApplication_override_virtual_ChildEvent(void* self, intptr_t slot);
void QApplication_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QApplication_override_virtual_CustomEvent(void* self, intptr_t slot);
void QApplication_virtualbase_CustomEvent(void* self, QEvent* event);
bool QApplication_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QApplication_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QApplication_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QApplication_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QApplication_Delete(QApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
