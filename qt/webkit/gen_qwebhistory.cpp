#include <QDateTime>
#include <QIcon>
#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <QWebHistory>
#include <QWebHistoryItem>
#include <qwebhistory.h>
#include "gen_qwebhistory.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebHistoryItem* QWebHistoryItem_new(QWebHistoryItem* other) {
	return new QWebHistoryItem(*other);
}

void QWebHistoryItem_operatorAssign(QWebHistoryItem* self, QWebHistoryItem* other) {
	self->operator=(*other);
}

QUrl* QWebHistoryItem_originalUrl(const QWebHistoryItem* self) {
	return new QUrl(self->originalUrl());
}

QUrl* QWebHistoryItem_url(const QWebHistoryItem* self) {
	return new QUrl(self->url());
}

struct miqt_string QWebHistoryItem_title(const QWebHistoryItem* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QWebHistoryItem_lastVisited(const QWebHistoryItem* self) {
	return new QDateTime(self->lastVisited());
}

QIcon* QWebHistoryItem_icon(const QWebHistoryItem* self) {
	return new QIcon(self->icon());
}

QVariant* QWebHistoryItem_userData(const QWebHistoryItem* self) {
	return new QVariant(self->userData());
}

void QWebHistoryItem_setUserData(QWebHistoryItem* self, QVariant* userData) {
	self->setUserData(*userData);
}

bool QWebHistoryItem_isValid(const QWebHistoryItem* self) {
	return self->isValid();
}

struct miqt_map /* of struct miqt_string to QVariant* */  QWebHistoryItem_toMap(const QWebHistoryItem* self) {
	QVariantMap _ret = self->toMap();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _mapkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _mapkey_b = _mapkey_ret.toUtf8();
		struct miqt_string _mapkey_ms;
		_mapkey_ms.len = _mapkey_b.length();
		_mapkey_ms.data = static_cast<char*>(malloc(_mapkey_ms.len));
		memcpy(_mapkey_ms.data, _mapkey_b.data(), _mapkey_ms.len);
		_karr[_ctr] = _mapkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

void QWebHistoryItem_loadFromMap(QWebHistoryItem* self, struct miqt_map /* of struct miqt_string to QVariant* */  map) {
	QVariantMap map_QMap;
	struct miqt_string* map_karr = static_cast<struct miqt_string*>(map.keys);
	QVariant** map_varr = static_cast<QVariant**>(map.values);
	for(size_t i = 0; i < map.len; ++i) {
		QString map_karr_i_QString = QString::fromUtf8(map_karr[i].data, map_karr[i].len);
		map_QMap[map_karr_i_QString] = *(map_varr[i]);
	}
	self->loadFromMap(map_QMap);
}

void QWebHistoryItem_delete(QWebHistoryItem* self) {
	delete self;
}

void QWebHistory_clear(QWebHistory* self) {
	self->clear();
}

struct miqt_array /* of QWebHistoryItem* */  QWebHistory_items(const QWebHistory* self) {
	QList<QWebHistoryItem> _ret = self->items();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWebHistoryItem** _arr = static_cast<QWebHistoryItem**>(malloc(sizeof(QWebHistoryItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QWebHistoryItem(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QWebHistoryItem* */  QWebHistory_backItems(const QWebHistory* self, int maxItems) {
	QList<QWebHistoryItem> _ret = self->backItems(static_cast<int>(maxItems));
	// Convert QList<> from C++ memory to manually-managed C memory
	QWebHistoryItem** _arr = static_cast<QWebHistoryItem**>(malloc(sizeof(QWebHistoryItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QWebHistoryItem(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QWebHistoryItem* */  QWebHistory_forwardItems(const QWebHistory* self, int maxItems) {
	QList<QWebHistoryItem> _ret = self->forwardItems(static_cast<int>(maxItems));
	// Convert QList<> from C++ memory to manually-managed C memory
	QWebHistoryItem** _arr = static_cast<QWebHistoryItem**>(malloc(sizeof(QWebHistoryItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QWebHistoryItem(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QWebHistory_canGoBack(const QWebHistory* self) {
	return self->canGoBack();
}

bool QWebHistory_canGoForward(const QWebHistory* self) {
	return self->canGoForward();
}

void QWebHistory_back(QWebHistory* self) {
	self->back();
}

void QWebHistory_forward(QWebHistory* self) {
	self->forward();
}

void QWebHistory_goToItem(QWebHistory* self, QWebHistoryItem* item) {
	self->goToItem(*item);
}

QWebHistoryItem* QWebHistory_backItem(const QWebHistory* self) {
	return new QWebHistoryItem(self->backItem());
}

QWebHistoryItem* QWebHistory_currentItem(const QWebHistory* self) {
	return new QWebHistoryItem(self->currentItem());
}

QWebHistoryItem* QWebHistory_forwardItem(const QWebHistory* self) {
	return new QWebHistoryItem(self->forwardItem());
}

QWebHistoryItem* QWebHistory_itemAt(const QWebHistory* self, int i) {
	return new QWebHistoryItem(self->itemAt(static_cast<int>(i)));
}

int QWebHistory_currentItemIndex(const QWebHistory* self) {
	return self->currentItemIndex();
}

int QWebHistory_count(const QWebHistory* self) {
	return self->count();
}

int QWebHistory_maximumItemCount(const QWebHistory* self) {
	return self->maximumItemCount();
}

void QWebHistory_setMaximumItemCount(QWebHistory* self, int count) {
	self->setMaximumItemCount(static_cast<int>(count));
}

struct miqt_map /* of struct miqt_string to QVariant* */  QWebHistory_toMap(const QWebHistory* self) {
	QVariantMap _ret = self->toMap();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _mapkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _mapkey_b = _mapkey_ret.toUtf8();
		struct miqt_string _mapkey_ms;
		_mapkey_ms.len = _mapkey_b.length();
		_mapkey_ms.data = static_cast<char*>(malloc(_mapkey_ms.len));
		memcpy(_mapkey_ms.data, _mapkey_b.data(), _mapkey_ms.len);
		_karr[_ctr] = _mapkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

void QWebHistory_loadFromMap(QWebHistory* self, struct miqt_map /* of struct miqt_string to QVariant* */  map) {
	QVariantMap map_QMap;
	struct miqt_string* map_karr = static_cast<struct miqt_string*>(map.keys);
	QVariant** map_varr = static_cast<QVariant**>(map.values);
	for(size_t i = 0; i < map.len; ++i) {
		QString map_karr_i_QString = QString::fromUtf8(map_karr[i].data, map_karr[i].len);
		map_QMap[map_karr_i_QString] = *(map_varr[i]);
	}
	self->loadFromMap(map_QMap);
}

