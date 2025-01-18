#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QWebEngineClientCertificateStore>
#include <QWebEngineCookieStore>
#include <QWebEngineDownloadRequest>
#include <QWebEngineProfile>
#include <QWebEngineScriptCollection>
#include <QWebEngineSettings>
#include <QWebEngineUrlRequestInterceptor>
#include <QWebEngineUrlSchemeHandler>
#include <qwebengineprofile.h>
#include "gen_qwebengineprofile.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebEngineProfile_DownloadRequested(intptr_t, QWebEngineDownloadRequest*);
bool miqt_exec_callback_QWebEngineProfile_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QWebEngineProfile_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebEngineProfile_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebEngineProfile_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebEngineProfile_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineProfile_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebEngineProfile_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebEngineProfile final : public QWebEngineProfile {
public:

	MiqtVirtualQWebEngineProfile(): QWebEngineProfile() {};
	MiqtVirtualQWebEngineProfile(const QString& name): QWebEngineProfile(name) {};
	MiqtVirtualQWebEngineProfile(QObject* parent): QWebEngineProfile(parent) {};
	MiqtVirtualQWebEngineProfile(const QString& name, QObject* parent): QWebEngineProfile(name, parent) {};

	virtual ~MiqtVirtualQWebEngineProfile() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QWebEngineProfile::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWebEngineProfile_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QWebEngineProfile::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QWebEngineProfile::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebEngineProfile_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QWebEngineProfile::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QWebEngineProfile::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineProfile_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QWebEngineProfile::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QWebEngineProfile::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineProfile_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QWebEngineProfile::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QWebEngineProfile::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineProfile_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QWebEngineProfile::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QWebEngineProfile::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEngineProfile_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QWebEngineProfile::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QWebEngineProfile::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEngineProfile_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QWebEngineProfile::disconnectNotify(*signal);

	}

};

QWebEngineProfile* QWebEngineProfile_new() {
	return new MiqtVirtualQWebEngineProfile();
}

QWebEngineProfile* QWebEngineProfile_new2(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new MiqtVirtualQWebEngineProfile(name_QString);
}

QWebEngineProfile* QWebEngineProfile_new3(QObject* parent) {
	return new MiqtVirtualQWebEngineProfile(parent);
}

QWebEngineProfile* QWebEngineProfile_new4(struct miqt_string name, QObject* parent) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new MiqtVirtualQWebEngineProfile(name_QString, parent);
}

void QWebEngineProfile_virtbase(QWebEngineProfile* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineProfile_MetaObject(const QWebEngineProfile* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineProfile_Metacast(QWebEngineProfile* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineProfile_Tr(const char* s) {
	QString _ret = QWebEngineProfile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineProfile_StorageName(const QWebEngineProfile* self) {
	QString _ret = self->storageName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebEngineProfile_IsOffTheRecord(const QWebEngineProfile* self) {
	return self->isOffTheRecord();
}

struct miqt_string QWebEngineProfile_PersistentStoragePath(const QWebEngineProfile* self) {
	QString _ret = self->persistentStoragePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineProfile_SetPersistentStoragePath(QWebEngineProfile* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->setPersistentStoragePath(path_QString);
}

struct miqt_string QWebEngineProfile_CachePath(const QWebEngineProfile* self) {
	QString _ret = self->cachePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineProfile_SetCachePath(QWebEngineProfile* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->setCachePath(path_QString);
}

struct miqt_string QWebEngineProfile_HttpUserAgent(const QWebEngineProfile* self) {
	QString _ret = self->httpUserAgent();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineProfile_SetHttpUserAgent(QWebEngineProfile* self, struct miqt_string userAgent) {
	QString userAgent_QString = QString::fromUtf8(userAgent.data, userAgent.len);
	self->setHttpUserAgent(userAgent_QString);
}

int QWebEngineProfile_HttpCacheType(const QWebEngineProfile* self) {
	QWebEngineProfile::HttpCacheType _ret = self->httpCacheType();
	return static_cast<int>(_ret);
}

void QWebEngineProfile_SetHttpCacheType(QWebEngineProfile* self, int httpCacheType) {
	self->setHttpCacheType(static_cast<QWebEngineProfile::HttpCacheType>(httpCacheType));
}

void QWebEngineProfile_SetHttpAcceptLanguage(QWebEngineProfile* self, struct miqt_string httpAcceptLanguage) {
	QString httpAcceptLanguage_QString = QString::fromUtf8(httpAcceptLanguage.data, httpAcceptLanguage.len);
	self->setHttpAcceptLanguage(httpAcceptLanguage_QString);
}

struct miqt_string QWebEngineProfile_HttpAcceptLanguage(const QWebEngineProfile* self) {
	QString _ret = self->httpAcceptLanguage();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QWebEngineProfile_PersistentCookiesPolicy(const QWebEngineProfile* self) {
	QWebEngineProfile::PersistentCookiesPolicy _ret = self->persistentCookiesPolicy();
	return static_cast<int>(_ret);
}

void QWebEngineProfile_SetPersistentCookiesPolicy(QWebEngineProfile* self, int persistentCookiesPolicy) {
	self->setPersistentCookiesPolicy(static_cast<QWebEngineProfile::PersistentCookiesPolicy>(persistentCookiesPolicy));
}

int QWebEngineProfile_HttpCacheMaximumSize(const QWebEngineProfile* self) {
	return self->httpCacheMaximumSize();
}

void QWebEngineProfile_SetHttpCacheMaximumSize(QWebEngineProfile* self, int maxSize) {
	self->setHttpCacheMaximumSize(static_cast<int>(maxSize));
}

QWebEngineCookieStore* QWebEngineProfile_CookieStore(QWebEngineProfile* self) {
	return self->cookieStore();
}

void QWebEngineProfile_SetUrlRequestInterceptor(QWebEngineProfile* self, QWebEngineUrlRequestInterceptor* interceptor) {
	self->setUrlRequestInterceptor(interceptor);
}

void QWebEngineProfile_ClearAllVisitedLinks(QWebEngineProfile* self) {
	self->clearAllVisitedLinks();
}

void QWebEngineProfile_ClearVisitedLinks(QWebEngineProfile* self, struct miqt_array /* of QUrl* */  urls) {
	QList<QUrl> urls_QList;
	urls_QList.reserve(urls.len);
	QUrl** urls_arr = static_cast<QUrl**>(urls.data);
	for(size_t i = 0; i < urls.len; ++i) {
		urls_QList.push_back(*(urls_arr[i]));
	}
	self->clearVisitedLinks(urls_QList);
}

bool QWebEngineProfile_VisitedLinksContainsUrl(const QWebEngineProfile* self, QUrl* url) {
	return self->visitedLinksContainsUrl(*url);
}

QWebEngineSettings* QWebEngineProfile_Settings(const QWebEngineProfile* self) {
	return self->settings();
}

QWebEngineScriptCollection* QWebEngineProfile_Scripts(const QWebEngineProfile* self) {
	return self->scripts();
}

QWebEngineUrlSchemeHandler* QWebEngineProfile_UrlSchemeHandler(const QWebEngineProfile* self, struct miqt_string param1) {
	QByteArray param1_QByteArray(param1.data, param1.len);
	return (QWebEngineUrlSchemeHandler*) self->urlSchemeHandler(param1_QByteArray);
}

void QWebEngineProfile_InstallUrlSchemeHandler(QWebEngineProfile* self, struct miqt_string scheme, QWebEngineUrlSchemeHandler* param2) {
	QByteArray scheme_QByteArray(scheme.data, scheme.len);
	self->installUrlSchemeHandler(scheme_QByteArray, param2);
}

void QWebEngineProfile_RemoveUrlScheme(QWebEngineProfile* self, struct miqt_string scheme) {
	QByteArray scheme_QByteArray(scheme.data, scheme.len);
	self->removeUrlScheme(scheme_QByteArray);
}

void QWebEngineProfile_RemoveUrlSchemeHandler(QWebEngineProfile* self, QWebEngineUrlSchemeHandler* param1) {
	self->removeUrlSchemeHandler(param1);
}

void QWebEngineProfile_RemoveAllUrlSchemeHandlers(QWebEngineProfile* self) {
	self->removeAllUrlSchemeHandlers();
}

void QWebEngineProfile_ClearHttpCache(QWebEngineProfile* self) {
	self->clearHttpCache();
}

void QWebEngineProfile_SetSpellCheckLanguages(QWebEngineProfile* self, struct miqt_array /* of struct miqt_string */  languages) {
	QStringList languages_QList;
	languages_QList.reserve(languages.len);
	struct miqt_string* languages_arr = static_cast<struct miqt_string*>(languages.data);
	for(size_t i = 0; i < languages.len; ++i) {
		QString languages_arr_i_QString = QString::fromUtf8(languages_arr[i].data, languages_arr[i].len);
		languages_QList.push_back(languages_arr_i_QString);
	}
	self->setSpellCheckLanguages(languages_QList);
}

struct miqt_array /* of struct miqt_string */  QWebEngineProfile_SpellCheckLanguages(const QWebEngineProfile* self) {
	QStringList _ret = self->spellCheckLanguages();
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

void QWebEngineProfile_SetSpellCheckEnabled(QWebEngineProfile* self, bool enabled) {
	self->setSpellCheckEnabled(enabled);
}

bool QWebEngineProfile_IsSpellCheckEnabled(const QWebEngineProfile* self) {
	return self->isSpellCheckEnabled();
}

struct miqt_string QWebEngineProfile_DownloadPath(const QWebEngineProfile* self) {
	QString _ret = self->downloadPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineProfile_SetDownloadPath(QWebEngineProfile* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->setDownloadPath(path_QString);
}

QWebEngineClientCertificateStore* QWebEngineProfile_ClientCertificateStore(QWebEngineProfile* self) {
	return self->clientCertificateStore();
}

QWebEngineProfile* QWebEngineProfile_DefaultProfile() {
	return QWebEngineProfile::defaultProfile();
}

void QWebEngineProfile_DownloadRequested(QWebEngineProfile* self, QWebEngineDownloadRequest* download) {
	self->downloadRequested(download);
}

void QWebEngineProfile_connect_DownloadRequested(QWebEngineProfile* self, intptr_t slot) {
	MiqtVirtualQWebEngineProfile::connect(self, static_cast<void (QWebEngineProfile::*)(QWebEngineDownloadRequest*)>(&QWebEngineProfile::downloadRequested), self, [=](QWebEngineDownloadRequest* download) {
		QWebEngineDownloadRequest* sigval1 = download;
		miqt_exec_callback_QWebEngineProfile_DownloadRequested(slot, sigval1);
	});
}

struct miqt_string QWebEngineProfile_Tr2(const char* s, const char* c) {
	QString _ret = QWebEngineProfile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineProfile_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineProfile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebEngineProfile_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineProfile* self_cast = dynamic_cast<MiqtVirtualQWebEngineProfile*>( (QWebEngineProfile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QWebEngineProfile_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWebEngineProfile*)(self) )->virtualbase_Event(event);
}

bool QWebEngineProfile_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineProfile* self_cast = dynamic_cast<MiqtVirtualQWebEngineProfile*>( (QWebEngineProfile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QWebEngineProfile_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebEngineProfile*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QWebEngineProfile_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineProfile* self_cast = dynamic_cast<MiqtVirtualQWebEngineProfile*>( (QWebEngineProfile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QWebEngineProfile_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebEngineProfile*)(self) )->virtualbase_TimerEvent(event);
}

bool QWebEngineProfile_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineProfile* self_cast = dynamic_cast<MiqtVirtualQWebEngineProfile*>( (QWebEngineProfile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QWebEngineProfile_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebEngineProfile*)(self) )->virtualbase_ChildEvent(event);
}

bool QWebEngineProfile_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineProfile* self_cast = dynamic_cast<MiqtVirtualQWebEngineProfile*>( (QWebEngineProfile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QWebEngineProfile_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebEngineProfile*)(self) )->virtualbase_CustomEvent(event);
}

bool QWebEngineProfile_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineProfile* self_cast = dynamic_cast<MiqtVirtualQWebEngineProfile*>( (QWebEngineProfile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QWebEngineProfile_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEngineProfile*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QWebEngineProfile_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineProfile* self_cast = dynamic_cast<MiqtVirtualQWebEngineProfile*>( (QWebEngineProfile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QWebEngineProfile_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEngineProfile*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QWebEngineProfile_Delete(QWebEngineProfile* self) {
	delete self;
}

