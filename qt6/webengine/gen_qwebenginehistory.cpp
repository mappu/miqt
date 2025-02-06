#include <QAbstractItemModel>
#include <QAbstractListModel>
#include <QByteArray>
#include <QDataStream>
#include <QDateTime>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <QWebEngineHistory>
#include <QWebEngineHistoryItem>
#include <QWebEngineHistoryModel>
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

void QWebEngineHistoryItem_operatorAssign(QWebEngineHistoryItem* self, QWebEngineHistoryItem* other) {
	self->operator=(*other);
}

QUrl* QWebEngineHistoryItem_originalUrl(const QWebEngineHistoryItem* self) {
	return new QUrl(self->originalUrl());
}

QUrl* QWebEngineHistoryItem_url(const QWebEngineHistoryItem* self) {
	return new QUrl(self->url());
}

struct miqt_string QWebEngineHistoryItem_title(const QWebEngineHistoryItem* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QWebEngineHistoryItem_lastVisited(const QWebEngineHistoryItem* self) {
	return new QDateTime(self->lastVisited());
}

QUrl* QWebEngineHistoryItem_iconUrl(const QWebEngineHistoryItem* self) {
	return new QUrl(self->iconUrl());
}

bool QWebEngineHistoryItem_isValid(const QWebEngineHistoryItem* self) {
	return self->isValid();
}

void QWebEngineHistoryItem_swap(QWebEngineHistoryItem* self, QWebEngineHistoryItem* other) {
	self->swap(*other);
}

void QWebEngineHistoryItem_delete(QWebEngineHistoryItem* self) {
	delete self;
}

void QWebEngineHistoryModel_virtbase(QWebEngineHistoryModel* src, QAbstractListModel** outptr_QAbstractListModel) {
	*outptr_QAbstractListModel = static_cast<QAbstractListModel*>(src);
}

QMetaObject* QWebEngineHistoryModel_metaObject(const QWebEngineHistoryModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineHistoryModel_metacast(QWebEngineHistoryModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineHistoryModel_tr(const char* s) {
	QString _ret = QWebEngineHistoryModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QWebEngineHistoryModel_rowCount(const QWebEngineHistoryModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

QVariant* QWebEngineHistoryModel_data(const QWebEngineHistoryModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

struct miqt_map /* of int to struct miqt_string */  QWebEngineHistoryModel_roleNames(const QWebEngineHistoryModel* self) {
	QHash<int, QByteArray> _ret = self->roleNames();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	struct miqt_string* _varr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		QByteArray _hashval_qb = _itr->second;
		struct miqt_string _hashval_ms;
		_hashval_ms.len = _hashval_qb.length();
		_hashval_ms.data = static_cast<char*>(malloc(_hashval_ms.len));
		memcpy(_hashval_ms.data, _hashval_qb.data(), _hashval_ms.len);
		_varr[_ctr] = _hashval_ms;
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

void QWebEngineHistoryModel_reset(QWebEngineHistoryModel* self) {
	self->reset();
}

struct miqt_string QWebEngineHistoryModel_tr2(const char* s, const char* c) {
	QString _ret = QWebEngineHistoryModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineHistoryModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineHistoryModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineHistory_virtbase(QWebEngineHistory* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineHistory_metaObject(const QWebEngineHistory* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineHistory_metacast(QWebEngineHistory* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineHistory_tr(const char* s) {
	QString _ret = QWebEngineHistory::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineHistory_clear(QWebEngineHistory* self) {
	self->clear();
}

struct miqt_array /* of QWebEngineHistoryItem* */  QWebEngineHistory_items(const QWebEngineHistory* self) {
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

struct miqt_array /* of QWebEngineHistoryItem* */  QWebEngineHistory_backItems(const QWebEngineHistory* self, int maxItems) {
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

struct miqt_array /* of QWebEngineHistoryItem* */  QWebEngineHistory_forwardItems(const QWebEngineHistory* self, int maxItems) {
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

bool QWebEngineHistory_canGoBack(const QWebEngineHistory* self) {
	return self->canGoBack();
}

bool QWebEngineHistory_canGoForward(const QWebEngineHistory* self) {
	return self->canGoForward();
}

void QWebEngineHistory_back(QWebEngineHistory* self) {
	self->back();
}

void QWebEngineHistory_forward(QWebEngineHistory* self) {
	self->forward();
}

void QWebEngineHistory_goToItem(QWebEngineHistory* self, QWebEngineHistoryItem* item) {
	self->goToItem(*item);
}

QWebEngineHistoryItem* QWebEngineHistory_backItem(const QWebEngineHistory* self) {
	return new QWebEngineHistoryItem(self->backItem());
}

QWebEngineHistoryItem* QWebEngineHistory_currentItem(const QWebEngineHistory* self) {
	return new QWebEngineHistoryItem(self->currentItem());
}

QWebEngineHistoryItem* QWebEngineHistory_forwardItem(const QWebEngineHistory* self) {
	return new QWebEngineHistoryItem(self->forwardItem());
}

QWebEngineHistoryItem* QWebEngineHistory_itemAt(const QWebEngineHistory* self, int i) {
	return new QWebEngineHistoryItem(self->itemAt(static_cast<int>(i)));
}

int QWebEngineHistory_currentItemIndex(const QWebEngineHistory* self) {
	return self->currentItemIndex();
}

int QWebEngineHistory_count(const QWebEngineHistory* self) {
	return self->count();
}

QWebEngineHistoryModel* QWebEngineHistory_itemsModel(const QWebEngineHistory* self) {
	return self->itemsModel();
}

QWebEngineHistoryModel* QWebEngineHistory_backItemsModel(const QWebEngineHistory* self) {
	return self->backItemsModel();
}

QWebEngineHistoryModel* QWebEngineHistory_forwardItemsModel(const QWebEngineHistory* self) {
	return self->forwardItemsModel();
}

struct miqt_string QWebEngineHistory_tr2(const char* s, const char* c) {
	QString _ret = QWebEngineHistory::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineHistory_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineHistory::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

