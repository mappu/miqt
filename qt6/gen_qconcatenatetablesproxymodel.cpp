#include <QAbstractItemModel>
#include <QConcatenateTablesProxyModel>
#include <QList>
#include <QMap>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qconcatenatetablesproxymodel.h>
#include "gen_qconcatenatetablesproxymodel.h"
#include "_cgo_export.h"

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new() {
	return new QConcatenateTablesProxyModel();
}

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new2(QObject* parent) {
	return new QConcatenateTablesProxyModel(parent);
}

QMetaObject* QConcatenateTablesProxyModel_MetaObject(const QConcatenateTablesProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QConcatenateTablesProxyModel_Metacast(QConcatenateTablesProxyModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QConcatenateTablesProxyModel_Tr(const char* s) {
	QString _ret = QConcatenateTablesProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array QConcatenateTablesProxyModel_SourceModels(const QConcatenateTablesProxyModel* self) {
	QList<QAbstractItemModel *> _ret = self->sourceModels();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractItemModel** _arr = static_cast<QAbstractItemModel**>(malloc(sizeof(QAbstractItemModel*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QConcatenateTablesProxyModel_AddSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel) {
	self->addSourceModel(sourceModel);
}

void QConcatenateTablesProxyModel_RemoveSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel) {
	self->removeSourceModel(sourceModel);
}

QModelIndex* QConcatenateTablesProxyModel_MapFromSource(const QConcatenateTablesProxyModel* self, QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* QConcatenateTablesProxyModel_MapToSource(const QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QVariant* QConcatenateTablesProxyModel_Data(const QConcatenateTablesProxyModel* self, QModelIndex* index) {
	return new QVariant(self->data(*index));
}

bool QConcatenateTablesProxyModel_SetData(QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

struct miqt_map QConcatenateTablesProxyModel_ItemData(const QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex) {
	QMap<int, QVariant> _ret = self->itemData(*proxyIndex);
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

bool QConcatenateTablesProxyModel_SetItemData(QConcatenateTablesProxyModel* self, QModelIndex* index, struct miqt_map roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return self->setItemData(*index, roles_QMap);
}

int QConcatenateTablesProxyModel_Flags(const QConcatenateTablesProxyModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

QModelIndex* QConcatenateTablesProxyModel_Index(const QConcatenateTablesProxyModel* self, int row, int column) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column)));
}

QModelIndex* QConcatenateTablesProxyModel_Parent(const QConcatenateTablesProxyModel* self, QModelIndex* index) {
	return new QModelIndex(self->parent(*index));
}

int QConcatenateTablesProxyModel_RowCount(const QConcatenateTablesProxyModel* self) {
	return self->rowCount();
}

QVariant* QConcatenateTablesProxyModel_HeaderData(const QConcatenateTablesProxyModel* self, int section, int orientation) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation)));
}

int QConcatenateTablesProxyModel_ColumnCount(const QConcatenateTablesProxyModel* self) {
	return self->columnCount();
}

struct miqt_array QConcatenateTablesProxyModel_MimeTypes(const QConcatenateTablesProxyModel* self) {
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

QMimeData* QConcatenateTablesProxyModel_MimeData(const QConcatenateTablesProxyModel* self, struct miqt_array /* of QModelIndex* */ indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QConcatenateTablesProxyModel_CanDropMimeData(const QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QConcatenateTablesProxyModel_DropMimeData(QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

QSize* QConcatenateTablesProxyModel_Span(const QConcatenateTablesProxyModel* self, QModelIndex* index) {
	return new QSize(self->span(*index));
}

struct miqt_string QConcatenateTablesProxyModel_Tr2(const char* s, const char* c) {
	QString _ret = QConcatenateTablesProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QConcatenateTablesProxyModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QConcatenateTablesProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QConcatenateTablesProxyModel_Data2(const QConcatenateTablesProxyModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QConcatenateTablesProxyModel_SetData3(QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QModelIndex* QConcatenateTablesProxyModel_Index3(const QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

int QConcatenateTablesProxyModel_RowCount1(const QConcatenateTablesProxyModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

QVariant* QConcatenateTablesProxyModel_HeaderData3(const QConcatenateTablesProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

int QConcatenateTablesProxyModel_ColumnCount1(const QConcatenateTablesProxyModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

void QConcatenateTablesProxyModel_Delete(QConcatenateTablesProxyModel* self) {
	delete self;
}

