#include <QChildEvent>
#include <QEvent>
#include <QJSEngine>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMetaProperty>
#include <QObject>
#include <QQmlAbstractUrlInterceptor>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQmlError>
#include <QQmlImageProviderBase>
#include <QQmlIncubationController>
#include <QQmlNetworkAccessManagerFactory>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <qqmlengine.h>
#include "gen_qqmlengine.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QQmlEngine_quit(intptr_t);
void miqt_exec_callback_QQmlEngine_exit(intptr_t, int);
void miqt_exec_callback_QQmlEngine_warnings(intptr_t, struct miqt_array /* of QQmlError* */ );
bool miqt_exec_callback_QQmlEngine_event(QQmlEngine*, intptr_t, QEvent*);
bool miqt_exec_callback_QQmlEngine_eventFilter(QQmlEngine*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QQmlEngine_timerEvent(QQmlEngine*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QQmlEngine_childEvent(QQmlEngine*, intptr_t, QChildEvent*);
void miqt_exec_callback_QQmlEngine_customEvent(QQmlEngine*, intptr_t, QEvent*);
void miqt_exec_callback_QQmlEngine_connectNotify(QQmlEngine*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QQmlEngine_disconnectNotify(QQmlEngine*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

void QQmlImageProviderBase_virtbase(QQmlImageProviderBase* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QQmlImageProviderBase_metaObject(const QQmlImageProviderBase* self) {
	return (QMetaObject*) self->metaObject();
}

void* QQmlImageProviderBase_metacast(QQmlImageProviderBase* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QQmlImageProviderBase_tr(const char* s) {
	QString _ret = QQmlImageProviderBase::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QQmlImageProviderBase_imageType(const QQmlImageProviderBase* self) {
	QQmlImageProviderBase::ImageType _ret = self->imageType();
	return static_cast<int>(_ret);
}

int QQmlImageProviderBase_flags(const QQmlImageProviderBase* self) {
	QQmlImageProviderBase::Flags _ret = self->flags();
	return static_cast<int>(_ret);
}

struct miqt_string QQmlImageProviderBase_tr2(const char* s, const char* c) {
	QString _ret = QQmlImageProviderBase::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlImageProviderBase_tr3(const char* s, const char* c, int n) {
	QString _ret = QQmlImageProviderBase::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QQmlImageProviderBase_delete(QQmlImageProviderBase* self) {
	delete self;
}

class MiqtVirtualQQmlEngine final : public QQmlEngine {
public:

	MiqtVirtualQQmlEngine(): QQmlEngine() {}
	MiqtVirtualQQmlEngine(QObject* p): QQmlEngine(p) {}

	virtual ~MiqtVirtualQQmlEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QQmlEngine::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QQmlEngine_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QQmlEngine_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QQmlEngine::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QQmlEngine_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QQmlEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QQmlEngine::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QQmlEngine_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QQmlEngine_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QQmlEngine::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QQmlEngine_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QQmlEngine_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QQmlEngine::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QQmlEngine_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QQmlEngine_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QQmlEngine::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QQmlEngine_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QQmlEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QQmlEngine::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QQmlEngine_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QQmlEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QQmlEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QQmlEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QQmlEngine* QQmlEngine_new() {
	return new (std::nothrow) MiqtVirtualQQmlEngine();
}

QQmlEngine* QQmlEngine_new2(QObject* p) {
	return new (std::nothrow) MiqtVirtualQQmlEngine(p);
}

void QQmlEngine_virtbase(QQmlEngine* src, QJSEngine** outptr_QJSEngine) {
	*outptr_QJSEngine = static_cast<QJSEngine*>(src);
}

QMetaObject* QQmlEngine_metaObject(const QQmlEngine* self) {
	return (QMetaObject*) self->metaObject();
}

void* QQmlEngine_metacast(QQmlEngine* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QQmlEngine_tr(const char* s) {
	QString _ret = QQmlEngine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QQmlContext* QQmlEngine_rootContext(const QQmlEngine* self) {
	return self->rootContext();
}

void QQmlEngine_clearComponentCache(QQmlEngine* self) {
	self->clearComponentCache();
}

void QQmlEngine_trimComponentCache(QQmlEngine* self) {
	self->trimComponentCache();
}

void QQmlEngine_clearSingletons(QQmlEngine* self) {
	self->clearSingletons();
}

struct miqt_array /* of struct miqt_string */  QQmlEngine_importPathList(const QQmlEngine* self) {
	QStringList _ret = self->importPathList();
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

void QQmlEngine_setImportPathList(QQmlEngine* self, struct miqt_array /* of struct miqt_string */  paths) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	self->setImportPathList(paths_QList);
}

void QQmlEngine_addImportPath(QQmlEngine* self, struct miqt_string dir) {
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	self->addImportPath(dir_QString);
}

struct miqt_array /* of struct miqt_string */  QQmlEngine_pluginPathList(const QQmlEngine* self) {
	QStringList _ret = self->pluginPathList();
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

void QQmlEngine_setPluginPathList(QQmlEngine* self, struct miqt_array /* of struct miqt_string */  paths) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	self->setPluginPathList(paths_QList);
}

void QQmlEngine_addPluginPath(QQmlEngine* self, struct miqt_string dir) {
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	self->addPluginPath(dir_QString);
}

bool QQmlEngine_addNamedBundle(QQmlEngine* self, struct miqt_string param1, struct miqt_string param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	return self->addNamedBundle(param1_QString, param2_QString);
}

bool QQmlEngine_importPlugin(QQmlEngine* self, struct miqt_string filePath, struct miqt_string uri, struct miqt_array /* of QQmlError* */  errors) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	QString uri_QString = QString::fromUtf8(uri.data, uri.len);
	QList<QQmlError> errors_QList;
	errors_QList.reserve(errors.len);
	QQmlError** errors_arr = static_cast<QQmlError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	return self->importPlugin(filePath_QString, uri_QString, &errors_QList);
}

void QQmlEngine_setNetworkAccessManagerFactory(QQmlEngine* self, QQmlNetworkAccessManagerFactory* networkAccessManagerFactory) {
	self->setNetworkAccessManagerFactory(networkAccessManagerFactory);
}

QQmlNetworkAccessManagerFactory* QQmlEngine_networkAccessManagerFactory(const QQmlEngine* self) {
	return self->networkAccessManagerFactory();
}

void QQmlEngine_setUrlInterceptor(QQmlEngine* self, QQmlAbstractUrlInterceptor* urlInterceptor) {
	self->setUrlInterceptor(urlInterceptor);
}

QQmlAbstractUrlInterceptor* QQmlEngine_urlInterceptor(const QQmlEngine* self) {
	return self->urlInterceptor();
}

void QQmlEngine_addUrlInterceptor(QQmlEngine* self, QQmlAbstractUrlInterceptor* urlInterceptor) {
	self->addUrlInterceptor(urlInterceptor);
}

void QQmlEngine_removeUrlInterceptor(QQmlEngine* self, QQmlAbstractUrlInterceptor* urlInterceptor) {
	self->removeUrlInterceptor(urlInterceptor);
}

struct miqt_array /* of QQmlAbstractUrlInterceptor* */  QQmlEngine_urlInterceptors(const QQmlEngine* self) {
	QList<QQmlAbstractUrlInterceptor *> _ret = self->urlInterceptors();
	// Convert QList<> from C++ memory to manually-managed C memory
	QQmlAbstractUrlInterceptor** _arr = static_cast<QQmlAbstractUrlInterceptor**>(malloc(sizeof(QQmlAbstractUrlInterceptor*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QUrl* QQmlEngine_interceptUrl(const QQmlEngine* self, QUrl* url, int type) {
	return new QUrl(self->interceptUrl(*url, static_cast<QQmlAbstractUrlInterceptor::DataType>(type)));
}

void QQmlEngine_addImageProvider(QQmlEngine* self, struct miqt_string id, QQmlImageProviderBase* param2) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	self->addImageProvider(id_QString, param2);
}

QQmlImageProviderBase* QQmlEngine_imageProvider(const QQmlEngine* self, struct miqt_string id) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	return self->imageProvider(id_QString);
}

void QQmlEngine_removeImageProvider(QQmlEngine* self, struct miqt_string id) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	self->removeImageProvider(id_QString);
}

void QQmlEngine_setIncubationController(QQmlEngine* self, QQmlIncubationController* incubationController) {
	self->setIncubationController(incubationController);
}

QQmlIncubationController* QQmlEngine_incubationController(const QQmlEngine* self) {
	return self->incubationController();
}

void QQmlEngine_setOfflineStoragePath(QQmlEngine* self, struct miqt_string dir) {
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	self->setOfflineStoragePath(dir_QString);
}

struct miqt_string QQmlEngine_offlineStoragePath(const QQmlEngine* self) {
	QString _ret = self->offlineStoragePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlEngine_offlineStorageDatabaseFilePath(const QQmlEngine* self, struct miqt_string databaseName) {
	QString databaseName_QString = QString::fromUtf8(databaseName.data, databaseName.len);
	QString _ret = self->offlineStorageDatabaseFilePath(databaseName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QQmlEngine_baseUrl(const QQmlEngine* self) {
	return new QUrl(self->baseUrl());
}

void QQmlEngine_setBaseUrl(QQmlEngine* self, QUrl* baseUrl) {
	self->setBaseUrl(*baseUrl);
}

bool QQmlEngine_outputWarningsToStandardError(const QQmlEngine* self) {
	return self->outputWarningsToStandardError();
}

void QQmlEngine_setOutputWarningsToStandardError(QQmlEngine* self, bool outputWarningsToStandardError) {
	self->setOutputWarningsToStandardError(outputWarningsToStandardError);
}

void QQmlEngine_captureProperty(const QQmlEngine* self, QObject* object, QMetaProperty* property) {
	self->captureProperty(object, *property);
}

void QQmlEngine_retranslate(QQmlEngine* self) {
	self->retranslate();
}

QQmlContext* QQmlEngine_contextForObject(QObject* param1) {
	return QQmlEngine::contextForObject(param1);
}

void QQmlEngine_setContextForObject(QObject* param1, QQmlContext* param2) {
	QQmlEngine::setContextForObject(param1, param2);
}

void QQmlEngine_quit(QQmlEngine* self) {
	self->quit();
}

void QQmlEngine_connect_quit(QQmlEngine* self, intptr_t slot) {
	QQmlEngine::connect(self, static_cast<void (QQmlEngine::*)()>(&QQmlEngine::quit), self, [=]() {
		miqt_exec_callback_QQmlEngine_quit(slot);
	});
}

void QQmlEngine_exit(QQmlEngine* self, int retCode) {
	self->exit(static_cast<int>(retCode));
}

void QQmlEngine_connect_exit(QQmlEngine* self, intptr_t slot) {
	QQmlEngine::connect(self, static_cast<void (QQmlEngine::*)(int)>(&QQmlEngine::exit), self, [=](int retCode) {
		int sigval1 = retCode;
		miqt_exec_callback_QQmlEngine_exit(slot, sigval1);
	});
}

void QQmlEngine_warnings(QQmlEngine* self, struct miqt_array /* of QQmlError* */  warnings) {
	QList<QQmlError> warnings_QList;
	warnings_QList.reserve(warnings.len);
	QQmlError** warnings_arr = static_cast<QQmlError**>(warnings.data);
	for(size_t i = 0; i < warnings.len; ++i) {
		warnings_QList.push_back(*(warnings_arr[i]));
	}
	self->warnings(warnings_QList);
}

void QQmlEngine_connect_warnings(QQmlEngine* self, intptr_t slot) {
	QQmlEngine::connect(self, static_cast<void (QQmlEngine::*)(const QList<QQmlError>&)>(&QQmlEngine::warnings), self, [=](const QList<QQmlError>& warnings) {
		const QList<QQmlError>& warnings_ret = warnings;
		// Convert QList<> from C++ memory to manually-managed C memory
		QQmlError** warnings_arr = static_cast<QQmlError**>(malloc(sizeof(QQmlError*) * warnings_ret.length()));
		for (size_t i = 0, e = warnings_ret.length(); i < e; ++i) {
			warnings_arr[i] = new QQmlError(warnings_ret[i]);
		}
		struct miqt_array warnings_out;
		warnings_out.len = warnings_ret.length();
		warnings_out.data = static_cast<void*>(warnings_arr);
		struct miqt_array /* of QQmlError* */  sigval1 = warnings_out;
		miqt_exec_callback_QQmlEngine_warnings(slot, sigval1);
	});
}

struct miqt_string QQmlEngine_tr2(const char* s, const char* c) {
	QString _ret = QQmlEngine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlEngine_tr3(const char* s, const char* c, int n) {
	QString _ret = QQmlEngine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QQmlEngine_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQQmlEngine* self_cast = dynamic_cast<MiqtVirtualQQmlEngine*>( (QQmlEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QQmlEngine_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQQmlEngine*>(self)->QQmlEngine::event(param1);
}

bool QQmlEngine_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQQmlEngine* self_cast = dynamic_cast<MiqtVirtualQQmlEngine*>( (QQmlEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QQmlEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQQmlEngine*>(self)->QQmlEngine::eventFilter(watched, event);
}

bool QQmlEngine_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlEngine* self_cast = dynamic_cast<MiqtVirtualQQmlEngine*>( (QQmlEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QQmlEngine_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQQmlEngine*>(self)->QQmlEngine::timerEvent(event);
}

bool QQmlEngine_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlEngine* self_cast = dynamic_cast<MiqtVirtualQQmlEngine*>( (QQmlEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QQmlEngine_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQQmlEngine*>(self)->QQmlEngine::childEvent(event);
}

bool QQmlEngine_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlEngine* self_cast = dynamic_cast<MiqtVirtualQQmlEngine*>( (QQmlEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QQmlEngine_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQQmlEngine*>(self)->QQmlEngine::customEvent(event);
}

bool QQmlEngine_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQQmlEngine* self_cast = dynamic_cast<MiqtVirtualQQmlEngine*>( (QQmlEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QQmlEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQQmlEngine*>(self)->QQmlEngine::connectNotify(*signal);
}

bool QQmlEngine_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQQmlEngine* self_cast = dynamic_cast<MiqtVirtualQQmlEngine*>( (QQmlEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QQmlEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQQmlEngine*>(self)->QQmlEngine::disconnectNotify(*signal);
}

QObject* QQmlEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlEngine* self_cast = dynamic_cast<MiqtVirtualQQmlEngine*>( (QQmlEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QQmlEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlEngine* self_cast = dynamic_cast<MiqtVirtualQQmlEngine*>( (QQmlEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QQmlEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQQmlEngine* self_cast = dynamic_cast<MiqtVirtualQQmlEngine*>( (QQmlEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QQmlEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQQmlEngine* self_cast = dynamic_cast<MiqtVirtualQQmlEngine*>( (QQmlEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QQmlEngine_delete(QQmlEngine* self) {
	delete self;
}

