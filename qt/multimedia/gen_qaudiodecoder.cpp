#include <QAudioBuffer>
#include <QAudioDecoder>
#include <QAudioFormat>
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

void miqt_exec_callback_QAudioDecoder_BufferAvailableChanged(intptr_t, bool);
void miqt_exec_callback_QAudioDecoder_BufferReady(intptr_t);
void miqt_exec_callback_QAudioDecoder_Finished(intptr_t);
void miqt_exec_callback_QAudioDecoder_StateChanged(intptr_t, int);
void miqt_exec_callback_QAudioDecoder_FormatChanged(intptr_t, QAudioFormat*);
void miqt_exec_callback_QAudioDecoder_ErrorWithError(intptr_t, int);
void miqt_exec_callback_QAudioDecoder_SourceChanged(intptr_t);
void miqt_exec_callback_QAudioDecoder_PositionChanged(intptr_t, long long);
void miqt_exec_callback_QAudioDecoder_DurationChanged(intptr_t, long long);
bool miqt_exec_callback_QAudioDecoder_Bind(void*, intptr_t, QObject*);
void miqt_exec_callback_QAudioDecoder_Unbind(void*, intptr_t, QObject*);
bool miqt_exec_callback_QAudioDecoder_IsAvailable(void*, intptr_t);
int miqt_exec_callback_QAudioDecoder_Availability(void*, intptr_t);
QMediaService* miqt_exec_callback_QAudioDecoder_Service(void*, intptr_t);
bool miqt_exec_callback_QAudioDecoder_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioDecoder_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioDecoder_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioDecoder_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioDecoder_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioDecoder_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioDecoder_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioDecoder final : public QAudioDecoder {
public:

	MiqtVirtualQAudioDecoder(): QAudioDecoder() {};
	MiqtVirtualQAudioDecoder(QObject* parent): QAudioDecoder(parent) {};

	virtual ~MiqtVirtualQAudioDecoder() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Bind = 0;

	// Subclass to allow providing a Go implementation
	virtual bool bind(QObject* param1) override {
		if (handle__Bind == 0) {
			return QAudioDecoder::bind(param1);
		}
		
		QObject* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QAudioDecoder_Bind(this, handle__Bind, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Bind(QObject* param1) {

		return QAudioDecoder::bind(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Unbind = 0;

	// Subclass to allow providing a Go implementation
	virtual void unbind(QObject* param1) override {
		if (handle__Unbind == 0) {
			QAudioDecoder::unbind(param1);
			return;
		}
		
		QObject* sigval1 = param1;

		miqt_exec_callback_QAudioDecoder_Unbind(this, handle__Unbind, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Unbind(QObject* param1) {

		QAudioDecoder::unbind(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isAvailable() const override {
		if (handle__IsAvailable == 0) {
			return QAudioDecoder::isAvailable();
		}
		

		bool callback_return_value = miqt_exec_callback_QAudioDecoder_IsAvailable(const_cast<MiqtVirtualQAudioDecoder*>(this), handle__IsAvailable);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsAvailable() const {

		return QAudioDecoder::isAvailable();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Availability = 0;

	// Subclass to allow providing a Go implementation
	virtual QMultimedia::AvailabilityStatus availability() const override {
		if (handle__Availability == 0) {
			return QAudioDecoder::availability();
		}
		

		int callback_return_value = miqt_exec_callback_QAudioDecoder_Availability(const_cast<MiqtVirtualQAudioDecoder*>(this), handle__Availability);

		return static_cast<QMultimedia::AvailabilityStatus>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Availability() const {

		QMultimedia::AvailabilityStatus _ret = QAudioDecoder::availability();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Service = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaService* service() const override {
		if (handle__Service == 0) {
			return QAudioDecoder::service();
		}
		

		QMediaService* callback_return_value = miqt_exec_callback_QAudioDecoder_Service(const_cast<MiqtVirtualQAudioDecoder*>(this), handle__Service);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMediaService* virtualbase_Service() const {

		return QAudioDecoder::service();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAudioDecoder::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioDecoder_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAudioDecoder::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAudioDecoder::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioDecoder_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAudioDecoder::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAudioDecoder::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioDecoder_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAudioDecoder::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAudioDecoder::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioDecoder_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAudioDecoder::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAudioDecoder::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioDecoder_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAudioDecoder::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAudioDecoder::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioDecoder_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAudioDecoder::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAudioDecoder::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioDecoder_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAudioDecoder::disconnectNotify(*signal);

	}

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

QMetaObject* QAudioDecoder_MetaObject(const QAudioDecoder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioDecoder_Metacast(QAudioDecoder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioDecoder_Tr(const char* s) {
	QString _ret = QAudioDecoder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioDecoder_TrUtf8(const char* s) {
	QString _ret = QAudioDecoder::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAudioDecoder_HasSupport(struct miqt_string mimeType) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	QMultimedia::SupportEstimate _ret = QAudioDecoder::hasSupport(mimeType_QString);
	return static_cast<int>(_ret);
}

int QAudioDecoder_State(const QAudioDecoder* self) {
	QAudioDecoder::State _ret = self->state();
	return static_cast<int>(_ret);
}

struct miqt_string QAudioDecoder_SourceFilename(const QAudioDecoder* self) {
	QString _ret = self->sourceFilename();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioDecoder_SetSourceFilename(QAudioDecoder* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setSourceFilename(fileName_QString);
}

QIODevice* QAudioDecoder_SourceDevice(const QAudioDecoder* self) {
	return self->sourceDevice();
}

void QAudioDecoder_SetSourceDevice(QAudioDecoder* self, QIODevice* device) {
	self->setSourceDevice(device);
}

QAudioFormat* QAudioDecoder_AudioFormat(const QAudioDecoder* self) {
	return new QAudioFormat(self->audioFormat());
}

void QAudioDecoder_SetAudioFormat(QAudioDecoder* self, QAudioFormat* format) {
	self->setAudioFormat(*format);
}

int QAudioDecoder_Error(const QAudioDecoder* self) {
	QAudioDecoder::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QAudioDecoder_ErrorString(const QAudioDecoder* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioBuffer* QAudioDecoder_Read(const QAudioDecoder* self) {
	return new QAudioBuffer(self->read());
}

bool QAudioDecoder_BufferAvailable(const QAudioDecoder* self) {
	return self->bufferAvailable();
}

long long QAudioDecoder_Position(const QAudioDecoder* self) {
	qint64 _ret = self->position();
	return static_cast<long long>(_ret);
}

long long QAudioDecoder_Duration(const QAudioDecoder* self) {
	qint64 _ret = self->duration();
	return static_cast<long long>(_ret);
}

void QAudioDecoder_Start(QAudioDecoder* self) {
	self->start();
}

void QAudioDecoder_Stop(QAudioDecoder* self) {
	self->stop();
}

void QAudioDecoder_BufferAvailableChanged(QAudioDecoder* self, bool param1) {
	self->bufferAvailableChanged(param1);
}

void QAudioDecoder_connect_BufferAvailableChanged(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(bool)>(&QAudioDecoder::bufferAvailableChanged), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QAudioDecoder_BufferAvailableChanged(slot, sigval1);
	});
}

void QAudioDecoder_BufferReady(QAudioDecoder* self) {
	self->bufferReady();
}

void QAudioDecoder_connect_BufferReady(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)()>(&QAudioDecoder::bufferReady), self, [=]() {
		miqt_exec_callback_QAudioDecoder_BufferReady(slot);
	});
}

void QAudioDecoder_Finished(QAudioDecoder* self) {
	self->finished();
}

void QAudioDecoder_connect_Finished(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)()>(&QAudioDecoder::finished), self, [=]() {
		miqt_exec_callback_QAudioDecoder_Finished(slot);
	});
}

void QAudioDecoder_StateChanged(QAudioDecoder* self, int newState) {
	self->stateChanged(static_cast<QAudioDecoder::State>(newState));
}

void QAudioDecoder_connect_StateChanged(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(QAudioDecoder::State)>(&QAudioDecoder::stateChanged), self, [=](QAudioDecoder::State newState) {
		QAudioDecoder::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		miqt_exec_callback_QAudioDecoder_StateChanged(slot, sigval1);
	});
}

void QAudioDecoder_FormatChanged(QAudioDecoder* self, QAudioFormat* format) {
	self->formatChanged(*format);
}

void QAudioDecoder_connect_FormatChanged(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(const QAudioFormat&)>(&QAudioDecoder::formatChanged), self, [=](const QAudioFormat& format) {
		const QAudioFormat& format_ret = format;
		// Cast returned reference into pointer
		QAudioFormat* sigval1 = const_cast<QAudioFormat*>(&format_ret);
		miqt_exec_callback_QAudioDecoder_FormatChanged(slot, sigval1);
	});
}

void QAudioDecoder_ErrorWithError(QAudioDecoder* self, int error) {
	self->error(static_cast<QAudioDecoder::Error>(error));
}

void QAudioDecoder_connect_ErrorWithError(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(QAudioDecoder::Error)>(&QAudioDecoder::error), self, [=](QAudioDecoder::Error error) {
		QAudioDecoder::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QAudioDecoder_ErrorWithError(slot, sigval1);
	});
}

void QAudioDecoder_SourceChanged(QAudioDecoder* self) {
	self->sourceChanged();
}

void QAudioDecoder_connect_SourceChanged(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)()>(&QAudioDecoder::sourceChanged), self, [=]() {
		miqt_exec_callback_QAudioDecoder_SourceChanged(slot);
	});
}

void QAudioDecoder_PositionChanged(QAudioDecoder* self, long long position) {
	self->positionChanged(static_cast<qint64>(position));
}

void QAudioDecoder_connect_PositionChanged(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(qint64)>(&QAudioDecoder::positionChanged), self, [=](qint64 position) {
		qint64 position_ret = position;
		long long sigval1 = static_cast<long long>(position_ret);
		miqt_exec_callback_QAudioDecoder_PositionChanged(slot, sigval1);
	});
}

void QAudioDecoder_DurationChanged(QAudioDecoder* self, long long duration) {
	self->durationChanged(static_cast<qint64>(duration));
}

void QAudioDecoder_connect_DurationChanged(QAudioDecoder* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder::connect(self, static_cast<void (QAudioDecoder::*)(qint64)>(&QAudioDecoder::durationChanged), self, [=](qint64 duration) {
		qint64 duration_ret = duration;
		long long sigval1 = static_cast<long long>(duration_ret);
		miqt_exec_callback_QAudioDecoder_DurationChanged(slot, sigval1);
	});
}

bool QAudioDecoder_Bind(QAudioDecoder* self, QObject* param1) {
	return self->bind(param1);
}

void QAudioDecoder_Unbind(QAudioDecoder* self, QObject* param1) {
	self->unbind(param1);
}

struct miqt_string QAudioDecoder_Tr2(const char* s, const char* c) {
	QString _ret = QAudioDecoder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioDecoder_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioDecoder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioDecoder_TrUtf82(const char* s, const char* c) {
	QString _ret = QAudioDecoder::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioDecoder_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioDecoder::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAudioDecoder_HasSupport2(struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs) {
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

bool QAudioDecoder_override_virtual_Bind(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Bind = slot;
	return true;
}

bool QAudioDecoder_virtualbase_Bind(void* self, QObject* param1) {
	return ( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_Bind(param1);
}

bool QAudioDecoder_override_virtual_Unbind(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Unbind = slot;
	return true;
}

void QAudioDecoder_virtualbase_Unbind(void* self, QObject* param1) {
	( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_Unbind(param1);
}

bool QAudioDecoder_override_virtual_IsAvailable(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsAvailable = slot;
	return true;
}

bool QAudioDecoder_virtualbase_IsAvailable(const void* self) {
	return ( (const MiqtVirtualQAudioDecoder*)(self) )->virtualbase_IsAvailable();
}

bool QAudioDecoder_override_virtual_Availability(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Availability = slot;
	return true;
}

int QAudioDecoder_virtualbase_Availability(const void* self) {
	return ( (const MiqtVirtualQAudioDecoder*)(self) )->virtualbase_Availability();
}

bool QAudioDecoder_override_virtual_Service(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Service = slot;
	return true;
}

QMediaService* QAudioDecoder_virtualbase_Service(const void* self) {
	return ( (const MiqtVirtualQAudioDecoder*)(self) )->virtualbase_Service();
}

bool QAudioDecoder_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAudioDecoder_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_Event(event);
}

bool QAudioDecoder_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAudioDecoder_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QAudioDecoder_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAudioDecoder_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_TimerEvent(event);
}

bool QAudioDecoder_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAudioDecoder_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_ChildEvent(event);
}

bool QAudioDecoder_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAudioDecoder_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_CustomEvent(event);
}

bool QAudioDecoder_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAudioDecoder_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAudioDecoder_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioDecoder* self_cast = dynamic_cast<MiqtVirtualQAudioDecoder*>( (QAudioDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAudioDecoder_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioDecoder*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAudioDecoder_Delete(QAudioDecoder* self) {
	delete self;
}

