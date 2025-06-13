#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINEPAGE_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINEPAGE_H

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
class QMenu;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPageLayout;
class QPointF;
class QRect;
class QSizeF;
class QTimerEvent;
class QUrl;
class QWebChannel;
class QWebEngineCertificateError;
class QWebEngineClientCertificateSelection;
class QWebEngineContextMenuData;
class QWebEngineFindTextResult;
class QWebEngineFullScreenRequest;
class QWebEngineHistory;
class QWebEngineHttpRequest;
class QWebEnginePage;
class QWebEngineProfile;
class QWebEngineRegisterProtocolHandlerRequest;
class QWebEngineScriptCollection;
class QWebEngineSettings;
class QWebEngineUrlRequestInterceptor;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QAuthenticator QAuthenticator;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPageLayout QPageLayout;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QSizeF QSizeF;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QWebChannel QWebChannel;
typedef struct QWebEngineCertificateError QWebEngineCertificateError;
typedef struct QWebEngineClientCertificateSelection QWebEngineClientCertificateSelection;
typedef struct QWebEngineContextMenuData QWebEngineContextMenuData;
typedef struct QWebEngineFindTextResult QWebEngineFindTextResult;
typedef struct QWebEngineFullScreenRequest QWebEngineFullScreenRequest;
typedef struct QWebEngineHistory QWebEngineHistory;
typedef struct QWebEngineHttpRequest QWebEngineHttpRequest;
typedef struct QWebEnginePage QWebEnginePage;
typedef struct QWebEngineProfile QWebEngineProfile;
typedef struct QWebEngineRegisterProtocolHandlerRequest QWebEngineRegisterProtocolHandlerRequest;
typedef struct QWebEngineScriptCollection QWebEngineScriptCollection;
typedef struct QWebEngineSettings QWebEngineSettings;
typedef struct QWebEngineUrlRequestInterceptor QWebEngineUrlRequestInterceptor;
typedef struct QWidget QWidget;
#endif

QWebEnginePage* QWebEnginePage_new();
QWebEnginePage* QWebEnginePage_new2(QWebEngineProfile* profile);
QWebEnginePage* QWebEnginePage_new3(QObject* parent);
QWebEnginePage* QWebEnginePage_new4(QWebEngineProfile* profile, QObject* parent);
void QWebEnginePage_virtbase(QWebEnginePage* src, QObject** outptr_QObject);
QMetaObject* QWebEnginePage_metaObject(const QWebEnginePage* self);
void* QWebEnginePage_metacast(QWebEnginePage* self, const char* param1);
struct miqt_string QWebEnginePage_tr(const char* s);
struct miqt_string QWebEnginePage_trUtf8(const char* s);
QWebEngineHistory* QWebEnginePage_history(const QWebEnginePage* self);
void QWebEnginePage_setView(QWebEnginePage* self, QWidget* view);
QWidget* QWebEnginePage_view(const QWebEnginePage* self);
bool QWebEnginePage_hasSelection(const QWebEnginePage* self);
struct miqt_string QWebEnginePage_selectedText(const QWebEnginePage* self);
QWebEngineProfile* QWebEnginePage_profile(const QWebEnginePage* self);
QAction* QWebEnginePage_action(const QWebEnginePage* self, int action);
void QWebEnginePage_triggerAction(QWebEnginePage* self, int action, bool checked);
void QWebEnginePage_replaceMisspelledWord(QWebEnginePage* self, struct miqt_string replacement);
bool QWebEnginePage_event(QWebEnginePage* self, QEvent* param1);
void QWebEnginePage_findText(QWebEnginePage* self, struct miqt_string subString);
QMenu* QWebEnginePage_createStandardContextMenu(QWebEnginePage* self);
void QWebEnginePage_setFeaturePermission(QWebEnginePage* self, QUrl* securityOrigin, int feature, int policy);
void QWebEnginePage_load(QWebEnginePage* self, QUrl* url);
void QWebEnginePage_loadWithRequest(QWebEnginePage* self, QWebEngineHttpRequest* request);
void QWebEnginePage_download(QWebEnginePage* self, QUrl* url);
void QWebEnginePage_setHtml(QWebEnginePage* self, struct miqt_string html);
void QWebEnginePage_setContent(QWebEnginePage* self, struct miqt_string data);
struct miqt_string QWebEnginePage_title(const QWebEnginePage* self);
void QWebEnginePage_setUrl(QWebEnginePage* self, QUrl* url);
QUrl* QWebEnginePage_url(const QWebEnginePage* self);
QUrl* QWebEnginePage_requestedUrl(const QWebEnginePage* self);
QUrl* QWebEnginePage_iconUrl(const QWebEnginePage* self);
QIcon* QWebEnginePage_icon(const QWebEnginePage* self);
double QWebEnginePage_zoomFactor(const QWebEnginePage* self);
void QWebEnginePage_setZoomFactor(QWebEnginePage* self, double factor);
QPointF* QWebEnginePage_scrollPosition(const QWebEnginePage* self);
QSizeF* QWebEnginePage_contentsSize(const QWebEnginePage* self);
void QWebEnginePage_runJavaScript(QWebEnginePage* self, struct miqt_string scriptSource);
void QWebEnginePage_runJavaScript2(QWebEnginePage* self, struct miqt_string scriptSource, unsigned int worldId);
QWebEngineScriptCollection* QWebEnginePage_scripts(QWebEnginePage* self);
QWebEngineSettings* QWebEnginePage_settings(const QWebEnginePage* self);
QWebChannel* QWebEnginePage_webChannel(const QWebEnginePage* self);
void QWebEnginePage_setWebChannel(QWebEnginePage* self, QWebChannel* webChannel);
void QWebEnginePage_setWebChannel2(QWebEnginePage* self, QWebChannel* param1, unsigned int worldId);
QColor* QWebEnginePage_backgroundColor(const QWebEnginePage* self);
void QWebEnginePage_setBackgroundColor(QWebEnginePage* self, QColor* color);
void QWebEnginePage_save(const QWebEnginePage* self, struct miqt_string filePath);
bool QWebEnginePage_isAudioMuted(const QWebEnginePage* self);
void QWebEnginePage_setAudioMuted(QWebEnginePage* self, bool muted);
bool QWebEnginePage_recentlyAudible(const QWebEnginePage* self);
long long QWebEnginePage_renderProcessPid(const QWebEnginePage* self);
void QWebEnginePage_printToPdf(QWebEnginePage* self, struct miqt_string filePath);
void QWebEnginePage_setInspectedPage(QWebEnginePage* self, QWebEnginePage* page);
QWebEnginePage* QWebEnginePage_inspectedPage(const QWebEnginePage* self);
void QWebEnginePage_setDevToolsPage(QWebEnginePage* self, QWebEnginePage* page);
QWebEnginePage* QWebEnginePage_devToolsPage(const QWebEnginePage* self);
void QWebEnginePage_setUrlRequestInterceptor(QWebEnginePage* self, QWebEngineUrlRequestInterceptor* interceptor);
QWebEngineContextMenuData* QWebEnginePage_contextMenuData(const QWebEnginePage* self);
int QWebEnginePage_lifecycleState(const QWebEnginePage* self);
void QWebEnginePage_setLifecycleState(QWebEnginePage* self, int state);
int QWebEnginePage_recommendedState(const QWebEnginePage* self);
bool QWebEnginePage_isVisible(const QWebEnginePage* self);
void QWebEnginePage_setVisible(QWebEnginePage* self, bool visible);
void QWebEnginePage_loadStarted(QWebEnginePage* self);
void QWebEnginePage_connect_loadStarted(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_loadProgress(QWebEnginePage* self, int progress);
void QWebEnginePage_connect_loadProgress(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_loadFinished(QWebEnginePage* self, bool ok);
void QWebEnginePage_connect_loadFinished(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_linkHovered(QWebEnginePage* self, struct miqt_string url);
void QWebEnginePage_connect_linkHovered(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_selectionChanged(QWebEnginePage* self);
void QWebEnginePage_connect_selectionChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_geometryChangeRequested(QWebEnginePage* self, QRect* geom);
void QWebEnginePage_connect_geometryChangeRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_windowCloseRequested(QWebEnginePage* self);
void QWebEnginePage_connect_windowCloseRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_featurePermissionRequested(QWebEnginePage* self, QUrl* securityOrigin, int feature);
void QWebEnginePage_connect_featurePermissionRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_featurePermissionRequestCanceled(QWebEnginePage* self, QUrl* securityOrigin, int feature);
void QWebEnginePage_connect_featurePermissionRequestCanceled(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_fullScreenRequested(QWebEnginePage* self, QWebEngineFullScreenRequest* fullScreenRequest);
void QWebEnginePage_connect_fullScreenRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_registerProtocolHandlerRequested(QWebEnginePage* self, QWebEngineRegisterProtocolHandlerRequest* request);
void QWebEnginePage_connect_registerProtocolHandlerRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_selectClientCertificate(QWebEnginePage* self, QWebEngineClientCertificateSelection* clientCertSelection);
void QWebEnginePage_connect_selectClientCertificate(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_authenticationRequired(QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator);
void QWebEnginePage_connect_authenticationRequired(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_proxyAuthenticationRequired(QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator, struct miqt_string proxyHost);
void QWebEnginePage_connect_proxyAuthenticationRequired(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_renderProcessTerminated(QWebEnginePage* self, int terminationStatus, int exitCode);
void QWebEnginePage_connect_renderProcessTerminated(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_titleChanged(QWebEnginePage* self, struct miqt_string title);
void QWebEnginePage_connect_titleChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_urlChanged(QWebEnginePage* self, QUrl* url);
void QWebEnginePage_connect_urlChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_iconUrlChanged(QWebEnginePage* self, QUrl* url);
void QWebEnginePage_connect_iconUrlChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_iconChanged(QWebEnginePage* self, QIcon* icon);
void QWebEnginePage_connect_iconChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_scrollPositionChanged(QWebEnginePage* self, QPointF* position);
void QWebEnginePage_connect_scrollPositionChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_contentsSizeChanged(QWebEnginePage* self, QSizeF* size);
void QWebEnginePage_connect_contentsSizeChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_audioMutedChanged(QWebEnginePage* self, bool muted);
void QWebEnginePage_connect_audioMutedChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_recentlyAudibleChanged(QWebEnginePage* self, bool recentlyAudible);
void QWebEnginePage_connect_recentlyAudibleChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_renderProcessPidChanged(QWebEnginePage* self, long long pid);
void QWebEnginePage_connect_renderProcessPidChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_pdfPrintingFinished(QWebEnginePage* self, struct miqt_string filePath, bool success);
void QWebEnginePage_connect_pdfPrintingFinished(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_printRequested(QWebEnginePage* self);
void QWebEnginePage_connect_printRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_visibleChanged(QWebEnginePage* self, bool visible);
void QWebEnginePage_connect_visibleChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_lifecycleStateChanged(QWebEnginePage* self, int state);
void QWebEnginePage_connect_lifecycleStateChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_recommendedStateChanged(QWebEnginePage* self, int state);
void QWebEnginePage_connect_recommendedStateChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_findTextFinished(QWebEnginePage* self, QWebEngineFindTextResult* result);
void QWebEnginePage_connect_findTextFinished(QWebEnginePage* self, intptr_t slot);
QWebEnginePage* QWebEnginePage_createWindow(QWebEnginePage* self, int type);
struct miqt_array /* of struct miqt_string */  QWebEnginePage_chooseFiles(QWebEnginePage* self, int mode, struct miqt_array /* of struct miqt_string */  oldFiles, struct miqt_array /* of struct miqt_string */  acceptedMimeTypes);
void QWebEnginePage_javaScriptAlert(QWebEnginePage* self, QUrl* securityOrigin, struct miqt_string msg);
bool QWebEnginePage_javaScriptConfirm(QWebEnginePage* self, QUrl* securityOrigin, struct miqt_string msg);
void QWebEnginePage_javaScriptConsoleMessage(QWebEnginePage* self, int level, struct miqt_string message, int lineNumber, struct miqt_string sourceID);
bool QWebEnginePage_certificateError(QWebEnginePage* self, QWebEngineCertificateError* certificateError);
bool QWebEnginePage_acceptNavigationRequest(QWebEnginePage* self, QUrl* url, int type, bool isMainFrame);
struct miqt_string QWebEnginePage_tr2(const char* s, const char* c);
struct miqt_string QWebEnginePage_tr3(const char* s, const char* c, int n);
struct miqt_string QWebEnginePage_trUtf82(const char* s, const char* c);
struct miqt_string QWebEnginePage_trUtf83(const char* s, const char* c, int n);
void QWebEnginePage_findText2(QWebEnginePage* self, struct miqt_string subString, int options);
void QWebEnginePage_download2(QWebEnginePage* self, QUrl* url, struct miqt_string filename);
void QWebEnginePage_setHtml2(QWebEnginePage* self, struct miqt_string html, QUrl* baseUrl);
void QWebEnginePage_setContent2(QWebEnginePage* self, struct miqt_string data, struct miqt_string mimeType);
void QWebEnginePage_setContent3(QWebEnginePage* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl);
void QWebEnginePage_save2(const QWebEnginePage* self, struct miqt_string filePath, int format);
void QWebEnginePage_printToPdf2(QWebEnginePage* self, struct miqt_string filePath, QPageLayout* layout);

bool QWebEnginePage_override_virtual_triggerAction(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_triggerAction(void* self, int action, bool checked);
bool QWebEnginePage_override_virtual_event(void* self, intptr_t slot);
bool QWebEnginePage_virtualbase_event(void* self, QEvent* param1);
bool QWebEnginePage_override_virtual_createWindow(void* self, intptr_t slot);
QWebEnginePage* QWebEnginePage_virtualbase_createWindow(void* self, int type);
bool QWebEnginePage_override_virtual_chooseFiles(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QWebEnginePage_virtualbase_chooseFiles(void* self, int mode, struct miqt_array /* of struct miqt_string */  oldFiles, struct miqt_array /* of struct miqt_string */  acceptedMimeTypes);
bool QWebEnginePage_override_virtual_javaScriptAlert(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_javaScriptAlert(void* self, QUrl* securityOrigin, struct miqt_string msg);
bool QWebEnginePage_override_virtual_javaScriptConfirm(void* self, intptr_t slot);
bool QWebEnginePage_virtualbase_javaScriptConfirm(void* self, QUrl* securityOrigin, struct miqt_string msg);
bool QWebEnginePage_override_virtual_javaScriptConsoleMessage(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_javaScriptConsoleMessage(void* self, int level, struct miqt_string message, int lineNumber, struct miqt_string sourceID);
bool QWebEnginePage_override_virtual_certificateError(void* self, intptr_t slot);
bool QWebEnginePage_virtualbase_certificateError(void* self, QWebEngineCertificateError* certificateError);
bool QWebEnginePage_override_virtual_acceptNavigationRequest(void* self, intptr_t slot);
bool QWebEnginePage_virtualbase_acceptNavigationRequest(void* self, QUrl* url, int type, bool isMainFrame);
bool QWebEnginePage_override_virtual_eventFilter(void* self, intptr_t slot);
bool QWebEnginePage_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QWebEnginePage_override_virtual_timerEvent(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QWebEnginePage_override_virtual_childEvent(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_childEvent(void* self, QChildEvent* event);
bool QWebEnginePage_override_virtual_customEvent(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_customEvent(void* self, QEvent* event);
bool QWebEnginePage_override_virtual_connectNotify(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QWebEnginePage_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QWebEnginePage_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QWebEnginePage_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QWebEnginePage_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QWebEnginePage_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QWebEnginePage_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QWebEnginePage_delete(QWebEnginePage* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
