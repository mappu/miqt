#include "gen_qsortfilterproxymodel.h"
#include "qsortfilterproxymodel.h"

#include <QAbstractItemModel>
#include <QList>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QRegExp>
#include <QRegularExpression>
#include <QSize>
#include <QSortFilterProxyModel>
#include <QString>
#include <QVariant>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSortFilterProxyModel* QSortFilterProxyModel_new() {
	return new QSortFilterProxyModel();
}

QSortFilterProxyModel* QSortFilterProxyModel_new2(QObject* parent) {
	return new QSortFilterProxyModel(parent);
}

QMetaObject* QSortFilterProxyModel_MetaObject(QSortFilterProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

void QSortFilterProxyModel_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSortFilterProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSortFilterProxyModel_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSortFilterProxyModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSortFilterProxyModel_SetSourceModel(QSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
	self->setSourceModel(sourceModel);
}

QModelIndex* QSortFilterProxyModel_MapToSource(QSortFilterProxyModel* self, QModelIndex* proxyIndex) {
	QModelIndex ret = self->mapToSource(*proxyIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QSortFilterProxyModel_MapFromSource(QSortFilterProxyModel* self, QModelIndex* sourceIndex) {
	QModelIndex ret = self->mapFromSource(*sourceIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QRegExp* QSortFilterProxyModel_FilterRegExp(QSortFilterProxyModel* self) {
	QRegExp ret = self->filterRegExp();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegExp*>(new QRegExp(ret));
}

QRegularExpression* QSortFilterProxyModel_FilterRegularExpression(QSortFilterProxyModel* self) {
	QRegularExpression ret = self->filterRegularExpression();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(ret));
}

int QSortFilterProxyModel_FilterKeyColumn(QSortFilterProxyModel* self) {
	return self->filterKeyColumn();
}

void QSortFilterProxyModel_SetFilterKeyColumn(QSortFilterProxyModel* self, int column) {
	self->setFilterKeyColumn(static_cast<int>(column));
}

bool QSortFilterProxyModel_IsSortLocaleAware(QSortFilterProxyModel* self) {
	return self->isSortLocaleAware();
}

void QSortFilterProxyModel_SetSortLocaleAware(QSortFilterProxyModel* self, bool on) {
	self->setSortLocaleAware(on);
}

int QSortFilterProxyModel_SortColumn(QSortFilterProxyModel* self) {
	return self->sortColumn();
}

bool QSortFilterProxyModel_DynamicSortFilter(QSortFilterProxyModel* self) {
	return self->dynamicSortFilter();
}

void QSortFilterProxyModel_SetDynamicSortFilter(QSortFilterProxyModel* self, bool enable) {
	self->setDynamicSortFilter(enable);
}

int QSortFilterProxyModel_SortRole(QSortFilterProxyModel* self) {
	return self->sortRole();
}

void QSortFilterProxyModel_SetSortRole(QSortFilterProxyModel* self, int role) {
	self->setSortRole(static_cast<int>(role));
}

int QSortFilterProxyModel_FilterRole(QSortFilterProxyModel* self) {
	return self->filterRole();
}

void QSortFilterProxyModel_SetFilterRole(QSortFilterProxyModel* self, int role) {
	self->setFilterRole(static_cast<int>(role));
}

bool QSortFilterProxyModel_IsRecursiveFilteringEnabled(QSortFilterProxyModel* self) {
	return self->isRecursiveFilteringEnabled();
}

void QSortFilterProxyModel_SetRecursiveFilteringEnabled(QSortFilterProxyModel* self, bool recursive) {
	self->setRecursiveFilteringEnabled(recursive);
}

void QSortFilterProxyModel_SetFilterRegExp(QSortFilterProxyModel* self, const char* pattern, size_t pattern_Strlen) {
	QString pattern_QString = QString::fromUtf8(pattern, pattern_Strlen);
	self->setFilterRegExp(pattern_QString);
}

void QSortFilterProxyModel_SetFilterRegExpWithRegExp(QSortFilterProxyModel* self, QRegExp* regExp) {
	self->setFilterRegExp(*regExp);
}

void QSortFilterProxyModel_SetFilterRegularExpression(QSortFilterProxyModel* self, const char* pattern, size_t pattern_Strlen) {
	QString pattern_QString = QString::fromUtf8(pattern, pattern_Strlen);
	self->setFilterRegularExpression(pattern_QString);
}

void QSortFilterProxyModel_SetFilterRegularExpressionWithRegularExpression(QSortFilterProxyModel* self, QRegularExpression* regularExpression) {
	self->setFilterRegularExpression(*regularExpression);
}

void QSortFilterProxyModel_SetFilterWildcard(QSortFilterProxyModel* self, const char* pattern, size_t pattern_Strlen) {
	QString pattern_QString = QString::fromUtf8(pattern, pattern_Strlen);
	self->setFilterWildcard(pattern_QString);
}

void QSortFilterProxyModel_SetFilterFixedString(QSortFilterProxyModel* self, const char* pattern, size_t pattern_Strlen) {
	QString pattern_QString = QString::fromUtf8(pattern, pattern_Strlen);
	self->setFilterFixedString(pattern_QString);
}

void QSortFilterProxyModel_Clear(QSortFilterProxyModel* self) {
	self->clear();
}

void QSortFilterProxyModel_Invalidate(QSortFilterProxyModel* self) {
	self->invalidate();
}

QModelIndex* QSortFilterProxyModel_Index(QSortFilterProxyModel* self, int row, int column) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QSortFilterProxyModel_Parent(QSortFilterProxyModel* self, QModelIndex* child) {
	QModelIndex ret = self->parent(*child);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QSortFilterProxyModel_Sibling(QSortFilterProxyModel* self, int row, int column, QModelIndex* idx) {
	QModelIndex ret = self->sibling(static_cast<int>(row), static_cast<int>(column), *idx);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

int QSortFilterProxyModel_RowCount(QSortFilterProxyModel* self) {
	return self->rowCount();
}

int QSortFilterProxyModel_ColumnCount(QSortFilterProxyModel* self) {
	return self->columnCount();
}

bool QSortFilterProxyModel_HasChildren(QSortFilterProxyModel* self) {
	return self->hasChildren();
}

QVariant* QSortFilterProxyModel_Data(QSortFilterProxyModel* self, QModelIndex* index) {
	QVariant ret = self->data(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QSortFilterProxyModel_SetData(QSortFilterProxyModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

QMimeData* QSortFilterProxyModel_MimeData(QSortFilterProxyModel* self, QModelIndex** indexes, size_t indexes_len) {
	QList<QModelIndex> indexes_QList;
	indexes_QList.reserve(indexes_len);
	for(size_t i = 0; i < indexes_len; ++i) {
		indexes_QList.push_back(*(indexes[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QSortFilterProxyModel_InsertRows(QSortFilterProxyModel* self, int row, int count) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count));
}

bool QSortFilterProxyModel_InsertColumns(QSortFilterProxyModel* self, int column, int count) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count));
}

bool QSortFilterProxyModel_RemoveRows(QSortFilterProxyModel* self, int row, int count) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count));
}

bool QSortFilterProxyModel_RemoveColumns(QSortFilterProxyModel* self, int column, int count) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count));
}

void QSortFilterProxyModel_FetchMore(QSortFilterProxyModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

bool QSortFilterProxyModel_CanFetchMore(QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

QModelIndex* QSortFilterProxyModel_Buddy(QSortFilterProxyModel* self, QModelIndex* index) {
	QModelIndex ret = self->buddy(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QSize* QSortFilterProxyModel_Span(QSortFilterProxyModel* self, QModelIndex* index) {
	QSize ret = self->span(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QSortFilterProxyModel_MimeTypes(QSortFilterProxyModel* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->mimeTypes();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QSortFilterProxyModel_DynamicSortFilterChanged(QSortFilterProxyModel* self, bool dynamicSortFilter) {
	self->dynamicSortFilterChanged(dynamicSortFilter);
}

void QSortFilterProxyModel_connect_DynamicSortFilterChanged(QSortFilterProxyModel* self, void* slot) {
	QSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::dynamicSortFilterChanged), self, [=](bool dynamicSortFilter) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSortFilterProxyModel_SortLocaleAwareChanged(QSortFilterProxyModel* self, bool sortLocaleAware) {
	self->sortLocaleAwareChanged(sortLocaleAware);
}

void QSortFilterProxyModel_connect_SortLocaleAwareChanged(QSortFilterProxyModel* self, void* slot) {
	QSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::sortLocaleAwareChanged), self, [=](bool sortLocaleAware) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSortFilterProxyModel_SortRoleChanged(QSortFilterProxyModel* self, int sortRole) {
	self->sortRoleChanged(static_cast<int>(sortRole));
}

void QSortFilterProxyModel_connect_SortRoleChanged(QSortFilterProxyModel* self, void* slot) {
	QSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(int)>(&QSortFilterProxyModel::sortRoleChanged), self, [=](int sortRole) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSortFilterProxyModel_FilterRoleChanged(QSortFilterProxyModel* self, int filterRole) {
	self->filterRoleChanged(static_cast<int>(filterRole));
}

void QSortFilterProxyModel_connect_FilterRoleChanged(QSortFilterProxyModel* self, void* slot) {
	QSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(int)>(&QSortFilterProxyModel::filterRoleChanged), self, [=](int filterRole) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSortFilterProxyModel_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, bool recursiveFilteringEnabled) {
	self->recursiveFilteringEnabledChanged(recursiveFilteringEnabled);
}

void QSortFilterProxyModel_connect_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, void* slot) {
	QSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::recursiveFilteringEnabledChanged), self, [=](bool recursiveFilteringEnabled) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSortFilterProxyModel_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSortFilterProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSortFilterProxyModel_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSortFilterProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSortFilterProxyModel_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSortFilterProxyModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSortFilterProxyModel_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSortFilterProxyModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QModelIndex* QSortFilterProxyModel_Index3(QSortFilterProxyModel* self, int row, int column, QModelIndex* parent) {
	QModelIndex ret = self->index(static_cast<int>(row), static_cast<int>(column), *parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

int QSortFilterProxyModel_RowCount1(QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QSortFilterProxyModel_ColumnCount1(QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

bool QSortFilterProxyModel_HasChildren1(QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QVariant* QSortFilterProxyModel_Data2(QSortFilterProxyModel* self, QModelIndex* index, int role) {
	QVariant ret = self->data(*index, static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QSortFilterProxyModel_SetData3(QSortFilterProxyModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

bool QSortFilterProxyModel_InsertRows3(QSortFilterProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSortFilterProxyModel_InsertColumns3(QSortFilterProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QSortFilterProxyModel_RemoveRows3(QSortFilterProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSortFilterProxyModel_RemoveColumns3(QSortFilterProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

void QSortFilterProxyModel_Delete(QSortFilterProxyModel* self) {
	delete self;
}

