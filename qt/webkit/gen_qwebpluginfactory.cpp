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
#include <QWebPluginFactory>
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebPluginFactory__ExtensionOption
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebPluginFactory__ExtensionReturn
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebPluginFactory__MimeType
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebPluginFactory__Plugin
#include <qwebpluginfactory.h>
#include "gen_qwebpluginfactory.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_array /* of QWebPluginFactory__Plugin* */  miqt_exec_callback_QWebPluginFactory_plugins(const QWebPluginFactory*, intptr_t);
void miqt_exec_callback_QWebPluginFactory_refreshPlugins(QWebPluginFactory*, intptr_t);
QObject* miqt_exec_callback_QWebPluginFactory_create(const QWebPluginFactory*, intptr_t, struct miqt_string, QUrl*, struct miqt_array /* of struct miqt_string */ , struct miqt_array /* of struct miqt_string */ );
bool miqt_exec_callback_QWebPluginFactory_extension(QWebPluginFactory*, intptr_t, int, QWebPluginFactory__ExtensionOption*, QWebPluginFactory__ExtensionReturn*);
bool miqt_exec_callback_QWebPluginFactory_supportsExtension(const QWebPluginFactory*, intptr_t, int);
bool miqt_exec_callback_QWebPluginFactory_event(QWebPluginFactory*, intptr_t, QEvent*);
bool miqt_exec_callback_QWebPluginFactory_eventFilter(QWebPluginFactory*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebPluginFactory_timerEvent(QWebPluginFactory*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebPluginFactory_childEvent(QWebPluginFactory*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebPluginFactory_customEvent(QWebPluginFactory*, intptr_t, QEvent*);
void miqt_exec_callback_QWebPluginFactory_connectNotify(QWebPluginFactory*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebPluginFactory_disconnectNotify(QWebPluginFactory*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebPluginFactory final : public QWebPluginFactory {
public:

	MiqtVirtualQWebPluginFactory(): QWebPluginFactory() {};
	MiqtVirtualQWebPluginFactory(QObject* parent): QWebPluginFactory(parent) {};

	virtual ~MiqtVirtualQWebPluginFactory() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__plugins = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QWebPluginFactory::Plugin> plugins() const override {
		if (handle__plugins == 0) {
			return QList<QWebPluginFactory::Plugin>(); // Pure virtual, there is no base we can call
		}
		

		struct miqt_array /* of QWebPluginFactory__Plugin* */  callback_return_value = miqt_exec_callback_QWebPluginFactory_plugins(this, handle__plugins);
		QList<QWebPluginFactory::Plugin> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QWebPluginFactory__Plugin** callback_return_value_arr = static_cast<QWebPluginFactory__Plugin**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__refreshPlugins = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshPlugins() override {
		if (handle__refreshPlugins == 0) {
			QWebPluginFactory::refreshPlugins();
			return;
		}
		

		miqt_exec_callback_QWebPluginFactory_refreshPlugins(this, handle__refreshPlugins);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_refreshPlugins() {

		QWebPluginFactory::refreshPlugins();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__create = 0;

	// Subclass to allow providing a Go implementation
	virtual QObject* create(const QString& mimeType, const QUrl& param2, const QStringList& argumentNames, const QStringList& argumentValues) const override {
		if (handle__create == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		const QString mimeType_ret = mimeType;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray mimeType_b = mimeType_ret.toUtf8();
		struct miqt_string mimeType_ms;
		mimeType_ms.len = mimeType_b.length();
		mimeType_ms.data = static_cast<char*>(malloc(mimeType_ms.len));
		memcpy(mimeType_ms.data, mimeType_b.data(), mimeType_ms.len);
		struct miqt_string sigval1 = mimeType_ms;
		const QUrl& param2_ret = param2;
		// Cast returned reference into pointer
		QUrl* sigval2 = const_cast<QUrl*>(&param2_ret);
		const QStringList& argumentNames_ret = argumentNames;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* argumentNames_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * argumentNames_ret.length()));
		for (size_t i = 0, e = argumentNames_ret.length(); i < e; ++i) {
			QString argumentNames_lv_ret = argumentNames_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray argumentNames_lv_b = argumentNames_lv_ret.toUtf8();
			struct miqt_string argumentNames_lv_ms;
			argumentNames_lv_ms.len = argumentNames_lv_b.length();
			argumentNames_lv_ms.data = static_cast<char*>(malloc(argumentNames_lv_ms.len));
			memcpy(argumentNames_lv_ms.data, argumentNames_lv_b.data(), argumentNames_lv_ms.len);
			argumentNames_arr[i] = argumentNames_lv_ms;
		}
		struct miqt_array argumentNames_out;
		argumentNames_out.len = argumentNames_ret.length();
		argumentNames_out.data = static_cast<void*>(argumentNames_arr);
		struct miqt_array /* of struct miqt_string */  sigval3 = argumentNames_out;
		const QStringList& argumentValues_ret = argumentValues;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* argumentValues_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * argumentValues_ret.length()));
		for (size_t i = 0, e = argumentValues_ret.length(); i < e; ++i) {
			QString argumentValues_lv_ret = argumentValues_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray argumentValues_lv_b = argumentValues_lv_ret.toUtf8();
			struct miqt_string argumentValues_lv_ms;
			argumentValues_lv_ms.len = argumentValues_lv_b.length();
			argumentValues_lv_ms.data = static_cast<char*>(malloc(argumentValues_lv_ms.len));
			memcpy(argumentValues_lv_ms.data, argumentValues_lv_b.data(), argumentValues_lv_ms.len);
			argumentValues_arr[i] = argumentValues_lv_ms;
		}
		struct miqt_array argumentValues_out;
		argumentValues_out.len = argumentValues_ret.length();
		argumentValues_out.data = static_cast<void*>(argumentValues_arr);
		struct miqt_array /* of struct miqt_string */  sigval4 = argumentValues_out;

		QObject* callback_return_value = miqt_exec_callback_QWebPluginFactory_create(this, handle__create, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool extension(QWebPluginFactory::Extension extension, const QWebPluginFactory::ExtensionOption* option, QWebPluginFactory::ExtensionReturn* output) override {
		if (handle__extension == 0) {
			return QWebPluginFactory::extension(extension, option, output);
		}
		
		QWebPluginFactory::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		QWebPluginFactory__ExtensionOption* sigval2 = (QWebPluginFactory__ExtensionOption*) option;
		QWebPluginFactory__ExtensionReturn* sigval3 = output;

		bool callback_return_value = miqt_exec_callback_QWebPluginFactory_extension(this, handle__extension, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_extension(int extension, QWebPluginFactory__ExtensionOption* option, QWebPluginFactory__ExtensionReturn* output) {

		return QWebPluginFactory::extension(static_cast<QWebPluginFactory::Extension>(extension), option, output);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QWebPluginFactory::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QWebPluginFactory::supportsExtension(extension);
		}
		
		QWebPluginFactory::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QWebPluginFactory_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QWebPluginFactory::supportsExtension(static_cast<QWebPluginFactory::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QWebPluginFactory::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWebPluginFactory_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QWebPluginFactory::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWebPluginFactory::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebPluginFactory_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QWebPluginFactory::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWebPluginFactory::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebPluginFactory_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QWebPluginFactory::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWebPluginFactory::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebPluginFactory_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QWebPluginFactory::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWebPluginFactory::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebPluginFactory_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QWebPluginFactory::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWebPluginFactory::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebPluginFactory_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QWebPluginFactory::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWebPluginFactory::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebPluginFactory_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QWebPluginFactory::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QWebPluginFactory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWebPluginFactory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWebPluginFactory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWebPluginFactory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWebPluginFactory* QWebPluginFactory_new() {
	return new MiqtVirtualQWebPluginFactory();
}

QWebPluginFactory* QWebPluginFactory_new2(QObject* parent) {
	return new MiqtVirtualQWebPluginFactory(parent);
}

void QWebPluginFactory_virtbase(QWebPluginFactory* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebPluginFactory_metaObject(const QWebPluginFactory* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebPluginFactory_metacast(QWebPluginFactory* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebPluginFactory_tr(const char* s) {
	QString _ret = QWebPluginFactory::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPluginFactory_trUtf8(const char* s) {
	QString _ret = QWebPluginFactory::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QWebPluginFactory__Plugin* */  QWebPluginFactory_plugins(const QWebPluginFactory* self) {
	QList<QWebPluginFactory::Plugin> _ret = self->plugins();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWebPluginFactory__Plugin** _arr = static_cast<QWebPluginFactory__Plugin**>(malloc(sizeof(QWebPluginFactory__Plugin*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QWebPluginFactory::Plugin(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QWebPluginFactory_refreshPlugins(QWebPluginFactory* self) {
	self->refreshPlugins();
}

QObject* QWebPluginFactory_create(const QWebPluginFactory* self, struct miqt_string mimeType, QUrl* param2, struct miqt_array /* of struct miqt_string */  argumentNames, struct miqt_array /* of struct miqt_string */  argumentValues) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	QStringList argumentNames_QList;
	argumentNames_QList.reserve(argumentNames.len);
	struct miqt_string* argumentNames_arr = static_cast<struct miqt_string*>(argumentNames.data);
	for(size_t i = 0; i < argumentNames.len; ++i) {
		QString argumentNames_arr_i_QString = QString::fromUtf8(argumentNames_arr[i].data, argumentNames_arr[i].len);
		argumentNames_QList.push_back(argumentNames_arr_i_QString);
	}
	QStringList argumentValues_QList;
	argumentValues_QList.reserve(argumentValues.len);
	struct miqt_string* argumentValues_arr = static_cast<struct miqt_string*>(argumentValues.data);
	for(size_t i = 0; i < argumentValues.len; ++i) {
		QString argumentValues_arr_i_QString = QString::fromUtf8(argumentValues_arr[i].data, argumentValues_arr[i].len);
		argumentValues_QList.push_back(argumentValues_arr_i_QString);
	}
	return self->create(mimeType_QString, *param2, argumentNames_QList, argumentValues_QList);
}

bool QWebPluginFactory_extension(QWebPluginFactory* self, int extension, QWebPluginFactory__ExtensionOption* option, QWebPluginFactory__ExtensionReturn* output) {
	return self->extension(static_cast<QWebPluginFactory::Extension>(extension), option, output);
}

bool QWebPluginFactory_supportsExtension(const QWebPluginFactory* self, int extension) {
	return self->supportsExtension(static_cast<QWebPluginFactory::Extension>(extension));
}

struct miqt_string QWebPluginFactory_tr2(const char* s, const char* c) {
	QString _ret = QWebPluginFactory::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPluginFactory_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebPluginFactory::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPluginFactory_trUtf82(const char* s, const char* c) {
	QString _ret = QWebPluginFactory::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPluginFactory_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebPluginFactory::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebPluginFactory_override_virtual_plugins(void* self, intptr_t slot) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__plugins = slot;
	return true;
}

bool QWebPluginFactory_override_virtual_refreshPlugins(void* self, intptr_t slot) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__refreshPlugins = slot;
	return true;
}

void QWebPluginFactory_virtualbase_refreshPlugins(void* self) {
	( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_refreshPlugins();
}

bool QWebPluginFactory_override_virtual_create(void* self, intptr_t slot) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__create = slot;
	return true;
}

bool QWebPluginFactory_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

bool QWebPluginFactory_virtualbase_extension(void* self, int extension, QWebPluginFactory__ExtensionOption* option, QWebPluginFactory__ExtensionReturn* output) {
	return ( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_extension(extension, option, output);
}

bool QWebPluginFactory_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QWebPluginFactory_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_supportsExtension(extension);
}

bool QWebPluginFactory_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QWebPluginFactory_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_event(event);
}

bool QWebPluginFactory_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWebPluginFactory_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QWebPluginFactory_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QWebPluginFactory_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_timerEvent(event);
}

bool QWebPluginFactory_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QWebPluginFactory_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_childEvent(event);
}

bool QWebPluginFactory_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QWebPluginFactory_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_customEvent(event);
}

bool QWebPluginFactory_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QWebPluginFactory_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_connectNotify(signal);
}

bool QWebPluginFactory_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWebPluginFactory_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QWebPluginFactory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QWebPluginFactory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QWebPluginFactory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QWebPluginFactory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWebPluginFactory* self_cast = dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QWebPluginFactory_delete(QWebPluginFactory* self) {
	delete self;
}

QWebPluginFactory__MimeType* QWebPluginFactory__MimeType_new(QWebPluginFactory__MimeType* param1) {
	return new QWebPluginFactory::MimeType(*param1);
}

bool QWebPluginFactory__MimeType_operatorEqual(const QWebPluginFactory__MimeType* self, QWebPluginFactory__MimeType* other) {
	return (*self == *other);
}

bool QWebPluginFactory__MimeType_operatorNotEqual(const QWebPluginFactory__MimeType* self, QWebPluginFactory__MimeType* other) {
	return (*self != *other);
}

void QWebPluginFactory__MimeType_operatorAssign(QWebPluginFactory__MimeType* self, QWebPluginFactory__MimeType* param1) {
	self->operator=(*param1);
}

void QWebPluginFactory__MimeType_delete(QWebPluginFactory__MimeType* self) {
	delete self;
}

QWebPluginFactory__Plugin* QWebPluginFactory__Plugin_new(QWebPluginFactory__Plugin* param1) {
	return new QWebPluginFactory::Plugin(*param1);
}

void QWebPluginFactory__Plugin_operatorAssign(QWebPluginFactory__Plugin* self, QWebPluginFactory__Plugin* param1) {
	self->operator=(*param1);
}

void QWebPluginFactory__Plugin_delete(QWebPluginFactory__Plugin* self) {
	delete self;
}

void QWebPluginFactory__ExtensionOption_delete(QWebPluginFactory__ExtensionOption* self) {
	delete self;
}

void QWebPluginFactory__ExtensionReturn_delete(QWebPluginFactory__ExtensionReturn* self) {
	delete self;
}

