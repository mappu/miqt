#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPicture>
#include <QPictureFormatPlugin>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpictureformatplugin.h>
#include "gen_qpictureformatplugin.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QPictureFormatPlugin_loadPicture(QPictureFormatPlugin*, intptr_t, struct miqt_string, struct miqt_string, QPicture*);
bool miqt_exec_callback_QPictureFormatPlugin_savePicture(QPictureFormatPlugin*, intptr_t, struct miqt_string, struct miqt_string, QPicture*);
bool miqt_exec_callback_QPictureFormatPlugin_installIOHandler(QPictureFormatPlugin*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QPictureFormatPlugin_event(QPictureFormatPlugin*, intptr_t, QEvent*);
bool miqt_exec_callback_QPictureFormatPlugin_eventFilter(QPictureFormatPlugin*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPictureFormatPlugin_timerEvent(QPictureFormatPlugin*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPictureFormatPlugin_childEvent(QPictureFormatPlugin*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPictureFormatPlugin_customEvent(QPictureFormatPlugin*, intptr_t, QEvent*);
void miqt_exec_callback_QPictureFormatPlugin_connectNotify(QPictureFormatPlugin*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPictureFormatPlugin_disconnectNotify(QPictureFormatPlugin*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPictureFormatPlugin final : public QPictureFormatPlugin {
public:

	MiqtVirtualQPictureFormatPlugin(): QPictureFormatPlugin() {};
	MiqtVirtualQPictureFormatPlugin(QObject* parent): QPictureFormatPlugin(parent) {};

	virtual ~MiqtVirtualQPictureFormatPlugin() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__loadPicture = 0;

	// Subclass to allow providing a Go implementation
	virtual bool loadPicture(const QString& format, const QString& filename, QPicture* pic) override {
		if (handle__loadPicture == 0) {
			return QPictureFormatPlugin::loadPicture(format, filename, pic);
		}
		
		const QString format_ret = format;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray format_b = format_ret.toUtf8();
		struct miqt_string format_ms;
		format_ms.len = format_b.length();
		format_ms.data = static_cast<char*>(malloc(format_ms.len));
		memcpy(format_ms.data, format_b.data(), format_ms.len);
		struct miqt_string sigval1 = format_ms;
		const QString filename_ret = filename;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray filename_b = filename_ret.toUtf8();
		struct miqt_string filename_ms;
		filename_ms.len = filename_b.length();
		filename_ms.data = static_cast<char*>(malloc(filename_ms.len));
		memcpy(filename_ms.data, filename_b.data(), filename_ms.len);
		struct miqt_string sigval2 = filename_ms;
		QPicture* sigval3 = pic;

		bool callback_return_value = miqt_exec_callback_QPictureFormatPlugin_loadPicture(this, handle__loadPicture, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_loadPicture(struct miqt_string format, struct miqt_string filename, QPicture* pic) {
		QString format_QString = QString::fromUtf8(format.data, format.len);
		QString filename_QString = QString::fromUtf8(filename.data, filename.len);

		return QPictureFormatPlugin::loadPicture(format_QString, filename_QString, pic);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__savePicture = 0;

	// Subclass to allow providing a Go implementation
	virtual bool savePicture(const QString& format, const QString& filename, const QPicture& pic) override {
		if (handle__savePicture == 0) {
			return QPictureFormatPlugin::savePicture(format, filename, pic);
		}
		
		const QString format_ret = format;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray format_b = format_ret.toUtf8();
		struct miqt_string format_ms;
		format_ms.len = format_b.length();
		format_ms.data = static_cast<char*>(malloc(format_ms.len));
		memcpy(format_ms.data, format_b.data(), format_ms.len);
		struct miqt_string sigval1 = format_ms;
		const QString filename_ret = filename;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray filename_b = filename_ret.toUtf8();
		struct miqt_string filename_ms;
		filename_ms.len = filename_b.length();
		filename_ms.data = static_cast<char*>(malloc(filename_ms.len));
		memcpy(filename_ms.data, filename_b.data(), filename_ms.len);
		struct miqt_string sigval2 = filename_ms;
		const QPicture& pic_ret = pic;
		// Cast returned reference into pointer
		QPicture* sigval3 = const_cast<QPicture*>(&pic_ret);

		bool callback_return_value = miqt_exec_callback_QPictureFormatPlugin_savePicture(this, handle__savePicture, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_savePicture(struct miqt_string format, struct miqt_string filename, QPicture* pic) {
		QString format_QString = QString::fromUtf8(format.data, format.len);
		QString filename_QString = QString::fromUtf8(filename.data, filename.len);

		return QPictureFormatPlugin::savePicture(format_QString, filename_QString, *pic);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__installIOHandler = 0;

	// Subclass to allow providing a Go implementation
	virtual bool installIOHandler(const QString& format) override {
		if (handle__installIOHandler == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		
		const QString format_ret = format;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray format_b = format_ret.toUtf8();
		struct miqt_string format_ms;
		format_ms.len = format_b.length();
		format_ms.data = static_cast<char*>(malloc(format_ms.len));
		memcpy(format_ms.data, format_b.data(), format_ms.len);
		struct miqt_string sigval1 = format_ms;

		bool callback_return_value = miqt_exec_callback_QPictureFormatPlugin_installIOHandler(this, handle__installIOHandler, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPictureFormatPlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPictureFormatPlugin_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QPictureFormatPlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPictureFormatPlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPictureFormatPlugin_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QPictureFormatPlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPictureFormatPlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPictureFormatPlugin_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QPictureFormatPlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPictureFormatPlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPictureFormatPlugin_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QPictureFormatPlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPictureFormatPlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPictureFormatPlugin_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QPictureFormatPlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPictureFormatPlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPictureFormatPlugin_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QPictureFormatPlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPictureFormatPlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPictureFormatPlugin_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QPictureFormatPlugin::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QPictureFormatPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPictureFormatPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPictureFormatPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPictureFormatPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPictureFormatPlugin* QPictureFormatPlugin_new() {
	return new MiqtVirtualQPictureFormatPlugin();
}

QPictureFormatPlugin* QPictureFormatPlugin_new2(QObject* parent) {
	return new MiqtVirtualQPictureFormatPlugin(parent);
}

void QPictureFormatPlugin_virtbase(QPictureFormatPlugin* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QPictureFormatPlugin_metaObject(const QPictureFormatPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPictureFormatPlugin_metacast(QPictureFormatPlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPictureFormatPlugin_tr(const char* s) {
	QString _ret = QPictureFormatPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPictureFormatPlugin_trUtf8(const char* s) {
	QString _ret = QPictureFormatPlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPictureFormatPlugin_loadPicture(QPictureFormatPlugin* self, struct miqt_string format, struct miqt_string filename, QPicture* pic) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->loadPicture(format_QString, filename_QString, pic);
}

bool QPictureFormatPlugin_savePicture(QPictureFormatPlugin* self, struct miqt_string format, struct miqt_string filename, QPicture* pic) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->savePicture(format_QString, filename_QString, *pic);
}

bool QPictureFormatPlugin_installIOHandler(QPictureFormatPlugin* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return self->installIOHandler(format_QString);
}

struct miqt_string QPictureFormatPlugin_tr2(const char* s, const char* c) {
	QString _ret = QPictureFormatPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPictureFormatPlugin_tr3(const char* s, const char* c, int n) {
	QString _ret = QPictureFormatPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPictureFormatPlugin_trUtf82(const char* s, const char* c) {
	QString _ret = QPictureFormatPlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPictureFormatPlugin_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPictureFormatPlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPictureFormatPlugin_override_virtual_loadPicture(void* self, intptr_t slot) {
	MiqtVirtualQPictureFormatPlugin* self_cast = dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__loadPicture = slot;
	return true;
}

bool QPictureFormatPlugin_virtualbase_loadPicture(void* self, struct miqt_string format, struct miqt_string filename, QPicture* pic) {
	return ( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_loadPicture(format, filename, pic);
}

bool QPictureFormatPlugin_override_virtual_savePicture(void* self, intptr_t slot) {
	MiqtVirtualQPictureFormatPlugin* self_cast = dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__savePicture = slot;
	return true;
}

bool QPictureFormatPlugin_virtualbase_savePicture(void* self, struct miqt_string format, struct miqt_string filename, QPicture* pic) {
	return ( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_savePicture(format, filename, pic);
}

bool QPictureFormatPlugin_override_virtual_installIOHandler(void* self, intptr_t slot) {
	MiqtVirtualQPictureFormatPlugin* self_cast = dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__installIOHandler = slot;
	return true;
}

bool QPictureFormatPlugin_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPictureFormatPlugin* self_cast = dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPictureFormatPlugin_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_event(event);
}

bool QPictureFormatPlugin_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPictureFormatPlugin* self_cast = dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPictureFormatPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QPictureFormatPlugin_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPictureFormatPlugin* self_cast = dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPictureFormatPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_timerEvent(event);
}

bool QPictureFormatPlugin_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPictureFormatPlugin* self_cast = dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPictureFormatPlugin_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_childEvent(event);
}

bool QPictureFormatPlugin_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPictureFormatPlugin* self_cast = dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPictureFormatPlugin_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_customEvent(event);
}

bool QPictureFormatPlugin_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPictureFormatPlugin* self_cast = dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPictureFormatPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_connectNotify(signal);
}

bool QPictureFormatPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPictureFormatPlugin* self_cast = dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPictureFormatPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QPictureFormatPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPictureFormatPlugin* self_cast = dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPictureFormatPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPictureFormatPlugin* self_cast = dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPictureFormatPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPictureFormatPlugin* self_cast = dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPictureFormatPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPictureFormatPlugin* self_cast = dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPictureFormatPlugin_delete(QPictureFormatPlugin* self) {
	delete self;
}

