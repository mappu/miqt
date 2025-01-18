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

bool miqt_exec_callback_QPictureFormatPlugin_LoadPicture(void*, intptr_t, struct miqt_string, struct miqt_string, QPicture*);
bool miqt_exec_callback_QPictureFormatPlugin_SavePicture(void*, intptr_t, struct miqt_string, struct miqt_string, QPicture*);
bool miqt_exec_callback_QPictureFormatPlugin_InstallIOHandler(void*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QPictureFormatPlugin_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QPictureFormatPlugin_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPictureFormatPlugin_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPictureFormatPlugin_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPictureFormatPlugin_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPictureFormatPlugin_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPictureFormatPlugin_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPictureFormatPlugin final : public QPictureFormatPlugin {
public:

	MiqtVirtualQPictureFormatPlugin(): QPictureFormatPlugin() {};
	MiqtVirtualQPictureFormatPlugin(QObject* parent): QPictureFormatPlugin(parent) {};

	virtual ~MiqtVirtualQPictureFormatPlugin() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LoadPicture = 0;

	// Subclass to allow providing a Go implementation
	virtual bool loadPicture(const QString& format, const QString& filename, QPicture* pic) override {
		if (handle__LoadPicture == 0) {
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

		bool callback_return_value = miqt_exec_callback_QPictureFormatPlugin_LoadPicture(this, handle__LoadPicture, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_LoadPicture(struct miqt_string format, struct miqt_string filename, QPicture* pic) {
		QString format_QString = QString::fromUtf8(format.data, format.len);
		QString filename_QString = QString::fromUtf8(filename.data, filename.len);

		return QPictureFormatPlugin::loadPicture(format_QString, filename_QString, pic);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SavePicture = 0;

	// Subclass to allow providing a Go implementation
	virtual bool savePicture(const QString& format, const QString& filename, const QPicture& pic) override {
		if (handle__SavePicture == 0) {
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

		bool callback_return_value = miqt_exec_callback_QPictureFormatPlugin_SavePicture(this, handle__SavePicture, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SavePicture(struct miqt_string format, struct miqt_string filename, QPicture* pic) {
		QString format_QString = QString::fromUtf8(format.data, format.len);
		QString filename_QString = QString::fromUtf8(filename.data, filename.len);

		return QPictureFormatPlugin::savePicture(format_QString, filename_QString, *pic);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InstallIOHandler = 0;

	// Subclass to allow providing a Go implementation
	virtual bool installIOHandler(const QString& format) override {
		if (handle__InstallIOHandler == 0) {
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

		bool callback_return_value = miqt_exec_callback_QPictureFormatPlugin_InstallIOHandler(this, handle__InstallIOHandler, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QPictureFormatPlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPictureFormatPlugin_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QPictureFormatPlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QPictureFormatPlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPictureFormatPlugin_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QPictureFormatPlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QPictureFormatPlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPictureFormatPlugin_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QPictureFormatPlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QPictureFormatPlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPictureFormatPlugin_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QPictureFormatPlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QPictureFormatPlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPictureFormatPlugin_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QPictureFormatPlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QPictureFormatPlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPictureFormatPlugin_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QPictureFormatPlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QPictureFormatPlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPictureFormatPlugin_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QPictureFormatPlugin::disconnectNotify(*signal);

	}

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

QMetaObject* QPictureFormatPlugin_MetaObject(const QPictureFormatPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPictureFormatPlugin_Metacast(QPictureFormatPlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPictureFormatPlugin_Tr(const char* s) {
	QString _ret = QPictureFormatPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPictureFormatPlugin_TrUtf8(const char* s) {
	QString _ret = QPictureFormatPlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPictureFormatPlugin_LoadPicture(QPictureFormatPlugin* self, struct miqt_string format, struct miqt_string filename, QPicture* pic) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->loadPicture(format_QString, filename_QString, pic);
}

bool QPictureFormatPlugin_SavePicture(QPictureFormatPlugin* self, struct miqt_string format, struct miqt_string filename, QPicture* pic) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->savePicture(format_QString, filename_QString, *pic);
}

bool QPictureFormatPlugin_InstallIOHandler(QPictureFormatPlugin* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return self->installIOHandler(format_QString);
}

struct miqt_string QPictureFormatPlugin_Tr2(const char* s, const char* c) {
	QString _ret = QPictureFormatPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPictureFormatPlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPictureFormatPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPictureFormatPlugin_TrUtf82(const char* s, const char* c) {
	QString _ret = QPictureFormatPlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPictureFormatPlugin_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPictureFormatPlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPictureFormatPlugin_override_virtual_LoadPicture(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) )->handle__LoadPicture = slot;
}

bool QPictureFormatPlugin_virtualbase_LoadPicture(void* self, struct miqt_string format, struct miqt_string filename, QPicture* pic) {
	return ( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_LoadPicture(format, filename, pic);
}

void QPictureFormatPlugin_override_virtual_SavePicture(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) )->handle__SavePicture = slot;
}

bool QPictureFormatPlugin_virtualbase_SavePicture(void* self, struct miqt_string format, struct miqt_string filename, QPicture* pic) {
	return ( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_SavePicture(format, filename, pic);
}

void QPictureFormatPlugin_override_virtual_InstallIOHandler(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) )->handle__InstallIOHandler = slot;
}

void QPictureFormatPlugin_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) )->handle__Event = slot;
}

bool QPictureFormatPlugin_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_Event(event);
}

void QPictureFormatPlugin_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) )->handle__EventFilter = slot;
}

bool QPictureFormatPlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_EventFilter(watched, event);
}

void QPictureFormatPlugin_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) )->handle__TimerEvent = slot;
}

void QPictureFormatPlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_TimerEvent(event);
}

void QPictureFormatPlugin_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) )->handle__ChildEvent = slot;
}

void QPictureFormatPlugin_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_ChildEvent(event);
}

void QPictureFormatPlugin_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) )->handle__CustomEvent = slot;
}

void QPictureFormatPlugin_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_CustomEvent(event);
}

void QPictureFormatPlugin_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) )->handle__ConnectNotify = slot;
}

void QPictureFormatPlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_ConnectNotify(signal);
}

void QPictureFormatPlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPictureFormatPlugin*>( (QPictureFormatPlugin*)(self) )->handle__DisconnectNotify = slot;
}

void QPictureFormatPlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPictureFormatPlugin*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QPictureFormatPlugin_Delete(QPictureFormatPlugin* self) {
	delete self;
}

