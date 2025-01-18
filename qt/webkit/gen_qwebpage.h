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
QMetaObject* QWebPage_MetaObject(const QWebPage* self);
void* QWebPage_Metacast(QWebPage* self, const char* param1);
struct miqt_string QWebPage_Tr(const char* s);
struct miqt_string QWebPage_TrUtf8(const char* s);
QWebFrame* QWebPage_MainFrame(const QWebPage* self);
QWebFrame* QWebPage_CurrentFrame(const QWebPage* self);
QWebFrame* QWebPage_FrameAt(const QWebPage* self, QPoint* pos);
QWebHistory* QWebPage_History(const QWebPage* self);
QWebSettings* QWebPage_Settings(const QWebPage* self);
void QWebPage_SetView(QWebPage* self, QWidget* view);
QWidget* QWebPage_View(const QWebPage* self);
bool QWebPage_IsModified(const QWebPage* self);
QUndoStack* QWebPage_UndoStack(const QWebPage* self);
void QWebPage_SetNetworkAccessManager(QWebPage* self, QNetworkAccessManager* manager);
QNetworkAccessManager* QWebPage_NetworkAccessManager(const QWebPage* self);
void QWebPage_SetPluginFactory(QWebPage* self, QWebPluginFactory* factory);
QWebPluginFactory* QWebPage_PluginFactory(const QWebPage* self);
unsigned long long QWebPage_TotalBytes(const QWebPage* self);
unsigned long long QWebPage_BytesReceived(const QWebPage* self);
int QWebPage_VisibilityState(const QWebPage* self);
void QWebPage_SetVisibilityState(QWebPage* self, int visibilityState);
bool QWebPage_RecentlyAudible(const QWebPage* self);
bool QWebPage_HasSelection(const QWebPage* self);
struct miqt_string QWebPage_SelectedText(const QWebPage* self);
struct miqt_string QWebPage_SelectedHtml(const QWebPage* self);
QAction* QWebPage_Action(const QWebPage* self, int action);
QAction* QWebPage_CustomAction(const QWebPage* self, int action);
void QWebPage_TriggerAction(QWebPage* self, int action, bool checked);
void QWebPage_SetDevicePixelRatio(QWebPage* self, double ratio);
double QWebPage_DevicePixelRatio(const QWebPage* self);
void QWebPage_ResetDevicePixelRatio(QWebPage* self);
QSize* QWebPage_ViewportSize(const QWebPage* self);
void QWebPage_SetViewportSize(const QWebPage* self, QSize* size);
QWebPage__ViewportAttributes* QWebPage_ViewportAttributesForSize(const QWebPage* self, QSize* availableSize);
QSize* QWebPage_PreferredContentsSize(const QWebPage* self);
void QWebPage_SetPreferredContentsSize(const QWebPage* self, QSize* size);
void QWebPage_SetActualVisibleContentRect(const QWebPage* self, QRect* rect);
bool QWebPage_Event(QWebPage* self, QEvent* param1);
bool QWebPage_FocusNextPrevChild(QWebPage* self, bool next);
QVariant* QWebPage_InputMethodQuery(const QWebPage* self, int property);
bool QWebPage_FindText(QWebPage* self, struct miqt_string subString);
void QWebPage_SetForwardUnsupportedContent(QWebPage* self, bool forward);
bool QWebPage_ForwardUnsupportedContent(const QWebPage* self);
void QWebPage_SetLinkDelegationPolicy(QWebPage* self, int policy);
int QWebPage_LinkDelegationPolicy(const QWebPage* self);
void QWebPage_SetPalette(QWebPage* self, QPalette* palette);
QPalette* QWebPage_Palette(const QWebPage* self);
void QWebPage_SetContentEditable(QWebPage* self, bool editable);
bool QWebPage_IsContentEditable(const QWebPage* self);
bool QWebPage_SwallowContextMenuEvent(QWebPage* self, QContextMenuEvent* event);
void QWebPage_UpdatePositionDependentActions(QWebPage* self, QPoint* pos);
QMenu* QWebPage_CreateStandardContextMenu(QWebPage* self);
void QWebPage_SetFeaturePermission(QWebPage* self, QWebFrame* frame, int feature, int policy);
struct miqt_array /* of struct miqt_string */  QWebPage_SupportedContentTypes(const QWebPage* self);
bool QWebPage_SupportsContentType(const QWebPage* self, struct miqt_string mimeType);
bool QWebPage_Extension(QWebPage* self, int extension, QWebPage__ExtensionOption* option, QWebPage__ExtensionReturn* output);
bool QWebPage_SupportsExtension(const QWebPage* self, int extension);
bool QWebPage_ShouldInterruptJavaScript(QWebPage* self);
void QWebPage_LoadStarted(QWebPage* self);
void QWebPage_connect_LoadStarted(QWebPage* self, intptr_t slot);
void QWebPage_LoadProgress(QWebPage* self, int progress);
void QWebPage_connect_LoadProgress(QWebPage* self, intptr_t slot);
void QWebPage_LoadFinished(QWebPage* self, bool ok);
void QWebPage_connect_LoadFinished(QWebPage* self, intptr_t slot);
void QWebPage_LinkHovered(QWebPage* self, struct miqt_string link, struct miqt_string title, struct miqt_string textContent);
void QWebPage_connect_LinkHovered(QWebPage* self, intptr_t slot);
void QWebPage_StatusBarMessage(QWebPage* self, struct miqt_string text);
void QWebPage_connect_StatusBarMessage(QWebPage* self, intptr_t slot);
void QWebPage_SelectionChanged(QWebPage* self);
void QWebPage_connect_SelectionChanged(QWebPage* self, intptr_t slot);
void QWebPage_FrameCreated(QWebPage* self, QWebFrame* frame);
void QWebPage_connect_FrameCreated(QWebPage* self, intptr_t slot);
void QWebPage_GeometryChangeRequested(QWebPage* self, QRect* geom);
void QWebPage_connect_GeometryChangeRequested(QWebPage* self, intptr_t slot);
void QWebPage_RepaintRequested(QWebPage* self, QRect* dirtyRect);
void QWebPage_connect_RepaintRequested(QWebPage* self, intptr_t slot);
void QWebPage_ScrollRequested(QWebPage* self, int dx, int dy, QRect* scrollViewRect);
void QWebPage_connect_ScrollRequested(QWebPage* self, intptr_t slot);
void QWebPage_WindowCloseRequested(QWebPage* self);
void QWebPage_connect_WindowCloseRequested(QWebPage* self, intptr_t slot);
void QWebPage_PrintRequested(QWebPage* self, QWebFrame* frame);
void QWebPage_connect_PrintRequested(QWebPage* self, intptr_t slot);
void QWebPage_LinkClicked(QWebPage* self, QUrl* url);
void QWebPage_connect_LinkClicked(QWebPage* self, intptr_t slot);
void QWebPage_ToolBarVisibilityChangeRequested(QWebPage* self, bool visible);
void QWebPage_connect_ToolBarVisibilityChangeRequested(QWebPage* self, intptr_t slot);
void QWebPage_StatusBarVisibilityChangeRequested(QWebPage* self, bool visible);
void QWebPage_connect_StatusBarVisibilityChangeRequested(QWebPage* self, intptr_t slot);
void QWebPage_MenuBarVisibilityChangeRequested(QWebPage* self, bool visible);
void QWebPage_connect_MenuBarVisibilityChangeRequested(QWebPage* self, intptr_t slot);
void QWebPage_UnsupportedContent(QWebPage* self, QNetworkReply* reply);
void QWebPage_connect_UnsupportedContent(QWebPage* self, intptr_t slot);
void QWebPage_DownloadRequested(QWebPage* self, QNetworkRequest* request);
void QWebPage_connect_DownloadRequested(QWebPage* self, intptr_t slot);
void QWebPage_FocusedElementChanged(QWebPage* self, QWebElement* element);
void QWebPage_connect_FocusedElementChanged(QWebPage* self, intptr_t slot);
void QWebPage_MicroFocusChanged(QWebPage* self);
void QWebPage_connect_MicroFocusChanged(QWebPage* self, intptr_t slot);
void QWebPage_ContentsChanged(QWebPage* self);
void QWebPage_connect_ContentsChanged(QWebPage* self, intptr_t slot);
void QWebPage_DatabaseQuotaExceeded(QWebPage* self, QWebFrame* frame, struct miqt_string databaseName);
void QWebPage_connect_DatabaseQuotaExceeded(QWebPage* self, intptr_t slot);
void QWebPage_ApplicationCacheQuotaExceeded(QWebPage* self, QWebSecurityOrigin* origin, unsigned long long defaultOriginQuota, unsigned long long totalSpaceNeeded);
void QWebPage_connect_ApplicationCacheQuotaExceeded(QWebPage* self, intptr_t slot);
void QWebPage_SaveFrameStateRequested(QWebPage* self, QWebFrame* frame, QWebHistoryItem* item);
void QWebPage_connect_SaveFrameStateRequested(QWebPage* self, intptr_t slot);
void QWebPage_RestoreFrameStateRequested(QWebPage* self, QWebFrame* frame);
void QWebPage_connect_RestoreFrameStateRequested(QWebPage* self, intptr_t slot);
void QWebPage_ViewportChangeRequested(QWebPage* self);
void QWebPage_connect_ViewportChangeRequested(QWebPage* self, intptr_t slot);
void QWebPage_FeaturePermissionRequested(QWebPage* self, QWebFrame* frame, int feature);
void QWebPage_connect_FeaturePermissionRequested(QWebPage* self, intptr_t slot);
void QWebPage_FeaturePermissionRequestCanceled(QWebPage* self, QWebFrame* frame, int feature);
void QWebPage_connect_FeaturePermissionRequestCanceled(QWebPage* self, intptr_t slot);
void QWebPage_FullScreenRequested(QWebPage* self, QWebFullScreenRequest* fullScreenRequest);
void QWebPage_connect_FullScreenRequested(QWebPage* self, intptr_t slot);
void QWebPage_ConsoleMessageReceived(QWebPage* self, int source, int level, struct miqt_string message, int lineNumber, struct miqt_string sourceID);
void QWebPage_connect_ConsoleMessageReceived(QWebPage* self, intptr_t slot);
void QWebPage_RecentlyAudibleChanged(QWebPage* self, bool recentlyAudible);
void QWebPage_connect_RecentlyAudibleChanged(QWebPage* self, intptr_t slot);
QWebPage* QWebPage_CreateWindow(QWebPage* self, int typeVal);
QObject* QWebPage_CreatePlugin(QWebPage* self, struct miqt_string classid, QUrl* url, struct miqt_array /* of struct miqt_string */  paramNames, struct miqt_array /* of struct miqt_string */  paramValues);
bool QWebPage_AcceptNavigationRequest(QWebPage* self, QWebFrame* frame, QNetworkRequest* request, int typeVal);
struct miqt_string QWebPage_ChooseFile(QWebPage* self, QWebFrame* originatingFrame, struct miqt_string oldFile);
void QWebPage_JavaScriptAlert(QWebPage* self, QWebFrame* originatingFrame, struct miqt_string msg);
bool QWebPage_JavaScriptConfirm(QWebPage* self, QWebFrame* originatingFrame, struct miqt_string msg);
void QWebPage_JavaScriptConsoleMessage(QWebPage* self, struct miqt_string message, int lineNumber, struct miqt_string sourceID);
struct miqt_string QWebPage_UserAgentForUrl(const QWebPage* self, QUrl* url);
struct miqt_string QWebPage_Tr2(const char* s, const char* c);
struct miqt_string QWebPage_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebPage_TrUtf82(const char* s, const char* c);
struct miqt_string QWebPage_TrUtf83(const char* s, const char* c, int n);
bool QWebPage_FindText2(QWebPage* self, struct miqt_string subString, int options);
bool QWebPage_override_virtual_TriggerAction(void* self, intptr_t slot);
void QWebPage_virtualbase_TriggerAction(void* self, int action, bool checked);
bool QWebPage_override_virtual_Event(void* self, intptr_t slot);
bool QWebPage_virtualbase_Event(void* self, QEvent* param1);
bool QWebPage_override_virtual_Extension(void* self, intptr_t slot);
bool QWebPage_virtualbase_Extension(void* self, int extension, QWebPage__ExtensionOption* option, QWebPage__ExtensionReturn* output);
bool QWebPage_override_virtual_SupportsExtension(void* self, intptr_t slot);
bool QWebPage_virtualbase_SupportsExtension(const void* self, int extension);
bool QWebPage_override_virtual_ShouldInterruptJavaScript(void* self, intptr_t slot);
bool QWebPage_virtualbase_ShouldInterruptJavaScript(void* self);
bool QWebPage_override_virtual_CreateWindow(void* self, intptr_t slot);
QWebPage* QWebPage_virtualbase_CreateWindow(void* self, int typeVal);
bool QWebPage_override_virtual_CreatePlugin(void* self, intptr_t slot);
QObject* QWebPage_virtualbase_CreatePlugin(void* self, struct miqt_string classid, QUrl* url, struct miqt_array /* of struct miqt_string */  paramNames, struct miqt_array /* of struct miqt_string */  paramValues);
bool QWebPage_override_virtual_AcceptNavigationRequest(void* self, intptr_t slot);
bool QWebPage_virtualbase_AcceptNavigationRequest(void* self, QWebFrame* frame, QNetworkRequest* request, int typeVal);
bool QWebPage_override_virtual_ChooseFile(void* self, intptr_t slot);
struct miqt_string QWebPage_virtualbase_ChooseFile(void* self, QWebFrame* originatingFrame, struct miqt_string oldFile);
bool QWebPage_override_virtual_JavaScriptAlert(void* self, intptr_t slot);
void QWebPage_virtualbase_JavaScriptAlert(void* self, QWebFrame* originatingFrame, struct miqt_string msg);
bool QWebPage_override_virtual_JavaScriptConfirm(void* self, intptr_t slot);
bool QWebPage_virtualbase_JavaScriptConfirm(void* self, QWebFrame* originatingFrame, struct miqt_string msg);
bool QWebPage_override_virtual_JavaScriptConsoleMessage(void* self, intptr_t slot);
void QWebPage_virtualbase_JavaScriptConsoleMessage(void* self, struct miqt_string message, int lineNumber, struct miqt_string sourceID);
bool QWebPage_override_virtual_UserAgentForUrl(void* self, intptr_t slot);
struct miqt_string QWebPage_virtualbase_UserAgentForUrl(const void* self, QUrl* url);
bool QWebPage_override_virtual_EventFilter(void* self, intptr_t slot);
bool QWebPage_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QWebPage_override_virtual_TimerEvent(void* self, intptr_t slot);
void QWebPage_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QWebPage_override_virtual_ChildEvent(void* self, intptr_t slot);
void QWebPage_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QWebPage_override_virtual_CustomEvent(void* self, intptr_t slot);
void QWebPage_virtualbase_CustomEvent(void* self, QEvent* event);
bool QWebPage_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QWebPage_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QWebPage_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QWebPage_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QWebPage_Delete(QWebPage* self);

QWebPage__ViewportAttributes* QWebPage__ViewportAttributes_new();
QWebPage__ViewportAttributes* QWebPage__ViewportAttributes_new2(QWebPage__ViewportAttributes* other);
void QWebPage__ViewportAttributes_OperatorAssign(QWebPage__ViewportAttributes* self, QWebPage__ViewportAttributes* other);
double QWebPage__ViewportAttributes_InitialScaleFactor(const QWebPage__ViewportAttributes* self);
double QWebPage__ViewportAttributes_MinimumScaleFactor(const QWebPage__ViewportAttributes* self);
double QWebPage__ViewportAttributes_MaximumScaleFactor(const QWebPage__ViewportAttributes* self);
double QWebPage__ViewportAttributes_DevicePixelRatio(const QWebPage__ViewportAttributes* self);
bool QWebPage__ViewportAttributes_IsUserScalable(const QWebPage__ViewportAttributes* self);
bool QWebPage__ViewportAttributes_IsValid(const QWebPage__ViewportAttributes* self);
QSizeF* QWebPage__ViewportAttributes_Size(const QWebPage__ViewportAttributes* self);
void QWebPage__ViewportAttributes_Delete(QWebPage__ViewportAttributes* self);

QWebPage__ExtensionOption* QWebPage__ExtensionOption_new(QWebPage__ExtensionOption* param1);
void QWebPage__ExtensionOption_Delete(QWebPage__ExtensionOption* self);

QWebPage__ExtensionReturn* QWebPage__ExtensionReturn_new(QWebPage__ExtensionReturn* param1);
QWebPage__ExtensionReturn* QWebPage__ExtensionReturn_new2();
void QWebPage__ExtensionReturn_Delete(QWebPage__ExtensionReturn* self);

void QWebPage__ChooseMultipleFilesExtensionOption_virtbase(QWebPage__ChooseMultipleFilesExtensionOption* src, QWebPage__ExtensionOption** outptr_QWebPage__ExtensionOption);
void QWebPage__ChooseMultipleFilesExtensionOption_Delete(QWebPage__ChooseMultipleFilesExtensionOption* self);

void QWebPage__ChooseMultipleFilesExtensionReturn_virtbase(QWebPage__ChooseMultipleFilesExtensionReturn* src, QWebPage__ExtensionReturn** outptr_QWebPage__ExtensionReturn);
void QWebPage__ChooseMultipleFilesExtensionReturn_Delete(QWebPage__ChooseMultipleFilesExtensionReturn* self);

QWebPage__ErrorPageExtensionOption* QWebPage__ErrorPageExtensionOption_new(QWebPage__ErrorPageExtensionOption* param1);
void QWebPage__ErrorPageExtensionOption_virtbase(QWebPage__ErrorPageExtensionOption* src, QWebPage__ExtensionOption** outptr_QWebPage__ExtensionOption);
void QWebPage__ErrorPageExtensionOption_OperatorAssign(QWebPage__ErrorPageExtensionOption* self, QWebPage__ErrorPageExtensionOption* param1);
void QWebPage__ErrorPageExtensionOption_Delete(QWebPage__ErrorPageExtensionOption* self);

QWebPage__ErrorPageExtensionReturn* QWebPage__ErrorPageExtensionReturn_new();
QWebPage__ErrorPageExtensionReturn* QWebPage__ErrorPageExtensionReturn_new2(QWebPage__ErrorPageExtensionReturn* param1);
void QWebPage__ErrorPageExtensionReturn_virtbase(QWebPage__ErrorPageExtensionReturn* src, QWebPage__ExtensionReturn** outptr_QWebPage__ExtensionReturn);
void QWebPage__ErrorPageExtensionReturn_OperatorAssign(QWebPage__ErrorPageExtensionReturn* self, QWebPage__ErrorPageExtensionReturn* param1);
void QWebPage__ErrorPageExtensionReturn_Delete(QWebPage__ErrorPageExtensionReturn* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
