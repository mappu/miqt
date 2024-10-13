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
#include "_cgo_export.h"

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

bool QProcessEnvironment_OperatorEqual(const QProcessEnvironment* self, QProcessEnvironment* other) {
	return self->operator==(*other);
}

bool QProcessEnvironment_OperatorNotEqual(const QProcessEnvironment* self, QProcessEnvironment* other) {
	return self->operator!=(*other);
}

bool QProcessEnvironment_IsEmpty(const QProcessEnvironment* self) {
	return self->isEmpty();
}

void QProcessEnvironment_Clear(QProcessEnvironment* self) {
	self->clear();
}

bool QProcessEnvironment_Contains(const QProcessEnvironment* self, struct miqt_string* name) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	return self->contains(name_QString);
}

void QProcessEnvironment_Insert(QProcessEnvironment* self, struct miqt_string* name, struct miqt_string* value) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	QString value_QString = QString::fromUtf8(&value->data, value->len);
	self->insert(name_QString, value_QString);
}

void QProcessEnvironment_Remove(QProcessEnvironment* self, struct miqt_string* name) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	self->remove(name_QString);
}

struct miqt_string* QProcessEnvironment_Value(const QProcessEnvironment* self, struct miqt_string* name) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	QString _ret = self->value(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_array* QProcessEnvironment_ToStringList(const QProcessEnvironment* self) {
	QStringList _ret = self->toStringList();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QProcessEnvironment_Keys(const QProcessEnvironment* self) {
	QStringList _ret = self->keys();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QProcessEnvironment_InsertWithQProcessEnvironment(QProcessEnvironment* self, QProcessEnvironment* e) {
	self->insert(*e);
}

QProcessEnvironment* QProcessEnvironment_SystemEnvironment() {
	return new QProcessEnvironment(QProcessEnvironment::systemEnvironment());
}

struct miqt_string* QProcessEnvironment_Value2(const QProcessEnvironment* self, struct miqt_string* name, struct miqt_string* defaultValue) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	QString defaultValue_QString = QString::fromUtf8(&defaultValue->data, defaultValue->len);
	QString _ret = self->value(name_QString, defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

QMetaObject* QProcess_MetaObject(const QProcess* self) {
	return (QMetaObject*) self->metaObject();
}

void* QProcess_Metacast(QProcess* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QProcess_Tr(const char* s) {
	QString _ret = QProcess::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QProcess_TrUtf8(const char* s) {
	QString _ret = QProcess::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QProcess_Start(QProcess* self, struct miqt_string* program, struct miqt_array* /* of struct miqt_string* */ arguments) {
	QString program_QString = QString::fromUtf8(&program->data, program->len);
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments->len);
	struct miqt_string** arguments_arr = static_cast<struct miqt_string**>(arguments->data);
	for(size_t i = 0; i < arguments->len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(&arguments_arr[i]->data, arguments_arr[i]->len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	self->start(program_QString, arguments_QList);
}

void QProcess_StartWithCommand(QProcess* self, struct miqt_string* command) {
	QString command_QString = QString::fromUtf8(&command->data, command->len);
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

struct miqt_string* QProcess_Program(const QProcess* self) {
	QString _ret = self->program();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QProcess_SetProgram(QProcess* self, struct miqt_string* program) {
	QString program_QString = QString::fromUtf8(&program->data, program->len);
	self->setProgram(program_QString);
}

struct miqt_array* QProcess_Arguments(const QProcess* self) {
	QStringList _ret = self->arguments();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QProcess_SetArguments(QProcess* self, struct miqt_array* /* of struct miqt_string* */ arguments) {
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments->len);
	struct miqt_string** arguments_arr = static_cast<struct miqt_string**>(arguments->data);
	for(size_t i = 0; i < arguments->len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(&arguments_arr[i]->data, arguments_arr[i]->len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	self->setArguments(arguments_QList);
}

int QProcess_ReadChannelMode(const QProcess* self) {
	QProcess::ProcessChannelMode _ret = self->readChannelMode();
	return static_cast<int>(_ret);
}

void QProcess_SetReadChannelMode(QProcess* self, int mode) {
	self->setReadChannelMode(static_cast<QProcess::ProcessChannelMode>(mode));
}

int QProcess_ProcessChannelMode(const QProcess* self) {
	QProcess::ProcessChannelMode _ret = self->processChannelMode();
	return static_cast<int>(_ret);
}

void QProcess_SetProcessChannelMode(QProcess* self, int mode) {
	self->setProcessChannelMode(static_cast<QProcess::ProcessChannelMode>(mode));
}

int QProcess_InputChannelMode(const QProcess* self) {
	QProcess::InputChannelMode _ret = self->inputChannelMode();
	return static_cast<int>(_ret);
}

void QProcess_SetInputChannelMode(QProcess* self, int mode) {
	self->setInputChannelMode(static_cast<QProcess::InputChannelMode>(mode));
}

int QProcess_ReadChannel(const QProcess* self) {
	QProcess::ProcessChannel _ret = self->readChannel();
	return static_cast<int>(_ret);
}

void QProcess_SetReadChannel(QProcess* self, int channel) {
	self->setReadChannel(static_cast<QProcess::ProcessChannel>(channel));
}

void QProcess_CloseReadChannel(QProcess* self, int channel) {
	self->closeReadChannel(static_cast<QProcess::ProcessChannel>(channel));
}

void QProcess_CloseWriteChannel(QProcess* self) {
	self->closeWriteChannel();
}

void QProcess_SetStandardInputFile(QProcess* self, struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	self->setStandardInputFile(fileName_QString);
}

void QProcess_SetStandardOutputFile(QProcess* self, struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	self->setStandardOutputFile(fileName_QString);
}

void QProcess_SetStandardErrorFile(QProcess* self, struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	self->setStandardErrorFile(fileName_QString);
}

void QProcess_SetStandardOutputProcess(QProcess* self, QProcess* destination) {
	self->setStandardOutputProcess(destination);
}

struct miqt_string* QProcess_WorkingDirectory(const QProcess* self) {
	QString _ret = self->workingDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QProcess_SetWorkingDirectory(QProcess* self, struct miqt_string* dir) {
	QString dir_QString = QString::fromUtf8(&dir->data, dir->len);
	self->setWorkingDirectory(dir_QString);
}

void QProcess_SetEnvironment(QProcess* self, struct miqt_array* /* of struct miqt_string* */ environment) {
	QList<QString> environment_QList;
	environment_QList.reserve(environment->len);
	struct miqt_string** environment_arr = static_cast<struct miqt_string**>(environment->data);
	for(size_t i = 0; i < environment->len; ++i) {
		QString environment_arr_i_QString = QString::fromUtf8(&environment_arr[i]->data, environment_arr[i]->len);
		environment_QList.push_back(environment_arr_i_QString);
	}
	self->setEnvironment(environment_QList);
}

struct miqt_array* QProcess_Environment(const QProcess* self) {
	QStringList _ret = self->environment();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QProcess_SetProcessEnvironment(QProcess* self, QProcessEnvironment* environment) {
	self->setProcessEnvironment(*environment);
}

QProcessEnvironment* QProcess_ProcessEnvironment(const QProcess* self) {
	return new QProcessEnvironment(self->processEnvironment());
}

int QProcess_Error(const QProcess* self) {
	QProcess::ProcessError _ret = self->error();
	return static_cast<int>(_ret);
}

int QProcess_State(const QProcess* self) {
	QProcess::ProcessState _ret = self->state();
	return static_cast<int>(_ret);
}

long long QProcess_Pid(const QProcess* self) {
#ifdef Q_OS_LINUX
	Q_PID _ret = self->pid();
	return static_cast<long long>(_ret);
#else
	long long _ret_invalidOS;
	return _ret_invalidOS;
#endif
}

long long QProcess_ProcessId(const QProcess* self) {
	qint64 _ret = self->processId();
	return static_cast<long long>(_ret);
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
	return new QByteArray(self->readAllStandardOutput());
}

QByteArray* QProcess_ReadAllStandardError(QProcess* self) {
	return new QByteArray(self->readAllStandardError());
}

int QProcess_ExitCode(const QProcess* self) {
	return self->exitCode();
}

int QProcess_ExitStatus(const QProcess* self) {
	QProcess::ExitStatus _ret = self->exitStatus();
	return static_cast<int>(_ret);
}

long long QProcess_BytesAvailable(const QProcess* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

long long QProcess_BytesToWrite(const QProcess* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QProcess_IsSequential(const QProcess* self) {
	return self->isSequential();
}

bool QProcess_CanReadLine(const QProcess* self) {
	return self->canReadLine();
}

void QProcess_Close(QProcess* self) {
	self->close();
}

bool QProcess_AtEnd(const QProcess* self) {
	return self->atEnd();
}

int QProcess_Execute(struct miqt_string* program, struct miqt_array* /* of struct miqt_string* */ arguments) {
	QString program_QString = QString::fromUtf8(&program->data, program->len);
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments->len);
	struct miqt_string** arguments_arr = static_cast<struct miqt_string**>(arguments->data);
	for(size_t i = 0; i < arguments->len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(&arguments_arr[i]->data, arguments_arr[i]->len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	return QProcess::execute(program_QString, arguments_QList);
}

int QProcess_ExecuteWithCommand(struct miqt_string* command) {
	QString command_QString = QString::fromUtf8(&command->data, command->len);
	return QProcess::execute(command_QString);
}

bool QProcess_StartDetached2(struct miqt_string* program, struct miqt_array* /* of struct miqt_string* */ arguments, struct miqt_string* workingDirectory) {
	QString program_QString = QString::fromUtf8(&program->data, program->len);
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments->len);
	struct miqt_string** arguments_arr = static_cast<struct miqt_string**>(arguments->data);
	for(size_t i = 0; i < arguments->len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(&arguments_arr[i]->data, arguments_arr[i]->len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	QString workingDirectory_QString = QString::fromUtf8(&workingDirectory->data, workingDirectory->len);
	return QProcess::startDetached(program_QString, arguments_QList, workingDirectory_QString);
}

bool QProcess_StartDetached3(struct miqt_string* program, struct miqt_array* /* of struct miqt_string* */ arguments) {
	QString program_QString = QString::fromUtf8(&program->data, program->len);
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments->len);
	struct miqt_string** arguments_arr = static_cast<struct miqt_string**>(arguments->data);
	for(size_t i = 0; i < arguments->len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(&arguments_arr[i]->data, arguments_arr[i]->len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	return QProcess::startDetached(program_QString, arguments_QList);
}

bool QProcess_StartDetachedWithCommand(struct miqt_string* command) {
	QString command_QString = QString::fromUtf8(&command->data, command->len);
	return QProcess::startDetached(command_QString);
}

struct miqt_array* QProcess_SystemEnvironment() {
	QStringList _ret = QProcess::systemEnvironment();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string* QProcess_NullDevice() {
	QString _ret = QProcess::nullDevice();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

void QProcess_connect_Finished(QProcess* self, intptr_t slot) {
	QProcess::connect(self, static_cast<void (QProcess::*)(int)>(&QProcess::finished), self, [=](int exitCode) {
		int sigval1 = exitCode;
		miqt_exec_callback_QProcess_Finished(slot, sigval1);
	});
}

void QProcess_Finished2(QProcess* self, int exitCode, int exitStatus) {
	self->finished(static_cast<int>(exitCode), static_cast<QProcess::ExitStatus>(exitStatus));
}

void QProcess_connect_Finished2(QProcess* self, intptr_t slot) {
	QProcess::connect(self, static_cast<void (QProcess::*)(int, QProcess::ExitStatus)>(&QProcess::finished), self, [=](int exitCode, QProcess::ExitStatus exitStatus) {
		int sigval1 = exitCode;
		QProcess::ExitStatus exitStatus_ret = exitStatus;
		int sigval2 = static_cast<int>(exitStatus_ret);
		miqt_exec_callback_QProcess_Finished2(slot, sigval1, sigval2);
	});
}

void QProcess_ErrorWithError(QProcess* self, int error) {
	self->error(static_cast<QProcess::ProcessError>(error));
}

void QProcess_connect_ErrorWithError(QProcess* self, intptr_t slot) {
	QProcess::connect(self, static_cast<void (QProcess::*)(QProcess::ProcessError)>(&QProcess::error), self, [=](QProcess::ProcessError error) {
		QProcess::ProcessError error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QProcess_ErrorWithError(slot, sigval1);
	});
}

void QProcess_ErrorOccurred(QProcess* self, int error) {
	self->errorOccurred(static_cast<QProcess::ProcessError>(error));
}

void QProcess_connect_ErrorOccurred(QProcess* self, intptr_t slot) {
	QProcess::connect(self, static_cast<void (QProcess::*)(QProcess::ProcessError)>(&QProcess::errorOccurred), self, [=](QProcess::ProcessError error) {
		QProcess::ProcessError error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QProcess_ErrorOccurred(slot, sigval1);
	});
}

struct miqt_string* QProcess_Tr2(const char* s, const char* c) {
	QString _ret = QProcess::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QProcess_Tr3(const char* s, const char* c, int n) {
	QString _ret = QProcess::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QProcess_TrUtf82(const char* s, const char* c) {
	QString _ret = QProcess::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QProcess_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QProcess::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QProcess_Start3(QProcess* self, struct miqt_string* program, struct miqt_array* /* of struct miqt_string* */ arguments, int mode) {
	QString program_QString = QString::fromUtf8(&program->data, program->len);
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments->len);
	struct miqt_string** arguments_arr = static_cast<struct miqt_string**>(arguments->data);
	for(size_t i = 0; i < arguments->len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(&arguments_arr[i]->data, arguments_arr[i]->len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	self->start(program_QString, arguments_QList, static_cast<QIODevice::OpenMode>(mode));
}

void QProcess_Start22(QProcess* self, struct miqt_string* command, int mode) {
	QString command_QString = QString::fromUtf8(&command->data, command->len);
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

void QProcess_SetStandardOutputFile2(QProcess* self, struct miqt_string* fileName, int mode) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	self->setStandardOutputFile(fileName_QString, static_cast<QIODevice::OpenMode>(mode));
}

void QProcess_SetStandardErrorFile2(QProcess* self, struct miqt_string* fileName, int mode) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
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

bool QProcess_StartDetached4(struct miqt_string* program, struct miqt_array* /* of struct miqt_string* */ arguments, struct miqt_string* workingDirectory, long long* pid) {
	QString program_QString = QString::fromUtf8(&program->data, program->len);
	QList<QString> arguments_QList;
	arguments_QList.reserve(arguments->len);
	struct miqt_string** arguments_arr = static_cast<struct miqt_string**>(arguments->data);
	for(size_t i = 0; i < arguments->len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(&arguments_arr[i]->data, arguments_arr[i]->len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	QString workingDirectory_QString = QString::fromUtf8(&workingDirectory->data, workingDirectory->len);
	return QProcess::startDetached(program_QString, arguments_QList, workingDirectory_QString, static_cast<qint64*>(pid));
}

void QProcess_Delete(QProcess* self) {
	delete self;
}

