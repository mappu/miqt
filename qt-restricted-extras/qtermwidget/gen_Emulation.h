#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QTERMWIDGET_GEN_EMULATION_H
#define MIQT_QT_RESTRICTED_EXTRAS_QTERMWIDGET_GEN_EMULATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__Emulation)
typedef Konsole::Emulation Konsole__Emulation;
#else
class Konsole__Emulation;
#endif
class QChildEvent;
class QEvent;
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSize;
class QTextCodec;
class QTimerEvent;
#else
typedef struct Konsole__Emulation Konsole__Emulation;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTextCodec QTextCodec;
typedef struct QTimerEvent QTimerEvent;
#endif

Konsole__Emulation* Konsole__Emulation_new();
void Konsole__Emulation_virtbase(Konsole__Emulation* src, QObject** outptr_QObject);
QMetaObject* Konsole__Emulation_metaObject(const Konsole__Emulation* self);
void* Konsole__Emulation_metacast(Konsole__Emulation* self, const char* param1);
struct miqt_string Konsole__Emulation_tr(const char* s);
struct miqt_string Konsole__Emulation_trUtf8(const char* s);
QSize* Konsole__Emulation_imageSize(const Konsole__Emulation* self);
int Konsole__Emulation_lineCount(const Konsole__Emulation* self);
void Konsole__Emulation_clearHistory(Konsole__Emulation* self);
QTextCodec* Konsole__Emulation_codec(const Konsole__Emulation* self);
void Konsole__Emulation_setCodec(Konsole__Emulation* self, QTextCodec* codec);
bool Konsole__Emulation_utf8(const Konsole__Emulation* self);
char Konsole__Emulation_eraseChar(const Konsole__Emulation* self);
void Konsole__Emulation_setKeyBindings(Konsole__Emulation* self, struct miqt_string name);
struct miqt_string Konsole__Emulation_keyBindings(const Konsole__Emulation* self);
void Konsole__Emulation_clearEntireScreen(Konsole__Emulation* self);
void Konsole__Emulation_reset(Konsole__Emulation* self);
bool Konsole__Emulation_programUsesMouse(const Konsole__Emulation* self);
bool Konsole__Emulation_programBracketedPasteMode(const Konsole__Emulation* self);
void Konsole__Emulation_setImageSize(Konsole__Emulation* self, int lines, int columns);
void Konsole__Emulation_sendText(Konsole__Emulation* self, struct miqt_string text);
void Konsole__Emulation_sendKeyEvent(Konsole__Emulation* self, QKeyEvent* param1, bool fromPaste);
void Konsole__Emulation_sendMouseEvent(Konsole__Emulation* self, int buttons, int column, int line, int eventType);
void Konsole__Emulation_sendString(Konsole__Emulation* self, const char* string, int length);
void Konsole__Emulation_receiveData(Konsole__Emulation* self, const char* buffer, int len);
void Konsole__Emulation_sendData(Konsole__Emulation* self, const char* data, int len);
void Konsole__Emulation_connect_sendData(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_lockPtyRequest(Konsole__Emulation* self, bool suspend);
void Konsole__Emulation_connect_lockPtyRequest(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_useUtf8Request(Konsole__Emulation* self, bool param1);
void Konsole__Emulation_connect_useUtf8Request(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_stateSet(Konsole__Emulation* self, int state);
void Konsole__Emulation_connect_stateSet(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_zmodemDetected(Konsole__Emulation* self);
void Konsole__Emulation_connect_zmodemDetected(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_changeTabTextColorRequest(Konsole__Emulation* self, int color);
void Konsole__Emulation_connect_changeTabTextColorRequest(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_programUsesMouseChanged(Konsole__Emulation* self, bool usesMouse);
void Konsole__Emulation_connect_programUsesMouseChanged(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_programBracketedPasteModeChanged(Konsole__Emulation* self, bool bracketedPasteMode);
void Konsole__Emulation_connect_programBracketedPasteModeChanged(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_outputChanged(Konsole__Emulation* self);
void Konsole__Emulation_connect_outputChanged(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_titleChanged(Konsole__Emulation* self, int title, struct miqt_string newTitle);
void Konsole__Emulation_connect_titleChanged(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_imageSizeChanged(Konsole__Emulation* self, int lineCount, int columnCount);
void Konsole__Emulation_connect_imageSizeChanged(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_imageSizeInitialized(Konsole__Emulation* self);
void Konsole__Emulation_connect_imageSizeInitialized(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_imageResizeRequest(Konsole__Emulation* self, QSize* sizz);
void Konsole__Emulation_connect_imageResizeRequest(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_profileChangeCommandReceived(Konsole__Emulation* self, struct miqt_string text);
void Konsole__Emulation_connect_profileChangeCommandReceived(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_flowControlKeyPressed(Konsole__Emulation* self, bool suspendKeyPressed);
void Konsole__Emulation_connect_flowControlKeyPressed(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_cursorChanged(Konsole__Emulation* self, int cursorShape, bool blinkingCursorEnabled);
void Konsole__Emulation_connect_cursorChanged(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_outputFromKeypressEvent(Konsole__Emulation* self);
void Konsole__Emulation_connect_outputFromKeypressEvent(Konsole__Emulation* self, intptr_t slot);
void Konsole__Emulation_setMode(Konsole__Emulation* self, int mode);
void Konsole__Emulation_resetMode(Konsole__Emulation* self, int mode);
struct miqt_string Konsole__Emulation_tr2(const char* s, const char* c);
struct miqt_string Konsole__Emulation_tr3(const char* s, const char* c, int n);
struct miqt_string Konsole__Emulation_trUtf82(const char* s, const char* c);
struct miqt_string Konsole__Emulation_trUtf83(const char* s, const char* c, int n);
bool Konsole__Emulation_override_virtual_eraseChar(void* self, intptr_t slot);
char Konsole__Emulation_virtualbase_eraseChar(const void* self);
bool Konsole__Emulation_override_virtual_clearEntireScreen(void* self, intptr_t slot);
void Konsole__Emulation_virtualbase_clearEntireScreen(void* self);
bool Konsole__Emulation_override_virtual_reset(void* self, intptr_t slot);
void Konsole__Emulation_virtualbase_reset(void* self);
bool Konsole__Emulation_override_virtual_setImageSize(void* self, intptr_t slot);
void Konsole__Emulation_virtualbase_setImageSize(void* self, int lines, int columns);
bool Konsole__Emulation_override_virtual_sendText(void* self, intptr_t slot);
void Konsole__Emulation_virtualbase_sendText(void* self, struct miqt_string text);
bool Konsole__Emulation_override_virtual_sendKeyEvent(void* self, intptr_t slot);
void Konsole__Emulation_virtualbase_sendKeyEvent(void* self, QKeyEvent* param1, bool fromPaste);
bool Konsole__Emulation_override_virtual_sendMouseEvent(void* self, intptr_t slot);
void Konsole__Emulation_virtualbase_sendMouseEvent(void* self, int buttons, int column, int line, int eventType);
bool Konsole__Emulation_override_virtual_sendString(void* self, intptr_t slot);
void Konsole__Emulation_virtualbase_sendString(void* self, const char* string, int length);
bool Konsole__Emulation_override_virtual_setMode(void* self, intptr_t slot);
void Konsole__Emulation_virtualbase_setMode(void* self, int mode);
bool Konsole__Emulation_override_virtual_resetMode(void* self, intptr_t slot);
void Konsole__Emulation_virtualbase_resetMode(void* self, int mode);
bool Konsole__Emulation_override_virtual_event(void* self, intptr_t slot);
bool Konsole__Emulation_virtualbase_event(void* self, QEvent* event);
bool Konsole__Emulation_override_virtual_eventFilter(void* self, intptr_t slot);
bool Konsole__Emulation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool Konsole__Emulation_override_virtual_timerEvent(void* self, intptr_t slot);
void Konsole__Emulation_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool Konsole__Emulation_override_virtual_childEvent(void* self, intptr_t slot);
void Konsole__Emulation_virtualbase_childEvent(void* self, QChildEvent* event);
bool Konsole__Emulation_override_virtual_customEvent(void* self, intptr_t slot);
void Konsole__Emulation_virtualbase_customEvent(void* self, QEvent* event);
bool Konsole__Emulation_override_virtual_connectNotify(void* self, intptr_t slot);
void Konsole__Emulation_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool Konsole__Emulation_override_virtual_disconnectNotify(void* self, intptr_t slot);
void Konsole__Emulation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void Konsole__Emulation_protectedbase_setScreen(bool* _dynamic_cast_ok, void* self, int index);
void Konsole__Emulation_protectedbase_setCodecWithCodec(bool* _dynamic_cast_ok, void* self, int codec);
void Konsole__Emulation_protectedbase_bufferedUpdate(bool* _dynamic_cast_ok, void* self);
QObject* Konsole__Emulation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int Konsole__Emulation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int Konsole__Emulation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool Konsole__Emulation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void Konsole__Emulation_delete(Konsole__Emulation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
