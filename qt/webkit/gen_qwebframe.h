#pragma once
#ifndef MIQT_QT_WEBKIT_GEN_QWEBFRAME_H
#define MIQT_QT_WEBKIT_GEN_QWEBFRAME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEvent;
class QIcon;
class QMetaObject;
class QNetworkRequest;
class QObject;
class QPainter;
class QPixmap;
class QPoint;
class QPrinter;
class QRect;
class QRegion;
class QSize;
class QUrl;
class QVariant;
class QWebElement;
class QWebElementCollection;
class QWebFrame;
class QWebHitTestResult;
class QWebPage;
class QWebSecurityOrigin;
#else
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPrinter QPrinter;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWebElement QWebElement;
typedef struct QWebElementCollection QWebElementCollection;
typedef struct QWebFrame QWebFrame;
typedef struct QWebHitTestResult QWebHitTestResult;
typedef struct QWebPage QWebPage;
typedef struct QWebSecurityOrigin QWebSecurityOrigin;
#endif

QWebHitTestResult* QWebHitTestResult_new();
QWebHitTestResult* QWebHitTestResult_new2(QWebHitTestResult* other);
void QWebHitTestResult_operatorAssign(QWebHitTestResult* self, QWebHitTestResult* other);
bool QWebHitTestResult_isNull(const QWebHitTestResult* self);
QPoint* QWebHitTestResult_pos(const QWebHitTestResult* self);
QRect* QWebHitTestResult_boundingRect(const QWebHitTestResult* self);
QWebElement* QWebHitTestResult_enclosingBlockElement(const QWebHitTestResult* self);
struct miqt_string QWebHitTestResult_title(const QWebHitTestResult* self);
struct miqt_string QWebHitTestResult_linkText(const QWebHitTestResult* self);
QUrl* QWebHitTestResult_linkUrl(const QWebHitTestResult* self);
QUrl* QWebHitTestResult_linkTitle(const QWebHitTestResult* self);
struct miqt_string QWebHitTestResult_linkTitleString(const QWebHitTestResult* self);
QWebFrame* QWebHitTestResult_linkTargetFrame(const QWebHitTestResult* self);
QWebElement* QWebHitTestResult_linkElement(const QWebHitTestResult* self);
struct miqt_string QWebHitTestResult_alternateText(const QWebHitTestResult* self);
QUrl* QWebHitTestResult_imageUrl(const QWebHitTestResult* self);
QPixmap* QWebHitTestResult_pixmap(const QWebHitTestResult* self);
QUrl* QWebHitTestResult_mediaUrl(const QWebHitTestResult* self);
bool QWebHitTestResult_isContentEditable(const QWebHitTestResult* self);
bool QWebHitTestResult_isContentSelected(const QWebHitTestResult* self);
QWebElement* QWebHitTestResult_element(const QWebHitTestResult* self);
QWebFrame* QWebHitTestResult_frame(const QWebHitTestResult* self);
void QWebHitTestResult_delete(QWebHitTestResult* self);

void QWebFrame_virtbase(QWebFrame* src, QObject** outptr_QObject);
QMetaObject* QWebFrame_metaObject(const QWebFrame* self);
void* QWebFrame_metacast(QWebFrame* self, const char* param1);
struct miqt_string QWebFrame_tr(const char* s);
struct miqt_string QWebFrame_trUtf8(const char* s);
QWebPage* QWebFrame_page(const QWebFrame* self);
void QWebFrame_load(QWebFrame* self, QUrl* url);
void QWebFrame_loadWithRequest(QWebFrame* self, QNetworkRequest* request);
void QWebFrame_setHtml(QWebFrame* self, struct miqt_string html);
void QWebFrame_setContent(QWebFrame* self, struct miqt_string data);
void QWebFrame_addToJavaScriptWindowObject(QWebFrame* self, struct miqt_string name, QObject* object);
struct miqt_string QWebFrame_toHtml(const QWebFrame* self);
struct miqt_string QWebFrame_toPlainText(const QWebFrame* self);
struct miqt_string QWebFrame_title(const QWebFrame* self);
void QWebFrame_setUrl(QWebFrame* self, QUrl* url);
QUrl* QWebFrame_url(const QWebFrame* self);
QUrl* QWebFrame_requestedUrl(const QWebFrame* self);
QUrl* QWebFrame_baseUrl(const QWebFrame* self);
QIcon* QWebFrame_icon(const QWebFrame* self);
struct miqt_string QWebFrame_frameName(const QWebFrame* self);
QWebFrame* QWebFrame_parentFrame(const QWebFrame* self);
struct miqt_array /* of QWebFrame* */  QWebFrame_childFrames(const QWebFrame* self);
int QWebFrame_scrollBarPolicy(const QWebFrame* self, int orientation);
void QWebFrame_setScrollBarPolicy(QWebFrame* self, int orientation, int policy);
void QWebFrame_setScrollBarValue(QWebFrame* self, int orientation, int value);
int QWebFrame_scrollBarValue(const QWebFrame* self, int orientation);
int QWebFrame_scrollBarMinimum(const QWebFrame* self, int orientation);
int QWebFrame_scrollBarMaximum(const QWebFrame* self, int orientation);
QRect* QWebFrame_scrollBarGeometry(const QWebFrame* self, int orientation);
void QWebFrame_scroll(QWebFrame* self, int param1, int param2);
QPoint* QWebFrame_scrollPosition(const QWebFrame* self);
void QWebFrame_setScrollPosition(QWebFrame* self, QPoint* pos);
void QWebFrame_scrollToAnchor(QWebFrame* self, struct miqt_string anchor);
void QWebFrame_render(QWebFrame* self, QPainter* param1);
void QWebFrame_render2(QWebFrame* self, QPainter* param1, int layer);
void QWebFrame_setTextSizeMultiplier(QWebFrame* self, double factor);
double QWebFrame_textSizeMultiplier(const QWebFrame* self);
double QWebFrame_zoomFactor(const QWebFrame* self);
void QWebFrame_setZoomFactor(QWebFrame* self, double factor);
bool QWebFrame_hasFocus(const QWebFrame* self);
void QWebFrame_setFocus(QWebFrame* self);
QPoint* QWebFrame_pos(const QWebFrame* self);
QRect* QWebFrame_geometry(const QWebFrame* self);
QSize* QWebFrame_contentsSize(const QWebFrame* self);
QWebElement* QWebFrame_documentElement(const QWebFrame* self);
QWebElement* QWebFrame_ownerElement(const QWebFrame* self);
QWebElementCollection* QWebFrame_findAllElements(const QWebFrame* self, struct miqt_string selectorQuery);
QWebElement* QWebFrame_findFirstElement(const QWebFrame* self, struct miqt_string selectorQuery);
QWebHitTestResult* QWebFrame_hitTestContent(const QWebFrame* self, QPoint* pos);
bool QWebFrame_event(QWebFrame* self, QEvent* param1);
QWebSecurityOrigin* QWebFrame_securityOrigin(const QWebFrame* self);
QVariant* QWebFrame_evaluateJavaScript(QWebFrame* self, struct miqt_string scriptSource);
void QWebFrame_print(const QWebFrame* self, QPrinter* printer);
void QWebFrame_javaScriptWindowObjectCleared(QWebFrame* self);
void QWebFrame_connect_javaScriptWindowObjectCleared(QWebFrame* self, intptr_t slot);
void QWebFrame_provisionalLoad(QWebFrame* self);
void QWebFrame_connect_provisionalLoad(QWebFrame* self, intptr_t slot);
void QWebFrame_titleChanged(QWebFrame* self, struct miqt_string title);
void QWebFrame_connect_titleChanged(QWebFrame* self, intptr_t slot);
void QWebFrame_urlChanged(QWebFrame* self, QUrl* url);
void QWebFrame_connect_urlChanged(QWebFrame* self, intptr_t slot);
void QWebFrame_initialLayoutCompleted(QWebFrame* self);
void QWebFrame_connect_initialLayoutCompleted(QWebFrame* self, intptr_t slot);
void QWebFrame_iconChanged(QWebFrame* self);
void QWebFrame_connect_iconChanged(QWebFrame* self, intptr_t slot);
void QWebFrame_contentsSizeChanged(QWebFrame* self, QSize* size);
void QWebFrame_connect_contentsSizeChanged(QWebFrame* self, intptr_t slot);
void QWebFrame_loadStarted(QWebFrame* self);
void QWebFrame_connect_loadStarted(QWebFrame* self, intptr_t slot);
void QWebFrame_loadFinished(QWebFrame* self, bool ok);
void QWebFrame_connect_loadFinished(QWebFrame* self, intptr_t slot);
void QWebFrame_pageChanged(QWebFrame* self);
void QWebFrame_connect_pageChanged(QWebFrame* self, intptr_t slot);
struct miqt_string QWebFrame_tr2(const char* s, const char* c);
struct miqt_string QWebFrame_tr3(const char* s, const char* c, int n);
struct miqt_string QWebFrame_trUtf82(const char* s, const char* c);
struct miqt_string QWebFrame_trUtf83(const char* s, const char* c, int n);
void QWebFrame_load2(QWebFrame* self, QNetworkRequest* request, int operation);
void QWebFrame_load3(QWebFrame* self, QNetworkRequest* request, int operation, struct miqt_string body);
void QWebFrame_setHtml2(QWebFrame* self, struct miqt_string html, QUrl* baseUrl);
void QWebFrame_setContent2(QWebFrame* self, struct miqt_string data, struct miqt_string mimeType);
void QWebFrame_setContent3(QWebFrame* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl);
void QWebFrame_addToJavaScriptWindowObject3(QWebFrame* self, struct miqt_string name, QObject* object, int ownership);
void QWebFrame_render22(QWebFrame* self, QPainter* param1, QRegion* clip);
void QWebFrame_render3(QWebFrame* self, QPainter* param1, int layer, QRegion* clip);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
