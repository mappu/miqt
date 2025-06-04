#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlComponent>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQmlError>
#include <QQmlIncubator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <qqmlcomponent.h>
#include "gen_qqmlcomponent.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QQmlComponent_statusChanged(intptr_t, int);
void miqt_exec_callback_QQmlComponent_progressChanged(intptr_t, double);
QObject* miqt_exec_callback_QQmlComponent_create(QQmlComponent*, intptr_t, QQmlContext*);
QObject* miqt_exec_callback_QQmlComponent_beginCreate(QQmlComponent*, intptr_t, QQmlContext*);
void miqt_exec_callback_QQmlComponent_completeCreate(QQmlComponent*, intptr_t);
bool miqt_exec_callback_QQmlComponent_event(QQmlComponent*, intptr_t, QEvent*);
bool miqt_exec_callback_QQmlComponent_eventFilter(QQmlComponent*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QQmlComponent_timerEvent(QQmlComponent*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QQmlComponent_childEvent(QQmlComponent*, intptr_t, QChildEvent*);
void miqt_exec_callback_QQmlComponent_customEvent(QQmlComponent*, intptr_t, QEvent*);
void miqt_exec_callback_QQmlComponent_connectNotify(QQmlComponent*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QQmlComponent_disconnectNotify(QQmlComponent*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQQmlComponent final : public QQmlComponent {
public:

	MiqtVirtualQQmlComponent(): QQmlComponent() {}
	MiqtVirtualQQmlComponent(QQmlEngine* param1): QQmlComponent(param1) {}
	MiqtVirtualQQmlComponent(QQmlEngine* param1, const QString& fileName): QQmlComponent(param1, fileName) {}
	MiqtVirtualQQmlComponent(QQmlEngine* param1, const QString& fileName, QQmlComponent::CompilationMode mode): QQmlComponent(param1, fileName, mode) {}
	MiqtVirtualQQmlComponent(QQmlEngine* param1, const QUrl& url): QQmlComponent(param1, url) {}
	MiqtVirtualQQmlComponent(QQmlEngine* param1, const QUrl& url, QQmlComponent::CompilationMode mode): QQmlComponent(param1, url, mode) {}
	MiqtVirtualQQmlComponent(QObject* parent): QQmlComponent(parent) {}
	MiqtVirtualQQmlComponent(QQmlEngine* param1, QObject* parent): QQmlComponent(param1, parent) {}
	MiqtVirtualQQmlComponent(QQmlEngine* param1, const QString& fileName, QObject* parent): QQmlComponent(param1, fileName, parent) {}
	MiqtVirtualQQmlComponent(QQmlEngine* param1, const QString& fileName, QQmlComponent::CompilationMode mode, QObject* parent): QQmlComponent(param1, fileName, mode, parent) {}
	MiqtVirtualQQmlComponent(QQmlEngine* param1, const QUrl& url, QObject* parent): QQmlComponent(param1, url, parent) {}
	MiqtVirtualQQmlComponent(QQmlEngine* param1, const QUrl& url, QQmlComponent::CompilationMode mode, QObject* parent): QQmlComponent(param1, url, mode, parent) {}

	virtual ~MiqtVirtualQQmlComponent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__create = 0;

	// Subclass to allow providing a Go implementation
	virtual QObject* create(QQmlContext* context) override {
		if (handle__create == 0) {
			return QQmlComponent::create(context);
		}

		QQmlContext* sigval1 = context;
		QObject* callback_return_value = miqt_exec_callback_QQmlComponent_create(this, handle__create, sigval1);
		return callback_return_value;
	}

	friend QObject* QQmlComponent_virtualbase_create(void* self, QQmlContext* context);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__beginCreate = 0;

	// Subclass to allow providing a Go implementation
	virtual QObject* beginCreate(QQmlContext* param1) override {
		if (handle__beginCreate == 0) {
			return QQmlComponent::beginCreate(param1);
		}

		QQmlContext* sigval1 = param1;
		QObject* callback_return_value = miqt_exec_callback_QQmlComponent_beginCreate(this, handle__beginCreate, sigval1);
		return callback_return_value;
	}

	friend QObject* QQmlComponent_virtualbase_beginCreate(void* self, QQmlContext* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__completeCreate = 0;

	// Subclass to allow providing a Go implementation
	virtual void completeCreate() override {
		if (handle__completeCreate == 0) {
			QQmlComponent::completeCreate();
			return;
		}

		miqt_exec_callback_QQmlComponent_completeCreate(this, handle__completeCreate);

	}

	friend void QQmlComponent_virtualbase_completeCreate(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QQmlComponent::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QQmlComponent_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QQmlComponent_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QQmlComponent::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QQmlComponent_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QQmlComponent_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QQmlComponent::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QQmlComponent_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QQmlComponent_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QQmlComponent::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QQmlComponent_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QQmlComponent_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QQmlComponent::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QQmlComponent_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QQmlComponent_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QQmlComponent::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QQmlComponent_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QQmlComponent_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QQmlComponent::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QQmlComponent_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QQmlComponent_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QQmlComponent_protectedbase_createObject2(bool* _dynamic_cast_ok, void* self);
	friend QObject* QQmlComponent_protectedbase_createObjectWithParent(bool* _dynamic_cast_ok, void* self, QObject* parent);
	friend QObject* QQmlComponent_protectedbase_createObject3(bool* _dynamic_cast_ok, void* self, QObject* parent, struct miqt_map /* of struct miqt_string to QVariant* */  properties);
	friend QObject* QQmlComponent_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlComponent_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlComponent_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QQmlComponent_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QQmlComponent* QQmlComponent_new() {
	return new (std::nothrow) MiqtVirtualQQmlComponent();
}

QQmlComponent* QQmlComponent_new2(QQmlEngine* param1) {
	return new (std::nothrow) MiqtVirtualQQmlComponent(param1);
}

QQmlComponent* QQmlComponent_new3(QQmlEngine* param1, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) MiqtVirtualQQmlComponent(param1, fileName_QString);
}

QQmlComponent* QQmlComponent_new4(QQmlEngine* param1, struct miqt_string fileName, int mode) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) MiqtVirtualQQmlComponent(param1, fileName_QString, static_cast<QQmlComponent::CompilationMode>(mode));
}

QQmlComponent* QQmlComponent_new5(QQmlEngine* param1, QUrl* url) {
	return new (std::nothrow) MiqtVirtualQQmlComponent(param1, *url);
}

QQmlComponent* QQmlComponent_new6(QQmlEngine* param1, QUrl* url, int mode) {
	return new (std::nothrow) MiqtVirtualQQmlComponent(param1, *url, static_cast<QQmlComponent::CompilationMode>(mode));
}

QQmlComponent* QQmlComponent_new7(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQQmlComponent(parent);
}

QQmlComponent* QQmlComponent_new8(QQmlEngine* param1, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQQmlComponent(param1, parent);
}

QQmlComponent* QQmlComponent_new9(QQmlEngine* param1, struct miqt_string fileName, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) MiqtVirtualQQmlComponent(param1, fileName_QString, parent);
}

QQmlComponent* QQmlComponent_new10(QQmlEngine* param1, struct miqt_string fileName, int mode, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) MiqtVirtualQQmlComponent(param1, fileName_QString, static_cast<QQmlComponent::CompilationMode>(mode), parent);
}

QQmlComponent* QQmlComponent_new11(QQmlEngine* param1, QUrl* url, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQQmlComponent(param1, *url, parent);
}

QQmlComponent* QQmlComponent_new12(QQmlEngine* param1, QUrl* url, int mode, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQQmlComponent(param1, *url, static_cast<QQmlComponent::CompilationMode>(mode), parent);
}

void QQmlComponent_virtbase(QQmlComponent* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QQmlComponent_metaObject(const QQmlComponent* self) {
	return (QMetaObject*) self->metaObject();
}

void* QQmlComponent_metacast(QQmlComponent* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QQmlComponent_tr(const char* s) {
	QString _ret = QQmlComponent::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QQmlComponent_status(const QQmlComponent* self) {
	QQmlComponent::Status _ret = self->status();
	return static_cast<int>(_ret);
}

bool QQmlComponent_isNull(const QQmlComponent* self) {
	return self->isNull();
}

bool QQmlComponent_isReady(const QQmlComponent* self) {
	return self->isReady();
}

bool QQmlComponent_isError(const QQmlComponent* self) {
	return self->isError();
}

bool QQmlComponent_isLoading(const QQmlComponent* self) {
	return self->isLoading();
}

bool QQmlComponent_isBound(const QQmlComponent* self) {
	return self->isBound();
}

struct miqt_array /* of QQmlError* */  QQmlComponent_errors(const QQmlComponent* self) {
	QList<QQmlError> _ret = self->errors();
	// Convert QList<> from C++ memory to manually-managed C memory
	QQmlError** _arr = static_cast<QQmlError**>(malloc(sizeof(QQmlError*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QQmlError(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QQmlComponent_errorString(const QQmlComponent* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QQmlComponent_progress(const QQmlComponent* self) {
	qreal _ret = self->progress();
	return static_cast<double>(_ret);
}

QUrl* QQmlComponent_url(const QQmlComponent* self) {
	return new QUrl(self->url());
}

QObject* QQmlComponent_create(QQmlComponent* self, QQmlContext* context) {
	return self->create(context);
}

QObject* QQmlComponent_createWithInitialProperties(QQmlComponent* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialProperties) {
	QVariantMap initialProperties_QMap;
	struct miqt_string* initialProperties_karr = static_cast<struct miqt_string*>(initialProperties.keys);
	QVariant** initialProperties_varr = static_cast<QVariant**>(initialProperties.values);
	for(size_t i = 0; i < initialProperties.len; ++i) {
		QString initialProperties_karr_i_QString = QString::fromUtf8(initialProperties_karr[i].data, initialProperties_karr[i].len);
		initialProperties_QMap[initialProperties_karr_i_QString] = *(initialProperties_varr[i]);
	}
	return self->createWithInitialProperties(initialProperties_QMap);
}

void QQmlComponent_setInitialProperties(QQmlComponent* self, QObject* component, struct miqt_map /* of struct miqt_string to QVariant* */  properties) {
	QVariantMap properties_QMap;
	struct miqt_string* properties_karr = static_cast<struct miqt_string*>(properties.keys);
	QVariant** properties_varr = static_cast<QVariant**>(properties.values);
	for(size_t i = 0; i < properties.len; ++i) {
		QString properties_karr_i_QString = QString::fromUtf8(properties_karr[i].data, properties_karr[i].len);
		properties_QMap[properties_karr_i_QString] = *(properties_varr[i]);
	}
	self->setInitialProperties(component, properties_QMap);
}

QObject* QQmlComponent_beginCreate(QQmlComponent* self, QQmlContext* param1) {
	return self->beginCreate(param1);
}

void QQmlComponent_completeCreate(QQmlComponent* self) {
	self->completeCreate();
}

void QQmlComponent_createWithQQmlIncubator(QQmlComponent* self, QQmlIncubator* param1) {
	self->create(*param1);
}

QQmlContext* QQmlComponent_creationContext(const QQmlComponent* self) {
	return self->creationContext();
}

QQmlEngine* QQmlComponent_engine(const QQmlComponent* self) {
	return self->engine();
}

void QQmlComponent_loadUrl(QQmlComponent* self, QUrl* url) {
	self->loadUrl(*url);
}

void QQmlComponent_loadUrl2(QQmlComponent* self, QUrl* url, int mode) {
	self->loadUrl(*url, static_cast<QQmlComponent::CompilationMode>(mode));
}

void QQmlComponent_setData(QQmlComponent* self, struct miqt_string param1, QUrl* baseUrl) {
	QByteArray param1_QByteArray(param1.data, param1.len);
	self->setData(param1_QByteArray, *baseUrl);
}

void QQmlComponent_statusChanged(QQmlComponent* self, int param1) {
	self->statusChanged(static_cast<QQmlComponent::Status>(param1));
}

void QQmlComponent_connect_statusChanged(QQmlComponent* self, intptr_t slot) {
	QQmlComponent::connect(self, static_cast<void (QQmlComponent::*)(QQmlComponent::Status)>(&QQmlComponent::statusChanged), self, [=](QQmlComponent::Status param1) {
		QQmlComponent::Status param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QQmlComponent_statusChanged(slot, sigval1);
	});
}

void QQmlComponent_progressChanged(QQmlComponent* self, double param1) {
	self->progressChanged(static_cast<qreal>(param1));
}

void QQmlComponent_connect_progressChanged(QQmlComponent* self, intptr_t slot) {
	QQmlComponent::connect(self, static_cast<void (QQmlComponent::*)(qreal)>(&QQmlComponent::progressChanged), self, [=](qreal param1) {
		qreal param1_ret = param1;
		double sigval1 = static_cast<double>(param1_ret);
		miqt_exec_callback_QQmlComponent_progressChanged(slot, sigval1);
	});
}

struct miqt_string QQmlComponent_tr2(const char* s, const char* c) {
	QString _ret = QQmlComponent::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlComponent_tr3(const char* s, const char* c, int n) {
	QString _ret = QQmlComponent::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QQmlComponent_createWithInitialProperties2(QQmlComponent* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialProperties, QQmlContext* context) {
	QVariantMap initialProperties_QMap;
	struct miqt_string* initialProperties_karr = static_cast<struct miqt_string*>(initialProperties.keys);
	QVariant** initialProperties_varr = static_cast<QVariant**>(initialProperties.values);
	for(size_t i = 0; i < initialProperties.len; ++i) {
		QString initialProperties_karr_i_QString = QString::fromUtf8(initialProperties_karr[i].data, initialProperties_karr[i].len);
		initialProperties_QMap[initialProperties_karr_i_QString] = *(initialProperties_varr[i]);
	}
	return self->createWithInitialProperties(initialProperties_QMap, context);
}

void QQmlComponent_create2(QQmlComponent* self, QQmlIncubator* param1, QQmlContext* context) {
	self->create(*param1, context);
}

void QQmlComponent_create3(QQmlComponent* self, QQmlIncubator* param1, QQmlContext* context, QQmlContext* forContext) {
	self->create(*param1, context, forContext);
}

bool QQmlComponent_override_virtual_create(void* self, intptr_t slot) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__create = slot;
	return true;
}

QObject* QQmlComponent_virtualbase_create(void* self, QQmlContext* context) {
	return static_cast<MiqtVirtualQQmlComponent*>(self)->QQmlComponent::create(context);
}

bool QQmlComponent_override_virtual_beginCreate(void* self, intptr_t slot) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__beginCreate = slot;
	return true;
}

QObject* QQmlComponent_virtualbase_beginCreate(void* self, QQmlContext* param1) {
	return static_cast<MiqtVirtualQQmlComponent*>(self)->QQmlComponent::beginCreate(param1);
}

bool QQmlComponent_override_virtual_completeCreate(void* self, intptr_t slot) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__completeCreate = slot;
	return true;
}

void QQmlComponent_virtualbase_completeCreate(void* self) {
	static_cast<MiqtVirtualQQmlComponent*>(self)->QQmlComponent::completeCreate();
}

bool QQmlComponent_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QQmlComponent_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQQmlComponent*>(self)->QQmlComponent::event(event);
}

bool QQmlComponent_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QQmlComponent_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQQmlComponent*>(self)->QQmlComponent::eventFilter(watched, event);
}

bool QQmlComponent_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QQmlComponent_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQQmlComponent*>(self)->QQmlComponent::timerEvent(event);
}

bool QQmlComponent_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QQmlComponent_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQQmlComponent*>(self)->QQmlComponent::childEvent(event);
}

bool QQmlComponent_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QQmlComponent_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQQmlComponent*>(self)->QQmlComponent::customEvent(event);
}

bool QQmlComponent_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QQmlComponent_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQQmlComponent*>(self)->QQmlComponent::connectNotify(*signal);
}

bool QQmlComponent_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QQmlComponent_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQQmlComponent*>(self)->QQmlComponent::disconnectNotify(*signal);
}

QObject* QQmlComponent_protectedbase_createObject2(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->createObject();
}

QObject* QQmlComponent_protectedbase_createObjectWithParent(bool* _dynamic_cast_ok, void* self, QObject* parent) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->createObject(parent);
}

QObject* QQmlComponent_protectedbase_createObject3(bool* _dynamic_cast_ok, void* self, QObject* parent, struct miqt_map /* of struct miqt_string to QVariant* */  properties) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
		QVariantMap properties_QMap;
		struct miqt_string* properties_karr = static_cast<struct miqt_string*>(properties.keys);
		QVariant** properties_varr = static_cast<QVariant**>(properties.values);
		for(size_t i = 0; i < properties.len; ++i) {
			QString properties_karr_i_QString = QString::fromUtf8(properties_karr[i].data, properties_karr[i].len);
			properties_QMap[properties_karr_i_QString] = *(properties_varr[i]);
		}
	return self_cast->createObject(parent, properties_QMap);
}

QObject* QQmlComponent_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QQmlComponent_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QQmlComponent_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QQmlComponent_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQQmlComponent* self_cast = dynamic_cast<MiqtVirtualQQmlComponent*>( (QQmlComponent*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QQmlComponent_delete(QQmlComponent* self) {
	delete self;
}

