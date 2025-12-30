#include <QChildEvent>
#include <QEvent>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QScxmlCppDataModel>
#include <QScxmlDataModel>
#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlDataModel__ForeachLoopBody
#include <QScxmlEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qscxmlcppdatamodel.h>
#include "gen_qscxmlcppdatamodel.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QScxmlCppDataModel_setup(QScxmlCppDataModel*, intptr_t, struct miqt_map /* of struct miqt_string to QVariant* */ );
void miqt_exec_callback_QScxmlCppDataModel_evaluateAssignment(QScxmlCppDataModel*, intptr_t, int, bool*);
void miqt_exec_callback_QScxmlCppDataModel_evaluateInitialization(QScxmlCppDataModel*, intptr_t, int, bool*);
void miqt_exec_callback_QScxmlCppDataModel_evaluateForeach(QScxmlCppDataModel*, intptr_t, int, bool*, QScxmlDataModel__ForeachLoopBody*);
void miqt_exec_callback_QScxmlCppDataModel_setScxmlEvent(QScxmlCppDataModel*, intptr_t, QScxmlEvent*);
QVariant* miqt_exec_callback_QScxmlCppDataModel_scxmlProperty(const QScxmlCppDataModel*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QScxmlCppDataModel_hasScxmlProperty(const QScxmlCppDataModel*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QScxmlCppDataModel_setScxmlProperty(QScxmlCppDataModel*, intptr_t, struct miqt_string, QVariant*, struct miqt_string);
struct miqt_string miqt_exec_callback_QScxmlCppDataModel_evaluateToString(QScxmlCppDataModel*, intptr_t, int, bool*);
bool miqt_exec_callback_QScxmlCppDataModel_evaluateToBool(QScxmlCppDataModel*, intptr_t, int, bool*);
QVariant* miqt_exec_callback_QScxmlCppDataModel_evaluateToVariant(QScxmlCppDataModel*, intptr_t, int, bool*);
void miqt_exec_callback_QScxmlCppDataModel_evaluateToVoid(QScxmlCppDataModel*, intptr_t, int, bool*);
bool miqt_exec_callback_QScxmlCppDataModel_event(QScxmlCppDataModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QScxmlCppDataModel_eventFilter(QScxmlCppDataModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScxmlCppDataModel_timerEvent(QScxmlCppDataModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScxmlCppDataModel_childEvent(QScxmlCppDataModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScxmlCppDataModel_customEvent(QScxmlCppDataModel*, intptr_t, QEvent*);
void miqt_exec_callback_QScxmlCppDataModel_connectNotify(QScxmlCppDataModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScxmlCppDataModel_disconnectNotify(QScxmlCppDataModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScxmlCppDataModel final : public QScxmlCppDataModel {
public:

	MiqtVirtualQScxmlCppDataModel(): QScxmlCppDataModel() {}
	MiqtVirtualQScxmlCppDataModel(QObject* parent): QScxmlCppDataModel(parent) {}

	virtual ~MiqtVirtualQScxmlCppDataModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setup = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setup(const QVariantMap& initialDataValues) override {
		if (handle__setup == 0) {
			return QScxmlCppDataModel::setup(initialDataValues);
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
		bool callback_return_value = miqt_exec_callback_QScxmlCppDataModel_setup(this, handle__setup, sigval1);
		return callback_return_value;
	}

	friend bool QScxmlCppDataModel_virtualbase_setup(void* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialDataValues);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateAssignment = 0;

	// Subclass to allow providing a Go implementation
	virtual void evaluateAssignment(QScxmlExecutableContent::EvaluatorId id, bool* ok) override {
		if (handle__evaluateAssignment == 0) {
			QScxmlCppDataModel::evaluateAssignment(id, ok);
			return;
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		miqt_exec_callback_QScxmlCppDataModel_evaluateAssignment(this, handle__evaluateAssignment, sigval1, sigval2);

	}

	friend void QScxmlCppDataModel_virtualbase_evaluateAssignment(void* self, int id, bool* ok);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateInitialization = 0;

	// Subclass to allow providing a Go implementation
	virtual void evaluateInitialization(QScxmlExecutableContent::EvaluatorId id, bool* ok) override {
		if (handle__evaluateInitialization == 0) {
			QScxmlCppDataModel::evaluateInitialization(id, ok);
			return;
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		miqt_exec_callback_QScxmlCppDataModel_evaluateInitialization(this, handle__evaluateInitialization, sigval1, sigval2);

	}

	friend void QScxmlCppDataModel_virtualbase_evaluateInitialization(void* self, int id, bool* ok);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateForeach = 0;

	// Subclass to allow providing a Go implementation
	virtual void evaluateForeach(QScxmlExecutableContent::EvaluatorId id, bool* ok, QScxmlDataModel::ForeachLoopBody* body) override {
		if (handle__evaluateForeach == 0) {
			QScxmlCppDataModel::evaluateForeach(id, ok, body);
			return;
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		QScxmlDataModel__ForeachLoopBody* sigval3 = body;
		miqt_exec_callback_QScxmlCppDataModel_evaluateForeach(this, handle__evaluateForeach, sigval1, sigval2, sigval3);

	}

	friend void QScxmlCppDataModel_virtualbase_evaluateForeach(void* self, int id, bool* ok, QScxmlDataModel__ForeachLoopBody* body);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setScxmlEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void setScxmlEvent(const QScxmlEvent& scxmlEvent) override {
		if (handle__setScxmlEvent == 0) {
			QScxmlCppDataModel::setScxmlEvent(scxmlEvent);
			return;
		}

		const QScxmlEvent& scxmlEvent_ret = scxmlEvent;
		// Cast returned reference into pointer
		QScxmlEvent* sigval1 = const_cast<QScxmlEvent*>(&scxmlEvent_ret);
		miqt_exec_callback_QScxmlCppDataModel_setScxmlEvent(this, handle__setScxmlEvent, sigval1);

	}

	friend void QScxmlCppDataModel_virtualbase_setScxmlEvent(void* self, QScxmlEvent* scxmlEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scxmlProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant scxmlProperty(const QString& name) const override {
		if (handle__scxmlProperty == 0) {
			return QScxmlCppDataModel::scxmlProperty(name);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		QVariant* callback_return_value = miqt_exec_callback_QScxmlCppDataModel_scxmlProperty(this, handle__scxmlProperty, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QScxmlCppDataModel_virtualbase_scxmlProperty(const void* self, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasScxmlProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasScxmlProperty(const QString& name) const override {
		if (handle__hasScxmlProperty == 0) {
			return QScxmlCppDataModel::hasScxmlProperty(name);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		bool callback_return_value = miqt_exec_callback_QScxmlCppDataModel_hasScxmlProperty(this, handle__hasScxmlProperty, sigval1);
		return callback_return_value;
	}

	friend bool QScxmlCppDataModel_virtualbase_hasScxmlProperty(const void* self, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setScxmlProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setScxmlProperty(const QString& name, const QVariant& value, const QString& context) override {
		if (handle__setScxmlProperty == 0) {
			return QScxmlCppDataModel::setScxmlProperty(name, value, context);
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
		bool callback_return_value = miqt_exec_callback_QScxmlCppDataModel_setScxmlProperty(this, handle__setScxmlProperty, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QScxmlCppDataModel_virtualbase_setScxmlProperty(void* self, struct miqt_string name, QVariant* value, struct miqt_string context);

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
		struct miqt_string callback_return_value = miqt_exec_callback_QScxmlCppDataModel_evaluateToString(this, handle__evaluateToString, sigval1, sigval2);
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
		bool callback_return_value = miqt_exec_callback_QScxmlCppDataModel_evaluateToBool(this, handle__evaluateToBool, sigval1, sigval2);
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
		QVariant* callback_return_value = miqt_exec_callback_QScxmlCppDataModel_evaluateToVariant(this, handle__evaluateToVariant, sigval1, sigval2);
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
		miqt_exec_callback_QScxmlCppDataModel_evaluateToVoid(this, handle__evaluateToVoid, sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QScxmlCppDataModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QScxmlCppDataModel_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QScxmlCppDataModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QScxmlCppDataModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QScxmlCppDataModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QScxmlCppDataModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QScxmlCppDataModel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QScxmlCppDataModel_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QScxmlCppDataModel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QScxmlCppDataModel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QScxmlCppDataModel_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QScxmlCppDataModel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QScxmlCppDataModel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QScxmlCppDataModel_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QScxmlCppDataModel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QScxmlCppDataModel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScxmlCppDataModel_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QScxmlCppDataModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QScxmlCppDataModel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScxmlCppDataModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QScxmlCppDataModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QScxmlCppDataModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QScxmlCppDataModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QScxmlCppDataModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QScxmlCppDataModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QScxmlCppDataModel* QScxmlCppDataModel_new() {
	return new (std::nothrow) MiqtVirtualQScxmlCppDataModel();
}

QScxmlCppDataModel* QScxmlCppDataModel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQScxmlCppDataModel(parent);
}

void QScxmlCppDataModel_virtbase(QScxmlCppDataModel* src, QScxmlDataModel** outptr_QScxmlDataModel) {
	*outptr_QScxmlDataModel = static_cast<QScxmlDataModel*>(src);
}

QMetaObject* QScxmlCppDataModel_metaObject(const QScxmlCppDataModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScxmlCppDataModel_metacast(QScxmlCppDataModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScxmlCppDataModel_tr(const char* s) {
	QString _ret = QScxmlCppDataModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScxmlCppDataModel_setup(QScxmlCppDataModel* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialDataValues) {
	QVariantMap initialDataValues_QMap;
	struct miqt_string* initialDataValues_karr = static_cast<struct miqt_string*>(initialDataValues.keys);
	QVariant** initialDataValues_varr = static_cast<QVariant**>(initialDataValues.values);
	for(size_t i = 0; i < initialDataValues.len; ++i) {
		QString initialDataValues_karr_i_QString = QString::fromUtf8(initialDataValues_karr[i].data, initialDataValues_karr[i].len);
		initialDataValues_QMap[initialDataValues_karr_i_QString] = *(initialDataValues_varr[i]);
	}
	return self->setup(initialDataValues_QMap);
}

void QScxmlCppDataModel_evaluateAssignment(QScxmlCppDataModel* self, int id, bool* ok) {
	self->evaluateAssignment(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

void QScxmlCppDataModel_evaluateInitialization(QScxmlCppDataModel* self, int id, bool* ok) {
	self->evaluateInitialization(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

void QScxmlCppDataModel_evaluateForeach(QScxmlCppDataModel* self, int id, bool* ok, QScxmlDataModel__ForeachLoopBody* body) {
	self->evaluateForeach(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok, body);
}

void QScxmlCppDataModel_setScxmlEvent(QScxmlCppDataModel* self, QScxmlEvent* scxmlEvent) {
	self->setScxmlEvent(*scxmlEvent);
}

QScxmlEvent* QScxmlCppDataModel_scxmlEvent(const QScxmlCppDataModel* self) {
	const QScxmlEvent& _ret = self->scxmlEvent();
	// Cast returned reference into pointer
	return const_cast<QScxmlEvent*>(&_ret);
}

QVariant* QScxmlCppDataModel_scxmlProperty(const QScxmlCppDataModel* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(self->scxmlProperty(name_QString));
}

bool QScxmlCppDataModel_hasScxmlProperty(const QScxmlCppDataModel* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->hasScxmlProperty(name_QString);
}

bool QScxmlCppDataModel_setScxmlProperty(QScxmlCppDataModel* self, struct miqt_string name, QVariant* value, struct miqt_string context) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString context_QString = QString::fromUtf8(context.data, context.len);
	return self->setScxmlProperty(name_QString, *value, context_QString);
}

bool QScxmlCppDataModel_inState(const QScxmlCppDataModel* self, struct miqt_string stateName) {
	QString stateName_QString = QString::fromUtf8(stateName.data, stateName.len);
	return self->inState(stateName_QString);
}

struct miqt_string QScxmlCppDataModel_tr2(const char* s, const char* c) {
	QString _ret = QScxmlCppDataModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScxmlCppDataModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QScxmlCppDataModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScxmlCppDataModel_override_virtual_setup(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setup = slot;
	return true;
}

bool QScxmlCppDataModel_virtualbase_setup(void* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialDataValues) {
	QVariantMap initialDataValues_QMap;
	struct miqt_string* initialDataValues_karr = static_cast<struct miqt_string*>(initialDataValues.keys);
	QVariant** initialDataValues_varr = static_cast<QVariant**>(initialDataValues.values);
	for(size_t i = 0; i < initialDataValues.len; ++i) {
		QString initialDataValues_karr_i_QString = QString::fromUtf8(initialDataValues_karr[i].data, initialDataValues_karr[i].len);
		initialDataValues_QMap[initialDataValues_karr_i_QString] = *(initialDataValues_varr[i]);
	}
	return static_cast<MiqtVirtualQScxmlCppDataModel*>(self)->QScxmlCppDataModel::setup(initialDataValues_QMap);
}

bool QScxmlCppDataModel_override_virtual_evaluateAssignment(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateAssignment = slot;
	return true;
}

void QScxmlCppDataModel_virtualbase_evaluateAssignment(void* self, int id, bool* ok) {
	static_cast<MiqtVirtualQScxmlCppDataModel*>(self)->QScxmlCppDataModel::evaluateAssignment(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

bool QScxmlCppDataModel_override_virtual_evaluateInitialization(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateInitialization = slot;
	return true;
}

void QScxmlCppDataModel_virtualbase_evaluateInitialization(void* self, int id, bool* ok) {
	static_cast<MiqtVirtualQScxmlCppDataModel*>(self)->QScxmlCppDataModel::evaluateInitialization(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

bool QScxmlCppDataModel_override_virtual_evaluateForeach(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateForeach = slot;
	return true;
}

void QScxmlCppDataModel_virtualbase_evaluateForeach(void* self, int id, bool* ok, QScxmlDataModel__ForeachLoopBody* body) {
	static_cast<MiqtVirtualQScxmlCppDataModel*>(self)->QScxmlCppDataModel::evaluateForeach(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok, body);
}

bool QScxmlCppDataModel_override_virtual_setScxmlEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setScxmlEvent = slot;
	return true;
}

void QScxmlCppDataModel_virtualbase_setScxmlEvent(void* self, QScxmlEvent* scxmlEvent) {
	static_cast<MiqtVirtualQScxmlCppDataModel*>(self)->QScxmlCppDataModel::setScxmlEvent(*scxmlEvent);
}

bool QScxmlCppDataModel_override_virtual_scxmlProperty(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scxmlProperty = slot;
	return true;
}

QVariant* QScxmlCppDataModel_virtualbase_scxmlProperty(const void* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(static_cast<const MiqtVirtualQScxmlCppDataModel*>(self)->QScxmlCppDataModel::scxmlProperty(name_QString));
}

bool QScxmlCppDataModel_override_virtual_hasScxmlProperty(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasScxmlProperty = slot;
	return true;
}

bool QScxmlCppDataModel_virtualbase_hasScxmlProperty(const void* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<const MiqtVirtualQScxmlCppDataModel*>(self)->QScxmlCppDataModel::hasScxmlProperty(name_QString);
}

bool QScxmlCppDataModel_override_virtual_setScxmlProperty(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setScxmlProperty = slot;
	return true;
}

bool QScxmlCppDataModel_virtualbase_setScxmlProperty(void* self, struct miqt_string name, QVariant* value, struct miqt_string context) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString context_QString = QString::fromUtf8(context.data, context.len);
	return static_cast<MiqtVirtualQScxmlCppDataModel*>(self)->QScxmlCppDataModel::setScxmlProperty(name_QString, *value, context_QString);
}

bool QScxmlCppDataModel_override_virtual_evaluateToString(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateToString = slot;
	return true;
}

bool QScxmlCppDataModel_override_virtual_evaluateToBool(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateToBool = slot;
	return true;
}

bool QScxmlCppDataModel_override_virtual_evaluateToVariant(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateToVariant = slot;
	return true;
}

bool QScxmlCppDataModel_override_virtual_evaluateToVoid(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateToVoid = slot;
	return true;
}

bool QScxmlCppDataModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QScxmlCppDataModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQScxmlCppDataModel*>(self)->QScxmlCppDataModel::event(event);
}

bool QScxmlCppDataModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QScxmlCppDataModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQScxmlCppDataModel*>(self)->QScxmlCppDataModel::eventFilter(watched, event);
}

bool QScxmlCppDataModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QScxmlCppDataModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQScxmlCppDataModel*>(self)->QScxmlCppDataModel::timerEvent(event);
}

bool QScxmlCppDataModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QScxmlCppDataModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQScxmlCppDataModel*>(self)->QScxmlCppDataModel::childEvent(event);
}

bool QScxmlCppDataModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QScxmlCppDataModel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQScxmlCppDataModel*>(self)->QScxmlCppDataModel::customEvent(event);
}

bool QScxmlCppDataModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QScxmlCppDataModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScxmlCppDataModel*>(self)->QScxmlCppDataModel::connectNotify(*signal);
}

bool QScxmlCppDataModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QScxmlCppDataModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScxmlCppDataModel*>(self)->QScxmlCppDataModel::disconnectNotify(*signal);
}

QObject* QScxmlCppDataModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QScxmlCppDataModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QScxmlCppDataModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QScxmlCppDataModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQScxmlCppDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlCppDataModel*>( (QScxmlCppDataModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QScxmlCppDataModel_delete(QScxmlCppDataModel* self) {
	delete self;
}

