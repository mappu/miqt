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
void QWebHitTestResult_OperatorAssign(QWebHitTestResult* self, QWebHitTestResult* other);
bool QWebHitTestResult_IsNull(const QWebHitTestResult* self);
QPoint* QWebHitTestResult_Pos(const QWebHitTestResult* self);
QRect* QWebHitTestResult_BoundingRect(const QWebHitTestResult* self);
QWebElement* QWebHitTestResult_EnclosingBlockElement(const QWebHitTestResult* self);
struct miqt_string QWebHitTestResult_Title(const QWebHitTestResult* self);
struct miqt_string QWebHitTestResult_LinkText(const QWebHitTestResult* self);
QUrl* QWebHitTestResult_LinkUrl(const QWebHitTestResult* self);
QUrl* QWebHitTestResult_LinkTitle(const QWebHitTestResult* self);
struct miqt_string QWebHitTestResult_LinkTitleString(const QWebHitTestResult* self);
QWebFrame* QWebHitTestResult_LinkTargetFrame(const QWebHitTestResult* self);
QWebElement* QWebHitTestResult_LinkElement(const QWebHitTestResult* self);
struct miqt_string QWebHitTestResult_AlternateText(const QWebHitTestResult* self);
QUrl* QWebHitTestResult_ImageUrl(const QWebHitTestResult* self);
QPixmap* QWebHitTestResult_Pixmap(const QWebHitTestResult* self);
QUrl* QWebHitTestResult_MediaUrl(const QWebHitTestResult* self);
bool QWebHitTestResult_IsContentEditable(const QWebHitTestResult* self);
bool QWebHitTestResult_IsContentSelected(const QWebHitTestResult* self);
QWebElement* QWebHitTestResult_Element(const QWebHitTestResult* self);
QWebFrame* QWebHitTestResult_Frame(const QWebHitTestResult* self);
void QWebHitTestResult_Delete(QWebHitTestResult* self, bool isSubclass);

void QWebFrame_virtbase(QWebFrame* src, QObject** outptr_QObject);
QMetaObject* QWebFrame_MetaObject(const QWebFrame* self);
void* QWebFrame_Metacast(QWebFrame* self, const char* param1);
struct miqt_string QWebFrame_Tr(const char* s);
struct miqt_string QWebFrame_TrUtf8(const char* s);
QWebPage* QWebFrame_Page(const QWebFrame* self);
void QWebFrame_Load(QWebFrame* self, QUrl* url);
void QWebFrame_LoadWithRequest(QWebFrame* self, QNetworkRequest* request);
void QWebFrame_SetHtml(QWebFrame* self, struct miqt_string html);
void QWebFrame_SetContent(QWebFrame* self, struct miqt_string data);
void QWebFrame_AddToJavaScriptWindowObject(QWebFrame* self, struct miqt_string name, QObject* object);
struct miqt_string QWebFrame_ToHtml(const QWebFrame* self);
struct miqt_string QWebFrame_ToPlainText(const QWebFrame* self);
struct miqt_string QWebFrame_Title(const QWebFrame* self);
void QWebFrame_SetUrl(QWebFrame* self, QUrl* url);
QUrl* QWebFrame_Url(const QWebFrame* self);
QUrl* QWebFrame_RequestedUrl(const QWebFrame* self);
QUrl* QWebFrame_BaseUrl(const QWebFrame* self);
QIcon* QWebFrame_Icon(const QWebFrame* self);
struct miqt_string QWebFrame_FrameName(const QWebFrame* self);
QWebFrame* QWebFrame_ParentFrame(const QWebFrame* self);
struct miqt_array /* of QWebFrame* */  QWebFrame_ChildFrames(const QWebFrame* self);
int QWebFrame_ScrollBarPolicy(const QWebFrame* self, int orientation);
void QWebFrame_SetScrollBarPolicy(QWebFrame* self, int orientation, int policy);
void QWebFrame_SetScrollBarValue(QWebFrame* self, int orientation, int value);
int QWebFrame_ScrollBarValue(const QWebFrame* self, int orientation);
int QWebFrame_ScrollBarMinimum(const QWebFrame* self, int orientation);
int QWebFrame_ScrollBarMaximum(const QWebFrame* self, int orientation);
QRect* QWebFrame_ScrollBarGeometry(const QWebFrame* self, int orientation);
void QWebFrame_Scroll(QWebFrame* self, int param1, int param2);
QPoint* QWebFrame_ScrollPosition(const QWebFrame* self);
void QWebFrame_SetScrollPosition(QWebFrame* self, QPoint* pos);
void QWebFrame_ScrollToAnchor(QWebFrame* self, struct miqt_string anchor);
void QWebFrame_Render(QWebFrame* self, QPainter* param1);
void QWebFrame_Render2(QWebFrame* self, QPainter* param1, int layer);
void QWebFrame_SetTextSizeMultiplier(QWebFrame* self, double factor);
double QWebFrame_TextSizeMultiplier(const QWebFrame* self);
double QWebFrame_ZoomFactor(const QWebFrame* self);
void QWebFrame_SetZoomFactor(QWebFrame* self, double factor);
bool QWebFrame_HasFocus(const QWebFrame* self);
void QWebFrame_SetFocus(QWebFrame* self);
QPoint* QWebFrame_Pos(const QWebFrame* self);
QRect* QWebFrame_Geometry(const QWebFrame* self);
QSize* QWebFrame_ContentsSize(const QWebFrame* self);
QWebElement* QWebFrame_DocumentElement(const QWebFrame* self);
QWebElement* QWebFrame_OwnerElement(const QWebFrame* self);
QWebElementCollection* QWebFrame_FindAllElements(const QWebFrame* self, struct miqt_string selectorQuery);
QWebElement* QWebFrame_FindFirstElement(const QWebFrame* self, struct miqt_string selectorQuery);
QWebHitTestResult* QWebFrame_HitTestContent(const QWebFrame* self, QPoint* pos);
bool QWebFrame_Event(QWebFrame* self, QEvent* param1);
QWebSecurityOrigin* QWebFrame_SecurityOrigin(const QWebFrame* self);
QVariant* QWebFrame_EvaluateJavaScript(QWebFrame* self, struct miqt_string scriptSource);
void QWebFrame_Print(const QWebFrame* self, QPrinter* printer);
void QWebFrame_JavaScriptWindowObjectCleared(QWebFrame* self);
void QWebFrame_connect_JavaScriptWindowObjectCleared(QWebFrame* self, intptr_t slot);
void QWebFrame_ProvisionalLoad(QWebFrame* self);
void QWebFrame_connect_ProvisionalLoad(QWebFrame* self, intptr_t slot);
void QWebFrame_TitleChanged(QWebFrame* self, struct miqt_string title);
void QWebFrame_connect_TitleChanged(QWebFrame* self, intptr_t slot);
void QWebFrame_UrlChanged(QWebFrame* self, QUrl* url);
void QWebFrame_connect_UrlChanged(QWebFrame* self, intptr_t slot);
void QWebFrame_InitialLayoutCompleted(QWebFrame* self);
void QWebFrame_connect_InitialLayoutCompleted(QWebFrame* self, intptr_t slot);
void QWebFrame_IconChanged(QWebFrame* self);
void QWebFrame_connect_IconChanged(QWebFrame* self, intptr_t slot);
void QWebFrame_ContentsSizeChanged(QWebFrame* self, QSize* size);
void QWebFrame_connect_ContentsSizeChanged(QWebFrame* self, intptr_t slot);
void QWebFrame_LoadStarted(QWebFrame* self);
void QWebFrame_connect_LoadStarted(QWebFrame* self, intptr_t slot);
void QWebFrame_LoadFinished(QWebFrame* self, bool ok);
void QWebFrame_connect_LoadFinished(QWebFrame* self, intptr_t slot);
void QWebFrame_PageChanged(QWebFrame* self);
void QWebFrame_connect_PageChanged(QWebFrame* self, intptr_t slot);
struct miqt_string QWebFrame_Tr2(const char* s, const char* c);
struct miqt_string QWebFrame_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebFrame_TrUtf82(const char* s, const char* c);
struct miqt_string QWebFrame_TrUtf83(const char* s, const char* c, int n);
void QWebFrame_Load2(QWebFrame* self, QNetworkRequest* request, int operation);
void QWebFrame_Load3(QWebFrame* self, QNetworkRequest* request, int operation, struct miqt_string body);
void QWebFrame_SetHtml2(QWebFrame* self, struct miqt_string html, QUrl* baseUrl);
void QWebFrame_SetContent2(QWebFrame* self, struct miqt_string data, struct miqt_string mimeType);
void QWebFrame_SetContent3(QWebFrame* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl);
void QWebFrame_AddToJavaScriptWindowObject3(QWebFrame* self, struct miqt_string name, QObject* object, int ownership);
void QWebFrame_Render22(QWebFrame* self, QPainter* param1, QRegion* clip);
void QWebFrame_Render3(QWebFrame* self, QPainter* param1, int layer, QRegion* clip);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
