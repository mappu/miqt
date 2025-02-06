#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QIODeviceBase>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QProcess>
#include <QProcessEnvironment>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qprocess.h>
#include "gen_qprocess.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QProcess_finished(intptr_t, int);
void miqt_exec_callback_QProcess_errorOccurred(intptr_t, int);
void miqt_exec_callback_QProcess_finished2(intptr_t, int, int);
bool miqt_exec_callback_QProcess_open(QProcess*, intptr_t, int);
bool miqt_exec_callback_QProcess_waitForReadyRead(QProcess*, intptr_t, int);
bool miqt_exec_callback_QProcess_waitForBytesWritten(QProcess*, intptr_t, int);
long long miqt_exec_callback_QProcess_bytesToWrite(const QProcess*, intptr_t);
bool miqt_exec_callback_QProcess_isSequential(const QProcess*, intptr_t);
void miqt_exec_callback_QProcess_close(QProcess*, intptr_t);
long long miqt_exec_callback_QProcess_readData(QProcess*, intptr_t, char*, long long);
long long miqt_exec_callback_QProcess_writeData(QProcess*, intptr_t, const char*, long long);
long long miqt_exec_callback_QProcess_pos(const QProcess*, intptr_t);
long long miqt_exec_callback_QProcess_size(const QProcess*, intptr_t);
bool miqt_exec_callback_QProcess_seek(QProcess*, intptr_t, long long);
bool miqt_exec_callback_QProcess_atEnd(const QProcess*, intptr_t);
bool miqt_exec_callback_QProcess_reset(QProcess*, intptr_t);
long long miqt_exec_callback_QProcess_bytesAvailable(const QProcess*, intptr_t);
bool miqt_exec_callback_QProcess_canReadLine(const QProcess*, intptr_t);
long long miqt_exec_callback_QProcess_readLineData(QProcess*, intptr_t, char*, long long);
long long miqt_exec_callback_QProcess_skipData(QProcess*, intptr_t, long long);
bool miqt_exec_callback_QProcess_event(QProcess*, intptr_t, QEvent*);
bool miqt_exec_callback_QProcess_eventFilter(QProcess*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QProcess_timerEvent(QProcess*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QProcess_childEvent(QProcess*, intptr_t, QChildEvent*);
void miqt_exec_callback_QProcess_customEvent(QProcess*, intptr_t, QEvent*);
void miqt_exec_callback_QProcess_connectNotify(QProcess*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QProcess_disconnectNotify(QProcess*, intptr_t, QMetaMethod*);
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

void QProcessEnvironment_operatorAssign(QProcessEnvironment* self, QProcessEnvironment* other) {
	self->operator=(*other);
}

void QProcessEnvironment_swap(QProcessEnvironment* self, QProcessEnvironment* other) {
	self->swap(*other);
}

bool QProcessEnvironment_operatorEqual(const QProcessEnvironment* self, QProcessEnvironment* other) {
	return (*self == *other);
}

bool QProcessEnvironment_operatorNotEqual(const QProcessEnvironment* self, QProcessEnvironment* other) {
	return (*self != *other);
}

bool QProcessEnvironment_isEmpty(const QProcessEnvironment* self) {
	return self->isEmpty();
}

bool QProcessEnvironment_inheritsFromParent(const QProcessEnvironment* self) {
	return self->inheritsFromParent();
}

void QProcessEnvironment_clear(QProcessEnvironment* self) {
	self->clear();
}

bool QProcessEnvironment_contains(const QProcessEnvironment* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->contains(name_QString);
}

void QProcessEnvironment_insert(QProcessEnvironment* self, struct miqt_string name, struct miqt_string value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->insert(name_QString, value_QString);
}

void QProcessEnvironment_remove(QProcessEnvironment* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->remove(name_QString);
}

struct miqt_string QProcessEnvironment_value(const QProcessEnvironment* self, struct miqt_string name) {
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

struct miqt_array /* of struct miqt_string */  QProcessEnvironment_toStringList(const QProcessEnvironment* self) {
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

struct miqt_array /* of struct miqt_string */  QProcessEnvironment_keys(const QProcessEnvironment* self) {
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

void QProcessEnvironment_insertWithQProcessEnvironment(QProcessEnvironment* self, QProcessEnvironment* e) {
	self->insert(*e);
}

QProcessEnvironment* QProcessEnvironment_systemEnvironment() {
	return new QProcessEnvironment(QProcessEnvironment::systemEnvironment());
}

struct miqt_string QProcessEnvironment_value2(const QProcessEnvironment* self, struct miqt_string name, struct miqt_string defaultValue) {
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

void QProcessEnvironment_delete(QProcessEnvironment* self) {
	delete self;
}

class MiqtVirtualQProcess final : public QProcess {
public:

	MiqtVirtualQProcess(): QProcess() {};
	MiqtVirtualQProcess(QObject* parent): QProcess(parent) {};

	virtual ~MiqtVirtualQProcess() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode mode) override {
		if (handle__open == 0) {
			return QProcess::open(mode);
		}
		
		QIODeviceBase::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QProcess_open(this, handle__open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_open(int mode) {

		return QProcess::open(static_cast<QIODeviceBase::OpenMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__waitForReadyRead == 0) {
			return QProcess::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QProcess_waitForReadyRead(this, handle__waitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForReadyRead(int msecs) {

		return QProcess::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__waitForBytesWritten == 0) {
			return QProcess::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QProcess_waitForBytesWritten(this, handle__waitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForBytesWritten(int msecs) {

		return QProcess::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__bytesToWrite == 0) {
			return QProcess::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QProcess_bytesToWrite(this, handle__bytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesToWrite() const {

		qint64 _ret = QProcess::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__isSequential == 0) {
			return QProcess::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QProcess_isSequential(this, handle__isSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isSequential() const {

		return QProcess::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__close == 0) {
			QProcess::close();
			return;
		}
		

		miqt_exec_callback_QProcess_close(this, handle__close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_close() {

		QProcess::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__readData == 0) {
			return QProcess::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QProcess_readData(this, handle__readData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_readData(char* data, long long maxlen) {

		qint64 _ret = QProcess::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (handle__writeData == 0) {
			return QProcess::writeData(data, len);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);

		long long callback_return_value = miqt_exec_callback_QProcess_writeData(this, handle__writeData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_writeData(const char* data, long long len) {

		qint64 _ret = QProcess::writeData(data, static_cast<qint64>(len));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__pos == 0) {
			return QProcess::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QProcess_pos(this, handle__pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_pos() const {

		qint64 _ret = QProcess::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__size == 0) {
			return QProcess::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QProcess_size(this, handle__size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_size() const {

		qint64 _ret = QProcess::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (handle__seek == 0) {
			return QProcess::seek(pos);
		}
		
		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);

		bool callback_return_value = miqt_exec_callback_QProcess_seek(this, handle__seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_seek(long long pos) {

		return QProcess::seek(static_cast<qint64>(pos));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__atEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__atEnd == 0) {
			return QProcess::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QProcess_atEnd(this, handle__atEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_atEnd() const {

		return QProcess::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__reset == 0) {
			return QProcess::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QProcess_reset(this, handle__reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_reset() {

		return QProcess::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__bytesAvailable == 0) {
			return QProcess::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QProcess_bytesAvailable(this, handle__bytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesAvailable() const {

		qint64 _ret = QProcess::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__canReadLine == 0) {
			return QProcess::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QProcess_canReadLine(this, handle__canReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canReadLine() const {

		return QProcess::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__readLineData == 0) {
			return QProcess::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QProcess_readLineData(this, handle__readLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_readLineData(char* data, long long maxlen) {

		qint64 _ret = QProcess::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__skipData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (handle__skipData == 0) {
			return QProcess::skipData(maxSize);
		}
		
		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QProcess_skipData(this, handle__skipData, sigval1);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_skipData(long long maxSize) {

		qint64 _ret = QProcess::skipData(static_cast<qint64>(maxSize));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QProcess::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QProcess_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QProcess::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QProcess::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QProcess_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QProcess::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QProcess::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QProcess_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QProcess::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QProcess::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QProcess_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QProcess::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QProcess::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QProcess_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QProcess::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QProcess::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QProcess_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QProcess::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QProcess::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QProcess_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QProcess::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QProcess_protectedbase_setProcessState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QProcess_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QProcess_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QProcess_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QProcess_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QProcess_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QProcess_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QProcess_metaObject(const QProcess* self) {
	return (QMetaObject*) self->metaObject();
}

void* QProcess_metacast(QProcess* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QProcess_tr(const char* s) {
	QString _ret = QProcess::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcess_start(QProcess* self, struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	self->start(program_QString);
}

void QProcess_start2(QProcess* self) {
	self->start();
}

void QProcess_startCommand(QProcess* self, struct miqt_string command) {
	QString command_QString = QString::fromUtf8(command.data, command.len);
	self->startCommand(command_QString);
}

bool QProcess_startDetached(QProcess* self) {
	return self->startDetached();
}

bool QProcess_open(QProcess* self, int mode) {
	return self->open(static_cast<QIODeviceBase::OpenMode>(mode));
}

struct miqt_string QProcess_program(const QProcess* self) {
	QString _ret = self->program();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcess_setProgram(QProcess* self, struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	self->setProgram(program_QString);
}

struct miqt_array /* of struct miqt_string */  QProcess_arguments(const QProcess* self) {
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

void QProcess_setArguments(QProcess* self, struct miqt_array /* of struct miqt_string */  arguments) {
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	self->setArguments(arguments_QList);
}

int QProcess_processChannelMode(const QProcess* self) {
	QProcess::ProcessChannelMode _ret = self->processChannelMode();
	return static_cast<int>(_ret);
}

void QProcess_setProcessChannelMode(QProcess* self, int mode) {
	self->setProcessChannelMode(static_cast<QProcess::ProcessChannelMode>(mode));
}

int QProcess_inputChannelMode(const QProcess* self) {
	QProcess::InputChannelMode _ret = self->inputChannelMode();
	return static_cast<int>(_ret);
}

void QProcess_setInputChannelMode(QProcess* self, int mode) {
	self->setInputChannelMode(static_cast<QProcess::InputChannelMode>(mode));
}

int QProcess_readChannel(const QProcess* self) {
	QProcess::ProcessChannel _ret = self->readChannel();
	return static_cast<int>(_ret);
}

void QProcess_setReadChannel(QProcess* self, int channel) {
	self->setReadChannel(static_cast<QProcess::ProcessChannel>(channel));
}

void QProcess_closeReadChannel(QProcess* self, int channel) {
	self->closeReadChannel(static_cast<QProcess::ProcessChannel>(channel));
}

void QProcess_closeWriteChannel(QProcess* self) {
	self->closeWriteChannel();
}

void QProcess_setStandardInputFile(QProcess* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setStandardInputFile(fileName_QString);
}

void QProcess_setStandardOutputFile(QProcess* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setStandardOutputFile(fileName_QString);
}

void QProcess_setStandardErrorFile(QProcess* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setStandardErrorFile(fileName_QString);
}

void QProcess_setStandardOutputProcess(QProcess* self, QProcess* destination) {
	self->setStandardOutputProcess(destination);
}

struct miqt_string QProcess_workingDirectory(const QProcess* self) {
	QString _ret = self->workingDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcess_setWorkingDirectory(QProcess* self, struct miqt_string dir) {
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	self->setWorkingDirectory(dir_QString);
}

void QProcess_setEnvironment(QProcess* self, struct miqt_array /* of struct miqt_string */  environment) {
	QStringList environment_QList;
	environment_QList.reserve(environment.len);
	struct miqt_string* environment_arr = static_cast<struct miqt_string*>(environment.data);
	for(size_t i = 0; i < environment.len; ++i) {
		QString environment_arr_i_QString = QString::fromUtf8(environment_arr[i].data, environment_arr[i].len);
		environment_QList.push_back(environment_arr_i_QString);
	}
	self->setEnvironment(environment_QList);
}

struct miqt_array /* of struct miqt_string */  QProcess_environment(const QProcess* self) {
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

void QProcess_setProcessEnvironment(QProcess* self, QProcessEnvironment* environment) {
	self->setProcessEnvironment(*environment);
}

QProcessEnvironment* QProcess_processEnvironment(const QProcess* self) {
	return new QProcessEnvironment(self->processEnvironment());
}

int QProcess_error(const QProcess* self) {
	QProcess::ProcessError _ret = self->error();
	return static_cast<int>(_ret);
}

int QProcess_state(const QProcess* self) {
	QProcess::ProcessState _ret = self->state();
	return static_cast<int>(_ret);
}

long long QProcess_processId(const QProcess* self) {
	qint64 _ret = self->processId();
	return static_cast<long long>(_ret);
}

bool QProcess_waitForStarted(QProcess* self) {
	return self->waitForStarted();
}

bool QProcess_waitForReadyRead(QProcess* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QProcess_waitForBytesWritten(QProcess* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QProcess_waitForFinished(QProcess* self) {
	return self->waitForFinished();
}

struct miqt_string QProcess_readAllStandardOutput(QProcess* self) {
	QByteArray _qb = self->readAllStandardOutput();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QProcess_readAllStandardError(QProcess* self) {
	QByteArray _qb = self->readAllStandardError();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QProcess_exitCode(const QProcess* self) {
	return self->exitCode();
}

int QProcess_exitStatus(const QProcess* self) {
	QProcess::ExitStatus _ret = self->exitStatus();
	return static_cast<int>(_ret);
}

long long QProcess_bytesToWrite(const QProcess* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QProcess_isSequential(const QProcess* self) {
	return self->isSequential();
}

void QProcess_close(QProcess* self) {
	self->close();
}

int QProcess_execute(struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	return QProcess::execute(program_QString);
}

bool QProcess_startDetachedWithProgram(struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	return QProcess::startDetached(program_QString);
}

struct miqt_array /* of struct miqt_string */  QProcess_systemEnvironment() {
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

struct miqt_string QProcess_nullDevice() {
	QString _ret = QProcess::nullDevice();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcess_terminate(QProcess* self) {
	self->terminate();
}

void QProcess_kill(QProcess* self) {
	self->kill();
}

void QProcess_finished(QProcess* self, int exitCode) {
	self->finished(static_cast<int>(exitCode));
}

void QProcess_connect_finished(QProcess* self, intptr_t slot) {
	MiqtVirtualQProcess::connect(self, static_cast<void (QProcess::*)(int, QProcess::ExitStatus)>(&QProcess::finished), self, [=](int exitCode) {
		int sigval1 = exitCode;
		miqt_exec_callback_QProcess_finished(slot, sigval1);
	});
}

void QProcess_errorOccurred(QProcess* self, int error) {
	self->errorOccurred(static_cast<QProcess::ProcessError>(error));
}

void QProcess_connect_errorOccurred(QProcess* self, intptr_t slot) {
	MiqtVirtualQProcess::connect(self, static_cast<void (QProcess::*)(QProcess::ProcessError)>(&QProcess::errorOccurred), self, [=](QProcess::ProcessError error) {
		QProcess::ProcessError error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QProcess_errorOccurred(slot, sigval1);
	});
}

struct miqt_string QProcess_tr2(const char* s, const char* c) {
	QString _ret = QProcess::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProcess_tr3(const char* s, const char* c, int n) {
	QString _ret = QProcess::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcess_start22(QProcess* self, struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments) {
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

void QProcess_start3(QProcess* self, struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments, int mode) {
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

void QProcess_start1(QProcess* self, int mode) {
	self->start(static_cast<QIODeviceBase::OpenMode>(mode));
}

void QProcess_startCommand2(QProcess* self, struct miqt_string command, int mode) {
	QString command_QString = QString::fromUtf8(command.data, command.len);
	self->startCommand(command_QString, static_cast<QIODeviceBase::OpenMode>(mode));
}

bool QProcess_startDetached1(QProcess* self, long long* pid) {
	return self->startDetached(static_cast<qint64*>(pid));
}

void QProcess_setStandardOutputFile2(QProcess* self, struct miqt_string fileName, int mode) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setStandardOutputFile(fileName_QString, static_cast<QIODeviceBase::OpenMode>(mode));
}

void QProcess_setStandardErrorFile2(QProcess* self, struct miqt_string fileName, int mode) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setStandardErrorFile(fileName_QString, static_cast<QIODeviceBase::OpenMode>(mode));
}

bool QProcess_waitForStarted1(QProcess* self, int msecs) {
	return self->waitForStarted(static_cast<int>(msecs));
}

bool QProcess_waitForFinished1(QProcess* self, int msecs) {
	return self->waitForFinished(static_cast<int>(msecs));
}

int QProcess_execute2(struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments) {
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

bool QProcess_startDetached2(struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments) {
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

bool QProcess_startDetached3(struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments, struct miqt_string workingDirectory) {
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

bool QProcess_startDetached4(struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments, struct miqt_string workingDirectory, long long* pid) {
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

void QProcess_finished2(QProcess* self, int exitCode, int exitStatus) {
	self->finished(static_cast<int>(exitCode), static_cast<QProcess::ExitStatus>(exitStatus));
}

void QProcess_connect_finished2(QProcess* self, intptr_t slot) {
	MiqtVirtualQProcess::connect(self, static_cast<void (QProcess::*)(int, QProcess::ExitStatus)>(&QProcess::finished), self, [=](int exitCode, QProcess::ExitStatus exitStatus) {
		int sigval1 = exitCode;
		QProcess::ExitStatus exitStatus_ret = exitStatus;
		int sigval2 = static_cast<int>(exitStatus_ret);
		miqt_exec_callback_QProcess_finished2(slot, sigval1, sigval2);
	});
}

bool QProcess_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

bool QProcess_virtualbase_open(void* self, int mode) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_open(mode);
}

bool QProcess_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForReadyRead = slot;
	return true;
}

bool QProcess_virtualbase_waitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_waitForReadyRead(msecs);
}

bool QProcess_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForBytesWritten = slot;
	return true;
}

bool QProcess_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_waitForBytesWritten(msecs);
}

bool QProcess_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesToWrite = slot;
	return true;
}

long long QProcess_virtualbase_bytesToWrite(const void* self) {
	return ( (const MiqtVirtualQProcess*)(self) )->virtualbase_bytesToWrite();
}

bool QProcess_override_virtual_isSequential(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isSequential = slot;
	return true;
}

bool QProcess_virtualbase_isSequential(const void* self) {
	return ( (const MiqtVirtualQProcess*)(self) )->virtualbase_isSequential();
}

bool QProcess_override_virtual_close(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__close = slot;
	return true;
}

void QProcess_virtualbase_close(void* self) {
	( (MiqtVirtualQProcess*)(self) )->virtualbase_close();
}

bool QProcess_override_virtual_readData(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readData = slot;
	return true;
}

long long QProcess_virtualbase_readData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_readData(data, maxlen);
}

bool QProcess_override_virtual_writeData(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeData = slot;
	return true;
}

long long QProcess_virtualbase_writeData(void* self, const char* data, long long len) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_writeData(data, len);
}

bool QProcess_override_virtual_pos(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__pos = slot;
	return true;
}

long long QProcess_virtualbase_pos(const void* self) {
	return ( (const MiqtVirtualQProcess*)(self) )->virtualbase_pos();
}

bool QProcess_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__size = slot;
	return true;
}

long long QProcess_virtualbase_size(const void* self) {
	return ( (const MiqtVirtualQProcess*)(self) )->virtualbase_size();
}

bool QProcess_override_virtual_seek(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__seek = slot;
	return true;
}

bool QProcess_virtualbase_seek(void* self, long long pos) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_seek(pos);
}

bool QProcess_override_virtual_atEnd(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__atEnd = slot;
	return true;
}

bool QProcess_virtualbase_atEnd(const void* self) {
	return ( (const MiqtVirtualQProcess*)(self) )->virtualbase_atEnd();
}

bool QProcess_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

bool QProcess_virtualbase_reset(void* self) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_reset();
}

bool QProcess_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesAvailable = slot;
	return true;
}

long long QProcess_virtualbase_bytesAvailable(const void* self) {
	return ( (const MiqtVirtualQProcess*)(self) )->virtualbase_bytesAvailable();
}

bool QProcess_override_virtual_canReadLine(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canReadLine = slot;
	return true;
}

bool QProcess_virtualbase_canReadLine(const void* self) {
	return ( (const MiqtVirtualQProcess*)(self) )->virtualbase_canReadLine();
}

bool QProcess_override_virtual_readLineData(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readLineData = slot;
	return true;
}

long long QProcess_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_readLineData(data, maxlen);
}

bool QProcess_override_virtual_skipData(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__skipData = slot;
	return true;
}

long long QProcess_virtualbase_skipData(void* self, long long maxSize) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_skipData(maxSize);
}

bool QProcess_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QProcess_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_event(event);
}

bool QProcess_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QProcess_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQProcess*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QProcess_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QProcess_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQProcess*)(self) )->virtualbase_timerEvent(event);
}

bool QProcess_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QProcess_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQProcess*)(self) )->virtualbase_childEvent(event);
}

bool QProcess_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QProcess_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQProcess*)(self) )->virtualbase_customEvent(event);
}

bool QProcess_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QProcess_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQProcess*)(self) )->virtualbase_connectNotify(signal);
}

bool QProcess_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QProcess_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQProcess*)(self) )->virtualbase_disconnectNotify(signal);
}

void QProcess_protectedbase_setProcessState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setProcessState(static_cast<MiqtVirtualQProcess::ProcessState>(state));

}

void QProcess_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOpenMode(static_cast<MiqtVirtualQProcess::OpenMode>(openMode));

}

void QProcess_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);

	self_cast->setErrorString(errorString_QString);

}

QObject* QProcess_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QProcess_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QProcess_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QProcess_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QProcess_delete(QProcess* self) {
	delete self;
}

