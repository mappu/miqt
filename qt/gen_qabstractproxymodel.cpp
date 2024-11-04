#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QList>
#include <QMap>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qabstractproxymodel.h>
#include "gen_qabstractproxymodel.h"
#include "_cgo_export.h"

QMetaObject* QAbstractProxyModel_MetaObject(const QAbstractProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractProxyModel_Metacast(QAbstractProxyModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractProxyModel_Tr(const char* s) {
	QString _ret = QAbstractProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractProxyModel_TrUtf8(const char* s) {
	QString _ret = QAbstractProxyModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractProxyModel_SetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel) {
	self->setSourceModel(sourceModel);
}

QAbstractItemModel* QAbstractProxyModel_SourceModel(const QAbstractProxyModel* self) {
	return self->sourceModel();
}

QModelIndex* QAbstractProxyModel_MapToSource(const QAbstractProxyModel* self, QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QAbstractProxyModel_MapFromSource(const QAbstractProxyModel* self, QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

bool QAbstractProxyModel_Submit(QAbstractProxyModel* self) {
	return self->submit();
}

void QAbstractProxyModel_Revert(QAbstractProxyModel* self) {
	self->revert();
}

QVariant* QAbstractProxyModel_Data(const QAbstractProxyModel* self, QModelIndex* proxyIndex) {
	return new QVariant(self->data(*proxyIndex));
}

QVariant* QAbstractProxyModel_HeaderData(const QAbstractProxyModel* self, int section, int orientation) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation)));
}

struct miqt_map QAbstractProxyModel_ItemData(const QAbstractProxyModel* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = self->itemData(*index);
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

int QAbstractProxyModel_Flags(const QAbstractProxyModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

bool QAbstractProxyModel_SetData(QAbstractProxyModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

bool QAbstractProxyModel_SetItemData(QAbstractProxyModel* self, QModelIndex* index, struct miqt_map roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return self->setItemData(*index, roles_QMap);
}

bool QAbstractProxyModel_SetHeaderData(QAbstractProxyModel* self, int section, int orientation, QVariant* value) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value);
}

QModelIndex* QAbstractProxyModel_Buddy(const QAbstractProxyModel* self, QModelIndex* index) {
	return new QModelIndex(self->buddy(*index));
}

bool QAbstractProxyModel_CanFetchMore(const QAbstractProxyModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

void QAbstractProxyModel_FetchMore(QAbstractProxyModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

void QAbstractProxyModel_Sort(QAbstractProxyModel* self, int column) {
	self->sort(static_cast<int>(column));
}

QSize* QAbstractProxyModel_Span(const QAbstractProxyModel* self, QModelIndex* index) {
	return new QSize(self->span(*index));
}

bool QAbstractProxyModel_HasChildren(const QAbstractProxyModel* self) {
	return self->hasChildren();
}

QModelIndex* QAbstractProxyModel_Sibling(const QAbstractProxyModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

QMimeData* QAbstractProxyModel_MimeData(const QAbstractProxyModel* self, struct miqt_array /* of QModelIndex* */ indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QAbstractProxyModel_CanDropMimeData(const QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractProxyModel_DropMimeData(QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

struct miqt_array QAbstractProxyModel_MimeTypes(const QAbstractProxyModel* self) {
	QStringList _ret = self->mimeTypes();
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

int QAbstractProxyModel_SupportedDragActions(const QAbstractProxyModel* self) {
	Qt::DropActions _ret = self->supportedDragActions();
	return static_cast<int>(_ret);
}

int QAbstractProxyModel_SupportedDropActions(const QAbstractProxyModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

struct miqt_string QAbstractProxyModel_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractProxyModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractProxyModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractProxyModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractProxyModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractProxyModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QAbstractProxyModel_Data2(const QAbstractProxyModel* self, QModelIndex* proxyIndex, int role) {
	return new QVariant(self->data(*proxyIndex, static_cast<int>(role)));
}

QVariant* QAbstractProxyModel_HeaderData3(const QAbstractProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QAbstractProxyModel_SetData3(QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

bool QAbstractProxyModel_SetHeaderData4(QAbstractProxyModel* self, int section, int orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

void QAbstractProxyModel_Sort2(QAbstractProxyModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QAbstractProxyModel_HasChildren1(const QAbstractProxyModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

void QAbstractProxyModel_Delete(QAbstractProxyModel* self) {
	delete self;
}

