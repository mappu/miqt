#include <QAction>
#include <QChildEvent>
#include <QContextMenuEvent>
#include <QEvent>
#include <QList>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QObject>
#include <QPalette>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUndoStack>
#include <QUrl>
#include <QVariant>
#include <QWebElement>
#include <QWebFrame>
#include <QWebFullScreenRequest>
#include <QWebHistory>
#include <QWebHistoryItem>
#include <QWebPage>
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebPage__ChooseMultipleFilesExtensionOption
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebPage__ChooseMultipleFilesExtensionReturn
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebPage__ErrorPageExtensionOption
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebPage__ErrorPageExtensionReturn
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebPage__ExtensionOption
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebPage__ExtensionReturn
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebPage__ViewportAttributes
#include <QWebPluginFactory>
#include <QWebSecurityOrigin>
#include <QWebSettings>
#include <QWidget>
#include <qwebpage.h>
#include "gen_qwebpage.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebPage_LoadStarted(intptr_t);
void miqt_exec_callback_QWebPage_LoadProgress(intptr_t, int);
void miqt_exec_callback_QWebPage_LoadFinished(intptr_t, bool);
void miqt_exec_callback_QWebPage_LinkHovered(intptr_t, struct miqt_string, struct miqt_string, struct miqt_string);
void miqt_exec_callback_QWebPage_StatusBarMessage(intptr_t, struct miqt_string);
void miqt_exec_callback_QWebPage_SelectionChanged(intptr_t);
void miqt_exec_callback_QWebPage_FrameCreated(intptr_t, QWebFrame*);
void miqt_exec_callback_QWebPage_GeometryChangeRequested(intptr_t, QRect*);
void miqt_exec_callback_QWebPage_RepaintRequested(intptr_t, QRect*);
void miqt_exec_callback_QWebPage_ScrollRequested(intptr_t, int, int, QRect*);
void miqt_exec_callback_QWebPage_WindowCloseRequested(intptr_t);
void miqt_exec_callback_QWebPage_PrintRequested(intptr_t, QWebFrame*);
void miqt_exec_callback_QWebPage_LinkClicked(intptr_t, QUrl*);
void miqt_exec_callback_QWebPage_ToolBarVisibilityChangeRequested(intptr_t, bool);
void miqt_exec_callback_QWebPage_StatusBarVisibilityChangeRequested(intptr_t, bool);
void miqt_exec_callback_QWebPage_MenuBarVisibilityChangeRequested(intptr_t, bool);
void miqt_exec_callback_QWebPage_UnsupportedContent(intptr_t, QNetworkReply*);
void miqt_exec_callback_QWebPage_DownloadRequested(intptr_t, QNetworkRequest*);
void miqt_exec_callback_QWebPage_FocusedElementChanged(intptr_t, QWebElement*);
void miqt_exec_callback_QWebPage_MicroFocusChanged(intptr_t);
void miqt_exec_callback_QWebPage_ContentsChanged(intptr_t);
void miqt_exec_callback_QWebPage_DatabaseQuotaExceeded(intptr_t, QWebFrame*, struct miqt_string);
void miqt_exec_callback_QWebPage_ApplicationCacheQuotaExceeded(intptr_t, QWebSecurityOrigin*, unsigned long long, unsigned long long);
void miqt_exec_callback_QWebPage_SaveFrameStateRequested(intptr_t, QWebFrame*, QWebHistoryItem*);
void miqt_exec_callback_QWebPage_RestoreFrameStateRequested(intptr_t, QWebFrame*);
void miqt_exec_callback_QWebPage_ViewportChangeRequested(intptr_t);
void miqt_exec_callback_QWebPage_FeaturePermissionRequested(intptr_t, QWebFrame*, int);
void miqt_exec_callback_QWebPage_FeaturePermissionRequestCanceled(intptr_t, QWebFrame*, int);
void miqt_exec_callback_QWebPage_FullScreenRequested(intptr_t, QWebFullScreenRequest*);
void miqt_exec_callback_QWebPage_ConsoleMessageReceived(intptr_t, int, int, struct miqt_string, int, struct miqt_string);
void miqt_exec_callback_QWebPage_RecentlyAudibleChanged(intptr_t, bool);
void miqt_exec_callback_QWebPage_TriggerAction(QWebPage*, intptr_t, int, bool);
bool miqt_exec_callback_QWebPage_Event(QWebPage*, intptr_t, QEvent*);
bool miqt_exec_callback_QWebPage_Extension(QWebPage*, intptr_t, int, QWebPage__ExtensionOption*, QWebPage__ExtensionReturn*);
bool miqt_exec_callback_QWebPage_SupportsExtension(const QWebPage*, intptr_t, int);
bool miqt_exec_callback_QWebPage_ShouldInterruptJavaScript(QWebPage*, intptr_t);
QWebPage* miqt_exec_callback_QWebPage_CreateWindow(QWebPage*, intptr_t, int);
QObject* miqt_exec_callback_QWebPage_CreatePlugin(QWebPage*, intptr_t, struct miqt_string, QUrl*, struct miqt_array /* of struct miqt_string */ , struct miqt_array /* of struct miqt_string */ );
bool miqt_exec_callback_QWebPage_AcceptNavigationRequest(QWebPage*, intptr_t, QWebFrame*, QNetworkRequest*, int);
struct miqt_string miqt_exec_callback_QWebPage_ChooseFile(QWebPage*, intptr_t, QWebFrame*, struct miqt_string);
void miqt_exec_callback_QWebPage_JavaScriptAlert(QWebPage*, intptr_t, QWebFrame*, struct miqt_string);
bool miqt_exec_callback_QWebPage_JavaScriptConfirm(QWebPage*, intptr_t, QWebFrame*, struct miqt_string);
void miqt_exec_callback_QWebPage_JavaScriptConsoleMessage(QWebPage*, intptr_t, struct miqt_string, int, struct miqt_string);
struct miqt_string miqt_exec_callback_QWebPage_UserAgentForUrl(const QWebPage*, intptr_t, QUrl*);
bool miqt_exec_callback_QWebPage_EventFilter(QWebPage*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebPage_TimerEvent(QWebPage*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebPage_ChildEvent(QWebPage*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebPage_CustomEvent(QWebPage*, intptr_t, QEvent*);
void miqt_exec_callback_QWebPage_ConnectNotify(QWebPage*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebPage_DisconnectNotify(QWebPage*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebPage final : public QWebPage {
public:

	MiqtVirtualQWebPage(): QWebPage() {};
	MiqtVirtualQWebPage(QObject* parent): QWebPage(parent) {};

	virtual ~MiqtVirtualQWebPage() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TriggerAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void triggerAction(QWebPage::WebAction action, bool checked) override {
		if (handle__TriggerAction == 0) {
			QWebPage::triggerAction(action, checked);
			return;
		}
		
		QWebPage::WebAction action_ret = action;
		int sigval1 = static_cast<int>(action_ret);
		bool sigval2 = checked;

		miqt_exec_callback_QWebPage_TriggerAction(this, handle__TriggerAction, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TriggerAction(int action, bool checked) {

		QWebPage::triggerAction(static_cast<QWebPage::WebAction>(action), checked);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QWebPage::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QWebPage_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QWebPage::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool extension(QWebPage::Extension extension, const QWebPage::ExtensionOption* option, QWebPage::ExtensionReturn* output) override {
		if (handle__Extension == 0) {
			return QWebPage::extension(extension, option, output);
		}
		
		QWebPage::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		QWebPage__ExtensionOption* sigval2 = (QWebPage__ExtensionOption*) option;
		QWebPage__ExtensionReturn* sigval3 = output;

		bool callback_return_value = miqt_exec_callback_QWebPage_Extension(this, handle__Extension, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Extension(int extension, QWebPage__ExtensionOption* option, QWebPage__ExtensionReturn* output) {

		return QWebPage::extension(static_cast<QWebPage::Extension>(extension), option, output);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QWebPage::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QWebPage::supportsExtension(extension);
		}
		
		QWebPage::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QWebPage_SupportsExtension(this, handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QWebPage::supportsExtension(static_cast<QWebPage::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShouldInterruptJavaScript = 0;

	// Subclass to allow providing a Go implementation
	virtual bool shouldInterruptJavaScript() override {
		if (handle__ShouldInterruptJavaScript == 0) {
			return QWebPage::shouldInterruptJavaScript();
		}
		

		bool callback_return_value = miqt_exec_callback_QWebPage_ShouldInterruptJavaScript(this, handle__ShouldInterruptJavaScript);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ShouldInterruptJavaScript() {

		return QWebPage::shouldInterruptJavaScript();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual QWebPage* createWindow(QWebPage::WebWindowType typeVal) override {
		if (handle__CreateWindow == 0) {
			return QWebPage::createWindow(typeVal);
		}
		
		QWebPage::WebWindowType typeVal_ret = typeVal;
		int sigval1 = static_cast<int>(typeVal_ret);

		QWebPage* callback_return_value = miqt_exec_callback_QWebPage_CreateWindow(this, handle__CreateWindow, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWebPage* virtualbase_CreateWindow(int typeVal) {

		return QWebPage::createWindow(static_cast<QWebPage::WebWindowType>(typeVal));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreatePlugin = 0;

	// Subclass to allow providing a Go implementation
	virtual QObject* createPlugin(const QString& classid, const QUrl& url, const QStringList& paramNames, const QStringList& paramValues) override {
		if (handle__CreatePlugin == 0) {
			return QWebPage::createPlugin(classid, url, paramNames, paramValues);
		}
		
		const QString classid_ret = classid;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray classid_b = classid_ret.toUtf8();
		struct miqt_string classid_ms;
		classid_ms.len = classid_b.length();
		classid_ms.data = static_cast<char*>(malloc(classid_ms.len));
		memcpy(classid_ms.data, classid_b.data(), classid_ms.len);
		struct miqt_string sigval1 = classid_ms;
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval2 = const_cast<QUrl*>(&url_ret);
		const QStringList& paramNames_ret = paramNames;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* paramNames_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * paramNames_ret.length()));
		for (size_t i = 0, e = paramNames_ret.length(); i < e; ++i) {
			QString paramNames_lv_ret = paramNames_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray paramNames_lv_b = paramNames_lv_ret.toUtf8();
			struct miqt_string paramNames_lv_ms;
			paramNames_lv_ms.len = paramNames_lv_b.length();
			paramNames_lv_ms.data = static_cast<char*>(malloc(paramNames_lv_ms.len));
			memcpy(paramNames_lv_ms.data, paramNames_lv_b.data(), paramNames_lv_ms.len);
			paramNames_arr[i] = paramNames_lv_ms;
		}
		struct miqt_array paramNames_out;
		paramNames_out.len = paramNames_ret.length();
		paramNames_out.data = static_cast<void*>(paramNames_arr);
		struct miqt_array /* of struct miqt_string */  sigval3 = paramNames_out;
		const QStringList& paramValues_ret = paramValues;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* paramValues_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * paramValues_ret.length()));
		for (size_t i = 0, e = paramValues_ret.length(); i < e; ++i) {
			QString paramValues_lv_ret = paramValues_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray paramValues_lv_b = paramValues_lv_ret.toUtf8();
			struct miqt_string paramValues_lv_ms;
			paramValues_lv_ms.len = paramValues_lv_b.length();
			paramValues_lv_ms.data = static_cast<char*>(malloc(paramValues_lv_ms.len));
			memcpy(paramValues_lv_ms.data, paramValues_lv_b.data(), paramValues_lv_ms.len);
			paramValues_arr[i] = paramValues_lv_ms;
		}
		struct miqt_array paramValues_out;
		paramValues_out.len = paramValues_ret.length();
		paramValues_out.data = static_cast<void*>(paramValues_arr);
		struct miqt_array /* of struct miqt_string */  sigval4 = paramValues_out;

		QObject* callback_return_value = miqt_exec_callback_QWebPage_CreatePlugin(this, handle__CreatePlugin, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QObject* virtualbase_CreatePlugin(struct miqt_string classid, QUrl* url, struct miqt_array /* of struct miqt_string */  paramNames, struct miqt_array /* of struct miqt_string */  paramValues) {
		QString classid_QString = QString::fromUtf8(classid.data, classid.len);
		QStringList paramNames_QList;
		paramNames_QList.reserve(paramNames.len);
		struct miqt_string* paramNames_arr = static_cast<struct miqt_string*>(paramNames.data);
		for(size_t i = 0; i < paramNames.len; ++i) {
			QString paramNames_arr_i_QString = QString::fromUtf8(paramNames_arr[i].data, paramNames_arr[i].len);
			paramNames_QList.push_back(paramNames_arr_i_QString);
		}
		QStringList paramValues_QList;
		paramValues_QList.reserve(paramValues.len);
		struct miqt_string* paramValues_arr = static_cast<struct miqt_string*>(paramValues.data);
		for(size_t i = 0; i < paramValues.len; ++i) {
			QString paramValues_arr_i_QString = QString::fromUtf8(paramValues_arr[i].data, paramValues_arr[i].len);
			paramValues_QList.push_back(paramValues_arr_i_QString);
		}

		return QWebPage::createPlugin(classid_QString, *url, paramNames_QList, paramValues_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AcceptNavigationRequest = 0;

	// Subclass to allow providing a Go implementation
	virtual bool acceptNavigationRequest(QWebFrame* frame, const QNetworkRequest& request, QWebPage::NavigationType typeVal) override {
		if (handle__AcceptNavigationRequest == 0) {
			return QWebPage::acceptNavigationRequest(frame, request, typeVal);
		}
		
		QWebFrame* sigval1 = frame;
		const QNetworkRequest& request_ret = request;
		// Cast returned reference into pointer
		QNetworkRequest* sigval2 = const_cast<QNetworkRequest*>(&request_ret);
		QWebPage::NavigationType typeVal_ret = typeVal;
		int sigval3 = static_cast<int>(typeVal_ret);

		bool callback_return_value = miqt_exec_callback_QWebPage_AcceptNavigationRequest(this, handle__AcceptNavigationRequest, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AcceptNavigationRequest(QWebFrame* frame, QNetworkRequest* request, int typeVal) {

		return QWebPage::acceptNavigationRequest(frame, *request, static_cast<QWebPage::NavigationType>(typeVal));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChooseFile = 0;

	// Subclass to allow providing a Go implementation
	virtual QString chooseFile(QWebFrame* originatingFrame, const QString& oldFile) override {
		if (handle__ChooseFile == 0) {
			return QWebPage::chooseFile(originatingFrame, oldFile);
		}
		
		QWebFrame* sigval1 = originatingFrame;
		const QString oldFile_ret = oldFile;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray oldFile_b = oldFile_ret.toUtf8();
		struct miqt_string oldFile_ms;
		oldFile_ms.len = oldFile_b.length();
		oldFile_ms.data = static_cast<char*>(malloc(oldFile_ms.len));
		memcpy(oldFile_ms.data, oldFile_b.data(), oldFile_ms.len);
		struct miqt_string sigval2 = oldFile_ms;

		struct miqt_string callback_return_value = miqt_exec_callback_QWebPage_ChooseFile(this, handle__ChooseFile, sigval1, sigval2);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_ChooseFile(QWebFrame* originatingFrame, struct miqt_string oldFile) {
		QString oldFile_QString = QString::fromUtf8(oldFile.data, oldFile.len);

		QString _ret = QWebPage::chooseFile(originatingFrame, oldFile_QString);
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__JavaScriptAlert = 0;

	// Subclass to allow providing a Go implementation
	virtual void javaScriptAlert(QWebFrame* originatingFrame, const QString& msg) override {
		if (handle__JavaScriptAlert == 0) {
			QWebPage::javaScriptAlert(originatingFrame, msg);
			return;
		}
		
		QWebFrame* sigval1 = originatingFrame;
		const QString msg_ret = msg;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray msg_b = msg_ret.toUtf8();
		struct miqt_string msg_ms;
		msg_ms.len = msg_b.length();
		msg_ms.data = static_cast<char*>(malloc(msg_ms.len));
		memcpy(msg_ms.data, msg_b.data(), msg_ms.len);
		struct miqt_string sigval2 = msg_ms;

		miqt_exec_callback_QWebPage_JavaScriptAlert(this, handle__JavaScriptAlert, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_JavaScriptAlert(QWebFrame* originatingFrame, struct miqt_string msg) {
		QString msg_QString = QString::fromUtf8(msg.data, msg.len);

		QWebPage::javaScriptAlert(originatingFrame, msg_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__JavaScriptConfirm = 0;

	// Subclass to allow providing a Go implementation
	virtual bool javaScriptConfirm(QWebFrame* originatingFrame, const QString& msg) override {
		if (handle__JavaScriptConfirm == 0) {
			return QWebPage::javaScriptConfirm(originatingFrame, msg);
		}
		
		QWebFrame* sigval1 = originatingFrame;
		const QString msg_ret = msg;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray msg_b = msg_ret.toUtf8();
		struct miqt_string msg_ms;
		msg_ms.len = msg_b.length();
		msg_ms.data = static_cast<char*>(malloc(msg_ms.len));
		memcpy(msg_ms.data, msg_b.data(), msg_ms.len);
		struct miqt_string sigval2 = msg_ms;

		bool callback_return_value = miqt_exec_callback_QWebPage_JavaScriptConfirm(this, handle__JavaScriptConfirm, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_JavaScriptConfirm(QWebFrame* originatingFrame, struct miqt_string msg) {
		QString msg_QString = QString::fromUtf8(msg.data, msg.len);

		return QWebPage::javaScriptConfirm(originatingFrame, msg_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__JavaScriptConsoleMessage = 0;

	// Subclass to allow providing a Go implementation
	virtual void javaScriptConsoleMessage(const QString& message, int lineNumber, const QString& sourceID) override {
		if (handle__JavaScriptConsoleMessage == 0) {
			QWebPage::javaScriptConsoleMessage(message, lineNumber, sourceID);
			return;
		}
		
		const QString message_ret = message;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray message_b = message_ret.toUtf8();
		struct miqt_string message_ms;
		message_ms.len = message_b.length();
		message_ms.data = static_cast<char*>(malloc(message_ms.len));
		memcpy(message_ms.data, message_b.data(), message_ms.len);
		struct miqt_string sigval1 = message_ms;
		int sigval2 = lineNumber;
		const QString sourceID_ret = sourceID;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray sourceID_b = sourceID_ret.toUtf8();
		struct miqt_string sourceID_ms;
		sourceID_ms.len = sourceID_b.length();
		sourceID_ms.data = static_cast<char*>(malloc(sourceID_ms.len));
		memcpy(sourceID_ms.data, sourceID_b.data(), sourceID_ms.len);
		struct miqt_string sigval3 = sourceID_ms;

		miqt_exec_callback_QWebPage_JavaScriptConsoleMessage(this, handle__JavaScriptConsoleMessage, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_JavaScriptConsoleMessage(struct miqt_string message, int lineNumber, struct miqt_string sourceID) {
		QString message_QString = QString::fromUtf8(message.data, message.len);
		QString sourceID_QString = QString::fromUtf8(sourceID.data, sourceID.len);

		QWebPage::javaScriptConsoleMessage(message_QString, static_cast<int>(lineNumber), sourceID_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UserAgentForUrl = 0;

	// Subclass to allow providing a Go implementation
	virtual QString userAgentForUrl(const QUrl& url) const override {
		if (handle__UserAgentForUrl == 0) {
			return QWebPage::userAgentForUrl(url);
		}
		
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QWebPage_UserAgentForUrl(this, handle__UserAgentForUrl, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_UserAgentForUrl(QUrl* url) const {

		QString _ret = QWebPage::userAgentForUrl(*url);
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QWebPage::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebPage_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QWebPage::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QWebPage::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebPage_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QWebPage::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QWebPage::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebPage_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QWebPage::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QWebPage::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebPage_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QWebPage::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QWebPage::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebPage_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QWebPage::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QWebPage::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebPage_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QWebPage::disconnectNotify(*signal);

	}

};

QWebPage* QWebPage_new() {
	return new MiqtVirtualQWebPage();
}

QWebPage* QWebPage_new2(QObject* parent) {
	return new MiqtVirtualQWebPage(parent);
}

void QWebPage_virtbase(QWebPage* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebPage_MetaObject(const QWebPage* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebPage_Metacast(QWebPage* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebPage_Tr(const char* s) {
	QString _ret = QWebPage::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPage_TrUtf8(const char* s) {
	QString _ret = QWebPage::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebFrame* QWebPage_MainFrame(const QWebPage* self) {
	return self->mainFrame();
}

QWebFrame* QWebPage_CurrentFrame(const QWebPage* self) {
	return self->currentFrame();
}

QWebFrame* QWebPage_FrameAt(const QWebPage* self, QPoint* pos) {
	return self->frameAt(*pos);
}

QWebHistory* QWebPage_History(const QWebPage* self) {
	return self->history();
}

QWebSettings* QWebPage_Settings(const QWebPage* self) {
	return self->settings();
}

void QWebPage_SetView(QWebPage* self, QWidget* view) {
	self->setView(view);
}

QWidget* QWebPage_View(const QWebPage* self) {
	return self->view();
}

bool QWebPage_IsModified(const QWebPage* self) {
	return self->isModified();
}

QUndoStack* QWebPage_UndoStack(const QWebPage* self) {
	return self->undoStack();
}

void QWebPage_SetNetworkAccessManager(QWebPage* self, QNetworkAccessManager* manager) {
	self->setNetworkAccessManager(manager);
}

QNetworkAccessManager* QWebPage_NetworkAccessManager(const QWebPage* self) {
	return self->networkAccessManager();
}

void QWebPage_SetPluginFactory(QWebPage* self, QWebPluginFactory* factory) {
	self->setPluginFactory(factory);
}

QWebPluginFactory* QWebPage_PluginFactory(const QWebPage* self) {
	return self->pluginFactory();
}

unsigned long long QWebPage_TotalBytes(const QWebPage* self) {
	quint64 _ret = self->totalBytes();
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QWebPage_BytesReceived(const QWebPage* self) {
	quint64 _ret = self->bytesReceived();
	return static_cast<unsigned long long>(_ret);
}

int QWebPage_VisibilityState(const QWebPage* self) {
	QWebPage::VisibilityState _ret = self->visibilityState();
	return static_cast<int>(_ret);
}

void QWebPage_SetVisibilityState(QWebPage* self, int visibilityState) {
	self->setVisibilityState(static_cast<QWebPage::VisibilityState>(visibilityState));
}

bool QWebPage_RecentlyAudible(const QWebPage* self) {
	return self->recentlyAudible();
}

bool QWebPage_HasSelection(const QWebPage* self) {
	return self->hasSelection();
}

struct miqt_string QWebPage_SelectedText(const QWebPage* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPage_SelectedHtml(const QWebPage* self) {
	QString _ret = self->selectedHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QWebPage_Action(const QWebPage* self, int action) {
	return self->action(static_cast<QWebPage::WebAction>(action));
}

QAction* QWebPage_CustomAction(const QWebPage* self, int action) {
	return self->customAction(static_cast<int>(action));
}

void QWebPage_TriggerAction(QWebPage* self, int action, bool checked) {
	self->triggerAction(static_cast<QWebPage::WebAction>(action), checked);
}

void QWebPage_SetDevicePixelRatio(QWebPage* self, double ratio) {
	self->setDevicePixelRatio(static_cast<qreal>(ratio));
}

double QWebPage_DevicePixelRatio(const QWebPage* self) {
	qreal _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

void QWebPage_ResetDevicePixelRatio(QWebPage* self) {
	self->resetDevicePixelRatio();
}

QSize* QWebPage_ViewportSize(const QWebPage* self) {
	return new QSize(self->viewportSize());
}

void QWebPage_SetViewportSize(const QWebPage* self, QSize* size) {
	self->setViewportSize(*size);
}

QWebPage__ViewportAttributes* QWebPage_ViewportAttributesForSize(const QWebPage* self, QSize* availableSize) {
	return new QWebPage::ViewportAttributes(self->viewportAttributesForSize(*availableSize));
}

QSize* QWebPage_PreferredContentsSize(const QWebPage* self) {
	return new QSize(self->preferredContentsSize());
}

void QWebPage_SetPreferredContentsSize(const QWebPage* self, QSize* size) {
	self->setPreferredContentsSize(*size);
}

void QWebPage_SetActualVisibleContentRect(const QWebPage* self, QRect* rect) {
	self->setActualVisibleContentRect(*rect);
}

bool QWebPage_Event(QWebPage* self, QEvent* param1) {
	return self->event(param1);
}

bool QWebPage_FocusNextPrevChild(QWebPage* self, bool next) {
	return self->focusNextPrevChild(next);
}

QVariant* QWebPage_InputMethodQuery(const QWebPage* self, int property) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

bool QWebPage_FindText(QWebPage* self, struct miqt_string subString) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return self->findText(subString_QString);
}

void QWebPage_SetForwardUnsupportedContent(QWebPage* self, bool forward) {
	self->setForwardUnsupportedContent(forward);
}

bool QWebPage_ForwardUnsupportedContent(const QWebPage* self) {
	return self->forwardUnsupportedContent();
}

void QWebPage_SetLinkDelegationPolicy(QWebPage* self, int policy) {
	self->setLinkDelegationPolicy(static_cast<QWebPage::LinkDelegationPolicy>(policy));
}

int QWebPage_LinkDelegationPolicy(const QWebPage* self) {
	QWebPage::LinkDelegationPolicy _ret = self->linkDelegationPolicy();
	return static_cast<int>(_ret);
}

void QWebPage_SetPalette(QWebPage* self, QPalette* palette) {
	self->setPalette(*palette);
}

QPalette* QWebPage_Palette(const QWebPage* self) {
	return new QPalette(self->palette());
}

void QWebPage_SetContentEditable(QWebPage* self, bool editable) {
	self->setContentEditable(editable);
}

bool QWebPage_IsContentEditable(const QWebPage* self) {
	return self->isContentEditable();
}

bool QWebPage_SwallowContextMenuEvent(QWebPage* self, QContextMenuEvent* event) {
	return self->swallowContextMenuEvent(event);
}

void QWebPage_UpdatePositionDependentActions(QWebPage* self, QPoint* pos) {
	self->updatePositionDependentActions(*pos);
}

QMenu* QWebPage_CreateStandardContextMenu(QWebPage* self) {
	return self->createStandardContextMenu();
}

void QWebPage_SetFeaturePermission(QWebPage* self, QWebFrame* frame, int feature, int policy) {
	self->setFeaturePermission(frame, static_cast<QWebPage::Feature>(feature), static_cast<QWebPage::PermissionPolicy>(policy));
}

struct miqt_array /* of struct miqt_string */  QWebPage_SupportedContentTypes(const QWebPage* self) {
	QStringList _ret = self->supportedContentTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QWebPage_SupportsContentType(const QWebPage* self, struct miqt_string mimeType) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	return self->supportsContentType(mimeType_QString);
}

bool QWebPage_Extension(QWebPage* self, int extension, QWebPage__ExtensionOption* option, QWebPage__ExtensionReturn* output) {
	return self->extension(static_cast<QWebPage::Extension>(extension), option, output);
}

bool QWebPage_SupportsExtension(const QWebPage* self, int extension) {
	return self->supportsExtension(static_cast<QWebPage::Extension>(extension));
}

bool QWebPage_ShouldInterruptJavaScript(QWebPage* self) {
	return self->shouldInterruptJavaScript();
}

void QWebPage_LoadStarted(QWebPage* self) {
	self->loadStarted();
}

void QWebPage_connect_LoadStarted(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)()>(&QWebPage::loadStarted), self, [=]() {
		miqt_exec_callback_QWebPage_LoadStarted(slot);
	});
}

void QWebPage_LoadProgress(QWebPage* self, int progress) {
	self->loadProgress(static_cast<int>(progress));
}

void QWebPage_connect_LoadProgress(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(int)>(&QWebPage::loadProgress), self, [=](int progress) {
		int sigval1 = progress;
		miqt_exec_callback_QWebPage_LoadProgress(slot, sigval1);
	});
}

void QWebPage_LoadFinished(QWebPage* self, bool ok) {
	self->loadFinished(ok);
}

void QWebPage_connect_LoadFinished(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(bool)>(&QWebPage::loadFinished), self, [=](bool ok) {
		bool sigval1 = ok;
		miqt_exec_callback_QWebPage_LoadFinished(slot, sigval1);
	});
}

void QWebPage_LinkHovered(QWebPage* self, struct miqt_string link, struct miqt_string title, struct miqt_string textContent) {
	QString link_QString = QString::fromUtf8(link.data, link.len);
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString textContent_QString = QString::fromUtf8(textContent.data, textContent.len);
	self->linkHovered(link_QString, title_QString, textContent_QString);
}

void QWebPage_connect_LinkHovered(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(const QString&, const QString&, const QString&)>(&QWebPage::linkHovered), self, [=](const QString& link, const QString& title, const QString& textContent) {
		const QString link_ret = link;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray link_b = link_ret.toUtf8();
		struct miqt_string link_ms;
		link_ms.len = link_b.length();
		link_ms.data = static_cast<char*>(malloc(link_ms.len));
		memcpy(link_ms.data, link_b.data(), link_ms.len);
		struct miqt_string sigval1 = link_ms;
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string title_ms;
		title_ms.len = title_b.length();
		title_ms.data = static_cast<char*>(malloc(title_ms.len));
		memcpy(title_ms.data, title_b.data(), title_ms.len);
		struct miqt_string sigval2 = title_ms;
		const QString textContent_ret = textContent;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray textContent_b = textContent_ret.toUtf8();
		struct miqt_string textContent_ms;
		textContent_ms.len = textContent_b.length();
		textContent_ms.data = static_cast<char*>(malloc(textContent_ms.len));
		memcpy(textContent_ms.data, textContent_b.data(), textContent_ms.len);
		struct miqt_string sigval3 = textContent_ms;
		miqt_exec_callback_QWebPage_LinkHovered(slot, sigval1, sigval2, sigval3);
	});
}

void QWebPage_StatusBarMessage(QWebPage* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->statusBarMessage(text_QString);
}

void QWebPage_connect_StatusBarMessage(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(const QString&)>(&QWebPage::statusBarMessage), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_QWebPage_StatusBarMessage(slot, sigval1);
	});
}

void QWebPage_SelectionChanged(QWebPage* self) {
	self->selectionChanged();
}

void QWebPage_connect_SelectionChanged(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)()>(&QWebPage::selectionChanged), self, [=]() {
		miqt_exec_callback_QWebPage_SelectionChanged(slot);
	});
}

void QWebPage_FrameCreated(QWebPage* self, QWebFrame* frame) {
	self->frameCreated(frame);
}

void QWebPage_connect_FrameCreated(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebFrame*)>(&QWebPage::frameCreated), self, [=](QWebFrame* frame) {
		QWebFrame* sigval1 = frame;
		miqt_exec_callback_QWebPage_FrameCreated(slot, sigval1);
	});
}

void QWebPage_GeometryChangeRequested(QWebPage* self, QRect* geom) {
	self->geometryChangeRequested(*geom);
}

void QWebPage_connect_GeometryChangeRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(const QRect&)>(&QWebPage::geometryChangeRequested), self, [=](const QRect& geom) {
		const QRect& geom_ret = geom;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geom_ret);
		miqt_exec_callback_QWebPage_GeometryChangeRequested(slot, sigval1);
	});
}

void QWebPage_RepaintRequested(QWebPage* self, QRect* dirtyRect) {
	self->repaintRequested(*dirtyRect);
}

void QWebPage_connect_RepaintRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(const QRect&)>(&QWebPage::repaintRequested), self, [=](const QRect& dirtyRect) {
		const QRect& dirtyRect_ret = dirtyRect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&dirtyRect_ret);
		miqt_exec_callback_QWebPage_RepaintRequested(slot, sigval1);
	});
}

void QWebPage_ScrollRequested(QWebPage* self, int dx, int dy, QRect* scrollViewRect) {
	self->scrollRequested(static_cast<int>(dx), static_cast<int>(dy), *scrollViewRect);
}

void QWebPage_connect_ScrollRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(int, int, const QRect&)>(&QWebPage::scrollRequested), self, [=](int dx, int dy, const QRect& scrollViewRect) {
		int sigval1 = dx;
		int sigval2 = dy;
		const QRect& scrollViewRect_ret = scrollViewRect;
		// Cast returned reference into pointer
		QRect* sigval3 = const_cast<QRect*>(&scrollViewRect_ret);
		miqt_exec_callback_QWebPage_ScrollRequested(slot, sigval1, sigval2, sigval3);
	});
}

void QWebPage_WindowCloseRequested(QWebPage* self) {
	self->windowCloseRequested();
}

void QWebPage_connect_WindowCloseRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)()>(&QWebPage::windowCloseRequested), self, [=]() {
		miqt_exec_callback_QWebPage_WindowCloseRequested(slot);
	});
}

void QWebPage_PrintRequested(QWebPage* self, QWebFrame* frame) {
	self->printRequested(frame);
}

void QWebPage_connect_PrintRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebFrame*)>(&QWebPage::printRequested), self, [=](QWebFrame* frame) {
		QWebFrame* sigval1 = frame;
		miqt_exec_callback_QWebPage_PrintRequested(slot, sigval1);
	});
}

void QWebPage_LinkClicked(QWebPage* self, QUrl* url) {
	self->linkClicked(*url);
}

void QWebPage_connect_LinkClicked(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(const QUrl&)>(&QWebPage::linkClicked), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QWebPage_LinkClicked(slot, sigval1);
	});
}

void QWebPage_ToolBarVisibilityChangeRequested(QWebPage* self, bool visible) {
	self->toolBarVisibilityChangeRequested(visible);
}

void QWebPage_connect_ToolBarVisibilityChangeRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(bool)>(&QWebPage::toolBarVisibilityChangeRequested), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QWebPage_ToolBarVisibilityChangeRequested(slot, sigval1);
	});
}

void QWebPage_StatusBarVisibilityChangeRequested(QWebPage* self, bool visible) {
	self->statusBarVisibilityChangeRequested(visible);
}

void QWebPage_connect_StatusBarVisibilityChangeRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(bool)>(&QWebPage::statusBarVisibilityChangeRequested), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QWebPage_StatusBarVisibilityChangeRequested(slot, sigval1);
	});
}

void QWebPage_MenuBarVisibilityChangeRequested(QWebPage* self, bool visible) {
	self->menuBarVisibilityChangeRequested(visible);
}

void QWebPage_connect_MenuBarVisibilityChangeRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(bool)>(&QWebPage::menuBarVisibilityChangeRequested), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QWebPage_MenuBarVisibilityChangeRequested(slot, sigval1);
	});
}

void QWebPage_UnsupportedContent(QWebPage* self, QNetworkReply* reply) {
	self->unsupportedContent(reply);
}

void QWebPage_connect_UnsupportedContent(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QNetworkReply*)>(&QWebPage::unsupportedContent), self, [=](QNetworkReply* reply) {
		QNetworkReply* sigval1 = reply;
		miqt_exec_callback_QWebPage_UnsupportedContent(slot, sigval1);
	});
}

void QWebPage_DownloadRequested(QWebPage* self, QNetworkRequest* request) {
	self->downloadRequested(*request);
}

void QWebPage_connect_DownloadRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(const QNetworkRequest&)>(&QWebPage::downloadRequested), self, [=](const QNetworkRequest& request) {
		const QNetworkRequest& request_ret = request;
		// Cast returned reference into pointer
		QNetworkRequest* sigval1 = const_cast<QNetworkRequest*>(&request_ret);
		miqt_exec_callback_QWebPage_DownloadRequested(slot, sigval1);
	});
}

void QWebPage_FocusedElementChanged(QWebPage* self, QWebElement* element) {
	self->focusedElementChanged(*element);
}

void QWebPage_connect_FocusedElementChanged(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(const QWebElement&)>(&QWebPage::focusedElementChanged), self, [=](const QWebElement& element) {
		const QWebElement& element_ret = element;
		// Cast returned reference into pointer
		QWebElement* sigval1 = const_cast<QWebElement*>(&element_ret);
		miqt_exec_callback_QWebPage_FocusedElementChanged(slot, sigval1);
	});
}

void QWebPage_MicroFocusChanged(QWebPage* self) {
	self->microFocusChanged();
}

void QWebPage_connect_MicroFocusChanged(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)()>(&QWebPage::microFocusChanged), self, [=]() {
		miqt_exec_callback_QWebPage_MicroFocusChanged(slot);
	});
}

void QWebPage_ContentsChanged(QWebPage* self) {
	self->contentsChanged();
}

void QWebPage_connect_ContentsChanged(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)()>(&QWebPage::contentsChanged), self, [=]() {
		miqt_exec_callback_QWebPage_ContentsChanged(slot);
	});
}

void QWebPage_DatabaseQuotaExceeded(QWebPage* self, QWebFrame* frame, struct miqt_string databaseName) {
	QString databaseName_QString = QString::fromUtf8(databaseName.data, databaseName.len);
	self->databaseQuotaExceeded(frame, databaseName_QString);
}

void QWebPage_connect_DatabaseQuotaExceeded(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebFrame*, QString)>(&QWebPage::databaseQuotaExceeded), self, [=](QWebFrame* frame, QString databaseName) {
		QWebFrame* sigval1 = frame;
		QString databaseName_ret = databaseName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray databaseName_b = databaseName_ret.toUtf8();
		struct miqt_string databaseName_ms;
		databaseName_ms.len = databaseName_b.length();
		databaseName_ms.data = static_cast<char*>(malloc(databaseName_ms.len));
		memcpy(databaseName_ms.data, databaseName_b.data(), databaseName_ms.len);
		struct miqt_string sigval2 = databaseName_ms;
		miqt_exec_callback_QWebPage_DatabaseQuotaExceeded(slot, sigval1, sigval2);
	});
}

void QWebPage_ApplicationCacheQuotaExceeded(QWebPage* self, QWebSecurityOrigin* origin, unsigned long long defaultOriginQuota, unsigned long long totalSpaceNeeded) {
	self->applicationCacheQuotaExceeded(origin, static_cast<quint64>(defaultOriginQuota), static_cast<quint64>(totalSpaceNeeded));
}

void QWebPage_connect_ApplicationCacheQuotaExceeded(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebSecurityOrigin*, quint64, quint64)>(&QWebPage::applicationCacheQuotaExceeded), self, [=](QWebSecurityOrigin* origin, quint64 defaultOriginQuota, quint64 totalSpaceNeeded) {
		QWebSecurityOrigin* sigval1 = origin;
		quint64 defaultOriginQuota_ret = defaultOriginQuota;
		unsigned long long sigval2 = static_cast<unsigned long long>(defaultOriginQuota_ret);
		quint64 totalSpaceNeeded_ret = totalSpaceNeeded;
		unsigned long long sigval3 = static_cast<unsigned long long>(totalSpaceNeeded_ret);
		miqt_exec_callback_QWebPage_ApplicationCacheQuotaExceeded(slot, sigval1, sigval2, sigval3);
	});
}

void QWebPage_SaveFrameStateRequested(QWebPage* self, QWebFrame* frame, QWebHistoryItem* item) {
	self->saveFrameStateRequested(frame, item);
}

void QWebPage_connect_SaveFrameStateRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebFrame*, QWebHistoryItem*)>(&QWebPage::saveFrameStateRequested), self, [=](QWebFrame* frame, QWebHistoryItem* item) {
		QWebFrame* sigval1 = frame;
		QWebHistoryItem* sigval2 = item;
		miqt_exec_callback_QWebPage_SaveFrameStateRequested(slot, sigval1, sigval2);
	});
}

void QWebPage_RestoreFrameStateRequested(QWebPage* self, QWebFrame* frame) {
	self->restoreFrameStateRequested(frame);
}

void QWebPage_connect_RestoreFrameStateRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebFrame*)>(&QWebPage::restoreFrameStateRequested), self, [=](QWebFrame* frame) {
		QWebFrame* sigval1 = frame;
		miqt_exec_callback_QWebPage_RestoreFrameStateRequested(slot, sigval1);
	});
}

void QWebPage_ViewportChangeRequested(QWebPage* self) {
	self->viewportChangeRequested();
}

void QWebPage_connect_ViewportChangeRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)()>(&QWebPage::viewportChangeRequested), self, [=]() {
		miqt_exec_callback_QWebPage_ViewportChangeRequested(slot);
	});
}

void QWebPage_FeaturePermissionRequested(QWebPage* self, QWebFrame* frame, int feature) {
	self->featurePermissionRequested(frame, static_cast<QWebPage::Feature>(feature));
}

void QWebPage_connect_FeaturePermissionRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebFrame*, QWebPage::Feature)>(&QWebPage::featurePermissionRequested), self, [=](QWebFrame* frame, QWebPage::Feature feature) {
		QWebFrame* sigval1 = frame;
		QWebPage::Feature feature_ret = feature;
		int sigval2 = static_cast<int>(feature_ret);
		miqt_exec_callback_QWebPage_FeaturePermissionRequested(slot, sigval1, sigval2);
	});
}

void QWebPage_FeaturePermissionRequestCanceled(QWebPage* self, QWebFrame* frame, int feature) {
	self->featurePermissionRequestCanceled(frame, static_cast<QWebPage::Feature>(feature));
}

void QWebPage_connect_FeaturePermissionRequestCanceled(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebFrame*, QWebPage::Feature)>(&QWebPage::featurePermissionRequestCanceled), self, [=](QWebFrame* frame, QWebPage::Feature feature) {
		QWebFrame* sigval1 = frame;
		QWebPage::Feature feature_ret = feature;
		int sigval2 = static_cast<int>(feature_ret);
		miqt_exec_callback_QWebPage_FeaturePermissionRequestCanceled(slot, sigval1, sigval2);
	});
}

void QWebPage_FullScreenRequested(QWebPage* self, QWebFullScreenRequest* fullScreenRequest) {
	self->fullScreenRequested(*fullScreenRequest);
}

void QWebPage_connect_FullScreenRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebFullScreenRequest)>(&QWebPage::fullScreenRequested), self, [=](QWebFullScreenRequest fullScreenRequest) {
		QWebFullScreenRequest* sigval1 = new QWebFullScreenRequest(fullScreenRequest);
		miqt_exec_callback_QWebPage_FullScreenRequested(slot, sigval1);
	});
}

void QWebPage_ConsoleMessageReceived(QWebPage* self, int source, int level, struct miqt_string message, int lineNumber, struct miqt_string sourceID) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	QString sourceID_QString = QString::fromUtf8(sourceID.data, sourceID.len);
	self->consoleMessageReceived(static_cast<QWebPage::MessageSource>(source), static_cast<QWebPage::MessageLevel>(level), message_QString, static_cast<int>(lineNumber), sourceID_QString);
}

void QWebPage_connect_ConsoleMessageReceived(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebPage::MessageSource, QWebPage::MessageLevel, const QString&, int, const QString&)>(&QWebPage::consoleMessageReceived), self, [=](QWebPage::MessageSource source, QWebPage::MessageLevel level, const QString& message, int lineNumber, const QString& sourceID) {
		QWebPage::MessageSource source_ret = source;
		int sigval1 = static_cast<int>(source_ret);
		QWebPage::MessageLevel level_ret = level;
		int sigval2 = static_cast<int>(level_ret);
		const QString message_ret = message;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray message_b = message_ret.toUtf8();
		struct miqt_string message_ms;
		message_ms.len = message_b.length();
		message_ms.data = static_cast<char*>(malloc(message_ms.len));
		memcpy(message_ms.data, message_b.data(), message_ms.len);
		struct miqt_string sigval3 = message_ms;
		int sigval4 = lineNumber;
		const QString sourceID_ret = sourceID;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray sourceID_b = sourceID_ret.toUtf8();
		struct miqt_string sourceID_ms;
		sourceID_ms.len = sourceID_b.length();
		sourceID_ms.data = static_cast<char*>(malloc(sourceID_ms.len));
		memcpy(sourceID_ms.data, sourceID_b.data(), sourceID_ms.len);
		struct miqt_string sigval5 = sourceID_ms;
		miqt_exec_callback_QWebPage_ConsoleMessageReceived(slot, sigval1, sigval2, sigval3, sigval4, sigval5);
	});
}

void QWebPage_RecentlyAudibleChanged(QWebPage* self, bool recentlyAudible) {
	self->recentlyAudibleChanged(recentlyAudible);
}

void QWebPage_connect_RecentlyAudibleChanged(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(bool)>(&QWebPage::recentlyAudibleChanged), self, [=](bool recentlyAudible) {
		bool sigval1 = recentlyAudible;
		miqt_exec_callback_QWebPage_RecentlyAudibleChanged(slot, sigval1);
	});
}

struct miqt_string QWebPage_Tr2(const char* s, const char* c) {
	QString _ret = QWebPage::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPage_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebPage::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPage_TrUtf82(const char* s, const char* c) {
	QString _ret = QWebPage::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPage_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebPage::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebPage_FindText2(QWebPage* self, struct miqt_string subString, int options) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return self->findText(subString_QString, static_cast<QWebPage::FindFlags>(options));
}

bool QWebPage_override_virtual_TriggerAction(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TriggerAction = slot;
	return true;
}

void QWebPage_virtualbase_TriggerAction(void* self, int action, bool checked) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_TriggerAction(action, checked);
}

bool QWebPage_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QWebPage_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_Event(param1);
}

bool QWebPage_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

bool QWebPage_virtualbase_Extension(void* self, int extension, QWebPage__ExtensionOption* option, QWebPage__ExtensionReturn* output) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_Extension(extension, option, output);
}

bool QWebPage_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QWebPage_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQWebPage*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QWebPage_override_virtual_ShouldInterruptJavaScript(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShouldInterruptJavaScript = slot;
	return true;
}

bool QWebPage_virtualbase_ShouldInterruptJavaScript(void* self) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_ShouldInterruptJavaScript();
}

bool QWebPage_override_virtual_CreateWindow(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CreateWindow = slot;
	return true;
}

QWebPage* QWebPage_virtualbase_CreateWindow(void* self, int typeVal) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_CreateWindow(typeVal);
}

bool QWebPage_override_virtual_CreatePlugin(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CreatePlugin = slot;
	return true;
}

QObject* QWebPage_virtualbase_CreatePlugin(void* self, struct miqt_string classid, QUrl* url, struct miqt_array /* of struct miqt_string */  paramNames, struct miqt_array /* of struct miqt_string */  paramValues) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_CreatePlugin(classid, url, paramNames, paramValues);
}

bool QWebPage_override_virtual_AcceptNavigationRequest(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AcceptNavigationRequest = slot;
	return true;
}

bool QWebPage_virtualbase_AcceptNavigationRequest(void* self, QWebFrame* frame, QNetworkRequest* request, int typeVal) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_AcceptNavigationRequest(frame, request, typeVal);
}

bool QWebPage_override_virtual_ChooseFile(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChooseFile = slot;
	return true;
}

struct miqt_string QWebPage_virtualbase_ChooseFile(void* self, QWebFrame* originatingFrame, struct miqt_string oldFile) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_ChooseFile(originatingFrame, oldFile);
}

bool QWebPage_override_virtual_JavaScriptAlert(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__JavaScriptAlert = slot;
	return true;
}

void QWebPage_virtualbase_JavaScriptAlert(void* self, QWebFrame* originatingFrame, struct miqt_string msg) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_JavaScriptAlert(originatingFrame, msg);
}

bool QWebPage_override_virtual_JavaScriptConfirm(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__JavaScriptConfirm = slot;
	return true;
}

bool QWebPage_virtualbase_JavaScriptConfirm(void* self, QWebFrame* originatingFrame, struct miqt_string msg) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_JavaScriptConfirm(originatingFrame, msg);
}

bool QWebPage_override_virtual_JavaScriptConsoleMessage(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__JavaScriptConsoleMessage = slot;
	return true;
}

void QWebPage_virtualbase_JavaScriptConsoleMessage(void* self, struct miqt_string message, int lineNumber, struct miqt_string sourceID) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_JavaScriptConsoleMessage(message, lineNumber, sourceID);
}

bool QWebPage_override_virtual_UserAgentForUrl(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UserAgentForUrl = slot;
	return true;
}

struct miqt_string QWebPage_virtualbase_UserAgentForUrl(const void* self, QUrl* url) {
	return ( (const MiqtVirtualQWebPage*)(self) )->virtualbase_UserAgentForUrl(url);
}

bool QWebPage_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QWebPage_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QWebPage_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QWebPage_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_TimerEvent(event);
}

bool QWebPage_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QWebPage_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_ChildEvent(event);
}

bool QWebPage_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QWebPage_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_CustomEvent(event);
}

bool QWebPage_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QWebPage_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QWebPage_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QWebPage_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QWebPage_Delete(QWebPage* self) {
	delete self;
}

QWebPage__ViewportAttributes* QWebPage__ViewportAttributes_new() {
	return new QWebPage::ViewportAttributes();
}

QWebPage__ViewportAttributes* QWebPage__ViewportAttributes_new2(QWebPage__ViewportAttributes* other) {
	return new QWebPage::ViewportAttributes(*other);
}

void QWebPage__ViewportAttributes_OperatorAssign(QWebPage__ViewportAttributes* self, QWebPage__ViewportAttributes* other) {
	self->operator=(*other);
}

double QWebPage__ViewportAttributes_InitialScaleFactor(const QWebPage__ViewportAttributes* self) {
	qreal _ret = self->initialScaleFactor();
	return static_cast<double>(_ret);
}

double QWebPage__ViewportAttributes_MinimumScaleFactor(const QWebPage__ViewportAttributes* self) {
	qreal _ret = self->minimumScaleFactor();
	return static_cast<double>(_ret);
}

double QWebPage__ViewportAttributes_MaximumScaleFactor(const QWebPage__ViewportAttributes* self) {
	qreal _ret = self->maximumScaleFactor();
	return static_cast<double>(_ret);
}

double QWebPage__ViewportAttributes_DevicePixelRatio(const QWebPage__ViewportAttributes* self) {
	qreal _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

bool QWebPage__ViewportAttributes_IsUserScalable(const QWebPage__ViewportAttributes* self) {
	return self->isUserScalable();
}

bool QWebPage__ViewportAttributes_IsValid(const QWebPage__ViewportAttributes* self) {
	return self->isValid();
}

QSizeF* QWebPage__ViewportAttributes_Size(const QWebPage__ViewportAttributes* self) {
	return new QSizeF(self->size());
}

void QWebPage__ViewportAttributes_Delete(QWebPage__ViewportAttributes* self) {
	delete self;
}

QWebPage__ExtensionOption* QWebPage__ExtensionOption_new(QWebPage__ExtensionOption* param1) {
	return new QWebPage::ExtensionOption(*param1);
}

void QWebPage__ExtensionOption_Delete(QWebPage__ExtensionOption* self) {
	delete self;
}

QWebPage__ExtensionReturn* QWebPage__ExtensionReturn_new(QWebPage__ExtensionReturn* param1) {
	return new QWebPage::ExtensionReturn(*param1);
}

QWebPage__ExtensionReturn* QWebPage__ExtensionReturn_new2() {
	return new QWebPage::ExtensionReturn();
}

void QWebPage__ExtensionReturn_Delete(QWebPage__ExtensionReturn* self) {
	delete self;
}

void QWebPage__ChooseMultipleFilesExtensionOption_virtbase(QWebPage__ChooseMultipleFilesExtensionOption* src, QWebPage::ExtensionOption** outptr_QWebPage__ExtensionOption) {
	*outptr_QWebPage__ExtensionOption = static_cast<QWebPage::ExtensionOption*>(src);
}

void QWebPage__ChooseMultipleFilesExtensionOption_Delete(QWebPage__ChooseMultipleFilesExtensionOption* self) {
	delete self;
}

void QWebPage__ChooseMultipleFilesExtensionReturn_virtbase(QWebPage__ChooseMultipleFilesExtensionReturn* src, QWebPage::ExtensionReturn** outptr_QWebPage__ExtensionReturn) {
	*outptr_QWebPage__ExtensionReturn = static_cast<QWebPage::ExtensionReturn*>(src);
}

void QWebPage__ChooseMultipleFilesExtensionReturn_Delete(QWebPage__ChooseMultipleFilesExtensionReturn* self) {
	delete self;
}

QWebPage__ErrorPageExtensionOption* QWebPage__ErrorPageExtensionOption_new(QWebPage__ErrorPageExtensionOption* param1) {
	return new QWebPage::ErrorPageExtensionOption(*param1);
}

void QWebPage__ErrorPageExtensionOption_virtbase(QWebPage__ErrorPageExtensionOption* src, QWebPage::ExtensionOption** outptr_QWebPage__ExtensionOption) {
	*outptr_QWebPage__ExtensionOption = static_cast<QWebPage::ExtensionOption*>(src);
}

void QWebPage__ErrorPageExtensionOption_OperatorAssign(QWebPage__ErrorPageExtensionOption* self, QWebPage__ErrorPageExtensionOption* param1) {
	self->operator=(*param1);
}

void QWebPage__ErrorPageExtensionOption_Delete(QWebPage__ErrorPageExtensionOption* self) {
	delete self;
}

QWebPage__ErrorPageExtensionReturn* QWebPage__ErrorPageExtensionReturn_new() {
	return new QWebPage::ErrorPageExtensionReturn();
}

QWebPage__ErrorPageExtensionReturn* QWebPage__ErrorPageExtensionReturn_new2(QWebPage__ErrorPageExtensionReturn* param1) {
	return new QWebPage::ErrorPageExtensionReturn(*param1);
}

void QWebPage__ErrorPageExtensionReturn_virtbase(QWebPage__ErrorPageExtensionReturn* src, QWebPage::ExtensionReturn** outptr_QWebPage__ExtensionReturn) {
	*outptr_QWebPage__ExtensionReturn = static_cast<QWebPage::ExtensionReturn*>(src);
}

void QWebPage__ErrorPageExtensionReturn_OperatorAssign(QWebPage__ErrorPageExtensionReturn* self, QWebPage__ErrorPageExtensionReturn* param1) {
	self->operator=(*param1);
}

void QWebPage__ErrorPageExtensionReturn_Delete(QWebPage__ErrorPageExtensionReturn* self) {
	delete self;
}

