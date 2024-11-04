#include <QDirModel>
#include <QFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include <QList>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qdirmodel.h>
#include "gen_qdirmodel.h"
#include "_cgo_export.h"

QDirModel* QDirModel_new(struct miqt_array /* of struct miqt_string */ nameFilters, int filters, int sort) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	return new QDirModel(nameFilters_QList, static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
}

QDirModel* QDirModel_new2() {
	return new QDirModel();
}

QDirModel* QDirModel_new3(struct miqt_array /* of struct miqt_string */ nameFilters, int filters, int sort, QObject* parent) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	return new QDirModel(nameFilters_QList, static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort), parent);
}

QDirModel* QDirModel_new4(QObject* parent) {
	return new QDirModel(parent);
}

QMetaObject* QDirModel_MetaObject(const QDirModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDirModel_Metacast(QDirModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDirModel_Tr(const char* s) {
	QString _ret = QDirModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDirModel_TrUtf8(const char* s) {
	QString _ret = QDirModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QDirModel_Index(const QDirModel* self, int row, int column) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column)));
}

QModelIndex* QDirModel_Parent(const QDirModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

int QDirModel_RowCount(const QDirModel* self) {
	return self->rowCount();
}

int QDirModel_ColumnCount(const QDirModel* self) {
	return self->columnCount();
}

QVariant* QDirModel_Data(const QDirModel* self, QModelIndex* index) {
	return new QVariant(self->data(*index));
}

bool QDirModel_SetData(QDirModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

QVariant* QDirModel_HeaderData(const QDirModel* self, int section, int orientation) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation)));
}

bool QDirModel_HasChildren(const QDirModel* self) {
	return self->hasChildren();
}

int QDirModel_Flags(const QDirModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

void QDirModel_Sort(QDirModel* self, int column) {
	self->sort(static_cast<int>(column));
}

struct miqt_array QDirModel_MimeTypes(const QDirModel* self) {
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

QMimeData* QDirModel_MimeData(const QDirModel* self, struct miqt_array /* of QModelIndex* */ indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QDirModel_DropMimeData(QDirModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QDirModel_SupportedDropActions(const QDirModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

void QDirModel_SetIconProvider(QDirModel* self, QFileIconProvider* provider) {
	self->setIconProvider(provider);
}

QFileIconProvider* QDirModel_IconProvider(const QDirModel* self) {
	return self->iconProvider();
}

void QDirModel_SetNameFilters(QDirModel* self, struct miqt_array /* of struct miqt_string */ filters) {
	QStringList filters_QList;
	filters_QList.reserve(filters.len);
	struct miqt_string* filters_arr = static_cast<struct miqt_string*>(filters.data);
	for(size_t i = 0; i < filters.len; ++i) {
		QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
		filters_QList.push_back(filters_arr_i_QString);
	}
	self->setNameFilters(filters_QList);
}

struct miqt_array QDirModel_NameFilters(const QDirModel* self) {
	QStringList _ret = self->nameFilters();
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

void QDirModel_SetFilter(QDirModel* self, int filters) {
	self->setFilter(static_cast<QDir::Filters>(filters));
}

int QDirModel_Filter(const QDirModel* self) {
	QDir::Filters _ret = self->filter();
	return static_cast<int>(_ret);
}

void QDirModel_SetSorting(QDirModel* self, int sort) {
	self->setSorting(static_cast<QDir::SortFlags>(sort));
}

int QDirModel_Sorting(const QDirModel* self) {
	QDir::SortFlags _ret = self->sorting();
	return static_cast<int>(_ret);
}

void QDirModel_SetResolveSymlinks(QDirModel* self, bool enable) {
	self->setResolveSymlinks(enable);
}

bool QDirModel_ResolveSymlinks(const QDirModel* self) {
	return self->resolveSymlinks();
}

void QDirModel_SetReadOnly(QDirModel* self, bool enable) {
	self->setReadOnly(enable);
}

bool QDirModel_IsReadOnly(const QDirModel* self) {
	return self->isReadOnly();
}

void QDirModel_SetLazyChildCount(QDirModel* self, bool enable) {
	self->setLazyChildCount(enable);
}

bool QDirModel_LazyChildCount(const QDirModel* self) {
	return self->lazyChildCount();
}

QModelIndex* QDirModel_IndexWithPath(const QDirModel* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QModelIndex(self->index(path_QString));
}

bool QDirModel_IsDir(const QDirModel* self, QModelIndex* index) {
	return self->isDir(*index);
}

QModelIndex* QDirModel_Mkdir(QDirModel* self, QModelIndex* parent, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QModelIndex(self->mkdir(*parent, name_QString));
}

bool QDirModel_Rmdir(QDirModel* self, QModelIndex* index) {
	return self->rmdir(*index);
}

bool QDirModel_Remove(QDirModel* self, QModelIndex* index) {
	return self->remove(*index);
}

struct miqt_string QDirModel_FilePath(const QDirModel* self, QModelIndex* index) {
	QString _ret = self->filePath(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDirModel_FileName(const QDirModel* self, QModelIndex* index) {
	QString _ret = self->fileName(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIcon* QDirModel_FileIcon(const QDirModel* self, QModelIndex* index) {
	return new QIcon(self->fileIcon(*index));
}

QFileInfo* QDirModel_FileInfo(const QDirModel* self, QModelIndex* index) {
	return new QFileInfo(self->fileInfo(*index));
}

void QDirModel_Refresh(QDirModel* self) {
	self->refresh();
}

struct miqt_string QDirModel_Tr2(const char* s, const char* c) {
	QString _ret = QDirModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDirModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDirModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDirModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QDirModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDirModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDirModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QDirModel_Index3(const QDirModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

int QDirModel_RowCount1(const QDirModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QDirModel_ColumnCount1(const QDirModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

QVariant* QDirModel_Data2(const QDirModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QDirModel_SetData3(QDirModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QDirModel_HeaderData3(const QDirModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QDirModel_HasChildren1(const QDirModel* self, QModelIndex* index) {
	return self->hasChildren(*index);
}

void QDirModel_Sort2(QDirModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

QModelIndex* QDirModel_Index2(const QDirModel* self, struct miqt_string path, int column) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QModelIndex(self->index(path_QString, static_cast<int>(column)));
}

void QDirModel_Refresh1(QDirModel* self, QModelIndex* parent) {
	self->refresh(*parent);
}

void QDirModel_Delete(QDirModel* self) {
	delete self;
}

