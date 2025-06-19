#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QTERMWIDGET_GEN_FILTER_H
#define MIQT_QT_RESTRICTED_EXTRAS_QTERMWIDGET_GEN_FILTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__Filter)
typedef Konsole::Filter Konsole__Filter;
#else
class Konsole__Filter;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__Filter__HotSpot)
typedef Konsole::Filter::HotSpot Konsole__Filter__HotSpot;
#else
class Konsole__Filter__HotSpot;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__FilterChain)
typedef Konsole::FilterChain Konsole__FilterChain;
#else
class Konsole__FilterChain;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__FilterObject)
typedef Konsole::FilterObject Konsole__FilterObject;
#else
class Konsole__FilterObject;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__RegExpFilter)
typedef Konsole::RegExpFilter Konsole__RegExpFilter;
#else
class Konsole__RegExpFilter;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__RegExpFilter__HotSpot)
typedef Konsole::RegExpFilter::HotSpot Konsole__RegExpFilter__HotSpot;
#else
class Konsole__RegExpFilter__HotSpot;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__TerminalImageFilterChain)
typedef Konsole::TerminalImageFilterChain Konsole__TerminalImageFilterChain;
#else
class Konsole__TerminalImageFilterChain;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__UrlFilter)
typedef Konsole::UrlFilter Konsole__UrlFilter;
#else
class Konsole__UrlFilter;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__UrlFilter__HotSpot)
typedef Konsole::UrlFilter::HotSpot Konsole__UrlFilter__HotSpot;
#else
class Konsole__UrlFilter__HotSpot;
#endif
class QAction;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRegExp;
class QTimerEvent;
class QUrl;
#else
typedef struct Konsole__Filter Konsole__Filter;
typedef struct Konsole__Filter__HotSpot Konsole__Filter__HotSpot;
typedef struct Konsole__FilterChain Konsole__FilterChain;
typedef struct Konsole__FilterObject Konsole__FilterObject;
typedef struct Konsole__RegExpFilter Konsole__RegExpFilter;
typedef struct Konsole__RegExpFilter__HotSpot Konsole__RegExpFilter__HotSpot;
typedef struct Konsole__TerminalImageFilterChain Konsole__TerminalImageFilterChain;
typedef struct Konsole__UrlFilter Konsole__UrlFilter;
typedef struct Konsole__UrlFilter__HotSpot Konsole__UrlFilter__HotSpot;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRegExp QRegExp;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

Konsole__Filter* Konsole__Filter_new();
void Konsole__Filter_virtbase(Konsole__Filter* src, QObject** outptr_QObject);
void Konsole__Filter_process(Konsole__Filter* self);
void Konsole__Filter_reset(Konsole__Filter* self);
Konsole__Filter__HotSpot* Konsole__Filter_hotSpotAt(const Konsole__Filter* self, int line, int column);
struct miqt_array /* of Konsole__Filter__HotSpot* */  Konsole__Filter_hotSpots(const Konsole__Filter* self);
struct miqt_array /* of Konsole__Filter__HotSpot* */  Konsole__Filter_hotSpotsAtLine(const Konsole__Filter* self, int line);
bool Konsole__Filter_override_virtual_process(void* self, intptr_t slot);
void Konsole__Filter_virtualbase_process(void* self);
bool Konsole__Filter_override_virtual_event(void* self, intptr_t slot);
bool Konsole__Filter_virtualbase_event(void* self, QEvent* event);
bool Konsole__Filter_override_virtual_eventFilter(void* self, intptr_t slot);
bool Konsole__Filter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool Konsole__Filter_override_virtual_timerEvent(void* self, intptr_t slot);
void Konsole__Filter_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool Konsole__Filter_override_virtual_childEvent(void* self, intptr_t slot);
void Konsole__Filter_virtualbase_childEvent(void* self, QChildEvent* event);
bool Konsole__Filter_override_virtual_customEvent(void* self, intptr_t slot);
void Konsole__Filter_virtualbase_customEvent(void* self, QEvent* event);
bool Konsole__Filter_override_virtual_connectNotify(void* self, intptr_t slot);
void Konsole__Filter_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool Konsole__Filter_override_virtual_disconnectNotify(void* self, intptr_t slot);
void Konsole__Filter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void Konsole__Filter_protectedbase_addHotSpot(bool* _dynamic_cast_ok, void* self, Konsole__Filter__HotSpot* param1);
struct miqt_string Konsole__Filter_protectedbase_buffer(bool* _dynamic_cast_ok, void* self);
void Konsole__Filter_protectedbase_getLineColumn(bool* _dynamic_cast_ok, void* self, int position, int* startLine, int* startColumn);
QObject* Konsole__Filter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int Konsole__Filter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int Konsole__Filter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool Konsole__Filter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void Konsole__Filter_delete(Konsole__Filter* self);

Konsole__RegExpFilter* Konsole__RegExpFilter_new();
void Konsole__RegExpFilter_virtbase(Konsole__RegExpFilter* src, Konsole__Filter** outptr_Konsole__Filter);
void Konsole__RegExpFilter_setRegExp(Konsole__RegExpFilter* self, QRegExp* text);
QRegExp* Konsole__RegExpFilter_regExp(const Konsole__RegExpFilter* self);
void Konsole__RegExpFilter_process(Konsole__RegExpFilter* self);
bool Konsole__RegExpFilter_override_virtual_process(void* self, intptr_t slot);
void Konsole__RegExpFilter_virtualbase_process(void* self);
bool Konsole__RegExpFilter_override_virtual_event(void* self, intptr_t slot);
bool Konsole__RegExpFilter_virtualbase_event(void* self, QEvent* event);
bool Konsole__RegExpFilter_override_virtual_eventFilter(void* self, intptr_t slot);
bool Konsole__RegExpFilter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool Konsole__RegExpFilter_override_virtual_timerEvent(void* self, intptr_t slot);
void Konsole__RegExpFilter_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool Konsole__RegExpFilter_override_virtual_childEvent(void* self, intptr_t slot);
void Konsole__RegExpFilter_virtualbase_childEvent(void* self, QChildEvent* event);
bool Konsole__RegExpFilter_override_virtual_customEvent(void* self, intptr_t slot);
void Konsole__RegExpFilter_virtualbase_customEvent(void* self, QEvent* event);
bool Konsole__RegExpFilter_override_virtual_connectNotify(void* self, intptr_t slot);
void Konsole__RegExpFilter_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool Konsole__RegExpFilter_override_virtual_disconnectNotify(void* self, intptr_t slot);
void Konsole__RegExpFilter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void Konsole__RegExpFilter_protectedbase_addHotSpot(bool* _dynamic_cast_ok, void* self, Konsole__Filter__HotSpot* param1);
struct miqt_string Konsole__RegExpFilter_protectedbase_buffer(bool* _dynamic_cast_ok, void* self);
void Konsole__RegExpFilter_protectedbase_getLineColumn(bool* _dynamic_cast_ok, void* self, int position, int* startLine, int* startColumn);
QObject* Konsole__RegExpFilter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int Konsole__RegExpFilter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int Konsole__RegExpFilter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool Konsole__RegExpFilter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void Konsole__RegExpFilter_delete(Konsole__RegExpFilter* self);

Konsole__UrlFilter* Konsole__UrlFilter_new();
void Konsole__UrlFilter_virtbase(Konsole__UrlFilter* src, Konsole__RegExpFilter** outptr_Konsole__RegExpFilter);
QMetaObject* Konsole__UrlFilter_metaObject(const Konsole__UrlFilter* self);
void* Konsole__UrlFilter_metacast(Konsole__UrlFilter* self, const char* param1);
struct miqt_string Konsole__UrlFilter_tr(const char* s);
struct miqt_string Konsole__UrlFilter_trUtf8(const char* s);
void Konsole__UrlFilter_activated(Konsole__UrlFilter* self, QUrl* url, bool fromContextMenu);
void Konsole__UrlFilter_connect_activated(Konsole__UrlFilter* self, intptr_t slot);
struct miqt_string Konsole__UrlFilter_tr2(const char* s, const char* c);
struct miqt_string Konsole__UrlFilter_tr3(const char* s, const char* c, int n);
struct miqt_string Konsole__UrlFilter_trUtf82(const char* s, const char* c);
struct miqt_string Konsole__UrlFilter_trUtf83(const char* s, const char* c, int n);
bool Konsole__UrlFilter_override_virtual_process(void* self, intptr_t slot);
void Konsole__UrlFilter_virtualbase_process(void* self);
bool Konsole__UrlFilter_override_virtual_event(void* self, intptr_t slot);
bool Konsole__UrlFilter_virtualbase_event(void* self, QEvent* event);
bool Konsole__UrlFilter_override_virtual_eventFilter(void* self, intptr_t slot);
bool Konsole__UrlFilter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool Konsole__UrlFilter_override_virtual_timerEvent(void* self, intptr_t slot);
void Konsole__UrlFilter_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool Konsole__UrlFilter_override_virtual_childEvent(void* self, intptr_t slot);
void Konsole__UrlFilter_virtualbase_childEvent(void* self, QChildEvent* event);
bool Konsole__UrlFilter_override_virtual_customEvent(void* self, intptr_t slot);
void Konsole__UrlFilter_virtualbase_customEvent(void* self, QEvent* event);
bool Konsole__UrlFilter_override_virtual_connectNotify(void* self, intptr_t slot);
void Konsole__UrlFilter_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool Konsole__UrlFilter_override_virtual_disconnectNotify(void* self, intptr_t slot);
void Konsole__UrlFilter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void Konsole__UrlFilter_protectedbase_addHotSpot(bool* _dynamic_cast_ok, void* self, Konsole__Filter__HotSpot* param1);
struct miqt_string Konsole__UrlFilter_protectedbase_buffer(bool* _dynamic_cast_ok, void* self);
void Konsole__UrlFilter_protectedbase_getLineColumn(bool* _dynamic_cast_ok, void* self, int position, int* startLine, int* startColumn);
QObject* Konsole__UrlFilter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int Konsole__UrlFilter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int Konsole__UrlFilter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool Konsole__UrlFilter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void Konsole__UrlFilter_delete(Konsole__UrlFilter* self);

void Konsole__FilterObject_virtbase(Konsole__FilterObject* src, QObject** outptr_QObject);
QMetaObject* Konsole__FilterObject_metaObject(const Konsole__FilterObject* self);
void* Konsole__FilterObject_metacast(Konsole__FilterObject* self, const char* param1);
struct miqt_string Konsole__FilterObject_tr(const char* s);
struct miqt_string Konsole__FilterObject_trUtf8(const char* s);
void Konsole__FilterObject_emitActivated(Konsole__FilterObject* self, QUrl* url, bool fromContextMenu);
void Konsole__FilterObject_activate(Konsole__FilterObject* self);
void Konsole__FilterObject_activated(Konsole__FilterObject* self, QUrl* url, bool fromContextMenu);
void Konsole__FilterObject_connect_activated(Konsole__FilterObject* self, intptr_t slot);
struct miqt_string Konsole__FilterObject_tr2(const char* s, const char* c);
struct miqt_string Konsole__FilterObject_tr3(const char* s, const char* c, int n);
struct miqt_string Konsole__FilterObject_trUtf82(const char* s, const char* c);
struct miqt_string Konsole__FilterObject_trUtf83(const char* s, const char* c, int n);
void Konsole__FilterObject_delete(Konsole__FilterObject* self);

Konsole__FilterChain* Konsole__FilterChain_new(Konsole__FilterChain* param1);
void Konsole__FilterChain_addFilter(Konsole__FilterChain* self, Konsole__Filter* filter);
void Konsole__FilterChain_removeFilter(Konsole__FilterChain* self, Konsole__Filter* filter);
bool Konsole__FilterChain_containsFilter(Konsole__FilterChain* self, Konsole__Filter* filter);
void Konsole__FilterChain_clear(Konsole__FilterChain* self);
void Konsole__FilterChain_reset(Konsole__FilterChain* self);
void Konsole__FilterChain_process(Konsole__FilterChain* self);
void Konsole__FilterChain_operatorAssign(Konsole__FilterChain* self, Konsole__FilterChain* param1);
void Konsole__FilterChain_delete(Konsole__FilterChain* self);

Konsole__TerminalImageFilterChain* Konsole__TerminalImageFilterChain_new();
Konsole__TerminalImageFilterChain* Konsole__TerminalImageFilterChain_new2(Konsole__TerminalImageFilterChain* param1);
void Konsole__TerminalImageFilterChain_virtbase(Konsole__TerminalImageFilterChain* src, Konsole__FilterChain** outptr_Konsole__FilterChain);
void Konsole__TerminalImageFilterChain_delete(Konsole__TerminalImageFilterChain* self);

Konsole__Filter__HotSpot* Konsole__Filter__HotSpot_new(int startLine, int startColumn, int endLine, int endColumn);
Konsole__Filter__HotSpot* Konsole__Filter__HotSpot_new2(Konsole__Filter__HotSpot* param1);
int Konsole__Filter__HotSpot_startLine(const Konsole__Filter__HotSpot* self);
int Konsole__Filter__HotSpot_endLine(const Konsole__Filter__HotSpot* self);
int Konsole__Filter__HotSpot_startColumn(const Konsole__Filter__HotSpot* self);
int Konsole__Filter__HotSpot_endColumn(const Konsole__Filter__HotSpot* self);
int Konsole__Filter__HotSpot_type(const Konsole__Filter__HotSpot* self);
void Konsole__Filter__HotSpot_activate(Konsole__Filter__HotSpot* self, struct miqt_string action);
struct miqt_array /* of QAction* */  Konsole__Filter__HotSpot_actions(Konsole__Filter__HotSpot* self);
bool Konsole__Filter__HotSpot_override_virtual_activate(void* self, intptr_t slot);
void Konsole__Filter__HotSpot_virtualbase_activate(void* self, struct miqt_string action);
bool Konsole__Filter__HotSpot_override_virtual_actions(void* self, intptr_t slot);
struct miqt_array /* of QAction* */  Konsole__Filter__HotSpot_virtualbase_actions(void* self);
void Konsole__Filter__HotSpot_protectedbase_setType(bool* _dynamic_cast_ok, void* self, int type);
void Konsole__Filter__HotSpot_delete(Konsole__Filter__HotSpot* self);

Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter__HotSpot_new(int startLine, int startColumn, int endLine, int endColumn);
Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter__HotSpot_new2(Konsole__RegExpFilter__HotSpot* param1);
void Konsole__RegExpFilter__HotSpot_virtbase(Konsole__RegExpFilter__HotSpot* src, Konsole__Filter__HotSpot** outptr_Konsole__Filter__HotSpot);
void Konsole__RegExpFilter__HotSpot_activate(Konsole__RegExpFilter__HotSpot* self, struct miqt_string action);
void Konsole__RegExpFilter__HotSpot_setCapturedTexts(Konsole__RegExpFilter__HotSpot* self, struct miqt_array /* of struct miqt_string */  texts);
struct miqt_array /* of struct miqt_string */  Konsole__RegExpFilter__HotSpot_capturedTexts(const Konsole__RegExpFilter__HotSpot* self);
bool Konsole__RegExpFilter__HotSpot_override_virtual_activate(void* self, intptr_t slot);
void Konsole__RegExpFilter__HotSpot_virtualbase_activate(void* self, struct miqt_string action);
bool Konsole__RegExpFilter__HotSpot_override_virtual_actions(void* self, intptr_t slot);
struct miqt_array /* of QAction* */  Konsole__RegExpFilter__HotSpot_virtualbase_actions(void* self);
void Konsole__RegExpFilter__HotSpot_protectedbase_setType(bool* _dynamic_cast_ok, void* self, int type);
void Konsole__RegExpFilter__HotSpot_delete(Konsole__RegExpFilter__HotSpot* self);

Konsole__UrlFilter__HotSpot* Konsole__UrlFilter__HotSpot_new(int startLine, int startColumn, int endLine, int endColumn);
void Konsole__UrlFilter__HotSpot_virtbase(Konsole__UrlFilter__HotSpot* src, Konsole__RegExpFilter__HotSpot** outptr_Konsole__RegExpFilter__HotSpot);
Konsole__FilterObject* Konsole__UrlFilter__HotSpot_getUrlObject(const Konsole__UrlFilter__HotSpot* self);
struct miqt_array /* of QAction* */  Konsole__UrlFilter__HotSpot_actions(Konsole__UrlFilter__HotSpot* self);
void Konsole__UrlFilter__HotSpot_activate(Konsole__UrlFilter__HotSpot* self, struct miqt_string action);
bool Konsole__UrlFilter__HotSpot_override_virtual_actions(void* self, intptr_t slot);
struct miqt_array /* of QAction* */  Konsole__UrlFilter__HotSpot_virtualbase_actions(void* self);
bool Konsole__UrlFilter__HotSpot_override_virtual_activate(void* self, intptr_t slot);
void Konsole__UrlFilter__HotSpot_virtualbase_activate(void* self, struct miqt_string action);
void Konsole__UrlFilter__HotSpot_protectedbase_setType(bool* _dynamic_cast_ok, void* self, int type);
void Konsole__UrlFilter__HotSpot_delete(Konsole__UrlFilter__HotSpot* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
