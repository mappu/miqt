#include <QChildEvent>
#include <QEvent>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QScxmlDataModel>
#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlDataModel__ForeachLoopBody
#include <QScxmlEvent>
#include <QScxmlNullDataModel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qscxmlnulldatamodel.h>
#include "gen_qscxmlnulldatamodel.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QScxmlNullDataModel_setup(QScxmlNullDataModel*, intptr_t, struct miqt_map /* of struct miqt_string to QVariant* */ );
struct miqt_string miqt_exec_callback_QScxmlNullDataModel_evaluateToString(QScxmlNullDataModel*, intptr_t, int, bool*);
bool miqt_exec_callback_QScxmlNullDataModel_evaluateToBool(QScxmlNullDataModel*, intptr_t, int, bool*);
QVariant* miqt_exec_callback_QScxmlNullDataModel_evaluateToVariant(QScxmlNullDataModel*, intptr_t, int, bool*);
void miqt_exec_callback_QScxmlNullDataModel_evaluateToVoid(QScxmlNullDataModel*, intptr_t, int, bool*);
void miqt_exec_callback_QScxmlNullDataModel_evaluateAssignment(QScxmlNullDataModel*, intptr_t, int, bool*);
void miqt_exec_callback_QScxmlNullDataModel_evaluateInitialization(QScxmlNullDataModel*, intptr_t, int, bool*);
void miqt_exec_callback_QScxmlNullDataModel_evaluateForeach(QScxmlNullDataModel*, intptr_t, int, bool*, QScxmlDataModel__ForeachLoopBody*);
void miqt_exec_callback_QScxmlNullDataModel_setScxmlEvent(QScxmlNullDataModel*, intptr_t, QScxmlEvent*);
QVariant* miqt_exec_callback_QScxmlNullDataModel_scxmlProperty(const QScxmlNullDataModel*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QScxmlNullDataModel_hasScxmlProperty(const QScxmlNullDataModel*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QScxmlNullDataModel_setScxmlProperty(QScxmlNullDataModel*, intptr_t, struct miqt_string, QVariant*, struct miqt_string);
bool miqt_exec_callback_QScxmlNullDataModel_event(QScxmlNullDataModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QScxmlNullDataModel_eventFilter(QScxmlNullDataModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScxmlNullDataModel_timerEvent(QScxmlNullDataModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScxmlNullDataModel_childEvent(QScxmlNullDataModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScxmlNullDataModel_customEvent(QScxmlNullDataModel*, intptr_t, QEvent*);
void miqt_exec_callback_QScxmlNullDataModel_connectNotify(QScxmlNullDataModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScxmlNullDataModel_disconnectNotify(QScxmlNullDataModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScxmlNullDataModel final : public QScxmlNullDataModel {
public:

	MiqtVirtualQScxmlNullDataModel(): QScxmlNullDataModel() {}
	MiqtVirtualQScxmlNullDataModel(QObject* parent): QScxmlNullDataModel(parent) {}

	virtual ~MiqtVirtualQScxmlNullDataModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setup = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setup(const QVariantMap& initialDataValues) override {
		if (handle__setup == 0) {
			return QScxmlNullDataModel::setup(initialDataValues);
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
		bool callback_return_value = miqt_exec_callback_QScxmlNullDataModel_setup(this, handle__setup, sigval1);
		return callback_return_value;
	}

	friend bool QScxmlNullDataModel_virtualbase_setup(void* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialDataValues);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateToString = 0;

	// Subclass to allow providing a Go implementation
	virtual QString evaluateToString(QScxmlExecutableContent::EvaluatorId id, bool* ok) override {
		if (handle__evaluateToString == 0) {
			return QScxmlNullDataModel::evaluateToString(id, ok);
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		struct miqt_string callback_return_value = miqt_exec_callback_QScxmlNullDataModel_evaluateToString(this, handle__evaluateToString, sigval1, sigval2);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QScxmlNullDataModel_virtualbase_evaluateToString(void* self, int id, bool* ok);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateToBool = 0;

	// Subclass to allow providing a Go implementation
	virtual bool evaluateToBool(QScxmlExecutableContent::EvaluatorId id, bool* ok) override {
		if (handle__evaluateToBool == 0) {
			return QScxmlNullDataModel::evaluateToBool(id, ok);
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		bool callback_return_value = miqt_exec_callback_QScxmlNullDataModel_evaluateToBool(this, handle__evaluateToBool, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QScxmlNullDataModel_virtualbase_evaluateToBool(void* self, int id, bool* ok);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateToVariant = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant evaluateToVariant(QScxmlExecutableContent::EvaluatorId id, bool* ok) override {
		if (handle__evaluateToVariant == 0) {
			return QScxmlNullDataModel::evaluateToVariant(id, ok);
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		QVariant* callback_return_value = miqt_exec_callback_QScxmlNullDataModel_evaluateToVariant(this, handle__evaluateToVariant, sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QScxmlNullDataModel_virtualbase_evaluateToVariant(void* self, int id, bool* ok);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateToVoid = 0;

	// Subclass to allow providing a Go implementation
	virtual void evaluateToVoid(QScxmlExecutableContent::EvaluatorId id, bool* ok) override {
		if (handle__evaluateToVoid == 0) {
			QScxmlNullDataModel::evaluateToVoid(id, ok);
			return;
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		miqt_exec_callback_QScxmlNullDataModel_evaluateToVoid(this, handle__evaluateToVoid, sigval1, sigval2);

	}

	friend void QScxmlNullDataModel_virtualbase_evaluateToVoid(void* self, int id, bool* ok);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateAssignment = 0;

	// Subclass to allow providing a Go implementation
	virtual void evaluateAssignment(QScxmlExecutableContent::EvaluatorId id, bool* ok) override {
		if (handle__evaluateAssignment == 0) {
			QScxmlNullDataModel::evaluateAssignment(id, ok);
			return;
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		miqt_exec_callback_QScxmlNullDataModel_evaluateAssignment(this, handle__evaluateAssignment, sigval1, sigval2);

	}

	friend void QScxmlNullDataModel_virtualbase_evaluateAssignment(void* self, int id, bool* ok);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateInitialization = 0;

	// Subclass to allow providing a Go implementation
	virtual void evaluateInitialization(QScxmlExecutableContent::EvaluatorId id, bool* ok) override {
		if (handle__evaluateInitialization == 0) {
			QScxmlNullDataModel::evaluateInitialization(id, ok);
			return;
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		miqt_exec_callback_QScxmlNullDataModel_evaluateInitialization(this, handle__evaluateInitialization, sigval1, sigval2);

	}

	friend void QScxmlNullDataModel_virtualbase_evaluateInitialization(void* self, int id, bool* ok);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__evaluateForeach = 0;

	// Subclass to allow providing a Go implementation
	virtual void evaluateForeach(QScxmlExecutableContent::EvaluatorId id, bool* ok, QScxmlDataModel::ForeachLoopBody* body) override {
		if (handle__evaluateForeach == 0) {
			QScxmlNullDataModel::evaluateForeach(id, ok, body);
			return;
		}

		QScxmlExecutableContent::EvaluatorId id_ret = id;
		int sigval1 = static_cast<int>(id_ret);
		bool* sigval2 = ok;
		QScxmlDataModel__ForeachLoopBody* sigval3 = body;
		miqt_exec_callback_QScxmlNullDataModel_evaluateForeach(this, handle__evaluateForeach, sigval1, sigval2, sigval3);

	}

	friend void QScxmlNullDataModel_virtualbase_evaluateForeach(void* self, int id, bool* ok, QScxmlDataModel__ForeachLoopBody* body);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setScxmlEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void setScxmlEvent(const QScxmlEvent& event) override {
		if (handle__setScxmlEvent == 0) {
			QScxmlNullDataModel::setScxmlEvent(event);
			return;
		}

		const QScxmlEvent& event_ret = event;
		// Cast returned reference into pointer
		QScxmlEvent* sigval1 = const_cast<QScxmlEvent*>(&event_ret);
		miqt_exec_callback_QScxmlNullDataModel_setScxmlEvent(this, handle__setScxmlEvent, sigval1);

	}

	friend void QScxmlNullDataModel_virtualbase_setScxmlEvent(void* self, QScxmlEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scxmlProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant scxmlProperty(const QString& name) const override {
		if (handle__scxmlProperty == 0) {
			return QScxmlNullDataModel::scxmlProperty(name);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		QVariant* callback_return_value = miqt_exec_callback_QScxmlNullDataModel_scxmlProperty(this, handle__scxmlProperty, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QScxmlNullDataModel_virtualbase_scxmlProperty(const void* self, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasScxmlProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasScxmlProperty(const QString& name) const override {
		if (handle__hasScxmlProperty == 0) {
			return QScxmlNullDataModel::hasScxmlProperty(name);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		bool callback_return_value = miqt_exec_callback_QScxmlNullDataModel_hasScxmlProperty(this, handle__hasScxmlProperty, sigval1);
		return callback_return_value;
	}

	friend bool QScxmlNullDataModel_virtualbase_hasScxmlProperty(const void* self, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setScxmlProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setScxmlProperty(const QString& name, const QVariant& value, const QString& context) override {
		if (handle__setScxmlProperty == 0) {
			return QScxmlNullDataModel::setScxmlProperty(name, value, context);
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
		bool callback_return_value = miqt_exec_callback_QScxmlNullDataModel_setScxmlProperty(this, handle__setScxmlProperty, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QScxmlNullDataModel_virtualbase_setScxmlProperty(void* self, struct miqt_string name, QVariant* value, struct miqt_string context);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QScxmlNullDataModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QScxmlNullDataModel_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QScxmlNullDataModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QScxmlNullDataModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QScxmlNullDataModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QScxmlNullDataModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QScxmlNullDataModel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QScxmlNullDataModel_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QScxmlNullDataModel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QScxmlNullDataModel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QScxmlNullDataModel_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QScxmlNullDataModel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QScxmlNullDataModel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QScxmlNullDataModel_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QScxmlNullDataModel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QScxmlNullDataModel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScxmlNullDataModel_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QScxmlNullDataModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QScxmlNullDataModel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScxmlNullDataModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QScxmlNullDataModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QScxmlNullDataModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QScxmlNullDataModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QScxmlNullDataModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QScxmlNullDataModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QScxmlNullDataModel* QScxmlNullDataModel_new() {
	return new (std::nothrow) MiqtVirtualQScxmlNullDataModel();
}

QScxmlNullDataModel* QScxmlNullDataModel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQScxmlNullDataModel(parent);
}

void QScxmlNullDataModel_virtbase(QScxmlNullDataModel* src, QScxmlDataModel** outptr_QScxmlDataModel) {
	*outptr_QScxmlDataModel = static_cast<QScxmlDataModel*>(src);
}

QMetaObject* QScxmlNullDataModel_metaObject(const QScxmlNullDataModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScxmlNullDataModel_metacast(QScxmlNullDataModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScxmlNullDataModel_tr(const char* s) {
	QString _ret = QScxmlNullDataModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScxmlNullDataModel_setup(QScxmlNullDataModel* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialDataValues) {
	QVariantMap initialDataValues_QMap;
	struct miqt_string* initialDataValues_karr = static_cast<struct miqt_string*>(initialDataValues.keys);
	QVariant** initialDataValues_varr = static_cast<QVariant**>(initialDataValues.values);
	for(size_t i = 0; i < initialDataValues.len; ++i) {
		QString initialDataValues_karr_i_QString = QString::fromUtf8(initialDataValues_karr[i].data, initialDataValues_karr[i].len);
		initialDataValues_QMap[initialDataValues_karr_i_QString] = *(initialDataValues_varr[i]);
	}
	return self->setup(initialDataValues_QMap);
}

struct miqt_string QScxmlNullDataModel_evaluateToString(QScxmlNullDataModel* self, int id, bool* ok) {
	QString _ret = self->evaluateToString(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScxmlNullDataModel_evaluateToBool(QScxmlNullDataModel* self, int id, bool* ok) {
	return self->evaluateToBool(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

QVariant* QScxmlNullDataModel_evaluateToVariant(QScxmlNullDataModel* self, int id, bool* ok) {
	return new QVariant(self->evaluateToVariant(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok));
}

void QScxmlNullDataModel_evaluateToVoid(QScxmlNullDataModel* self, int id, bool* ok) {
	self->evaluateToVoid(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

void QScxmlNullDataModel_evaluateAssignment(QScxmlNullDataModel* self, int id, bool* ok) {
	self->evaluateAssignment(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

void QScxmlNullDataModel_evaluateInitialization(QScxmlNullDataModel* self, int id, bool* ok) {
	self->evaluateInitialization(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

void QScxmlNullDataModel_evaluateForeach(QScxmlNullDataModel* self, int id, bool* ok, QScxmlDataModel__ForeachLoopBody* body) {
	self->evaluateForeach(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok, body);
}

void QScxmlNullDataModel_setScxmlEvent(QScxmlNullDataModel* self, QScxmlEvent* event) {
	self->setScxmlEvent(*event);
}

QVariant* QScxmlNullDataModel_scxmlProperty(const QScxmlNullDataModel* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(self->scxmlProperty(name_QString));
}

bool QScxmlNullDataModel_hasScxmlProperty(const QScxmlNullDataModel* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->hasScxmlProperty(name_QString);
}

bool QScxmlNullDataModel_setScxmlProperty(QScxmlNullDataModel* self, struct miqt_string name, QVariant* value, struct miqt_string context) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString context_QString = QString::fromUtf8(context.data, context.len);
	return self->setScxmlProperty(name_QString, *value, context_QString);
}

struct miqt_string QScxmlNullDataModel_tr2(const char* s, const char* c) {
	QString _ret = QScxmlNullDataModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScxmlNullDataModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QScxmlNullDataModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScxmlNullDataModel_override_virtual_setup(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setup = slot;
	return true;
}

bool QScxmlNullDataModel_virtualbase_setup(void* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialDataValues) {
	QVariantMap initialDataValues_QMap;
	struct miqt_string* initialDataValues_karr = static_cast<struct miqt_string*>(initialDataValues.keys);
	QVariant** initialDataValues_varr = static_cast<QVariant**>(initialDataValues.values);
	for(size_t i = 0; i < initialDataValues.len; ++i) {
		QString initialDataValues_karr_i_QString = QString::fromUtf8(initialDataValues_karr[i].data, initialDataValues_karr[i].len);
		initialDataValues_QMap[initialDataValues_karr_i_QString] = *(initialDataValues_varr[i]);
	}
	return static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::setup(initialDataValues_QMap);
}

bool QScxmlNullDataModel_override_virtual_evaluateToString(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateToString = slot;
	return true;
}

struct miqt_string QScxmlNullDataModel_virtualbase_evaluateToString(void* self, int id, bool* ok) {
	QString _ret = static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::evaluateToString(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScxmlNullDataModel_override_virtual_evaluateToBool(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateToBool = slot;
	return true;
}

bool QScxmlNullDataModel_virtualbase_evaluateToBool(void* self, int id, bool* ok) {
	return static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::evaluateToBool(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

bool QScxmlNullDataModel_override_virtual_evaluateToVariant(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateToVariant = slot;
	return true;
}

QVariant* QScxmlNullDataModel_virtualbase_evaluateToVariant(void* self, int id, bool* ok) {
	return new QVariant(static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::evaluateToVariant(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok));
}

bool QScxmlNullDataModel_override_virtual_evaluateToVoid(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateToVoid = slot;
	return true;
}

void QScxmlNullDataModel_virtualbase_evaluateToVoid(void* self, int id, bool* ok) {
	static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::evaluateToVoid(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

bool QScxmlNullDataModel_override_virtual_evaluateAssignment(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateAssignment = slot;
	return true;
}

void QScxmlNullDataModel_virtualbase_evaluateAssignment(void* self, int id, bool* ok) {
	static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::evaluateAssignment(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

bool QScxmlNullDataModel_override_virtual_evaluateInitialization(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateInitialization = slot;
	return true;
}

void QScxmlNullDataModel_virtualbase_evaluateInitialization(void* self, int id, bool* ok) {
	static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::evaluateInitialization(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok);
}

bool QScxmlNullDataModel_override_virtual_evaluateForeach(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__evaluateForeach = slot;
	return true;
}

void QScxmlNullDataModel_virtualbase_evaluateForeach(void* self, int id, bool* ok, QScxmlDataModel__ForeachLoopBody* body) {
	static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::evaluateForeach(static_cast<QScxmlExecutableContent::EvaluatorId>(id), ok, body);
}

bool QScxmlNullDataModel_override_virtual_setScxmlEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setScxmlEvent = slot;
	return true;
}

void QScxmlNullDataModel_virtualbase_setScxmlEvent(void* self, QScxmlEvent* event) {
	static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::setScxmlEvent(*event);
}

bool QScxmlNullDataModel_override_virtual_scxmlProperty(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scxmlProperty = slot;
	return true;
}

QVariant* QScxmlNullDataModel_virtualbase_scxmlProperty(const void* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(static_cast<const MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::scxmlProperty(name_QString));
}

bool QScxmlNullDataModel_override_virtual_hasScxmlProperty(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasScxmlProperty = slot;
	return true;
}

bool QScxmlNullDataModel_virtualbase_hasScxmlProperty(const void* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<const MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::hasScxmlProperty(name_QString);
}

bool QScxmlNullDataModel_override_virtual_setScxmlProperty(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setScxmlProperty = slot;
	return true;
}

bool QScxmlNullDataModel_virtualbase_setScxmlProperty(void* self, struct miqt_string name, QVariant* value, struct miqt_string context) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString context_QString = QString::fromUtf8(context.data, context.len);
	return static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::setScxmlProperty(name_QString, *value, context_QString);
}

bool QScxmlNullDataModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QScxmlNullDataModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::event(event);
}

bool QScxmlNullDataModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QScxmlNullDataModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::eventFilter(watched, event);
}

bool QScxmlNullDataModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QScxmlNullDataModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::timerEvent(event);
}

bool QScxmlNullDataModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QScxmlNullDataModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::childEvent(event);
}

bool QScxmlNullDataModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QScxmlNullDataModel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::customEvent(event);
}

bool QScxmlNullDataModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QScxmlNullDataModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::connectNotify(*signal);
}

bool QScxmlNullDataModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QScxmlNullDataModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScxmlNullDataModel*>(self)->QScxmlNullDataModel::disconnectNotify(*signal);
}

QObject* QScxmlNullDataModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QScxmlNullDataModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QScxmlNullDataModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QScxmlNullDataModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQScxmlNullDataModel* self_cast = dynamic_cast<MiqtVirtualQScxmlNullDataModel*>( (QScxmlNullDataModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QScxmlNullDataModel_delete(QScxmlNullDataModel* self) {
	delete self;
}

