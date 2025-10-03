#pragma once
#ifndef MIQT_QT_WEBKIT_GEN_QWEBPAGE_H
#define MIQT_QT_WEBKIT_GEN_QWEBPAGE_H

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
class QChildEvent;
class QContextMenuEvent;
class QEvent;
class QMenu;
class QMetaMethod;
class QMetaObject;
class QNetworkAccessManager;
class QNetworkReply;
class QNetworkRequest;
class QObject;
class QPalette;
class QPoint;
class QRect;
class QSize;
class QSizeF;
class QTimerEvent;
class QUndoStack;
class QUrl;
class QVariant;
class QWebElement;
class QWebFrame;
class QWebFullScreenRequest;
class QWebHistory;
class QWebHistoryItem;
class QWebPage;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebPage__ChooseMultipleFilesExtensionOption)
typedef QWebPage::ChooseMultipleFilesExtensionOption QWebPage__ChooseMultipleFilesExtensionOption;
#else
class QWebPage__ChooseMultipleFilesExtensionOption;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebPage__ChooseMultipleFilesExtensionReturn)
typedef QWebPage::ChooseMultipleFilesExtensionReturn QWebPage__ChooseMultipleFilesExtensionReturn;
#else
class QWebPage__ChooseMultipleFilesExtensionReturn;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebPage__ErrorPageExtensionOption)
typedef QWebPage::ErrorPageExtensionOption QWebPage__ErrorPageExtensionOption;
#else
class QWebPage__ErrorPageExtensionOption;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebPage__ErrorPageExtensionReturn)
typedef QWebPage::ErrorPageExtensionReturn QWebPage__ErrorPageExtensionReturn;
#else
class QWebPage__ErrorPageExtensionReturn;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebPage__ExtensionOption)
typedef QWebPage::ExtensionOption QWebPage__ExtensionOption;
#else
class QWebPage__ExtensionOption;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebPage__ExtensionReturn)
typedef QWebPage::ExtensionReturn QWebPage__ExtensionReturn;
#else
class QWebPage__ExtensionReturn;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebPage__ViewportAttributes)
typedef QWebPage::ViewportAttributes QWebPage__ViewportAttributes;
#else
class QWebPage__ViewportAttributes;
#endif
class QWebPluginFactory;
class QWebSecurityOrigin;
class QWebSettings;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QEvent QEvent;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkAccessManager QNetworkAccessManager;
typedef struct QNetworkReply QNetworkReply;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QObject QObject;
typedef struct QPalette QPalette;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUndoStack QUndoStack;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWebElement QWebElement;
typedef struct QWebFrame QWebFrame;
typedef struct QWebFullScreenRequest QWebFullScreenRequest;
typedef struct QWebHistory QWebHistory;
typedef struct QWebHistoryItem QWebHistoryItem;
typedef struct QWebPage QWebPage;
typedef struct QWebPage__ChooseMultipleFilesExtensionOption QWebPage__ChooseMultipleFilesExtensionOption;
typedef struct QWebPage__ChooseMultipleFilesExtensionReturn QWebPage__ChooseMultipleFilesExtensionReturn;
typedef struct QWebPage__ErrorPageExtensionOption QWebPage__ErrorPageExtensionOption;
typedef struct QWebPage__ErrorPageExtensionReturn QWebPage__ErrorPageExtensionReturn;
typedef struct QWebPage__ExtensionOption QWebPage__ExtensionOption;
typedef struct QWebPage__ExtensionReturn QWebPage__ExtensionReturn;
typedef struct QWebPage__ViewportAttributes QWebPage__ViewportAttributes;
typedef struct QWebPluginFactory QWebPluginFactory;
typedef struct QWebSecurityOrigin QWebSecurityOrigin;
typedef struct QWebSettings QWebSettings;
typedef struct QWidget QWidget;
#endif

QWebPage* QWebPage_new();
QWebPage* QWebPage_new2(QObject* parent);
void QWebPage_virtbase(QWebPage* src, QObject** outptr_QObject);
QMetaObject* QWebPage_metaObject(const QWebPage* self);
void* QWebPage_metacast(QWebPage* self, const char* param1);
struct miqt_string QWebPage_tr(const char* s);
struct miqt_string QWebPage_trUtf8(const char* s);
QWebFrame* QWebPage_mainFrame(const QWebPage* self);
QWebFrame* QWebPage_currentFrame(const QWebPage* self);
QWebFrame* QWebPage_frameAt(const QWebPage* self, QPoint* pos);
QWebHistory* QWebPage_history(const QWebPage* self);
QWebSettings* QWebPage_settings(const QWebPage* self);
void QWebPage_setView(QWebPage* self, QWidget* view);
QWidget* QWebPage_view(const QWebPage* self);
bool QWebPage_isModified(const QWebPage* self);
QUndoStack* QWebPage_undoStack(const QWebPage* self);
void QWebPage_setNetworkAccessManager(QWebPage* self, QNetworkAccessManager* manager);
QNetworkAccessManager* QWebPage_networkAccessManager(const QWebPage* self);
void QWebPage_setPluginFactory(QWebPage* self, QWebPluginFactory* factory);
QWebPluginFactory* QWebPage_pluginFactory(const QWebPage* self);
unsigned long long QWebPage_totalBytes(const QWebPage* self);
unsigned long long QWebPage_bytesReceived(const QWebPage* self);
int QWebPage_visibilityState(const QWebPage* self);
void QWebPage_setVisibilityState(QWebPage* self, int visibilityState);
bool QWebPage_recentlyAudible(const QWebPage* self);
bool QWebPage_hasSelection(const QWebPage* self);
struct miqt_string QWebPage_selectedText(const QWebPage* self);
struct miqt_string QWebPage_selectedHtml(const QWebPage* self);
QAction* QWebPage_action(const QWebPage* self, int action);
QAction* QWebPage_customAction(const QWebPage* self, int action);
void QWebPage_triggerAction(QWebPage* self, int action, bool checked);
void QWebPage_setDevicePixelRatio(QWebPage* self, double ratio);
double QWebPage_devicePixelRatio(const QWebPage* self);
void QWebPage_resetDevicePixelRatio(QWebPage* self);
QSize* QWebPage_viewportSize(const QWebPage* self);
void QWebPage_setViewportSize(const QWebPage* self, QSize* size);
QWebPage__ViewportAttributes* QWebPage_viewportAttributesForSize(const QWebPage* self, QSize* availableSize);
QSize* QWebPage_preferredContentsSize(const QWebPage* self);
void QWebPage_setPreferredContentsSize(const QWebPage* self, QSize* size);
void QWebPage_setActualVisibleContentRect(const QWebPage* self, QRect* rect);
bool QWebPage_event(QWebPage* self, QEvent* param1);
bool QWebPage_focusNextPrevChild(QWebPage* self, bool next);
QVariant* QWebPage_inputMethodQuery(const QWebPage* self, int property);
bool QWebPage_findText(QWebPage* self, struct miqt_string subString);
void QWebPage_setForwardUnsupportedContent(QWebPage* self, bool forward);
bool QWebPage_forwardUnsupportedContent(const QWebPage* self);
void QWebPage_setLinkDelegationPolicy(QWebPage* self, int policy);
int QWebPage_linkDelegationPolicy(const QWebPage* self);
void QWebPage_setPalette(QWebPage* self, QPalette* palette);
QPalette* QWebPage_palette(const QWebPage* self);
void QWebPage_setContentEditable(QWebPage* self, bool editable);
bool QWebPage_isContentEditable(const QWebPage* self);
bool QWebPage_swallowContextMenuEvent(QWebPage* self, QContextMenuEvent* event);
void QWebPage_updatePositionDependentActions(QWebPage* self, QPoint* pos);
QMenu* QWebPage_createStandardContextMenu(QWebPage* self);
void QWebPage_setFeaturePermission(QWebPage* self, QWebFrame* frame, int feature, int policy);
struct miqt_array /* of struct miqt_string */  QWebPage_supportedContentTypes(const QWebPage* self);
bool QWebPage_supportsContentType(const QWebPage* self, struct miqt_string mimeType);
bool QWebPage_extension(QWebPage* self, int extension, QWebPage__ExtensionOption* option, QWebPage__ExtensionReturn* output);
bool QWebPage_supportsExtension(const QWebPage* self, int extension);
bool QWebPage_shouldInterruptJavaScript(QWebPage* self);
void QWebPage_loadStarted(QWebPage* self);
void QWebPage_connect_loadStarted(QWebPage* self, intptr_t slot);
void QWebPage_loadProgress(QWebPage* self, int progress);
void QWebPage_connect_loadProgress(QWebPage* self, intptr_t slot);
void QWebPage_loadFinished(QWebPage* self, bool ok);
void QWebPage_connect_loadFinished(QWebPage* self, intptr_t slot);
void QWebPage_linkHovered(QWebPage* self, struct miqt_string link, struct miqt_string title, struct miqt_string textContent);
void QWebPage_connect_linkHovered(QWebPage* self, intptr_t slot);
void QWebPage_statusBarMessage(QWebPage* self, struct miqt_string text);
void QWebPage_connect_statusBarMessage(QWebPage* self, intptr_t slot);
void QWebPage_selectionChanged(QWebPage* self);
void QWebPage_connect_selectionChanged(QWebPage* self, intptr_t slot);
void QWebPage_frameCreated(QWebPage* self, QWebFrame* frame);
void QWebPage_connect_frameCreated(QWebPage* self, intptr_t slot);
void QWebPage_geometryChangeRequested(QWebPage* self, QRect* geom);
void QWebPage_connect_geometryChangeRequested(QWebPage* self, intptr_t slot);
void QWebPage_repaintRequested(QWebPage* self, QRect* dirtyRect);
void QWebPage_connect_repaintRequested(QWebPage* self, intptr_t slot);
void QWebPage_scrollRequested(QWebPage* self, int dx, int dy, QRect* scrollViewRect);
void QWebPage_connect_scrollRequested(QWebPage* self, intptr_t slot);
void QWebPage_windowCloseRequested(QWebPage* self);
void QWebPage_connect_windowCloseRequested(QWebPage* self, intptr_t slot);
void QWebPage_printRequested(QWebPage* self, QWebFrame* frame);
void QWebPage_connect_printRequested(QWebPage* self, intptr_t slot);
void QWebPage_linkClicked(QWebPage* self, QUrl* url);
void QWebPage_connect_linkClicked(QWebPage* self, intptr_t slot);
void QWebPage_toolBarVisibilityChangeRequested(QWebPage* self, bool visible);
void QWebPage_connect_toolBarVisibilityChangeRequested(QWebPage* self, intptr_t slot);
void QWebPage_statusBarVisibilityChangeRequested(QWebPage* self, bool visible);
void QWebPage_connect_statusBarVisibilityChangeRequested(QWebPage* self, intptr_t slot);
void QWebPage_menuBarVisibilityChangeRequested(QWebPage* self, bool visible);
void QWebPage_connect_menuBarVisibilityChangeRequested(QWebPage* self, intptr_t slot);
void QWebPage_unsupportedContent(QWebPage* self, QNetworkReply* reply);
void QWebPage_connect_unsupportedContent(QWebPage* self, intptr_t slot);
void QWebPage_downloadRequested(QWebPage* self, QNetworkRequest* request);
void QWebPage_connect_downloadRequested(QWebPage* self, intptr_t slot);
void QWebPage_focusedElementChanged(QWebPage* self, QWebElement* element);
void QWebPage_connect_focusedElementChanged(QWebPage* self, intptr_t slot);
void QWebPage_microFocusChanged(QWebPage* self);
void QWebPage_connect_microFocusChanged(QWebPage* self, intptr_t slot);
void QWebPage_contentsChanged(QWebPage* self);
void QWebPage_connect_contentsChanged(QWebPage* self, intptr_t slot);
void QWebPage_databaseQuotaExceeded(QWebPage* self, QWebFrame* frame, struct miqt_string databaseName);
void QWebPage_connect_databaseQuotaExceeded(QWebPage* self, intptr_t slot);
void QWebPage_applicationCacheQuotaExceeded(QWebPage* self, QWebSecurityOrigin* origin, unsigned long long defaultOriginQuota, unsigned long long totalSpaceNeeded);
void QWebPage_connect_applicationCacheQuotaExceeded(QWebPage* self, intptr_t slot);
void QWebPage_saveFrameStateRequested(QWebPage* self, QWebFrame* frame, QWebHistoryItem* item);
void QWebPage_connect_saveFrameStateRequested(QWebPage* self, intptr_t slot);
void QWebPage_restoreFrameStateRequested(QWebPage* self, QWebFrame* frame);
void QWebPage_connect_restoreFrameStateRequested(QWebPage* self, intptr_t slot);
void QWebPage_viewportChangeRequested(QWebPage* self);
void QWebPage_connect_viewportChangeRequested(QWebPage* self, intptr_t slot);
void QWebPage_featurePermissionRequested(QWebPage* self, QWebFrame* frame, int feature);
void QWebPage_connect_featurePermissionRequested(QWebPage* self, intptr_t slot);
void QWebPage_featurePermissionRequestCanceled(QWebPage* self, QWebFrame* frame, int feature);
void QWebPage_connect_featurePermissionRequestCanceled(QWebPage* self, intptr_t slot);
void QWebPage_fullScreenRequested(QWebPage* self, QWebFullScreenRequest* fullScreenRequest);
void QWebPage_connect_fullScreenRequested(QWebPage* self, intptr_t slot);
void QWebPage_consoleMessageReceived(QWebPage* self, int source, int level, struct miqt_string message, int lineNumber, struct miqt_string sourceID);
void QWebPage_connect_consoleMessageReceived(QWebPage* self, intptr_t slot);
void QWebPage_recentlyAudibleChanged(QWebPage* self, bool recentlyAudible);
void QWebPage_connect_recentlyAudibleChanged(QWebPage* self, intptr_t slot);
QWebPage* QWebPage_createWindow(QWebPage* self, int type);
QObject* QWebPage_createPlugin(QWebPage* self, struct miqt_string classid, QUrl* url, struct miqt_array /* of struct miqt_string */  paramNames, struct miqt_array /* of struct miqt_string */  paramValues);
bool QWebPage_acceptNavigationRequest(QWebPage* self, QWebFrame* frame, QNetworkRequest* request, int type);
struct miqt_string QWebPage_chooseFile(QWebPage* self, QWebFrame* originatingFrame, struct miqt_string oldFile);
void QWebPage_javaScriptAlert(QWebPage* self, QWebFrame* originatingFrame, struct miqt_string msg);
bool QWebPage_javaScriptConfirm(QWebPage* self, QWebFrame* originatingFrame, struct miqt_string msg);
void QWebPage_javaScriptConsoleMessage(QWebPage* self, struct miqt_string message, int lineNumber, struct miqt_string sourceID);
struct miqt_string QWebPage_userAgentForUrl(const QWebPage* self, QUrl* url);
struct miqt_string QWebPage_tr2(const char* s, const char* c);
struct miqt_string QWebPage_tr3(const char* s, const char* c, int n);
struct miqt_string QWebPage_trUtf82(const char* s, const char* c);
struct miqt_string QWebPage_trUtf83(const char* s, const char* c, int n);
bool QWebPage_findText2(QWebPage* self, struct miqt_string subString, int options);

bool QWebPage_override_virtual_triggerAction(void* self, intptr_t slot);
void QWebPage_virtualbase_triggerAction(void* self, int action, bool checked);
bool QWebPage_override_virtual_event(void* self, intptr_t slot);
bool QWebPage_virtualbase_event(void* self, QEvent* param1);
bool QWebPage_override_virtual_extension(void* self, intptr_t slot);
bool QWebPage_virtualbase_extension(void* self, int extension, QWebPage__ExtensionOption* option, QWebPage__ExtensionReturn* output);
bool QWebPage_override_virtual_supportsExtension(void* self, intptr_t slot);
bool QWebPage_virtualbase_supportsExtension(const void* self, int extension);
bool QWebPage_override_virtual_shouldInterruptJavaScript(void* self, intptr_t slot);
bool QWebPage_virtualbase_shouldInterruptJavaScript(void* self);
bool QWebPage_override_virtual_createWindow(void* self, intptr_t slot);
QWebPage* QWebPage_virtualbase_createWindow(void* self, int type);
bool QWebPage_override_virtual_createPlugin(void* self, intptr_t slot);
QObject* QWebPage_virtualbase_createPlugin(void* self, struct miqt_string classid, QUrl* url, struct miqt_array /* of struct miqt_string */  paramNames, struct miqt_array /* of struct miqt_string */  paramValues);
bool QWebPage_override_virtual_acceptNavigationRequest(void* self, intptr_t slot);
bool QWebPage_virtualbase_acceptNavigationRequest(void* self, QWebFrame* frame, QNetworkRequest* request, int type);
bool QWebPage_override_virtual_chooseFile(void* self, intptr_t slot);
struct miqt_string QWebPage_virtualbase_chooseFile(void* self, QWebFrame* originatingFrame, struct miqt_string oldFile);
bool QWebPage_override_virtual_javaScriptAlert(void* self, intptr_t slot);
void QWebPage_virtualbase_javaScriptAlert(void* self, QWebFrame* originatingFrame, struct miqt_string msg);
bool QWebPage_override_virtual_javaScriptConfirm(void* self, intptr_t slot);
bool QWebPage_virtualbase_javaScriptConfirm(void* self, QWebFrame* originatingFrame, struct miqt_string msg);
bool QWebPage_override_virtual_javaScriptConsoleMessage(void* self, intptr_t slot);
void QWebPage_virtualbase_javaScriptConsoleMessage(void* self, struct miqt_string message, int lineNumber, struct miqt_string sourceID);
bool QWebPage_override_virtual_userAgentForUrl(void* self, intptr_t slot);
struct miqt_string QWebPage_virtualbase_userAgentForUrl(const void* self, QUrl* url);
bool QWebPage_override_virtual_eventFilter(void* self, intptr_t slot);
bool QWebPage_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QWebPage_override_virtual_timerEvent(void* self, intptr_t slot);
void QWebPage_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QWebPage_override_virtual_childEvent(void* self, intptr_t slot);
void QWebPage_virtualbase_childEvent(void* self, QChildEvent* event);
bool QWebPage_override_virtual_customEvent(void* self, intptr_t slot);
void QWebPage_virtualbase_customEvent(void* self, QEvent* event);
bool QWebPage_override_virtual_connectNotify(void* self, intptr_t slot);
void QWebPage_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QWebPage_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QWebPage_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QWebPage_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QWebPage_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QWebPage_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QWebPage_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QWebPage_delete(QWebPage* self);

QWebPage__ViewportAttributes* QWebPage__ViewportAttributes_new();
QWebPage__ViewportAttributes* QWebPage__ViewportAttributes_new2(QWebPage__ViewportAttributes* other);
void QWebPage__ViewportAttributes_operatorAssign(QWebPage__ViewportAttributes* self, QWebPage__ViewportAttributes* other);
double QWebPage__ViewportAttributes_initialScaleFactor(const QWebPage__ViewportAttributes* self);
double QWebPage__ViewportAttributes_minimumScaleFactor(const QWebPage__ViewportAttributes* self);
double QWebPage__ViewportAttributes_maximumScaleFactor(const QWebPage__ViewportAttributes* self);
double QWebPage__ViewportAttributes_devicePixelRatio(const QWebPage__ViewportAttributes* self);
bool QWebPage__ViewportAttributes_isUserScalable(const QWebPage__ViewportAttributes* self);
bool QWebPage__ViewportAttributes_isValid(const QWebPage__ViewportAttributes* self);
QSizeF* QWebPage__ViewportAttributes_size(const QWebPage__ViewportAttributes* self);

void QWebPage__ViewportAttributes_delete(QWebPage__ViewportAttributes* self);

QWebPage__ExtensionOption* QWebPage__ExtensionOption_new(QWebPage__ExtensionOption* param1);
void QWebPage__ExtensionOption_operatorAssign(QWebPage__ExtensionOption* self, QWebPage__ExtensionOption* param1);

void QWebPage__ExtensionOption_delete(QWebPage__ExtensionOption* self);

QWebPage__ExtensionReturn* QWebPage__ExtensionReturn_new(QWebPage__ExtensionReturn* param1);
QWebPage__ExtensionReturn* QWebPage__ExtensionReturn_new2();
void QWebPage__ExtensionReturn_operatorAssign(QWebPage__ExtensionReturn* self, QWebPage__ExtensionReturn* param1);

void QWebPage__ExtensionReturn_delete(QWebPage__ExtensionReturn* self);

void QWebPage__ChooseMultipleFilesExtensionOption_virtbase(QWebPage__ChooseMultipleFilesExtensionOption* src, QWebPage__ExtensionOption** outptr_QWebPage__ExtensionOption);
void QWebPage__ChooseMultipleFilesExtensionOption_delete(QWebPage__ChooseMultipleFilesExtensionOption* self);

void QWebPage__ChooseMultipleFilesExtensionReturn_virtbase(QWebPage__ChooseMultipleFilesExtensionReturn* src, QWebPage__ExtensionReturn** outptr_QWebPage__ExtensionReturn);
void QWebPage__ChooseMultipleFilesExtensionReturn_delete(QWebPage__ChooseMultipleFilesExtensionReturn* self);

QWebPage__ErrorPageExtensionOption* QWebPage__ErrorPageExtensionOption_new(QWebPage__ErrorPageExtensionOption* param1);
void QWebPage__ErrorPageExtensionOption_virtbase(QWebPage__ErrorPageExtensionOption* src, QWebPage__ExtensionOption** outptr_QWebPage__ExtensionOption);
void QWebPage__ErrorPageExtensionOption_operatorAssign(QWebPage__ErrorPageExtensionOption* self, QWebPage__ErrorPageExtensionOption* param1);

void QWebPage__ErrorPageExtensionOption_delete(QWebPage__ErrorPageExtensionOption* self);

QWebPage__ErrorPageExtensionReturn* QWebPage__ErrorPageExtensionReturn_new();
QWebPage__ErrorPageExtensionReturn* QWebPage__ErrorPageExtensionReturn_new2(QWebPage__ErrorPageExtensionReturn* param1);
void QWebPage__ErrorPageExtensionReturn_virtbase(QWebPage__ErrorPageExtensionReturn* src, QWebPage__ExtensionReturn** outptr_QWebPage__ExtensionReturn);
void QWebPage__ErrorPageExtensionReturn_operatorAssign(QWebPage__ErrorPageExtensionReturn* self, QWebPage__ErrorPageExtensionReturn* param1);

void QWebPage__ErrorPageExtensionReturn_delete(QWebPage__ErrorPageExtensionReturn* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
