#include <QByteArray>
#include <QIODevice>
#include <QIODeviceBase>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QProcess>
#include <QProcessEnvironment>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qprocess.h>
#include "gen_qprocess.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QProcess_Finished(intptr_t, int);
void miqt_exec_callback_QProcess_ErrorOccurred(intptr_t, int);
void miqt_exec_callback_QProcess_Finished2(intptr_t, int, int);
bool miqt_exec_callback_QProcess_Open(void*, intptr_t, int);
bool miqt_exec_callback_QProcess_WaitForReadyRead(void*, intptr_t, int);
bool miqt_exec_callback_QProcess_WaitForBytesWritten(void*, intptr_t, int);
long long miqt_exec_callback_QProcess_BytesToWrite(void*, intptr_t);
bool miqt_exec_callback_QProcess_IsSequential(void*, intptr_t);
void miqt_exec_callback_QProcess_Close(void*, intptr_t);
long long miqt_exec_callback_QProcess_ReadData(void*, intptr_t, char*, long long);
long long miqt_exec_callback_QProcess_WriteData(void*, intptr_t, const char*, long long);
long long miqt_exec_callback_QProcess_Pos(void*, intptr_t);
long long miqt_exec_callback_QProcess_Size(void*, intptr_t);
bool miqt_exec_callback_QProcess_Seek(void*, intptr_t, long long);
bool miqt_exec_callback_QProcess_AtEnd(void*, intptr_t);
bool miqt_exec_callback_QProcess_Reset(void*, intptr_t);
long long miqt_exec_callback_QProcess_BytesAvailable(void*, intptr_t);
bool miqt_exec_callback_QProcess_CanReadLine(void*, intptr_t);
long long miqt_exec_callback_QProcess_ReadLineData(void*, intptr_t, char*, long long);
long long miqt_exec_callback_QProcess_SkipData(void*, intptr_t, long long);
#ifdef __cplusplus
} /* extern C */
#endif

QProcessEnvironment* QProcessEnvironment_new() {
	return new QProcessEnvironment();
}

QProcessEnvironment* QProcessEnvironment_new2(int param1) {
	return new QProcessEnvironment(static_cast<QProcessEnvironment::Initialization>(param1));
}

QProcessEnvironment* QProcessEnvironment_new3(QProcessEnvironment* other) {
	return new QProcessEnvironment(*other);
}

void QProcessEnvironment_OperatorAssign(QProcessEnvironment* self, QProcessEnvironment* other) {
	self->operator=(*other);
}

void QProcessEnvironment_Swap(QProcessEnvironment* self, QProcessEnvironment* other) {
	self->swap(*other);
}

bool QProcessEnvironment_OperatorEqual(const QProcessEnvironment* self, QProcessEnvironment* other) {
	return (*self == *other);
}

bool QProcessEnvironment_OperatorNotEqual(const QProcessEnvironment* self, QProcessEnvironment* other) {
	return (*self != *other);
}

bool QProcessEnvironment_IsEmpty(const QProcessEnvironment* self) {
	return self->isEmpty();
}

bool QProcessEnvironment_InheritsFromParent(const QProcessEnvironment* self) {
	return self->inheritsFromParent();
}

void QProcessEnvironment_Clear(QProcessEnvironment* self) {
	self->clear();
}

bool QProcessEnvironment_Contains(const QProcessEnvironment* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->contains(name_QString);
}

void QProcessEnvironment_Insert(QProcessEnvironment* self, struct miqt_string name, struct miqt_string value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->insert(name_QString, value_QString);
}

void QProcessEnvironment_Remove(QProcessEnvironment* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->remove(name_QString);
}

struct miqt_string QProcessEnvironment_Value(const QProcessEnvironment* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->value(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QProcessEnvironment_ToStringList(const QProcessEnvironment* self) {
	QStringList _ret = self->toStringList();
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

struct miqt_array /* of struct miqt_string */  QProcessEnvironment_Keys(const QProcessEnvironment* self) {
	QStringList _ret = self->keys();
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

void QProcessEnvironment_InsertWithQProcessEnvironment(QProcessEnvironment* self, QProcessEnvironment* e) {
	self->insert(*e);
}

QProcessEnvironment* QProcessEnvironment_SystemEnvironment() {
	return new QProcessEnvironment(QProcessEnvironment::systemEnvironment());
}

struct miqt_string QProcessEnvironment_Value2(const QProcessEnvironment* self, struct miqt_string name, struct miqt_string defaultValue) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
	QString _ret = self->value(name_QString, defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcessEnvironment_Delete(QProcessEnvironment* self) {
	delete self;
}

class MiqtVirtualQProcess final : public QProcess {
public:

	MiqtVirtualQProcess(): QProcess() {};
	MiqtVirtualQProcess(QObject* parent): QProcess(parent) {};

	virtual ~MiqtVirtualQProcess() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode mode) override {
		if (handle__Open == 0) {
			return QProcess::open(mode);
		}
		
		QIODeviceBase::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QProcess_Open(this, handle__Open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Open(int mode) {

		return QProcess::open(static_cast<QIODeviceBase::OpenMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__WaitForReadyRead == 0) {
			return QProcess::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QProcess_WaitForReadyRead(this, handle__WaitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForReadyRead(int msecs) {

		return QProcess::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__WaitForBytesWritten == 0) {
			return QProcess::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QProcess_WaitForBytesWritten(this, handle__WaitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForBytesWritten(int msecs) {

		return QProcess::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__BytesToWrite == 0) {
			return QProcess::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QProcess_BytesToWrite(const_cast<MiqtVirtualQProcess*>(this), handle__BytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesToWrite() const {

		qint64 _ret = QProcess::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__IsSequential == 0) {
			return QProcess::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QProcess_IsSequential(const_cast<MiqtVirtualQProcess*>(this), handle__IsSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsSequential() const {

		return QProcess::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__Close == 0) {
			QProcess::close();
			return;
		}
		

		miqt_exec_callback_QProcess_Close(this, handle__Close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Close() {

		QProcess::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__ReadData == 0) {
			return QProcess::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QProcess_ReadData(this, handle__ReadData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadData(char* data, long long maxlen) {

		qint64 _ret = QProcess::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 lenVal) override {
		if (handle__WriteData == 0) {
			return QProcess::writeData(data, lenVal);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 lenVal_ret = lenVal;
		long long sigval2 = static_cast<long long>(lenVal_ret);

		long long callback_return_value = miqt_exec_callback_QProcess_WriteData(this, handle__WriteData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_WriteData(const char* data, long long lenVal) {

		qint64 _ret = QProcess::writeData(data, static_cast<qint64>(lenVal));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__Pos == 0) {
			return QProcess::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QProcess_Pos(const_cast<MiqtVirtualQProcess*>(this), handle__Pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Pos() const {

		qint64 _ret = QProcess::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__Size == 0) {
			return QProcess::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QProcess_Size(const_cast<MiqtVirtualQProcess*>(this), handle__Size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Size() const {

		qint64 _ret = QProcess::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (handle__Seek == 0) {
			return QProcess::seek(pos);
		}
		
		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);

		bool callback_return_value = miqt_exec_callback_QProcess_Seek(this, handle__Seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Seek(long long pos) {

		return QProcess::seek(static_cast<qint64>(pos));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AtEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__AtEnd == 0) {
			return QProcess::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QProcess_AtEnd(const_cast<MiqtVirtualQProcess*>(this), handle__AtEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AtEnd() const {

		return QProcess::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__Reset == 0) {
			return QProcess::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QProcess_Reset(this, handle__Reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Reset() {

		return QProcess::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__BytesAvailable == 0) {
			return QProcess::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QProcess_BytesAvailable(const_cast<MiqtVirtualQProcess*>(this), handle__BytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesAvailable() const {

		qint64 _ret = QProcess::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__CanReadLine == 0) {
			return QProcess::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QProcess_CanReadLine(const_cast<MiqtVirtualQProcess*>(this), handle__CanReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanReadLine() const {

		return QProcess::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__ReadLineData == 0) {
			return QProcess::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QProcess_ReadLineData(this, handle__ReadLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadLineData(char* data, long long maxlen) {

		qint64 _ret = QProcess::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SkipData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (handle__SkipData == 0) {
			return QProcess::skipData(maxSize);
		}
		
		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QProcess_SkipData(this, handle__SkipData, sigval1);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_SkipData(long long maxSize) {

		qint64 _ret = QProcess::skipData(static_cast<qint64>(maxSize));
		return static_cast<long long>(_ret);

	}

};

QProcess* QProcess_new() {
	return new MiqtVirtualQProcess();
}

QProcess* QProcess_new2(QObject* parent) {
	return new MiqtVirtualQProcess(parent);
}

void QProcess_virtbase(QProcess* src, QIODevice** outptr_QIODevice) {
	*outptr_QIODevice = static_cast<QIODevice*>(src);
}

QMetaObject* QProcess_MetaObject(const QProcess* self) {
	return (QMetaObject*) self->metaObject();
}

void* QProcess_Metacast(QProcess* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QProcess_Tr(const char* s) {
	QString _ret = QProcess::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcess_Start(QProcess* self, struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	self->start(program_QString);
}

void QProcess_Start2(QProcess* self) {
	self->start();
}

void QProcess_StartCommand(QProcess* self, struct miqt_string command) {
	QString command_QString = QString::fromUtf8(command.data, command.len);
	self->startCommand(command_QString);
}

bool QProcess_StartDetached(QProcess* self) {
	return self->startDetached();
}

bool QProcess_Open(QProcess* self, int mode) {
	return self->open(static_cast<QIODeviceBase::OpenMode>(mode));
}

struct miqt_string QProcess_Program(const QProcess* self) {
	QString _ret = self->program();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcess_SetProgram(QProcess* self, struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	self->setProgram(program_QString);
}

struct miqt_array /* of struct miqt_string */  QProcess_Arguments(const QProcess* self) {
	QStringList _ret = self->arguments();
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

void QProcess_SetArguments(QProcess* self, struct miqt_array /* of struct miqt_string */  arguments) {
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	self->setArguments(arguments_QList);
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

void QProcess_SetStandardInputFile(QProcess* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setStandardInputFile(fileName_QString);
}

void QProcess_SetStandardOutputFile(QProcess* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setStandardOutputFile(fileName_QString);
}

void QProcess_SetStandardErrorFile(QProcess* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setStandardErrorFile(fileName_QString);
}

void QProcess_SetStandardOutputProcess(QProcess* self, QProcess* destination) {
	self->setStandardOutputProcess(destination);
}

struct miqt_string QProcess_WorkingDirectory(const QProcess* self) {
	QString _ret = self->workingDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcess_SetWorkingDirectory(QProcess* self, struct miqt_string dir) {
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	self->setWorkingDirectory(dir_QString);
}

void QProcess_SetEnvironment(QProcess* self, struct miqt_array /* of struct miqt_string */  environment) {
	QStringList environment_QList;
	environment_QList.reserve(environment.len);
	struct miqt_string* environment_arr = static_cast<struct miqt_string*>(environment.data);
	for(size_t i = 0; i < environment.len; ++i) {
		QString environment_arr_i_QString = QString::fromUtf8(environment_arr[i].data, environment_arr[i].len);
		environment_QList.push_back(environment_arr_i_QString);
	}
	self->setEnvironment(environment_QList);
}

struct miqt_array /* of struct miqt_string */  QProcess_Environment(const QProcess* self) {
	QStringList _ret = self->environment();
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

long long QProcess_ProcessId(const QProcess* self) {
	qint64 _ret = self->processId();
	return static_cast<long long>(_ret);
}

bool QProcess_WaitForStarted(QProcess* self) {
	return self->waitForStarted();
}

bool QProcess_WaitForReadyRead(QProcess* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QProcess_WaitForBytesWritten(QProcess* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QProcess_WaitForFinished(QProcess* self) {
	return self->waitForFinished();
}

struct miqt_string QProcess_ReadAllStandardOutput(QProcess* self) {
	QByteArray _qb = self->readAllStandardOutput();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QProcess_ReadAllStandardError(QProcess* self) {
	QByteArray _qb = self->readAllStandardError();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QProcess_ExitCode(const QProcess* self) {
	return self->exitCode();
}

int QProcess_ExitStatus(const QProcess* self) {
	QProcess::ExitStatus _ret = self->exitStatus();
	return static_cast<int>(_ret);
}

long long QProcess_BytesToWrite(const QProcess* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QProcess_IsSequential(const QProcess* self) {
	return self->isSequential();
}

void QProcess_Close(QProcess* self) {
	self->close();
}

int QProcess_Execute(struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	return QProcess::execute(program_QString);
}

bool QProcess_StartDetachedWithProgram(struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	return QProcess::startDetached(program_QString);
}

struct miqt_array /* of struct miqt_string */  QProcess_SystemEnvironment() {
	QStringList _ret = QProcess::systemEnvironment();
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

struct miqt_string QProcess_NullDevice() {
	QString _ret = QProcess::nullDevice();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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
	MiqtVirtualQProcess::connect(self, static_cast<void (QProcess::*)(int, QProcess::ExitStatus)>(&QProcess::finished), self, [=](int exitCode) {
		int sigval1 = exitCode;
		miqt_exec_callback_QProcess_Finished(slot, sigval1);
	});
}

void QProcess_ErrorOccurred(QProcess* self, int error) {
	self->errorOccurred(static_cast<QProcess::ProcessError>(error));
}

void QProcess_connect_ErrorOccurred(QProcess* self, intptr_t slot) {
	MiqtVirtualQProcess::connect(self, static_cast<void (QProcess::*)(QProcess::ProcessError)>(&QProcess::errorOccurred), self, [=](QProcess::ProcessError error) {
		QProcess::ProcessError error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QProcess_ErrorOccurred(slot, sigval1);
	});
}

struct miqt_string QProcess_Tr2(const char* s, const char* c) {
	QString _ret = QProcess::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProcess_Tr3(const char* s, const char* c, int n) {
	QString _ret = QProcess::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcess_Start22(QProcess* self, struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	self->start(program_QString, arguments_QList);
}

void QProcess_Start3(QProcess* self, struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments, int mode) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	self->start(program_QString, arguments_QList, static_cast<QIODeviceBase::OpenMode>(mode));
}

void QProcess_Start1(QProcess* self, int mode) {
	self->start(static_cast<QIODeviceBase::OpenMode>(mode));
}

void QProcess_StartCommand2(QProcess* self, struct miqt_string command, int mode) {
	QString command_QString = QString::fromUtf8(command.data, command.len);
	self->startCommand(command_QString, static_cast<QIODeviceBase::OpenMode>(mode));
}

bool QProcess_StartDetached1(QProcess* self, long long* pid) {
	return self->startDetached(static_cast<qint64*>(pid));
}

void QProcess_SetStandardOutputFile2(QProcess* self, struct miqt_string fileName, int mode) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setStandardOutputFile(fileName_QString, static_cast<QIODeviceBase::OpenMode>(mode));
}

void QProcess_SetStandardErrorFile2(QProcess* self, struct miqt_string fileName, int mode) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setStandardErrorFile(fileName_QString, static_cast<QIODeviceBase::OpenMode>(mode));
}

bool QProcess_WaitForStarted1(QProcess* self, int msecs) {
	return self->waitForStarted(static_cast<int>(msecs));
}

bool QProcess_WaitForFinished1(QProcess* self, int msecs) {
	return self->waitForFinished(static_cast<int>(msecs));
}

int QProcess_Execute2(struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	return QProcess::execute(program_QString, arguments_QList);
}

bool QProcess_StartDetached2(struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	return QProcess::startDetached(program_QString, arguments_QList);
}

bool QProcess_StartDetached3(struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments, struct miqt_string workingDirectory) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	QString workingDirectory_QString = QString::fromUtf8(workingDirectory.data, workingDirectory.len);
	return QProcess::startDetached(program_QString, arguments_QList, workingDirectory_QString);
}

bool QProcess_StartDetached4(struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments, struct miqt_string workingDirectory, long long* pid) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	QString workingDirectory_QString = QString::fromUtf8(workingDirectory.data, workingDirectory.len);
	return QProcess::startDetached(program_QString, arguments_QList, workingDirectory_QString, static_cast<qint64*>(pid));
}

void QProcess_Finished2(QProcess* self, int exitCode, int exitStatus) {
	self->finished(static_cast<int>(exitCode), static_cast<QProcess::ExitStatus>(exitStatus));
}

void QProcess_connect_Finished2(QProcess* self, intptr_t slot) {
	MiqtVirtualQProcess::connect(self, static_cast<void (QProcess::*)(int, QProcess::ExitStatus)>(&QProcess::finished), self, [=](int exitCode, QProcess::ExitStatus exitStatus) {
		int sigval1 = exitCode;
		QProcess::ExitStatus exitStatus_ret = exitStatus;
		int sigval2 = static_cast<int>(exitStatus_ret);
		miqt_exec_callback_QProcess_Finished2(slot, sigval1, sigval2);
	});
}

bool QProcess_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

bool QProcess_virtualbase_Open(void* self, int mode) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_Open(mode);
}

bool QProcess_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForReadyRead = slot;
	return true;
}

bool QProcess_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

bool QProcess_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForBytesWritten = slot;
	return true;
}

bool QProcess_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

bool QProcess_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesToWrite = slot;
	return true;
}

long long QProcess_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQProcess*)(self) )->virtualbase_BytesToWrite();
}

bool QProcess_override_virtual_IsSequential(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsSequential = slot;
	return true;
}

bool QProcess_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQProcess*)(self) )->virtualbase_IsSequential();
}

bool QProcess_override_virtual_Close(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Close = slot;
	return true;
}

void QProcess_virtualbase_Close(void* self) {
	( (MiqtVirtualQProcess*)(self) )->virtualbase_Close();
}

bool QProcess_override_virtual_ReadData(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadData = slot;
	return true;
}

long long QProcess_virtualbase_ReadData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_ReadData(data, maxlen);
}

bool QProcess_override_virtual_WriteData(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteData = slot;
	return true;
}

long long QProcess_virtualbase_WriteData(void* self, const char* data, long long lenVal) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_WriteData(data, lenVal);
}

bool QProcess_override_virtual_Pos(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Pos = slot;
	return true;
}

long long QProcess_virtualbase_Pos(const void* self) {
	return ( (const MiqtVirtualQProcess*)(self) )->virtualbase_Pos();
}

bool QProcess_override_virtual_Size(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Size = slot;
	return true;
}

long long QProcess_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQProcess*)(self) )->virtualbase_Size();
}

bool QProcess_override_virtual_Seek(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Seek = slot;
	return true;
}

bool QProcess_virtualbase_Seek(void* self, long long pos) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_Seek(pos);
}

bool QProcess_override_virtual_AtEnd(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AtEnd = slot;
	return true;
}

bool QProcess_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQProcess*)(self) )->virtualbase_AtEnd();
}

bool QProcess_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

bool QProcess_virtualbase_Reset(void* self) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_Reset();
}

bool QProcess_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesAvailable = slot;
	return true;
}

long long QProcess_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQProcess*)(self) )->virtualbase_BytesAvailable();
}

bool QProcess_override_virtual_CanReadLine(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanReadLine = slot;
	return true;
}

bool QProcess_virtualbase_CanReadLine(const void* self) {
	return ( (const MiqtVirtualQProcess*)(self) )->virtualbase_CanReadLine();
}

bool QProcess_override_virtual_ReadLineData(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadLineData = slot;
	return true;
}

long long QProcess_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

bool QProcess_override_virtual_SkipData(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SkipData = slot;
	return true;
}

long long QProcess_virtualbase_SkipData(void* self, long long maxSize) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_SkipData(maxSize);
}

void QProcess_Delete(QProcess* self) {
	delete self;
}

