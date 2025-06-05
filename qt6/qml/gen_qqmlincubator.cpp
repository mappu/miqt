#include <QList>
#include <QMap>
#include <QObject>
#include <QQmlEngine>
#include <QQmlError>
#include <QQmlIncubationController>
#include <QQmlIncubator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qqmlincubator.h>
#include "gen_qqmlincubator.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QQmlIncubator_statusChanged(QQmlIncubator*, intptr_t, int);
void miqt_exec_callback_QQmlIncubator_setInitialState(QQmlIncubator*, intptr_t, QObject*);
void miqt_exec_callback_QQmlIncubationController_incubatingObjectCountChanged(QQmlIncubationController*, intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQQmlIncubator final : public QQmlIncubator {
public:

	MiqtVirtualQQmlIncubator(): QQmlIncubator() {}
	MiqtVirtualQQmlIncubator(QQmlIncubator::IncubationMode param1): QQmlIncubator(param1) {}

	virtual ~MiqtVirtualQQmlIncubator() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__statusChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void statusChanged(QQmlIncubator::Status param1) override {
		if (handle__statusChanged == 0) {
			QQmlIncubator::statusChanged(param1);
			return;
		}

		QQmlIncubator::Status param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QQmlIncubator_statusChanged(this, handle__statusChanged, sigval1);

	}

	friend void QQmlIncubator_virtualbase_statusChanged(void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setInitialState = 0;

	// Subclass to allow providing a Go implementation
	virtual void setInitialState(QObject* initialState) override {
		if (handle__setInitialState == 0) {
			QQmlIncubator::setInitialState(initialState);
			return;
		}

		QObject* sigval1 = initialState;
		miqt_exec_callback_QQmlIncubator_setInitialState(this, handle__setInitialState, sigval1);

	}

	friend void QQmlIncubator_virtualbase_setInitialState(void* self, QObject* initialState);

};

QQmlIncubator* QQmlIncubator_new() {
	return new (std::nothrow) MiqtVirtualQQmlIncubator();
}

QQmlIncubator* QQmlIncubator_new2(int param1) {
	return new (std::nothrow) MiqtVirtualQQmlIncubator(static_cast<QQmlIncubator::IncubationMode>(param1));
}

void QQmlIncubator_clear(QQmlIncubator* self) {
	self->clear();
}

void QQmlIncubator_forceCompletion(QQmlIncubator* self) {
	self->forceCompletion();
}

bool QQmlIncubator_isNull(const QQmlIncubator* self) {
	return self->isNull();
}

bool QQmlIncubator_isReady(const QQmlIncubator* self) {
	return self->isReady();
}

bool QQmlIncubator_isError(const QQmlIncubator* self) {
	return self->isError();
}

bool QQmlIncubator_isLoading(const QQmlIncubator* self) {
	return self->isLoading();
}

struct miqt_array /* of QQmlError* */  QQmlIncubator_errors(const QQmlIncubator* self) {
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

int QQmlIncubator_incubationMode(const QQmlIncubator* self) {
	QQmlIncubator::IncubationMode _ret = self->incubationMode();
	return static_cast<int>(_ret);
}

int QQmlIncubator_status(const QQmlIncubator* self) {
	QQmlIncubator::Status _ret = self->status();
	return static_cast<int>(_ret);
}

QObject* QQmlIncubator_object(const QQmlIncubator* self) {
	return self->object();
}

void QQmlIncubator_setInitialProperties(QQmlIncubator* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialProperties) {
	QVariantMap initialProperties_QMap;
	struct miqt_string* initialProperties_karr = static_cast<struct miqt_string*>(initialProperties.keys);
	QVariant** initialProperties_varr = static_cast<QVariant**>(initialProperties.values);
	for(size_t i = 0; i < initialProperties.len; ++i) {
		QString initialProperties_karr_i_QString = QString::fromUtf8(initialProperties_karr[i].data, initialProperties_karr[i].len);
		initialProperties_QMap[initialProperties_karr_i_QString] = *(initialProperties_varr[i]);
	}
	self->setInitialProperties(initialProperties_QMap);
}

bool QQmlIncubator_override_virtual_statusChanged(void* self, intptr_t slot) {
	MiqtVirtualQQmlIncubator* self_cast = dynamic_cast<MiqtVirtualQQmlIncubator*>( (QQmlIncubator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__statusChanged = slot;
	return true;
}

void QQmlIncubator_virtualbase_statusChanged(void* self, int param1) {
	static_cast<MiqtVirtualQQmlIncubator*>(self)->QQmlIncubator::statusChanged(static_cast<MiqtVirtualQQmlIncubator::Status>(param1));
}

bool QQmlIncubator_override_virtual_setInitialState(void* self, intptr_t slot) {
	MiqtVirtualQQmlIncubator* self_cast = dynamic_cast<MiqtVirtualQQmlIncubator*>( (QQmlIncubator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setInitialState = slot;
	return true;
}

void QQmlIncubator_virtualbase_setInitialState(void* self, QObject* initialState) {
	static_cast<MiqtVirtualQQmlIncubator*>(self)->QQmlIncubator::setInitialState(initialState);
}

void QQmlIncubator_delete(QQmlIncubator* self) {
	delete self;
}

class MiqtVirtualQQmlIncubationController final : public QQmlIncubationController {
public:

	MiqtVirtualQQmlIncubationController(): QQmlIncubationController() {}

	virtual ~MiqtVirtualQQmlIncubationController() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__incubatingObjectCountChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void incubatingObjectCountChanged(int param1) override {
		if (handle__incubatingObjectCountChanged == 0) {
			QQmlIncubationController::incubatingObjectCountChanged(param1);
			return;
		}

		int sigval1 = param1;
		miqt_exec_callback_QQmlIncubationController_incubatingObjectCountChanged(this, handle__incubatingObjectCountChanged, sigval1);

	}

	friend void QQmlIncubationController_virtualbase_incubatingObjectCountChanged(void* self, int param1);

};

QQmlIncubationController* QQmlIncubationController_new() {
	return new (std::nothrow) MiqtVirtualQQmlIncubationController();
}

QQmlEngine* QQmlIncubationController_engine(const QQmlIncubationController* self) {
	return self->engine();
}

int QQmlIncubationController_incubatingObjectCount(const QQmlIncubationController* self) {
	return self->incubatingObjectCount();
}

void QQmlIncubationController_incubateFor(QQmlIncubationController* self, int msecs) {
	self->incubateFor(static_cast<int>(msecs));
}

bool QQmlIncubationController_override_virtual_incubatingObjectCountChanged(void* self, intptr_t slot) {
	MiqtVirtualQQmlIncubationController* self_cast = dynamic_cast<MiqtVirtualQQmlIncubationController*>( (QQmlIncubationController*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__incubatingObjectCountChanged = slot;
	return true;
}

void QQmlIncubationController_virtualbase_incubatingObjectCountChanged(void* self, int param1) {
	static_cast<MiqtVirtualQQmlIncubationController*>(self)->QQmlIncubationController::incubatingObjectCountChanged(static_cast<int>(param1));
}

void QQmlIncubationController_delete(QQmlIncubationController* self) {
	delete self;
}

