#include <QScriptEngine>
#include <QScriptEngineAgent>
#include <QScriptValue>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qscriptengineagent.h>
#include "gen_qscriptengineagent.h"
#include "_cgo_export.h"

class MiqtVirtualQScriptEngineAgent : public virtual QScriptEngineAgent {
public:

	MiqtVirtualQScriptEngineAgent(QScriptEngine* engine): QScriptEngineAgent(engine) {};

	virtual ~MiqtVirtualQScriptEngineAgent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScriptLoad = 0;

	// Subclass to allow providing a Go implementation
	virtual void scriptLoad(qint64 id, const QString& program, const QString& fileName, int baseLineNumber) override {
		if (handle__ScriptLoad == 0) {
			QScriptEngineAgent::scriptLoad(id, program, fileName, baseLineNumber);
			return;
		}
		
		qint64 id_ret = id;
		long long sigval1 = static_cast<long long>(id_ret);
		const QString program_ret = program;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray program_b = program_ret.toUtf8();
		struct miqt_string program_ms;
		program_ms.len = program_b.length();
		program_ms.data = static_cast<char*>(malloc(program_ms.len));
		memcpy(program_ms.data, program_b.data(), program_ms.len);
		struct miqt_string sigval2 = program_ms;
		const QString fileName_ret = fileName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray fileName_b = fileName_ret.toUtf8();
		struct miqt_string fileName_ms;
		fileName_ms.len = fileName_b.length();
		fileName_ms.data = static_cast<char*>(malloc(fileName_ms.len));
		memcpy(fileName_ms.data, fileName_b.data(), fileName_ms.len);
		struct miqt_string sigval3 = fileName_ms;
		int sigval4 = baseLineNumber;

		miqt_exec_callback_QScriptEngineAgent_ScriptLoad(this, handle__ScriptLoad, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScriptLoad(long long id, struct miqt_string program, struct miqt_string fileName, int baseLineNumber) {
		QString program_QString = QString::fromUtf8(program.data, program.len);
		QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);

		QScriptEngineAgent::scriptLoad(static_cast<qint64>(id), program_QString, fileName_QString, static_cast<int>(baseLineNumber));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScriptUnload = 0;

	// Subclass to allow providing a Go implementation
	virtual void scriptUnload(qint64 id) override {
		if (handle__ScriptUnload == 0) {
			QScriptEngineAgent::scriptUnload(id);
			return;
		}
		
		qint64 id_ret = id;
		long long sigval1 = static_cast<long long>(id_ret);

		miqt_exec_callback_QScriptEngineAgent_ScriptUnload(this, handle__ScriptUnload, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScriptUnload(long long id) {

		QScriptEngineAgent::scriptUnload(static_cast<qint64>(id));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextPush = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextPush() override {
		if (handle__ContextPush == 0) {
			QScriptEngineAgent::contextPush();
			return;
		}
		

		miqt_exec_callback_QScriptEngineAgent_ContextPush(this, handle__ContextPush);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextPush() {

		QScriptEngineAgent::contextPush();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextPop = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextPop() override {
		if (handle__ContextPop == 0) {
			QScriptEngineAgent::contextPop();
			return;
		}
		

		miqt_exec_callback_QScriptEngineAgent_ContextPop(this, handle__ContextPop);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextPop() {

		QScriptEngineAgent::contextPop();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FunctionEntry = 0;

	// Subclass to allow providing a Go implementation
	virtual void functionEntry(qint64 scriptId) override {
		if (handle__FunctionEntry == 0) {
			QScriptEngineAgent::functionEntry(scriptId);
			return;
		}
		
		qint64 scriptId_ret = scriptId;
		long long sigval1 = static_cast<long long>(scriptId_ret);

		miqt_exec_callback_QScriptEngineAgent_FunctionEntry(this, handle__FunctionEntry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FunctionEntry(long long scriptId) {

		QScriptEngineAgent::functionEntry(static_cast<qint64>(scriptId));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FunctionExit = 0;

	// Subclass to allow providing a Go implementation
	virtual void functionExit(qint64 scriptId, const QScriptValue& returnValue) override {
		if (handle__FunctionExit == 0) {
			QScriptEngineAgent::functionExit(scriptId, returnValue);
			return;
		}
		
		qint64 scriptId_ret = scriptId;
		long long sigval1 = static_cast<long long>(scriptId_ret);
		const QScriptValue& returnValue_ret = returnValue;
		// Cast returned reference into pointer
		QScriptValue* sigval2 = const_cast<QScriptValue*>(&returnValue_ret);

		miqt_exec_callback_QScriptEngineAgent_FunctionExit(this, handle__FunctionExit, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FunctionExit(long long scriptId, QScriptValue* returnValue) {

		QScriptEngineAgent::functionExit(static_cast<qint64>(scriptId), *returnValue);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PositionChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void positionChange(qint64 scriptId, int lineNumber, int columnNumber) override {
		if (handle__PositionChange == 0) {
			QScriptEngineAgent::positionChange(scriptId, lineNumber, columnNumber);
			return;
		}
		
		qint64 scriptId_ret = scriptId;
		long long sigval1 = static_cast<long long>(scriptId_ret);
		int sigval2 = lineNumber;
		int sigval3 = columnNumber;

		miqt_exec_callback_QScriptEngineAgent_PositionChange(this, handle__PositionChange, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PositionChange(long long scriptId, int lineNumber, int columnNumber) {

		QScriptEngineAgent::positionChange(static_cast<qint64>(scriptId), static_cast<int>(lineNumber), static_cast<int>(columnNumber));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ExceptionThrow = 0;

	// Subclass to allow providing a Go implementation
	virtual void exceptionThrow(qint64 scriptId, const QScriptValue& exception, bool hasHandler) override {
		if (handle__ExceptionThrow == 0) {
			QScriptEngineAgent::exceptionThrow(scriptId, exception, hasHandler);
			return;
		}
		
		qint64 scriptId_ret = scriptId;
		long long sigval1 = static_cast<long long>(scriptId_ret);
		const QScriptValue& exception_ret = exception;
		// Cast returned reference into pointer
		QScriptValue* sigval2 = const_cast<QScriptValue*>(&exception_ret);
		bool sigval3 = hasHandler;

		miqt_exec_callback_QScriptEngineAgent_ExceptionThrow(this, handle__ExceptionThrow, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ExceptionThrow(long long scriptId, QScriptValue* exception, bool hasHandler) {

		QScriptEngineAgent::exceptionThrow(static_cast<qint64>(scriptId), *exception, hasHandler);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ExceptionCatch = 0;

	// Subclass to allow providing a Go implementation
	virtual void exceptionCatch(qint64 scriptId, const QScriptValue& exception) override {
		if (handle__ExceptionCatch == 0) {
			QScriptEngineAgent::exceptionCatch(scriptId, exception);
			return;
		}
		
		qint64 scriptId_ret = scriptId;
		long long sigval1 = static_cast<long long>(scriptId_ret);
		const QScriptValue& exception_ret = exception;
		// Cast returned reference into pointer
		QScriptValue* sigval2 = const_cast<QScriptValue*>(&exception_ret);

		miqt_exec_callback_QScriptEngineAgent_ExceptionCatch(this, handle__ExceptionCatch, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ExceptionCatch(long long scriptId, QScriptValue* exception) {

		QScriptEngineAgent::exceptionCatch(static_cast<qint64>(scriptId), *exception);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QScriptEngineAgent::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QScriptEngineAgent::supportsExtension(extension);
		}
		
		QScriptEngineAgent::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QScriptEngineAgent_SupportsExtension(const_cast<MiqtVirtualQScriptEngineAgent*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QScriptEngineAgent::supportsExtension(static_cast<QScriptEngineAgent::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(QScriptEngineAgent::Extension extension, const QVariant& argument) override {
		if (handle__Extension == 0) {
			return QScriptEngineAgent::extension(extension, argument);
		}
		
		QScriptEngineAgent::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& argument_ret = argument;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&argument_ret);

		QVariant* callback_return_value = miqt_exec_callback_QScriptEngineAgent_Extension(this, handle__Extension, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(int extension, QVariant* argument) {

		return new QVariant(QScriptEngineAgent::extension(static_cast<QScriptEngineAgent::Extension>(extension), *argument));

	}

};

void QScriptEngineAgent_new(QScriptEngine* engine, QScriptEngineAgent** outptr_QScriptEngineAgent) {
	MiqtVirtualQScriptEngineAgent* ret = new MiqtVirtualQScriptEngineAgent(engine);
	*outptr_QScriptEngineAgent = ret;
}

void QScriptEngineAgent_ScriptLoad(QScriptEngineAgent* self, long long id, struct miqt_string program, struct miqt_string fileName, int baseLineNumber) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->scriptLoad(static_cast<qint64>(id), program_QString, fileName_QString, static_cast<int>(baseLineNumber));
}

void QScriptEngineAgent_ScriptUnload(QScriptEngineAgent* self, long long id) {
	self->scriptUnload(static_cast<qint64>(id));
}

void QScriptEngineAgent_ContextPush(QScriptEngineAgent* self) {
	self->contextPush();
}

void QScriptEngineAgent_ContextPop(QScriptEngineAgent* self) {
	self->contextPop();
}

void QScriptEngineAgent_FunctionEntry(QScriptEngineAgent* self, long long scriptId) {
	self->functionEntry(static_cast<qint64>(scriptId));
}

void QScriptEngineAgent_FunctionExit(QScriptEngineAgent* self, long long scriptId, QScriptValue* returnValue) {
	self->functionExit(static_cast<qint64>(scriptId), *returnValue);
}

void QScriptEngineAgent_PositionChange(QScriptEngineAgent* self, long long scriptId, int lineNumber, int columnNumber) {
	self->positionChange(static_cast<qint64>(scriptId), static_cast<int>(lineNumber), static_cast<int>(columnNumber));
}

void QScriptEngineAgent_ExceptionThrow(QScriptEngineAgent* self, long long scriptId, QScriptValue* exception, bool hasHandler) {
	self->exceptionThrow(static_cast<qint64>(scriptId), *exception, hasHandler);
}

void QScriptEngineAgent_ExceptionCatch(QScriptEngineAgent* self, long long scriptId, QScriptValue* exception) {
	self->exceptionCatch(static_cast<qint64>(scriptId), *exception);
}

bool QScriptEngineAgent_SupportsExtension(const QScriptEngineAgent* self, int extension) {
	return self->supportsExtension(static_cast<QScriptEngineAgent::Extension>(extension));
}

QVariant* QScriptEngineAgent_Extension(QScriptEngineAgent* self, int extension, QVariant* argument) {
	return new QVariant(self->extension(static_cast<QScriptEngineAgent::Extension>(extension), *argument));
}

QScriptEngine* QScriptEngineAgent_Engine(const QScriptEngineAgent* self) {
	return self->engine();
}

void QScriptEngineAgent_override_virtual_ScriptLoad(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) )->handle__ScriptLoad = slot;
}

void QScriptEngineAgent_virtualbase_ScriptLoad(void* self, long long id, struct miqt_string program, struct miqt_string fileName, int baseLineNumber) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_ScriptLoad(id, program, fileName, baseLineNumber);
}

void QScriptEngineAgent_override_virtual_ScriptUnload(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) )->handle__ScriptUnload = slot;
}

void QScriptEngineAgent_virtualbase_ScriptUnload(void* self, long long id) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_ScriptUnload(id);
}

void QScriptEngineAgent_override_virtual_ContextPush(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) )->handle__ContextPush = slot;
}

void QScriptEngineAgent_virtualbase_ContextPush(void* self) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_ContextPush();
}

void QScriptEngineAgent_override_virtual_ContextPop(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) )->handle__ContextPop = slot;
}

void QScriptEngineAgent_virtualbase_ContextPop(void* self) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_ContextPop();
}

void QScriptEngineAgent_override_virtual_FunctionEntry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) )->handle__FunctionEntry = slot;
}

void QScriptEngineAgent_virtualbase_FunctionEntry(void* self, long long scriptId) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_FunctionEntry(scriptId);
}

void QScriptEngineAgent_override_virtual_FunctionExit(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) )->handle__FunctionExit = slot;
}

void QScriptEngineAgent_virtualbase_FunctionExit(void* self, long long scriptId, QScriptValue* returnValue) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_FunctionExit(scriptId, returnValue);
}

void QScriptEngineAgent_override_virtual_PositionChange(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) )->handle__PositionChange = slot;
}

void QScriptEngineAgent_virtualbase_PositionChange(void* self, long long scriptId, int lineNumber, int columnNumber) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_PositionChange(scriptId, lineNumber, columnNumber);
}

void QScriptEngineAgent_override_virtual_ExceptionThrow(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) )->handle__ExceptionThrow = slot;
}

void QScriptEngineAgent_virtualbase_ExceptionThrow(void* self, long long scriptId, QScriptValue* exception, bool hasHandler) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_ExceptionThrow(scriptId, exception, hasHandler);
}

void QScriptEngineAgent_override_virtual_ExceptionCatch(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) )->handle__ExceptionCatch = slot;
}

void QScriptEngineAgent_virtualbase_ExceptionCatch(void* self, long long scriptId, QScriptValue* exception) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_ExceptionCatch(scriptId, exception);
}

void QScriptEngineAgent_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) )->handle__SupportsExtension = slot;
}

bool QScriptEngineAgent_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_SupportsExtension(extension);
}

void QScriptEngineAgent_override_virtual_Extension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) )->handle__Extension = slot;
}

QVariant* QScriptEngineAgent_virtualbase_Extension(void* self, int extension, QVariant* argument) {
	return ( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_Extension(extension, argument);
}

void QScriptEngineAgent_Delete(QScriptEngineAgent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQScriptEngineAgent*>( self );
	} else {
		delete self;
	}
}

