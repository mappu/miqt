#include <QScriptEngine>
#include <QScriptEngineAgent>
#include <QScriptValue>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qscriptengineagent.h>
#include "gen_qscriptengineagent.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QScriptEngineAgent_scriptLoad(QScriptEngineAgent*, intptr_t, long long, struct miqt_string, struct miqt_string, int);
void miqt_exec_callback_QScriptEngineAgent_scriptUnload(QScriptEngineAgent*, intptr_t, long long);
void miqt_exec_callback_QScriptEngineAgent_contextPush(QScriptEngineAgent*, intptr_t);
void miqt_exec_callback_QScriptEngineAgent_contextPop(QScriptEngineAgent*, intptr_t);
void miqt_exec_callback_QScriptEngineAgent_functionEntry(QScriptEngineAgent*, intptr_t, long long);
void miqt_exec_callback_QScriptEngineAgent_functionExit(QScriptEngineAgent*, intptr_t, long long, QScriptValue*);
void miqt_exec_callback_QScriptEngineAgent_positionChange(QScriptEngineAgent*, intptr_t, long long, int, int);
void miqt_exec_callback_QScriptEngineAgent_exceptionThrow(QScriptEngineAgent*, intptr_t, long long, QScriptValue*, bool);
void miqt_exec_callback_QScriptEngineAgent_exceptionCatch(QScriptEngineAgent*, intptr_t, long long, QScriptValue*);
bool miqt_exec_callback_QScriptEngineAgent_supportsExtension(const QScriptEngineAgent*, intptr_t, int);
QVariant* miqt_exec_callback_QScriptEngineAgent_extension(QScriptEngineAgent*, intptr_t, int, QVariant*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScriptEngineAgent final : public QScriptEngineAgent {
public:

	MiqtVirtualQScriptEngineAgent(QScriptEngine* engine): QScriptEngineAgent(engine) {};

	virtual ~MiqtVirtualQScriptEngineAgent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scriptLoad = 0;

	// Subclass to allow providing a Go implementation
	virtual void scriptLoad(qint64 id, const QString& program, const QString& fileName, int baseLineNumber) override {
		if (handle__scriptLoad == 0) {
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

		miqt_exec_callback_QScriptEngineAgent_scriptLoad(this, handle__scriptLoad, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scriptLoad(long long id, struct miqt_string program, struct miqt_string fileName, int baseLineNumber) {
		QString program_QString = QString::fromUtf8(program.data, program.len);
		QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);

		QScriptEngineAgent::scriptLoad(static_cast<qint64>(id), program_QString, fileName_QString, static_cast<int>(baseLineNumber));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scriptUnload = 0;

	// Subclass to allow providing a Go implementation
	virtual void scriptUnload(qint64 id) override {
		if (handle__scriptUnload == 0) {
			QScriptEngineAgent::scriptUnload(id);
			return;
		}
		
		qint64 id_ret = id;
		long long sigval1 = static_cast<long long>(id_ret);

		miqt_exec_callback_QScriptEngineAgent_scriptUnload(this, handle__scriptUnload, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scriptUnload(long long id) {

		QScriptEngineAgent::scriptUnload(static_cast<qint64>(id));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextPush = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextPush() override {
		if (handle__contextPush == 0) {
			QScriptEngineAgent::contextPush();
			return;
		}
		

		miqt_exec_callback_QScriptEngineAgent_contextPush(this, handle__contextPush);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextPush() {

		QScriptEngineAgent::contextPush();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextPop = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextPop() override {
		if (handle__contextPop == 0) {
			QScriptEngineAgent::contextPop();
			return;
		}
		

		miqt_exec_callback_QScriptEngineAgent_contextPop(this, handle__contextPop);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextPop() {

		QScriptEngineAgent::contextPop();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__functionEntry = 0;

	// Subclass to allow providing a Go implementation
	virtual void functionEntry(qint64 scriptId) override {
		if (handle__functionEntry == 0) {
			QScriptEngineAgent::functionEntry(scriptId);
			return;
		}
		
		qint64 scriptId_ret = scriptId;
		long long sigval1 = static_cast<long long>(scriptId_ret);

		miqt_exec_callback_QScriptEngineAgent_functionEntry(this, handle__functionEntry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_functionEntry(long long scriptId) {

		QScriptEngineAgent::functionEntry(static_cast<qint64>(scriptId));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__functionExit = 0;

	// Subclass to allow providing a Go implementation
	virtual void functionExit(qint64 scriptId, const QScriptValue& returnValue) override {
		if (handle__functionExit == 0) {
			QScriptEngineAgent::functionExit(scriptId, returnValue);
			return;
		}
		
		qint64 scriptId_ret = scriptId;
		long long sigval1 = static_cast<long long>(scriptId_ret);
		const QScriptValue& returnValue_ret = returnValue;
		// Cast returned reference into pointer
		QScriptValue* sigval2 = const_cast<QScriptValue*>(&returnValue_ret);

		miqt_exec_callback_QScriptEngineAgent_functionExit(this, handle__functionExit, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_functionExit(long long scriptId, QScriptValue* returnValue) {

		QScriptEngineAgent::functionExit(static_cast<qint64>(scriptId), *returnValue);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__positionChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void positionChange(qint64 scriptId, int lineNumber, int columnNumber) override {
		if (handle__positionChange == 0) {
			QScriptEngineAgent::positionChange(scriptId, lineNumber, columnNumber);
			return;
		}
		
		qint64 scriptId_ret = scriptId;
		long long sigval1 = static_cast<long long>(scriptId_ret);
		int sigval2 = lineNumber;
		int sigval3 = columnNumber;

		miqt_exec_callback_QScriptEngineAgent_positionChange(this, handle__positionChange, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_positionChange(long long scriptId, int lineNumber, int columnNumber) {

		QScriptEngineAgent::positionChange(static_cast<qint64>(scriptId), static_cast<int>(lineNumber), static_cast<int>(columnNumber));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exceptionThrow = 0;

	// Subclass to allow providing a Go implementation
	virtual void exceptionThrow(qint64 scriptId, const QScriptValue& exception, bool hasHandler) override {
		if (handle__exceptionThrow == 0) {
			QScriptEngineAgent::exceptionThrow(scriptId, exception, hasHandler);
			return;
		}
		
		qint64 scriptId_ret = scriptId;
		long long sigval1 = static_cast<long long>(scriptId_ret);
		const QScriptValue& exception_ret = exception;
		// Cast returned reference into pointer
		QScriptValue* sigval2 = const_cast<QScriptValue*>(&exception_ret);
		bool sigval3 = hasHandler;

		miqt_exec_callback_QScriptEngineAgent_exceptionThrow(this, handle__exceptionThrow, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_exceptionThrow(long long scriptId, QScriptValue* exception, bool hasHandler) {

		QScriptEngineAgent::exceptionThrow(static_cast<qint64>(scriptId), *exception, hasHandler);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exceptionCatch = 0;

	// Subclass to allow providing a Go implementation
	virtual void exceptionCatch(qint64 scriptId, const QScriptValue& exception) override {
		if (handle__exceptionCatch == 0) {
			QScriptEngineAgent::exceptionCatch(scriptId, exception);
			return;
		}
		
		qint64 scriptId_ret = scriptId;
		long long sigval1 = static_cast<long long>(scriptId_ret);
		const QScriptValue& exception_ret = exception;
		// Cast returned reference into pointer
		QScriptValue* sigval2 = const_cast<QScriptValue*>(&exception_ret);

		miqt_exec_callback_QScriptEngineAgent_exceptionCatch(this, handle__exceptionCatch, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_exceptionCatch(long long scriptId, QScriptValue* exception) {

		QScriptEngineAgent::exceptionCatch(static_cast<qint64>(scriptId), *exception);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QScriptEngineAgent::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QScriptEngineAgent::supportsExtension(extension);
		}
		
		QScriptEngineAgent::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QScriptEngineAgent_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QScriptEngineAgent::supportsExtension(static_cast<QScriptEngineAgent::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(QScriptEngineAgent::Extension extension, const QVariant& argument) override {
		if (handle__extension == 0) {
			return QScriptEngineAgent::extension(extension, argument);
		}
		
		QScriptEngineAgent::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& argument_ret = argument;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&argument_ret);

		QVariant* callback_return_value = miqt_exec_callback_QScriptEngineAgent_extension(this, handle__extension, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(int extension, QVariant* argument) {

		return new QVariant(QScriptEngineAgent::extension(static_cast<QScriptEngineAgent::Extension>(extension), *argument));

	}

};

QScriptEngineAgent* QScriptEngineAgent_new(QScriptEngine* engine) {
	return new MiqtVirtualQScriptEngineAgent(engine);
}

void QScriptEngineAgent_scriptLoad(QScriptEngineAgent* self, long long id, struct miqt_string program, struct miqt_string fileName, int baseLineNumber) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->scriptLoad(static_cast<qint64>(id), program_QString, fileName_QString, static_cast<int>(baseLineNumber));
}

void QScriptEngineAgent_scriptUnload(QScriptEngineAgent* self, long long id) {
	self->scriptUnload(static_cast<qint64>(id));
}

void QScriptEngineAgent_contextPush(QScriptEngineAgent* self) {
	self->contextPush();
}

void QScriptEngineAgent_contextPop(QScriptEngineAgent* self) {
	self->contextPop();
}

void QScriptEngineAgent_functionEntry(QScriptEngineAgent* self, long long scriptId) {
	self->functionEntry(static_cast<qint64>(scriptId));
}

void QScriptEngineAgent_functionExit(QScriptEngineAgent* self, long long scriptId, QScriptValue* returnValue) {
	self->functionExit(static_cast<qint64>(scriptId), *returnValue);
}

void QScriptEngineAgent_positionChange(QScriptEngineAgent* self, long long scriptId, int lineNumber, int columnNumber) {
	self->positionChange(static_cast<qint64>(scriptId), static_cast<int>(lineNumber), static_cast<int>(columnNumber));
}

void QScriptEngineAgent_exceptionThrow(QScriptEngineAgent* self, long long scriptId, QScriptValue* exception, bool hasHandler) {
	self->exceptionThrow(static_cast<qint64>(scriptId), *exception, hasHandler);
}

void QScriptEngineAgent_exceptionCatch(QScriptEngineAgent* self, long long scriptId, QScriptValue* exception) {
	self->exceptionCatch(static_cast<qint64>(scriptId), *exception);
}

bool QScriptEngineAgent_supportsExtension(const QScriptEngineAgent* self, int extension) {
	return self->supportsExtension(static_cast<QScriptEngineAgent::Extension>(extension));
}

QVariant* QScriptEngineAgent_extension(QScriptEngineAgent* self, int extension, QVariant* argument) {
	return new QVariant(self->extension(static_cast<QScriptEngineAgent::Extension>(extension), *argument));
}

QScriptEngine* QScriptEngineAgent_engine(const QScriptEngineAgent* self) {
	return self->engine();
}

bool QScriptEngineAgent_override_virtual_scriptLoad(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scriptLoad = slot;
	return true;
}

void QScriptEngineAgent_virtualbase_scriptLoad(void* self, long long id, struct miqt_string program, struct miqt_string fileName, int baseLineNumber) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_scriptLoad(id, program, fileName, baseLineNumber);
}

bool QScriptEngineAgent_override_virtual_scriptUnload(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scriptUnload = slot;
	return true;
}

void QScriptEngineAgent_virtualbase_scriptUnload(void* self, long long id) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_scriptUnload(id);
}

bool QScriptEngineAgent_override_virtual_contextPush(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextPush = slot;
	return true;
}

void QScriptEngineAgent_virtualbase_contextPush(void* self) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_contextPush();
}

bool QScriptEngineAgent_override_virtual_contextPop(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextPop = slot;
	return true;
}

void QScriptEngineAgent_virtualbase_contextPop(void* self) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_contextPop();
}

bool QScriptEngineAgent_override_virtual_functionEntry(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__functionEntry = slot;
	return true;
}

void QScriptEngineAgent_virtualbase_functionEntry(void* self, long long scriptId) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_functionEntry(scriptId);
}

bool QScriptEngineAgent_override_virtual_functionExit(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__functionExit = slot;
	return true;
}

void QScriptEngineAgent_virtualbase_functionExit(void* self, long long scriptId, QScriptValue* returnValue) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_functionExit(scriptId, returnValue);
}

bool QScriptEngineAgent_override_virtual_positionChange(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__positionChange = slot;
	return true;
}

void QScriptEngineAgent_virtualbase_positionChange(void* self, long long scriptId, int lineNumber, int columnNumber) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_positionChange(scriptId, lineNumber, columnNumber);
}

bool QScriptEngineAgent_override_virtual_exceptionThrow(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exceptionThrow = slot;
	return true;
}

void QScriptEngineAgent_virtualbase_exceptionThrow(void* self, long long scriptId, QScriptValue* exception, bool hasHandler) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_exceptionThrow(scriptId, exception, hasHandler);
}

bool QScriptEngineAgent_override_virtual_exceptionCatch(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exceptionCatch = slot;
	return true;
}

void QScriptEngineAgent_virtualbase_exceptionCatch(void* self, long long scriptId, QScriptValue* exception) {
	( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_exceptionCatch(scriptId, exception);
}

bool QScriptEngineAgent_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QScriptEngineAgent_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_supportsExtension(extension);
}

bool QScriptEngineAgent_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QScriptEngineAgent_virtualbase_extension(void* self, int extension, QVariant* argument) {
	return ( (MiqtVirtualQScriptEngineAgent*)(self) )->virtualbase_extension(extension, argument);
}

void QScriptEngineAgent_delete(QScriptEngineAgent* self) {
	delete self;
}

