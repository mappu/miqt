#include <QIODevice>
#include <QList>
#include <QMediaContent>
#include <QMediaObject>
#include <QMediaPlaylist>
#include <QMetaObject>
#include <QNetworkRequest>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qmediaplaylist.h>
#include "gen_qmediaplaylist.h"
#include "_cgo_export.h"

QMediaPlaylist* QMediaPlaylist_new() {
	return new QMediaPlaylist();
}

QMediaPlaylist* QMediaPlaylist_new2(QObject* parent) {
	return new QMediaPlaylist(parent);
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

bool QMediaPlaylist_AddMediaWithItems(QMediaPlaylist* self, struct miqt_array /* of QMediaContent* */ items) {
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

bool QMediaPlaylist_InsertMedia2(QMediaPlaylist* self, int index, struct miqt_array /* of QMediaContent* */ items) {
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
	QMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int)>(&QMediaPlaylist::currentIndexChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QMediaPlaylist_CurrentIndexChanged(slot, sigval1);
	});
}

void QMediaPlaylist_PlaybackModeChanged(QMediaPlaylist* self, int mode) {
	self->playbackModeChanged(static_cast<QMediaPlaylist::PlaybackMode>(mode));
}

void QMediaPlaylist_connect_PlaybackModeChanged(QMediaPlaylist* self, intptr_t slot) {
	QMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(QMediaPlaylist::PlaybackMode)>(&QMediaPlaylist::playbackModeChanged), self, [=](QMediaPlaylist::PlaybackMode mode) {
		QMediaPlaylist::PlaybackMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		miqt_exec_callback_QMediaPlaylist_PlaybackModeChanged(slot, sigval1);
	});
}

void QMediaPlaylist_CurrentMediaChanged(QMediaPlaylist* self, QMediaContent* param1) {
	self->currentMediaChanged(*param1);
}

void QMediaPlaylist_connect_CurrentMediaChanged(QMediaPlaylist* self, intptr_t slot) {
	QMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(const QMediaContent&)>(&QMediaPlaylist::currentMediaChanged), self, [=](const QMediaContent& param1) {
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
	QMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int, int)>(&QMediaPlaylist::mediaAboutToBeInserted), self, [=](int start, int end) {
		int sigval1 = start;
		int sigval2 = end;
		miqt_exec_callback_QMediaPlaylist_MediaAboutToBeInserted(slot, sigval1, sigval2);
	});
}

void QMediaPlaylist_MediaInserted(QMediaPlaylist* self, int start, int end) {
	self->mediaInserted(static_cast<int>(start), static_cast<int>(end));
}

void QMediaPlaylist_connect_MediaInserted(QMediaPlaylist* self, intptr_t slot) {
	QMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int, int)>(&QMediaPlaylist::mediaInserted), self, [=](int start, int end) {
		int sigval1 = start;
		int sigval2 = end;
		miqt_exec_callback_QMediaPlaylist_MediaInserted(slot, sigval1, sigval2);
	});
}

void QMediaPlaylist_MediaAboutToBeRemoved(QMediaPlaylist* self, int start, int end) {
	self->mediaAboutToBeRemoved(static_cast<int>(start), static_cast<int>(end));
}

void QMediaPlaylist_connect_MediaAboutToBeRemoved(QMediaPlaylist* self, intptr_t slot) {
	QMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int, int)>(&QMediaPlaylist::mediaAboutToBeRemoved), self, [=](int start, int end) {
		int sigval1 = start;
		int sigval2 = end;
		miqt_exec_callback_QMediaPlaylist_MediaAboutToBeRemoved(slot, sigval1, sigval2);
	});
}

void QMediaPlaylist_MediaRemoved(QMediaPlaylist* self, int start, int end) {
	self->mediaRemoved(static_cast<int>(start), static_cast<int>(end));
}

void QMediaPlaylist_connect_MediaRemoved(QMediaPlaylist* self, intptr_t slot) {
	QMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int, int)>(&QMediaPlaylist::mediaRemoved), self, [=](int start, int end) {
		int sigval1 = start;
		int sigval2 = end;
		miqt_exec_callback_QMediaPlaylist_MediaRemoved(slot, sigval1, sigval2);
	});
}

void QMediaPlaylist_MediaChanged(QMediaPlaylist* self, int start, int end) {
	self->mediaChanged(static_cast<int>(start), static_cast<int>(end));
}

void QMediaPlaylist_connect_MediaChanged(QMediaPlaylist* self, intptr_t slot) {
	QMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)(int, int)>(&QMediaPlaylist::mediaChanged), self, [=](int start, int end) {
		int sigval1 = start;
		int sigval2 = end;
		miqt_exec_callback_QMediaPlaylist_MediaChanged(slot, sigval1, sigval2);
	});
}

void QMediaPlaylist_Loaded(QMediaPlaylist* self) {
	self->loaded();
}

void QMediaPlaylist_connect_Loaded(QMediaPlaylist* self, intptr_t slot) {
	QMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)()>(&QMediaPlaylist::loaded), self, [=]() {
		miqt_exec_callback_QMediaPlaylist_Loaded(slot);
	});
}

void QMediaPlaylist_LoadFailed(QMediaPlaylist* self) {
	self->loadFailed();
}

void QMediaPlaylist_connect_LoadFailed(QMediaPlaylist* self, intptr_t slot) {
	QMediaPlaylist::connect(self, static_cast<void (QMediaPlaylist::*)()>(&QMediaPlaylist::loadFailed), self, [=]() {
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

void QMediaPlaylist_Delete(QMediaPlaylist* self) {
	delete self;
}

