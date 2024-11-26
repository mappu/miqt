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
#include "_cgo_export.h"

class MiqtVirtualQWebPluginFactory : public virtual QWebPluginFactory {
public:

	MiqtVirtualQWebPluginFactory(): QWebPluginFactory() {};
	MiqtVirtualQWebPluginFactory(QObject* parent): QWebPluginFactory(parent) {};

	virtual ~MiqtVirtualQWebPluginFactory() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Plugins = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QWebPluginFactory::Plugin> plugins() const override {
		if (handle__Plugins == 0) {
			return QList<QWebPluginFactory::Plugin>(); // Pure virtual, there is no base we can call
		}
		

		struct miqt_array /* of QWebPluginFactory__Plugin* */  callback_return_value = miqt_exec_callback_QWebPluginFactory_Plugins(const_cast<MiqtVirtualQWebPluginFactory*>(this), handle__Plugins);
		QList<QWebPluginFactory::Plugin> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QWebPluginFactory__Plugin** callback_return_value_arr = static_cast<QWebPluginFactory__Plugin**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshPlugins = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshPlugins() override {
		if (handle__RefreshPlugins == 0) {
			QWebPluginFactory::refreshPlugins();
			return;
		}
		

		miqt_exec_callback_QWebPluginFactory_RefreshPlugins(this, handle__RefreshPlugins);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshPlugins() {

		QWebPluginFactory::refreshPlugins();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Create = 0;

	// Subclass to allow providing a Go implementation
	virtual QObject* create(const QString& mimeType, const QUrl& param2, const QStringList& argumentNames, const QStringList& argumentValues) const override {
		if (handle__Create == 0) {
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

		QObject* callback_return_value = miqt_exec_callback_QWebPluginFactory_Create(const_cast<MiqtVirtualQWebPluginFactory*>(this), handle__Create, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool extension(QWebPluginFactory::Extension extension, const QWebPluginFactory::ExtensionOption* option, QWebPluginFactory::ExtensionReturn* output) override {
		if (handle__Extension == 0) {
			return QWebPluginFactory::extension(extension, option, output);
		}
		
		QWebPluginFactory::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		QWebPluginFactory__ExtensionOption* sigval2 = (QWebPluginFactory__ExtensionOption*) option;
		QWebPluginFactory__ExtensionReturn* sigval3 = output;

		bool callback_return_value = miqt_exec_callback_QWebPluginFactory_Extension(this, handle__Extension, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Extension(int extension, QWebPluginFactory__ExtensionOption* option, QWebPluginFactory__ExtensionReturn* output) {

		return QWebPluginFactory::extension(static_cast<QWebPluginFactory::Extension>(extension), option, output);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QWebPluginFactory::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QWebPluginFactory::supportsExtension(extension);
		}
		
		QWebPluginFactory::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QWebPluginFactory_SupportsExtension(const_cast<MiqtVirtualQWebPluginFactory*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QWebPluginFactory::supportsExtension(static_cast<QWebPluginFactory::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QWebPluginFactory::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWebPluginFactory_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QWebPluginFactory::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QWebPluginFactory::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebPluginFactory_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QWebPluginFactory::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QWebPluginFactory::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebPluginFactory_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QWebPluginFactory::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QWebPluginFactory::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebPluginFactory_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QWebPluginFactory::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QWebPluginFactory::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebPluginFactory_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QWebPluginFactory::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QWebPluginFactory::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebPluginFactory_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QWebPluginFactory::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QWebPluginFactory::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebPluginFactory_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QWebPluginFactory::disconnectNotify(*signal);

	}

};

void QWebPluginFactory_new(QWebPluginFactory** outptr_QWebPluginFactory, QObject** outptr_QObject) {
	MiqtVirtualQWebPluginFactory* ret = new MiqtVirtualQWebPluginFactory();
	*outptr_QWebPluginFactory = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QWebPluginFactory_new2(QObject* parent, QWebPluginFactory** outptr_QWebPluginFactory, QObject** outptr_QObject) {
	MiqtVirtualQWebPluginFactory* ret = new MiqtVirtualQWebPluginFactory(parent);
	*outptr_QWebPluginFactory = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QWebPluginFactory_MetaObject(const QWebPluginFactory* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebPluginFactory_Metacast(QWebPluginFactory* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebPluginFactory_Tr(const char* s) {
	QString _ret = QWebPluginFactory::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPluginFactory_TrUtf8(const char* s) {
	QString _ret = QWebPluginFactory::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QWebPluginFactory__Plugin* */  QWebPluginFactory_Plugins(const QWebPluginFactory* self) {
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

void QWebPluginFactory_RefreshPlugins(QWebPluginFactory* self) {
	self->refreshPlugins();
}

QObject* QWebPluginFactory_Create(const QWebPluginFactory* self, struct miqt_string mimeType, QUrl* param2, struct miqt_array /* of struct miqt_string */  argumentNames, struct miqt_array /* of struct miqt_string */  argumentValues) {
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

bool QWebPluginFactory_Extension(QWebPluginFactory* self, int extension, QWebPluginFactory__ExtensionOption* option, QWebPluginFactory__ExtensionReturn* output) {
	return self->extension(static_cast<QWebPluginFactory::Extension>(extension), option, output);
}

bool QWebPluginFactory_SupportsExtension(const QWebPluginFactory* self, int extension) {
	return self->supportsExtension(static_cast<QWebPluginFactory::Extension>(extension));
}

struct miqt_string QWebPluginFactory_Tr2(const char* s, const char* c) {
	QString _ret = QWebPluginFactory::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPluginFactory_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebPluginFactory::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPluginFactory_TrUtf82(const char* s, const char* c) {
	QString _ret = QWebPluginFactory::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebPluginFactory_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebPluginFactory::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebPluginFactory_override_virtual_Plugins(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) )->handle__Plugins = slot;
}

void QWebPluginFactory_override_virtual_RefreshPlugins(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) )->handle__RefreshPlugins = slot;
}

void QWebPluginFactory_virtualbase_RefreshPlugins(void* self) {
	( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_RefreshPlugins();
}

void QWebPluginFactory_override_virtual_Create(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) )->handle__Create = slot;
}

void QWebPluginFactory_override_virtual_Extension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) )->handle__Extension = slot;
}

bool QWebPluginFactory_virtualbase_Extension(void* self, int extension, QWebPluginFactory__ExtensionOption* option, QWebPluginFactory__ExtensionReturn* output) {
	return ( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_Extension(extension, option, output);
}

void QWebPluginFactory_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) )->handle__SupportsExtension = slot;
}

bool QWebPluginFactory_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_SupportsExtension(extension);
}

void QWebPluginFactory_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) )->handle__Event = slot;
}

bool QWebPluginFactory_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_Event(event);
}

void QWebPluginFactory_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) )->handle__EventFilter = slot;
}

bool QWebPluginFactory_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_EventFilter(watched, event);
}

void QWebPluginFactory_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) )->handle__TimerEvent = slot;
}

void QWebPluginFactory_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_TimerEvent(event);
}

void QWebPluginFactory_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) )->handle__ChildEvent = slot;
}

void QWebPluginFactory_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_ChildEvent(event);
}

void QWebPluginFactory_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) )->handle__CustomEvent = slot;
}

void QWebPluginFactory_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_CustomEvent(event);
}

void QWebPluginFactory_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) )->handle__ConnectNotify = slot;
}

void QWebPluginFactory_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_ConnectNotify(signal);
}

void QWebPluginFactory_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebPluginFactory*>( (QWebPluginFactory*)(self) )->handle__DisconnectNotify = slot;
}

void QWebPluginFactory_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebPluginFactory*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QWebPluginFactory_Delete(QWebPluginFactory* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQWebPluginFactory*>( self );
	} else {
		delete self;
	}
}

void QWebPluginFactory__MimeType_new(QWebPluginFactory__MimeType* param1, QWebPluginFactory__MimeType** outptr_QWebPluginFactory__MimeType) {
	QWebPluginFactory::MimeType* ret = new QWebPluginFactory::MimeType(*param1);
	*outptr_QWebPluginFactory__MimeType = ret;
}

bool QWebPluginFactory__MimeType_OperatorEqual(const QWebPluginFactory__MimeType* self, QWebPluginFactory__MimeType* other) {
	return (*self == *other);
}

bool QWebPluginFactory__MimeType_OperatorNotEqual(const QWebPluginFactory__MimeType* self, QWebPluginFactory__MimeType* other) {
	return (*self != *other);
}

void QWebPluginFactory__MimeType_OperatorAssign(QWebPluginFactory__MimeType* self, QWebPluginFactory__MimeType* param1) {
	self->operator=(*param1);
}

void QWebPluginFactory__MimeType_Delete(QWebPluginFactory__MimeType* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebPluginFactory::MimeType*>( self );
	} else {
		delete self;
	}
}

void QWebPluginFactory__Plugin_new(QWebPluginFactory__Plugin* param1, QWebPluginFactory__Plugin** outptr_QWebPluginFactory__Plugin) {
	QWebPluginFactory::Plugin* ret = new QWebPluginFactory::Plugin(*param1);
	*outptr_QWebPluginFactory__Plugin = ret;
}

void QWebPluginFactory__Plugin_OperatorAssign(QWebPluginFactory__Plugin* self, QWebPluginFactory__Plugin* param1) {
	self->operator=(*param1);
}

void QWebPluginFactory__Plugin_Delete(QWebPluginFactory__Plugin* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebPluginFactory::Plugin*>( self );
	} else {
		delete self;
	}
}

void QWebPluginFactory__ExtensionOption_Delete(QWebPluginFactory__ExtensionOption* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebPluginFactory::ExtensionOption*>( self );
	} else {
		delete self;
	}
}

void QWebPluginFactory__ExtensionReturn_Delete(QWebPluginFactory__ExtensionReturn* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebPluginFactory::ExtensionReturn*>( self );
	} else {
		delete self;
	}
}

