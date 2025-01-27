#include <QAbstractNetworkCache>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkCacheMetaData>
#include <QNetworkDiskCache>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <qnetworkdiskcache.h>
#include "gen_qnetworkdiskcache.h"

#ifdef __cplusplus
extern "C" {
#endif

long long miqt_exec_callback_QNetworkDiskCache_CacheSize(const QNetworkDiskCache*, intptr_t);
QNetworkCacheMetaData* miqt_exec_callback_QNetworkDiskCache_MetaData(QNetworkDiskCache*, intptr_t, QUrl*);
void miqt_exec_callback_QNetworkDiskCache_UpdateMetaData(QNetworkDiskCache*, intptr_t, QNetworkCacheMetaData*);
QIODevice* miqt_exec_callback_QNetworkDiskCache_Data(QNetworkDiskCache*, intptr_t, QUrl*);
bool miqt_exec_callback_QNetworkDiskCache_Remove(QNetworkDiskCache*, intptr_t, QUrl*);
QIODevice* miqt_exec_callback_QNetworkDiskCache_Prepare(QNetworkDiskCache*, intptr_t, QNetworkCacheMetaData*);
void miqt_exec_callback_QNetworkDiskCache_Insert(QNetworkDiskCache*, intptr_t, QIODevice*);
void miqt_exec_callback_QNetworkDiskCache_Clear(QNetworkDiskCache*, intptr_t);
long long miqt_exec_callback_QNetworkDiskCache_Expire(QNetworkDiskCache*, intptr_t);
bool miqt_exec_callback_QNetworkDiskCache_Event(QNetworkDiskCache*, intptr_t, QEvent*);
bool miqt_exec_callback_QNetworkDiskCache_EventFilter(QNetworkDiskCache*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QNetworkDiskCache_TimerEvent(QNetworkDiskCache*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QNetworkDiskCache_ChildEvent(QNetworkDiskCache*, intptr_t, QChildEvent*);
void miqt_exec_callback_QNetworkDiskCache_CustomEvent(QNetworkDiskCache*, intptr_t, QEvent*);
void miqt_exec_callback_QNetworkDiskCache_ConnectNotify(QNetworkDiskCache*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QNetworkDiskCache_DisconnectNotify(QNetworkDiskCache*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQNetworkDiskCache final : public QNetworkDiskCache {
public:

	MiqtVirtualQNetworkDiskCache(): QNetworkDiskCache() {};
	MiqtVirtualQNetworkDiskCache(QObject* parent): QNetworkDiskCache(parent) {};

	virtual ~MiqtVirtualQNetworkDiskCache() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CacheSize = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 cacheSize() const override {
		if (handle__CacheSize == 0) {
			return QNetworkDiskCache::cacheSize();
		}
		

		long long callback_return_value = miqt_exec_callback_QNetworkDiskCache_CacheSize(this, handle__CacheSize);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_CacheSize() const {

		qint64 _ret = QNetworkDiskCache::cacheSize();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MetaData = 0;

	// Subclass to allow providing a Go implementation
	virtual QNetworkCacheMetaData metaData(const QUrl& url) override {
		if (handle__MetaData == 0) {
			return QNetworkDiskCache::metaData(url);
		}
		
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);

		QNetworkCacheMetaData* callback_return_value = miqt_exec_callback_QNetworkDiskCache_MetaData(this, handle__MetaData, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QNetworkCacheMetaData* virtualbase_MetaData(QUrl* url) {

		return new QNetworkCacheMetaData(QNetworkDiskCache::metaData(*url));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateMetaData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateMetaData(const QNetworkCacheMetaData& metaData) override {
		if (handle__UpdateMetaData == 0) {
			QNetworkDiskCache::updateMetaData(metaData);
			return;
		}
		
		const QNetworkCacheMetaData& metaData_ret = metaData;
		// Cast returned reference into pointer
		QNetworkCacheMetaData* sigval1 = const_cast<QNetworkCacheMetaData*>(&metaData_ret);

		miqt_exec_callback_QNetworkDiskCache_UpdateMetaData(this, handle__UpdateMetaData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateMetaData(QNetworkCacheMetaData* metaData) {

		QNetworkDiskCache::updateMetaData(*metaData);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QIODevice* data(const QUrl& url) override {
		if (handle__Data == 0) {
			return QNetworkDiskCache::data(url);
		}
		
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);

		QIODevice* callback_return_value = miqt_exec_callback_QNetworkDiskCache_Data(this, handle__Data, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QIODevice* virtualbase_Data(QUrl* url) {

		return QNetworkDiskCache::data(*url);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Remove = 0;

	// Subclass to allow providing a Go implementation
	virtual bool remove(const QUrl& url) override {
		if (handle__Remove == 0) {
			return QNetworkDiskCache::remove(url);
		}
		
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);

		bool callback_return_value = miqt_exec_callback_QNetworkDiskCache_Remove(this, handle__Remove, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Remove(QUrl* url) {

		return QNetworkDiskCache::remove(*url);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Prepare = 0;

	// Subclass to allow providing a Go implementation
	virtual QIODevice* prepare(const QNetworkCacheMetaData& metaData) override {
		if (handle__Prepare == 0) {
			return QNetworkDiskCache::prepare(metaData);
		}
		
		const QNetworkCacheMetaData& metaData_ret = metaData;
		// Cast returned reference into pointer
		QNetworkCacheMetaData* sigval1 = const_cast<QNetworkCacheMetaData*>(&metaData_ret);

		QIODevice* callback_return_value = miqt_exec_callback_QNetworkDiskCache_Prepare(this, handle__Prepare, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QIODevice* virtualbase_Prepare(QNetworkCacheMetaData* metaData) {

		return QNetworkDiskCache::prepare(*metaData);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Insert = 0;

	// Subclass to allow providing a Go implementation
	virtual void insert(QIODevice* device) override {
		if (handle__Insert == 0) {
			QNetworkDiskCache::insert(device);
			return;
		}
		
		QIODevice* sigval1 = device;

		miqt_exec_callback_QNetworkDiskCache_Insert(this, handle__Insert, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Insert(QIODevice* device) {

		QNetworkDiskCache::insert(device);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__Clear == 0) {
			QNetworkDiskCache::clear();
			return;
		}
		

		miqt_exec_callback_QNetworkDiskCache_Clear(this, handle__Clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Clear() {

		QNetworkDiskCache::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Expire = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 expire() override {
		if (handle__Expire == 0) {
			return QNetworkDiskCache::expire();
		}
		

		long long callback_return_value = miqt_exec_callback_QNetworkDiskCache_Expire(this, handle__Expire);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Expire() {

		qint64 _ret = QNetworkDiskCache::expire();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QNetworkDiskCache::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QNetworkDiskCache_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QNetworkDiskCache::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QNetworkDiskCache::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QNetworkDiskCache_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QNetworkDiskCache::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QNetworkDiskCache::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QNetworkDiskCache_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QNetworkDiskCache::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QNetworkDiskCache::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QNetworkDiskCache_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QNetworkDiskCache::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QNetworkDiskCache::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QNetworkDiskCache_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QNetworkDiskCache::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QNetworkDiskCache::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QNetworkDiskCache_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QNetworkDiskCache::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QNetworkDiskCache::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QNetworkDiskCache_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QNetworkDiskCache::disconnectNotify(*signal);

	}

};

QNetworkDiskCache* QNetworkDiskCache_new() {
	return new MiqtVirtualQNetworkDiskCache();
}

QNetworkDiskCache* QNetworkDiskCache_new2(QObject* parent) {
	return new MiqtVirtualQNetworkDiskCache(parent);
}

void QNetworkDiskCache_virtbase(QNetworkDiskCache* src, QAbstractNetworkCache** outptr_QAbstractNetworkCache) {
	*outptr_QAbstractNetworkCache = static_cast<QAbstractNetworkCache*>(src);
}

QMetaObject* QNetworkDiskCache_MetaObject(const QNetworkDiskCache* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNetworkDiskCache_Metacast(QNetworkDiskCache* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNetworkDiskCache_Tr(const char* s) {
	QString _ret = QNetworkDiskCache::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkDiskCache_TrUtf8(const char* s) {
	QString _ret = QNetworkDiskCache::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkDiskCache_CacheDirectory(const QNetworkDiskCache* self) {
	QString _ret = self->cacheDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkDiskCache_SetCacheDirectory(QNetworkDiskCache* self, struct miqt_string cacheDir) {
	QString cacheDir_QString = QString::fromUtf8(cacheDir.data, cacheDir.len);
	self->setCacheDirectory(cacheDir_QString);
}

long long QNetworkDiskCache_MaximumCacheSize(const QNetworkDiskCache* self) {
	qint64 _ret = self->maximumCacheSize();
	return static_cast<long long>(_ret);
}

void QNetworkDiskCache_SetMaximumCacheSize(QNetworkDiskCache* self, long long size) {
	self->setMaximumCacheSize(static_cast<qint64>(size));
}

long long QNetworkDiskCache_CacheSize(const QNetworkDiskCache* self) {
	qint64 _ret = self->cacheSize();
	return static_cast<long long>(_ret);
}

QNetworkCacheMetaData* QNetworkDiskCache_MetaData(QNetworkDiskCache* self, QUrl* url) {
	return new QNetworkCacheMetaData(self->metaData(*url));
}

void QNetworkDiskCache_UpdateMetaData(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData) {
	self->updateMetaData(*metaData);
}

QIODevice* QNetworkDiskCache_Data(QNetworkDiskCache* self, QUrl* url) {
	return self->data(*url);
}

bool QNetworkDiskCache_Remove(QNetworkDiskCache* self, QUrl* url) {
	return self->remove(*url);
}

QIODevice* QNetworkDiskCache_Prepare(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData) {
	return self->prepare(*metaData);
}

void QNetworkDiskCache_Insert(QNetworkDiskCache* self, QIODevice* device) {
	self->insert(device);
}

QNetworkCacheMetaData* QNetworkDiskCache_FileMetaData(const QNetworkDiskCache* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QNetworkCacheMetaData(self->fileMetaData(fileName_QString));
}

void QNetworkDiskCache_Clear(QNetworkDiskCache* self) {
	self->clear();
}

struct miqt_string QNetworkDiskCache_Tr2(const char* s, const char* c) {
	QString _ret = QNetworkDiskCache::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkDiskCache_Tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkDiskCache::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkDiskCache_TrUtf82(const char* s, const char* c) {
	QString _ret = QNetworkDiskCache::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkDiskCache_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QNetworkDiskCache::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QNetworkDiskCache_override_virtual_CacheSize(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CacheSize = slot;
	return true;
}

long long QNetworkDiskCache_virtualbase_CacheSize(const void* self) {
	return ( (const MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_CacheSize();
}

bool QNetworkDiskCache_override_virtual_MetaData(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MetaData = slot;
	return true;
}

QNetworkCacheMetaData* QNetworkDiskCache_virtualbase_MetaData(void* self, QUrl* url) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_MetaData(url);
}

bool QNetworkDiskCache_override_virtual_UpdateMetaData(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateMetaData = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_UpdateMetaData(void* self, QNetworkCacheMetaData* metaData) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_UpdateMetaData(metaData);
}

bool QNetworkDiskCache_override_virtual_Data(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Data = slot;
	return true;
}

QIODevice* QNetworkDiskCache_virtualbase_Data(void* self, QUrl* url) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_Data(url);
}

bool QNetworkDiskCache_override_virtual_Remove(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Remove = slot;
	return true;
}

bool QNetworkDiskCache_virtualbase_Remove(void* self, QUrl* url) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_Remove(url);
}

bool QNetworkDiskCache_override_virtual_Prepare(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Prepare = slot;
	return true;
}

QIODevice* QNetworkDiskCache_virtualbase_Prepare(void* self, QNetworkCacheMetaData* metaData) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_Prepare(metaData);
}

bool QNetworkDiskCache_override_virtual_Insert(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Insert = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_Insert(void* self, QIODevice* device) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_Insert(device);
}

bool QNetworkDiskCache_override_virtual_Clear(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clear = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_Clear(void* self) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_Clear();
}

bool QNetworkDiskCache_override_virtual_Expire(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Expire = slot;
	return true;
}

long long QNetworkDiskCache_virtualbase_Expire(void* self) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_Expire();
}

bool QNetworkDiskCache_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QNetworkDiskCache_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_Event(event);
}

bool QNetworkDiskCache_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QNetworkDiskCache_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QNetworkDiskCache_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_TimerEvent(event);
}

bool QNetworkDiskCache_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_ChildEvent(event);
}

bool QNetworkDiskCache_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_CustomEvent(event);
}

bool QNetworkDiskCache_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QNetworkDiskCache_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QNetworkDiskCache_Delete(QNetworkDiskCache* self) {
	delete self;
}

