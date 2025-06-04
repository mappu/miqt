#pragma once
#ifndef MIQT_QT_PDF_GEN_QPDFPAGENAVIGATION_H
#define MIQT_QT_PDF_GEN_QPDFPAGENAVIGATION_H

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
class QMetaMethod;
class QMetaObject;
class QObject;
class QPdfDocument;
class QPdfPageNavigation;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPdfDocument QPdfDocument;
typedef struct QPdfPageNavigation QPdfPageNavigation;
typedef struct QTimerEvent QTimerEvent;
#endif

QPdfPageNavigation* QPdfPageNavigation_new();
QPdfPageNavigation* QPdfPageNavigation_new2(QObject* parent);
void QPdfPageNavigation_virtbase(QPdfPageNavigation* src, QObject** outptr_QObject);
QMetaObject* QPdfPageNavigation_metaObject(const QPdfPageNavigation* self);
void* QPdfPageNavigation_metacast(QPdfPageNavigation* self, const char* param1);
struct miqt_string QPdfPageNavigation_tr(const char* s);
struct miqt_string QPdfPageNavigation_trUtf8(const char* s);
QPdfDocument* QPdfPageNavigation_document(const QPdfPageNavigation* self);
void QPdfPageNavigation_setDocument(QPdfPageNavigation* self, QPdfDocument* document);
int QPdfPageNavigation_currentPage(const QPdfPageNavigation* self);
void QPdfPageNavigation_setCurrentPage(QPdfPageNavigation* self, int currentPage);
int QPdfPageNavigation_pageCount(const QPdfPageNavigation* self);
bool QPdfPageNavigation_canGoToPreviousPage(const QPdfPageNavigation* self);
bool QPdfPageNavigation_canGoToNextPage(const QPdfPageNavigation* self);
void QPdfPageNavigation_goToPreviousPage(QPdfPageNavigation* self);
void QPdfPageNavigation_goToNextPage(QPdfPageNavigation* self);
void QPdfPageNavigation_documentChanged(QPdfPageNavigation* self, QPdfDocument* document);
void QPdfPageNavigation_connect_documentChanged(QPdfPageNavigation* self, intptr_t slot);
void QPdfPageNavigation_currentPageChanged(QPdfPageNavigation* self, int currentPage);
void QPdfPageNavigation_connect_currentPageChanged(QPdfPageNavigation* self, intptr_t slot);
void QPdfPageNavigation_pageCountChanged(QPdfPageNavigation* self, int pageCount);
void QPdfPageNavigation_connect_pageCountChanged(QPdfPageNavigation* self, intptr_t slot);
void QPdfPageNavigation_canGoToPreviousPageChanged(QPdfPageNavigation* self, bool canGo);
void QPdfPageNavigation_connect_canGoToPreviousPageChanged(QPdfPageNavigation* self, intptr_t slot);
void QPdfPageNavigation_canGoToNextPageChanged(QPdfPageNavigation* self, bool canGo);
void QPdfPageNavigation_connect_canGoToNextPageChanged(QPdfPageNavigation* self, intptr_t slot);
struct miqt_string QPdfPageNavigation_tr2(const char* s, const char* c);
struct miqt_string QPdfPageNavigation_tr3(const char* s, const char* c, int n);
struct miqt_string QPdfPageNavigation_trUtf82(const char* s, const char* c);
struct miqt_string QPdfPageNavigation_trUtf83(const char* s, const char* c, int n);

bool QPdfPageNavigation_override_virtual_event(void* self, intptr_t slot);
bool QPdfPageNavigation_virtualbase_event(void* self, QEvent* event);
bool QPdfPageNavigation_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPdfPageNavigation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPdfPageNavigation_override_virtual_timerEvent(void* self, intptr_t slot);
void QPdfPageNavigation_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPdfPageNavigation_override_virtual_childEvent(void* self, intptr_t slot);
void QPdfPageNavigation_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPdfPageNavigation_override_virtual_customEvent(void* self, intptr_t slot);
void QPdfPageNavigation_virtualbase_customEvent(void* self, QEvent* event);
bool QPdfPageNavigation_override_virtual_connectNotify(void* self, intptr_t slot);
void QPdfPageNavigation_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPdfPageNavigation_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPdfPageNavigation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QPdfPageNavigation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPdfPageNavigation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPdfPageNavigation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPdfPageNavigation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QPdfPageNavigation_delete(QPdfPageNavigation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
