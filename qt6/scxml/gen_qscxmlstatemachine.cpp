#include <QIODevice>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlCompiler__Loader
#include <QScxmlDataModel>
#include <QScxmlError>
#include <QScxmlEvent>
#include <QScxmlInvokableService>
#include <QScxmlStateMachine>
#include <QScxmlTableData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qscxmlstatemachine.h>
#include "gen_qscxmlstatemachine.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QScxmlStateMachine_runningChanged(intptr_t, bool);
void miqt_exec_callback_QScxmlStateMachine_invokedServicesChanged(intptr_t, struct miqt_array /* of QScxmlInvokableService* */ );
void miqt_exec_callback_QScxmlStateMachine_log(intptr_t, struct miqt_string, struct miqt_string);
void miqt_exec_callback_QScxmlStateMachine_reachedStableState(intptr_t);
void miqt_exec_callback_QScxmlStateMachine_finished(intptr_t);
void miqt_exec_callback_QScxmlStateMachine_dataModelChanged(intptr_t, QScxmlDataModel*);
void miqt_exec_callback_QScxmlStateMachine_initialValuesChanged(intptr_t, struct miqt_map /* of struct miqt_string to QVariant* */ );
void miqt_exec_callback_QScxmlStateMachine_initializedChanged(intptr_t, bool);
void miqt_exec_callback_QScxmlStateMachine_loaderChanged(intptr_t, QScxmlCompiler__Loader*);
void miqt_exec_callback_QScxmlStateMachine_tableDataChanged(intptr_t, QScxmlTableData*);
#ifdef __cplusplus
} /* extern C */
#endif

void QScxmlStateMachine_virtbase(QScxmlStateMachine* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QScxmlStateMachine_metaObject(const QScxmlStateMachine* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScxmlStateMachine_metacast(QScxmlStateMachine* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScxmlStateMachine_tr(const char* s) {
	QString _ret = QScxmlStateMachine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QScxmlStateMachine* QScxmlStateMachine_fromFile(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QScxmlStateMachine::fromFile(fileName_QString);
}

QScxmlStateMachine* QScxmlStateMachine_fromData(QIODevice* data) {
	return QScxmlStateMachine::fromData(data);
}

struct miqt_array /* of QScxmlError* */  QScxmlStateMachine_parseErrors(const QScxmlStateMachine* self) {
	QList<QScxmlError> _ret = self->parseErrors();
	// Convert QList<> from C++ memory to manually-managed C memory
	QScxmlError** _arr = static_cast<QScxmlError**>(malloc(sizeof(QScxmlError*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QScxmlError(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QScxmlStateMachine_sessionId(const QScxmlStateMachine* self) {
	QString _ret = self->sessionId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScxmlStateMachine_isInvoked(const QScxmlStateMachine* self) {
	return self->isInvoked();
}

bool QScxmlStateMachine_isInitialized(const QScxmlStateMachine* self) {
	return self->isInitialized();
}

void QScxmlStateMachine_setDataModel(QScxmlStateMachine* self, QScxmlDataModel* model) {
	self->setDataModel(model);
}

QScxmlDataModel* QScxmlStateMachine_dataModel(const QScxmlStateMachine* self) {
	return self->dataModel();
}

void QScxmlStateMachine_setLoader(QScxmlStateMachine* self, QScxmlCompiler__Loader* loader) {
	self->setLoader(loader);
}

QScxmlCompiler__Loader* QScxmlStateMachine_loader(const QScxmlStateMachine* self) {
	return self->loader();
}

bool QScxmlStateMachine_isRunning(const QScxmlStateMachine* self) {
	return self->isRunning();
}

void QScxmlStateMachine_setRunning(QScxmlStateMachine* self, bool running) {
	self->setRunning(running);
}

struct miqt_map /* of struct miqt_string to QVariant* */  QScxmlStateMachine_initialValues(QScxmlStateMachine* self) {
	QVariantMap _ret = self->initialValues();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _mapkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _mapkey_b = _mapkey_ret.toUtf8();
		struct miqt_string _mapkey_ms;
		_mapkey_ms.len = _mapkey_b.length();
		_mapkey_ms.data = static_cast<char*>(malloc(_mapkey_ms.len));
		memcpy(_mapkey_ms.data, _mapkey_b.data(), _mapkey_ms.len);
		_karr[_ctr] = _mapkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

void QScxmlStateMachine_setInitialValues(QScxmlStateMachine* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialValues) {
	QVariantMap initialValues_QMap;
	struct miqt_string* initialValues_karr = static_cast<struct miqt_string*>(initialValues.keys);
	QVariant** initialValues_varr = static_cast<QVariant**>(initialValues.values);
	for(size_t i = 0; i < initialValues.len; ++i) {
		QString initialValues_karr_i_QString = QString::fromUtf8(initialValues_karr[i].data, initialValues_karr[i].len);
		initialValues_QMap[initialValues_karr_i_QString] = *(initialValues_varr[i]);
	}
	self->setInitialValues(initialValues_QMap);
}

struct miqt_string QScxmlStateMachine_name(const QScxmlStateMachine* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QScxmlStateMachine_stateNames(const QScxmlStateMachine* self) {
	QStringList _ret = self->stateNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QScxmlStateMachine_activeStateNames(const QScxmlStateMachine* self) {
	QStringList _ret = self->activeStateNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QScxmlStateMachine_isActive(const QScxmlStateMachine* self, struct miqt_string scxmlStateName) {
	QString scxmlStateName_QString = QString::fromUtf8(scxmlStateName.data, scxmlStateName.len);
	return self->isActive(scxmlStateName_QString);
}

QMetaObject__Connection* QScxmlStateMachine_connectToState(QScxmlStateMachine* self, struct miqt_string scxmlStateName, QObject* receiver, const char* method) {
	QString scxmlStateName_QString = QString::fromUtf8(scxmlStateName.data, scxmlStateName.len);
	return new QMetaObject::Connection(self->connectToState(scxmlStateName_QString, receiver, method));
}

QMetaObject__Connection* QScxmlStateMachine_connectToEvent(QScxmlStateMachine* self, struct miqt_string scxmlEventSpec, QObject* receiver, const char* method) {
	QString scxmlEventSpec_QString = QString::fromUtf8(scxmlEventSpec.data, scxmlEventSpec.len);
	return new QMetaObject::Connection(self->connectToEvent(scxmlEventSpec_QString, receiver, method));
}

void QScxmlStateMachine_submitEvent(QScxmlStateMachine* self, QScxmlEvent* event) {
	self->submitEvent(event);
}

void QScxmlStateMachine_submitEventWithEventName(QScxmlStateMachine* self, struct miqt_string eventName) {
	QString eventName_QString = QString::fromUtf8(eventName.data, eventName.len);
	self->submitEvent(eventName_QString);
}

void QScxmlStateMachine_submitEvent2(QScxmlStateMachine* self, struct miqt_string eventName, QVariant* data) {
	QString eventName_QString = QString::fromUtf8(eventName.data, eventName.len);
	self->submitEvent(eventName_QString, *data);
}

void QScxmlStateMachine_cancelDelayedEvent(QScxmlStateMachine* self, struct miqt_string sendId) {
	QString sendId_QString = QString::fromUtf8(sendId.data, sendId.len);
	self->cancelDelayedEvent(sendId_QString);
}

bool QScxmlStateMachine_isDispatchableTarget(const QScxmlStateMachine* self, struct miqt_string target) {
	QString target_QString = QString::fromUtf8(target.data, target.len);
	return self->isDispatchableTarget(target_QString);
}

struct miqt_array /* of QScxmlInvokableService* */  QScxmlStateMachine_invokedServices(const QScxmlStateMachine* self) {
	QList<QScxmlInvokableService *> _ret = self->invokedServices();
	// Convert QList<> from C++ memory to manually-managed C memory
	QScxmlInvokableService** _arr = static_cast<QScxmlInvokableService**>(malloc(sizeof(QScxmlInvokableService*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QScxmlTableData* QScxmlStateMachine_tableData(const QScxmlStateMachine* self) {
	return self->tableData();
}

void QScxmlStateMachine_setTableData(QScxmlStateMachine* self, QScxmlTableData* tableData) {
	self->setTableData(tableData);
}

void QScxmlStateMachine_runningChanged(QScxmlStateMachine* self, bool running) {
	self->runningChanged(running);
}

void QScxmlStateMachine_connect_runningChanged(QScxmlStateMachine* self, intptr_t slot) {
	QScxmlStateMachine::connect(self, static_cast<void (QScxmlStateMachine::*)(bool)>(&QScxmlStateMachine::runningChanged), self, [=](bool running) {
		bool sigval1 = running;
		miqt_exec_callback_QScxmlStateMachine_runningChanged(slot, sigval1);
	});
}

void QScxmlStateMachine_invokedServicesChanged(QScxmlStateMachine* self, struct miqt_array /* of QScxmlInvokableService* */  invokedServices) {
	QList<QScxmlInvokableService *> invokedServices_QList;
	invokedServices_QList.reserve(invokedServices.len);
	QScxmlInvokableService** invokedServices_arr = static_cast<QScxmlInvokableService**>(invokedServices.data);
	for(size_t i = 0; i < invokedServices.len; ++i) {
		invokedServices_QList.push_back(invokedServices_arr[i]);
	}
	self->invokedServicesChanged(invokedServices_QList);
}

void QScxmlStateMachine_connect_invokedServicesChanged(QScxmlStateMachine* self, intptr_t slot) {
	QScxmlStateMachine::connect(self, static_cast<void (QScxmlStateMachine::*)(const QList<QScxmlInvokableService *>&)>(&QScxmlStateMachine::invokedServicesChanged), self, [=](const QList<QScxmlInvokableService *>& invokedServices) {
		const QList<QScxmlInvokableService *>& invokedServices_ret = invokedServices;
		// Convert QList<> from C++ memory to manually-managed C memory
		QScxmlInvokableService** invokedServices_arr = static_cast<QScxmlInvokableService**>(malloc(sizeof(QScxmlInvokableService*) * invokedServices_ret.length()));
		for (size_t i = 0, e = invokedServices_ret.length(); i < e; ++i) {
			invokedServices_arr[i] = invokedServices_ret[i];
		}
		struct miqt_array invokedServices_out;
		invokedServices_out.len = invokedServices_ret.length();
		invokedServices_out.data = static_cast<void*>(invokedServices_arr);
		struct miqt_array /* of QScxmlInvokableService* */  sigval1 = invokedServices_out;
		miqt_exec_callback_QScxmlStateMachine_invokedServicesChanged(slot, sigval1);
	});
}

void QScxmlStateMachine_log(QScxmlStateMachine* self, struct miqt_string label, struct miqt_string msg) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString msg_QString = QString::fromUtf8(msg.data, msg.len);
	self->log(label_QString, msg_QString);
}

void QScxmlStateMachine_connect_log(QScxmlStateMachine* self, intptr_t slot) {
	QScxmlStateMachine::connect(self, static_cast<void (QScxmlStateMachine::*)(const QString&, const QString&)>(&QScxmlStateMachine::log), self, [=](const QString& label, const QString& msg) {
		const QString label_ret = label;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray label_b = label_ret.toUtf8();
		struct miqt_string label_ms;
		label_ms.len = label_b.length();
		label_ms.data = static_cast<char*>(malloc(label_ms.len));
		memcpy(label_ms.data, label_b.data(), label_ms.len);
		struct miqt_string sigval1 = label_ms;
		const QString msg_ret = msg;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray msg_b = msg_ret.toUtf8();
		struct miqt_string msg_ms;
		msg_ms.len = msg_b.length();
		msg_ms.data = static_cast<char*>(malloc(msg_ms.len));
		memcpy(msg_ms.data, msg_b.data(), msg_ms.len);
		struct miqt_string sigval2 = msg_ms;
		miqt_exec_callback_QScxmlStateMachine_log(slot, sigval1, sigval2);
	});
}

void QScxmlStateMachine_reachedStableState(QScxmlStateMachine* self) {
	self->reachedStableState();
}

void QScxmlStateMachine_connect_reachedStableState(QScxmlStateMachine* self, intptr_t slot) {
	QScxmlStateMachine::connect(self, static_cast<void (QScxmlStateMachine::*)()>(&QScxmlStateMachine::reachedStableState), self, [=]() {
		miqt_exec_callback_QScxmlStateMachine_reachedStableState(slot);
	});
}

void QScxmlStateMachine_finished(QScxmlStateMachine* self) {
	self->finished();
}

void QScxmlStateMachine_connect_finished(QScxmlStateMachine* self, intptr_t slot) {
	QScxmlStateMachine::connect(self, static_cast<void (QScxmlStateMachine::*)()>(&QScxmlStateMachine::finished), self, [=]() {
		miqt_exec_callback_QScxmlStateMachine_finished(slot);
	});
}

void QScxmlStateMachine_dataModelChanged(QScxmlStateMachine* self, QScxmlDataModel* model) {
	self->dataModelChanged(model);
}

void QScxmlStateMachine_connect_dataModelChanged(QScxmlStateMachine* self, intptr_t slot) {
	QScxmlStateMachine::connect(self, static_cast<void (QScxmlStateMachine::*)(QScxmlDataModel*)>(&QScxmlStateMachine::dataModelChanged), self, [=](QScxmlDataModel* model) {
		QScxmlDataModel* sigval1 = model;
		miqt_exec_callback_QScxmlStateMachine_dataModelChanged(slot, sigval1);
	});
}

void QScxmlStateMachine_initialValuesChanged(QScxmlStateMachine* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialValues) {
	QVariantMap initialValues_QMap;
	struct miqt_string* initialValues_karr = static_cast<struct miqt_string*>(initialValues.keys);
	QVariant** initialValues_varr = static_cast<QVariant**>(initialValues.values);
	for(size_t i = 0; i < initialValues.len; ++i) {
		QString initialValues_karr_i_QString = QString::fromUtf8(initialValues_karr[i].data, initialValues_karr[i].len);
		initialValues_QMap[initialValues_karr_i_QString] = *(initialValues_varr[i]);
	}
	self->initialValuesChanged(initialValues_QMap);
}

void QScxmlStateMachine_connect_initialValuesChanged(QScxmlStateMachine* self, intptr_t slot) {
	QScxmlStateMachine::connect(self, static_cast<void (QScxmlStateMachine::*)(const QVariantMap&)>(&QScxmlStateMachine::initialValuesChanged), self, [=](const QVariantMap& initialValues) {
		const QVariantMap& initialValues_ret = initialValues;
		// Convert QMap<> from C++ memory to manually-managed C memory
		struct miqt_string* initialValues_karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * initialValues_ret.size()));
		QVariant** initialValues_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * initialValues_ret.size()));
		int initialValues_ctr = 0;
		for (auto initialValues_itr = initialValues_ret.keyValueBegin(); initialValues_itr != initialValues_ret.keyValueEnd(); ++initialValues_itr) {
			QString initialValues_mapkey_ret = initialValues_itr->first;
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray initialValues_mapkey_b = initialValues_mapkey_ret.toUtf8();
			struct miqt_string initialValues_mapkey_ms;
			initialValues_mapkey_ms.len = initialValues_mapkey_b.length();
			initialValues_mapkey_ms.data = static_cast<char*>(malloc(initialValues_mapkey_ms.len));
			memcpy(initialValues_mapkey_ms.data, initialValues_mapkey_b.data(), initialValues_mapkey_ms.len);
			initialValues_karr[initialValues_ctr] = initialValues_mapkey_ms;
			initialValues_varr[initialValues_ctr] = new QVariant(initialValues_itr->second);
			initialValues_ctr++;
		}
		struct miqt_map initialValues_out;
		initialValues_out.len = initialValues_ret.size();
		initialValues_out.keys = static_cast<void*>(initialValues_karr);
		initialValues_out.values = static_cast<void*>(initialValues_varr);
		struct miqt_map /* of struct miqt_string to QVariant* */  sigval1 = initialValues_out;
		miqt_exec_callback_QScxmlStateMachine_initialValuesChanged(slot, sigval1);
	});
}

void QScxmlStateMachine_initializedChanged(QScxmlStateMachine* self, bool initialized) {
	self->initializedChanged(initialized);
}

void QScxmlStateMachine_connect_initializedChanged(QScxmlStateMachine* self, intptr_t slot) {
	QScxmlStateMachine::connect(self, static_cast<void (QScxmlStateMachine::*)(bool)>(&QScxmlStateMachine::initializedChanged), self, [=](bool initialized) {
		bool sigval1 = initialized;
		miqt_exec_callback_QScxmlStateMachine_initializedChanged(slot, sigval1);
	});
}

void QScxmlStateMachine_loaderChanged(QScxmlStateMachine* self, QScxmlCompiler__Loader* loader) {
	self->loaderChanged(loader);
}

void QScxmlStateMachine_connect_loaderChanged(QScxmlStateMachine* self, intptr_t slot) {
	QScxmlStateMachine::connect(self, static_cast<void (QScxmlStateMachine::*)(QScxmlCompiler::Loader*)>(&QScxmlStateMachine::loaderChanged), self, [=](QScxmlCompiler::Loader* loader) {
		QScxmlCompiler__Loader* sigval1 = loader;
		miqt_exec_callback_QScxmlStateMachine_loaderChanged(slot, sigval1);
	});
}

void QScxmlStateMachine_tableDataChanged(QScxmlStateMachine* self, QScxmlTableData* tableData) {
	self->tableDataChanged(tableData);
}

void QScxmlStateMachine_connect_tableDataChanged(QScxmlStateMachine* self, intptr_t slot) {
	QScxmlStateMachine::connect(self, static_cast<void (QScxmlStateMachine::*)(QScxmlTableData*)>(&QScxmlStateMachine::tableDataChanged), self, [=](QScxmlTableData* tableData) {
		QScxmlTableData* sigval1 = tableData;
		miqt_exec_callback_QScxmlStateMachine_tableDataChanged(slot, sigval1);
	});
}

void QScxmlStateMachine_start(QScxmlStateMachine* self) {
	self->start();
}

void QScxmlStateMachine_stop(QScxmlStateMachine* self) {
	self->stop();
}

bool QScxmlStateMachine_init(QScxmlStateMachine* self) {
	return self->init();
}

struct miqt_string QScxmlStateMachine_tr2(const char* s, const char* c) {
	QString _ret = QScxmlStateMachine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScxmlStateMachine_tr3(const char* s, const char* c, int n) {
	QString _ret = QScxmlStateMachine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QScxmlStateMachine* QScxmlStateMachine_fromData2(QIODevice* data, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QScxmlStateMachine::fromData(data, fileName_QString);
}

struct miqt_array /* of struct miqt_string */  QScxmlStateMachine_stateNamesWithCompress(const QScxmlStateMachine* self, bool compress) {
	QStringList _ret = self->stateNames(compress);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QScxmlStateMachine_activeStateNamesWithCompress(const QScxmlStateMachine* self, bool compress) {
	QStringList _ret = self->activeStateNames(compress);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QMetaObject__Connection* QScxmlStateMachine_connectToState2(QScxmlStateMachine* self, struct miqt_string scxmlStateName, QObject* receiver, const char* method, int type) {
	QString scxmlStateName_QString = QString::fromUtf8(scxmlStateName.data, scxmlStateName.len);
	return new QMetaObject::Connection(self->connectToState(scxmlStateName_QString, receiver, method, static_cast<Qt::ConnectionType>(type)));
}

QMetaObject__Connection* QScxmlStateMachine_connectToEvent2(QScxmlStateMachine* self, struct miqt_string scxmlEventSpec, QObject* receiver, const char* method, int type) {
	QString scxmlEventSpec_QString = QString::fromUtf8(scxmlEventSpec.data, scxmlEventSpec.len);
	return new QMetaObject::Connection(self->connectToEvent(scxmlEventSpec_QString, receiver, method, static_cast<Qt::ConnectionType>(type)));
}

void QScxmlStateMachine_delete(QScxmlStateMachine* self) {
	delete self;
}

