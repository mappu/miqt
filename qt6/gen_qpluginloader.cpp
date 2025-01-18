#include <QChildEvent>
#include <QEvent>
#include <QJsonObject>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPluginLoader>
#include <QStaticPlugin>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpluginloader.h>
#include "gen_qpluginloader.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QPluginLoader_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QPluginLoader_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPluginLoader_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPluginLoader_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPluginLoader_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPluginLoader_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPluginLoader_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPluginLoader final : public QPluginLoader {
public:

	MiqtVirtualQPluginLoader(): QPluginLoader() {};
	MiqtVirtualQPluginLoader(const QString& fileName): QPluginLoader(fileName) {};
	MiqtVirtualQPluginLoader(QObject* parent): QPluginLoader(parent) {};
	MiqtVirtualQPluginLoader(const QString& fileName, QObject* parent): QPluginLoader(fileName, parent) {};

	virtual ~MiqtVirtualQPluginLoader() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QPluginLoader::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPluginLoader_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QPluginLoader::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QPluginLoader::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPluginLoader_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QPluginLoader::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QPluginLoader::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPluginLoader_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QPluginLoader::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QPluginLoader::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPluginLoader_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QPluginLoader::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QPluginLoader::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPluginLoader_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QPluginLoader::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QPluginLoader::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPluginLoader_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QPluginLoader::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QPluginLoader::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPluginLoader_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QPluginLoader::disconnectNotify(*signal);

	}

};

QPluginLoader* QPluginLoader_new() {
	return new MiqtVirtualQPluginLoader();
}

QPluginLoader* QPluginLoader_new2(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQPluginLoader(fileName_QString);
}

QPluginLoader* QPluginLoader_new3(QObject* parent) {
	return new MiqtVirtualQPluginLoader(parent);
}

QPluginLoader* QPluginLoader_new4(struct miqt_string fileName, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQPluginLoader(fileName_QString, parent);
}

void QPluginLoader_virtbase(QPluginLoader* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QPluginLoader_MetaObject(const QPluginLoader* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPluginLoader_Metacast(QPluginLoader* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPluginLoader_Tr(const char* s) {
	QString _ret = QPluginLoader::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QPluginLoader_Instance(QPluginLoader* self) {
	return self->instance();
}

QJsonObject* QPluginLoader_MetaData(const QPluginLoader* self) {
	return new QJsonObject(self->metaData());
}

struct miqt_array /* of QObject* */  QPluginLoader_StaticInstances() {
	QObjectList _ret = QPluginLoader::staticInstances();
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

struct miqt_array /* of QStaticPlugin* */  QPluginLoader_StaticPlugins() {
	QList<QStaticPlugin> _ret = QPluginLoader::staticPlugins();
	// Convert QList<> from C++ memory to manually-managed C memory
	QStaticPlugin** _arr = static_cast<QStaticPlugin**>(malloc(sizeof(QStaticPlugin*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QStaticPlugin(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QPluginLoader_Load(QPluginLoader* self) {
	return self->load();
}

bool QPluginLoader_Unload(QPluginLoader* self) {
	return self->unload();
}

bool QPluginLoader_IsLoaded(const QPluginLoader* self) {
	return self->isLoaded();
}

void QPluginLoader_SetFileName(QPluginLoader* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

struct miqt_string QPluginLoader_FileName(const QPluginLoader* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPluginLoader_ErrorString(const QPluginLoader* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPluginLoader_SetLoadHints(QPluginLoader* self, int loadHints) {
	self->setLoadHints(static_cast<QLibrary::LoadHints>(loadHints));
}

int QPluginLoader_LoadHints(const QPluginLoader* self) {
	QLibrary::LoadHints _ret = self->loadHints();
	return static_cast<int>(_ret);
}

struct miqt_string QPluginLoader_Tr2(const char* s, const char* c) {
	QString _ret = QPluginLoader::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPluginLoader_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPluginLoader::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPluginLoader_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQPluginLoader* self_cast = dynamic_cast<MiqtVirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QPluginLoader_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPluginLoader*)(self) )->virtualbase_Event(event);
}

bool QPluginLoader_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPluginLoader* self_cast = dynamic_cast<MiqtVirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QPluginLoader_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPluginLoader*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QPluginLoader_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPluginLoader* self_cast = dynamic_cast<MiqtVirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QPluginLoader_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPluginLoader*)(self) )->virtualbase_TimerEvent(event);
}

bool QPluginLoader_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQPluginLoader* self_cast = dynamic_cast<MiqtVirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QPluginLoader_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPluginLoader*)(self) )->virtualbase_ChildEvent(event);
}

bool QPluginLoader_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQPluginLoader* self_cast = dynamic_cast<MiqtVirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QPluginLoader_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPluginLoader*)(self) )->virtualbase_CustomEvent(event);
}

bool QPluginLoader_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPluginLoader* self_cast = dynamic_cast<MiqtVirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QPluginLoader_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPluginLoader*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QPluginLoader_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPluginLoader* self_cast = dynamic_cast<MiqtVirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QPluginLoader_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPluginLoader*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QPluginLoader_Delete(QPluginLoader* self) {
	delete self;
}

