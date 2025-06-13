#pragma once
#ifndef MIQT_QT_GEN_QSTYLEHINTS_H
#define MIQT_QT_GEN_QSTYLEHINTS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChar;
class QMetaMethod;
class QMetaObject;
class QObject;
class QStyleHints;
#else
typedef struct QChar QChar;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QStyleHints QStyleHints;
#endif

void QStyleHints_virtbase(QStyleHints* src, QObject** outptr_QObject);
QMetaObject* QStyleHints_metaObject(const QStyleHints* self);
void* QStyleHints_metacast(QStyleHints* self, const char* param1);
struct miqt_string QStyleHints_tr(const char* s);
struct miqt_string QStyleHints_trUtf8(const char* s);
void QStyleHints_setMouseDoubleClickInterval(QStyleHints* self, int mouseDoubleClickInterval);
int QStyleHints_mouseDoubleClickInterval(const QStyleHints* self);
int QStyleHints_mouseDoubleClickDistance(const QStyleHints* self);
int QStyleHints_touchDoubleTapDistance(const QStyleHints* self);
void QStyleHints_setMousePressAndHoldInterval(QStyleHints* self, int mousePressAndHoldInterval);
int QStyleHints_mousePressAndHoldInterval(const QStyleHints* self);
void QStyleHints_setStartDragDistance(QStyleHints* self, int startDragDistance);
int QStyleHints_startDragDistance(const QStyleHints* self);
void QStyleHints_setStartDragTime(QStyleHints* self, int startDragTime);
int QStyleHints_startDragTime(const QStyleHints* self);
int QStyleHints_startDragVelocity(const QStyleHints* self);
void QStyleHints_setKeyboardInputInterval(QStyleHints* self, int keyboardInputInterval);
int QStyleHints_keyboardInputInterval(const QStyleHints* self);
int QStyleHints_keyboardAutoRepeatRate(const QStyleHints* self);
void QStyleHints_setCursorFlashTime(QStyleHints* self, int cursorFlashTime);
int QStyleHints_cursorFlashTime(const QStyleHints* self);
bool QStyleHints_showIsFullScreen(const QStyleHints* self);
bool QStyleHints_showIsMaximized(const QStyleHints* self);
bool QStyleHints_showShortcutsInContextMenus(const QStyleHints* self);
void QStyleHints_setShowShortcutsInContextMenus(QStyleHints* self, bool showShortcutsInContextMenus);
int QStyleHints_passwordMaskDelay(const QStyleHints* self);
QChar* QStyleHints_passwordMaskCharacter(const QStyleHints* self);
double QStyleHints_fontSmoothingGamma(const QStyleHints* self);
bool QStyleHints_useRtlExtensions(const QStyleHints* self);
bool QStyleHints_setFocusOnTouchRelease(const QStyleHints* self);
int QStyleHints_tabFocusBehavior(const QStyleHints* self);
void QStyleHints_setTabFocusBehavior(QStyleHints* self, int tabFocusBehavior);
bool QStyleHints_singleClickActivation(const QStyleHints* self);
bool QStyleHints_useHoverEffects(const QStyleHints* self);
void QStyleHints_setUseHoverEffects(QStyleHints* self, bool useHoverEffects);
int QStyleHints_wheelScrollLines(const QStyleHints* self);
void QStyleHints_setWheelScrollLines(QStyleHints* self, int scrollLines);
void QStyleHints_setMouseQuickSelectionThreshold(QStyleHints* self, int threshold);
int QStyleHints_mouseQuickSelectionThreshold(const QStyleHints* self);
void QStyleHints_cursorFlashTimeChanged(QStyleHints* self, int cursorFlashTime);
void QStyleHints_connect_cursorFlashTimeChanged(QStyleHints* self, intptr_t slot);
void QStyleHints_keyboardInputIntervalChanged(QStyleHints* self, int keyboardInputInterval);
void QStyleHints_connect_keyboardInputIntervalChanged(QStyleHints* self, intptr_t slot);
void QStyleHints_mouseDoubleClickIntervalChanged(QStyleHints* self, int mouseDoubleClickInterval);
void QStyleHints_connect_mouseDoubleClickIntervalChanged(QStyleHints* self, intptr_t slot);
void QStyleHints_mousePressAndHoldIntervalChanged(QStyleHints* self, int mousePressAndHoldInterval);
void QStyleHints_connect_mousePressAndHoldIntervalChanged(QStyleHints* self, intptr_t slot);
void QStyleHints_startDragDistanceChanged(QStyleHints* self, int startDragDistance);
void QStyleHints_connect_startDragDistanceChanged(QStyleHints* self, intptr_t slot);
void QStyleHints_startDragTimeChanged(QStyleHints* self, int startDragTime);
void QStyleHints_connect_startDragTimeChanged(QStyleHints* self, intptr_t slot);
void QStyleHints_tabFocusBehaviorChanged(QStyleHints* self, int tabFocusBehavior);
void QStyleHints_connect_tabFocusBehaviorChanged(QStyleHints* self, intptr_t slot);
void QStyleHints_useHoverEffectsChanged(QStyleHints* self, bool useHoverEffects);
void QStyleHints_connect_useHoverEffectsChanged(QStyleHints* self, intptr_t slot);
void QStyleHints_showShortcutsInContextMenusChanged(QStyleHints* self, bool param1);
void QStyleHints_connect_showShortcutsInContextMenusChanged(QStyleHints* self, intptr_t slot);
void QStyleHints_wheelScrollLinesChanged(QStyleHints* self, int scrollLines);
void QStyleHints_connect_wheelScrollLinesChanged(QStyleHints* self, intptr_t slot);
void QStyleHints_mouseQuickSelectionThresholdChanged(QStyleHints* self, int threshold);
void QStyleHints_connect_mouseQuickSelectionThresholdChanged(QStyleHints* self, intptr_t slot);
struct miqt_string QStyleHints_tr2(const char* s, const char* c);
struct miqt_string QStyleHints_tr3(const char* s, const char* c, int n);
struct miqt_string QStyleHints_trUtf82(const char* s, const char* c);
struct miqt_string QStyleHints_trUtf83(const char* s, const char* c, int n);

void QStyleHints_delete(QStyleHints* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
