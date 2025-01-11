#include <QDateTime>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineHistory>
#include <QWebEngineHistoryItem>
#include <qwebenginehistory.h>
#include "gen_qwebenginehistory.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebEngineHistoryItem* QWebEngineHistoryItem_new(QWebEngineHistoryItem* other) {
	return new QWebEngineHistoryItem(*other);
}

void QWebEngineHistoryItem_OperatorAssign(QWebEngineHistoryItem* self, QWebEngineHistoryItem* other) {
	self->operator=(*other);
}

QUrl* QWebEngineHistoryItem_OriginalUrl(const QWebEngineHistoryItem* self) {
	return new QUrl(self->originalUrl());
}

QUrl* QWebEngineHistoryItem_Url(const QWebEngineHistoryItem* self) {
	return new QUrl(self->url());
}

struct miqt_string QWebEngineHistoryItem_Title(const QWebEngineHistoryItem* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QWebEngineHistoryItem_LastVisited(const QWebEngineHistoryItem* self) {
	return new QDateTime(self->lastVisited());
}

QUrl* QWebEngineHistoryItem_IconUrl(const QWebEngineHistoryItem* self) {
	return new QUrl(self->iconUrl());
}

bool QWebEngineHistoryItem_IsValid(const QWebEngineHistoryItem* self) {
	return self->isValid();
}

void QWebEngineHistoryItem_Swap(QWebEngineHistoryItem* self, QWebEngineHistoryItem* other) {
	self->swap(*other);
}

void QWebEngineHistoryItem_Delete(QWebEngineHistoryItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineHistoryItem*>( self );
	} else {
		delete self;
	}
}

void QWebEngineHistory_Clear(QWebEngineHistory* self) {
	self->clear();
}

struct miqt_array /* of QWebEngineHistoryItem* */  QWebEngineHistory_Items(const QWebEngineHistory* self) {
	QList<QWebEngineHistoryItem> _ret = self->items();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWebEngineHistoryItem** _arr = static_cast<QWebEngineHistoryItem**>(malloc(sizeof(QWebEngineHistoryItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QWebEngineHistoryItem(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QWebEngineHistoryItem* */  QWebEngineHistory_BackItems(const QWebEngineHistory* self, int maxItems) {
	QList<QWebEngineHistoryItem> _ret = self->backItems(static_cast<int>(maxItems));
	// Convert QList<> from C++ memory to manually-managed C memory
	QWebEngineHistoryItem** _arr = static_cast<QWebEngineHistoryItem**>(malloc(sizeof(QWebEngineHistoryItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QWebEngineHistoryItem(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QWebEngineHistoryItem* */  QWebEngineHistory_ForwardItems(const QWebEngineHistory* self, int maxItems) {
	QList<QWebEngineHistoryItem> _ret = self->forwardItems(static_cast<int>(maxItems));
	// Convert QList<> from C++ memory to manually-managed C memory
	QWebEngineHistoryItem** _arr = static_cast<QWebEngineHistoryItem**>(malloc(sizeof(QWebEngineHistoryItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QWebEngineHistoryItem(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QWebEngineHistory_CanGoBack(const QWebEngineHistory* self) {
	return self->canGoBack();
}

bool QWebEngineHistory_CanGoForward(const QWebEngineHistory* self) {
	return self->canGoForward();
}

void QWebEngineHistory_Back(QWebEngineHistory* self) {
	self->back();
}

void QWebEngineHistory_Forward(QWebEngineHistory* self) {
	self->forward();
}

void QWebEngineHistory_GoToItem(QWebEngineHistory* self, QWebEngineHistoryItem* item) {
	self->goToItem(*item);
}

QWebEngineHistoryItem* QWebEngineHistory_BackItem(const QWebEngineHistory* self) {
	return new QWebEngineHistoryItem(self->backItem());
}

QWebEngineHistoryItem* QWebEngineHistory_CurrentItem(const QWebEngineHistory* self) {
	return new QWebEngineHistoryItem(self->currentItem());
}

QWebEngineHistoryItem* QWebEngineHistory_ForwardItem(const QWebEngineHistory* self) {
	return new QWebEngineHistoryItem(self->forwardItem());
}

QWebEngineHistoryItem* QWebEngineHistory_ItemAt(const QWebEngineHistory* self, int i) {
	return new QWebEngineHistoryItem(self->itemAt(static_cast<int>(i)));
}

int QWebEngineHistory_CurrentItemIndex(const QWebEngineHistory* self) {
	return self->currentItemIndex();
}

int QWebEngineHistory_Count(const QWebEngineHistory* self) {
	return self->count();
}

