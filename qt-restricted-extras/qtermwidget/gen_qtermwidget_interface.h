#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QTERMWIDGET_GEN_QTERMWIDGET_INTERFACE_H
#define MIQT_QT_RESTRICTED_EXTRAS_QTERMWIDGET_GEN_QTERMWIDGET_INTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QFont;
class QKeyEvent;
class QPoint;
class QTermWidgetInterface;
class QTextCodec;
#else
typedef struct QAction QAction;
typedef struct QFont QFont;
typedef struct QKeyEvent QKeyEvent;
typedef struct QPoint QPoint;
typedef struct QTermWidgetInterface QTermWidgetInterface;
typedef struct QTextCodec QTextCodec;
#endif

void QTermWidgetInterface_setTerminalSizeHint(QTermWidgetInterface* self, bool enabled);
bool QTermWidgetInterface_terminalSizeHint(QTermWidgetInterface* self);
void QTermWidgetInterface_startShellProgram(QTermWidgetInterface* self);
void QTermWidgetInterface_startTerminalTeletype(QTermWidgetInterface* self);
int QTermWidgetInterface_getShellPID(QTermWidgetInterface* self);
void QTermWidgetInterface_changeDir(QTermWidgetInterface* self, struct miqt_string dir);
void QTermWidgetInterface_setTerminalFont(QTermWidgetInterface* self, QFont* font);
QFont* QTermWidgetInterface_getTerminalFont(QTermWidgetInterface* self);
void QTermWidgetInterface_setTerminalOpacity(QTermWidgetInterface* self, double level);
void QTermWidgetInterface_setTerminalBackgroundImage(QTermWidgetInterface* self, struct miqt_string backgroundImage);
void QTermWidgetInterface_setTerminalBackgroundMode(QTermWidgetInterface* self, int mode);
void QTermWidgetInterface_setEnvironment(QTermWidgetInterface* self, struct miqt_array /* of struct miqt_string */  environment);
void QTermWidgetInterface_setShellProgram(QTermWidgetInterface* self, struct miqt_string program);
void QTermWidgetInterface_setWorkingDirectory(QTermWidgetInterface* self, struct miqt_string dir);
struct miqt_string QTermWidgetInterface_workingDirectory(QTermWidgetInterface* self);
void QTermWidgetInterface_setArgs(QTermWidgetInterface* self, struct miqt_array /* of struct miqt_string */  args);
void QTermWidgetInterface_setTextCodec(QTermWidgetInterface* self, QTextCodec* codec);
void QTermWidgetInterface_setColorScheme(QTermWidgetInterface* self, struct miqt_string name);
struct miqt_array /* of struct miqt_string */  QTermWidgetInterface_getAvailableColorSchemes(QTermWidgetInterface* self);
void QTermWidgetInterface_setHistorySize(QTermWidgetInterface* self, int lines);
int QTermWidgetInterface_historySize(const QTermWidgetInterface* self);
void QTermWidgetInterface_setScrollBarPosition(QTermWidgetInterface* self, int scrollBarPosition);
void QTermWidgetInterface_scrollToEnd(QTermWidgetInterface* self);
void QTermWidgetInterface_sendText(QTermWidgetInterface* self, struct miqt_string text);
void QTermWidgetInterface_sendKeyEvent(QTermWidgetInterface* self, QKeyEvent* e);
void QTermWidgetInterface_setFlowControlEnabled(QTermWidgetInterface* self, bool enabled);
bool QTermWidgetInterface_flowControlEnabled(QTermWidgetInterface* self);
void QTermWidgetInterface_setFlowControlWarningEnabled(QTermWidgetInterface* self, bool enabled);
struct miqt_string QTermWidgetInterface_keyBindings(QTermWidgetInterface* self);
void QTermWidgetInterface_setMotionAfterPasting(QTermWidgetInterface* self, int motionAfterPasting);
int QTermWidgetInterface_historyLinesCount(QTermWidgetInterface* self);
int QTermWidgetInterface_screenColumnsCount(QTermWidgetInterface* self);
int QTermWidgetInterface_screenLinesCount(QTermWidgetInterface* self);
void QTermWidgetInterface_setSelectionStart(QTermWidgetInterface* self, int row, int column);
void QTermWidgetInterface_setSelectionEnd(QTermWidgetInterface* self, int row, int column);
void QTermWidgetInterface_getSelectionStart(QTermWidgetInterface* self, int* row, int* column);
void QTermWidgetInterface_getSelectionEnd(QTermWidgetInterface* self, int* row, int* column);
struct miqt_string QTermWidgetInterface_selectedText(QTermWidgetInterface* self, bool preserveLineBreaks);
void QTermWidgetInterface_setMonitorActivity(QTermWidgetInterface* self, bool monitorActivity);
void QTermWidgetInterface_setMonitorSilence(QTermWidgetInterface* self, bool monitorSilence);
void QTermWidgetInterface_setSilenceTimeout(QTermWidgetInterface* self, int seconds);
struct miqt_array /* of QAction* */  QTermWidgetInterface_filterActions(QTermWidgetInterface* self, QPoint* position);
int QTermWidgetInterface_getPtySlaveFd(const QTermWidgetInterface* self);
void QTermWidgetInterface_setBlinkingCursor(QTermWidgetInterface* self, bool blink);
void QTermWidgetInterface_setBidiEnabled(QTermWidgetInterface* self, bool enabled);
bool QTermWidgetInterface_isBidiEnabled(QTermWidgetInterface* self);
void QTermWidgetInterface_setAutoClose(QTermWidgetInterface* self, bool autoClose);
struct miqt_string QTermWidgetInterface_title(const QTermWidgetInterface* self);
struct miqt_string QTermWidgetInterface_icon(const QTermWidgetInterface* self);
bool QTermWidgetInterface_isTitleChanged(const QTermWidgetInterface* self);
void QTermWidgetInterface_bracketText(QTermWidgetInterface* self, struct miqt_string text);
void QTermWidgetInterface_disableBracketedPasteMode(QTermWidgetInterface* self, bool disable);
bool QTermWidgetInterface_bracketedPasteModeIsDisabled(const QTermWidgetInterface* self);
void QTermWidgetInterface_setMargin(QTermWidgetInterface* self, int margin);
int QTermWidgetInterface_getMargin(const QTermWidgetInterface* self);
void QTermWidgetInterface_setDrawLineChars(QTermWidgetInterface* self, bool drawLineChars);
void QTermWidgetInterface_setBoldIntense(QTermWidgetInterface* self, bool boldIntense);
void QTermWidgetInterface_setConfirmMultilinePaste(QTermWidgetInterface* self, bool confirmMultilinePaste);
void QTermWidgetInterface_setTrimPastedTrailingNewlines(QTermWidgetInterface* self, bool trimPastedTrailingNewlines);
QTermWidgetInterface* QTermWidgetInterface_createWidget(const QTermWidgetInterface* self, int startnow);
void QTermWidgetInterface_operatorAssign(QTermWidgetInterface* self, QTermWidgetInterface* param1);
void QTermWidgetInterface_delete(QTermWidgetInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
