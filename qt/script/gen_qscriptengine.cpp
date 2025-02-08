#include <QChildEvent>
#include <QDateTime>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRegExp>
#include <QScriptClass>
#include <QScriptContext>
#include <QScriptEngine>
#include <QScriptEngineAgent>
#include <QScriptProgram>
#include <QScriptString>
#include <QScriptSyntaxCheckResult>
#include <QScriptValue>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qscriptengine.h>
#include "gen_qscriptengine.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QScriptEngine_signalHandlerException(intptr_t, QScriptValue*);
bool miqt_exec_callback_QScriptEngine_event(QScriptEngine*, intptr_t, QEvent*);
bool miqt_exec_callback_QScriptEngine_eventFilter(QScriptEngine*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScriptEngine_timerEvent(QScriptEngine*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScriptEngine_childEvent(QScriptEngine*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScriptEngine_customEvent(QScriptEngine*, intptr_t, QEvent*);
void miqt_exec_callback_QScriptEngine_connectNotify(QScriptEngine*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScriptEngine_disconnectNotify(QScriptEngine*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QScriptSyntaxCheckResult* QScriptSyntaxCheckResult_new(QScriptSyntaxCheckResult* other) {
	return new QScriptSyntaxCheckResult(*other);
}

int QScriptSyntaxCheckResult_state(const QScriptSyntaxCheckResult* self) {
	QScriptSyntaxCheckResult::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QScriptSyntaxCheckResult_errorLineNumber(const QScriptSyntaxCheckResult* self) {
	return self->errorLineNumber();
}

int QScriptSyntaxCheckResult_errorColumnNumber(const QScriptSyntaxCheckResult* self) {
	return self->errorColumnNumber();
}

struct miqt_string QScriptSyntaxCheckResult_errorMessage(const QScriptSyntaxCheckResult* self) {
	QString _ret = self->errorMessage();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScriptSyntaxCheckResult_operatorAssign(QScriptSyntaxCheckResult* self, QScriptSyntaxCheckResult* other) {
	self->operator=(*other);
}

void QScriptSyntaxCheckResult_delete(QScriptSyntaxCheckResult* self) {
	delete self;
}

class MiqtVirtualQScriptEngine final : public QScriptEngine {
public:

	MiqtVirtualQScriptEngine(): QScriptEngine() {};
	MiqtVirtualQScriptEngine(QObject* parent): QScriptEngine(parent) {};

	virtual ~MiqtVirtualQScriptEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QScriptEngine::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QScriptEngine_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QScriptEngine::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QScriptEngine::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QScriptEngine_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QScriptEngine::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QScriptEngine::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QScriptEngine_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QScriptEngine::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QScriptEngine::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QScriptEngine_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QScriptEngine::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QScriptEngine::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QScriptEngine_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QScriptEngine::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QScriptEngine::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScriptEngine_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QScriptEngine::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QScriptEngine::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScriptEngine_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QScriptEngine::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QScriptEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QScriptEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QScriptEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QScriptEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QScriptEngine* QScriptEngine_new() {
	return new MiqtVirtualQScriptEngine();
}

QScriptEngine* QScriptEngine_new2(QObject* parent) {
	return new MiqtVirtualQScriptEngine(parent);
}

void QScriptEngine_virtbase(QScriptEngine* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QScriptEngine_metaObject(const QScriptEngine* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScriptEngine_metacast(QScriptEngine* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScriptEngine_tr(const char* s) {
	QString _ret = QScriptEngine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptEngine_trUtf8(const char* s) {
	QString _ret = QScriptEngine::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QScriptValue* QScriptEngine_globalObject(const QScriptEngine* self) {
	return new QScriptValue(self->globalObject());
}

void QScriptEngine_setGlobalObject(QScriptEngine* self, QScriptValue* object) {
	self->setGlobalObject(*object);
}

QScriptContext* QScriptEngine_currentContext(const QScriptEngine* self) {
	return self->currentContext();
}

QScriptContext* QScriptEngine_pushContext(QScriptEngine* self) {
	return self->pushContext();
}

void QScriptEngine_popContext(QScriptEngine* self) {
	self->popContext();
}

bool QScriptEngine_canEvaluate(const QScriptEngine* self, struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	return self->canEvaluate(program_QString);
}

QScriptSyntaxCheckResult* QScriptEngine_checkSyntax(struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	return new QScriptSyntaxCheckResult(QScriptEngine::checkSyntax(program_QString));
}

QScriptValue* QScriptEngine_evaluate(QScriptEngine* self, struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	return new QScriptValue(self->evaluate(program_QString));
}

QScriptValue* QScriptEngine_evaluateWithProgram(QScriptEngine* self, QScriptProgram* program) {
	return new QScriptValue(self->evaluate(*program));
}

bool QScriptEngine_isEvaluating(const QScriptEngine* self) {
	return self->isEvaluating();
}

void QScriptEngine_abortEvaluation(QScriptEngine* self) {
	self->abortEvaluation();
}

bool QScriptEngine_hasUncaughtException(const QScriptEngine* self) {
	return self->hasUncaughtException();
}

QScriptValue* QScriptEngine_uncaughtException(const QScriptEngine* self) {
	return new QScriptValue(self->uncaughtException());
}

int QScriptEngine_uncaughtExceptionLineNumber(const QScriptEngine* self) {
	return self->uncaughtExceptionLineNumber();
}

struct miqt_array /* of struct miqt_string */  QScriptEngine_uncaughtExceptionBacktrace(const QScriptEngine* self) {
	QStringList _ret = self->uncaughtExceptionBacktrace();
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

void QScriptEngine_clearExceptions(QScriptEngine* self) {
	self->clearExceptions();
}

QScriptValue* QScriptEngine_nullValue(QScriptEngine* self) {
	return new QScriptValue(self->nullValue());
}

QScriptValue* QScriptEngine_undefinedValue(QScriptEngine* self) {
	return new QScriptValue(self->undefinedValue());
}

QScriptValue* QScriptEngine_newVariant(QScriptEngine* self, QVariant* value) {
	return new QScriptValue(self->newVariant(*value));
}

QScriptValue* QScriptEngine_newVariant2(QScriptEngine* self, QScriptValue* object, QVariant* value) {
	return new QScriptValue(self->newVariant(*object, *value));
}

QScriptValue* QScriptEngine_newRegExp(QScriptEngine* self, QRegExp* regexp) {
	return new QScriptValue(self->newRegExp(*regexp));
}

QScriptValue* QScriptEngine_newObject(QScriptEngine* self) {
	return new QScriptValue(self->newObject());
}

QScriptValue* QScriptEngine_newObjectWithScriptClass(QScriptEngine* self, QScriptClass* scriptClass) {
	return new QScriptValue(self->newObject(scriptClass));
}

QScriptValue* QScriptEngine_newArray(QScriptEngine* self) {
	return new QScriptValue(self->newArray());
}

QScriptValue* QScriptEngine_newRegExp2(QScriptEngine* self, struct miqt_string pattern, struct miqt_string flags) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	QString flags_QString = QString::fromUtf8(flags.data, flags.len);
	return new QScriptValue(self->newRegExp(pattern_QString, flags_QString));
}

QScriptValue* QScriptEngine_newDate(QScriptEngine* self, double value) {
	return new QScriptValue(self->newDate(static_cast<qsreal>(value)));
}

QScriptValue* QScriptEngine_newDateWithValue(QScriptEngine* self, QDateTime* value) {
	return new QScriptValue(self->newDate(*value));
}

QScriptValue* QScriptEngine_newActivationObject(QScriptEngine* self) {
	return new QScriptValue(self->newActivationObject());
}

QScriptValue* QScriptEngine_newQObject(QScriptEngine* self, QObject* object) {
	return new QScriptValue(self->newQObject(object));
}

QScriptValue* QScriptEngine_newQObject2(QScriptEngine* self, QScriptValue* scriptObject, QObject* qtObject) {
	return new QScriptValue(self->newQObject(*scriptObject, qtObject));
}

QScriptValue* QScriptEngine_newQMetaObject(QScriptEngine* self, QMetaObject* metaObject) {
	return new QScriptValue(self->newQMetaObject(metaObject));
}

QScriptValue* QScriptEngine_defaultPrototype(const QScriptEngine* self, int metaTypeId) {
	return new QScriptValue(self->defaultPrototype(static_cast<int>(metaTypeId)));
}

void QScriptEngine_setDefaultPrototype(QScriptEngine* self, int metaTypeId, QScriptValue* prototype) {
	self->setDefaultPrototype(static_cast<int>(metaTypeId), *prototype);
}

void QScriptEngine_installTranslatorFunctions(QScriptEngine* self) {
	self->installTranslatorFunctions();
}

QScriptValue* QScriptEngine_importExtension(QScriptEngine* self, struct miqt_string extension) {
	QString extension_QString = QString::fromUtf8(extension.data, extension.len);
	return new QScriptValue(self->importExtension(extension_QString));
}

struct miqt_array /* of struct miqt_string */  QScriptEngine_availableExtensions(const QScriptEngine* self) {
	QStringList _ret = self->availableExtensions();
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

struct miqt_array /* of struct miqt_string */  QScriptEngine_importedExtensions(const QScriptEngine* self) {
	QStringList _ret = self->importedExtensions();
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

void QScriptEngine_collectGarbage(QScriptEngine* self) {
	self->collectGarbage();
}

void QScriptEngine_reportAdditionalMemoryCost(QScriptEngine* self, int size) {
	self->reportAdditionalMemoryCost(static_cast<int>(size));
}

void QScriptEngine_setProcessEventsInterval(QScriptEngine* self, int interval) {
	self->setProcessEventsInterval(static_cast<int>(interval));
}

int QScriptEngine_processEventsInterval(const QScriptEngine* self) {
	return self->processEventsInterval();
}

void QScriptEngine_setAgent(QScriptEngine* self, QScriptEngineAgent* agent) {
	self->setAgent(agent);
}

QScriptEngineAgent* QScriptEngine_agent(const QScriptEngine* self) {
	return self->agent();
}

QScriptString* QScriptEngine_toStringHandle(QScriptEngine* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QScriptString(self->toStringHandle(str_QString));
}

QScriptValue* QScriptEngine_toObject(QScriptEngine* self, QScriptValue* value) {
	return new QScriptValue(self->toObject(*value));
}

QScriptValue* QScriptEngine_objectById(const QScriptEngine* self, long long id) {
	return new QScriptValue(self->objectById(static_cast<qint64>(id)));
}

void QScriptEngine_signalHandlerException(QScriptEngine* self, QScriptValue* exception) {
	self->signalHandlerException(*exception);
}

void QScriptEngine_connect_signalHandlerException(QScriptEngine* self, intptr_t slot) {
	MiqtVirtualQScriptEngine::connect(self, static_cast<void (QScriptEngine::*)(const QScriptValue&)>(&QScriptEngine::signalHandlerException), self, [=](const QScriptValue& exception) {
		const QScriptValue& exception_ret = exception;
		// Cast returned reference into pointer
		QScriptValue* sigval1 = const_cast<QScriptValue*>(&exception_ret);
		miqt_exec_callback_QScriptEngine_signalHandlerException(slot, sigval1);
	});
}

struct miqt_string QScriptEngine_tr2(const char* s, const char* c) {
	QString _ret = QScriptEngine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptEngine_tr3(const char* s, const char* c, int n) {
	QString _ret = QScriptEngine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptEngine_trUtf82(const char* s, const char* c) {
	QString _ret = QScriptEngine::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptEngine_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QScriptEngine::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QScriptValue* QScriptEngine_evaluate2(QScriptEngine* self, struct miqt_string program, struct miqt_string fileName) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QScriptValue(self->evaluate(program_QString, fileName_QString));
}

QScriptValue* QScriptEngine_evaluate3(QScriptEngine* self, struct miqt_string program, struct miqt_string fileName, int lineNumber) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QScriptValue(self->evaluate(program_QString, fileName_QString, static_cast<int>(lineNumber)));
}

void QScriptEngine_abortEvaluation1(QScriptEngine* self, QScriptValue* result) {
	self->abortEvaluation(*result);
}

QScriptValue* QScriptEngine_newObject2(QScriptEngine* self, QScriptClass* scriptClass, QScriptValue* data) {
	return new QScriptValue(self->newObject(scriptClass, *data));
}

QScriptValue* QScriptEngine_newArray1(QScriptEngine* self, unsigned int length) {
	return new QScriptValue(self->newArray(static_cast<uint>(length)));
}

QScriptValue* QScriptEngine_newQObject22(QScriptEngine* self, QObject* object, int ownership) {
	return new QScriptValue(self->newQObject(object, static_cast<QScriptEngine::ValueOwnership>(ownership)));
}

QScriptValue* QScriptEngine_newQObject3(QScriptEngine* self, QObject* object, int ownership, int* options) {
	return new QScriptValue(self->newQObject(object, static_cast<QScriptEngine::ValueOwnership>(ownership), (const QScriptEngine::QObjectWrapOptions&)(*options)));
}

QScriptValue* QScriptEngine_newQObject32(QScriptEngine* self, QScriptValue* scriptObject, QObject* qtObject, int ownership) {
	return new QScriptValue(self->newQObject(*scriptObject, qtObject, static_cast<QScriptEngine::ValueOwnership>(ownership)));
}

QScriptValue* QScriptEngine_newQObject4(QScriptEngine* self, QScriptValue* scriptObject, QObject* qtObject, int ownership, int* options) {
	return new QScriptValue(self->newQObject(*scriptObject, qtObject, static_cast<QScriptEngine::ValueOwnership>(ownership), (const QScriptEngine::QObjectWrapOptions&)(*options)));
}

QScriptValue* QScriptEngine_newQMetaObject2(QScriptEngine* self, QMetaObject* metaObject, QScriptValue* ctor) {
	return new QScriptValue(self->newQMetaObject(metaObject, *ctor));
}

void QScriptEngine_installTranslatorFunctions1(QScriptEngine* self, QScriptValue* object) {
	self->installTranslatorFunctions(*object);
}

bool QScriptEngine_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngine* self_cast = dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QScriptEngine_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQScriptEngine*)(self) )->virtualbase_event(event);
}

bool QScriptEngine_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngine* self_cast = dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QScriptEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQScriptEngine*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QScriptEngine_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngine* self_cast = dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QScriptEngine_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQScriptEngine*)(self) )->virtualbase_timerEvent(event);
}

bool QScriptEngine_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngine* self_cast = dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QScriptEngine_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQScriptEngine*)(self) )->virtualbase_childEvent(event);
}

bool QScriptEngine_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngine* self_cast = dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QScriptEngine_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQScriptEngine*)(self) )->virtualbase_customEvent(event);
}

bool QScriptEngine_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngine* self_cast = dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QScriptEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQScriptEngine*)(self) )->virtualbase_connectNotify(signal);
}

bool QScriptEngine_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngine* self_cast = dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QScriptEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQScriptEngine*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QScriptEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScriptEngine* self_cast = dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QScriptEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScriptEngine* self_cast = dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QScriptEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQScriptEngine* self_cast = dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QScriptEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQScriptEngine* self_cast = dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QScriptEngine_delete(QScriptEngine* self) {
	delete self;
}

