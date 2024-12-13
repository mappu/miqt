#include <QAction>
#include <QAuthenticator>
#include <QByteArray>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPageLayout>
#include <QPageRanges>
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
#include <QWebEngineFileSystemAccessRequest>
#include <QWebEngineFindTextResult>
#include <QWebEngineFullScreenRequest>
#include <QWebEngineHistory>
#include <QWebEngineHttpRequest>
#include <QWebEngineLoadingInfo>
#include <QWebEngineNavigationRequest>
#include <QWebEngineNewWindowRequest>
#include <QWebEnginePage>
#include <QWebEngineProfile>
#include <QWebEngineQuotaRequest>
#include <QWebEngineRegisterProtocolHandlerRequest>
#include <QWebEngineScriptCollection>
#include <QWebEngineSettings>
#include <QWebEngineUrlRequestInterceptor>
#include <qwebenginepage.h>
#include "gen_qwebenginepage.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQWebEnginePage : public virtual QWebEnginePage {
public:

	MiqtVirtualQWebEnginePage(): QWebEnginePage() {};
	MiqtVirtualQWebEnginePage(QWebEngineProfile* profile): QWebEnginePage(profile) {};
	MiqtVirtualQWebEnginePage(QObject* parent): QWebEnginePage(parent) {};
	MiqtVirtualQWebEnginePage(QWebEngineProfile* profile, QObject* parent): QWebEnginePage(profile, parent) {};

	virtual ~MiqtVirtualQWebEnginePage() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TriggerAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void triggerAction(QWebEnginePage::WebAction action, bool checked) override {
		if (handle__TriggerAction == 0) {
			QWebEnginePage::triggerAction(action, checked);
			return;
		}
		
		QWebEnginePage::WebAction action_ret = action;
		int sigval1 = static_cast<int>(action_ret);
		bool sigval2 = checked;

		miqt_exec_callback_QWebEnginePage_TriggerAction(this, handle__TriggerAction, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TriggerAction(int action, bool checked) {

		QWebEnginePage::triggerAction(static_cast<QWebEnginePage::WebAction>(action), checked);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QWebEnginePage::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QWebEnginePage_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QWebEnginePage::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual QWebEnginePage* createWindow(QWebEnginePage::WebWindowType typeVal) override {
		if (handle__CreateWindow == 0) {
			return QWebEnginePage::createWindow(typeVal);
		}
		
		QWebEnginePage::WebWindowType typeVal_ret = typeVal;
		int sigval1 = static_cast<int>(typeVal_ret);

		QWebEnginePage* callback_return_value = miqt_exec_callback_QWebEnginePage_CreateWindow(this, handle__CreateWindow, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWebEnginePage* virtualbase_CreateWindow(int typeVal) {

		return QWebEnginePage::createWindow(static_cast<QWebEnginePage::WebWindowType>(typeVal));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChooseFiles = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList chooseFiles(QWebEnginePage::FileSelectionMode mode, const QStringList& oldFiles, const QStringList& acceptedMimeTypes) override {
		if (handle__ChooseFiles == 0) {
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

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QWebEnginePage_ChooseFiles(this, handle__ChooseFiles, sigval1, sigval2, sigval3);
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
	struct miqt_array /* of struct miqt_string */  virtualbase_ChooseFiles(int mode, struct miqt_array /* of struct miqt_string */  oldFiles, struct miqt_array /* of struct miqt_string */  acceptedMimeTypes) {
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
	intptr_t handle__JavaScriptAlert = 0;

	// Subclass to allow providing a Go implementation
	virtual void javaScriptAlert(const QUrl& securityOrigin, const QString& msg) override {
		if (handle__JavaScriptAlert == 0) {
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

		miqt_exec_callback_QWebEnginePage_JavaScriptAlert(this, handle__JavaScriptAlert, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_JavaScriptAlert(QUrl* securityOrigin, struct miqt_string msg) {
		QString msg_QString = QString::fromUtf8(msg.data, msg.len);

		QWebEnginePage::javaScriptAlert(*securityOrigin, msg_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__JavaScriptConfirm = 0;

	// Subclass to allow providing a Go implementation
	virtual bool javaScriptConfirm(const QUrl& securityOrigin, const QString& msg) override {
		if (handle__JavaScriptConfirm == 0) {
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

		bool callback_return_value = miqt_exec_callback_QWebEnginePage_JavaScriptConfirm(this, handle__JavaScriptConfirm, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_JavaScriptConfirm(QUrl* securityOrigin, struct miqt_string msg) {
		QString msg_QString = QString::fromUtf8(msg.data, msg.len);

		return QWebEnginePage::javaScriptConfirm(*securityOrigin, msg_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__JavaScriptConsoleMessage = 0;

	// Subclass to allow providing a Go implementation
	virtual void javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel level, const QString& message, int lineNumber, const QString& sourceID) override {
		if (handle__JavaScriptConsoleMessage == 0) {
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

		miqt_exec_callback_QWebEnginePage_JavaScriptConsoleMessage(this, handle__JavaScriptConsoleMessage, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_JavaScriptConsoleMessage(int level, struct miqt_string message, int lineNumber, struct miqt_string sourceID) {
		QString message_QString = QString::fromUtf8(message.data, message.len);
		QString sourceID_QString = QString::fromUtf8(sourceID.data, sourceID.len);

		QWebEnginePage::javaScriptConsoleMessage(static_cast<QWebEnginePage::JavaScriptConsoleMessageLevel>(level), message_QString, static_cast<int>(lineNumber), sourceID_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AcceptNavigationRequest = 0;

	// Subclass to allow providing a Go implementation
	virtual bool acceptNavigationRequest(const QUrl& url, QWebEnginePage::NavigationType typeVal, bool isMainFrame) override {
		if (handle__AcceptNavigationRequest == 0) {
			return QWebEnginePage::acceptNavigationRequest(url, typeVal, isMainFrame);
		}
		
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		QWebEnginePage::NavigationType typeVal_ret = typeVal;
		int sigval2 = static_cast<int>(typeVal_ret);
		bool sigval3 = isMainFrame;

		bool callback_return_value = miqt_exec_callback_QWebEnginePage_AcceptNavigationRequest(this, handle__AcceptNavigationRequest, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AcceptNavigationRequest(QUrl* url, int typeVal, bool isMainFrame) {

		return QWebEnginePage::acceptNavigationRequest(*url, static_cast<QWebEnginePage::NavigationType>(typeVal), isMainFrame);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QWebEnginePage::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebEnginePage_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QWebEnginePage::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QWebEnginePage::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebEnginePage_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QWebEnginePage::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QWebEnginePage::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebEnginePage_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QWebEnginePage::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QWebEnginePage::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebEnginePage_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QWebEnginePage::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QWebEnginePage::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEnginePage_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QWebEnginePage::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QWebEnginePage::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEnginePage_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QWebEnginePage::disconnectNotify(*signal);

	}

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

QMetaObject* QWebEnginePage_MetaObject(const QWebEnginePage* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEnginePage_Metacast(QWebEnginePage* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEnginePage_Tr(const char* s) {
	QString _ret = QWebEnginePage::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebEngineHistory* QWebEnginePage_History(const QWebEnginePage* self) {
	return self->history();
}

bool QWebEnginePage_HasSelection(const QWebEnginePage* self) {
	return self->hasSelection();
}

struct miqt_string QWebEnginePage_SelectedText(const QWebEnginePage* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebEngineProfile* QWebEnginePage_Profile(const QWebEnginePage* self) {
	return self->profile();
}

QAction* QWebEnginePage_Action(const QWebEnginePage* self, int action) {
	return self->action(static_cast<QWebEnginePage::WebAction>(action));
}

void QWebEnginePage_TriggerAction(QWebEnginePage* self, int action, bool checked) {
	self->triggerAction(static_cast<QWebEnginePage::WebAction>(action), checked);
}

void QWebEnginePage_ReplaceMisspelledWord(QWebEnginePage* self, struct miqt_string replacement) {
	QString replacement_QString = QString::fromUtf8(replacement.data, replacement.len);
	self->replaceMisspelledWord(replacement_QString);
}

bool QWebEnginePage_Event(QWebEnginePage* self, QEvent* param1) {
	return self->event(param1);
}

void QWebEnginePage_SetFeaturePermission(QWebEnginePage* self, QUrl* securityOrigin, int feature, int policy) {
	self->setFeaturePermission(*securityOrigin, static_cast<QWebEnginePage::Feature>(feature), static_cast<QWebEnginePage::PermissionPolicy>(policy));
}

bool QWebEnginePage_IsLoading(const QWebEnginePage* self) {
	return self->isLoading();
}

void QWebEnginePage_Load(QWebEnginePage* self, QUrl* url) {
	self->load(*url);
}

void QWebEnginePage_LoadWithRequest(QWebEnginePage* self, QWebEngineHttpRequest* request) {
	self->load(*request);
}

void QWebEnginePage_Download(QWebEnginePage* self, QUrl* url) {
	self->download(*url);
}

void QWebEnginePage_SetHtml(QWebEnginePage* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

void QWebEnginePage_SetContent(QWebEnginePage* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->setContent(data_QByteArray);
}

struct miqt_string QWebEnginePage_Title(const QWebEnginePage* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEnginePage_SetUrl(QWebEnginePage* self, QUrl* url) {
	self->setUrl(*url);
}

QUrl* QWebEnginePage_Url(const QWebEnginePage* self) {
	return new QUrl(self->url());
}

QUrl* QWebEnginePage_RequestedUrl(const QWebEnginePage* self) {
	return new QUrl(self->requestedUrl());
}

QUrl* QWebEnginePage_IconUrl(const QWebEnginePage* self) {
	return new QUrl(self->iconUrl());
}

QIcon* QWebEnginePage_Icon(const QWebEnginePage* self) {
	return new QIcon(self->icon());
}

double QWebEnginePage_ZoomFactor(const QWebEnginePage* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

void QWebEnginePage_SetZoomFactor(QWebEnginePage* self, double factor) {
	self->setZoomFactor(static_cast<qreal>(factor));
}

QPointF* QWebEnginePage_ScrollPosition(const QWebEnginePage* self) {
	return new QPointF(self->scrollPosition());
}

QSizeF* QWebEnginePage_ContentsSize(const QWebEnginePage* self) {
	return new QSizeF(self->contentsSize());
}

QWebEngineScriptCollection* QWebEnginePage_Scripts(QWebEnginePage* self) {
	QWebEngineScriptCollection& _ret = self->scripts();
	// Cast returned reference into pointer
	return &_ret;
}

QWebEngineSettings* QWebEnginePage_Settings(const QWebEnginePage* self) {
	return self->settings();
}

QWebChannel* QWebEnginePage_WebChannel(const QWebEnginePage* self) {
	return self->webChannel();
}

void QWebEnginePage_SetWebChannel(QWebEnginePage* self, QWebChannel* param1) {
	self->setWebChannel(param1);
}

QColor* QWebEnginePage_BackgroundColor(const QWebEnginePage* self) {
	return new QColor(self->backgroundColor());
}

void QWebEnginePage_SetBackgroundColor(QWebEnginePage* self, QColor* color) {
	self->setBackgroundColor(*color);
}

void QWebEnginePage_Save(const QWebEnginePage* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->save(filePath_QString);
}

bool QWebEnginePage_IsAudioMuted(const QWebEnginePage* self) {
	return self->isAudioMuted();
}

void QWebEnginePage_SetAudioMuted(QWebEnginePage* self, bool muted) {
	self->setAudioMuted(muted);
}

bool QWebEnginePage_RecentlyAudible(const QWebEnginePage* self) {
	return self->recentlyAudible();
}

long long QWebEnginePage_RenderProcessPid(const QWebEnginePage* self) {
	qint64 _ret = self->renderProcessPid();
	return static_cast<long long>(_ret);
}

void QWebEnginePage_PrintToPdf(QWebEnginePage* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->printToPdf(filePath_QString);
}

void QWebEnginePage_SetInspectedPage(QWebEnginePage* self, QWebEnginePage* page) {
	self->setInspectedPage(page);
}

QWebEnginePage* QWebEnginePage_InspectedPage(const QWebEnginePage* self) {
	return self->inspectedPage();
}

void QWebEnginePage_SetDevToolsPage(QWebEnginePage* self, QWebEnginePage* page) {
	self->setDevToolsPage(page);
}

QWebEnginePage* QWebEnginePage_DevToolsPage(const QWebEnginePage* self) {
	return self->devToolsPage();
}

void QWebEnginePage_SetUrlRequestInterceptor(QWebEnginePage* self, QWebEngineUrlRequestInterceptor* interceptor) {
	self->setUrlRequestInterceptor(interceptor);
}

int QWebEnginePage_LifecycleState(const QWebEnginePage* self) {
	QWebEnginePage::LifecycleState _ret = self->lifecycleState();
	return static_cast<int>(_ret);
}

void QWebEnginePage_SetLifecycleState(QWebEnginePage* self, int state) {
	self->setLifecycleState(static_cast<QWebEnginePage::LifecycleState>(state));
}

int QWebEnginePage_RecommendedState(const QWebEnginePage* self) {
	QWebEnginePage::LifecycleState _ret = self->recommendedState();
	return static_cast<int>(_ret);
}

bool QWebEnginePage_IsVisible(const QWebEnginePage* self) {
	return self->isVisible();
}

void QWebEnginePage_SetVisible(QWebEnginePage* self, bool visible) {
	self->setVisible(visible);
}

void QWebEnginePage_AcceptAsNewWindow(QWebEnginePage* self, QWebEngineNewWindowRequest* request) {
	self->acceptAsNewWindow(*request);
}

void QWebEnginePage_LoadStarted(QWebEnginePage* self) {
	self->loadStarted();
}

void QWebEnginePage_connect_LoadStarted(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)()>(&QWebEnginePage::loadStarted), self, [=]() {
		miqt_exec_callback_QWebEnginePage_LoadStarted(slot);
	});
}

void QWebEnginePage_LoadProgress(QWebEnginePage* self, int progress) {
	self->loadProgress(static_cast<int>(progress));
}

void QWebEnginePage_connect_LoadProgress(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(int)>(&QWebEnginePage::loadProgress), self, [=](int progress) {
		int sigval1 = progress;
		miqt_exec_callback_QWebEnginePage_LoadProgress(slot, sigval1);
	});
}

void QWebEnginePage_LoadFinished(QWebEnginePage* self, bool ok) {
	self->loadFinished(ok);
}

void QWebEnginePage_connect_LoadFinished(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(bool)>(&QWebEnginePage::loadFinished), self, [=](bool ok) {
		bool sigval1 = ok;
		miqt_exec_callback_QWebEnginePage_LoadFinished(slot, sigval1);
	});
}

void QWebEnginePage_LoadingChanged(QWebEnginePage* self, QWebEngineLoadingInfo* loadingInfo) {
	self->loadingChanged(*loadingInfo);
}

void QWebEnginePage_connect_LoadingChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QWebEngineLoadingInfo&)>(&QWebEnginePage::loadingChanged), self, [=](const QWebEngineLoadingInfo& loadingInfo) {
		const QWebEngineLoadingInfo& loadingInfo_ret = loadingInfo;
		// Cast returned reference into pointer
		QWebEngineLoadingInfo* sigval1 = const_cast<QWebEngineLoadingInfo*>(&loadingInfo_ret);
		miqt_exec_callback_QWebEnginePage_LoadingChanged(slot, sigval1);
	});
}

void QWebEnginePage_LinkHovered(QWebEnginePage* self, struct miqt_string url) {
	QString url_QString = QString::fromUtf8(url.data, url.len);
	self->linkHovered(url_QString);
}

void QWebEnginePage_connect_LinkHovered(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QString&)>(&QWebEnginePage::linkHovered), self, [=](const QString& url) {
		const QString url_ret = url;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray url_b = url_ret.toUtf8();
		struct miqt_string url_ms;
		url_ms.len = url_b.length();
		url_ms.data = static_cast<char*>(malloc(url_ms.len));
		memcpy(url_ms.data, url_b.data(), url_ms.len);
		struct miqt_string sigval1 = url_ms;
		miqt_exec_callback_QWebEnginePage_LinkHovered(slot, sigval1);
	});
}

void QWebEnginePage_SelectionChanged(QWebEnginePage* self) {
	self->selectionChanged();
}

void QWebEnginePage_connect_SelectionChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)()>(&QWebEnginePage::selectionChanged), self, [=]() {
		miqt_exec_callback_QWebEnginePage_SelectionChanged(slot);
	});
}

void QWebEnginePage_GeometryChangeRequested(QWebEnginePage* self, QRect* geom) {
	self->geometryChangeRequested(*geom);
}

void QWebEnginePage_connect_GeometryChangeRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QRect&)>(&QWebEnginePage::geometryChangeRequested), self, [=](const QRect& geom) {
		const QRect& geom_ret = geom;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geom_ret);
		miqt_exec_callback_QWebEnginePage_GeometryChangeRequested(slot, sigval1);
	});
}

void QWebEnginePage_WindowCloseRequested(QWebEnginePage* self) {
	self->windowCloseRequested();
}

void QWebEnginePage_connect_WindowCloseRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)()>(&QWebEnginePage::windowCloseRequested), self, [=]() {
		miqt_exec_callback_QWebEnginePage_WindowCloseRequested(slot);
	});
}

void QWebEnginePage_FeaturePermissionRequested(QWebEnginePage* self, QUrl* securityOrigin, int feature) {
	self->featurePermissionRequested(*securityOrigin, static_cast<QWebEnginePage::Feature>(feature));
}

void QWebEnginePage_connect_FeaturePermissionRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QUrl&, QWebEnginePage::Feature)>(&QWebEnginePage::featurePermissionRequested), self, [=](const QUrl& securityOrigin, QWebEnginePage::Feature feature) {
		const QUrl& securityOrigin_ret = securityOrigin;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&securityOrigin_ret);
		QWebEnginePage::Feature feature_ret = feature;
		int sigval2 = static_cast<int>(feature_ret);
		miqt_exec_callback_QWebEnginePage_FeaturePermissionRequested(slot, sigval1, sigval2);
	});
}

void QWebEnginePage_FeaturePermissionRequestCanceled(QWebEnginePage* self, QUrl* securityOrigin, int feature) {
	self->featurePermissionRequestCanceled(*securityOrigin, static_cast<QWebEnginePage::Feature>(feature));
}

void QWebEnginePage_connect_FeaturePermissionRequestCanceled(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QUrl&, QWebEnginePage::Feature)>(&QWebEnginePage::featurePermissionRequestCanceled), self, [=](const QUrl& securityOrigin, QWebEnginePage::Feature feature) {
		const QUrl& securityOrigin_ret = securityOrigin;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&securityOrigin_ret);
		QWebEnginePage::Feature feature_ret = feature;
		int sigval2 = static_cast<int>(feature_ret);
		miqt_exec_callback_QWebEnginePage_FeaturePermissionRequestCanceled(slot, sigval1, sigval2);
	});
}

void QWebEnginePage_FullScreenRequested(QWebEnginePage* self, QWebEngineFullScreenRequest* fullScreenRequest) {
	self->fullScreenRequested(*fullScreenRequest);
}

void QWebEnginePage_connect_FullScreenRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEngineFullScreenRequest)>(&QWebEnginePage::fullScreenRequested), self, [=](QWebEngineFullScreenRequest fullScreenRequest) {
		QWebEngineFullScreenRequest* sigval1 = new QWebEngineFullScreenRequest(fullScreenRequest);
		miqt_exec_callback_QWebEnginePage_FullScreenRequested(slot, sigval1);
	});
}

void QWebEnginePage_QuotaRequested(QWebEnginePage* self, QWebEngineQuotaRequest* quotaRequest) {
	self->quotaRequested(*quotaRequest);
}

void QWebEnginePage_connect_QuotaRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEngineQuotaRequest)>(&QWebEnginePage::quotaRequested), self, [=](QWebEngineQuotaRequest quotaRequest) {
		QWebEngineQuotaRequest* sigval1 = new QWebEngineQuotaRequest(quotaRequest);
		miqt_exec_callback_QWebEnginePage_QuotaRequested(slot, sigval1);
	});
}

void QWebEnginePage_RegisterProtocolHandlerRequested(QWebEnginePage* self, QWebEngineRegisterProtocolHandlerRequest* request) {
	self->registerProtocolHandlerRequested(*request);
}

void QWebEnginePage_connect_RegisterProtocolHandlerRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEngineRegisterProtocolHandlerRequest)>(&QWebEnginePage::registerProtocolHandlerRequested), self, [=](QWebEngineRegisterProtocolHandlerRequest request) {
		QWebEngineRegisterProtocolHandlerRequest* sigval1 = new QWebEngineRegisterProtocolHandlerRequest(request);
		miqt_exec_callback_QWebEnginePage_RegisterProtocolHandlerRequested(slot, sigval1);
	});
}

void QWebEnginePage_FileSystemAccessRequested(QWebEnginePage* self, QWebEngineFileSystemAccessRequest* request) {
	self->fileSystemAccessRequested(*request);
}

void QWebEnginePage_connect_FileSystemAccessRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEngineFileSystemAccessRequest)>(&QWebEnginePage::fileSystemAccessRequested), self, [=](QWebEngineFileSystemAccessRequest request) {
		QWebEngineFileSystemAccessRequest* sigval1 = new QWebEngineFileSystemAccessRequest(request);
		miqt_exec_callback_QWebEnginePage_FileSystemAccessRequested(slot, sigval1);
	});
}

void QWebEnginePage_SelectClientCertificate(QWebEnginePage* self, QWebEngineClientCertificateSelection* clientCertSelection) {
	self->selectClientCertificate(*clientCertSelection);
}

void QWebEnginePage_connect_SelectClientCertificate(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEngineClientCertificateSelection)>(&QWebEnginePage::selectClientCertificate), self, [=](QWebEngineClientCertificateSelection clientCertSelection) {
		QWebEngineClientCertificateSelection* sigval1 = new QWebEngineClientCertificateSelection(clientCertSelection);
		miqt_exec_callback_QWebEnginePage_SelectClientCertificate(slot, sigval1);
	});
}

void QWebEnginePage_AuthenticationRequired(QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator) {
	self->authenticationRequired(*requestUrl, authenticator);
}

void QWebEnginePage_connect_AuthenticationRequired(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QUrl&, QAuthenticator*)>(&QWebEnginePage::authenticationRequired), self, [=](const QUrl& requestUrl, QAuthenticator* authenticator) {
		const QUrl& requestUrl_ret = requestUrl;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&requestUrl_ret);
		QAuthenticator* sigval2 = authenticator;
		miqt_exec_callback_QWebEnginePage_AuthenticationRequired(slot, sigval1, sigval2);
	});
}

void QWebEnginePage_ProxyAuthenticationRequired(QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator, struct miqt_string proxyHost) {
	QString proxyHost_QString = QString::fromUtf8(proxyHost.data, proxyHost.len);
	self->proxyAuthenticationRequired(*requestUrl, authenticator, proxyHost_QString);
}

void QWebEnginePage_connect_ProxyAuthenticationRequired(QWebEnginePage* self, intptr_t slot) {
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
		miqt_exec_callback_QWebEnginePage_ProxyAuthenticationRequired(slot, sigval1, sigval2, sigval3);
	});
}

void QWebEnginePage_RenderProcessTerminated(QWebEnginePage* self, int terminationStatus, int exitCode) {
	self->renderProcessTerminated(static_cast<QWebEnginePage::RenderProcessTerminationStatus>(terminationStatus), static_cast<int>(exitCode));
}

void QWebEnginePage_connect_RenderProcessTerminated(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEnginePage::RenderProcessTerminationStatus, int)>(&QWebEnginePage::renderProcessTerminated), self, [=](QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode) {
		QWebEnginePage::RenderProcessTerminationStatus terminationStatus_ret = terminationStatus;
		int sigval1 = static_cast<int>(terminationStatus_ret);
		int sigval2 = exitCode;
		miqt_exec_callback_QWebEnginePage_RenderProcessTerminated(slot, sigval1, sigval2);
	});
}

void QWebEnginePage_CertificateError(QWebEnginePage* self, QWebEngineCertificateError* certificateError) {
	self->certificateError(*certificateError);
}

void QWebEnginePage_connect_CertificateError(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QWebEngineCertificateError&)>(&QWebEnginePage::certificateError), self, [=](const QWebEngineCertificateError& certificateError) {
		const QWebEngineCertificateError& certificateError_ret = certificateError;
		// Cast returned reference into pointer
		QWebEngineCertificateError* sigval1 = const_cast<QWebEngineCertificateError*>(&certificateError_ret);
		miqt_exec_callback_QWebEnginePage_CertificateError(slot, sigval1);
	});
}

void QWebEnginePage_NavigationRequested(QWebEnginePage* self, QWebEngineNavigationRequest* request) {
	self->navigationRequested(*request);
}

void QWebEnginePage_connect_NavigationRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEngineNavigationRequest&)>(&QWebEnginePage::navigationRequested), self, [=](QWebEngineNavigationRequest& request) {
		QWebEngineNavigationRequest& request_ret = request;
		// Cast returned reference into pointer
		QWebEngineNavigationRequest* sigval1 = &request_ret;
		miqt_exec_callback_QWebEnginePage_NavigationRequested(slot, sigval1);
	});
}

void QWebEnginePage_NewWindowRequested(QWebEnginePage* self, QWebEngineNewWindowRequest* request) {
	self->newWindowRequested(*request);
}

void QWebEnginePage_connect_NewWindowRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEngineNewWindowRequest&)>(&QWebEnginePage::newWindowRequested), self, [=](QWebEngineNewWindowRequest& request) {
		QWebEngineNewWindowRequest& request_ret = request;
		// Cast returned reference into pointer
		QWebEngineNewWindowRequest* sigval1 = &request_ret;
		miqt_exec_callback_QWebEnginePage_NewWindowRequested(slot, sigval1);
	});
}

void QWebEnginePage_TitleChanged(QWebEnginePage* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->titleChanged(title_QString);
}

void QWebEnginePage_connect_TitleChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QString&)>(&QWebEnginePage::titleChanged), self, [=](const QString& title) {
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string title_ms;
		title_ms.len = title_b.length();
		title_ms.data = static_cast<char*>(malloc(title_ms.len));
		memcpy(title_ms.data, title_b.data(), title_ms.len);
		struct miqt_string sigval1 = title_ms;
		miqt_exec_callback_QWebEnginePage_TitleChanged(slot, sigval1);
	});
}

void QWebEnginePage_UrlChanged(QWebEnginePage* self, QUrl* url) {
	self->urlChanged(*url);
}

void QWebEnginePage_connect_UrlChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QUrl&)>(&QWebEnginePage::urlChanged), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QWebEnginePage_UrlChanged(slot, sigval1);
	});
}

void QWebEnginePage_IconUrlChanged(QWebEnginePage* self, QUrl* url) {
	self->iconUrlChanged(*url);
}

void QWebEnginePage_connect_IconUrlChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QUrl&)>(&QWebEnginePage::iconUrlChanged), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QWebEnginePage_IconUrlChanged(slot, sigval1);
	});
}

void QWebEnginePage_IconChanged(QWebEnginePage* self, QIcon* icon) {
	self->iconChanged(*icon);
}

void QWebEnginePage_connect_IconChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QIcon&)>(&QWebEnginePage::iconChanged), self, [=](const QIcon& icon) {
		const QIcon& icon_ret = icon;
		// Cast returned reference into pointer
		QIcon* sigval1 = const_cast<QIcon*>(&icon_ret);
		miqt_exec_callback_QWebEnginePage_IconChanged(slot, sigval1);
	});
}

void QWebEnginePage_ScrollPositionChanged(QWebEnginePage* self, QPointF* position) {
	self->scrollPositionChanged(*position);
}

void QWebEnginePage_connect_ScrollPositionChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QPointF&)>(&QWebEnginePage::scrollPositionChanged), self, [=](const QPointF& position) {
		const QPointF& position_ret = position;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&position_ret);
		miqt_exec_callback_QWebEnginePage_ScrollPositionChanged(slot, sigval1);
	});
}

void QWebEnginePage_ContentsSizeChanged(QWebEnginePage* self, QSizeF* size) {
	self->contentsSizeChanged(*size);
}

void QWebEnginePage_connect_ContentsSizeChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QSizeF&)>(&QWebEnginePage::contentsSizeChanged), self, [=](const QSizeF& size) {
		const QSizeF& size_ret = size;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);
		miqt_exec_callback_QWebEnginePage_ContentsSizeChanged(slot, sigval1);
	});
}

void QWebEnginePage_AudioMutedChanged(QWebEnginePage* self, bool muted) {
	self->audioMutedChanged(muted);
}

void QWebEnginePage_connect_AudioMutedChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(bool)>(&QWebEnginePage::audioMutedChanged), self, [=](bool muted) {
		bool sigval1 = muted;
		miqt_exec_callback_QWebEnginePage_AudioMutedChanged(slot, sigval1);
	});
}

void QWebEnginePage_RecentlyAudibleChanged(QWebEnginePage* self, bool recentlyAudible) {
	self->recentlyAudibleChanged(recentlyAudible);
}

void QWebEnginePage_connect_RecentlyAudibleChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(bool)>(&QWebEnginePage::recentlyAudibleChanged), self, [=](bool recentlyAudible) {
		bool sigval1 = recentlyAudible;
		miqt_exec_callback_QWebEnginePage_RecentlyAudibleChanged(slot, sigval1);
	});
}

void QWebEnginePage_RenderProcessPidChanged(QWebEnginePage* self, long long pid) {
	self->renderProcessPidChanged(static_cast<qint64>(pid));
}

void QWebEnginePage_connect_RenderProcessPidChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(qint64)>(&QWebEnginePage::renderProcessPidChanged), self, [=](qint64 pid) {
		qint64 pid_ret = pid;
		long long sigval1 = static_cast<long long>(pid_ret);
		miqt_exec_callback_QWebEnginePage_RenderProcessPidChanged(slot, sigval1);
	});
}

void QWebEnginePage_PdfPrintingFinished(QWebEnginePage* self, struct miqt_string filePath, bool success) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->pdfPrintingFinished(filePath_QString, success);
}

void QWebEnginePage_connect_PdfPrintingFinished(QWebEnginePage* self, intptr_t slot) {
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
		miqt_exec_callback_QWebEnginePage_PdfPrintingFinished(slot, sigval1, sigval2);
	});
}

void QWebEnginePage_PrintRequested(QWebEnginePage* self) {
	self->printRequested();
}

void QWebEnginePage_connect_PrintRequested(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)()>(&QWebEnginePage::printRequested), self, [=]() {
		miqt_exec_callback_QWebEnginePage_PrintRequested(slot);
	});
}

void QWebEnginePage_VisibleChanged(QWebEnginePage* self, bool visible) {
	self->visibleChanged(visible);
}

void QWebEnginePage_connect_VisibleChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(bool)>(&QWebEnginePage::visibleChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QWebEnginePage_VisibleChanged(slot, sigval1);
	});
}

void QWebEnginePage_LifecycleStateChanged(QWebEnginePage* self, int state) {
	self->lifecycleStateChanged(static_cast<QWebEnginePage::LifecycleState>(state));
}

void QWebEnginePage_connect_LifecycleStateChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEnginePage::LifecycleState)>(&QWebEnginePage::lifecycleStateChanged), self, [=](QWebEnginePage::LifecycleState state) {
		QWebEnginePage::LifecycleState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QWebEnginePage_LifecycleStateChanged(slot, sigval1);
	});
}

void QWebEnginePage_RecommendedStateChanged(QWebEnginePage* self, int state) {
	self->recommendedStateChanged(static_cast<QWebEnginePage::LifecycleState>(state));
}

void QWebEnginePage_connect_RecommendedStateChanged(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(QWebEnginePage::LifecycleState)>(&QWebEnginePage::recommendedStateChanged), self, [=](QWebEnginePage::LifecycleState state) {
		QWebEnginePage::LifecycleState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QWebEnginePage_RecommendedStateChanged(slot, sigval1);
	});
}

void QWebEnginePage_FindTextFinished(QWebEnginePage* self, QWebEngineFindTextResult* result) {
	self->findTextFinished(*result);
}

void QWebEnginePage_connect_FindTextFinished(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)(const QWebEngineFindTextResult&)>(&QWebEnginePage::findTextFinished), self, [=](const QWebEngineFindTextResult& result) {
		const QWebEngineFindTextResult& result_ret = result;
		// Cast returned reference into pointer
		QWebEngineFindTextResult* sigval1 = const_cast<QWebEngineFindTextResult*>(&result_ret);
		miqt_exec_callback_QWebEnginePage_FindTextFinished(slot, sigval1);
	});
}

void QWebEnginePage_QAboutToDelete(QWebEnginePage* self) {
	self->_q_aboutToDelete();
}

void QWebEnginePage_connect_QAboutToDelete(QWebEnginePage* self, intptr_t slot) {
	MiqtVirtualQWebEnginePage::connect(self, static_cast<void (QWebEnginePage::*)()>(&QWebEnginePage::_q_aboutToDelete), self, [=]() {
		miqt_exec_callback_QWebEnginePage_QAboutToDelete(slot);
	});
}

struct miqt_string QWebEnginePage_Tr2(const char* s, const char* c) {
	QString _ret = QWebEnginePage::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEnginePage_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEnginePage::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEnginePage_Download2(QWebEnginePage* self, QUrl* url, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	self->download(*url, filename_QString);
}

void QWebEnginePage_SetHtml2(QWebEnginePage* self, struct miqt_string html, QUrl* baseUrl) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString, *baseUrl);
}

void QWebEnginePage_SetContent2(QWebEnginePage* self, struct miqt_string data, struct miqt_string mimeType) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString);
}

void QWebEnginePage_SetContent3(QWebEnginePage* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString, *baseUrl);
}

void QWebEnginePage_SetWebChannel2(QWebEnginePage* self, QWebChannel* param1, unsigned int worldId) {
	self->setWebChannel(param1, static_cast<quint32>(worldId));
}

void QWebEnginePage_Save2(const QWebEnginePage* self, struct miqt_string filePath, int format) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->save(filePath_QString, static_cast<QWebEngineDownloadRequest::SavePageFormat>(format));
}

void QWebEnginePage_PrintToPdf2(QWebEnginePage* self, struct miqt_string filePath, QPageLayout* layout) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->printToPdf(filePath_QString, *layout);
}

void QWebEnginePage_PrintToPdf3(QWebEnginePage* self, struct miqt_string filePath, QPageLayout* layout, QPageRanges* ranges) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->printToPdf(filePath_QString, *layout, *ranges);
}

void QWebEnginePage_override_virtual_TriggerAction(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) )->handle__TriggerAction = slot;
}

void QWebEnginePage_virtualbase_TriggerAction(void* self, int action, bool checked) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_TriggerAction(action, checked);
}

void QWebEnginePage_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) )->handle__Event = slot;
}

bool QWebEnginePage_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_Event(param1);
}

void QWebEnginePage_override_virtual_CreateWindow(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) )->handle__CreateWindow = slot;
}

QWebEnginePage* QWebEnginePage_virtualbase_CreateWindow(void* self, int typeVal) {
	return ( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_CreateWindow(typeVal);
}

void QWebEnginePage_override_virtual_ChooseFiles(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) )->handle__ChooseFiles = slot;
}

struct miqt_array /* of struct miqt_string */  QWebEnginePage_virtualbase_ChooseFiles(void* self, int mode, struct miqt_array /* of struct miqt_string */  oldFiles, struct miqt_array /* of struct miqt_string */  acceptedMimeTypes) {
	return ( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_ChooseFiles(mode, oldFiles, acceptedMimeTypes);
}

void QWebEnginePage_override_virtual_JavaScriptAlert(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) )->handle__JavaScriptAlert = slot;
}

void QWebEnginePage_virtualbase_JavaScriptAlert(void* self, QUrl* securityOrigin, struct miqt_string msg) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_JavaScriptAlert(securityOrigin, msg);
}

void QWebEnginePage_override_virtual_JavaScriptConfirm(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) )->handle__JavaScriptConfirm = slot;
}

bool QWebEnginePage_virtualbase_JavaScriptConfirm(void* self, QUrl* securityOrigin, struct miqt_string msg) {
	return ( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_JavaScriptConfirm(securityOrigin, msg);
}

void QWebEnginePage_override_virtual_JavaScriptConsoleMessage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) )->handle__JavaScriptConsoleMessage = slot;
}

void QWebEnginePage_virtualbase_JavaScriptConsoleMessage(void* self, int level, struct miqt_string message, int lineNumber, struct miqt_string sourceID) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_JavaScriptConsoleMessage(level, message, lineNumber, sourceID);
}

void QWebEnginePage_override_virtual_AcceptNavigationRequest(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) )->handle__AcceptNavigationRequest = slot;
}

bool QWebEnginePage_virtualbase_AcceptNavigationRequest(void* self, QUrl* url, int typeVal, bool isMainFrame) {
	return ( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_AcceptNavigationRequest(url, typeVal, isMainFrame);
}

void QWebEnginePage_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) )->handle__EventFilter = slot;
}

bool QWebEnginePage_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_EventFilter(watched, event);
}

void QWebEnginePage_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) )->handle__TimerEvent = slot;
}

void QWebEnginePage_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_TimerEvent(event);
}

void QWebEnginePage_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) )->handle__ChildEvent = slot;
}

void QWebEnginePage_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_ChildEvent(event);
}

void QWebEnginePage_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) )->handle__CustomEvent = slot;
}

void QWebEnginePage_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_CustomEvent(event);
}

void QWebEnginePage_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) )->handle__ConnectNotify = slot;
}

void QWebEnginePage_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_ConnectNotify(signal);
}

void QWebEnginePage_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEnginePage*>( (QWebEnginePage*)(self) )->handle__DisconnectNotify = slot;
}

void QWebEnginePage_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEnginePage*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QWebEnginePage_Delete(QWebEnginePage* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQWebEnginePage*>( self );
	} else {
		delete self;
	}
}

