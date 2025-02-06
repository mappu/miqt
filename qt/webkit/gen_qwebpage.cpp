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

void miqt_exec_callback_QWebPage_loadStarted(intptr_t);
void miqt_exec_callback_QWebPage_loadProgress(intptr_t, int);
void miqt_exec_callback_QWebPage_loadFinished(intptr_t, bool);
void miqt_exec_callback_QWebPage_linkHovered(intptr_t, struct miqt_string, struct miqt_string, struct miqt_string);
void miqt_exec_callback_QWebPage_statusBarMessage(intptr_t, struct miqt_string);
void miqt_exec_callback_QWebPage_selectionChanged(intptr_t);
void miqt_exec_callback_QWebPage_frameCreated(intptr_t, QWebFrame*);
void miqt_exec_callback_QWebPage_geometryChangeRequested(intptr_t, QRect*);
void miqt_exec_callback_QWebPage_repaintRequested(intptr_t, QRect*);
void miqt_exec_callback_QWebPage_scrollRequested(intptr_t, int, int, QRect*);
void miqt_exec_callback_QWebPage_windowCloseRequested(intptr_t);
void miqt_exec_callback_QWebPage_printRequested(intptr_t, QWebFrame*);
void miqt_exec_callback_QWebPage_linkClicked(intptr_t, QUrl*);
void miqt_exec_callback_QWebPage_toolBarVisibilityChangeRequested(intptr_t, bool);
void miqt_exec_callback_QWebPage_statusBarVisibilityChangeRequested(intptr_t, bool);
void miqt_exec_callback_QWebPage_menuBarVisibilityChangeRequested(intptr_t, bool);
void miqt_exec_callback_QWebPage_unsupportedContent(intptr_t, QNetworkReply*);
void miqt_exec_callback_QWebPage_downloadRequested(intptr_t, QNetworkRequest*);
void miqt_exec_callback_QWebPage_focusedElementChanged(intptr_t, QWebElement*);
void miqt_exec_callback_QWebPage_microFocusChanged(intptr_t);
void miqt_exec_callback_QWebPage_contentsChanged(intptr_t);
void miqt_exec_callback_QWebPage_databaseQuotaExceeded(intptr_t, QWebFrame*, struct miqt_string);
void miqt_exec_callback_QWebPage_applicationCacheQuotaExceeded(intptr_t, QWebSecurityOrigin*, unsigned long long, unsigned long long);
void miqt_exec_callback_QWebPage_saveFrameStateRequested(intptr_t, QWebFrame*, QWebHistoryItem*);
void miqt_exec_callback_QWebPage_restoreFrameStateRequested(intptr_t, QWebFrame*);
void miqt_exec_callback_QWebPage_viewportChangeRequested(intptr_t);
void miqt_exec_callback_QWebPage_featurePermissionRequested(intptr_t, QWebFrame*, int);
void miqt_exec_callback_QWebPage_featurePermissionRequestCanceled(intptr_t, QWebFrame*, int);
void miqt_exec_callback_QWebPage_fullScreenRequested(intptr_t, QWebFullScreenRequest*);
void miqt_exec_callback_QWebPage_consoleMessageReceived(intptr_t, int, int, struct miqt_string, int, struct miqt_string);
void miqt_exec_callback_QWebPage_recentlyAudibleChanged(intptr_t, bool);
void miqt_exec_callback_QWebPage_triggerAction(QWebPage*, intptr_t, int, bool);
bool miqt_exec_callback_QWebPage_event(QWebPage*, intptr_t, QEvent*);
bool miqt_exec_callback_QWebPage_extension(QWebPage*, intptr_t, int, QWebPage__ExtensionOption*, QWebPage__ExtensionReturn*);
bool miqt_exec_callback_QWebPage_supportsExtension(const QWebPage*, intptr_t, int);
bool miqt_exec_callback_QWebPage_shouldInterruptJavaScript(QWebPage*, intptr_t);
QWebPage* miqt_exec_callback_QWebPage_createWindow(QWebPage*, intptr_t, int);
QObject* miqt_exec_callback_QWebPage_createPlugin(QWebPage*, intptr_t, struct miqt_string, QUrl*, struct miqt_array /* of struct miqt_string */ , struct miqt_array /* of struct miqt_string */ );
bool miqt_exec_callback_QWebPage_acceptNavigationRequest(QWebPage*, intptr_t, QWebFrame*, QNetworkRequest*, int);
struct miqt_string miqt_exec_callback_QWebPage_chooseFile(QWebPage*, intptr_t, QWebFrame*, struct miqt_string);
void miqt_exec_callback_QWebPage_javaScriptAlert(QWebPage*, intptr_t, QWebFrame*, struct miqt_string);
bool miqt_exec_callback_QWebPage_javaScriptConfirm(QWebPage*, intptr_t, QWebFrame*, struct miqt_string);
void miqt_exec_callback_QWebPage_javaScriptConsoleMessage(QWebPage*, intptr_t, struct miqt_string, int, struct miqt_string);
struct miqt_string miqt_exec_callback_QWebPage_userAgentForUrl(const QWebPage*, intptr_t, QUrl*);
bool miqt_exec_callback_QWebPage_eventFilter(QWebPage*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebPage_timerEvent(QWebPage*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebPage_childEvent(QWebPage*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebPage_customEvent(QWebPage*, intptr_t, QEvent*);
void miqt_exec_callback_QWebPage_connectNotify(QWebPage*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebPage_disconnectNotify(QWebPage*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebPage final : public QWebPage {
public:

	MiqtVirtualQWebPage(): QWebPage() {};
	MiqtVirtualQWebPage(QObject* parent): QWebPage(parent) {};

	virtual ~MiqtVirtualQWebPage() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__triggerAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void triggerAction(QWebPage::WebAction action, bool checked) override {
		if (handle__triggerAction == 0) {
			QWebPage::triggerAction(action, checked);
			return;
		}
		
		QWebPage::WebAction action_ret = action;
		int sigval1 = static_cast<int>(action_ret);
		bool sigval2 = checked;

		miqt_exec_callback_QWebPage_triggerAction(this, handle__triggerAction, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_triggerAction(int action, bool checked) {

		QWebPage::triggerAction(static_cast<QWebPage::WebAction>(action), checked);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QWebPage::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QWebPage_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QWebPage::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool extension(QWebPage::Extension extension, const QWebPage::ExtensionOption* option, QWebPage::ExtensionReturn* output) override {
		if (handle__extension == 0) {
			return QWebPage::extension(extension, option, output);
		}
		
		QWebPage::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		QWebPage__ExtensionOption* sigval2 = (QWebPage__ExtensionOption*) option;
		QWebPage__ExtensionReturn* sigval3 = output;

		bool callback_return_value = miqt_exec_callback_QWebPage_extension(this, handle__extension, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_extension(int extension, QWebPage__ExtensionOption* option, QWebPage__ExtensionReturn* output) {

		return QWebPage::extension(static_cast<QWebPage::Extension>(extension), option, output);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QWebPage::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QWebPage::supportsExtension(extension);
		}
		
		QWebPage::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QWebPage_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QWebPage::supportsExtension(static_cast<QWebPage::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shouldInterruptJavaScript = 0;

	// Subclass to allow providing a Go implementation
	virtual bool shouldInterruptJavaScript() override {
		if (handle__shouldInterruptJavaScript == 0) {
			return QWebPage::shouldInterruptJavaScript();
		}
		

		bool callback_return_value = miqt_exec_callback_QWebPage_shouldInterruptJavaScript(this, handle__shouldInterruptJavaScript);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_shouldInterruptJavaScript() {

		return QWebPage::shouldInterruptJavaScript();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual QWebPage* createWindow(QWebPage::WebWindowType type) override {
		if (handle__createWindow == 0) {
			return QWebPage::createWindow(type);
		}
		
		QWebPage::WebWindowType type_ret = type;
		int sigval1 = static_cast<int>(type_ret);

		QWebPage* callback_return_value = miqt_exec_callback_QWebPage_createWindow(this, handle__createWindow, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWebPage* virtualbase_createWindow(int type) {

		return QWebPage::createWindow(static_cast<QWebPage::WebWindowType>(type));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createPlugin = 0;

	// Subclass to allow providing a Go implementation
	virtual QObject* createPlugin(const QString& classid, const QUrl& url, const QStringList& paramNames, const QStringList& paramValues) override {
		if (handle__createPlugin == 0) {
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

		QObject* callback_return_value = miqt_exec_callback_QWebPage_createPlugin(this, handle__createPlugin, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QObject* virtualbase_createPlugin(struct miqt_string classid, QUrl* url, struct miqt_array /* of struct miqt_string */  paramNames, struct miqt_array /* of struct miqt_string */  paramValues) {
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
	intptr_t handle__acceptNavigationRequest = 0;

	// Subclass to allow providing a Go implementation
	virtual bool acceptNavigationRequest(QWebFrame* frame, const QNetworkRequest& request, QWebPage::NavigationType type) override {
		if (handle__acceptNavigationRequest == 0) {
			return QWebPage::acceptNavigationRequest(frame, request, type);
		}
		
		QWebFrame* sigval1 = frame;
		const QNetworkRequest& request_ret = request;
		// Cast returned reference into pointer
		QNetworkRequest* sigval2 = const_cast<QNetworkRequest*>(&request_ret);
		QWebPage::NavigationType type_ret = type;
		int sigval3 = static_cast<int>(type_ret);

		bool callback_return_value = miqt_exec_callback_QWebPage_acceptNavigationRequest(this, handle__acceptNavigationRequest, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_acceptNavigationRequest(QWebFrame* frame, QNetworkRequest* request, int type) {

		return QWebPage::acceptNavigationRequest(frame, *request, static_cast<QWebPage::NavigationType>(type));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__chooseFile = 0;

	// Subclass to allow providing a Go implementation
	virtual QString chooseFile(QWebFrame* originatingFrame, const QString& oldFile) override {
		if (handle__chooseFile == 0) {
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

		struct miqt_string callback_return_value = miqt_exec_callback_QWebPage_chooseFile(this, handle__chooseFile, sigval1, sigval2);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_chooseFile(QWebFrame* originatingFrame, struct miqt_string oldFile) {
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
	intptr_t handle__javaScriptAlert = 0;

	// Subclass to allow providing a Go implementation
	virtual void javaScriptAlert(QWebFrame* originatingFrame, const QString& msg) override {
		if (handle__javaScriptAlert == 0) {
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

		miqt_exec_callback_QWebPage_javaScriptAlert(this, handle__javaScriptAlert, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_javaScriptAlert(QWebFrame* originatingFrame, struct miqt_string msg) {
		QString msg_QString = QString::fromUtf8(msg.data, msg.len);

		QWebPage::javaScriptAlert(originatingFrame, msg_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__javaScriptConfirm = 0;

	// Subclass to allow providing a Go implementation
	virtual bool javaScriptConfirm(QWebFrame* originatingFrame, const QString& msg) override {
		if (handle__javaScriptConfirm == 0) {
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

		bool callback_return_value = miqt_exec_callback_QWebPage_javaScriptConfirm(this, handle__javaScriptConfirm, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_javaScriptConfirm(QWebFrame* originatingFrame, struct miqt_string msg) {
		QString msg_QString = QString::fromUtf8(msg.data, msg.len);

		return QWebPage::javaScriptConfirm(originatingFrame, msg_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__javaScriptConsoleMessage = 0;

	// Subclass to allow providing a Go implementation
	virtual void javaScriptConsoleMessage(const QString& message, int lineNumber, const QString& sourceID) override {
		if (handle__javaScriptConsoleMessage == 0) {
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

		miqt_exec_callback_QWebPage_javaScriptConsoleMessage(this, handle__javaScriptConsoleMessage, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_javaScriptConsoleMessage(struct miqt_string message, int lineNumber, struct miqt_string sourceID) {
		QString message_QString = QString::fromUtf8(message.data, message.len);
		QString sourceID_QString = QString::fromUtf8(sourceID.data, sourceID.len);

		QWebPage::javaScriptConsoleMessage(message_QString, static_cast<int>(lineNumber), sourceID_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__userAgentForUrl = 0;

	// Subclass to allow providing a Go implementation
	virtual QString userAgentForUrl(const QUrl& url) const override {
		if (handle__userAgentForUrl == 0) {
			return QWebPage::userAgentForUrl(url);
		}
		
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QWebPage_userAgentForUrl(this, handle__userAgentForUrl, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_userAgentForUrl(QUrl* url) const {

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
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWebPage::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebPage_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QWebPage::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWebPage::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebPage_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QWebPage::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWebPage::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebPage_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QWebPage::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWebPage::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebPage_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QWebPage::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWebPage::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebPage_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QWebPage::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWebPage::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebPage_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QWebPage::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QWebPage_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWebPage_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWebPage_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWebPage_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QWebPage_metaObject(const QWebPage* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebPage_metacast(QWebPage* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebPage_tr(const char* s) {
	QString _ret = QWebPage::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPage_trUtf8(const char* s) {
	QString _ret = QWebPage::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebFrame* QWebPage_mainFrame(const QWebPage* self) {
	return self->mainFrame();
}

QWebFrame* QWebPage_currentFrame(const QWebPage* self) {
	return self->currentFrame();
}

QWebFrame* QWebPage_frameAt(const QWebPage* self, QPoint* pos) {
	return self->frameAt(*pos);
}

QWebHistory* QWebPage_history(const QWebPage* self) {
	return self->history();
}

QWebSettings* QWebPage_settings(const QWebPage* self) {
	return self->settings();
}

void QWebPage_setView(QWebPage* self, QWidget* view) {
	self->setView(view);
}

QWidget* QWebPage_view(const QWebPage* self) {
	return self->view();
}

bool QWebPage_isModified(const QWebPage* self) {
	return self->isModified();
}

QUndoStack* QWebPage_undoStack(const QWebPage* self) {
	return self->undoStack();
}

void QWebPage_setNetworkAccessManager(QWebPage* self, QNetworkAccessManager* manager) {
	self->setNetworkAccessManager(manager);
}

QNetworkAccessManager* QWebPage_networkAccessManager(const QWebPage* self) {
	return self->networkAccessManager();
}

void QWebPage_setPluginFactory(QWebPage* self, QWebPluginFactory* factory) {
	self->setPluginFactory(factory);
}

QWebPluginFactory* QWebPage_pluginFactory(const QWebPage* self) {
	return self->pluginFactory();
}

unsigned long long QWebPage_totalBytes(const QWebPage* self) {
	quint64 _ret = self->totalBytes();
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QWebPage_bytesReceived(const QWebPage* self) {
	quint64 _ret = self->bytesReceived();
	return static_cast<unsigned long long>(_ret);
}

int QWebPage_visibilityState(const QWebPage* self) {
	QWebPage::VisibilityState _ret = self->visibilityState();
	return static_cast<int>(_ret);
}

void QWebPage_setVisibilityState(QWebPage* self, int visibilityState) {
	self->setVisibilityState(static_cast<QWebPage::VisibilityState>(visibilityState));
}

bool QWebPage_recentlyAudible(const QWebPage* self) {
	return self->recentlyAudible();
}

bool QWebPage_hasSelection(const QWebPage* self) {
	return self->hasSelection();
}

struct miqt_string QWebPage_selectedText(const QWebPage* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPage_selectedHtml(const QWebPage* self) {
	QString _ret = self->selectedHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QWebPage_action(const QWebPage* self, int action) {
	return self->action(static_cast<QWebPage::WebAction>(action));
}

QAction* QWebPage_customAction(const QWebPage* self, int action) {
	return self->customAction(static_cast<int>(action));
}

void QWebPage_triggerAction(QWebPage* self, int action, bool checked) {
	self->triggerAction(static_cast<QWebPage::WebAction>(action), checked);
}

void QWebPage_setDevicePixelRatio(QWebPage* self, double ratio) {
	self->setDevicePixelRatio(static_cast<qreal>(ratio));
}

double QWebPage_devicePixelRatio(const QWebPage* self) {
	qreal _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

void QWebPage_resetDevicePixelRatio(QWebPage* self) {
	self->resetDevicePixelRatio();
}

QSize* QWebPage_viewportSize(const QWebPage* self) {
	return new QSize(self->viewportSize());
}

void QWebPage_setViewportSize(const QWebPage* self, QSize* size) {
	self->setViewportSize(*size);
}

QWebPage__ViewportAttributes* QWebPage_viewportAttributesForSize(const QWebPage* self, QSize* availableSize) {
	return new QWebPage::ViewportAttributes(self->viewportAttributesForSize(*availableSize));
}

QSize* QWebPage_preferredContentsSize(const QWebPage* self) {
	return new QSize(self->preferredContentsSize());
}

void QWebPage_setPreferredContentsSize(const QWebPage* self, QSize* size) {
	self->setPreferredContentsSize(*size);
}

void QWebPage_setActualVisibleContentRect(const QWebPage* self, QRect* rect) {
	self->setActualVisibleContentRect(*rect);
}

bool QWebPage_event(QWebPage* self, QEvent* param1) {
	return self->event(param1);
}

bool QWebPage_focusNextPrevChild(QWebPage* self, bool next) {
	return self->focusNextPrevChild(next);
}

QVariant* QWebPage_inputMethodQuery(const QWebPage* self, int property) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

bool QWebPage_findText(QWebPage* self, struct miqt_string subString) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return self->findText(subString_QString);
}

void QWebPage_setForwardUnsupportedContent(QWebPage* self, bool forward) {
	self->setForwardUnsupportedContent(forward);
}

bool QWebPage_forwardUnsupportedContent(const QWebPage* self) {
	return self->forwardUnsupportedContent();
}

void QWebPage_setLinkDelegationPolicy(QWebPage* self, int policy) {
	self->setLinkDelegationPolicy(static_cast<QWebPage::LinkDelegationPolicy>(policy));
}

int QWebPage_linkDelegationPolicy(const QWebPage* self) {
	QWebPage::LinkDelegationPolicy _ret = self->linkDelegationPolicy();
	return static_cast<int>(_ret);
}

void QWebPage_setPalette(QWebPage* self, QPalette* palette) {
	self->setPalette(*palette);
}

QPalette* QWebPage_palette(const QWebPage* self) {
	return new QPalette(self->palette());
}

void QWebPage_setContentEditable(QWebPage* self, bool editable) {
	self->setContentEditable(editable);
}

bool QWebPage_isContentEditable(const QWebPage* self) {
	return self->isContentEditable();
}

bool QWebPage_swallowContextMenuEvent(QWebPage* self, QContextMenuEvent* event) {
	return self->swallowContextMenuEvent(event);
}

void QWebPage_updatePositionDependentActions(QWebPage* self, QPoint* pos) {
	self->updatePositionDependentActions(*pos);
}

QMenu* QWebPage_createStandardContextMenu(QWebPage* self) {
	return self->createStandardContextMenu();
}

void QWebPage_setFeaturePermission(QWebPage* self, QWebFrame* frame, int feature, int policy) {
	self->setFeaturePermission(frame, static_cast<QWebPage::Feature>(feature), static_cast<QWebPage::PermissionPolicy>(policy));
}

struct miqt_array /* of struct miqt_string */  QWebPage_supportedContentTypes(const QWebPage* self) {
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

bool QWebPage_supportsContentType(const QWebPage* self, struct miqt_string mimeType) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	return self->supportsContentType(mimeType_QString);
}

bool QWebPage_extension(QWebPage* self, int extension, QWebPage__ExtensionOption* option, QWebPage__ExtensionReturn* output) {
	return self->extension(static_cast<QWebPage::Extension>(extension), option, output);
}

bool QWebPage_supportsExtension(const QWebPage* self, int extension) {
	return self->supportsExtension(static_cast<QWebPage::Extension>(extension));
}

bool QWebPage_shouldInterruptJavaScript(QWebPage* self) {
	return self->shouldInterruptJavaScript();
}

void QWebPage_loadStarted(QWebPage* self) {
	self->loadStarted();
}

void QWebPage_connect_loadStarted(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)()>(&QWebPage::loadStarted), self, [=]() {
		miqt_exec_callback_QWebPage_loadStarted(slot);
	});
}

void QWebPage_loadProgress(QWebPage* self, int progress) {
	self->loadProgress(static_cast<int>(progress));
}

void QWebPage_connect_loadProgress(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(int)>(&QWebPage::loadProgress), self, [=](int progress) {
		int sigval1 = progress;
		miqt_exec_callback_QWebPage_loadProgress(slot, sigval1);
	});
}

void QWebPage_loadFinished(QWebPage* self, bool ok) {
	self->loadFinished(ok);
}

void QWebPage_connect_loadFinished(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(bool)>(&QWebPage::loadFinished), self, [=](bool ok) {
		bool sigval1 = ok;
		miqt_exec_callback_QWebPage_loadFinished(slot, sigval1);
	});
}

void QWebPage_linkHovered(QWebPage* self, struct miqt_string link, struct miqt_string title, struct miqt_string textContent) {
	QString link_QString = QString::fromUtf8(link.data, link.len);
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString textContent_QString = QString::fromUtf8(textContent.data, textContent.len);
	self->linkHovered(link_QString, title_QString, textContent_QString);
}

void QWebPage_connect_linkHovered(QWebPage* self, intptr_t slot) {
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
		miqt_exec_callback_QWebPage_linkHovered(slot, sigval1, sigval2, sigval3);
	});
}

void QWebPage_statusBarMessage(QWebPage* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->statusBarMessage(text_QString);
}

void QWebPage_connect_statusBarMessage(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(const QString&)>(&QWebPage::statusBarMessage), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_QWebPage_statusBarMessage(slot, sigval1);
	});
}

void QWebPage_selectionChanged(QWebPage* self) {
	self->selectionChanged();
}

void QWebPage_connect_selectionChanged(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)()>(&QWebPage::selectionChanged), self, [=]() {
		miqt_exec_callback_QWebPage_selectionChanged(slot);
	});
}

void QWebPage_frameCreated(QWebPage* self, QWebFrame* frame) {
	self->frameCreated(frame);
}

void QWebPage_connect_frameCreated(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebFrame*)>(&QWebPage::frameCreated), self, [=](QWebFrame* frame) {
		QWebFrame* sigval1 = frame;
		miqt_exec_callback_QWebPage_frameCreated(slot, sigval1);
	});
}

void QWebPage_geometryChangeRequested(QWebPage* self, QRect* geom) {
	self->geometryChangeRequested(*geom);
}

void QWebPage_connect_geometryChangeRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(const QRect&)>(&QWebPage::geometryChangeRequested), self, [=](const QRect& geom) {
		const QRect& geom_ret = geom;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geom_ret);
		miqt_exec_callback_QWebPage_geometryChangeRequested(slot, sigval1);
	});
}

void QWebPage_repaintRequested(QWebPage* self, QRect* dirtyRect) {
	self->repaintRequested(*dirtyRect);
}

void QWebPage_connect_repaintRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(const QRect&)>(&QWebPage::repaintRequested), self, [=](const QRect& dirtyRect) {
		const QRect& dirtyRect_ret = dirtyRect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&dirtyRect_ret);
		miqt_exec_callback_QWebPage_repaintRequested(slot, sigval1);
	});
}

void QWebPage_scrollRequested(QWebPage* self, int dx, int dy, QRect* scrollViewRect) {
	self->scrollRequested(static_cast<int>(dx), static_cast<int>(dy), *scrollViewRect);
}

void QWebPage_connect_scrollRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(int, int, const QRect&)>(&QWebPage::scrollRequested), self, [=](int dx, int dy, const QRect& scrollViewRect) {
		int sigval1 = dx;
		int sigval2 = dy;
		const QRect& scrollViewRect_ret = scrollViewRect;
		// Cast returned reference into pointer
		QRect* sigval3 = const_cast<QRect*>(&scrollViewRect_ret);
		miqt_exec_callback_QWebPage_scrollRequested(slot, sigval1, sigval2, sigval3);
	});
}

void QWebPage_windowCloseRequested(QWebPage* self) {
	self->windowCloseRequested();
}

void QWebPage_connect_windowCloseRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)()>(&QWebPage::windowCloseRequested), self, [=]() {
		miqt_exec_callback_QWebPage_windowCloseRequested(slot);
	});
}

void QWebPage_printRequested(QWebPage* self, QWebFrame* frame) {
	self->printRequested(frame);
}

void QWebPage_connect_printRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebFrame*)>(&QWebPage::printRequested), self, [=](QWebFrame* frame) {
		QWebFrame* sigval1 = frame;
		miqt_exec_callback_QWebPage_printRequested(slot, sigval1);
	});
}

void QWebPage_linkClicked(QWebPage* self, QUrl* url) {
	self->linkClicked(*url);
}

void QWebPage_connect_linkClicked(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(const QUrl&)>(&QWebPage::linkClicked), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QWebPage_linkClicked(slot, sigval1);
	});
}

void QWebPage_toolBarVisibilityChangeRequested(QWebPage* self, bool visible) {
	self->toolBarVisibilityChangeRequested(visible);
}

void QWebPage_connect_toolBarVisibilityChangeRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(bool)>(&QWebPage::toolBarVisibilityChangeRequested), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QWebPage_toolBarVisibilityChangeRequested(slot, sigval1);
	});
}

void QWebPage_statusBarVisibilityChangeRequested(QWebPage* self, bool visible) {
	self->statusBarVisibilityChangeRequested(visible);
}

void QWebPage_connect_statusBarVisibilityChangeRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(bool)>(&QWebPage::statusBarVisibilityChangeRequested), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QWebPage_statusBarVisibilityChangeRequested(slot, sigval1);
	});
}

void QWebPage_menuBarVisibilityChangeRequested(QWebPage* self, bool visible) {
	self->menuBarVisibilityChangeRequested(visible);
}

void QWebPage_connect_menuBarVisibilityChangeRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(bool)>(&QWebPage::menuBarVisibilityChangeRequested), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QWebPage_menuBarVisibilityChangeRequested(slot, sigval1);
	});
}

void QWebPage_unsupportedContent(QWebPage* self, QNetworkReply* reply) {
	self->unsupportedContent(reply);
}

void QWebPage_connect_unsupportedContent(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QNetworkReply*)>(&QWebPage::unsupportedContent), self, [=](QNetworkReply* reply) {
		QNetworkReply* sigval1 = reply;
		miqt_exec_callback_QWebPage_unsupportedContent(slot, sigval1);
	});
}

void QWebPage_downloadRequested(QWebPage* self, QNetworkRequest* request) {
	self->downloadRequested(*request);
}

void QWebPage_connect_downloadRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(const QNetworkRequest&)>(&QWebPage::downloadRequested), self, [=](const QNetworkRequest& request) {
		const QNetworkRequest& request_ret = request;
		// Cast returned reference into pointer
		QNetworkRequest* sigval1 = const_cast<QNetworkRequest*>(&request_ret);
		miqt_exec_callback_QWebPage_downloadRequested(slot, sigval1);
	});
}

void QWebPage_focusedElementChanged(QWebPage* self, QWebElement* element) {
	self->focusedElementChanged(*element);
}

void QWebPage_connect_focusedElementChanged(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(const QWebElement&)>(&QWebPage::focusedElementChanged), self, [=](const QWebElement& element) {
		const QWebElement& element_ret = element;
		// Cast returned reference into pointer
		QWebElement* sigval1 = const_cast<QWebElement*>(&element_ret);
		miqt_exec_callback_QWebPage_focusedElementChanged(slot, sigval1);
	});
}

void QWebPage_microFocusChanged(QWebPage* self) {
	self->microFocusChanged();
}

void QWebPage_connect_microFocusChanged(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)()>(&QWebPage::microFocusChanged), self, [=]() {
		miqt_exec_callback_QWebPage_microFocusChanged(slot);
	});
}

void QWebPage_contentsChanged(QWebPage* self) {
	self->contentsChanged();
}

void QWebPage_connect_contentsChanged(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)()>(&QWebPage::contentsChanged), self, [=]() {
		miqt_exec_callback_QWebPage_contentsChanged(slot);
	});
}

void QWebPage_databaseQuotaExceeded(QWebPage* self, QWebFrame* frame, struct miqt_string databaseName) {
	QString databaseName_QString = QString::fromUtf8(databaseName.data, databaseName.len);
	self->databaseQuotaExceeded(frame, databaseName_QString);
}

void QWebPage_connect_databaseQuotaExceeded(QWebPage* self, intptr_t slot) {
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
		miqt_exec_callback_QWebPage_databaseQuotaExceeded(slot, sigval1, sigval2);
	});
}

void QWebPage_applicationCacheQuotaExceeded(QWebPage* self, QWebSecurityOrigin* origin, unsigned long long defaultOriginQuota, unsigned long long totalSpaceNeeded) {
	self->applicationCacheQuotaExceeded(origin, static_cast<quint64>(defaultOriginQuota), static_cast<quint64>(totalSpaceNeeded));
}

void QWebPage_connect_applicationCacheQuotaExceeded(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebSecurityOrigin*, quint64, quint64)>(&QWebPage::applicationCacheQuotaExceeded), self, [=](QWebSecurityOrigin* origin, quint64 defaultOriginQuota, quint64 totalSpaceNeeded) {
		QWebSecurityOrigin* sigval1 = origin;
		quint64 defaultOriginQuota_ret = defaultOriginQuota;
		unsigned long long sigval2 = static_cast<unsigned long long>(defaultOriginQuota_ret);
		quint64 totalSpaceNeeded_ret = totalSpaceNeeded;
		unsigned long long sigval3 = static_cast<unsigned long long>(totalSpaceNeeded_ret);
		miqt_exec_callback_QWebPage_applicationCacheQuotaExceeded(slot, sigval1, sigval2, sigval3);
	});
}

void QWebPage_saveFrameStateRequested(QWebPage* self, QWebFrame* frame, QWebHistoryItem* item) {
	self->saveFrameStateRequested(frame, item);
}

void QWebPage_connect_saveFrameStateRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebFrame*, QWebHistoryItem*)>(&QWebPage::saveFrameStateRequested), self, [=](QWebFrame* frame, QWebHistoryItem* item) {
		QWebFrame* sigval1 = frame;
		QWebHistoryItem* sigval2 = item;
		miqt_exec_callback_QWebPage_saveFrameStateRequested(slot, sigval1, sigval2);
	});
}

void QWebPage_restoreFrameStateRequested(QWebPage* self, QWebFrame* frame) {
	self->restoreFrameStateRequested(frame);
}

void QWebPage_connect_restoreFrameStateRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebFrame*)>(&QWebPage::restoreFrameStateRequested), self, [=](QWebFrame* frame) {
		QWebFrame* sigval1 = frame;
		miqt_exec_callback_QWebPage_restoreFrameStateRequested(slot, sigval1);
	});
}

void QWebPage_viewportChangeRequested(QWebPage* self) {
	self->viewportChangeRequested();
}

void QWebPage_connect_viewportChangeRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)()>(&QWebPage::viewportChangeRequested), self, [=]() {
		miqt_exec_callback_QWebPage_viewportChangeRequested(slot);
	});
}

void QWebPage_featurePermissionRequested(QWebPage* self, QWebFrame* frame, int feature) {
	self->featurePermissionRequested(frame, static_cast<QWebPage::Feature>(feature));
}

void QWebPage_connect_featurePermissionRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebFrame*, QWebPage::Feature)>(&QWebPage::featurePermissionRequested), self, [=](QWebFrame* frame, QWebPage::Feature feature) {
		QWebFrame* sigval1 = frame;
		QWebPage::Feature feature_ret = feature;
		int sigval2 = static_cast<int>(feature_ret);
		miqt_exec_callback_QWebPage_featurePermissionRequested(slot, sigval1, sigval2);
	});
}

void QWebPage_featurePermissionRequestCanceled(QWebPage* self, QWebFrame* frame, int feature) {
	self->featurePermissionRequestCanceled(frame, static_cast<QWebPage::Feature>(feature));
}

void QWebPage_connect_featurePermissionRequestCanceled(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebFrame*, QWebPage::Feature)>(&QWebPage::featurePermissionRequestCanceled), self, [=](QWebFrame* frame, QWebPage::Feature feature) {
		QWebFrame* sigval1 = frame;
		QWebPage::Feature feature_ret = feature;
		int sigval2 = static_cast<int>(feature_ret);
		miqt_exec_callback_QWebPage_featurePermissionRequestCanceled(slot, sigval1, sigval2);
	});
}

void QWebPage_fullScreenRequested(QWebPage* self, QWebFullScreenRequest* fullScreenRequest) {
	self->fullScreenRequested(*fullScreenRequest);
}

void QWebPage_connect_fullScreenRequested(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(QWebFullScreenRequest)>(&QWebPage::fullScreenRequested), self, [=](QWebFullScreenRequest fullScreenRequest) {
		QWebFullScreenRequest* sigval1 = new QWebFullScreenRequest(fullScreenRequest);
		miqt_exec_callback_QWebPage_fullScreenRequested(slot, sigval1);
	});
}

void QWebPage_consoleMessageReceived(QWebPage* self, int source, int level, struct miqt_string message, int lineNumber, struct miqt_string sourceID) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	QString sourceID_QString = QString::fromUtf8(sourceID.data, sourceID.len);
	self->consoleMessageReceived(static_cast<QWebPage::MessageSource>(source), static_cast<QWebPage::MessageLevel>(level), message_QString, static_cast<int>(lineNumber), sourceID_QString);
}

void QWebPage_connect_consoleMessageReceived(QWebPage* self, intptr_t slot) {
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
		miqt_exec_callback_QWebPage_consoleMessageReceived(slot, sigval1, sigval2, sigval3, sigval4, sigval5);
	});
}

void QWebPage_recentlyAudibleChanged(QWebPage* self, bool recentlyAudible) {
	self->recentlyAudibleChanged(recentlyAudible);
}

void QWebPage_connect_recentlyAudibleChanged(QWebPage* self, intptr_t slot) {
	MiqtVirtualQWebPage::connect(self, static_cast<void (QWebPage::*)(bool)>(&QWebPage::recentlyAudibleChanged), self, [=](bool recentlyAudible) {
		bool sigval1 = recentlyAudible;
		miqt_exec_callback_QWebPage_recentlyAudibleChanged(slot, sigval1);
	});
}

struct miqt_string QWebPage_tr2(const char* s, const char* c) {
	QString _ret = QWebPage::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPage_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebPage::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPage_trUtf82(const char* s, const char* c) {
	QString _ret = QWebPage::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPage_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebPage::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebPage_findText2(QWebPage* self, struct miqt_string subString, int options) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return self->findText(subString_QString, static_cast<QWebPage::FindFlags>(options));
}

bool QWebPage_override_virtual_triggerAction(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__triggerAction = slot;
	return true;
}

void QWebPage_virtualbase_triggerAction(void* self, int action, bool checked) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_triggerAction(action, checked);
}

bool QWebPage_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QWebPage_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_event(param1);
}

bool QWebPage_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

bool QWebPage_virtualbase_extension(void* self, int extension, QWebPage__ExtensionOption* option, QWebPage__ExtensionReturn* output) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_extension(extension, option, output);
}

bool QWebPage_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QWebPage_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQWebPage*)(self) )->virtualbase_supportsExtension(extension);
}

bool QWebPage_override_virtual_shouldInterruptJavaScript(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shouldInterruptJavaScript = slot;
	return true;
}

bool QWebPage_virtualbase_shouldInterruptJavaScript(void* self) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_shouldInterruptJavaScript();
}

bool QWebPage_override_virtual_createWindow(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createWindow = slot;
	return true;
}

QWebPage* QWebPage_virtualbase_createWindow(void* self, int type) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_createWindow(type);
}

bool QWebPage_override_virtual_createPlugin(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createPlugin = slot;
	return true;
}

QObject* QWebPage_virtualbase_createPlugin(void* self, struct miqt_string classid, QUrl* url, struct miqt_array /* of struct miqt_string */  paramNames, struct miqt_array /* of struct miqt_string */  paramValues) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_createPlugin(classid, url, paramNames, paramValues);
}

bool QWebPage_override_virtual_acceptNavigationRequest(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__acceptNavigationRequest = slot;
	return true;
}

bool QWebPage_virtualbase_acceptNavigationRequest(void* self, QWebFrame* frame, QNetworkRequest* request, int type) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_acceptNavigationRequest(frame, request, type);
}

bool QWebPage_override_virtual_chooseFile(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__chooseFile = slot;
	return true;
}

struct miqt_string QWebPage_virtualbase_chooseFile(void* self, QWebFrame* originatingFrame, struct miqt_string oldFile) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_chooseFile(originatingFrame, oldFile);
}

bool QWebPage_override_virtual_javaScriptAlert(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__javaScriptAlert = slot;
	return true;
}

void QWebPage_virtualbase_javaScriptAlert(void* self, QWebFrame* originatingFrame, struct miqt_string msg) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_javaScriptAlert(originatingFrame, msg);
}

bool QWebPage_override_virtual_javaScriptConfirm(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__javaScriptConfirm = slot;
	return true;
}

bool QWebPage_virtualbase_javaScriptConfirm(void* self, QWebFrame* originatingFrame, struct miqt_string msg) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_javaScriptConfirm(originatingFrame, msg);
}

bool QWebPage_override_virtual_javaScriptConsoleMessage(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__javaScriptConsoleMessage = slot;
	return true;
}

void QWebPage_virtualbase_javaScriptConsoleMessage(void* self, struct miqt_string message, int lineNumber, struct miqt_string sourceID) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_javaScriptConsoleMessage(message, lineNumber, sourceID);
}

bool QWebPage_override_virtual_userAgentForUrl(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__userAgentForUrl = slot;
	return true;
}

struct miqt_string QWebPage_virtualbase_userAgentForUrl(const void* self, QUrl* url) {
	return ( (const MiqtVirtualQWebPage*)(self) )->virtualbase_userAgentForUrl(url);
}

bool QWebPage_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWebPage_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebPage*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QWebPage_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QWebPage_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_timerEvent(event);
}

bool QWebPage_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QWebPage_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_childEvent(event);
}

bool QWebPage_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QWebPage_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_customEvent(event);
}

bool QWebPage_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QWebPage_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_connectNotify(signal);
}

bool QWebPage_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWebPage_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebPage*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QWebPage_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QWebPage_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QWebPage_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QWebPage_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWebPage* self_cast = dynamic_cast<MiqtVirtualQWebPage*>( (QWebPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QWebPage_delete(QWebPage* self) {
	delete self;
}

QWebPage__ViewportAttributes* QWebPage__ViewportAttributes_new() {
	return new QWebPage::ViewportAttributes();
}

QWebPage__ViewportAttributes* QWebPage__ViewportAttributes_new2(QWebPage__ViewportAttributes* other) {
	return new QWebPage::ViewportAttributes(*other);
}

void QWebPage__ViewportAttributes_operatorAssign(QWebPage__ViewportAttributes* self, QWebPage__ViewportAttributes* other) {
	self->operator=(*other);
}

double QWebPage__ViewportAttributes_initialScaleFactor(const QWebPage__ViewportAttributes* self) {
	qreal _ret = self->initialScaleFactor();
	return static_cast<double>(_ret);
}

double QWebPage__ViewportAttributes_minimumScaleFactor(const QWebPage__ViewportAttributes* self) {
	qreal _ret = self->minimumScaleFactor();
	return static_cast<double>(_ret);
}

double QWebPage__ViewportAttributes_maximumScaleFactor(const QWebPage__ViewportAttributes* self) {
	qreal _ret = self->maximumScaleFactor();
	return static_cast<double>(_ret);
}

double QWebPage__ViewportAttributes_devicePixelRatio(const QWebPage__ViewportAttributes* self) {
	qreal _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

bool QWebPage__ViewportAttributes_isUserScalable(const QWebPage__ViewportAttributes* self) {
	return self->isUserScalable();
}

bool QWebPage__ViewportAttributes_isValid(const QWebPage__ViewportAttributes* self) {
	return self->isValid();
}

QSizeF* QWebPage__ViewportAttributes_size(const QWebPage__ViewportAttributes* self) {
	return new QSizeF(self->size());
}

void QWebPage__ViewportAttributes_delete(QWebPage__ViewportAttributes* self) {
	delete self;
}

QWebPage__ExtensionOption* QWebPage__ExtensionOption_new(QWebPage__ExtensionOption* param1) {
	return new QWebPage::ExtensionOption(*param1);
}

void QWebPage__ExtensionOption_delete(QWebPage__ExtensionOption* self) {
	delete self;
}

QWebPage__ExtensionReturn* QWebPage__ExtensionReturn_new(QWebPage__ExtensionReturn* param1) {
	return new QWebPage::ExtensionReturn(*param1);
}

QWebPage__ExtensionReturn* QWebPage__ExtensionReturn_new2() {
	return new QWebPage::ExtensionReturn();
}

void QWebPage__ExtensionReturn_delete(QWebPage__ExtensionReturn* self) {
	delete self;
}

void QWebPage__ChooseMultipleFilesExtensionOption_virtbase(QWebPage__ChooseMultipleFilesExtensionOption* src, QWebPage::ExtensionOption** outptr_QWebPage__ExtensionOption) {
	*outptr_QWebPage__ExtensionOption = static_cast<QWebPage::ExtensionOption*>(src);
}

void QWebPage__ChooseMultipleFilesExtensionOption_delete(QWebPage__ChooseMultipleFilesExtensionOption* self) {
	delete self;
}

void QWebPage__ChooseMultipleFilesExtensionReturn_virtbase(QWebPage__ChooseMultipleFilesExtensionReturn* src, QWebPage::ExtensionReturn** outptr_QWebPage__ExtensionReturn) {
	*outptr_QWebPage__ExtensionReturn = static_cast<QWebPage::ExtensionReturn*>(src);
}

void QWebPage__ChooseMultipleFilesExtensionReturn_delete(QWebPage__ChooseMultipleFilesExtensionReturn* self) {
	delete self;
}

QWebPage__ErrorPageExtensionOption* QWebPage__ErrorPageExtensionOption_new(QWebPage__ErrorPageExtensionOption* param1) {
	return new QWebPage::ErrorPageExtensionOption(*param1);
}

void QWebPage__ErrorPageExtensionOption_virtbase(QWebPage__ErrorPageExtensionOption* src, QWebPage::ExtensionOption** outptr_QWebPage__ExtensionOption) {
	*outptr_QWebPage__ExtensionOption = static_cast<QWebPage::ExtensionOption*>(src);
}

void QWebPage__ErrorPageExtensionOption_operatorAssign(QWebPage__ErrorPageExtensionOption* self, QWebPage__ErrorPageExtensionOption* param1) {
	self->operator=(*param1);
}

void QWebPage__ErrorPageExtensionOption_delete(QWebPage__ErrorPageExtensionOption* self) {
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

void QWebPage__ErrorPageExtensionReturn_operatorAssign(QWebPage__ErrorPageExtensionReturn* self, QWebPage__ErrorPageExtensionReturn* param1) {
	self->operator=(*param1);
}

void QWebPage__ErrorPageExtensionReturn_delete(QWebPage__ErrorPageExtensionReturn* self) {
	delete self;
}

