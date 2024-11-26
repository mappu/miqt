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
#include "_cgo_export.h"

void QWebHistoryItem_new(QWebHistoryItem* other, QWebHistoryItem** outptr_QWebHistoryItem) {
	QWebHistoryItem* ret = new QWebHistoryItem(*other);
	*outptr_QWebHistoryItem = ret;
}

void QWebHistoryItem_OperatorAssign(QWebHistoryItem* self, QWebHistoryItem* other) {
	self->operator=(*other);
}

QUrl* QWebHistoryItem_OriginalUrl(const QWebHistoryItem* self) {
	return new QUrl(self->originalUrl());
}

QUrl* QWebHistoryItem_Url(const QWebHistoryItem* self) {
	return new QUrl(self->url());
}

struct miqt_string QWebHistoryItem_Title(const QWebHistoryItem* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QWebHistoryItem_LastVisited(const QWebHistoryItem* self) {
	return new QDateTime(self->lastVisited());
}

QIcon* QWebHistoryItem_Icon(const QWebHistoryItem* self) {
	return new QIcon(self->icon());
}

QVariant* QWebHistoryItem_UserData(const QWebHistoryItem* self) {
	return new QVariant(self->userData());
}

void QWebHistoryItem_SetUserData(QWebHistoryItem* self, QVariant* userData) {
	self->setUserData(*userData);
}

bool QWebHistoryItem_IsValid(const QWebHistoryItem* self) {
	return self->isValid();
}

struct miqt_map /* of struct miqt_string to QVariant* */  QWebHistoryItem_ToMap(const QWebHistoryItem* self) {
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

void QWebHistoryItem_LoadFromMap(QWebHistoryItem* self, struct miqt_map /* of struct miqt_string to QVariant* */  mapVal) {
	QVariantMap mapVal_QMap;
	struct miqt_string* mapVal_karr = static_cast<struct miqt_string*>(mapVal.keys);
	QVariant** mapVal_varr = static_cast<QVariant**>(mapVal.values);
	for(size_t i = 0; i < mapVal.len; ++i) {
		QString mapVal_karr_i_QString = QString::fromUtf8(mapVal_karr[i].data, mapVal_karr[i].len);
		mapVal_QMap[mapVal_karr_i_QString] = *(mapVal_varr[i]);
	}
	self->loadFromMap(mapVal_QMap);
}

void QWebHistoryItem_Delete(QWebHistoryItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebHistoryItem*>( self );
	} else {
		delete self;
	}
}

void QWebHistory_Clear(QWebHistory* self) {
	self->clear();
}

struct miqt_array /* of QWebHistoryItem* */  QWebHistory_Items(const QWebHistory* self) {
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

struct miqt_array /* of QWebHistoryItem* */  QWebHistory_BackItems(const QWebHistory* self, int maxItems) {
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

struct miqt_array /* of QWebHistoryItem* */  QWebHistory_ForwardItems(const QWebHistory* self, int maxItems) {
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

bool QWebHistory_CanGoBack(const QWebHistory* self) {
	return self->canGoBack();
}

bool QWebHistory_CanGoForward(const QWebHistory* self) {
	return self->canGoForward();
}

void QWebHistory_Back(QWebHistory* self) {
	self->back();
}

void QWebHistory_Forward(QWebHistory* self) {
	self->forward();
}

void QWebHistory_GoToItem(QWebHistory* self, QWebHistoryItem* item) {
	self->goToItem(*item);
}

QWebHistoryItem* QWebHistory_BackItem(const QWebHistory* self) {
	return new QWebHistoryItem(self->backItem());
}

QWebHistoryItem* QWebHistory_CurrentItem(const QWebHistory* self) {
	return new QWebHistoryItem(self->currentItem());
}

QWebHistoryItem* QWebHistory_ForwardItem(const QWebHistory* self) {
	return new QWebHistoryItem(self->forwardItem());
}

QWebHistoryItem* QWebHistory_ItemAt(const QWebHistory* self, int i) {
	return new QWebHistoryItem(self->itemAt(static_cast<int>(i)));
}

int QWebHistory_CurrentItemIndex(const QWebHistory* self) {
	return self->currentItemIndex();
}

int QWebHistory_Count(const QWebHistory* self) {
	return self->count();
}

int QWebHistory_MaximumItemCount(const QWebHistory* self) {
	return self->maximumItemCount();
}

void QWebHistory_SetMaximumItemCount(QWebHistory* self, int count) {
	self->setMaximumItemCount(static_cast<int>(count));
}

struct miqt_map /* of struct miqt_string to QVariant* */  QWebHistory_ToMap(const QWebHistory* self) {
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

void QWebHistory_LoadFromMap(QWebHistory* self, struct miqt_map /* of struct miqt_string to QVariant* */  mapVal) {
	QVariantMap mapVal_QMap;
	struct miqt_string* mapVal_karr = static_cast<struct miqt_string*>(mapVal.keys);
	QVariant** mapVal_varr = static_cast<QVariant**>(mapVal.values);
	for(size_t i = 0; i < mapVal.len; ++i) {
		QString mapVal_karr_i_QString = QString::fromUtf8(mapVal_karr[i].data, mapVal_karr[i].len);
		mapVal_QMap[mapVal_karr_i_QString] = *(mapVal_varr[i]);
	}
	self->loadFromMap(mapVal_QMap);
}

