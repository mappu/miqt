#include <QByteArray>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QProcess>
#include <QProcessEnvironment>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qprocess.h"

#include "gen_qprocess.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QProcessEnvironment* QProcessEnvironment_new() {
	return new QProcessEnvironment();
}

QProcessEnvironment* QProcessEnvironment_new2(QProcessEnvironment* other) {
	return new QProcessEnvironment(*other);
}

void QProcessEnvironment_OperatorAssign(QProcessEnvironment* self, QProcessEnvironment* other) {
	self->operator=(*other);
}

void QProcessEnvironment_Swap(QProcessEnvironment* self, QProcessEnvironment* other) {
	self->swap(*other);
}

bool QProcessEnvironment_OperatorEqual(QProcessEnvironment* self, QProcessEnvironment* other) {
	return const_cast<const QProcessEnvironment*>(self)->operator==(*other);
}

bool QProcessEnvironment_OperatorNotEqual(QProcessEnvironment* self, QProcessEnvironment* other) {
	return const_cast<const QProcessEnvironment*>(self)->operator!=(*other);
}

bool QProcessEnvironment_IsEmpty(QProcessEnvironment* self) {
	return const_cast<const QProcessEnvironment*>(self)->isEmpty();
}

void QProcessEnvironment_Clear(QProcessEnvironment* self) {
	self->clear();
}

bool QProcessEnvironment_Contains(QProcessEnvironment* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return const_cast<const QProcessEnvironment*>(self)->contains(name_QString);
}

void QProcessEnvironment_Insert(QProcessEnvironment* self, const char* name, size_t name_Strlen, const char* value, size_t value_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString value_QString = QString::fromUtf8(value, value_Strlen);
	self->insert(name_QString, value_QString);
}

void QProcessEnvironment_Remove(QProcessEnvironment* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->remove(name_QString);
}

void QProcessEnvironment_Value(QProcessEnvironment* self, const char* name, size_t name_Strlen, char** _out, int* _out_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString ret = const_cast<const QProcessEnvironment*>(self)->value(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProcessEnvironment_ToStringList(QProcessEnvironment* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QProcessEnvironment*>(self)->toStringList();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QProcessEnvironment_Keys(QProcessEnvironment* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QProcessEnvironment*>(self)->keys();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QProcessEnvironment_InsertWithQProcessEnvironment(QProcessEnvironment* self, QProcessEnvironment* e) {
	self->insert(*e);
}

QProcessEnvironment* QProcessEnvironment_SystemEnvironment() {
	QProcessEnvironment ret = QProcessEnvironment::systemEnvironment();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QProcessEnvironment*>(new QProcessEnvironment(ret));
}

void QProcessEnvironment_Value2(QProcessEnvironment* self, const char* name, size_t name_Strlen, const char* defaultValue, size_t defaultValue_Strlen, char** _out, int* _out_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString defaultValue_QString = QString::fromUtf8(defaultValue, defaultValue_Strlen);
	QString ret = self->value(name_QString, defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProcessEnvironment_Delete(QProcessEnvironment* self) {
	delete self;
}

QProcess* QProcess_new() {
	return new QProcess();
}

QProcess* QProcess_new2(QObject* parent) {
	return new QProcess(parent);
}

QMetaObject* QProcess_MetaObject(QProcess* self) {
	return (QMetaObject*) const_cast<const QProcess*>(self)->metaObject();
}

void QProcess_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QProcess::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProcess_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QProcess::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProcess_Start(QProcess* self, const char* program, size_t program_Strlen, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len) {
	QString program_QString = QString::fromUtf8(program, program_Strlen);
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments_len);
	for(size_t i = 0; i < arguments_len; ++i) {
		arguments_QList.push_back(QString::fromUtf8(arguments[i], arguments_Lengths[i]));
	}
	self->start(program_QString, arguments_QList);
}

void QProcess_StartWithCommand(QProcess* self, const char* command, size_t command_Strlen) {
	QString command_QString = QString::fromUtf8(command, command_Strlen);
	self->start(command_QString);
}

void QProcess_Start2(QProcess* self) {
	self->start();
}

bool QProcess_StartDetached(QProcess* self) {
	return self->startDetached();
}

bool QProcess_Open(QProcess* self) {
	return self->open();
}

void QProcess_Program(QProcess* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QProcess*>(self)->program();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProcess_SetProgram(QProcess* self, const char* program, size_t program_Strlen) {
	QString program_QString = QString::fromUtf8(program, program_Strlen);
	self->setProgram(program_QString);
}

void QProcess_Arguments(QProcess* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QProcess*>(self)->arguments();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QProcess_SetArguments(QProcess* self, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len) {
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments_len);
	for(size_t i = 0; i < arguments_len; ++i) {
		arguments_QList.push_back(QString::fromUtf8(arguments[i], arguments_Lengths[i]));
	}
	self->setArguments(arguments_QList);
}

uintptr_t QProcess_ReadChannelMode(QProcess* self) {
	QProcess::ProcessChannelMode ret = const_cast<const QProcess*>(self)->readChannelMode();
	return static_cast<uintptr_t>(ret);
}

void QProcess_SetReadChannelMode(QProcess* self, uintptr_t mode) {
	self->setReadChannelMode(static_cast<QProcess::ProcessChannelMode>(mode));
}

uintptr_t QProcess_ProcessChannelMode(QProcess* self) {
	QProcess::ProcessChannelMode ret = const_cast<const QProcess*>(self)->processChannelMode();
	return static_cast<uintptr_t>(ret);
}

void QProcess_SetProcessChannelMode(QProcess* self, uintptr_t mode) {
	self->setProcessChannelMode(static_cast<QProcess::ProcessChannelMode>(mode));
}

uintptr_t QProcess_InputChannelMode(QProcess* self) {
	QProcess::InputChannelMode ret = const_cast<const QProcess*>(self)->inputChannelMode();
	return static_cast<uintptr_t>(ret);
}

void QProcess_SetInputChannelMode(QProcess* self, uintptr_t mode) {
	self->setInputChannelMode(static_cast<QProcess::InputChannelMode>(mode));
}

uintptr_t QProcess_ReadChannel(QProcess* self) {
	QProcess::ProcessChannel ret = const_cast<const QProcess*>(self)->readChannel();
	return static_cast<uintptr_t>(ret);
}

void QProcess_SetReadChannel(QProcess* self, uintptr_t channel) {
	self->setReadChannel(static_cast<QProcess::ProcessChannel>(channel));
}

void QProcess_CloseReadChannel(QProcess* self, uintptr_t channel) {
	self->closeReadChannel(static_cast<QProcess::ProcessChannel>(channel));
}

void QProcess_CloseWriteChannel(QProcess* self) {
	self->closeWriteChannel();
}

void QProcess_SetStandardInputFile(QProcess* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->setStandardInputFile(fileName_QString);
}

void QProcess_SetStandardOutputFile(QProcess* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->setStandardOutputFile(fileName_QString);
}

void QProcess_SetStandardErrorFile(QProcess* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->setStandardErrorFile(fileName_QString);
}

void QProcess_SetStandardOutputProcess(QProcess* self, QProcess* destination) {
	self->setStandardOutputProcess(destination);
}

void QProcess_WorkingDirectory(QProcess* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QProcess*>(self)->workingDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProcess_SetWorkingDirectory(QProcess* self, const char* dir, size_t dir_Strlen) {
	QString dir_QString = QString::fromUtf8(dir, dir_Strlen);
	self->setWorkingDirectory(dir_QString);
}

void QProcess_SetEnvironment(QProcess* self, char** environment, uint64_t* environment_Lengths, size_t environment_len) {
	QList<QString> environment_QList;
	environment_QList.reserve(environment_len);
	for(size_t i = 0; i < environment_len; ++i) {
		environment_QList.push_back(QString::fromUtf8(environment[i], environment_Lengths[i]));
	}
	self->setEnvironment(environment_QList);
}

void QProcess_Environment(QProcess* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QProcess*>(self)->environment();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QProcess_SetProcessEnvironment(QProcess* self, QProcessEnvironment* environment) {
	self->setProcessEnvironment(*environment);
}

QProcessEnvironment* QProcess_ProcessEnvironment(QProcess* self) {
	QProcessEnvironment ret = const_cast<const QProcess*>(self)->processEnvironment();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QProcessEnvironment*>(new QProcessEnvironment(ret));
}

uintptr_t QProcess_Error(QProcess* self) {
	QProcess::ProcessError ret = const_cast<const QProcess*>(self)->error();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QProcess_State(QProcess* self) {
	QProcess::ProcessState ret = const_cast<const QProcess*>(self)->state();
	return static_cast<uintptr_t>(ret);
}

#ifdef Q_OS_LINUX

int64_t QProcess_Pid(QProcess* self) {
	return const_cast<const QProcess*>(self)->pid();
}

#endif /* Q_OS_LINUX */

long long QProcess_ProcessId(QProcess* self) {
	return const_cast<const QProcess*>(self)->processId();
}

bool QProcess_WaitForStarted(QProcess* self) {
	return self->waitForStarted();
}

bool QProcess_WaitForReadyRead(QProcess* self) {
	return self->waitForReadyRead();
}

bool QProcess_WaitForBytesWritten(QProcess* self) {
	return self->waitForBytesWritten();
}

bool QProcess_WaitForFinished(QProcess* self) {
	return self->waitForFinished();
}

QByteArray* QProcess_ReadAllStandardOutput(QProcess* self) {
	QByteArray ret = self->readAllStandardOutput();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QProcess_ReadAllStandardError(QProcess* self) {
	QByteArray ret = self->readAllStandardError();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

int QProcess_ExitCode(QProcess* self) {
	return const_cast<const QProcess*>(self)->exitCode();
}

uintptr_t QProcess_ExitStatus(QProcess* self) {
	QProcess::ExitStatus ret = const_cast<const QProcess*>(self)->exitStatus();
	return static_cast<uintptr_t>(ret);
}

long long QProcess_BytesAvailable(QProcess* self) {
	return const_cast<const QProcess*>(self)->bytesAvailable();
}

long long QProcess_BytesToWrite(QProcess* self) {
	return const_cast<const QProcess*>(self)->bytesToWrite();
}

bool QProcess_IsSequential(QProcess* self) {
	return const_cast<const QProcess*>(self)->isSequential();
}

bool QProcess_CanReadLine(QProcess* self) {
	return const_cast<const QProcess*>(self)->canReadLine();
}

void QProcess_Close(QProcess* self) {
	self->close();
}

bool QProcess_AtEnd(QProcess* self) {
	return const_cast<const QProcess*>(self)->atEnd();
}

int QProcess_Execute(const char* program, size_t program_Strlen, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len) {
	QString program_QString = QString::fromUtf8(program, program_Strlen);
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments_len);
	for(size_t i = 0; i < arguments_len; ++i) {
		arguments_QList.push_back(QString::fromUtf8(arguments[i], arguments_Lengths[i]));
	}
	return QProcess::execute(program_QString, arguments_QList);
}

int QProcess_ExecuteWithCommand(const char* command, size_t command_Strlen) {
	QString command_QString = QString::fromUtf8(command, command_Strlen);
	return QProcess::execute(command_QString);
}

bool QProcess_StartDetached2(const char* program, size_t program_Strlen, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len, const char* workingDirectory, size_t workingDirectory_Strlen) {
	QString program_QString = QString::fromUtf8(program, program_Strlen);
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments_len);
	for(size_t i = 0; i < arguments_len; ++i) {
		arguments_QList.push_back(QString::fromUtf8(arguments[i], arguments_Lengths[i]));
	}
	QString workingDirectory_QString = QString::fromUtf8(workingDirectory, workingDirectory_Strlen);
	return QProcess::startDetached(program_QString, arguments_QList, workingDirectory_QString);
}

bool QProcess_StartDetached3(const char* program, size_t program_Strlen, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len) {
	QString program_QString = QString::fromUtf8(program, program_Strlen);
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments_len);
	for(size_t i = 0; i < arguments_len; ++i) {
		arguments_QList.push_back(QString::fromUtf8(arguments[i], arguments_Lengths[i]));
	}
	return QProcess::startDetached(program_QString, arguments_QList);
}

bool QProcess_StartDetachedWithCommand(const char* command, size_t command_Strlen) {
	QString command_QString = QString::fromUtf8(command, command_Strlen);
	return QProcess::startDetached(command_QString);
}

void QProcess_SystemEnvironment(char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = QProcess::systemEnvironment();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QProcess_NullDevice(char** _out, int* _out_Strlen) {
	QString ret = QProcess::nullDevice();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProcess_Terminate(QProcess* self) {
	self->terminate();
}

void QProcess_Kill(QProcess* self) {
	self->kill();
}

void QProcess_Finished(QProcess* self, int exitCode) {
	self->finished(static_cast<int>(exitCode));
}

void QProcess_connect_Finished(QProcess* self, void* slot) {
	QProcess::connect(self, static_cast<void (QProcess::*)(int)>(&QProcess::finished), self, [=](int exitCode) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QProcess_Finished2(QProcess* self, int exitCode, uintptr_t exitStatus) {
	self->finished(static_cast<int>(exitCode), static_cast<QProcess::ExitStatus>(exitStatus));
}

void QProcess_connect_Finished2(QProcess* self, void* slot) {
	QProcess::connect(self, static_cast<void (QProcess::*)(int, QProcess::ExitStatus)>(&QProcess::finished), self, [=](int exitCode, QProcess::ExitStatus exitStatus) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QProcess_ErrorWithError(QProcess* self, uintptr_t error) {
	self->error(static_cast<QProcess::ProcessError>(error));
}

void QProcess_connect_ErrorWithError(QProcess* self, void* slot) {
	QProcess::connect(self, static_cast<void (QProcess::*)(QProcess::ProcessError)>(&QProcess::error), self, [=](QProcess::ProcessError error) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QProcess_ErrorOccurred(QProcess* self, uintptr_t error) {
	self->errorOccurred(static_cast<QProcess::ProcessError>(error));
}

void QProcess_connect_ErrorOccurred(QProcess* self, void* slot) {
	QProcess::connect(self, static_cast<void (QProcess::*)(QProcess::ProcessError)>(&QProcess::errorOccurred), self, [=](QProcess::ProcessError error) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QProcess_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QProcess::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProcess_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QProcess::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProcess_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QProcess::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProcess_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QProcess::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProcess_Start3(QProcess* self, const char* program, size_t program_Strlen, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len, int mode) {
	QString program_QString = QString::fromUtf8(program, program_Strlen);
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments_len);
	for(size_t i = 0; i < arguments_len; ++i) {
		arguments_QList.push_back(QString::fromUtf8(arguments[i], arguments_Lengths[i]));
	}
	self->start(program_QString, arguments_QList, static_cast<QIODevice::OpenMode>(mode));
}

void QProcess_Start22(QProcess* self, const char* command, size_t command_Strlen, int mode) {
	QString command_QString = QString::fromUtf8(command, command_Strlen);
	self->start(command_QString, static_cast<QIODevice::OpenMode>(mode));
}

void QProcess_Start1(QProcess* self, int mode) {
	self->start(static_cast<QIODevice::OpenMode>(mode));
}

bool QProcess_StartDetached1(QProcess* self, long long* pid) {
	return self->startDetached(static_cast<qint64*>(pid));
}

bool QProcess_Open1(QProcess* self, int mode) {
	return self->open(static_cast<QIODevice::OpenMode>(mode));
}

void QProcess_SetStandardOutputFile2(QProcess* self, const char* fileName, size_t fileName_Strlen, int mode) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->setStandardOutputFile(fileName_QString, static_cast<QIODevice::OpenMode>(mode));
}

void QProcess_SetStandardErrorFile2(QProcess* self, const char* fileName, size_t fileName_Strlen, int mode) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->setStandardErrorFile(fileName_QString, static_cast<QIODevice::OpenMode>(mode));
}

bool QProcess_WaitForStarted1(QProcess* self, int msecs) {
	return self->waitForStarted(static_cast<int>(msecs));
}

bool QProcess_WaitForReadyRead1(QProcess* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QProcess_WaitForBytesWritten1(QProcess* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QProcess_WaitForFinished1(QProcess* self, int msecs) {
	return self->waitForFinished(static_cast<int>(msecs));
}

bool QProcess_StartDetached4(const char* program, size_t program_Strlen, char** arguments, uint64_t* arguments_Lengths, size_t arguments_len, const char* workingDirectory, size_t workingDirectory_Strlen, long long* pid) {
	QString program_QString = QString::fromUtf8(program, program_Strlen);
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments_len);
	for(size_t i = 0; i < arguments_len; ++i) {
		arguments_QList.push_back(QString::fromUtf8(arguments[i], arguments_Lengths[i]));
	}
	QString workingDirectory_QString = QString::fromUtf8(workingDirectory, workingDirectory_Strlen);
	return QProcess::startDetached(program_QString, arguments_QList, workingDirectory_QString, static_cast<qint64*>(pid));
}

void QProcess_Delete(QProcess* self) {
	delete self;
}

