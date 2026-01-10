#include <QChildEvent>
#include <QEvent>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QScxmlDataModel>
#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlDataModel__ForeachLoopBody
#include <QScxmlEvent>
#include <QScxmlStateMachine>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qscxmldatamodel.h>
#include "gen_qscxmldatamodel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QScxmlDataModel_stateMachineChanged(intptr_t, QScxmlStateMachine*);
bool miqt_exec_callback_QScxmlDataModel_setup(QScxmlDataModel*, intptr_t, struct miqt_map /* of struct miqt_string to QVariant* */ );
struct miqt_string miqt_exec_callback_QScxmlDataModel_evaluateToString(QScxmlDataModel*, intptr_t, int, bool*);
bool miqt_exec_callback_QScxmlDataModel_evaluateToBool(QScxmlDataModel*, intptr_t, int, bool*);
QVariant* miqt_exec_callback_QScxmlDataModel_evaluateToVariant(QScxmlDataModel*, intptr_t, int, bool*);
void miqt_exec_callback_QScxmlDataModel_evaluateToVoid(QScxmlDataModel*, intptr_t, int, bool*);
void miqt_exec_callback_QScxmlDataModel_evaluateAssignment(QScxmlDataModel*, intptr_t, int, bool*);
void miqt_exec_callback_QScxmlDataModel_evaluateInitialization(QScxmlDataModel*, intptr_t, int, bool*);
void miqt_exec_callback_QScxmlDataModel_evaluateForeach(QScxmlDataModel*, intptr_t, int, bool*, QScxmlDataModel__ForeachLoopBody*);
void miqt_exec_callback_QScxmlDataModel_setScxmlEvent(QScxmlDataModel*, intptr_t, QScxmlEvent*);
QVariant* miqt_exec_callback_QScxmlDataModel_scxmlProperty(const QScxmlDataModel*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QScxmlDataModel_hasScxmlProperty(const QScxmlDataModel*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QScxmlDataModel_setScxmlProperty(QScxmlDataModel*, intptr_t, struct miqt_string, QVariant*, struct miqt_string);
bool miqt_exec_callback_QScxmlDataModel_event(QScxmlDataModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QScxmlDataModel_eventFilter(QScxmlDataModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScxmlDataModel_timerEvent(QScxmlDataModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScxmlDataModel_childEvent(QScxmlDataModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScxmlDataModel_customEvent(QScxmlDataModel*, intptr_t, QEvent*);
void miqt_exec_callback_QScxmlDataModel_connectNotify(QScxmlDataModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScxmlDataModel_disconnectNotify(QScxmlDataModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScxmlDataModel__ForeachLoopBody_run(QScxmlDataModel__ForeachLoopBody*, intptr_t, bool*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScxmlDataModel final : public QScxmlDataModel {
public:

	MiqtVirtualQScxmlDataModel(): QScxmlDataModel() {}
	MiqtVirtualQScxmlDataModel(QObject* parent): QScxmlDataModel(parent) {}

	virtual ~MiqtVirtualQScxmlDataModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setup = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setup(const QVariantMap& initialDataValues) override {
		if (handle__setup == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		const QVariantMap& initialDataValues_ret = initialDataValues;
		// Convert QMap<> from C++ memory to manually-managed C memory
		struct miqt_string* initialDataValues_karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * initialDataValues_ret.size()));
		QVariant** initialDataValues_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * initialDataValues_ret.size()));
		int initialDataValues_ctr = 0;
		for (auto initialDataValues_itr = initialDataValues_ret.keyValueBegin(); initialDataValues_itr != initialDataValues_ret.keyValueEnd(); ++initialDataValues_itr) {
			QString initialDataValues_mapkey_ret = initialDataValues_itr->first;
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray initialDataValues_mapkey_b = initialDataValues_mapkey_ret.toUtf8();
			struct miqt_string initialDataValues_mapkey_ms;
			initialDataValues_mapkey_ms.len = initialDataValues_mapkey_b.length();
			initialDataValues_mapkey_ms.data = static_cast<char*>(malloc(initialDataValues_mapkey_ms.len));
			memcpy(initialDataValues_mapkey_ms.data, initialDataValues_mapkey_b.data(), initialDataValues_mapkey_ms.len);
			initialDataValues_karr[initialDataValues_ctr] = initialDataValues_mapkey_ms;
			initialDataValues_varr[initialDataValues_ctr] = new QVariant(initialDataValues_itr->second);
			initialDataValues_ctr++;
		}
		struct miqt_map initialDataValues_out;
		initialDataValues_out.len = initialDataValues_ret.size();
		initialDataValues_out.keys = static_cast<void*>(initialDataValues_karr);
		initialDataValues_out.values = static_cast<void*>(initialDataValues_varr);
		struct miqt_map /* of struct miqt_string to QVariant* */  sigval1 = initialDataValues_out;
		bool callback_return_value = miqt_exec_callback_QScxmlDataModel_setup(this, handle__setup, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateToString = 0;

	// Subclass to allow providing a Go implementation
	virtual QString evaluateToString(QScxmlExecutableContent::EvaluatorId id, bool* ok) override {
		if (handle__evaluateToString == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		struct miqt_string callback_return_value = miqt_exec_callback_QScxmlDataModel_evaluateToString(this, handle__evaluateToString, sigval1, sigval2);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateToBool = 0;

	// Subclass to allow providing a Go implementation
	virtual bool evaluateToBool(QScxmlExecutableContent::EvaluatorId id, bool* ok) override {
		if (handle__evaluateToBool == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		bool callback_return_value = miqt_exec_callback_QScxmlDataModel_evaluateToBool(this, handle__evaluateToBool, sigval1, sigval2);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateToVariant = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant evaluateToVariant(QScxmlExecutableContent::EvaluatorId id, bool* ok) override {
		if (handle__evaluateToVariant == 0) {
			return QVariant(); // Pure virtual, there is no base we can call
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		QVariant* callback_return_value = miqt_exec_callback_QScxmlDataModel_evaluateToVariant(this, handle__evaluateToVariant, sigval1, sigval2);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateToVoid = 0;

	// Subclass to allow providing a Go implementation
	virtual void evaluateToVoid(QScxmlExecutableContent::EvaluatorId id, bool* ok) override {
		if (handle__evaluateToVoid == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		miqt_exec_callback_QScxmlDataModel_evaluateToVoid(this, handle__evaluateToVoid, sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateAssignment = 0;

	// Subclass to allow providing a Go implementation
	virtual void evaluateAssignment(QScxmlExecutableContent::EvaluatorId id, bool* ok) override {
		if (handle__evaluateAssignment == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		miqt_exec_callback_QScxmlDataModel_evaluateAssignment(this, handle__evaluateAssignment, sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateInitialization = 0;

	// Subclass to allow providing a Go implementation
	virtual void evaluateInitialization(QScxmlExecutableContent::EvaluatorId id, bool* ok) override {
		if (handle__evaluateInitialization == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		miqt_exec_callback_QScxmlDataModel_evaluateInitialization(this, handle__evaluateInitialization, sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateForeach = 0;

	// Subclass to allow providing a Go implementation
	virtual void evaluateForeach(QScxmlExecutableContent::EvaluatorId id, bool* ok, QScxmlDataModel::ForeachLoopBody* body) override {
		if (handle__evaluateForeach == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		QScxmlDataModel__ForeachLoopBody* sigval3 = body;
		miqt_exec_callback_QScxmlDataModel_evaluateForeach(this, handle__evaluateForeach, sigval1, sigval2, sigval3);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setScxmlEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void setScxmlEvent(const QScxmlEvent& event) override {
		if (handle__setScxmlEvent == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QScxmlEvent& event_ret = event;
		// Cast returned reference into pointer
		QScxmlEvent* sigval1 = const_cast<QScxmlEvent*>(&event_ret);
		miqt_exec_callback_QScxmlDataModel_setScxmlEvent(this, handle__setScxmlEvent, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scxmlProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant scxmlProperty(const QString& name) const override {
		if (handle__scxmlProperty == 0) {
			return QVariant(); // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		QVariant* callback_return_value = miqt_exec_callback_QScxmlDataModel_scxmlProperty(this, handle__scxmlProperty, sigval1);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasScxmlProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasScxmlProperty(const QString& name) const override {
		if (handle__hasScxmlProperty == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		bool callback_return_value = miqt_exec_callback_QScxmlDataModel_hasScxmlProperty(this, handle__hasScxmlProperty, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setScxmlProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setScxmlProperty(const QString& name, const QVariant& value, const QString& context) override {
		if (handle__setScxmlProperty == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		const QString context_ret = context;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray context_b = context_ret.toUtf8();
		struct miqt_string context_ms;
		context_ms.len = context_b.length();
		context_ms.data = static_cast<char*>(malloc(context_ms.len));
		memcpy(context_ms.data, context_b.data(), context_ms.len);
		struct miqt_string sigval3 = context_ms;
		bool callback_return_value = miqt_exec_callback_QScxmlDataModel_setScxmlProperty(this, handle__setScxmlProperty, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QScxmlDataModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QScxmlDataModel_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QScxmlDataModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QScxmlDataModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QScxmlDataModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QScxmlDataModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QScxmlDataModel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QScxmlDataModel_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QScxmlDataModel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QScxmlDataModel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QScxmlDataModel_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QScxmlDataModel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QScxmlDataModel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QScxmlDataModel_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QScxmlDataModel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QScxmlDataModel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScxmlDataModel_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QScxmlDataModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QScxmlDataModel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScxmlDataModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QScxmlDataModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QScxmlDataModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QScxmlDataModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QScxmlDataModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QScxmlDataModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QScxmlDataModel* QScxmlDataModel_new() {
	return new (std::nothrow) MiqtVirtualQScxmlDataModel();
}

QScxmlDataModel* QScxmlDataModel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQScxmlDataModel(parent);
}

void QScxmlDataModel_virtbase(QScxmlDataModel* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QScxmlDataModel_metaObject(const QScxmlDataModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScxmlDataModel_metacast(QScxmlDataModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScxmlDataModel_tr(const char* s) {
	QString _ret = QScxmlDataModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QScxmlDataModel* QScxmlDataModel_createScxmlDataModel(struct miqt_string pluginKey) {
	QString pluginKey_QString = QString::fromUtf8(pluginKey.data, pluginKey.len);
	return QScxmlDataModel::createScxmlDataModel(pluginKey_QString);
}

void QScxmlDataModel_setStateMachine(QScxmlDataModel* self, QScxmlStateMachine* stateMachine) {
	self->setStateMachine(stateMachine);
}

QScxmlStateMachine* QScxmlDataModel_stateMachine(const QScxmlDataModel* self) {
	return self->stateMachine();
}

bool QScxmlDataModel_setup(QScxmlDataModel* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialDataValues) {
	QVariantMap initialDataValues_QMap;
	struct miqt_string* initialDataValues_karr = static_cast<struct miqt_string*>(initialDataValues.keys);
	QVariant** initialDataValues_varr = static_cast<QVariant**>(initialDataValues.values);
	for(size_t i = 0; i < initialDataValues.len; ++i) {
		QString initialDataValues_karr_i_QString = QString::fromUtf8(initialDataValues_karr[i].data, initialDataValues_karr[i].len);
		initialDataValues_QMap[initialDataValues_karr_i_QString] = *(initialDataValues_varr[i]);
	}
	return self->setup(initialDataValues_QMap);
}

struct miqt_string QScxmlDataModel_evaluateToString(QScxmlDataModel* self, int id, bool* ok) {
	QString _ret = self->evaluateToString(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScxmlDataModel_evaluateToBool(QScxmlDataModel* self, int id, bool* ok) {
	return self->evaluateToBool(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

QVariant* QScxmlDataModel_evaluateToVariant(QScxmlDataModel* self, int id, bool* ok) {
	return new QVariant(self->evaluateToVariant(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok));
}

void QScxmlDataModel_evaluateToVoid(QScxmlDataModel* self, int id, bool* ok) {
	self->evaluateToVoid(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

void QScxmlDataModel_evaluateAssignment(QScxmlDataModel* self, int id, bool* ok) {
	self->evaluateAssignment(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

void QScxmlDataModel_evaluateInitialization(QScxmlDataModel* self, int id, bool* ok) {
	self->evaluateInitialization(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

void QScxmlDataModel_evaluateForeach(QScxmlDataModel* self, int id, bool* ok, QScxmlDataModel__ForeachLoopBody* body) {
	self->evaluateForeach(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok, body);
}

void QScxmlDataModel_setScxmlEvent(QScxmlDataModel* self, QScxmlEvent* event) {
	self->setScxmlEvent(*event);
}

QVariant* QScxmlDataModel_scxmlProperty(const QScxmlDataModel* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(self->scxmlProperty(name_QString));
}

bool QScxmlDataModel_hasScxmlProperty(const QScxmlDataModel* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->hasScxmlProperty(name_QString);
}

bool QScxmlDataModel_setScxmlProperty(QScxmlDataModel* self, struct miqt_string name, QVariant* value, struct miqt_string context) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString context_QString = QString::fromUtf8(context.data, context.len);
	return self->setScxmlProperty(name_QString, *value, context_QString);
}

void QScxmlDataModel_stateMachineChanged(QScxmlDataModel* self, QScxmlStateMachine* stateMachine) {
	self->stateMachineChanged(stateMachine);
}

void QScxmlDataModel_connect_stateMachineChanged(QScxmlDataModel* self, intptr_t slot) {
	QScxmlDataModel::connect(self, static_cast<void (QScxmlDataModel::*)(QScxmlStateMachine*)>(&QScxmlDataModel::stateMachineChanged), self, [=](QScxmlStateMachine* stateMachine) {
		QScxmlStateMachine* sigval1 = stateMachine;
		miqt_exec_callback_QScxmlDataModel_stateMachineChanged(slot, sigval1);
	});
}

struct miqt_string QScxmlDataModel_tr2(const char* s, const char* c) {
	QString _ret = QScxmlDataModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScxmlDataModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QScxmlDataModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScxmlDataModel_override_virtual_setup(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setup = slot;
	return true;
}

bool QScxmlDataModel_override_virtual_evaluateToString(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateToString = slot;
	return true;
}

bool QScxmlDataModel_override_virtual_evaluateToBool(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateToBool = slot;
	return true;
}

bool QScxmlDataModel_override_virtual_evaluateToVariant(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateToVariant = slot;
	return true;
}

bool QScxmlDataModel_override_virtual_evaluateToVoid(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateToVoid = slot;
	return true;
}

bool QScxmlDataModel_override_virtual_evaluateAssignment(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateAssignment = slot;
	return true;
}

bool QScxmlDataModel_override_virtual_evaluateInitialization(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateInitialization = slot;
	return true;
}

bool QScxmlDataModel_override_virtual_evaluateForeach(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateForeach = slot;
	return true;
}

bool QScxmlDataModel_override_virtual_setScxmlEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setScxmlEvent = slot;
	return true;
}

bool QScxmlDataModel_override_virtual_scxmlProperty(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scxmlProperty = slot;
	return true;
}

bool QScxmlDataModel_override_virtual_hasScxmlProperty(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasScxmlProperty = slot;
	return true;
}

bool QScxmlDataModel_override_virtual_setScxmlProperty(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setScxmlProperty = slot;
	return true;
}

bool QScxmlDataModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QScxmlDataModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQScxmlDataModel*>(self)->QScxmlDataModel::event(event);
}

bool QScxmlDataModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QScxmlDataModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQScxmlDataModel*>(self)->QScxmlDataModel::eventFilter(watched, event);
}

bool QScxmlDataModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QScxmlDataModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQScxmlDataModel*>(self)->QScxmlDataModel::timerEvent(event);
}

bool QScxmlDataModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QScxmlDataModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQScxmlDataModel*>(self)->QScxmlDataModel::childEvent(event);
}

bool QScxmlDataModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QScxmlDataModel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQScxmlDataModel*>(self)->QScxmlDataModel::customEvent(event);
}

bool QScxmlDataModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QScxmlDataModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScxmlDataModel*>(self)->QScxmlDataModel::connectNotify(*signal);
}

bool QScxmlDataModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QScxmlDataModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScxmlDataModel*>(self)->QScxmlDataModel::disconnectNotify(*signal);
}

QObject* QScxmlDataModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QScxmlDataModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QScxmlDataModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QScxmlDataModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQScxmlDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModel*>( (QScxmlDataModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QScxmlDataModel_delete(QScxmlDataModel* self) {
	delete self;
}

class MiqtVirtualQScxmlDataModelForeachLoopBody final : public QScxmlDataModel::ForeachLoopBody {
public:

	MiqtVirtualQScxmlDataModelForeachLoopBody(): QScxmlDataModel::ForeachLoopBody() {}

	virtual ~MiqtVirtualQScxmlDataModelForeachLoopBody() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__run = 0;

	// Subclass to allow providing a Go implementation
	virtual void run(bool* ok) override {
		if (handle__run == 0) {
			return; // Pure virtual, there is no base we can call
		}

		bool* sigval1 = ok;
		miqt_exec_callback_QScxmlDataModel__ForeachLoopBody_run(this, handle__run, sigval1);

	}

};

QScxmlDataModel__ForeachLoopBody* QScxmlDataModel__ForeachLoopBody_new() {
	return new (std::nothrow) MiqtVirtualQScxmlDataModelForeachLoopBody();
}

void QScxmlDataModel__ForeachLoopBody_run(QScxmlDataModel__ForeachLoopBody* self, bool* ok) {
	self->run(ok);
}

bool QScxmlDataModel__ForeachLoopBody_override_virtual_run(void* self, intptr_t slot) {
	MiqtVirtualQScxmlDataModelForeachLoopBody* self_cast = dynamic_cast<MiqtVirtualQScxmlDataModelForeachLoopBody*>( (QScxmlDataModel::ForeachLoopBody*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__run = slot;
	return true;
}

void QScxmlDataModel__ForeachLoopBody_delete(QScxmlDataModel__ForeachLoopBody* self) {
	delete self;
}

