#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINEPAGE_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINEPAGE_H

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
class QAuthenticator;
class QChildEvent;
class QColor;
class QEvent;
class QIcon;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPageLayout;
class QPageRanges;
class QPointF;
class QRect;
class QSizeF;
class QTimerEvent;
class QUrl;
class QWebChannel;
class QWebEngineCertificateError;
class QWebEngineClientCertificateSelection;
class QWebEngineFileSystemAccessRequest;
class QWebEngineFindTextResult;
class QWebEngineFullScreenRequest;
class QWebEngineHistory;
class QWebEngineHttpRequest;
class QWebEngineLoadingInfo;
class QWebEngineNavigationRequest;
class QWebEngineNewWindowRequest;
class QWebEnginePage;
class QWebEngineProfile;
class QWebEngineQuotaRequest;
class QWebEngineRegisterProtocolHandlerRequest;
class QWebEngineScriptCollection;
class QWebEngineSettings;
class QWebEngineUrlRequestInterceptor;
#else
typedef struct QAction QAction;
typedef struct QAuthenticator QAuthenticator;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPageLayout QPageLayout;
typedef struct QPageRanges QPageRanges;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QSizeF QSizeF;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QWebChannel QWebChannel;
typedef struct QWebEngineCertificateError QWebEngineCertificateError;
typedef struct QWebEngineClientCertificateSelection QWebEngineClientCertificateSelection;
typedef struct QWebEngineFileSystemAccessRequest QWebEngineFileSystemAccessRequest;
typedef struct QWebEngineFindTextResult QWebEngineFindTextResult;
typedef struct QWebEngineFullScreenRequest QWebEngineFullScreenRequest;
typedef struct QWebEngineHistory QWebEngineHistory;
typedef struct QWebEngineHttpRequest QWebEngineHttpRequest;
typedef struct QWebEngineLoadingInfo QWebEngineLoadingInfo;
typedef struct QWebEngineNavigationRequest QWebEngineNavigationRequest;
typedef struct QWebEngineNewWindowRequest QWebEngineNewWindowRequest;
typedef struct QWebEnginePage QWebEnginePage;
typedef struct QWebEngineProfile QWebEngineProfile;
typedef struct QWebEngineQuotaRequest QWebEngineQuotaRequest;
typedef struct QWebEngineRegisterProtocolHandlerRequest QWebEngineRegisterProtocolHandlerRequest;
typedef struct QWebEngineScriptCollection QWebEngineScriptCollection;
typedef struct QWebEngineSettings QWebEngineSettings;
typedef struct QWebEngineUrlRequestInterceptor QWebEngineUrlRequestInterceptor;
#endif

QWebEnginePage* QWebEnginePage_new();
QWebEnginePage* QWebEnginePage_new2(QWebEngineProfile* profile);
QWebEnginePage* QWebEnginePage_new3(QObject* parent);
QWebEnginePage* QWebEnginePage_new4(QWebEngineProfile* profile, QObject* parent);
void QWebEnginePage_virtbase(QWebEnginePage* src, QObject** outptr_QObject);
QMetaObject* QWebEnginePage_MetaObject(const QWebEnginePage* self);
void* QWebEnginePage_Metacast(QWebEnginePage* self, const char* param1);
struct miqt_string QWebEnginePage_Tr(const char* s);
QWebEngineHistory* QWebEnginePage_History(const QWebEnginePage* self);
bool QWebEnginePage_HasSelection(const QWebEnginePage* self);
struct miqt_string QWebEnginePage_SelectedText(const QWebEnginePage* self);
QWebEngineProfile* QWebEnginePage_Profile(const QWebEnginePage* self);
QAction* QWebEnginePage_Action(const QWebEnginePage* self, int action);
void QWebEnginePage_TriggerAction(QWebEnginePage* self, int action, bool checked);
void QWebEnginePage_ReplaceMisspelledWord(QWebEnginePage* self, struct miqt_string replacement);
bool QWebEnginePage_Event(QWebEnginePage* self, QEvent* param1);
void QWebEnginePage_SetFeaturePermission(QWebEnginePage* self, QUrl* securityOrigin, int feature, int policy);
bool QWebEnginePage_IsLoading(const QWebEnginePage* self);
void QWebEnginePage_Load(QWebEnginePage* self, QUrl* url);
void QWebEnginePage_LoadWithRequest(QWebEnginePage* self, QWebEngineHttpRequest* request);
void QWebEnginePage_Download(QWebEnginePage* self, QUrl* url);
void QWebEnginePage_SetHtml(QWebEnginePage* self, struct miqt_string html);
void QWebEnginePage_SetContent(QWebEnginePage* self, struct miqt_string data);
struct miqt_string QWebEnginePage_Title(const QWebEnginePage* self);
void QWebEnginePage_SetUrl(QWebEnginePage* self, QUrl* url);
QUrl* QWebEnginePage_Url(const QWebEnginePage* self);
QUrl* QWebEnginePage_RequestedUrl(const QWebEnginePage* self);
QUrl* QWebEnginePage_IconUrl(const QWebEnginePage* self);
QIcon* QWebEnginePage_Icon(const QWebEnginePage* self);
double QWebEnginePage_ZoomFactor(const QWebEnginePage* self);
void QWebEnginePage_SetZoomFactor(QWebEnginePage* self, double factor);
QPointF* QWebEnginePage_ScrollPosition(const QWebEnginePage* self);
QSizeF* QWebEnginePage_ContentsSize(const QWebEnginePage* self);
QWebEngineScriptCollection* QWebEnginePage_Scripts(QWebEnginePage* self);
QWebEngineSettings* QWebEnginePage_Settings(const QWebEnginePage* self);
QWebChannel* QWebEnginePage_WebChannel(const QWebEnginePage* self);
void QWebEnginePage_SetWebChannel(QWebEnginePage* self, QWebChannel* param1);
QColor* QWebEnginePage_BackgroundColor(const QWebEnginePage* self);
void QWebEnginePage_SetBackgroundColor(QWebEnginePage* self, QColor* color);
void QWebEnginePage_Save(const QWebEnginePage* self, struct miqt_string filePath);
bool QWebEnginePage_IsAudioMuted(const QWebEnginePage* self);
void QWebEnginePage_SetAudioMuted(QWebEnginePage* self, bool muted);
bool QWebEnginePage_RecentlyAudible(const QWebEnginePage* self);
long long QWebEnginePage_RenderProcessPid(const QWebEnginePage* self);
void QWebEnginePage_PrintToPdf(QWebEnginePage* self, struct miqt_string filePath);
void QWebEnginePage_SetInspectedPage(QWebEnginePage* self, QWebEnginePage* page);
QWebEnginePage* QWebEnginePage_InspectedPage(const QWebEnginePage* self);
void QWebEnginePage_SetDevToolsPage(QWebEnginePage* self, QWebEnginePage* page);
QWebEnginePage* QWebEnginePage_DevToolsPage(const QWebEnginePage* self);
void QWebEnginePage_SetUrlRequestInterceptor(QWebEnginePage* self, QWebEngineUrlRequestInterceptor* interceptor);
int QWebEnginePage_LifecycleState(const QWebEnginePage* self);
void QWebEnginePage_SetLifecycleState(QWebEnginePage* self, int state);
int QWebEnginePage_RecommendedState(const QWebEnginePage* self);
bool QWebEnginePage_IsVisible(const QWebEnginePage* self);
void QWebEnginePage_SetVisible(QWebEnginePage* self, bool visible);
void QWebEnginePage_AcceptAsNewWindow(QWebEnginePage* self, QWebEngineNewWindowRequest* request);
void QWebEnginePage_LoadStarted(QWebEnginePage* self);
void QWebEnginePage_connect_LoadStarted(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_LoadProgress(QWebEnginePage* self, int progress);
void QWebEnginePage_connect_LoadProgress(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_LoadFinished(QWebEnginePage* self, bool ok);
void QWebEnginePage_connect_LoadFinished(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_LoadingChanged(QWebEnginePage* self, QWebEngineLoadingInfo* loadingInfo);
void QWebEnginePage_connect_LoadingChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_LinkHovered(QWebEnginePage* self, struct miqt_string url);
void QWebEnginePage_connect_LinkHovered(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_SelectionChanged(QWebEnginePage* self);
void QWebEnginePage_connect_SelectionChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_GeometryChangeRequested(QWebEnginePage* self, QRect* geom);
void QWebEnginePage_connect_GeometryChangeRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_WindowCloseRequested(QWebEnginePage* self);
void QWebEnginePage_connect_WindowCloseRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_FeaturePermissionRequested(QWebEnginePage* self, QUrl* securityOrigin, int feature);
void QWebEnginePage_connect_FeaturePermissionRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_FeaturePermissionRequestCanceled(QWebEnginePage* self, QUrl* securityOrigin, int feature);
void QWebEnginePage_connect_FeaturePermissionRequestCanceled(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_FullScreenRequested(QWebEnginePage* self, QWebEngineFullScreenRequest* fullScreenRequest);
void QWebEnginePage_connect_FullScreenRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_QuotaRequested(QWebEnginePage* self, QWebEngineQuotaRequest* quotaRequest);
void QWebEnginePage_connect_QuotaRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_RegisterProtocolHandlerRequested(QWebEnginePage* self, QWebEngineRegisterProtocolHandlerRequest* request);
void QWebEnginePage_connect_RegisterProtocolHandlerRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_FileSystemAccessRequested(QWebEnginePage* self, QWebEngineFileSystemAccessRequest* request);
void QWebEnginePage_connect_FileSystemAccessRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_SelectClientCertificate(QWebEnginePage* self, QWebEngineClientCertificateSelection* clientCertSelection);
void QWebEnginePage_connect_SelectClientCertificate(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_AuthenticationRequired(QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator);
void QWebEnginePage_connect_AuthenticationRequired(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_ProxyAuthenticationRequired(QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator, struct miqt_string proxyHost);
void QWebEnginePage_connect_ProxyAuthenticationRequired(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_RenderProcessTerminated(QWebEnginePage* self, int terminationStatus, int exitCode);
void QWebEnginePage_connect_RenderProcessTerminated(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_CertificateError(QWebEnginePage* self, QWebEngineCertificateError* certificateError);
void QWebEnginePage_connect_CertificateError(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_NavigationRequested(QWebEnginePage* self, QWebEngineNavigationRequest* request);
void QWebEnginePage_connect_NavigationRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_NewWindowRequested(QWebEnginePage* self, QWebEngineNewWindowRequest* request);
void QWebEnginePage_connect_NewWindowRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_TitleChanged(QWebEnginePage* self, struct miqt_string title);
void QWebEnginePage_connect_TitleChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_UrlChanged(QWebEnginePage* self, QUrl* url);
void QWebEnginePage_connect_UrlChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_IconUrlChanged(QWebEnginePage* self, QUrl* url);
void QWebEnginePage_connect_IconUrlChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_IconChanged(QWebEnginePage* self, QIcon* icon);
void QWebEnginePage_connect_IconChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_ScrollPositionChanged(QWebEnginePage* self, QPointF* position);
void QWebEnginePage_connect_ScrollPositionChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_ContentsSizeChanged(QWebEnginePage* self, QSizeF* size);
void QWebEnginePage_connect_ContentsSizeChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_AudioMutedChanged(QWebEnginePage* self, bool muted);
void QWebEnginePage_connect_AudioMutedChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_RecentlyAudibleChanged(QWebEnginePage* self, bool recentlyAudible);
void QWebEnginePage_connect_RecentlyAudibleChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_RenderProcessPidChanged(QWebEnginePage* self, long long pid);
void QWebEnginePage_connect_RenderProcessPidChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_PdfPrintingFinished(QWebEnginePage* self, struct miqt_string filePath, bool success);
void QWebEnginePage_connect_PdfPrintingFinished(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_PrintRequested(QWebEnginePage* self);
void QWebEnginePage_connect_PrintRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_VisibleChanged(QWebEnginePage* self, bool visible);
void QWebEnginePage_connect_VisibleChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_LifecycleStateChanged(QWebEnginePage* self, int state);
void QWebEnginePage_connect_LifecycleStateChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_RecommendedStateChanged(QWebEnginePage* self, int state);
void QWebEnginePage_connect_RecommendedStateChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_FindTextFinished(QWebEnginePage* self, QWebEngineFindTextResult* result);
void QWebEnginePage_connect_FindTextFinished(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_QAboutToDelete(QWebEnginePage* self);
void QWebEnginePage_connect_QAboutToDelete(QWebEnginePage* self, intptr_t slot);
QWebEnginePage* QWebEnginePage_CreateWindow(QWebEnginePage* self, int typeVal);
struct miqt_array /* of struct miqt_string */  QWebEnginePage_ChooseFiles(QWebEnginePage* self, int mode, struct miqt_array /* of struct miqt_string */  oldFiles, struct miqt_array /* of struct miqt_string */  acceptedMimeTypes);
void QWebEnginePage_JavaScriptAlert(QWebEnginePage* self, QUrl* securityOrigin, struct miqt_string msg);
bool QWebEnginePage_JavaScriptConfirm(QWebEnginePage* self, QUrl* securityOrigin, struct miqt_string msg);
void QWebEnginePage_JavaScriptConsoleMessage(QWebEnginePage* self, int level, struct miqt_string message, int lineNumber, struct miqt_string sourceID);
bool QWebEnginePage_AcceptNavigationRequest(QWebEnginePage* self, QUrl* url, int typeVal, bool isMainFrame);
struct miqt_string QWebEnginePage_Tr2(const char* s, const char* c);
struct miqt_string QWebEnginePage_Tr3(const char* s, const char* c, int n);
void QWebEnginePage_Download2(QWebEnginePage* self, QUrl* url, struct miqt_string filename);
void QWebEnginePage_SetHtml2(QWebEnginePage* self, struct miqt_string html, QUrl* baseUrl);
void QWebEnginePage_SetContent2(QWebEnginePage* self, struct miqt_string data, struct miqt_string mimeType);
void QWebEnginePage_SetContent3(QWebEnginePage* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl);
void QWebEnginePage_SetWebChannel2(QWebEnginePage* self, QWebChannel* param1, unsigned int worldId);
void QWebEnginePage_Save2(const QWebEnginePage* self, struct miqt_string filePath, int format);
void QWebEnginePage_PrintToPdf2(QWebEnginePage* self, struct miqt_string filePath, QPageLayout* layout);
void QWebEnginePage_PrintToPdf3(QWebEnginePage* self, struct miqt_string filePath, QPageLayout* layout, QPageRanges* ranges);
void QWebEnginePage_override_virtual_TriggerAction(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_TriggerAction(void* self, int action, bool checked);
void QWebEnginePage_override_virtual_Event(void* self, intptr_t slot);
bool QWebEnginePage_virtualbase_Event(void* self, QEvent* param1);
void QWebEnginePage_override_virtual_CreateWindow(void* self, intptr_t slot);
QWebEnginePage* QWebEnginePage_virtualbase_CreateWindow(void* self, int typeVal);
void QWebEnginePage_override_virtual_ChooseFiles(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QWebEnginePage_virtualbase_ChooseFiles(void* self, int mode, struct miqt_array /* of struct miqt_string */  oldFiles, struct miqt_array /* of struct miqt_string */  acceptedMimeTypes);
void QWebEnginePage_override_virtual_JavaScriptAlert(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_JavaScriptAlert(void* self, QUrl* securityOrigin, struct miqt_string msg);
void QWebEnginePage_override_virtual_JavaScriptConfirm(void* self, intptr_t slot);
bool QWebEnginePage_virtualbase_JavaScriptConfirm(void* self, QUrl* securityOrigin, struct miqt_string msg);
void QWebEnginePage_override_virtual_JavaScriptConsoleMessage(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_JavaScriptConsoleMessage(void* self, int level, struct miqt_string message, int lineNumber, struct miqt_string sourceID);
void QWebEnginePage_override_virtual_AcceptNavigationRequest(void* self, intptr_t slot);
bool QWebEnginePage_virtualbase_AcceptNavigationRequest(void* self, QUrl* url, int typeVal, bool isMainFrame);
void QWebEnginePage_override_virtual_EventFilter(void* self, intptr_t slot);
bool QWebEnginePage_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QWebEnginePage_override_virtual_TimerEvent(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QWebEnginePage_override_virtual_ChildEvent(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QWebEnginePage_override_virtual_CustomEvent(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_CustomEvent(void* self, QEvent* event);
void QWebEnginePage_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QWebEnginePage_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QWebEnginePage_Delete(QWebEnginePage* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
