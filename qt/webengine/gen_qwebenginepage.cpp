#include <QAction>
#include <QAuthenticator>
#include <QByteArray>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPageLayout>
#include <QPointF>
#include <QRect>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QWebChannel>
#include <QWebEngineCertificateError>
#include <QWebEngineClientCertificateSelection>
#include <QWebEngineContextMenuData>
#include <QWebEngineFindTextResult>
#include <QWebEngineFullScreenRequest>
#include <QWebEngineHistory>
#include <QWebEngineHttpRequest>
#include <QWebEnginePage>
#include <QWebEngineProfile>
#include <QWebEngineQuotaRequest>
#include <QWebEngineRegisterProtocolHandlerRequest>
#include <QWebEngineScriptCollection>
#include <QWebEngineSettings>
#include <QWebEngineUrlRequestInterceptor>
#include <QWidget>
#include <qwebenginepage.h>
#include "gen_qwebenginepage.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebEnginePage_loadStarted(intptr_t);
void miqt_exec_callback_QWebEnginePage_loadProgress(intptr_t, int);
void miqt_exec_callback_QWebEnginePage_loadFinished(intptr_t, bool);
void miqt_exec_callback_QWebEnginePage_linkHovered(intptr_t, struct miqt_string);
void miqt_exec_callback_QWebEnginePage_selectionChanged(intptr_t);
void miqt_exec_callback_QWebEnginePage_geometryChangeRequested(intptr_t, QRect*);
void miqt_exec_callback_QWebEnginePage_windowCloseRequested(intptr_t);
void miqt_exec_callback_QWebEnginePage_featurePermissionRequested(intptr_t, QUrl*, int);
void miqt_exec_callback_QWebEnginePage_featurePermissionRequestCanceled(intptr_t, QUrl*, int);
void miqt_exec_callback_QWebEnginePage_fullScreenRequested(intptr_t, QWebEngineFullScreenRequest*);
void miqt_exec_callback_QWebEnginePage_quotaRequested(intptr_t, QWebEngineQuotaRequest*);
void miqt_exec_callback_QWebEnginePage_registerProtocolHandlerRequested(intptr_t, QWebEngineRegisterProtocolHandlerRequest*);
void miqt_exec_callback_QWebEnginePage_selectClientCertificate(intptr_t, QWebEngineClientCertificateSelection*);
void miqt_exec_callback_QWebEnginePage_authenticationRequired(intptr_t, QUrl*, QAuthenticator*);
void miqt_exec_callback_QWebEnginePage_proxyAuthenticationRequired(intptr_t, QUrl*, QAuthenticator*, struct miqt_string);
void miqt_exec_callback_QWebEnginePage_renderProcessTerminated(intptr_t, int, int);
void miqt_exec_callback_QWebEnginePage_titleChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QWebEnginePage_urlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QWebEnginePage_iconUrlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QWebEnginePage_iconChanged(intptr_t, QIcon*);
void miqt_exec_callback_QWebEnginePage_scrollPositionChanged(intptr_t, QPointF*);
void miqt_exec_callback_QWebEnginePage_contentsSizeChanged(intptr_t, QSizeF*);
void miqt_exec_callback_QWebEnginePage_audioMutedChanged(intptr_t, bool);
void miqt_exec_callback_QWebEnginePage_recentlyAudibleChanged(intptr_t, bool);
void miqt_exec_callback_QWebEnginePage_renderProcessPidChanged(intptr_t, long long);
void miqt_exec_callback_QWebEnginePage_pdfPrintingFinished(intptr_t, struct miqt_string, bool);
void miqt_exec_callback_QWebEnginePage_printRequested(intptr_t);
void miqt_exec_callback_QWebEnginePage_visibleChanged(intptr_t, bool);
void miqt_exec_callback_QWebEnginePage_lifecycleStateChanged(intptr_t, int);
void miqt_exec_callback_QWebEnginePage_recommendedStateChanged(intptr_t, int);
void miqt_exec_callback_QWebEnginePage_findTextFinished(intptr_t, QWebEngineFindTextResult*);
void miqt_exec_callback_QWebEnginePage_triggerAction(QWebEnginePage*, intptr_t, int, bool);
bool miqt_exec_callback_QWebEnginePage_event(QWebEnginePage*, intptr_t, QEvent*);
QWebEnginePage* miqt_exec_callback_QWebEnginePage_createWindow(QWebEnginePage*, intptr_t, int);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QWebEnginePage_chooseFiles(QWebEnginePage*, intptr_t, int, struct miqt_array /* of struct miqt_string */ , struct miqt_array /* of struct miqt_string */ );
void miqt_exec_callback_QWebEnginePage_javaScriptAlert(QWebEnginePage*, intptr_t, QUrl*, struct miqt_string);
bool miqt_exec_callback_QWebEnginePage_javaScriptConfirm(QWebEnginePage*, intptr_t, QUrl*, struct miqt_string);
void miqt_exec_callback_QWebEnginePage_javaScriptConsoleMessage(QWebEnginePage*, intptr_t, int, struct miqt_string, int, struct miqt_string);
bool miqt_exec_callback_QWebEnginePage_certificateError(QWebEnginePage*, intptr_t, QWebEngineCertificateError*);
bool miqt_exec_callback_QWebEnginePage_acceptNavigationRequest(QWebEnginePage*, intptr_t, QUrl*, int, bool);
bool miqt_exec_callback_QWebEnginePage_eventFilter(QWebEnginePage*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebEnginePage_timerEvent(QWebEnginePage*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebEnginePage_childEvent(QWebEnginePage*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebEnginePage_customEvent(QWebEnginePage*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEnginePage_connectNotify(QWebEnginePage*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebEnginePage_disconnectNotify(QWebEnginePage*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebEnginePage final : public QWebEnginePage {
public:

	MiqtVirtualQWebEnginePage(): QWebEnginePage() {};
	MiqtVirtualQWebEnginePage(QWebEngineProfile* profile): QWebEnginePage(profile) {};
	MiqtVirtualQWebEnginePage(QObject* parent): QWebEnginePage(parent) {};
	MiqtVirtualQWebEnginePage(QWebEngineProfile* profile, QObject* parent): QWebEnginePage(profile, parent) {};

	virtual ~MiqtVirtualQWebEnginePage() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__triggerAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void triggerAction(QWebEnginePage::WebAction action, bool checked) override {
		if (handle__triggerAction == 0) {
			QWebEnginePage::triggerAction(action, checked);
			return;
		}
		
		QWebEnginePage::WebAction action_ret = action;
		int sigval1 = static_cast<int>(action_ret);
		bool sigval2 = checked;

		miqt_exec_callback_QWebEnginePage_triggerAction(this, handle__triggerAction, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_triggerAction(int action, bool checked) {

		QWebEnginePage::triggerAction(static_cast<QWebEnginePage::WebAction>(action), checked);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QWebEnginePage::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QWebEnginePage_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QWebEnginePage::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual QWebEnginePage* createWindow(QWebEnginePage::WebWindowType type) override {
		if (handle__createWindow == 0) {
			return QWebEnginePage::createWindow(type);
		}
		
		QWebEnginePage::WebWindowType type_ret = type;
		int sigval1 = static_cast<int>(type_ret);

		QWebEnginePage* callback_return_value = miqt_exec_callback_QWebEnginePage_createWindow(this, handle__createWindow, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWebEnginePage* virtualbase_createWindow(int type) {

		return QWebEnginePage::createWindow(static_cast<QWebEnginePage::WebWindowType>(type));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__chooseFiles = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList chooseFiles(QWebEnginePage::FileSelectionMode mode, const QStringList& oldFiles, const QStringList& acceptedMimeTypes) override {
		if (handle__chooseFiles == 0) {
			return QWebEnginePage::chooseFiles(mode, oldFiles, acceptedMimeTypes);
		}
		
		QWebEnginePage::FileSelectionMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		const QStringList& oldFiles_ret = oldFiles;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* oldFiles_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * oldFiles_ret.length()));
		for (size_t i = 0, e = oldFiles_ret.length(); i < e; ++i) {
			QString oldFiles_lv_ret = oldFiles_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray oldFiles_lv_b = oldFiles_lv_ret.toUtf8();
			struct miqt_string oldFiles_lv_ms;
			oldFiles_lv_ms.len = oldFiles_lv_b.length();
			oldFiles_lv_ms.data = static_cast<char*>(malloc(oldFiles_lv_ms.len));
			memcpy(oldFiles_lv_ms.data, oldFiles_lv_b.data(), oldFiles_lv_ms.len);
			oldFiles_arr[i] = oldFiles_lv_ms;
		}
		struct miqt_array oldFiles_out;
		oldFiles_out.len = oldFiles_ret.length();
		oldFiles_out.data = static_cast<void*>(oldFiles_arr);
		struct miqt_array /* of struct miqt_string */  sigval2 = oldFiles_out;
		const QStringList& acceptedMimeTypes_ret = acceptedMimeTypes;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* acceptedMimeTypes_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * acceptedMimeTypes_ret.length()));
		for (size_t i = 0, e = acceptedMimeTypes_ret.length(); i < e; ++i) {
			QString acceptedMimeTypes_lv_ret = acceptedMimeTypes_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray acceptedMimeTypes_lv_b = acceptedMimeTypes_lv_ret.toUtf8();
			struct miqt_string acceptedMimeTypes_lv_ms;
			acceptedMimeTypes_lv_ms.len = acceptedMimeTypes_lv_b.length();
			acceptedMimeTypes_lv_ms.data = static_cast<char*>(malloc(acceptedMimeTypes_lv_ms.len));
			memcpy(acceptedMimeTypes_lv_ms.data, acceptedMimeTypes_lv_b.data(), acceptedMimeTypes_lv_ms.len);
			acceptedMimeTypes_arr[i] = acceptedMimeTypes_lv_ms;
		}
		struct miqt_array acceptedMimeTypes_out;
		acceptedMimeTypes_out.len = acceptedMimeTypes_ret.length();
		acceptedMimeTypes_out.data = static_cast<void*>(acceptedMimeTypes_arr);
		struct miqt_array /* of struct miqt_string */  sigval3 = acceptedMimeTypes_out;

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QWebEnginePage_chooseFiles(this, handle__chooseFiles, sigval1, sigval2, sigval3);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of struct miqt_string */  virtualbase_chooseFiles(int mode, struct miqt_array /* of struct miqt_string */  oldFiles, struct miqt_array /* of struct miqt_string */  acceptedMimeTypes) {
		QStringList oldFiles_QList;
		oldFiles_QList.reserve(oldFiles.len);
		struct miqt_string* oldFiles_arr = static_cast<struct miqt_string*>(oldFiles.data);
		for(size_t i = 0; i < oldFiles.len; ++i) {
			QString oldFiles_arr_i_QString = QString::fromUtf8(oldFiles_arr[i].data, oldFiles_arr[i].len);
			oldFiles_QList.push_back(oldFiles_arr_i_QString);
		}
		QStringList acceptedMimeTypes_QList;
		acceptedMimeTypes_QList.reserve(acceptedMimeTypes.len);
		struct miqt_string* acceptedMimeTypes_arr = static_cast<struct miqt_string*>(acceptedMimeTypes.data);
		for(size_t i = 0; i < acceptedMimeTypes.len; ++i) {
			QString acceptedMimeTypes_arr_i_QString = QString::fromUtf8(acceptedMimeTypes_arr[i].data, acceptedMimeTypes_arr[i].len);
			acceptedMimeTypes_QList.push_back(acceptedMimeTypes_arr_i_QString);
		}

		QStringList _ret = QWebEnginePage::chooseFiles(static_cast<QWebEnginePage::FileSelectionMode>(mode), oldFiles_QList, acceptedMimeTypes_QList);
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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__javaScriptAlert = 0;

	// Subclass to allow providing a Go implementation
	virtual void javaScriptAlert(const QUrl& securityOrigin, const QString& msg) override {
		if (handle__javaScriptAlert == 0) {
			QWebEnginePage::javaScriptAlert(securityOrigin, msg);
			return;
		}
		
		const QUrl& securityOrigin_ret = securityOrigin;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&securityOrigin_ret);
		const QString msg_ret = msg;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray msg_b = msg_ret.toUtf8();
		struct miqt_string msg_ms;
		msg_ms.len = msg_b.length();
		msg_ms.data = static_cast<char*>(malloc(msg_ms.len));
		memcpy(msg_ms.data, msg_b.data(), msg_ms.len);
		struct miqt_string sigval2 = msg_ms;

		miqt_exec_callback_QWebEnginePage_javaScriptAlert(this, handle__javaScriptAlert, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_javaScriptAlert(QUrl* securityOrigin, struct miqt_string msg) {
		QString msg_QString = QString::fromUtf8(msg.data, msg.len);

		QWebEnginePage::javaScriptAlert(*securityOrigin, msg_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__javaScriptConfirm = 0;

	// Subclass to allow providing a Go implementation
	virtual bool javaScriptConfirm(const QUrl& securityOrigin, const QString& msg) override {
		if (handle__javaScriptConfirm == 0) {
			return QWebEnginePage::javaScriptConfirm(securityOrigin, msg);
		}
		
		const QUrl& securityOrigin_ret = securityOrigin;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&securityOrigin_ret);
		const QString msg_ret = msg;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray msg_b = msg_ret.toUtf8();
		struct miqt_string msg_ms;
		msg_ms.len = msg_b.length();
		msg_ms.data = static_cast<char*>(malloc(msg_ms.len));
		memcpy(msg_ms.data, msg_b.data(), msg_ms.len);
		struct miqt_string sigval2 = msg_ms;

		bool callback_return_value = miqt_exec_callback_QWebEnginePage_javaScriptConfirm(this, handle__javaScriptConfirm, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_javaScriptConfirm(QUrl* securityOrigin, struct miqt_string msg) {
		QString msg_QString = QString::fromUtf8(msg.data, msg.len);

		return QWebEnginePage::javaScriptConfirm(*securityOrigin, msg_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__javaScriptConsoleMessage = 0;

	// Subclass to allow providing a Go implementation
	virtual void javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel level, const QString& message, int lineNumber, const QString& sourceID) override {
		if (handle__javaScriptConsoleMessage == 0) {
			QWebEnginePage::javaScriptConsoleMessage(level, message, lineNumber, sourceID);
			return;
		}
		
		QWebEnginePage::JavaScriptConsoleMessageLevel level_ret = level;
		int sigval1 = static_cast<int>(level_ret);
		const QString message_ret = message;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray message_b = message_ret.toUtf8();
		struct miqt_string message_ms;
		message_ms.len = message_b.length();
		message_ms.data = static_cast<char*>(malloc(message_ms.len));
		memcpy(message_ms.data, message_b.data(), message_ms.len);
		struct miqt_string sigval2 = message_ms;
		int sigval3 = lineNumber;
		const QString sourceID_ret = sourceID;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray sourceID_b = sourceID_ret.toUtf8();
		struct miqt_string sourceID_ms;
		sourceID_ms.len = sourceID_b.length();
		sourceID_ms.data = static_cast<char*>(malloc(sourceID_ms.len));
		memcpy(sourceID_ms.data, sourceID_b.data(), sourceID_ms.len);
		struct miqt_string sigval4 = sourceID_ms;

		miqt_exec_callback_QWebEnginePage_javaScriptConsoleMessage(this, handle__javaScriptConsoleMessage, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_javaScriptConsoleMessage(int level, struct miqt_string message, int lineNumber, struct miqt_string sourceID) {
		QString message_QString = QString::fromUtf8(message.data, message.len);
		QString sourceID_QString = QString::fromUtf8(sourceID.data, sourceID.len);

		QWebEnginePage::javaScriptConsoleMessage(static_cast<QWebEnginePage::JavaScriptConsoleMessageLevel>(level), message_QString, static_cast<int>(lineNumber), sourceID_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__certificateError = 0;

	// Subclass to allow providing a Go implementation
	virtual bool certificateError(const QWebEngineCertificateError& certificateError) override {
		if (handle__certificateError == 0) {
			return QWebEnginePage::certificateError(certificateError);
		}
		
		const QWebEngineCertificateError& certificateError_ret = certificateError;
		// Cast returned reference into pointer
		QWebEngineCertificateError* sigval1 = const_cast<QWebEngineCertificateError*>(&certificateError_ret);

		bool callback_return_value = miqt_exec_callback_QWebEnginePage_certificateError(this, handle__certificateError, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_certificateError(QWebEngineCertificateError* certificateError) {

		return QWebEnginePage::certificateError(*certificateError);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__acceptNavigationRequest = 0;

	// Subclass to allow providing a Go implementation
	virtual bool acceptNavigationRequest(const QUrl& url, QWebEnginePage::NavigationType type, bool isMainFrame) override {
		if (handle__acceptNavigationRequest == 0) {
			return QWebEnginePage::acceptNavigationRequest(url, type, isMainFrame);
		}
		
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		QWebEnginePage::NavigationType type_ret = type;
		int sigval2 = static_cast<int>(type_ret);
		bool sigval3 = isMainFrame;

		bool callback_return_value = miqt_exec_callback_QWebEnginePage_acceptNavigationRequest(this, handle__acceptNavigationRequest, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_acceptNavigationRequest(QUrl* url, int type, bool isMainFrame) {

		return QWebEnginePage::acceptNavigationRequest(*url, static_cast<QWebEnginePage::NavigationType>(type), isMainFrame);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWebEnginePage::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebEnginePage_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QWebEnginePage::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWebEnginePage::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebEnginePage_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QWebEnginePage::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWebEnginePage::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebEnginePage_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QWebEnginePage::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWebEnginePage::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebEnginePage_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QWebEnginePage::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWebEnginePage::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEnginePage_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QWebEnginePage::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWebEnginePage::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEnginePage_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QWebEnginePage::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QWebEnginePage_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWebEnginePage_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWebEnginePage_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWebEnginePage_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWebEnginePage* QWebEnginePage_new() {
	return new MiqtVirtualQWebEnginePage();
}

QWebEnginePage* QWebEnginePage_new2(QWebEngineProfile* profile) {
	return new MiqtVirtualQWebEnginePage(profile);
}

QWebEnginePage* QWebEnginePage_new3(QObject* parent) {
	return new MiqtVirtualQWebEnginePage(parent);
}

QWebEnginePage* QWebEnginePage_new4(QWebEngineProfile* profile, QObject* parent) {
	return new MiqtVirtualQWebEnginePage(profile, parent);
}

void QWebEnginePage_virtbase(QWebEnginePage* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEnginePage_metaObject(const QWebEnginePage* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEnginePage_metacast(QWebEnginePage* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEnginePage_tr(const char* s) {
	QString _ret = QWebEnginePage::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEnginePage_trUtf8(const char* s) {
	QString _ret = QWebEnginePage::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebEngineHistory* QWebEnginePage_history(const QWebEnginePage* self) {
	return self->history();
}

void QWebEnginePage_setView(QWebEnginePage* self, QWidget* view) {
	self->setView(view);
}

QWidget* QWebEnginePage_view(const QWebEnginePage* self) {
	return self->view();
}

bool QWebEnginePage_hasSelection(const QWebEnginePage* self) {
	return self->hasSelection();
}

struct miqt_string QWebEnginePage_selectedText(const QWebEnginePage* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebEngineProfile* QWebEnginePage_profile(const QWebEnginePage* self) {
	return self->profile();
}

QAction* QWebEnginePage_action(const QWebEnginePage* self, int action) {
	return self->action(static_cast<QWebEnginePage::WebAction>(action));
}

void QWebEnginePage_triggerAction(QWebEnginePage* self, int action, bool checked) {
	self->triggerAction(static_cast<QWebEnginePage::WebAction>(action), checked);
}

void QWebEnginePage_replaceMisspelledWord(QWebEnginePage* self, struct miqt_string replacement) {
	QString replacement_QString = QString::fromUtf8(replacement.data, replacement.len);
	self->replaceMisspelledWord(replacement_QString);
}

bool QWebEnginePage_event(QWebEnginePage* self, QEvent* param1) {
	return self->event(param1);
}

void QWebEnginePage_findText(QWebEnginePage* self, struct miqt_string subString) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	self->findText(subString_QString);
}

QMenu* QWebEnginePage_createStandardContextMenu(QWebEnginePage* self) {
	return self->createStandardContextMenu();
}

void QWebEnginePage_setFeaturePermission(QWebEnginePage* self, QUrl* securityOrigin, int feature, int policy) {
	self->setFeaturePermission(*securityOrigin, static_cast<QWebEnginePage::Feature>(feature), static_cast<QWebEnginePage::PermissionPolicy>(policy));
}

void QWebEnginePage_load(QWebEnginePage* self, QUrl* url) {
	self->load(*url);
}

void QWebEnginePage_loadWithRequest(QWebEnginePage* self, QWebEngineHttpRequest* request) {
	self->load(*request);
}

void QWebEnginePage_download(QWebEnginePage* self, QUrl* url) {
	self->download(*url);
}

void QWebEnginePage_setHtml(QWebEnginePage* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

void QWebEnginePage_setContent(QWebEnginePage* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->setContent(data_QByteArray);
}

struct miqt_string QWebEnginePage_title(const QWebEnginePage* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEnginePage_setUrl(QWebEnginePage* self, QUrl* url) {
	self->setUrl(*url);
}

QUrl* QWebEnginePage_url(const QWebEnginePage* self) {
	return new QUrl(self->url());
}

QUrl* QWebEnginePage_requestedUrl(const QWebEnginePage* self) {
	return new QUrl(self->requestedUrl());
}

QUrl* QWebEnginePage_iconUrl(const QWebEnginePage* self) {
	return new QUrl(self->iconUrl());
}

QIcon* QWebEnginePage_icon(const QWebEnginePage* self) {
	return new QIcon(self->icon());
}

double QWebEnginePage_zoomFactor(const QWebEnginePage* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

void QWebEnginePage_setZoomFactor(QWebEnginePage* self, double factor) {
	self->setZoomFactor(static_cast<qreal>(factor));
}

QPointF* QWebEnginePage_scrollPosition(const QWebEnginePage* self) {
	return new QPointF(self->scrollPosition());
}

QSizeF* QWebEnginePage_contentsSize(const QWebEnginePage* self) {
	return new QSizeF(self->contentsSize());
}

void QWebEnginePage_runJavaScript(QWebEnginePage* self, struct miqt_string scriptSource) {
	QString scriptSource_QString = QString::fromUtf8(scriptSource.data, scriptSource.len);
	self->runJavaScript(scriptSource_QString);
}

void QWebEnginePage_runJavaScript2(QWebEnginePage* self, struct miqt_string scriptSource, unsigned int worldId) {
	QString scriptSource_QString = QString::fromUtf8(scriptSource.data, scriptSource.len);
	self->runJavaScript(scriptSource_QString, static_cast<quint32>(worldId));
}

QWebEngineScriptCollection* QWebEnginePage_scripts(QWebEnginePage* self) {
	QWebEngineScriptCollection& _ret = self->scripts();
	// Cast returned reference into pointer
	return &_ret;
}

QWebEngineSettings* QWebEnginePage_settings(const QWebEnginePage* self) {
	return self->settings();
}

QWebChannel* QWebEnginePage_webChannel(const QWebEnginePage* self) {
	return self->webChannel();
}

void QWebEnginePage_setWebChannel(QWebEnginePage* self, QWebChannel* webChannel) {
	self->setWebChannel(webChannel);
}

void QWebEnginePage_setWebChannel2(QWebEnginePage* self, QWebChannel* param1, unsigned int worldId) {
	self->setWebChannel(param1, static_cast<uint>(worldId));
}

QColor* QWebEnginePage_backgroundColor(const QWebEnginePage* self) {
	return new QColor(self->backgroundColor());
}

void QWebEnginePage_setBackgroundColor(QWebEnginePage* self, QColor* color) {
	self->setBackgroundColor(*color);
}

void QWebEnginePage_save(const QWebEnginePage* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->save(filePath_QString);
}

bool QWebEnginePage_isAudioMuted(const QWebEnginePage* self) {
	return self->isAudioMuted();
}

void QWebEnginePage_setAudioMuted(QWebEnginePage* self, bool muted) {
	self->setAudioMuted(muted);
}

bool QWebEnginePage_recentlyAudible(const QWebEnginePage* self) {
	return self->recentlyAudible();
}

long long QWebEnginePage_renderProcessPid(const QWebEnginePage* self) {
	qint64 _ret = self->renderProcessPid();
	return static_cast<long long>(_ret);
}

void QWebEnginePage_printToPdf(QWebEnginePage* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->printToPdf(filePath_QString);
}

void QWebEnginePage_setInspectedPage(QWebEnginePage* self, QWebEnginePage* page) {
	self->setInspectedPage(page);
}

QWebEnginePage* QWebEnginePage_inspectedPage(const QWebEnginePage* self) {
	return self->inspectedPage();
}

void QWebEnginePage_setDevToolsPage(QWebEnginePage* self, QWebEnginePage* page) {
	self->setDevToolsPage(page);
}

QWebEnginePage* QWebEnginePage_devToolsPage(const QWebEnginePage* self) {
	return self->devToolsPage();
}

void QWebEnginePage_setUrlRequestInterceptor(QWebEnginePage* self, QWebEngineUrlRequestInterceptor* interceptor) {
	self->setUrlRequestInterceptor(interceptor);
}

QWebEngineContextMenuData* QWebEnginePage_contextMenuData(const QWebEnginePage* self) {
	const QWebEngineContextMenuData& _ret = self->contextMenuData();
	// Cast returned reference into pointer
	return const_cast<QWebEngineContextMenuData*>(&_ret);
}

int QWebEnginePage_lifecycleState(const QWebEnginePage* self) {
	QWebEnginePage::LifecycleState _ret = self->lifecycleState();
	return static_cast<int>(_ret);
}

void QWebEnginePage_setLifecycleState(QWebEnginePage* self, int state) {
	self->setLifecycleState(static_cast<QWebEnginePage::LifecycleState>(state));
}

int QWebEnginePage_recommendedState(const QWebEnginePage* self) {
	QWebEnginePage::LifecycleState _ret = self->recommendedState();
	return static_cast<int>(_ret);
}

bool QWebEnginePage_isVisible(const QWebEnginePage* self) {
	return self->isVisible();
}

void QWebEnginePage_setVisible(QWebEnginePage* self, bool visible) {
	self->setVisible(visible);
}

void QWebEnginePage_loadStarted(QWebEnginePage* self) {
	self->loadStarted();
}

void QWebEnginePage_connect_loadStarted(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)()>(&QWebEnginePage::loadStarted), self, [=]() {
		miqt_exec_callback_QWebEnginePage_loadStarted(slot);
	});
}

void QWebEnginePage_loadProgress(QWebEnginePage* self, int progress) {
	self->loadProgress(static_cast<int>(progress));
}

void QWebEnginePage_connect_loadProgress(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(int)>(&QWebEnginePage::loadProgress), self, [=](int progress) {
		int sigval1 = progress;
		miqt_exec_callback_QWebEnginePage_loadProgress(slot, sigval1);
	});
}

void QWebEnginePage_loadFinished(QWebEnginePage* self, bool ok) {
	self->loadFinished(ok);
}

void QWebEnginePage_connect_loadFinished(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(bool)>(&QWebEnginePage::loadFinished), self, [=](bool ok) {
		bool sigval1 = ok;
		miqt_exec_callback_QWebEnginePage_loadFinished(slot, sigval1);
	});
}

void QWebEnginePage_linkHovered(QWebEnginePage* self, struct miqt_string url) {
	QString url_QString = QString::fromUtf8(url.data, url.len);
	self->linkHovered(url_QString);
}

void QWebEnginePage_connect_linkHovered(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QString&)>(&QWebEnginePage::linkHovered), self, [=](const QString& url) {
		const QString url_ret = url;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray url_b = url_ret.toUtf8();
		struct miqt_string url_ms;
		url_ms.len = url_b.length();
		url_ms.data = static_cast<char*>(malloc(url_ms.len));
		memcpy(url_ms.data, url_b.data(), url_ms.len);
		struct miqt_string sigval1 = url_ms;
		miqt_exec_callback_QWebEnginePage_linkHovered(slot, sigval1);
	});
}

void QWebEnginePage_selectionChanged(QWebEnginePage* self) {
	self->selectionChanged();
}

void QWebEnginePage_connect_selectionChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)()>(&QWebEnginePage::selectionChanged), self, [=]() {
		miqt_exec_callback_QWebEnginePage_selectionChanged(slot);
	});
}

void QWebEnginePage_geometryChangeRequested(QWebEnginePage* self, QRect* geom) {
	self->geometryChangeRequested(*geom);
}

void QWebEnginePage_connect_geometryChangeRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QRect&)>(&QWebEnginePage::geometryChangeRequested), self, [=](const QRect& geom) {
		const QRect& geom_ret = geom;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geom_ret);
		miqt_exec_callback_QWebEnginePage_geometryChangeRequested(slot, sigval1);
	});
}

void QWebEnginePage_windowCloseRequested(QWebEnginePage* self) {
	self->windowCloseRequested();
}

void QWebEnginePage_connect_windowCloseRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)()>(&QWebEnginePage::windowCloseRequested), self, [=]() {
		miqt_exec_callback_QWebEnginePage_windowCloseRequested(slot);
	});
}

void QWebEnginePage_featurePermissionRequested(QWebEnginePage* self, QUrl* securityOrigin, int feature) {
	self->featurePermissionRequested(*securityOrigin, static_cast<QWebEnginePage::Feature>(feature));
}

void QWebEnginePage_connect_featurePermissionRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QUrl&, QWebEnginePage::Feature)>(&QWebEnginePage::featurePermissionRequested), self, [=](const QUrl& securityOrigin, QWebEnginePage::Feature feature) {
		const QUrl& securityOrigin_ret = securityOrigin;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&securityOrigin_ret);
		QWebEnginePage::Feature feature_ret = feature;
		int sigval2 = static_cast<int>(feature_ret);
		miqt_exec_callback_QWebEnginePage_featurePermissionRequested(slot, sigval1, sigval2);
	});
}

void QWebEnginePage_featurePermissionRequestCanceled(QWebEnginePage* self, QUrl* securityOrigin, int feature) {
	self->featurePermissionRequestCanceled(*securityOrigin, static_cast<QWebEnginePage::Feature>(feature));
}

void QWebEnginePage_connect_featurePermissionRequestCanceled(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QUrl&, QWebEnginePage::Feature)>(&QWebEnginePage::featurePermissionRequestCanceled), self, [=](const QUrl& securityOrigin, QWebEnginePage::Feature feature) {
		const QUrl& securityOrigin_ret = securityOrigin;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&securityOrigin_ret);
		QWebEnginePage::Feature feature_ret = feature;
		int sigval2 = static_cast<int>(feature_ret);
		miqt_exec_callback_QWebEnginePage_featurePermissionRequestCanceled(slot, sigval1, sigval2);
	});
}

void QWebEnginePage_fullScreenRequested(QWebEnginePage* self, QWebEngineFullScreenRequest* fullScreenRequest) {
	self->fullScreenRequested(*fullScreenRequest);
}

void QWebEnginePage_connect_fullScreenRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEngineFullScreenRequest)>(&QWebEnginePage::fullScreenRequested), self, [=](QWebEngineFullScreenRequest fullScreenRequest) {
		QWebEngineFullScreenRequest* sigval1 = new QWebEngineFullScreenRequest(fullScreenRequest);
		miqt_exec_callback_QWebEnginePage_fullScreenRequested(slot, sigval1);
	});
}

void QWebEnginePage_quotaRequested(QWebEnginePage* self, QWebEngineQuotaRequest* quotaRequest) {
	self->quotaRequested(*quotaRequest);
}

void QWebEnginePage_connect_quotaRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEngineQuotaRequest)>(&QWebEnginePage::quotaRequested), self, [=](QWebEngineQuotaRequest quotaRequest) {
		QWebEngineQuotaRequest* sigval1 = new QWebEngineQuotaRequest(quotaRequest);
		miqt_exec_callback_QWebEnginePage_quotaRequested(slot, sigval1);
	});
}

void QWebEnginePage_registerProtocolHandlerRequested(QWebEnginePage* self, QWebEngineRegisterProtocolHandlerRequest* request) {
	self->registerProtocolHandlerRequested(*request);
}

void QWebEnginePage_connect_registerProtocolHandlerRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEngineRegisterProtocolHandlerRequest)>(&QWebEnginePage::registerProtocolHandlerRequested), self, [=](QWebEngineRegisterProtocolHandlerRequest request) {
		QWebEngineRegisterProtocolHandlerRequest* sigval1 = new QWebEngineRegisterProtocolHandlerRequest(request);
		miqt_exec_callback_QWebEnginePage_registerProtocolHandlerRequested(slot, sigval1);
	});
}

void QWebEnginePage_selectClientCertificate(QWebEnginePage* self, QWebEngineClientCertificateSelection* clientCertSelection) {
	self->selectClientCertificate(*clientCertSelection);
}

void QWebEnginePage_connect_selectClientCertificate(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEngineClientCertificateSelection)>(&QWebEnginePage::selectClientCertificate), self, [=](QWebEngineClientCertificateSelection clientCertSelection) {
		QWebEngineClientCertificateSelection* sigval1 = new QWebEngineClientCertificateSelection(clientCertSelection);
		miqt_exec_callback_QWebEnginePage_selectClientCertificate(slot, sigval1);
	});
}

void QWebEnginePage_authenticationRequired(QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator) {
	self->authenticationRequired(*requestUrl, authenticator);
}

void QWebEnginePage_connect_authenticationRequired(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QUrl&, QAuthenticator*)>(&QWebEnginePage::authenticationRequired), self, [=](const QUrl& requestUrl, QAuthenticator* authenticator) {
		const QUrl& requestUrl_ret = requestUrl;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&requestUrl_ret);
		QAuthenticator* sigval2 = authenticator;
		miqt_exec_callback_QWebEnginePage_authenticationRequired(slot, sigval1, sigval2);
	});
}

void QWebEnginePage_proxyAuthenticationRequired(QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator, struct miqt_string proxyHost) {
	QString proxyHost_QString = QString::fromUtf8(proxyHost.data, proxyHost.len);
	self->proxyAuthenticationRequired(*requestUrl, authenticator, proxyHost_QString);
}

void QWebEnginePage_connect_proxyAuthenticationRequired(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QUrl&, QAuthenticator*, const QString&)>(&QWebEnginePage::proxyAuthenticationRequired), self, [=](const QUrl& requestUrl, QAuthenticator* authenticator, const QString& proxyHost) {
		const QUrl& requestUrl_ret = requestUrl;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&requestUrl_ret);
		QAuthenticator* sigval2 = authenticator;
		const QString proxyHost_ret = proxyHost;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray proxyHost_b = proxyHost_ret.toUtf8();
		struct miqt_string proxyHost_ms;
		proxyHost_ms.len = proxyHost_b.length();
		proxyHost_ms.data = static_cast<char*>(malloc(proxyHost_ms.len));
		memcpy(proxyHost_ms.data, proxyHost_b.data(), proxyHost_ms.len);
		struct miqt_string sigval3 = proxyHost_ms;
		miqt_exec_callback_QWebEnginePage_proxyAuthenticationRequired(slot, sigval1, sigval2, sigval3);
	});
}

void QWebEnginePage_renderProcessTerminated(QWebEnginePage* self, int terminationStatus, int exitCode) {
	self->renderProcessTerminated(static_cast<QWebEnginePage::RenderProcessTerminationStatus>(terminationStatus), static_cast<int>(exitCode));
}

void QWebEnginePage_connect_renderProcessTerminated(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEnginePage::RenderProcessTerminationStatus, int)>(&QWebEnginePage::renderProcessTerminated), self, [=](QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode) {
		QWebEnginePage::RenderProcessTerminationStatus terminationStatus_ret = terminationStatus;
		int sigval1 = static_cast<int>(terminationStatus_ret);
		int sigval2 = exitCode;
		miqt_exec_callback_QWebEnginePage_renderProcessTerminated(slot, sigval1, sigval2);
	});
}

void QWebEnginePage_titleChanged(QWebEnginePage* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->titleChanged(title_QString);
}

void QWebEnginePage_connect_titleChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QString&)>(&QWebEnginePage::titleChanged), self, [=](const QString& title) {
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string title_ms;
		title_ms.len = title_b.length();
		title_ms.data = static_cast<char*>(malloc(title_ms.len));
		memcpy(title_ms.data, title_b.data(), title_ms.len);
		struct miqt_string sigval1 = title_ms;
		miqt_exec_callback_QWebEnginePage_titleChanged(slot, sigval1);
	});
}

void QWebEnginePage_urlChanged(QWebEnginePage* self, QUrl* url) {
	self->urlChanged(*url);
}

void QWebEnginePage_connect_urlChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QUrl&)>(&QWebEnginePage::urlChanged), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QWebEnginePage_urlChanged(slot, sigval1);
	});
}

void QWebEnginePage_iconUrlChanged(QWebEnginePage* self, QUrl* url) {
	self->iconUrlChanged(*url);
}

void QWebEnginePage_connect_iconUrlChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QUrl&)>(&QWebEnginePage::iconUrlChanged), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QWebEnginePage_iconUrlChanged(slot, sigval1);
	});
}

void QWebEnginePage_iconChanged(QWebEnginePage* self, QIcon* icon) {
	self->iconChanged(*icon);
}

void QWebEnginePage_connect_iconChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QIcon&)>(&QWebEnginePage::iconChanged), self, [=](const QIcon& icon) {
		const QIcon& icon_ret = icon;
		// Cast returned reference into pointer
		QIcon* sigval1 = const_cast<QIcon*>(&icon_ret);
		miqt_exec_callback_QWebEnginePage_iconChanged(slot, sigval1);
	});
}

void QWebEnginePage_scrollPositionChanged(QWebEnginePage* self, QPointF* position) {
	self->scrollPositionChanged(*position);
}

void QWebEnginePage_connect_scrollPositionChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QPointF&)>(&QWebEnginePage::scrollPositionChanged), self, [=](const QPointF& position) {
		const QPointF& position_ret = position;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&position_ret);
		miqt_exec_callback_QWebEnginePage_scrollPositionChanged(slot, sigval1);
	});
}

void QWebEnginePage_contentsSizeChanged(QWebEnginePage* self, QSizeF* size) {
	self->contentsSizeChanged(*size);
}

void QWebEnginePage_connect_contentsSizeChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QSizeF&)>(&QWebEnginePage::contentsSizeChanged), self, [=](const QSizeF& size) {
		const QSizeF& size_ret = size;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);
		miqt_exec_callback_QWebEnginePage_contentsSizeChanged(slot, sigval1);
	});
}

void QWebEnginePage_audioMutedChanged(QWebEnginePage* self, bool muted) {
	self->audioMutedChanged(muted);
}

void QWebEnginePage_connect_audioMutedChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(bool)>(&QWebEnginePage::audioMutedChanged), self, [=](bool muted) {
		bool sigval1 = muted;
		miqt_exec_callback_QWebEnginePage_audioMutedChanged(slot, sigval1);
	});
}

void QWebEnginePage_recentlyAudibleChanged(QWebEnginePage* self, bool recentlyAudible) {
	self->recentlyAudibleChanged(recentlyAudible);
}

void QWebEnginePage_connect_recentlyAudibleChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(bool)>(&QWebEnginePage::recentlyAudibleChanged), self, [=](bool recentlyAudible) {
		bool sigval1 = recentlyAudible;
		miqt_exec_callback_QWebEnginePage_recentlyAudibleChanged(slot, sigval1);
	});
}

void QWebEnginePage_renderProcessPidChanged(QWebEnginePage* self, long long pid) {
	self->renderProcessPidChanged(static_cast<qint64>(pid));
}

void QWebEnginePage_connect_renderProcessPidChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(qint64)>(&QWebEnginePage::renderProcessPidChanged), self, [=](qint64 pid) {
		qint64 pid_ret = pid;
		long long sigval1 = static_cast<long long>(pid_ret);
		miqt_exec_callback_QWebEnginePage_renderProcessPidChanged(slot, sigval1);
	});
}

void QWebEnginePage_pdfPrintingFinished(QWebEnginePage* self, struct miqt_string filePath, bool success) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->pdfPrintingFinished(filePath_QString, success);
}

void QWebEnginePage_connect_pdfPrintingFinished(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QString&, bool)>(&QWebEnginePage::pdfPrintingFinished), self, [=](const QString& filePath, bool success) {
		const QString filePath_ret = filePath;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray filePath_b = filePath_ret.toUtf8();
		struct miqt_string filePath_ms;
		filePath_ms.len = filePath_b.length();
		filePath_ms.data = static_cast<char*>(malloc(filePath_ms.len));
		memcpy(filePath_ms.data, filePath_b.data(), filePath_ms.len);
		struct miqt_string sigval1 = filePath_ms;
		bool sigval2 = success;
		miqt_exec_callback_QWebEnginePage_pdfPrintingFinished(slot, sigval1, sigval2);
	});
}

void QWebEnginePage_printRequested(QWebEnginePage* self) {
	self->printRequested();
}

void QWebEnginePage_connect_printRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)()>(&QWebEnginePage::printRequested), self, [=]() {
		miqt_exec_callback_QWebEnginePage_printRequested(slot);
	});
}

void QWebEnginePage_visibleChanged(QWebEnginePage* self, bool visible) {
	self->visibleChanged(visible);
}

void QWebEnginePage_connect_visibleChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(bool)>(&QWebEnginePage::visibleChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QWebEnginePage_visibleChanged(slot, sigval1);
	});
}

void QWebEnginePage_lifecycleStateChanged(QWebEnginePage* self, int state) {
	self->lifecycleStateChanged(static_cast<QWebEnginePage::LifecycleState>(state));
}

void QWebEnginePage_connect_lifecycleStateChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEnginePage::LifecycleState)>(&QWebEnginePage::lifecycleStateChanged), self, [=](QWebEnginePage::LifecycleState state) {
		QWebEnginePage::LifecycleState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QWebEnginePage_lifecycleStateChanged(slot, sigval1);
	});
}

void QWebEnginePage_recommendedStateChanged(QWebEnginePage* self, int state) {
	self->recommendedStateChanged(static_cast<QWebEnginePage::LifecycleState>(state));
}

void QWebEnginePage_connect_recommendedStateChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEnginePage::LifecycleState)>(&QWebEnginePage::recommendedStateChanged), self, [=](QWebEnginePage::LifecycleState state) {
		QWebEnginePage::LifecycleState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QWebEnginePage_recommendedStateChanged(slot, sigval1);
	});
}

void QWebEnginePage_findTextFinished(QWebEnginePage* self, QWebEngineFindTextResult* result) {
	self->findTextFinished(*result);
}

void QWebEnginePage_connect_findTextFinished(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QWebEngineFindTextResult&)>(&QWebEnginePage::findTextFinished), self, [=](const QWebEngineFindTextResult& result) {
		const QWebEngineFindTextResult& result_ret = result;
		// Cast returned reference into pointer
		QWebEngineFindTextResult* sigval1 = const_cast<QWebEngineFindTextResult*>(&result_ret);
		miqt_exec_callback_QWebEnginePage_findTextFinished(slot, sigval1);
	});
}

struct miqt_string QWebEnginePage_tr2(const char* s, const char* c) {
	QString _ret = QWebEnginePage::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEnginePage_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEnginePage::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEnginePage_trUtf82(const char* s, const char* c) {
	QString _ret = QWebEnginePage::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEnginePage_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebEnginePage::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEnginePage_findText2(QWebEnginePage* self, struct miqt_string subString, int options) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	self->findText(subString_QString, static_cast<QWebEnginePage::FindFlags>(options));
}

void QWebEnginePage_download2(QWebEnginePage* self, QUrl* url, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	self->download(*url, filename_QString);
}

void QWebEnginePage_setHtml2(QWebEnginePage* self, struct miqt_string html, QUrl* baseUrl) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString, *baseUrl);
}

void QWebEnginePage_setContent2(QWebEnginePage* self, struct miqt_string data, struct miqt_string mimeType) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString);
}

void QWebEnginePage_setContent3(QWebEnginePage* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString, *baseUrl);
}

void QWebEnginePage_save2(const QWebEnginePage* self, struct miqt_string filePath, int format) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->save(filePath_QString, static_cast<QWebEngineDownloadItem::SavePageFormat>(format));
}

void QWebEnginePage_printToPdf2(QWebEnginePage* self, struct miqt_string filePath, QPageLayout* layout) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->printToPdf(filePath_QString, *layout);
}

bool QWebEnginePage_override_virtual_triggerAction(void* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__triggerAction = slot;
	return true;
}

void QWebEnginePage_virtualbase_triggerAction(void* self, int action, bool checked) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_triggerAction(action, checked);
}

bool QWebEnginePage_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QWebEnginePage_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_event(param1);
}

bool QWebEnginePage_override_virtual_createWindow(void* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createWindow = slot;
	return true;
}

QWebEnginePage* QWebEnginePage_virtualbase_createWindow(void* self, int type) {
	return ( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_createWindow(type);
}

bool QWebEnginePage_override_virtual_chooseFiles(void* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__chooseFiles = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QWebEnginePage_virtualbase_chooseFiles(void* self, int mode, struct miqt_array /* of struct miqt_string */  oldFiles, struct miqt_array /* of struct miqt_string */  acceptedMimeTypes) {
	return ( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_chooseFiles(mode, oldFiles, acceptedMimeTypes);
}

bool QWebEnginePage_override_virtual_javaScriptAlert(void* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__javaScriptAlert = slot;
	return true;
}

void QWebEnginePage_virtualbase_javaScriptAlert(void* self, QUrl* securityOrigin, struct miqt_string msg) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_javaScriptAlert(securityOrigin, msg);
}

bool QWebEnginePage_override_virtual_javaScriptConfirm(void* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__javaScriptConfirm = slot;
	return true;
}

bool QWebEnginePage_virtualbase_javaScriptConfirm(void* self, QUrl* securityOrigin, struct miqt_string msg) {
	return ( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_javaScriptConfirm(securityOrigin, msg);
}

bool QWebEnginePage_override_virtual_javaScriptConsoleMessage(void* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__javaScriptConsoleMessage = slot;
	return true;
}

void QWebEnginePage_virtualbase_javaScriptConsoleMessage(void* self, int level, struct miqt_string message, int lineNumber, struct miqt_string sourceID) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_javaScriptConsoleMessage(level, message, lineNumber, sourceID);
}

bool QWebEnginePage_override_virtual_certificateError(void* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__certificateError = slot;
	return true;
}

bool QWebEnginePage_virtualbase_certificateError(void* self, QWebEngineCertificateError* certificateError) {
	return ( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_certificateError(certificateError);
}

bool QWebEnginePage_override_virtual_acceptNavigationRequest(void* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__acceptNavigationRequest = slot;
	return true;
}

bool QWebEnginePage_virtualbase_acceptNavigationRequest(void* self, QUrl* url, int type, bool isMainFrame) {
	return ( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_acceptNavigationRequest(url, type, isMainFrame);
}

bool QWebEnginePage_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWebEnginePage_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QWebEnginePage_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QWebEnginePage_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_timerEvent(event);
}

bool QWebEnginePage_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QWebEnginePage_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_childEvent(event);
}

bool QWebEnginePage_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QWebEnginePage_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_customEvent(event);
}

bool QWebEnginePage_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QWebEnginePage_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_connectNotify(signal);
}

bool QWebEnginePage_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWebEnginePage_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QWebEnginePage_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QWebEnginePage_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QWebEnginePage_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QWebEnginePage_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWebEnginePage* self_cast = dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QWebEnginePage_delete(QWebEnginePage* self) {
	delete self;
}

