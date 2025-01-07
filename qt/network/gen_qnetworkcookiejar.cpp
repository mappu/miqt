#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkCookie>
#include <QNetworkCookieJar>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <qnetworkcookiejar.h>
#include "gen_qnetworkcookiejar.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_array /* of QNetworkCookie* */  miqt_exec_callback_QNetworkCookieJar_CookiesForUrl(void*, intptr_t, QUrl*);
bool miqt_exec_callback_QNetworkCookieJar_SetCookiesFromUrl(void*, intptr_t, struct miqt_array /* of QNetworkCookie* */ , QUrl*);
bool miqt_exec_callback_QNetworkCookieJar_InsertCookie(void*, intptr_t, QNetworkCookie*);
bool miqt_exec_callback_QNetworkCookieJar_UpdateCookie(void*, intptr_t, QNetworkCookie*);
bool miqt_exec_callback_QNetworkCookieJar_DeleteCookie(void*, intptr_t, QNetworkCookie*);
bool miqt_exec_callback_QNetworkCookieJar_ValidateCookie(void*, intptr_t, QNetworkCookie*, QUrl*);
bool miqt_exec_callback_QNetworkCookieJar_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QNetworkCookieJar_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QNetworkCookieJar_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QNetworkCookieJar_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QNetworkCookieJar_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QNetworkCookieJar_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QNetworkCookieJar_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQNetworkCookieJar : public virtual QNetworkCookieJar {
public:

	MiqtVirtualQNetworkCookieJar(): QNetworkCookieJar() {};
	MiqtVirtualQNetworkCookieJar(QObject* parent): QNetworkCookieJar(parent) {};

	virtual ~MiqtVirtualQNetworkCookieJar() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CookiesForUrl = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QNetworkCookie> cookiesForUrl(const QUrl& url) const override {
		if (handle__CookiesForUrl == 0) {
			return QNetworkCookieJar::cookiesForUrl(url);
		}
		
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);

		struct miqt_array /* of QNetworkCookie* */  callback_return_value = miqt_exec_callback_QNetworkCookieJar_CookiesForUrl(const_cast<MiqtVirtualQNetworkCookieJar*>(this), handle__CookiesForUrl, sigval1);
		QList<QNetworkCookie> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QNetworkCookie** callback_return_value_arr = static_cast<QNetworkCookie**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of QNetworkCookie* */  virtualbase_CookiesForUrl(QUrl* url) const {

		QList<QNetworkCookie> _ret = QNetworkCookieJar::cookiesForUrl(*url);
		// Convert QList<> from C++ memory to manually-managed C memory
		QNetworkCookie** _arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * _ret.length()));
		for (size_t i = 0, e = _ret.length(); i < e; ++i) {
			_arr[i] = new QNetworkCookie(_ret[i]);
		}
		struct miqt_array _out;
		_out.len = _ret.length();
		_out.data = static_cast<void*>(_arr);
		return _out;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetCookiesFromUrl = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setCookiesFromUrl(const QList<QNetworkCookie>& cookieList, const QUrl& url) override {
		if (handle__SetCookiesFromUrl == 0) {
			return QNetworkCookieJar::setCookiesFromUrl(cookieList, url);
		}
		
		const QList<QNetworkCookie>& cookieList_ret = cookieList;
		// Convert QList<> from C++ memory to manually-managed C memory
		QNetworkCookie** cookieList_arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * cookieList_ret.length()));
		for (size_t i = 0, e = cookieList_ret.length(); i < e; ++i) {
			cookieList_arr[i] = new QNetworkCookie(cookieList_ret[i]);
		}
		struct miqt_array cookieList_out;
		cookieList_out.len = cookieList_ret.length();
		cookieList_out.data = static_cast<void*>(cookieList_arr);
		struct miqt_array /* of QNetworkCookie* */  sigval1 = cookieList_out;
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval2 = const_cast<QUrl*>(&url_ret);

		bool callback_return_value = miqt_exec_callback_QNetworkCookieJar_SetCookiesFromUrl(this, handle__SetCookiesFromUrl, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetCookiesFromUrl(struct miqt_array /* of QNetworkCookie* */  cookieList, QUrl* url) {
		QList<QNetworkCookie> cookieList_QList;
		cookieList_QList.reserve(cookieList.len);
		QNetworkCookie** cookieList_arr = static_cast<QNetworkCookie**>(cookieList.data);
		for(size_t i = 0; i < cookieList.len; ++i) {
			cookieList_QList.push_back(*(cookieList_arr[i]));
		}

		return QNetworkCookieJar::setCookiesFromUrl(cookieList_QList, *url);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertCookie = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertCookie(const QNetworkCookie& cookie) override {
		if (handle__InsertCookie == 0) {
			return QNetworkCookieJar::insertCookie(cookie);
		}
		
		const QNetworkCookie& cookie_ret = cookie;
		// Cast returned reference into pointer
		QNetworkCookie* sigval1 = const_cast<QNetworkCookie*>(&cookie_ret);

		bool callback_return_value = miqt_exec_callback_QNetworkCookieJar_InsertCookie(this, handle__InsertCookie, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertCookie(QNetworkCookie* cookie) {

		return QNetworkCookieJar::insertCookie(*cookie);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateCookie = 0;

	// Subclass to allow providing a Go implementation
	virtual bool updateCookie(const QNetworkCookie& cookie) override {
		if (handle__UpdateCookie == 0) {
			return QNetworkCookieJar::updateCookie(cookie);
		}
		
		const QNetworkCookie& cookie_ret = cookie;
		// Cast returned reference into pointer
		QNetworkCookie* sigval1 = const_cast<QNetworkCookie*>(&cookie_ret);

		bool callback_return_value = miqt_exec_callback_QNetworkCookieJar_UpdateCookie(this, handle__UpdateCookie, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_UpdateCookie(QNetworkCookie* cookie) {

		return QNetworkCookieJar::updateCookie(*cookie);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DeleteCookie = 0;

	// Subclass to allow providing a Go implementation
	virtual bool deleteCookie(const QNetworkCookie& cookie) override {
		if (handle__DeleteCookie == 0) {
			return QNetworkCookieJar::deleteCookie(cookie);
		}
		
		const QNetworkCookie& cookie_ret = cookie;
		// Cast returned reference into pointer
		QNetworkCookie* sigval1 = const_cast<QNetworkCookie*>(&cookie_ret);

		bool callback_return_value = miqt_exec_callback_QNetworkCookieJar_DeleteCookie(this, handle__DeleteCookie, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DeleteCookie(QNetworkCookie* cookie) {

		return QNetworkCookieJar::deleteCookie(*cookie);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ValidateCookie = 0;

	// Subclass to allow providing a Go implementation
	virtual bool validateCookie(const QNetworkCookie& cookie, const QUrl& url) const override {
		if (handle__ValidateCookie == 0) {
			return QNetworkCookieJar::validateCookie(cookie, url);
		}
		
		const QNetworkCookie& cookie_ret = cookie;
		// Cast returned reference into pointer
		QNetworkCookie* sigval1 = const_cast<QNetworkCookie*>(&cookie_ret);
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval2 = const_cast<QUrl*>(&url_ret);

		bool callback_return_value = miqt_exec_callback_QNetworkCookieJar_ValidateCookie(const_cast<MiqtVirtualQNetworkCookieJar*>(this), handle__ValidateCookie, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ValidateCookie(QNetworkCookie* cookie, QUrl* url) const {

		return QNetworkCookieJar::validateCookie(*cookie, *url);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QNetworkCookieJar::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QNetworkCookieJar_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QNetworkCookieJar::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QNetworkCookieJar::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QNetworkCookieJar_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QNetworkCookieJar::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QNetworkCookieJar::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QNetworkCookieJar_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QNetworkCookieJar::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QNetworkCookieJar::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QNetworkCookieJar_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QNetworkCookieJar::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QNetworkCookieJar::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QNetworkCookieJar_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QNetworkCookieJar::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QNetworkCookieJar::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QNetworkCookieJar_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QNetworkCookieJar::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QNetworkCookieJar::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QNetworkCookieJar_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QNetworkCookieJar::disconnectNotify(*signal);

	}

};

QNetworkCookieJar* QNetworkCookieJar_new() {
	return new MiqtVirtualQNetworkCookieJar();
}

QNetworkCookieJar* QNetworkCookieJar_new2(QObject* parent) {
	return new MiqtVirtualQNetworkCookieJar(parent);
}

void QNetworkCookieJar_virtbase(QNetworkCookieJar* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QNetworkCookieJar_MetaObject(const QNetworkCookieJar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNetworkCookieJar_Metacast(QNetworkCookieJar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNetworkCookieJar_Tr(const char* s) {
	QString _ret = QNetworkCookieJar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkCookieJar_TrUtf8(const char* s) {
	QString _ret = QNetworkCookieJar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QNetworkCookie* */  QNetworkCookieJar_CookiesForUrl(const QNetworkCookieJar* self, QUrl* url) {
	QList<QNetworkCookie> _ret = self->cookiesForUrl(*url);
	// Convert QList<> from C++ memory to manually-managed C memory
	QNetworkCookie** _arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QNetworkCookie(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QNetworkCookieJar_SetCookiesFromUrl(QNetworkCookieJar* self, struct miqt_array /* of QNetworkCookie* */  cookieList, QUrl* url) {
	QList<QNetworkCookie> cookieList_QList;
	cookieList_QList.reserve(cookieList.len);
	QNetworkCookie** cookieList_arr = static_cast<QNetworkCookie**>(cookieList.data);
	for(size_t i = 0; i < cookieList.len; ++i) {
		cookieList_QList.push_back(*(cookieList_arr[i]));
	}
	return self->setCookiesFromUrl(cookieList_QList, *url);
}

bool QNetworkCookieJar_InsertCookie(QNetworkCookieJar* self, QNetworkCookie* cookie) {
	return self->insertCookie(*cookie);
}

bool QNetworkCookieJar_UpdateCookie(QNetworkCookieJar* self, QNetworkCookie* cookie) {
	return self->updateCookie(*cookie);
}

bool QNetworkCookieJar_DeleteCookie(QNetworkCookieJar* self, QNetworkCookie* cookie) {
	return self->deleteCookie(*cookie);
}

struct miqt_string QNetworkCookieJar_Tr2(const char* s, const char* c) {
	QString _ret = QNetworkCookieJar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkCookieJar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkCookieJar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkCookieJar_TrUtf82(const char* s, const char* c) {
	QString _ret = QNetworkCookieJar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkCookieJar_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QNetworkCookieJar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkCookieJar_override_virtual_CookiesForUrl(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) )->handle__CookiesForUrl = slot;
}

struct miqt_array /* of QNetworkCookie* */  QNetworkCookieJar_virtualbase_CookiesForUrl(const void* self, QUrl* url) {
	return ( (const MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_CookiesForUrl(url);
}

void QNetworkCookieJar_override_virtual_SetCookiesFromUrl(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) )->handle__SetCookiesFromUrl = slot;
}

bool QNetworkCookieJar_virtualbase_SetCookiesFromUrl(void* self, struct miqt_array /* of QNetworkCookie* */  cookieList, QUrl* url) {
	return ( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_SetCookiesFromUrl(cookieList, url);
}

void QNetworkCookieJar_override_virtual_InsertCookie(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) )->handle__InsertCookie = slot;
}

bool QNetworkCookieJar_virtualbase_InsertCookie(void* self, QNetworkCookie* cookie) {
	return ( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_InsertCookie(cookie);
}

void QNetworkCookieJar_override_virtual_UpdateCookie(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) )->handle__UpdateCookie = slot;
}

bool QNetworkCookieJar_virtualbase_UpdateCookie(void* self, QNetworkCookie* cookie) {
	return ( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_UpdateCookie(cookie);
}

void QNetworkCookieJar_override_virtual_DeleteCookie(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) )->handle__DeleteCookie = slot;
}

bool QNetworkCookieJar_virtualbase_DeleteCookie(void* self, QNetworkCookie* cookie) {
	return ( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_DeleteCookie(cookie);
}

void QNetworkCookieJar_override_virtual_ValidateCookie(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) )->handle__ValidateCookie = slot;
}

bool QNetworkCookieJar_virtualbase_ValidateCookie(const void* self, QNetworkCookie* cookie, QUrl* url) {
	return ( (const MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_ValidateCookie(cookie, url);
}

void QNetworkCookieJar_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) )->handle__Event = slot;
}

bool QNetworkCookieJar_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_Event(event);
}

void QNetworkCookieJar_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) )->handle__EventFilter = slot;
}

bool QNetworkCookieJar_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_EventFilter(watched, event);
}

void QNetworkCookieJar_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) )->handle__TimerEvent = slot;
}

void QNetworkCookieJar_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_TimerEvent(event);
}

void QNetworkCookieJar_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) )->handle__ChildEvent = slot;
}

void QNetworkCookieJar_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_ChildEvent(event);
}

void QNetworkCookieJar_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) )->handle__CustomEvent = slot;
}

void QNetworkCookieJar_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_CustomEvent(event);
}

void QNetworkCookieJar_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) )->handle__ConnectNotify = slot;
}

void QNetworkCookieJar_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_ConnectNotify(signal);
}

void QNetworkCookieJar_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) )->handle__DisconnectNotify = slot;
}

void QNetworkCookieJar_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QNetworkCookieJar_Delete(QNetworkCookieJar* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQNetworkCookieJar*>( self );
	} else {
		delete self;
	}
}

