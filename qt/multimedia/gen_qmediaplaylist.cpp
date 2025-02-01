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

void miqt_exec_callback_QMediaPlaylist_currentIndexChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlaylist_playbackModeChanged(intptr_t, int);
void miqt_exec_callback_QMediaPlaylist_currentMediaChanged(intptr_t, QMediaContent*);
void miqt_exec_callback_QMediaPlaylist_mediaAboutToBeInserted(intptr_t, int, int);
void miqt_exec_callback_QMediaPlaylist_mediaInserted(intptr_t, int, int);
void miqt_exec_callback_QMediaPlaylist_mediaAboutToBeRemoved(intptr_t, int, int);
void miqt_exec_callback_QMediaPlaylist_mediaRemoved(intptr_t, int, int);
void miqt_exec_callback_QMediaPlaylist_mediaChanged(intptr_t, int, int);
void miqt_exec_callback_QMediaPlaylist_loaded(intptr_t);
void miqt_exec_callback_QMediaPlaylist_loadFailed(intptr_t);
QMediaObject* miqt_exec_callback_QMediaPlaylist_mediaObject(const QMediaPlaylist*, intptr_t);
bool miqt_exec_callback_QMediaPlaylist_setMediaObject(QMediaPlaylist*, intptr_t, QMediaObject*);
bool miqt_exec_callback_QMediaPlaylist_event(QMediaPlaylist*, intptr_t, QEvent*);
bool miqt_exec_callback_QMediaPlaylist_eventFilter(QMediaPlaylist*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMediaPlaylist_timerEvent(QMediaPlaylist*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMediaPlaylist_childEvent(QMediaPlaylist*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMediaPlaylist_customEvent(QMediaPlaylist*, intptr_t, QEvent*);
void miqt_exec_callback_QMediaPlaylist_connectNotify(QMediaPlaylist*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMediaPlaylist_disconnectNotify(QMediaPlaylist*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMediaPlaylist final : public QMediaPlaylist {
public:

	MiqtVirtualQMediaPlaylist(): QMediaPlaylist() {};
	MiqtVirtualQMediaPlaylist(QObject* parent): QMediaPlaylist(parent) {};

	virtual ~MiqtVirtualQMediaPlaylist() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaObject* mediaObject() const override {
		if (handle__mediaObject == 0) {
			return QMediaPlaylist::mediaObject();
		}
		

		QMediaObject* callback_return_value = miqt_exec_callback_QMediaPlaylist_mediaObject(this, handle__mediaObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMediaObject* virtualbase_mediaObject() const {

		return QMediaPlaylist::mediaObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setMediaObject(QMediaObject* object) override {
		if (handle__setMediaObject == 0) {
			return QMediaPlaylist::setMediaObject(object);
		}
		
		QMediaObject* sigval1 = object;

		bool callback_return_value = miqt_exec_callback_QMediaPlaylist_setMediaObject(this, handle__setMediaObject, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setMediaObject(QMediaObject* object) {

		return QMediaPlaylist::setMediaObject(object);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QMediaPlaylist::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMediaPlaylist_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QMediaPlaylist::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QMediaPlaylist::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMediaPlaylist_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QMediaPlaylist::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QMediaPlaylist::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMediaPlaylist_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QMediaPlaylist::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QMediaPlaylist::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMediaPlaylist_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QMediaPlaylist::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QMediaPlaylist::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMediaPlaylist_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QMediaPlaylist::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QMediaPlaylist::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaPlaylist_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QMediaPlaylist::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QMediaPlaylist::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaPlaylist_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

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

QMetaObject* QMediaPlaylist_metaObject(const QMediaPlaylist* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaPlaylist_metacast(QMediaPlaylist* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaPlaylist_tr(const char* s) {
	QString _ret = QMediaPlaylist::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlaylist_trUtf8(const char* s) {
	QString _ret = QMediaPlaylist::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaObject* QMediaPlaylist_mediaObject(const QMediaPlaylist* self) {
	return self->mediaObject();
}

int QMediaPlaylist_playbackMode(const QMediaPlaylist* self) {
	QMediaPlaylist::PlaybackMode _ret = self->playbackMode();
	return static_cast<int>(_ret);
}

void QMediaPlaylist_setPlaybackMode(QMediaPlaylist* self, int mode) {
	self->setPlaybackMode(static_cast<QMediaPlaylist::PlaybackMode>(mode));
}

int QMediaPlaylist_currentIndex(const QMediaPlaylist* self) {
	return self->currentIndex();
}

QMediaContent* QMediaPlaylist_currentMedia(const QMediaPlaylist* self) {
	return new QMediaContent(self->currentMedia());
}

int QMediaPlaylist_nextIndex(const QMediaPlaylist* self) {
	return self->nextIndex();
}

int QMediaPlaylist_previousIndex(const QMediaPlaylist* self) {
	return self->previousIndex();
}

QMediaContent* QMediaPlaylist_media(const QMediaPlaylist* self, int index) {
	return new QMediaContent(self->media(static_cast<int>(index)));
}

int QMediaPlaylist_mediaCount(const QMediaPlaylist* self) {
	return self->mediaCount();
}

bool QMediaPlaylist_isEmpty(const QMediaPlaylist* self) {
	return self->isEmpty();
}

bool QMediaPlaylist_isReadOnly(const QMediaPlaylist* self) {
	return self->isReadOnly();
}

bool QMediaPlaylist_addMedia(QMediaPlaylist* self, QMediaContent* content) {
	return self->addMedia(*content);
}

bool QMediaPlaylist_addMediaWithItems(QMediaPlaylist* self, struct miqt_array /* of QMediaContent* */  items) {
	QList<QMediaContent> items_QList;
	items_QList.reserve(items.len);
	QMediaContent** items_arr = static_cast<QMediaContent**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(*(items_arr[i]));
	}
	return self->addMedia(items_QList);
}

bool QMediaPlaylist_insertMedia(QMediaPlaylist* self, int index, QMediaContent* content) {
	return self->insertMedia(static_cast<int>(index), *content);
}

bool QMediaPlaylist_insertMedia2(QMediaPlaylist* self, int index, struct miqt_array /* of QMediaContent* */  items) {
	QList<QMediaContent> items_QList;
	items_QList.reserve(items.len);
	QMediaContent** items_arr = static_cast<QMediaContent**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(*(items_arr[i]));
	}
	return self->insertMedia(static_cast<int>(index), items_QList);
}

bool QMediaPlaylist_moveMedia(QMediaPlaylist* self, int from, int to) {
	return self->moveMedia(static_cast<int>(from), static_cast<int>(to));
}

bool QMediaPlaylist_removeMedia(QMediaPlaylist* self, int pos) {
	return self->removeMedia(static_cast<int>(pos));
}

bool QMediaPlaylist_removeMedia2(QMediaPlaylist* self, int start, int end) {
	return self->removeMedia(static_cast<int>(start), static_cast<int>(end));
}

bool QMediaPlaylist_clear(QMediaPlaylist* self) {
	return self->clear();
}

void QMediaPlaylist_load(QMediaPlaylist* self, QNetworkRequest* request) {
	self->load(*request);
}

void QMediaPlaylist_loadWithLocation(QMediaPlaylist* self, QUrl* location) {
	self->load(*location);
}

void QMediaPlaylist_loadWithDevice(QMediaPlaylist* self, QIODevice* device) {
	self->load(device);
}

bool QMediaPlaylist_save(QMediaPlaylist* self, QUrl* location) {
	return self->save(*location);
}

bool QMediaPlaylist_save2(QMediaPlaylist* self, QIODevice* device, const char* format) {
	return self->save(device, format);
}

int QMediaPlaylist_error(const QMediaPlaylist* self) {
	QMediaPlaylist::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QMediaPlaylist_errorString(const QMediaPlaylist* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaPlaylist_shuffle(QMediaPlaylist* self) {
	self->shuffle();
}

void QMediaPlaylist_next(QMediaPlaylist* self) {
	self->next();
}

void QMediaPlaylist_previous(QMediaPlaylist* self) {
	self->previous();
}

void QMediaPlaylist_setCurrentIndex(QMediaPlaylist* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QMediaPlaylist_currentIndexChanged(QMediaPlaylist* self, int index) {
	self->currentIndexChanged(static_cast<int>(index));
}

void QMediaPlaylist_connect_currentIndexChanged(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int)>(&QMediaPlaylist::currentIndexChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QMediaPlaylist_currentIndexChanged(slot, sigval1);
	});
}

void QMediaPlaylist_playbackModeChanged(QMediaPlaylist* self, int mode) {
	self->playbackModeChanged(static_cast<QMediaPlaylist::PlaybackMode>(mode));
}

void QMediaPlaylist_connect_playbackModeChanged(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(QMediaPlaylist::PlaybackMode)>(&QMediaPlaylist::playbackModeChanged), self, [=](QMediaPlaylist::PlaybackMode mode) {
		QMediaPlaylist::PlaybackMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		miqt_exec_callback_QMediaPlaylist_playbackModeChanged(slot, sigval1);
	});
}

void QMediaPlaylist_currentMediaChanged(QMediaPlaylist* self, QMediaContent* param1) {
	self->currentMediaChanged(*param1);
}

void QMediaPlaylist_connect_currentMediaChanged(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(const QMediaContent&)>(&QMediaPlaylist::currentMediaChanged), self, [=](const QMediaContent& param1) {
		const QMediaContent& param1_ret = param1;
		// Cast returned reference into pointer
		QMediaContent* sigval1 = const_cast<QMediaContent*>(&param1_ret);
		miqt_exec_callback_QMediaPlaylist_currentMediaChanged(slot, sigval1);
	});
}

void QMediaPlaylist_mediaAboutToBeInserted(QMediaPlaylist* self, int start, int end) {
	self->mediaAboutToBeInserted(static_cast<int>(start), static_cast<int>(end));
}

void QMediaPlaylist_connect_mediaAboutToBeInserted(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int, int)>(&QMediaPlaylist::mediaAboutToBeInserted), self, [=](int start, int end) {
		int sigval1 = start;
		int sigval2 = end;
		miqt_exec_callback_QMediaPlaylist_mediaAboutToBeInserted(slot, sigval1, sigval2);
	});
}

void QMediaPlaylist_mediaInserted(QMediaPlaylist* self, int start, int end) {
	self->mediaInserted(static_cast<int>(start), static_cast<int>(end));
}

void QMediaPlaylist_connect_mediaInserted(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int, int)>(&QMediaPlaylist::mediaInserted), self, [=](int start, int end) {
		int sigval1 = start;
		int sigval2 = end;
		miqt_exec_callback_QMediaPlaylist_mediaInserted(slot, sigval1, sigval2);
	});
}

void QMediaPlaylist_mediaAboutToBeRemoved(QMediaPlaylist* self, int start, int end) {
	self->mediaAboutToBeRemoved(static_cast<int>(start), static_cast<int>(end));
}

void QMediaPlaylist_connect_mediaAboutToBeRemoved(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int, int)>(&QMediaPlaylist::mediaAboutToBeRemoved), self, [=](int start, int end) {
		int sigval1 = start;
		int sigval2 = end;
		miqt_exec_callback_QMediaPlaylist_mediaAboutToBeRemoved(slot, sigval1, sigval2);
	});
}

void QMediaPlaylist_mediaRemoved(QMediaPlaylist* self, int start, int end) {
	self->mediaRemoved(static_cast<int>(start), static_cast<int>(end));
}

void QMediaPlaylist_connect_mediaRemoved(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int, int)>(&QMediaPlaylist::mediaRemoved), self, [=](int start, int end) {
		int sigval1 = start;
		int sigval2 = end;
		miqt_exec_callback_QMediaPlaylist_mediaRemoved(slot, sigval1, sigval2);
	});
}

void QMediaPlaylist_mediaChanged(QMediaPlaylist* self, int start, int end) {
	self->mediaChanged(static_cast<int>(start), static_cast<int>(end));
}

void QMediaPlaylist_connect_mediaChanged(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int, int)>(&QMediaPlaylist::mediaChanged), self, [=](int start, int end) {
		int sigval1 = start;
		int sigval2 = end;
		miqt_exec_callback_QMediaPlaylist_mediaChanged(slot, sigval1, sigval2);
	});
}

void QMediaPlaylist_loaded(QMediaPlaylist* self) {
	self->loaded();
}

void QMediaPlaylist_connect_loaded(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)()>(&QMediaPlaylist::loaded), self, [=]() {
		miqt_exec_callback_QMediaPlaylist_loaded(slot);
	});
}

void QMediaPlaylist_loadFailed(QMediaPlaylist* self) {
	self->loadFailed();
}

void QMediaPlaylist_connect_loadFailed(QMediaPlaylist* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)()>(&QMediaPlaylist::loadFailed), self, [=]() {
		miqt_exec_callback_QMediaPlaylist_loadFailed(slot);
	});
}

struct miqt_string QMediaPlaylist_tr2(const char* s, const char* c) {
	QString _ret = QMediaPlaylist::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlaylist_tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaPlaylist::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlaylist_trUtf82(const char* s, const char* c) {
	QString _ret = QMediaPlaylist::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaPlaylist_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaPlaylist::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QMediaPlaylist_nextIndex1(const QMediaPlaylist* self, int steps) {
	return self->nextIndex(static_cast<int>(steps));
}

int QMediaPlaylist_previousIndex1(const QMediaPlaylist* self, int steps) {
	return self->previousIndex(static_cast<int>(steps));
}

void QMediaPlaylist_load2(QMediaPlaylist* self, QNetworkRequest* request, const char* format) {
	self->load(*request, format);
}

void QMediaPlaylist_load22(QMediaPlaylist* self, QUrl* location, const char* format) {
	self->load(*location, format);
}

void QMediaPlaylist_load23(QMediaPlaylist* self, QIODevice* device, const char* format) {
	self->load(device, format);
}

bool QMediaPlaylist_save22(QMediaPlaylist* self, QUrl* location, const char* format) {
	return self->save(*location, format);
}

bool QMediaPlaylist_override_virtual_mediaObject(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist* self_cast = dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mediaObject = slot;
	return true;
}

QMediaObject* QMediaPlaylist_virtualbase_mediaObject(const void* self) {
	return ( (const MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_mediaObject();
}

bool QMediaPlaylist_override_virtual_setMediaObject(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist* self_cast = dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMediaObject = slot;
	return true;
}

bool QMediaPlaylist_virtualbase_setMediaObject(void* self, QMediaObject* object) {
	return ( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_setMediaObject(object);
}

bool QMediaPlaylist_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist* self_cast = dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QMediaPlaylist_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_event(event);
}

bool QMediaPlaylist_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist* self_cast = dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QMediaPlaylist_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QMediaPlaylist_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist* self_cast = dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QMediaPlaylist_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_timerEvent(event);
}

bool QMediaPlaylist_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist* self_cast = dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QMediaPlaylist_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_childEvent(event);
}

bool QMediaPlaylist_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist* self_cast = dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QMediaPlaylist_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_customEvent(event);
}

bool QMediaPlaylist_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist* self_cast = dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QMediaPlaylist_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_connectNotify(signal);
}

bool QMediaPlaylist_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMediaPlaylist* self_cast = dynamic_cast<MiqtVirtualQMediaPlaylist*>( (QMediaPlaylist*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QMediaPlaylist_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaPlaylist*)(self) )->virtualbase_disconnectNotify(signal);
}

void QMediaPlaylist_delete(QMediaPlaylist* self) {
	delete self;
}

