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
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include "qsortfilterproxymodel.h"

#include "gen_qsortfilterproxymodel.h"

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
	return (QMetaObject*) const_cast<const QSortFilterProxyModel*>(self)->metaObject();
}

void QSortFilterProxyModel_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSortFilterProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSortFilterProxyModel_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
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
	QModelIndex ret = const_cast<const QSortFilterProxyModel*>(self)->mapToSource(*proxyIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QSortFilterProxyModel_MapFromSource(QSortFilterProxyModel* self, QModelIndex* sourceIndex) {
	QModelIndex ret = const_cast<const QSortFilterProxyModel*>(self)->mapFromSource(*sourceIndex);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QRegExp* QSortFilterProxyModel_FilterRegExp(QSortFilterProxyModel* self) {
	QRegExp ret = const_cast<const QSortFilterProxyModel*>(self)->filterRegExp();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegExp*>(new QRegExp(ret));
}

QRegularExpression* QSortFilterProxyModel_FilterRegularExpression(QSortFilterProxyModel* self) {
	QRegularExpression ret = const_cast<const QSortFilterProxyModel*>(self)->filterRegularExpression();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(ret));
}

int QSortFilterProxyModel_FilterKeyColumn(QSortFilterProxyModel* self) {
	return const_cast<const QSortFilterProxyModel*>(self)->filterKeyColumn();
}

void QSortFilterProxyModel_SetFilterKeyColumn(QSortFilterProxyModel* self, int column) {
	self->setFilterKeyColumn(static_cast<int>(column));
}

uintptr_t QSortFilterProxyModel_FilterCaseSensitivity(QSortFilterProxyModel* self) {
	Qt::CaseSensitivity ret = const_cast<const QSortFilterProxyModel*>(self)->filterCaseSensitivity();
	return static_cast<uintptr_t>(ret);
}

void QSortFilterProxyModel_SetFilterCaseSensitivity(QSortFilterProxyModel* self, uintptr_t cs) {
	self->setFilterCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

uintptr_t QSortFilterProxyModel_SortCaseSensitivity(QSortFilterProxyModel* self) {
	Qt::CaseSensitivity ret = const_cast<const QSortFilterProxyModel*>(self)->sortCaseSensitivity();
	return static_cast<uintptr_t>(ret);
}

void QSortFilterProxyModel_SetSortCaseSensitivity(QSortFilterProxyModel* self, uintptr_t cs) {
	self->setSortCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

bool QSortFilterProxyModel_IsSortLocaleAware(QSortFilterProxyModel* self) {
	return const_cast<const QSortFilterProxyModel*>(self)->isSortLocaleAware();
}

void QSortFilterProxyModel_SetSortLocaleAware(QSortFilterProxyModel* self, bool on) {
	self->setSortLocaleAware(on);
}

int QSortFilterProxyModel_SortColumn(QSortFilterProxyModel* self) {
	return const_cast<const QSortFilterProxyModel*>(self)->sortColumn();
}

uintptr_t QSortFilterProxyModel_SortOrder(QSortFilterProxyModel* self) {
	Qt::SortOrder ret = const_cast<const QSortFilterProxyModel*>(self)->sortOrder();
	return static_cast<uintptr_t>(ret);
}

bool QSortFilterProxyModel_DynamicSortFilter(QSortFilterProxyModel* self) {
	return const_cast<const QSortFilterProxyModel*>(self)->dynamicSortFilter();
}

void QSortFilterProxyModel_SetDynamicSortFilter(QSortFilterProxyModel* self, bool enable) {
	self->setDynamicSortFilter(enable);
}

int QSortFilterProxyModel_SortRole(QSortFilterProxyModel* self) {
	return const_cast<const QSortFilterProxyModel*>(self)->sortRole();
}

void QSortFilterProxyModel_SetSortRole(QSortFilterProxyModel* self, int role) {
	self->setSortRole(static_cast<int>(role));
}

int QSortFilterProxyModel_FilterRole(QSortFilterProxyModel* self) {
	return const_cast<const QSortFilterProxyModel*>(self)->filterRole();
}

void QSortFilterProxyModel_SetFilterRole(QSortFilterProxyModel* self, int role) {
	self->setFilterRole(static_cast<int>(role));
}

bool QSortFilterProxyModel_IsRecursiveFilteringEnabled(QSortFilterProxyModel* self) {
	return const_cast<const QSortFilterProxyModel*>(self)->isRecursiveFilteringEnabled();
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
	QModelIndex ret = const_cast<const QSortFilterProxyModel*>(self)->index(static_cast<int>(row), static_cast<int>(column));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QSortFilterProxyModel_Parent(QSortFilterProxyModel* self, QModelIndex* child) {
	QModelIndex ret = const_cast<const QSortFilterProxyModel*>(self)->parent(*child);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QModelIndex* QSortFilterProxyModel_Sibling(QSortFilterProxyModel* self, int row, int column, QModelIndex* idx) {
	QModelIndex ret = const_cast<const QSortFilterProxyModel*>(self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

int QSortFilterProxyModel_RowCount(QSortFilterProxyModel* self) {
	return const_cast<const QSortFilterProxyModel*>(self)->rowCount();
}

int QSortFilterProxyModel_ColumnCount(QSortFilterProxyModel* self) {
	return const_cast<const QSortFilterProxyModel*>(self)->columnCount();
}

bool QSortFilterProxyModel_HasChildren(QSortFilterProxyModel* self) {
	return const_cast<const QSortFilterProxyModel*>(self)->hasChildren();
}

QVariant* QSortFilterProxyModel_Data(QSortFilterProxyModel* self, QModelIndex* index) {
	QVariant ret = const_cast<const QSortFilterProxyModel*>(self)->data(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QSortFilterProxyModel_SetData(QSortFilterProxyModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

QVariant* QSortFilterProxyModel_HeaderData(QSortFilterProxyModel* self, int section, uintptr_t orientation) {
	QVariant ret = const_cast<const QSortFilterProxyModel*>(self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QSortFilterProxyModel_SetHeaderData(QSortFilterProxyModel* self, int section, uintptr_t orientation, QVariant* value) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value);
}

QMimeData* QSortFilterProxyModel_MimeData(QSortFilterProxyModel* self, QModelIndex** indexes, size_t indexes_len) {
	QList<QModelIndex> indexes_QList;
	indexes_QList.reserve(indexes_len);
	for(size_t i = 0; i < indexes_len; ++i) {
		indexes_QList.push_back(*(indexes[i]));
	}
	return const_cast<const QSortFilterProxyModel*>(self)->mimeData(indexes_QList);
}

bool QSortFilterProxyModel_DropMimeData(QSortFilterProxyModel* self, QMimeData* data, uintptr_t action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
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
	return const_cast<const QSortFilterProxyModel*>(self)->canFetchMore(*parent);
}

int QSortFilterProxyModel_Flags(QSortFilterProxyModel* self, QModelIndex* index) {
	Qt::ItemFlags ret = const_cast<const QSortFilterProxyModel*>(self)->flags(*index);
	return static_cast<int>(ret);
}

QModelIndex* QSortFilterProxyModel_Buddy(QSortFilterProxyModel* self, QModelIndex* index) {
	QModelIndex ret = const_cast<const QSortFilterProxyModel*>(self)->buddy(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

void QSortFilterProxyModel_Match(QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, QModelIndex*** _out, size_t* _out_len) {
	QModelIndexList ret = const_cast<const QSortFilterProxyModel*>(self)->match(*start, static_cast<int>(role), *value);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QModelIndex** __out = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QModelIndex(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

QSize* QSortFilterProxyModel_Span(QSortFilterProxyModel* self, QModelIndex* index) {
	QSize ret = const_cast<const QSortFilterProxyModel*>(self)->span(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QSortFilterProxyModel_Sort(QSortFilterProxyModel* self, int column) {
	self->sort(static_cast<int>(column));
}

void QSortFilterProxyModel_MimeTypes(QSortFilterProxyModel* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QSortFilterProxyModel*>(self)->mimeTypes();
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

int QSortFilterProxyModel_SupportedDropActions(QSortFilterProxyModel* self) {
	Qt::DropActions ret = const_cast<const QSortFilterProxyModel*>(self)->supportedDropActions();
	return static_cast<int>(ret);
}

void QSortFilterProxyModel_DynamicSortFilterChanged(QSortFilterProxyModel* self, bool dynamicSortFilter) {
	self->dynamicSortFilterChanged(dynamicSortFilter);
}

void QSortFilterProxyModel_connect_DynamicSortFilterChanged(QSortFilterProxyModel* self, void* slot) {
	QSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::dynamicSortFilterChanged), self, [=](bool dynamicSortFilter) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSortFilterProxyModel_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, uintptr_t filterCaseSensitivity) {
	self->filterCaseSensitivityChanged(static_cast<Qt::CaseSensitivity>(filterCaseSensitivity));
}

void QSortFilterProxyModel_connect_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, void* slot) {
	QSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(Qt::CaseSensitivity)>(&QSortFilterProxyModel::filterCaseSensitivityChanged), self, [=](Qt::CaseSensitivity filterCaseSensitivity) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSortFilterProxyModel_SortCaseSensitivityChanged(QSortFilterProxyModel* self, uintptr_t sortCaseSensitivity) {
	self->sortCaseSensitivityChanged(static_cast<Qt::CaseSensitivity>(sortCaseSensitivity));
}

void QSortFilterProxyModel_connect_SortCaseSensitivityChanged(QSortFilterProxyModel* self, void* slot) {
	QSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(Qt::CaseSensitivity)>(&QSortFilterProxyModel::sortCaseSensitivityChanged), self, [=](Qt::CaseSensitivity sortCaseSensitivity) {
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

void QSortFilterProxyModel_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSortFilterProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSortFilterProxyModel_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSortFilterProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSortFilterProxyModel_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSortFilterProxyModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSortFilterProxyModel_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSortFilterProxyModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QModelIndex* QSortFilterProxyModel_Index3(QSortFilterProxyModel* self, int row, int column, QModelIndex* parent) {
	QModelIndex ret = const_cast<const QSortFilterProxyModel*>(self)->index(static_cast<int>(row), static_cast<int>(column), *parent);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

int QSortFilterProxyModel_RowCount1(QSortFilterProxyModel* self, QModelIndex* parent) {
	return const_cast<const QSortFilterProxyModel*>(self)->rowCount(*parent);
}

int QSortFilterProxyModel_ColumnCount1(QSortFilterProxyModel* self, QModelIndex* parent) {
	return const_cast<const QSortFilterProxyModel*>(self)->columnCount(*parent);
}

bool QSortFilterProxyModel_HasChildren1(QSortFilterProxyModel* self, QModelIndex* parent) {
	return const_cast<const QSortFilterProxyModel*>(self)->hasChildren(*parent);
}

QVariant* QSortFilterProxyModel_Data2(QSortFilterProxyModel* self, QModelIndex* index, int role) {
	QVariant ret = const_cast<const QSortFilterProxyModel*>(self)->data(*index, static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QSortFilterProxyModel_SetData3(QSortFilterProxyModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QSortFilterProxyModel_HeaderData3(QSortFilterProxyModel* self, int section, uintptr_t orientation, int role) {
	QVariant ret = const_cast<const QSortFilterProxyModel*>(self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QSortFilterProxyModel_SetHeaderData4(QSortFilterProxyModel* self, int section, uintptr_t orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
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

void QSortFilterProxyModel_Match4(QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, QModelIndex*** _out, size_t* _out_len) {
	QModelIndexList ret = const_cast<const QSortFilterProxyModel*>(self)->match(*start, static_cast<int>(role), *value, static_cast<int>(hits));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QModelIndex** __out = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QModelIndex(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QSortFilterProxyModel_Match5(QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags, QModelIndex*** _out, size_t* _out_len) {
	QModelIndexList ret = const_cast<const QSortFilterProxyModel*>(self)->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QModelIndex** __out = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QModelIndex(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QSortFilterProxyModel_Sort2(QSortFilterProxyModel* self, int column, uintptr_t order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QSortFilterProxyModel_Delete(QSortFilterProxyModel* self) {
	delete self;
}

