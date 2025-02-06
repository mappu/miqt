#include <QChildEvent>
#include <QEvent>
#include <QLibrary>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qlibrary.h>
#include "gen_qlibrary.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QLibrary_event(QLibrary*, intptr_t, QEvent*);
bool miqt_exec_callback_QLibrary_eventFilter(QLibrary*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QLibrary_timerEvent(QLibrary*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QLibrary_childEvent(QLibrary*, intptr_t, QChildEvent*);
void miqt_exec_callback_QLibrary_customEvent(QLibrary*, intptr_t, QEvent*);
void miqt_exec_callback_QLibrary_connectNotify(QLibrary*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QLibrary_disconnectNotify(QLibrary*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQLibrary final : public QLibrary {
public:

	MiqtVirtualQLibrary(): QLibrary() {};
	MiqtVirtualQLibrary(const QString& fileName): QLibrary(fileName) {};
	MiqtVirtualQLibrary(const QString& fileName, int verNum): QLibrary(fileName, verNum) {};
	MiqtVirtualQLibrary(const QString& fileName, const QString& version): QLibrary(fileName, version) {};
	MiqtVirtualQLibrary(QObject* parent): QLibrary(parent) {};
	MiqtVirtualQLibrary(const QString& fileName, QObject* parent): QLibrary(fileName, parent) {};
	MiqtVirtualQLibrary(const QString& fileName, int verNum, QObject* parent): QLibrary(fileName, verNum, parent) {};
	MiqtVirtualQLibrary(const QString& fileName, const QString& version, QObject* parent): QLibrary(fileName, version, parent) {};

	virtual ~MiqtVirtualQLibrary() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QLibrary::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QLibrary_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QLibrary::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QLibrary::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QLibrary_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QLibrary::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QLibrary::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QLibrary_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QLibrary::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QLibrary::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QLibrary_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QLibrary::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QLibrary::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLibrary_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QLibrary::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QLibrary::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLibrary_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QLibrary::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QLibrary::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLibrary_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QLibrary::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QLibrary_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QLibrary_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QLibrary_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QLibrary_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QLibrary* QLibrary_new() {
	return new MiqtVirtualQLibrary();
}

QLibrary* QLibrary_new2(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQLibrary(fileName_QString);
}

QLibrary* QLibrary_new3(struct miqt_string fileName, int verNum) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQLibrary(fileName_QString, static_cast<int>(verNum));
}

QLibrary* QLibrary_new4(struct miqt_string fileName, struct miqt_string version) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString version_QString = QString::fromUtf8(version.data, version.len);
	return new MiqtVirtualQLibrary(fileName_QString, version_QString);
}

QLibrary* QLibrary_new5(QObject* parent) {
	return new MiqtVirtualQLibrary(parent);
}

QLibrary* QLibrary_new6(struct miqt_string fileName, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQLibrary(fileName_QString, parent);
}

QLibrary* QLibrary_new7(struct miqt_string fileName, int verNum, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQLibrary(fileName_QString, static_cast<int>(verNum), parent);
}

QLibrary* QLibrary_new8(struct miqt_string fileName, struct miqt_string version, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString version_QString = QString::fromUtf8(version.data, version.len);
	return new MiqtVirtualQLibrary(fileName_QString, version_QString, parent);
}

void QLibrary_virtbase(QLibrary* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QLibrary_metaObject(const QLibrary* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLibrary_metacast(QLibrary* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLibrary_tr(const char* s) {
	QString _ret = QLibrary::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLibrary_load(QLibrary* self) {
	return self->load();
}

bool QLibrary_unload(QLibrary* self) {
	return self->unload();
}

bool QLibrary_isLoaded(const QLibrary* self) {
	return self->isLoaded();
}

bool QLibrary_isLibrary(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QLibrary::isLibrary(fileName_QString);
}

void QLibrary_setFileName(QLibrary* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

struct miqt_string QLibrary_fileName(const QLibrary* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLibrary_setFileNameAndVersion(QLibrary* self, struct miqt_string fileName, int verNum) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileNameAndVersion(fileName_QString, static_cast<int>(verNum));
}

void QLibrary_setFileNameAndVersion2(QLibrary* self, struct miqt_string fileName, struct miqt_string version) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString version_QString = QString::fromUtf8(version.data, version.len);
	self->setFileNameAndVersion(fileName_QString, version_QString);
}

struct miqt_string QLibrary_errorString(const QLibrary* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLibrary_setLoadHints(QLibrary* self, int hints) {
	self->setLoadHints(static_cast<QLibrary::LoadHints>(hints));
}

int QLibrary_loadHints(const QLibrary* self) {
	QLibrary::LoadHints _ret = self->loadHints();
	return static_cast<int>(_ret);
}

struct miqt_string QLibrary_tr2(const char* s, const char* c) {
	QString _ret = QLibrary::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLibrary_tr3(const char* s, const char* c, int n) {
	QString _ret = QLibrary::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLibrary_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQLibrary* self_cast = dynamic_cast<MiqtVirtualQLibrary*>( (QLibrary*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QLibrary_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQLibrary*)(self) )->virtualbase_event(event);
}

bool QLibrary_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQLibrary* self_cast = dynamic_cast<MiqtVirtualQLibrary*>( (QLibrary*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QLibrary_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQLibrary*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QLibrary_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQLibrary* self_cast = dynamic_cast<MiqtVirtualQLibrary*>( (QLibrary*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QLibrary_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQLibrary*)(self) )->virtualbase_timerEvent(event);
}

bool QLibrary_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQLibrary* self_cast = dynamic_cast<MiqtVirtualQLibrary*>( (QLibrary*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QLibrary_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQLibrary*)(self) )->virtualbase_childEvent(event);
}

bool QLibrary_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQLibrary* self_cast = dynamic_cast<MiqtVirtualQLibrary*>( (QLibrary*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QLibrary_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQLibrary*)(self) )->virtualbase_customEvent(event);
}

bool QLibrary_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLibrary* self_cast = dynamic_cast<MiqtVirtualQLibrary*>( (QLibrary*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QLibrary_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLibrary*)(self) )->virtualbase_connectNotify(signal);
}

bool QLibrary_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLibrary* self_cast = dynamic_cast<MiqtVirtualQLibrary*>( (QLibrary*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QLibrary_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLibrary*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QLibrary_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLibrary* self_cast = dynamic_cast<MiqtVirtualQLibrary*>( (QLibrary*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QLibrary_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLibrary* self_cast = dynamic_cast<MiqtVirtualQLibrary*>( (QLibrary*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QLibrary_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQLibrary* self_cast = dynamic_cast<MiqtVirtualQLibrary*>( (QLibrary*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QLibrary_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQLibrary* self_cast = dynamic_cast<MiqtVirtualQLibrary*>( (QLibrary*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QLibrary_delete(QLibrary* self) {
	delete self;
}

