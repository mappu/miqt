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

struct miqt_array /* of QNetworkCookie* */  miqt_exec_callback_QNetworkCookieJar_cookiesForUrl(const QNetworkCookieJar*, intptr_t, QUrl*);
bool miqt_exec_callback_QNetworkCookieJar_setCookiesFromUrl(QNetworkCookieJar*, intptr_t, struct miqt_array /* of QNetworkCookie* */ , QUrl*);
bool miqt_exec_callback_QNetworkCookieJar_insertCookie(QNetworkCookieJar*, intptr_t, QNetworkCookie*);
bool miqt_exec_callback_QNetworkCookieJar_updateCookie(QNetworkCookieJar*, intptr_t, QNetworkCookie*);
bool miqt_exec_callback_QNetworkCookieJar_deleteCookie(QNetworkCookieJar*, intptr_t, QNetworkCookie*);
bool miqt_exec_callback_QNetworkCookieJar_validateCookie(const QNetworkCookieJar*, intptr_t, QNetworkCookie*, QUrl*);
bool miqt_exec_callback_QNetworkCookieJar_event(QNetworkCookieJar*, intptr_t, QEvent*);
bool miqt_exec_callback_QNetworkCookieJar_eventFilter(QNetworkCookieJar*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QNetworkCookieJar_timerEvent(QNetworkCookieJar*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QNetworkCookieJar_childEvent(QNetworkCookieJar*, intptr_t, QChildEvent*);
void miqt_exec_callback_QNetworkCookieJar_customEvent(QNetworkCookieJar*, intptr_t, QEvent*);
void miqt_exec_callback_QNetworkCookieJar_connectNotify(QNetworkCookieJar*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QNetworkCookieJar_disconnectNotify(QNetworkCookieJar*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQNetworkCookieJar final : public QNetworkCookieJar {
public:

	MiqtVirtualQNetworkCookieJar(): QNetworkCookieJar() {};
	MiqtVirtualQNetworkCookieJar(QObject* parent): QNetworkCookieJar(parent) {};

	virtual ~MiqtVirtualQNetworkCookieJar() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__cookiesForUrl = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QNetworkCookie> cookiesForUrl(const QUrl& url) const override {
		if (handle__cookiesForUrl == 0) {
			return QNetworkCookieJar::cookiesForUrl(url);
		}
		
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);

		struct miqt_array /* of QNetworkCookie* */  callback_return_value = miqt_exec_callback_QNetworkCookieJar_cookiesForUrl(this, handle__cookiesForUrl, sigval1);
		QList<QNetworkCookie> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QNetworkCookie** callback_return_value_arr = static_cast<QNetworkCookie**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of QNetworkCookie* */  virtualbase_cookiesForUrl(QUrl* url) const {

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
	intptr_t handle__setCookiesFromUrl = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setCookiesFromUrl(const QList<QNetworkCookie>& cookieList, const QUrl& url) override {
		if (handle__setCookiesFromUrl == 0) {
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

		bool callback_return_value = miqt_exec_callback_QNetworkCookieJar_setCookiesFromUrl(this, handle__setCookiesFromUrl, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setCookiesFromUrl(struct miqt_array /* of QNetworkCookie* */  cookieList, QUrl* url) {
		QList<QNetworkCookie> cookieList_QList;
		cookieList_QList.reserve(cookieList.len);
		QNetworkCookie** cookieList_arr = static_cast<QNetworkCookie**>(cookieList.data);
		for(size_t i = 0; i < cookieList.len; ++i) {
			cookieList_QList.push_back(*(cookieList_arr[i]));
		}

		return QNetworkCookieJar::setCookiesFromUrl(cookieList_QList, *url);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertCookie = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertCookie(const QNetworkCookie& cookie) override {
		if (handle__insertCookie == 0) {
			return QNetworkCookieJar::insertCookie(cookie);
		}
		
		const QNetworkCookie& cookie_ret = cookie;
		// Cast returned reference into pointer
		QNetworkCookie* sigval1 = const_cast<QNetworkCookie*>(&cookie_ret);

		bool callback_return_value = miqt_exec_callback_QNetworkCookieJar_insertCookie(this, handle__insertCookie, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertCookie(QNetworkCookie* cookie) {

		return QNetworkCookieJar::insertCookie(*cookie);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateCookie = 0;

	// Subclass to allow providing a Go implementation
	virtual bool updateCookie(const QNetworkCookie& cookie) override {
		if (handle__updateCookie == 0) {
			return QNetworkCookieJar::updateCookie(cookie);
		}
		
		const QNetworkCookie& cookie_ret = cookie;
		// Cast returned reference into pointer
		QNetworkCookie* sigval1 = const_cast<QNetworkCookie*>(&cookie_ret);

		bool callback_return_value = miqt_exec_callback_QNetworkCookieJar_updateCookie(this, handle__updateCookie, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_updateCookie(QNetworkCookie* cookie) {

		return QNetworkCookieJar::updateCookie(*cookie);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__deleteCookie = 0;

	// Subclass to allow providing a Go implementation
	virtual bool deleteCookie(const QNetworkCookie& cookie) override {
		if (handle__deleteCookie == 0) {
			return QNetworkCookieJar::deleteCookie(cookie);
		}
		
		const QNetworkCookie& cookie_ret = cookie;
		// Cast returned reference into pointer
		QNetworkCookie* sigval1 = const_cast<QNetworkCookie*>(&cookie_ret);

		bool callback_return_value = miqt_exec_callback_QNetworkCookieJar_deleteCookie(this, handle__deleteCookie, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_deleteCookie(QNetworkCookie* cookie) {

		return QNetworkCookieJar::deleteCookie(*cookie);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__validateCookie = 0;

	// Subclass to allow providing a Go implementation
	virtual bool validateCookie(const QNetworkCookie& cookie, const QUrl& url) const override {
		if (handle__validateCookie == 0) {
			return QNetworkCookieJar::validateCookie(cookie, url);
		}
		
		const QNetworkCookie& cookie_ret = cookie;
		// Cast returned reference into pointer
		QNetworkCookie* sigval1 = const_cast<QNetworkCookie*>(&cookie_ret);
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval2 = const_cast<QUrl*>(&url_ret);

		bool callback_return_value = miqt_exec_callback_QNetworkCookieJar_validateCookie(this, handle__validateCookie, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_validateCookie(QNetworkCookie* cookie, QUrl* url) const {

		return QNetworkCookieJar::validateCookie(*cookie, *url);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QNetworkCookieJar::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QNetworkCookieJar_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QNetworkCookieJar::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QNetworkCookieJar::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QNetworkCookieJar_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QNetworkCookieJar::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QNetworkCookieJar::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QNetworkCookieJar_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QNetworkCookieJar::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QNetworkCookieJar::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QNetworkCookieJar_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QNetworkCookieJar::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QNetworkCookieJar::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QNetworkCookieJar_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QNetworkCookieJar::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QNetworkCookieJar::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QNetworkCookieJar_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QNetworkCookieJar::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QNetworkCookieJar::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QNetworkCookieJar_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QNetworkCookieJar::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend struct miqt_array /* of QNetworkCookie* */  QNetworkCookieJar_protectedbase_allCookies(bool* _dynamic_cast_ok, const void* self);
	friend void QNetworkCookieJar_protectedbase_setAllCookies(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QNetworkCookie* */  cookieList);
	friend QObject* QNetworkCookieJar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QNetworkCookieJar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QNetworkCookieJar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QNetworkCookieJar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QNetworkCookieJar_metaObject(const QNetworkCookieJar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNetworkCookieJar_metacast(QNetworkCookieJar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNetworkCookieJar_tr(const char* s) {
	QString _ret = QNetworkCookieJar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QNetworkCookie* */  QNetworkCookieJar_cookiesForUrl(const QNetworkCookieJar* self, QUrl* url) {
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

bool QNetworkCookieJar_setCookiesFromUrl(QNetworkCookieJar* self, struct miqt_array /* of QNetworkCookie* */  cookieList, QUrl* url) {
	QList<QNetworkCookie> cookieList_QList;
	cookieList_QList.reserve(cookieList.len);
	QNetworkCookie** cookieList_arr = static_cast<QNetworkCookie**>(cookieList.data);
	for(size_t i = 0; i < cookieList.len; ++i) {
		cookieList_QList.push_back(*(cookieList_arr[i]));
	}
	return self->setCookiesFromUrl(cookieList_QList, *url);
}

bool QNetworkCookieJar_insertCookie(QNetworkCookieJar* self, QNetworkCookie* cookie) {
	return self->insertCookie(*cookie);
}

bool QNetworkCookieJar_updateCookie(QNetworkCookieJar* self, QNetworkCookie* cookie) {
	return self->updateCookie(*cookie);
}

bool QNetworkCookieJar_deleteCookie(QNetworkCookieJar* self, QNetworkCookie* cookie) {
	return self->deleteCookie(*cookie);
}

struct miqt_string QNetworkCookieJar_tr2(const char* s, const char* c) {
	QString _ret = QNetworkCookieJar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkCookieJar_tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkCookieJar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QNetworkCookieJar_override_virtual_cookiesForUrl(void* self, intptr_t slot) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__cookiesForUrl = slot;
	return true;
}

struct miqt_array /* of QNetworkCookie* */  QNetworkCookieJar_virtualbase_cookiesForUrl(const void* self, QUrl* url) {
	return ( (const MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_cookiesForUrl(url);
}

bool QNetworkCookieJar_override_virtual_setCookiesFromUrl(void* self, intptr_t slot) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setCookiesFromUrl = slot;
	return true;
}

bool QNetworkCookieJar_virtualbase_setCookiesFromUrl(void* self, struct miqt_array /* of QNetworkCookie* */  cookieList, QUrl* url) {
	return ( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_setCookiesFromUrl(cookieList, url);
}

bool QNetworkCookieJar_override_virtual_insertCookie(void* self, intptr_t slot) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertCookie = slot;
	return true;
}

bool QNetworkCookieJar_virtualbase_insertCookie(void* self, QNetworkCookie* cookie) {
	return ( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_insertCookie(cookie);
}

bool QNetworkCookieJar_override_virtual_updateCookie(void* self, intptr_t slot) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateCookie = slot;
	return true;
}

bool QNetworkCookieJar_virtualbase_updateCookie(void* self, QNetworkCookie* cookie) {
	return ( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_updateCookie(cookie);
}

bool QNetworkCookieJar_override_virtual_deleteCookie(void* self, intptr_t slot) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__deleteCookie = slot;
	return true;
}

bool QNetworkCookieJar_virtualbase_deleteCookie(void* self, QNetworkCookie* cookie) {
	return ( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_deleteCookie(cookie);
}

bool QNetworkCookieJar_override_virtual_validateCookie(void* self, intptr_t slot) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__validateCookie = slot;
	return true;
}

bool QNetworkCookieJar_virtualbase_validateCookie(const void* self, QNetworkCookie* cookie, QUrl* url) {
	return ( (const MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_validateCookie(cookie, url);
}

bool QNetworkCookieJar_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QNetworkCookieJar_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_event(event);
}

bool QNetworkCookieJar_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QNetworkCookieJar_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QNetworkCookieJar_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QNetworkCookieJar_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_timerEvent(event);
}

bool QNetworkCookieJar_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QNetworkCookieJar_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_childEvent(event);
}

bool QNetworkCookieJar_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QNetworkCookieJar_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_customEvent(event);
}

bool QNetworkCookieJar_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QNetworkCookieJar_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_connectNotify(signal);
}

bool QNetworkCookieJar_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QNetworkCookieJar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQNetworkCookieJar*)(self) )->virtualbase_disconnectNotify(signal);
}

struct miqt_array /* of QNetworkCookie* */  QNetworkCookieJar_protectedbase_allCookies(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}
	
	*_dynamic_cast_ok = true;
	
	QList<QNetworkCookie> _ret = self_cast->allCookies();
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

void QNetworkCookieJar_protectedbase_setAllCookies(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QNetworkCookie* */  cookieList) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QList<QNetworkCookie> cookieList_QList;
		cookieList_QList.reserve(cookieList.len);
		QNetworkCookie** cookieList_arr = static_cast<QNetworkCookie**>(cookieList.data);
		for(size_t i = 0; i < cookieList.len; ++i) {
			cookieList_QList.push_back(*(cookieList_arr[i]));
		}

	self_cast->setAllCookies(cookieList_QList);

}

QObject* QNetworkCookieJar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QNetworkCookieJar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QNetworkCookieJar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QNetworkCookieJar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQNetworkCookieJar* self_cast = dynamic_cast<MiqtVirtualQNetworkCookieJar*>( (QNetworkCookieJar*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QNetworkCookieJar_delete(QNetworkCookieJar* self) {
	delete self;
}

