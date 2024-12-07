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
#include "_cgo_export.h"

QScriptSyntaxCheckResult* QScriptSyntaxCheckResult_new(QScriptSyntaxCheckResult* other) {
	return new QScriptSyntaxCheckResult(*other);
}

int QScriptSyntaxCheckResult_State(const QScriptSyntaxCheckResult* self) {
	QScriptSyntaxCheckResult::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QScriptSyntaxCheckResult_ErrorLineNumber(const QScriptSyntaxCheckResult* self) {
	return self->errorLineNumber();
}

int QScriptSyntaxCheckResult_ErrorColumnNumber(const QScriptSyntaxCheckResult* self) {
	return self->errorColumnNumber();
}

struct miqt_string QScriptSyntaxCheckResult_ErrorMessage(const QScriptSyntaxCheckResult* self) {
	QString _ret = self->errorMessage();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScriptSyntaxCheckResult_OperatorAssign(QScriptSyntaxCheckResult* self, QScriptSyntaxCheckResult* other) {
	self->operator=(*other);
}

void QScriptSyntaxCheckResult_Delete(QScriptSyntaxCheckResult* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QScriptSyntaxCheckResult*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQScriptEngine : public virtual QScriptEngine {
public:

	MiqtVirtualQScriptEngine(): QScriptEngine() {};
	MiqtVirtualQScriptEngine(QObject* parent): QScriptEngine(parent) {};

	virtual ~MiqtVirtualQScriptEngine() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QScriptEngine::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QScriptEngine_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QScriptEngine::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QScriptEngine::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QScriptEngine_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QScriptEngine::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QScriptEngine::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QScriptEngine_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QScriptEngine::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QScriptEngine::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QScriptEngine_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QScriptEngine::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QScriptEngine::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QScriptEngine_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QScriptEngine::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QScriptEngine::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScriptEngine_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QScriptEngine::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QScriptEngine::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScriptEngine_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QScriptEngine::disconnectNotify(*signal);

	}

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

QMetaObject* QScriptEngine_MetaObject(const QScriptEngine* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScriptEngine_Metacast(QScriptEngine* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScriptEngine_Tr(const char* s) {
	QString _ret = QScriptEngine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptEngine_TrUtf8(const char* s) {
	QString _ret = QScriptEngine::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QScriptValue* QScriptEngine_GlobalObject(const QScriptEngine* self) {
	return new QScriptValue(self->globalObject());
}

void QScriptEngine_SetGlobalObject(QScriptEngine* self, QScriptValue* object) {
	self->setGlobalObject(*object);
}

QScriptContext* QScriptEngine_CurrentContext(const QScriptEngine* self) {
	return self->currentContext();
}

QScriptContext* QScriptEngine_PushContext(QScriptEngine* self) {
	return self->pushContext();
}

void QScriptEngine_PopContext(QScriptEngine* self) {
	self->popContext();
}

bool QScriptEngine_CanEvaluate(const QScriptEngine* self, struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	return self->canEvaluate(program_QString);
}

QScriptSyntaxCheckResult* QScriptEngine_CheckSyntax(struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	return new QScriptSyntaxCheckResult(QScriptEngine::checkSyntax(program_QString));
}

QScriptValue* QScriptEngine_Evaluate(QScriptEngine* self, struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	return new QScriptValue(self->evaluate(program_QString));
}

QScriptValue* QScriptEngine_EvaluateWithProgram(QScriptEngine* self, QScriptProgram* program) {
	return new QScriptValue(self->evaluate(*program));
}

bool QScriptEngine_IsEvaluating(const QScriptEngine* self) {
	return self->isEvaluating();
}

void QScriptEngine_AbortEvaluation(QScriptEngine* self) {
	self->abortEvaluation();
}

bool QScriptEngine_HasUncaughtException(const QScriptEngine* self) {
	return self->hasUncaughtException();
}

QScriptValue* QScriptEngine_UncaughtException(const QScriptEngine* self) {
	return new QScriptValue(self->uncaughtException());
}

int QScriptEngine_UncaughtExceptionLineNumber(const QScriptEngine* self) {
	return self->uncaughtExceptionLineNumber();
}

struct miqt_array /* of struct miqt_string */  QScriptEngine_UncaughtExceptionBacktrace(const QScriptEngine* self) {
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

void QScriptEngine_ClearExceptions(QScriptEngine* self) {
	self->clearExceptions();
}

QScriptValue* QScriptEngine_NullValue(QScriptEngine* self) {
	return new QScriptValue(self->nullValue());
}

QScriptValue* QScriptEngine_UndefinedValue(QScriptEngine* self) {
	return new QScriptValue(self->undefinedValue());
}

QScriptValue* QScriptEngine_NewVariant(QScriptEngine* self, QVariant* value) {
	return new QScriptValue(self->newVariant(*value));
}

QScriptValue* QScriptEngine_NewVariant2(QScriptEngine* self, QScriptValue* object, QVariant* value) {
	return new QScriptValue(self->newVariant(*object, *value));
}

QScriptValue* QScriptEngine_NewRegExp(QScriptEngine* self, QRegExp* regexp) {
	return new QScriptValue(self->newRegExp(*regexp));
}

QScriptValue* QScriptEngine_NewObject(QScriptEngine* self) {
	return new QScriptValue(self->newObject());
}

QScriptValue* QScriptEngine_NewObjectWithScriptClass(QScriptEngine* self, QScriptClass* scriptClass) {
	return new QScriptValue(self->newObject(scriptClass));
}

QScriptValue* QScriptEngine_NewArray(QScriptEngine* self) {
	return new QScriptValue(self->newArray());
}

QScriptValue* QScriptEngine_NewRegExp2(QScriptEngine* self, struct miqt_string pattern, struct miqt_string flags) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	QString flags_QString = QString::fromUtf8(flags.data, flags.len);
	return new QScriptValue(self->newRegExp(pattern_QString, flags_QString));
}

QScriptValue* QScriptEngine_NewDate(QScriptEngine* self, double value) {
	return new QScriptValue(self->newDate(static_cast<qsreal>(value)));
}

QScriptValue* QScriptEngine_NewDateWithValue(QScriptEngine* self, QDateTime* value) {
	return new QScriptValue(self->newDate(*value));
}

QScriptValue* QScriptEngine_NewActivationObject(QScriptEngine* self) {
	return new QScriptValue(self->newActivationObject());
}

QScriptValue* QScriptEngine_NewQObject(QScriptEngine* self, QObject* object) {
	return new QScriptValue(self->newQObject(object));
}

QScriptValue* QScriptEngine_NewQObject2(QScriptEngine* self, QScriptValue* scriptObject, QObject* qtObject) {
	return new QScriptValue(self->newQObject(*scriptObject, qtObject));
}

QScriptValue* QScriptEngine_NewQMetaObject(QScriptEngine* self, QMetaObject* metaObject) {
	return new QScriptValue(self->newQMetaObject(metaObject));
}

QScriptValue* QScriptEngine_DefaultPrototype(const QScriptEngine* self, int metaTypeId) {
	return new QScriptValue(self->defaultPrototype(static_cast<int>(metaTypeId)));
}

void QScriptEngine_SetDefaultPrototype(QScriptEngine* self, int metaTypeId, QScriptValue* prototype) {
	self->setDefaultPrototype(static_cast<int>(metaTypeId), *prototype);
}

void QScriptEngine_InstallTranslatorFunctions(QScriptEngine* self) {
	self->installTranslatorFunctions();
}

QScriptValue* QScriptEngine_ImportExtension(QScriptEngine* self, struct miqt_string extension) {
	QString extension_QString = QString::fromUtf8(extension.data, extension.len);
	return new QScriptValue(self->importExtension(extension_QString));
}

struct miqt_array /* of struct miqt_string */  QScriptEngine_AvailableExtensions(const QScriptEngine* self) {
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

struct miqt_array /* of struct miqt_string */  QScriptEngine_ImportedExtensions(const QScriptEngine* self) {
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

void QScriptEngine_CollectGarbage(QScriptEngine* self) {
	self->collectGarbage();
}

void QScriptEngine_ReportAdditionalMemoryCost(QScriptEngine* self, int size) {
	self->reportAdditionalMemoryCost(static_cast<int>(size));
}

void QScriptEngine_SetProcessEventsInterval(QScriptEngine* self, int interval) {
	self->setProcessEventsInterval(static_cast<int>(interval));
}

int QScriptEngine_ProcessEventsInterval(const QScriptEngine* self) {
	return self->processEventsInterval();
}

void QScriptEngine_SetAgent(QScriptEngine* self, QScriptEngineAgent* agent) {
	self->setAgent(agent);
}

QScriptEngineAgent* QScriptEngine_Agent(const QScriptEngine* self) {
	return self->agent();
}

QScriptString* QScriptEngine_ToStringHandle(QScriptEngine* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QScriptString(self->toStringHandle(str_QString));
}

QScriptValue* QScriptEngine_ToObject(QScriptEngine* self, QScriptValue* value) {
	return new QScriptValue(self->toObject(*value));
}

QScriptValue* QScriptEngine_ObjectById(const QScriptEngine* self, long long id) {
	return new QScriptValue(self->objectById(static_cast<qint64>(id)));
}

void QScriptEngine_SignalHandlerException(QScriptEngine* self, QScriptValue* exception) {
	self->signalHandlerException(*exception);
}

void QScriptEngine_connect_SignalHandlerException(QScriptEngine* self, intptr_t slot) {
	MiqtVirtualQScriptEngine::connect(self, static_cast<void (QScriptEngine::*)(const QScriptValue&)>(&QScriptEngine::signalHandlerException), self, [=](const QScriptValue& exception) {
		const QScriptValue& exception_ret = exception;
		// Cast returned reference into pointer
		QScriptValue* sigval1 = const_cast<QScriptValue*>(&exception_ret);
		miqt_exec_callback_QScriptEngine_SignalHandlerException(slot, sigval1);
	});
}

struct miqt_string QScriptEngine_Tr2(const char* s, const char* c) {
	QString _ret = QScriptEngine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptEngine_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScriptEngine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptEngine_TrUtf82(const char* s, const char* c) {
	QString _ret = QScriptEngine::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptEngine_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QScriptEngine::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QScriptValue* QScriptEngine_Evaluate2(QScriptEngine* self, struct miqt_string program, struct miqt_string fileName) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QScriptValue(self->evaluate(program_QString, fileName_QString));
}

QScriptValue* QScriptEngine_Evaluate3(QScriptEngine* self, struct miqt_string program, struct miqt_string fileName, int lineNumber) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QScriptValue(self->evaluate(program_QString, fileName_QString, static_cast<int>(lineNumber)));
}

void QScriptEngine_AbortEvaluation1(QScriptEngine* self, QScriptValue* result) {
	self->abortEvaluation(*result);
}

QScriptValue* QScriptEngine_NewObject2(QScriptEngine* self, QScriptClass* scriptClass, QScriptValue* data) {
	return new QScriptValue(self->newObject(scriptClass, *data));
}

QScriptValue* QScriptEngine_NewArray1(QScriptEngine* self, unsigned int length) {
	return new QScriptValue(self->newArray(static_cast<uint>(length)));
}

QScriptValue* QScriptEngine_NewQObject22(QScriptEngine* self, QObject* object, int ownership) {
	return new QScriptValue(self->newQObject(object, static_cast<QScriptEngine::ValueOwnership>(ownership)));
}

QScriptValue* QScriptEngine_NewQObject3(QScriptEngine* self, QObject* object, int ownership, int* options) {
	return new QScriptValue(self->newQObject(object, static_cast<QScriptEngine::ValueOwnership>(ownership), (const QScriptEngine::QObjectWrapOptions&)(*options)));
}

QScriptValue* QScriptEngine_NewQObject32(QScriptEngine* self, QScriptValue* scriptObject, QObject* qtObject, int ownership) {
	return new QScriptValue(self->newQObject(*scriptObject, qtObject, static_cast<QScriptEngine::ValueOwnership>(ownership)));
}

QScriptValue* QScriptEngine_NewQObject4(QScriptEngine* self, QScriptValue* scriptObject, QObject* qtObject, int ownership, int* options) {
	return new QScriptValue(self->newQObject(*scriptObject, qtObject, static_cast<QScriptEngine::ValueOwnership>(ownership), (const QScriptEngine::QObjectWrapOptions&)(*options)));
}

QScriptValue* QScriptEngine_NewQMetaObject2(QScriptEngine* self, QMetaObject* metaObject, QScriptValue* ctor) {
	return new QScriptValue(self->newQMetaObject(metaObject, *ctor));
}

void QScriptEngine_InstallTranslatorFunctions1(QScriptEngine* self, QScriptValue* object) {
	self->installTranslatorFunctions(*object);
}

void QScriptEngine_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) )->handle__Event = slot;
}

bool QScriptEngine_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQScriptEngine*)(self) )->virtualbase_Event(event);
}

void QScriptEngine_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) )->handle__EventFilter = slot;
}

bool QScriptEngine_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQScriptEngine*)(self) )->virtualbase_EventFilter(watched, event);
}

void QScriptEngine_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) )->handle__TimerEvent = slot;
}

void QScriptEngine_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQScriptEngine*)(self) )->virtualbase_TimerEvent(event);
}

void QScriptEngine_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) )->handle__ChildEvent = slot;
}

void QScriptEngine_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQScriptEngine*)(self) )->virtualbase_ChildEvent(event);
}

void QScriptEngine_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) )->handle__CustomEvent = slot;
}

void QScriptEngine_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQScriptEngine*)(self) )->virtualbase_CustomEvent(event);
}

void QScriptEngine_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) )->handle__ConnectNotify = slot;
}

void QScriptEngine_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQScriptEngine*)(self) )->virtualbase_ConnectNotify(signal);
}

void QScriptEngine_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngine*>( (QScriptEngine*)(self) )->handle__DisconnectNotify = slot;
}

void QScriptEngine_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQScriptEngine*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QScriptEngine_Delete(QScriptEngine* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQScriptEngine*>( self );
	} else {
		delete self;
	}
}

