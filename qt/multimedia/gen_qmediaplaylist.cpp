#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QList>
#include <QMediaBindableInterface>
#include <QMediaContent>
#include <QMediaObject>
#include <QMediaPlaylist>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkRequest>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <qmediaplaylist.h>
#include "gen_qmediaplaylist.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMediaPlaylist_CurrentIndexChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlaylist_PlaybackModeChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlaylist_CurrentMediaChanged(intptr_t, QMediaContent*);
void miqt_exec_callback_QMediaPlaylist_MediaAboutToBeInserted(intptr_t, int, int);
void miqt_exec_callback_QMediaPlaylist_MediaInserted(intptr_t, int, int);
void miqt_exec_callback_QMediaPlaylist_MediaAboutToBeRemoved(intptr_t, int, int);
void miqt_exec_callback_QMediaPlaylist_MediaRemoved(intptr_t, int, int);
void miqt_exec_callback_QMediaPlaylist_MediaChanged(intptr_t, int, int);
void miqt_exec_callback_QMediaPlaylist_Loaded(intptr_t);
void miqt_exec_callback_QMediaPlaylist_LoadFailed(intptr_t);
QMediaObject* miqt_exec_callback_QMediaPlaylist_MediaObject(void*, intptr_t);
bool miqt_exec_callback_QMediaPlaylist_SetMediaObject(void*, intptr_t, QMediaObject*);
bool miqt_exec_callback_QMediaPlaylist_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QMediaPlaylist_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMediaPlaylist_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMediaPlaylist_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMediaPlaylist_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMediaPlaylist_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMediaPlaylist_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMediaPlaylist final : public QMediaPlaylist {
public:

	MiqtVirtualQMediaPlaylist(): QMediaPlaylist() {};
	MiqtVirtualQMediaPlaylist(QObject* parent): QMediaPlaylist(parent) {};

	virtual ~MiqtVirtualQMediaPlaylist() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaObject* mediaObject() const override {
		if (handle__MediaObject == 0) {
			return QMediaPlaylist::mediaObject();
		}
		

		QMediaObject* callback_return_value = miqt_exec_callback_QMediaPlaylist_MediaObject(const_cast<MiqtVirtualQMediaPlaylist*>(this), handle__MediaObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMediaObject* virtualbase_MediaObject() const {

		return QMediaPlaylist::mediaObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setMediaObject(QMediaObject* object) override {
		if (handle__SetMediaObject == 0) {
			return QMediaPlaylist::setMediaObject(object);
		}
		
		QMediaObject* sigval1 = object;

		bool callback_return_value = miqt_exec_callback_QMediaPlaylist_SetMediaObject(this, handle__SetMediaObject, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetMediaObject(QMediaObject* object) {

		return QMediaPlaylist::setMediaObject(object);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QMediaPlaylist::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMediaPlaylist_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QMediaPlaylist::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QMediaPlaylist::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMediaPlaylist_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QMediaPlaylist::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QMediaPlaylist::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMediaPlaylist_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QMediaPlaylist::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QMediaPlaylist::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMediaPlaylist_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QMediaPlaylist::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QMediaPlaylist::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMediaPlaylist_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QMediaPlaylist::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QMediaPlaylist::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaPlaylist_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QMediaPlaylist::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QMediaPlaylist::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaPlaylist_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QMediaPlaylist::disconnectNotify(*signal);

	}

};

QMediaPlaylist* QMediaPlaylist_new() {
	return new MiqtVirtualQMediaPlaylist();
}

QMediaPlaylist* QMediaPlaylist_new2(QObject* parent) {
	return new MiqtVirtualQMediaPlaylist(parent);
}

void QMediaPlaylist_virtbase(QMediaPlaylist* src, QObject** outptr_QObject, QMediaBindableInterface** outptr_QMediaBindableInterface) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QMediaBindableInterface = static_cast<QMediaBindableInterface*>(src);
}

QMetaObject* QMediaPlaylist_MetaObject(const QMediaPlaylist* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaPlaylist_Metacast(QMediaPlaylist* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaPlaylist_Tr(const char* s) {
	QString _ret = QMediaPlaylist::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlaylist_TrUtf8(const char* s) {
	QString _ret = QMediaPlaylist::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaObject* QMediaPlaylist_MediaObject(const QMediaPlaylist* self) {
	return self->mediaObject();
}

int QMediaPlaylist_PlaybackMode(const QMediaPlaylist* self) {
	QMediaPlaylist::PlaybackMode _ret = self->playbackMode();
	return static_cast<int>(_ret);
}

void QMediaPlaylist_SetPlaybackMode(QMediaPlaylist* self, int mode) {
	self->setPlaybackMode(static_cast<QMediaPlaylist::PlaybackMode>(mode));
}

int QMediaPlaylist_CurrentIndex(const QMediaPlaylist* self) {
	return self->currentIndex();
}

QMediaContent* QMediaPlaylist_CurrentMedia(const QMediaPlaylist* self) {
	return new QMediaContent(self->currentMedia());
}

int QMediaPlaylist_NextIndex(const QMediaPlaylist* self) {
	return self->nextIndex();
}

int QMediaPlaylist_PreviousIndex(const QMediaPlaylist* self) {
	return self->previousIndex();
}

QMediaContent* QMediaPlaylist_Media(const QMediaPlaylist* self, int index) {
	return new QMediaContent(self->media(static_cast<int>(index)));
}

int QMediaPlaylist_MediaCount(const QMediaPlaylist* self) {
	return self->mediaCount();
}

bool QMediaPlaylist_IsEmpty(const QMediaPlaylist* self) {
	return self->isEmpty();
}

bool QMediaPlaylist_IsReadOnly(const QMediaPlaylist* self) {
	return self->isReadOnly();
}

bool QMediaPlaylist_AddMedia(QMediaPlaylist* self, QMediaContent* content) {
	return self->addMedia(*content);
}

bool QMediaPlaylist_AddMediaWithItems(QMediaPlaylist* self, struct miqt_array /* of QMediaContent* */  items) {
	QList<QMediaContent> items_QList;
	items_QList.reserve(items.len);
	QMediaContent** items_arr = static_cast<QMediaContent**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(*(items_arr[i]));
	}
	return self->addMedia(items_QList);
}

bool QMediaPlaylist_InsertMedia(QMediaPlaylist* self, int index, QMediaContent* content) {
	return self->insertMedia(static_cast<int>(index), *content);
}

bool QMediaPlaylist_InsertMedia2(QMediaPlaylist* self, int index, struct miqt_array /* of QMediaContent* */  items) {
	QList<QMediaContent> items_QList;
	items_QList.reserve(items.len);
	QMediaContent** items_arr = static_cast<QMediaContent**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(*(items_arr[i]));
	}
	return self->insertMedia(static_cast<int>(index), items_QList);
}

bool QMediaPlaylist_MoveMedia(QMediaPlaylist* self, int from, int to) {
	return self->moveMedia(static_cast<int>(from), static_cast<int>(to));
}

bool QMediaPlaylist_RemoveMedia(QMediaPlaylist* self, int pos) {
	return self->removeMedia(static_cast<int>(pos));
}

bool QMediaPlaylist_RemoveMedia2(QMediaPlaylist* self, int start, int end) {
	return self->removeMedia(static_cast<int>(start), static_cast<int>(end));
}

bool QMediaPlaylist_Clear(QMediaPlaylist* self) {
	return self->clear();
}

void QMediaPlaylist_Load(QMediaPlaylist* self, QNetworkRequest* request) {
	self->load(*request);
}

void QMediaPlaylist_LoadWithLocation(QMediaPlaylist* self, QUrl* location) {
	self->load(*location);
}

void QMediaPlaylist_LoadWithDevice(QMediaPlaylist* self, QIODevice* device) {
	self->load(device);
}

bool QMediaPlaylist_Save(QMediaPlaylist* self, QUrl* location) {
	return self->save(*location);
}

bool QMediaPlaylist_Save2(QMediaPlaylist* self, QIODevice* device, const char* format) {
	return self->save(device, format);
}

int QMediaPlaylist_Error(const QMediaPlaylist* self) {
	QMediaPlaylist::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QMediaPlaylist_ErrorString(const QMediaPlaylist* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaPlaylist_Shuffle(QMediaPlaylist* self) {
	self->shuffle();
}

void QMediaPlaylist_Next(QMediaPlaylist* self) {
	self->next();
}

void QMediaPlaylist_Previous(QMediaPlaylist* self) {
	self->previous();
}

void QMediaPlaylist_SetCurrentIndex(QMediaPlaylist* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QMediaPlaylist_CurrentIndexChanged(QMediaPlaylist* self, int index) {
	self->currentIndexChanged(static_cast<int>(index));
}

void QMediaPlaylist_connect_CurrentIndexChanged(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int)>(&QMediaPlaylist::currentIndexChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QMediaPlaylist_CurrentIndexChanged(slot, sigval1);
	});
}

void QMediaPlaylist_PlaybackModeChanged(QMediaPlaylist* self, int mode) {
	self->playbackModeChanged(static_cast<QMediaPlaylist::PlaybackMode>(mode));
}

void QMediaPlaylist_connect_PlaybackModeChanged(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(QMediaPlaylist::PlaybackMode)>(&QMediaPlaylist::playbackModeChanged), self, [=](QMediaPlaylist::PlaybackMode mode) {
		QMediaPlaylist::PlaybackMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		miqt_exec_callback_QMediaPlaylist_PlaybackModeChanged(slot, sigval1);
	});
}

void QMediaPlaylist_CurrentMediaChanged(QMediaPlaylist* self, QMediaContent* param1) {
	self->currentMediaChanged(*param1);
}

void QMediaPlaylist_connect_CurrentMediaChanged(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(const QMediaContent&)>(&QMediaPlaylist::currentMediaChanged), self, [=](const QMediaContent& param1) {
		const QMediaContent& param1_ret = param1;
		// Cast returned reference into pointer
		QMediaContent* sigval1 = const_cast<QMediaContent*>(&param1_ret);
		miqt_exec_callback_QMediaPlaylist_CurrentMediaChanged(slot, sigval1);
	});
}

void QMediaPlaylist_MediaAboutToBeInserted(QMediaPlaylist* self, int start, int end) {
	self->mediaAboutToBeInserted(static_cast<int>(start), static_cast<int>(end));
}

void QMediaPlaylist_connect_MediaAboutToBeInserted(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int, int)>(&QMediaPlaylist::mediaAboutToBeInserted), self, [=](int start, int end) {
		int sigval1 = start;
		int sigval2 = end;
		miqt_exec_callback_QMediaPlaylist_MediaAboutToBeInserted(slot, sigval1, sigval2);
	});
}

void QMediaPlaylist_MediaInserted(QMediaPlaylist* self, int start, int end) {
	self->mediaInserted(static_cast<int>(start), static_cast<int>(end));
}

void QMediaPlaylist_connect_MediaInserted(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int, int)>(&QMediaPlaylist::mediaInserted), self, [=](int start, int end) {
		int sigval1 = start;
		int sigval2 = end;
		miqt_exec_callback_QMediaPlaylist_MediaInserted(slot, sigval1, sigval2);
	});
}

void QMediaPlaylist_MediaAboutToBeRemoved(QMediaPlaylist* self, int start, int end) {
	self->mediaAboutToBeRemoved(static_cast<int>(start), static_cast<int>(end));
}

void QMediaPlaylist_connect_MediaAboutToBeRemoved(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int, int)>(&QMediaPlaylist::mediaAboutToBeRemoved), self, [=](int start, int end) {
		int sigval1 = start;
		int sigval2 = end;
		miqt_exec_callback_QMediaPlaylist_MediaAboutToBeRemoved(slot, sigval1, sigval2);
	});
}

void QMediaPlaylist_MediaRemoved(QMediaPlaylist* self, int start, int end) {
	self->mediaRemoved(static_cast<int>(start), static_cast<int>(end));
}

void QMediaPlaylist_connect_MediaRemoved(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int, int)>(&QMediaPlaylist::mediaRemoved), self, [=](int start, int end) {
		int sigval1 = start;
		int sigval2 = end;
		miqt_exec_callback_QMediaPlaylist_MediaRemoved(slot, sigval1, sigval2);
	});
}

void QMediaPlaylist_MediaChanged(QMediaPlaylist* self, int start, int end) {
	self->mediaChanged(static_cast<int>(start), static_cast<int>(end));
}

void QMediaPlaylist_connect_MediaChanged(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int, int)>(&QMediaPlaylist::mediaChanged), self, [=](int start, int end) {
		int sigval1 = start;
		int sigval2 = end;
		miqt_exec_callback_QMediaPlaylist_MediaChanged(slot, sigval1, sigval2);
	});
}

void QMediaPlaylist_Loaded(QMediaPlaylist* self) {
	self->loaded();
}

void QMediaPlaylist_connect_Loaded(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)()>(&QMediaPlaylist::loaded), self, [=]() {
		miqt_exec_callback_QMediaPlaylist_Loaded(slot);
	});
}

void QMediaPlaylist_LoadFailed(QMediaPlaylist* self) {
	self->loadFailed();
}

void QMediaPlaylist_connect_LoadFailed(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)()>(&QMediaPlaylist::loadFailed), self, [=]() {
		miqt_exec_callback_QMediaPlaylist_LoadFailed(slot);
	});
}

struct miqt_string QMediaPlaylist_Tr2(const char* s, const char* c) {
	QString _ret = QMediaPlaylist::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlaylist_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaPlaylist::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlaylist_TrUtf82(const char* s, const char* c) {
	QString _ret = QMediaPlaylist::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlaylist_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaPlaylist::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QMediaPlaylist_NextIndex1(const QMediaPlaylist* self, int steps) {
	return self->nextIndex(static_cast<int>(steps));
}

int QMediaPlaylist_PreviousIndex1(const QMediaPlaylist* self, int steps) {
	return self->previousIndex(static_cast<int>(steps));
}

void QMediaPlaylist_Load2(QMediaPlaylist* self, QNetworkRequest* request, const char* format) {
	self->load(*request, format);
}

void QMediaPlaylist_Load22(QMediaPlaylist* self, QUrl* location, const char* format) {
	self->load(*location, format);
}

void QMediaPlaylist_Load23(QMediaPlaylist* self, QIODevice* device, const char* format) {
	self->load(device, format);
}

bool QMediaPlaylist_Save22(QMediaPlaylist* self, QUrl* location, const char* format) {
	return self->save(*location, format);
}

void QMediaPlaylist_override_virtual_MediaObject(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) )->handle__MediaObject = slot;
}

QMediaObject* QMediaPlaylist_virtualbase_MediaObject(const void* self) {
	return ( (const MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_MediaObject();
}

void QMediaPlaylist_override_virtual_SetMediaObject(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) )->handle__SetMediaObject = slot;
}

bool QMediaPlaylist_virtualbase_SetMediaObject(void* self, QMediaObject* object) {
	return ( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_SetMediaObject(object);
}

void QMediaPlaylist_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) )->handle__Event = slot;
}

bool QMediaPlaylist_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_Event(event);
}

void QMediaPlaylist_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) )->handle__EventFilter = slot;
}

bool QMediaPlaylist_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_EventFilter(watched, event);
}

void QMediaPlaylist_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) )->handle__TimerEvent = slot;
}

void QMediaPlaylist_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_TimerEvent(event);
}

void QMediaPlaylist_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) )->handle__ChildEvent = slot;
}

void QMediaPlaylist_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_ChildEvent(event);
}

void QMediaPlaylist_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) )->handle__CustomEvent = slot;
}

void QMediaPlaylist_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_CustomEvent(event);
}

void QMediaPlaylist_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) )->handle__ConnectNotify = slot;
}

void QMediaPlaylist_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_ConnectNotify(signal);
}

void QMediaPlaylist_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) )->handle__DisconnectNotify = slot;
}

void QMediaPlaylist_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QMediaPlaylist_Delete(QMediaPlaylist* self) {
	delete self;
}

