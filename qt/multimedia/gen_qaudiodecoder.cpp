#include <QAudioBuffer>
#include <QAudioDecoder>
#include <QAudioFormat>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QList>
#include <QMediaObject>
#include <QMediaService>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaudiodecoder.h>
#include "gen_qaudiodecoder.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAudioDecoder_bufferAvailableChanged(intptr_t, bool);
void miqt_exec_callback_QAudioDecoder_bufferReady(intptr_t);
void miqt_exec_callback_QAudioDecoder_finished(intptr_t);
void miqt_exec_callback_QAudioDecoder_stateChanged(intptr_t, int);
void miqt_exec_callback_QAudioDecoder_formatChanged(intptr_t, QAudioFormat*);
void miqt_exec_callback_QAudioDecoder_errorWithError(intptr_t, int);
void miqt_exec_callback_QAudioDecoder_sourceChanged(intptr_t);
void miqt_exec_callback_QAudioDecoder_positionChanged(intptr_t, long long);
void miqt_exec_callback_QAudioDecoder_durationChanged(intptr_t, long long);
bool miqt_exec_callback_QAudioDecoder_bind(QAudioDecoder*, intptr_t, QObject*);
void miqt_exec_callback_QAudioDecoder_unbind(QAudioDecoder*, intptr_t, QObject*);
bool miqt_exec_callback_QAudioDecoder_isAvailable(const QAudioDecoder*, intptr_t);
int miqt_exec_callback_QAudioDecoder_availability(const QAudioDecoder*, intptr_t);
QMediaService* miqt_exec_callback_QAudioDecoder_service(const QAudioDecoder*, intptr_t);
bool miqt_exec_callback_QAudioDecoder_event(QAudioDecoder*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioDecoder_eventFilter(QAudioDecoder*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioDecoder_timerEvent(QAudioDecoder*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioDecoder_childEvent(QAudioDecoder*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioDecoder_customEvent(QAudioDecoder*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioDecoder_connectNotify(QAudioDecoder*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioDecoder_disconnectNotify(QAudioDecoder*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioDecoder final : public QAudioDecoder {
public:

	MiqtVirtualQAudioDecoder(): QAudioDecoder() {};
	MiqtVirtualQAudioDecoder(QObject* parent): QAudioDecoder(parent) {};

	virtual ~MiqtVirtualQAudioDecoder() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bind = 0;

	// Subclass to allow providing a Go implementation
	virtual bool bind(QObject* param1) override {
		if (handle__bind == 0) {
			return QAudioDecoder::bind(param1);
		}
		
		QObject* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QAudioDecoder_bind(this, handle__bind, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_bind(QObject* param1) {

		return QAudioDecoder::bind(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__unbind = 0;

	// Subclass to allow providing a Go implementation
	virtual void unbind(QObject* param1) override {
		if (handle__unbind == 0) {
			QAudioDecoder::unbind(param1);
			return;
		}
		
		QObject* sigval1 = param1;

		miqt_exec_callback_QAudioDecoder_unbind(this, handle__unbind, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_unbind(QObject* param1) {

		QAudioDecoder::unbind(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isAvailable() const override {
		if (handle__isAvailable == 0) {
			return QAudioDecoder::isAvailable();
		}
		

		bool callback_return_value = miqt_exec_callback_QAudioDecoder_isAvailable(this, handle__isAvailable);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isAvailable() const {

		return QAudioDecoder::isAvailable();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__availability = 0;

	// Subclass to allow providing a Go implementation
	virtual QMultimedia::AvailabilityStatus availability() const override {
		if (handle__availability == 0) {
			return QAudioDecoder::availability();
		}
		

		int callback_return_value = miqt_exec_callback_QAudioDecoder_availability(this, handle__availability);

		return static_cast<QMultimedia::AvailabilityStatus>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_availability() const {

		QMultimedia::AvailabilityStatus _ret = QAudioDecoder::availability();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__service = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaService* service() const override {
		if (handle__service == 0) {
			return QAudioDecoder::service();
		}
		

		QMediaService* callback_return_value = miqt_exec_callback_QAudioDecoder_service(this, handle__service);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMediaService* virtualbase_service() const {

		return QAudioDecoder::service();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAudioDecoder::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioDecoder_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAudioDecoder::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAudioDecoder::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioDecoder_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAudioDecoder::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAudioDecoder::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioDecoder_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAudioDecoder::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAudioDecoder::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioDecoder_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAudioDecoder::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAudioDecoder::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioDecoder_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAudioDecoder::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAudioDecoder::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioDecoder_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAudioDecoder::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAudioDecoder::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioDecoder_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAudioDecoder::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QAudioDecoder_protectedbase_addPropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
	friend void QAudioDecoder_protectedbase_removePropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
	friend QObject* QAudioDecoder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioDecoder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioDecoder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAudioDecoder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAudioDecoder* QAudioDecoder_new() {
	return new MiqtVirtualQAudioDecoder();
}

QAudioDecoder* QAudioDecoder_new2(QObject* parent) {
	return new MiqtVirtualQAudioDecoder(parent);
}

void QAudioDecoder_virtbase(QAudioDecoder* src, QMediaObject** outptr_QMediaObject) {
	*outptr_QMediaObject = static_cast<QMediaObject*>(src);
}

QMetaObject* QAudioDecoder_metaObject(const QAudioDecoder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioDecoder_metacast(QAudioDecoder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioDecoder_tr(const char* s) {
	QString _ret = QAudioDecoder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioDecoder_trUtf8(const char* s) {
	QString _ret = QAudioDecoder::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAudioDecoder_hasSupport(struct miqt_string mimeType) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	QMultimedia::SupportEstimate _ret = QAudioDecoder::hasSupport(mimeType_QString);
	return static_cast<int>(_ret);
}

int QAudioDecoder_state(const QAudioDecoder* self) {
	QAudioDecoder::State _ret = self->state();
	return static_cast<int>(_ret);
}

struct miqt_string QAudioDecoder_sourceFilename(const QAudioDecoder* self) {
	QString _ret = self->sourceFilename();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioDecoder_setSourceFilename(QAudioDecoder* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setSourceFilename(fileName_QString);
}

QIODevice* QAudioDecoder_sourceDevice(const QAudioDecoder* self) {
	return self->sourceDevice();
}

void QAudioDecoder_setSourceDevice(QAudioDecoder* self, QIODevice* device) {
	self->setSourceDevice(device);
}

QAudioFormat* QAudioDecoder_audioFormat(const QAudioDecoder* self) {
	return new QAudioFormat(self->audioFormat());
}

void QAudioDecoder_setAudioFormat(QAudioDecoder* self, QAudioFormat* format) {
	self->setAudioFormat(*format);
}

int QAudioDecoder_error(const QAudioDecoder* self) {
	QAudioDecoder::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QAudioDecoder_errorString(const QAudioDecoder* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioBuffer* QAudioDecoder_read(const QAudioDecoder* self) {
	return new QAudioBuffer(self->read());
}

bool QAudioDecoder_bufferAvailable(const QAudioDecoder* self) {
	return self->bufferAvailable();
}

long long QAudioDecoder_position(const QAudioDecoder* self) {
	qint64 _ret = self->position();
	return static_cast<long long>(_ret);
}

long long QAudioDecoder_duration(const QAudioDecoder* self) {
	qint64 _ret = self->duration();
	return static_cast<long long>(_ret);
}

void QAudioDecoder_start(QAudioDecoder* self) {
	self->start();
}

void QAudioDecoder_stop(QAudioDecoder* self) {
	self->stop();
}

void QAudioDecoder_bufferAvailableChanged(QAudioDecoder* self, bool param1) {
	self->bufferAvailableChanged(param1);
}

void QAudioDecoder_connect_bufferAvailableChanged(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(bool)>(&QAudioDecoder::bufferAvailableChanged), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QAudioDecoder_bufferAvailableChanged(slot, sigval1);
	});
}

void QAudioDecoder_bufferReady(QAudioDecoder* self) {
	self->bufferReady();
}

void QAudioDecoder_connect_bufferReady(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)()>(&QAudioDecoder::bufferReady), self, [=]() {
		miqt_exec_callback_QAudioDecoder_bufferReady(slot);
	});
}

void QAudioDecoder_finished(QAudioDecoder* self) {
	self->finished();
}

void QAudioDecoder_connect_finished(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)()>(&QAudioDecoder::finished), self, [=]() {
		miqt_exec_callback_QAudioDecoder_finished(slot);
	});
}

void QAudioDecoder_stateChanged(QAudioDecoder* self, int newState) {
	self->stateChanged(static_cast<QAudioDecoder::State>(newState));
}

void QAudioDecoder_connect_stateChanged(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(QAudioDecoder::State)>(&QAudioDecoder::stateChanged), self, [=](QAudioDecoder::State newState) {
		QAudioDecoder::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		miqt_exec_callback_QAudioDecoder_stateChanged(slot, sigval1);
	});
}

void QAudioDecoder_formatChanged(QAudioDecoder* self, QAudioFormat* format) {
	self->formatChanged(*format);
}

void QAudioDecoder_connect_formatChanged(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(const QAudioFormat&)>(&QAudioDecoder::formatChanged), self, [=](const QAudioFormat& format) {
		const QAudioFormat& format_ret = format;
		// Cast returned reference into pointer
		QAudioFormat* sigval1 = const_cast<QAudioFormat*>(&format_ret);
		miqt_exec_callback_QAudioDecoder_formatChanged(slot, sigval1);
	});
}

void QAudioDecoder_errorWithError(QAudioDecoder* self, int error) {
	self->error(static_cast<QAudioDecoder::Error>(error));
}

void QAudioDecoder_connect_errorWithError(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(QAudioDecoder::Error)>(&QAudioDecoder::error), self, [=](QAudioDecoder::Error error) {
		QAudioDecoder::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QAudioDecoder_errorWithError(slot, sigval1);
	});
}

void QAudioDecoder_sourceChanged(QAudioDecoder* self) {
	self->sourceChanged();
}

void QAudioDecoder_connect_sourceChanged(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)()>(&QAudioDecoder::sourceChanged), self, [=]() {
		miqt_exec_callback_QAudioDecoder_sourceChanged(slot);
	});
}

void QAudioDecoder_positionChanged(QAudioDecoder* self, long long position) {
	self->positionChanged(static_cast<qint64>(position));
}

void QAudioDecoder_connect_positionChanged(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(qint64)>(&QAudioDecoder::positionChanged), self, [=](qint64 position) {
		qint64 position_ret = position;
		long long sigval1 = static_cast<long long>(position_ret);
		miqt_exec_callback_QAudioDecoder_positionChanged(slot, sigval1);
	});
}

void QAudioDecoder_durationChanged(QAudioDecoder* self, long long duration) {
	self->durationChanged(static_cast<qint64>(duration));
}

void QAudioDecoder_connect_durationChanged(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(qint64)>(&QAudioDecoder::durationChanged), self, [=](qint64 duration) {
		qint64 duration_ret = duration;
		long long sigval1 = static_cast<long long>(duration_ret);
		miqt_exec_callback_QAudioDecoder_durationChanged(slot, sigval1);
	});
}

bool QAudioDecoder_bind(QAudioDecoder* self, QObject* param1) {
	return self->bind(param1);
}

void QAudioDecoder_unbind(QAudioDecoder* self, QObject* param1) {
	self->unbind(param1);
}

struct miqt_string QAudioDecoder_tr2(const char* s, const char* c) {
	QString _ret = QAudioDecoder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioDecoder_tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioDecoder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioDecoder_trUtf82(const char* s, const char* c) {
	QString _ret = QAudioDecoder::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioDecoder_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioDecoder::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAudioDecoder_hasSupport2(struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	QStringList codecs_QList;
	codecs_QList.reserve(codecs.len);
	struct miqt_string* codecs_arr = static_cast<struct miqt_string*>(codecs.data);
	for(size_t i = 0; i < codecs.len; ++i) {
		QString codecs_arr_i_QString = QString::fromUtf8(codecs_arr[i].data, codecs_arr[i].len);
		codecs_QList.push_back(codecs_arr_i_QString);
	}
	QMultimedia::SupportEstimate _ret = QAudioDecoder::hasSupport(mimeType_QString, codecs_QList);
	return static_cast<int>(_ret);
}

bool QAudioDecoder_override_virtual_bind(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bind = slot;
	return true;
}

bool QAudioDecoder_virtualbase_bind(void* self, QObject* param1) {
	return ( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_bind(param1);
}

bool QAudioDecoder_override_virtual_unbind(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__unbind = slot;
	return true;
}

void QAudioDecoder_virtualbase_unbind(void* self, QObject* param1) {
	( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_unbind(param1);
}

bool QAudioDecoder_override_virtual_isAvailable(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isAvailable = slot;
	return true;
}

bool QAudioDecoder_virtualbase_isAvailable(const void* self) {
	return ( (const MiqtVirtualQAudioDecoder*)(self) )->virtualbase_isAvailable();
}

bool QAudioDecoder_override_virtual_availability(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__availability = slot;
	return true;
}

int QAudioDecoder_virtualbase_availability(const void* self) {
	return ( (const MiqtVirtualQAudioDecoder*)(self) )->virtualbase_availability();
}

bool QAudioDecoder_override_virtual_service(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__service = slot;
	return true;
}

QMediaService* QAudioDecoder_virtualbase_service(const void* self) {
	return ( (const MiqtVirtualQAudioDecoder*)(self) )->virtualbase_service();
}

bool QAudioDecoder_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAudioDecoder_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_event(event);
}

bool QAudioDecoder_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAudioDecoder_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAudioDecoder_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAudioDecoder_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_timerEvent(event);
}

bool QAudioDecoder_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAudioDecoder_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_childEvent(event);
}

bool QAudioDecoder_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAudioDecoder_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_customEvent(event);
}

bool QAudioDecoder_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAudioDecoder_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_connectNotify(signal);
}

bool QAudioDecoder_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAudioDecoder_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_disconnectNotify(signal);
}

void QAudioDecoder_protectedbase_addPropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QByteArray name_QByteArray(name.data, name.len);

	self_cast->addPropertyWatch(name_QByteArray);

}

void QAudioDecoder_protectedbase_removePropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QByteArray name_QByteArray(name.data, name.len);

	self_cast->removePropertyWatch(name_QByteArray);

}

QObject* QAudioDecoder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAudioDecoder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAudioDecoder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAudioDecoder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAudioDecoder_delete(QAudioDecoder* self) {
	delete self;
}

