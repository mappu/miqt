#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QJSEngine>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <qqmlapplicationengine.h>
#include "gen_qqmlapplicationengine.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QQmlApplicationEngine_objectCreated(intptr_t, QObject*, QUrl*);
void miqt_exec_callback_QQmlApplicationEngine_objectCreationFailed(intptr_t, QUrl*);
bool miqt_exec_callback_QQmlApplicationEngine_event(QQmlApplicationEngine*, intptr_t, QEvent*);
bool miqt_exec_callback_QQmlApplicationEngine_eventFilter(QQmlApplicationEngine*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QQmlApplicationEngine_timerEvent(QQmlApplicationEngine*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QQmlApplicationEngine_childEvent(QQmlApplicationEngine*, intptr_t, QChildEvent*);
void miqt_exec_callback_QQmlApplicationEngine_customEvent(QQmlApplicationEngine*, intptr_t, QEvent*);
void miqt_exec_callback_QQmlApplicationEngine_connectNotify(QQmlApplicationEngine*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QQmlApplicationEngine_disconnectNotify(QQmlApplicationEngine*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQQmlApplicationEngine final : public QQmlApplicationEngine {
public:

	MiqtVirtualQQmlApplicationEngine(): QQmlApplicationEngine() {};
	MiqtVirtualQQmlApplicationEngine(const QUrl& url): QQmlApplicationEngine(url) {};
	MiqtVirtualQQmlApplicationEngine(const QString& filePath): QQmlApplicationEngine(filePath) {};
	MiqtVirtualQQmlApplicationEngine(QObject* parent): QQmlApplicationEngine(parent) {};
	MiqtVirtualQQmlApplicationEngine(const QUrl& url, QObject* parent): QQmlApplicationEngine(url, parent) {};
	MiqtVirtualQQmlApplicationEngine(const QString& filePath, QObject* parent): QQmlApplicationEngine(filePath, parent) {};

	virtual ~MiqtVirtualQQmlApplicationEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QQmlApplicationEngine::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QQmlApplicationEngine_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QQmlApplicationEngine_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QQmlApplicationEngine::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QQmlApplicationEngine_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QQmlApplicationEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QQmlApplicationEngine::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QQmlApplicationEngine_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QQmlApplicationEngine_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QQmlApplicationEngine::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QQmlApplicationEngine_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QQmlApplicationEngine_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QQmlApplicationEngine::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QQmlApplicationEngine_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QQmlApplicationEngine_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QQmlApplicationEngine::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QQmlApplicationEngine_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QQmlApplicationEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QQmlApplicationEngine::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QQmlApplicationEngine_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QQmlApplicationEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QQmlApplicationEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlApplicationEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlApplicationEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QQmlApplicationEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QQmlApplicationEngine* QQmlApplicationEngine_new() {
	return new MiqtVirtualQQmlApplicationEngine();
}

QQmlApplicationEngine* QQmlApplicationEngine_new2(QUrl* url) {
	return new MiqtVirtualQQmlApplicationEngine(*url);
}

QQmlApplicationEngine* QQmlApplicationEngine_new3(struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	return new MiqtVirtualQQmlApplicationEngine(filePath_QString);
}

QQmlApplicationEngine* QQmlApplicationEngine_new4(QObject* parent) {
	return new MiqtVirtualQQmlApplicationEngine(parent);
}

QQmlApplicationEngine* QQmlApplicationEngine_new5(QUrl* url, QObject* parent) {
	return new MiqtVirtualQQmlApplicationEngine(*url, parent);
}

QQmlApplicationEngine* QQmlApplicationEngine_new6(struct miqt_string filePath, QObject* parent) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	return new MiqtVirtualQQmlApplicationEngine(filePath_QString, parent);
}

void QQmlApplicationEngine_virtbase(QQmlApplicationEngine* src, QQmlEngine** outptr_QQmlEngine) {
	*outptr_QQmlEngine = static_cast<QQmlEngine*>(src);
}

QMetaObject* QQmlApplicationEngine_metaObject(const QQmlApplicationEngine* self) {
	return (QMetaObject*) self->metaObject();
}

void* QQmlApplicationEngine_metacast(QQmlApplicationEngine* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QQmlApplicationEngine_tr(const char* s) {
	QString _ret = QQmlApplicationEngine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QObject* */  QQmlApplicationEngine_rootObjects(const QQmlApplicationEngine* self) {
	QList<QObject *> _ret = self->rootObjects();
	// Convert QList<> from C++ memory to manually-managed C memory
	QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QQmlApplicationEngine_load(QQmlApplicationEngine* self, QUrl* url) {
	self->load(*url);
}

void QQmlApplicationEngine_loadWithFilePath(QQmlApplicationEngine* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->load(filePath_QString);
}

void QQmlApplicationEngine_setInitialProperties(QQmlApplicationEngine* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialProperties) {
	QVariantMap initialProperties_QMap;
	struct miqt_string* initialProperties_karr = static_cast<struct miqt_string*>(initialProperties.keys);
	QVariant** initialProperties_varr = static_cast<QVariant**>(initialProperties.values);
	for(size_t i = 0; i < initialProperties.len; ++i) {
		QString initialProperties_karr_i_QString = QString::fromUtf8(initialProperties_karr[i].data, initialProperties_karr[i].len);
		initialProperties_QMap[initialProperties_karr_i_QString] = *(initialProperties_varr[i]);
	}
	self->setInitialProperties(initialProperties_QMap);
}

void QQmlApplicationEngine_setExtraFileSelectors(QQmlApplicationEngine* self, struct miqt_array /* of struct miqt_string */  extraFileSelectors) {
	QStringList extraFileSelectors_QList;
	extraFileSelectors_QList.reserve(extraFileSelectors.len);
	struct miqt_string* extraFileSelectors_arr = static_cast<struct miqt_string*>(extraFileSelectors.data);
	for(size_t i = 0; i < extraFileSelectors.len; ++i) {
		QString extraFileSelectors_arr_i_QString = QString::fromUtf8(extraFileSelectors_arr[i].data, extraFileSelectors_arr[i].len);
		extraFileSelectors_QList.push_back(extraFileSelectors_arr_i_QString);
	}
	self->setExtraFileSelectors(extraFileSelectors_QList);
}

void QQmlApplicationEngine_loadData(QQmlApplicationEngine* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->loadData(data_QByteArray);
}

void QQmlApplicationEngine_objectCreated(QQmlApplicationEngine* self, QObject* object, QUrl* url) {
	self->objectCreated(object, *url);
}

void QQmlApplicationEngine_connect_objectCreated(QQmlApplicationEngine* self, intptr_t slot) {
	MiqtVirtualQQmlApplicationEngine::connect(self, static_cast<void (QQmlApplicationEngine::*)(QObject*, const QUrl&)>(&QQmlApplicationEngine::objectCreated), self, [=](QObject* object, const QUrl& url) {
		QObject* sigval1 = object;
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval2 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QQmlApplicationEngine_objectCreated(slot, sigval1, sigval2);
	});
}

void QQmlApplicationEngine_objectCreationFailed(QQmlApplicationEngine* self, QUrl* url) {
	self->objectCreationFailed(*url);
}

void QQmlApplicationEngine_connect_objectCreationFailed(QQmlApplicationEngine* self, intptr_t slot) {
	MiqtVirtualQQmlApplicationEngine::connect(self, static_cast<void (QQmlApplicationEngine::*)(const QUrl&)>(&QQmlApplicationEngine::objectCreationFailed), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QQmlApplicationEngine_objectCreationFailed(slot, sigval1);
	});
}

struct miqt_string QQmlApplicationEngine_tr2(const char* s, const char* c) {
	QString _ret = QQmlApplicationEngine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlApplicationEngine_tr3(const char* s, const char* c, int n) {
	QString _ret = QQmlApplicationEngine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QQmlApplicationEngine_loadData2(QQmlApplicationEngine* self, struct miqt_string data, QUrl* url) {
	QByteArray data_QByteArray(data.data, data.len);
	self->loadData(data_QByteArray, *url);
}

bool QQmlApplicationEngine_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQQmlApplicationEngine* self_cast = dynamic_cast<MiqtVirtualQQmlApplicationEngine*>( (QQmlApplicationEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QQmlApplicationEngine_virtualbase_event(void* self, QEvent* param1) {

	return ( (MiqtVirtualQQmlApplicationEngine*)(self) )->QQmlApplicationEngine::event(param1);

}

bool QQmlApplicationEngine_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQQmlApplicationEngine* self_cast = dynamic_cast<MiqtVirtualQQmlApplicationEngine*>( (QQmlApplicationEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QQmlApplicationEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQQmlApplicationEngine*)(self) )->QQmlApplicationEngine::eventFilter(watched, event);

}

bool QQmlApplicationEngine_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlApplicationEngine* self_cast = dynamic_cast<MiqtVirtualQQmlApplicationEngine*>( (QQmlApplicationEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QQmlApplicationEngine_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQQmlApplicationEngine*)(self) )->QQmlApplicationEngine::timerEvent(event);

}

bool QQmlApplicationEngine_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlApplicationEngine* self_cast = dynamic_cast<MiqtVirtualQQmlApplicationEngine*>( (QQmlApplicationEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QQmlApplicationEngine_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQQmlApplicationEngine*)(self) )->QQmlApplicationEngine::childEvent(event);

}

bool QQmlApplicationEngine_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlApplicationEngine* self_cast = dynamic_cast<MiqtVirtualQQmlApplicationEngine*>( (QQmlApplicationEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QQmlApplicationEngine_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQQmlApplicationEngine*)(self) )->QQmlApplicationEngine::customEvent(event);

}

bool QQmlApplicationEngine_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQQmlApplicationEngine* self_cast = dynamic_cast<MiqtVirtualQQmlApplicationEngine*>( (QQmlApplicationEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QQmlApplicationEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQQmlApplicationEngine*)(self) )->QQmlApplicationEngine::connectNotify(*signal);

}

bool QQmlApplicationEngine_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQQmlApplicationEngine* self_cast = dynamic_cast<MiqtVirtualQQmlApplicationEngine*>( (QQmlApplicationEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QQmlApplicationEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQQmlApplicationEngine*)(self) )->QQmlApplicationEngine::disconnectNotify(*signal);

}

QObject* QQmlApplicationEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlApplicationEngine* self_cast = dynamic_cast<MiqtVirtualQQmlApplicationEngine*>( (QQmlApplicationEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QQmlApplicationEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlApplicationEngine* self_cast = dynamic_cast<MiqtVirtualQQmlApplicationEngine*>( (QQmlApplicationEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QQmlApplicationEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQQmlApplicationEngine* self_cast = dynamic_cast<MiqtVirtualQQmlApplicationEngine*>( (QQmlApplicationEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QQmlApplicationEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQQmlApplicationEngine* self_cast = dynamic_cast<MiqtVirtualQQmlApplicationEngine*>( (QQmlApplicationEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QQmlApplicationEngine_delete(QQmlApplicationEngine* self) {
	delete self;
}

