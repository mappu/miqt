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
#include "_cgo_export.h"

QSortFilterProxyModel* QSortFilterProxyModel_new() {
	return new QSortFilterProxyModel();
}

QSortFilterProxyModel* QSortFilterProxyModel_new2(QObject* parent) {
	return new QSortFilterProxyModel(parent);
}

QMetaObject* QSortFilterProxyModel_MetaObject(const QSortFilterProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QSortFilterProxyModel_Tr(const char* s) {
	QString _ret = QSortFilterProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSortFilterProxyModel_TrUtf8(const char* s) {
	QString _ret = QSortFilterProxyModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QSortFilterProxyModel_SetSourceModel(QSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
	self->setSourceModel(sourceModel);
}

QModelIndex* QSortFilterProxyModel_MapToSource(const QSortFilterProxyModel* self, QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QSortFilterProxyModel_MapFromSource(const QSortFilterProxyModel* self, QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QRegExp* QSortFilterProxyModel_FilterRegExp(const QSortFilterProxyModel* self) {
	return new QRegExp(self->filterRegExp());
}

QRegularExpression* QSortFilterProxyModel_FilterRegularExpression(const QSortFilterProxyModel* self) {
	return new QRegularExpression(self->filterRegularExpression());
}

int QSortFilterProxyModel_FilterKeyColumn(const QSortFilterProxyModel* self) {
	return self->filterKeyColumn();
}

void QSortFilterProxyModel_SetFilterKeyColumn(QSortFilterProxyModel* self, int column) {
	self->setFilterKeyColumn(static_cast<int>(column));
}

uintptr_t QSortFilterProxyModel_FilterCaseSensitivity(const QSortFilterProxyModel* self) {
	Qt::CaseSensitivity _ret = self->filterCaseSensitivity();
	return static_cast<uintptr_t>(_ret);
}

void QSortFilterProxyModel_SetFilterCaseSensitivity(QSortFilterProxyModel* self, uintptr_t cs) {
	self->setFilterCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

uintptr_t QSortFilterProxyModel_SortCaseSensitivity(const QSortFilterProxyModel* self) {
	Qt::CaseSensitivity _ret = self->sortCaseSensitivity();
	return static_cast<uintptr_t>(_ret);
}

void QSortFilterProxyModel_SetSortCaseSensitivity(QSortFilterProxyModel* self, uintptr_t cs) {
	self->setSortCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

bool QSortFilterProxyModel_IsSortLocaleAware(const QSortFilterProxyModel* self) {
	return self->isSortLocaleAware();
}

void QSortFilterProxyModel_SetSortLocaleAware(QSortFilterProxyModel* self, bool on) {
	self->setSortLocaleAware(on);
}

int QSortFilterProxyModel_SortColumn(const QSortFilterProxyModel* self) {
	return self->sortColumn();
}

uintptr_t QSortFilterProxyModel_SortOrder(const QSortFilterProxyModel* self) {
	Qt::SortOrder _ret = self->sortOrder();
	return static_cast<uintptr_t>(_ret);
}

bool QSortFilterProxyModel_DynamicSortFilter(const QSortFilterProxyModel* self) {
	return self->dynamicSortFilter();
}

void QSortFilterProxyModel_SetDynamicSortFilter(QSortFilterProxyModel* self, bool enable) {
	self->setDynamicSortFilter(enable);
}

int QSortFilterProxyModel_SortRole(const QSortFilterProxyModel* self) {
	return self->sortRole();
}

void QSortFilterProxyModel_SetSortRole(QSortFilterProxyModel* self, int role) {
	self->setSortRole(static_cast<int>(role));
}

int QSortFilterProxyModel_FilterRole(const QSortFilterProxyModel* self) {
	return self->filterRole();
}

void QSortFilterProxyModel_SetFilterRole(QSortFilterProxyModel* self, int role) {
	self->setFilterRole(static_cast<int>(role));
}

bool QSortFilterProxyModel_IsRecursiveFilteringEnabled(const QSortFilterProxyModel* self) {
	return self->isRecursiveFilteringEnabled();
}

void QSortFilterProxyModel_SetRecursiveFilteringEnabled(QSortFilterProxyModel* self, bool recursive) {
	self->setRecursiveFilteringEnabled(recursive);
}

void QSortFilterProxyModel_SetFilterRegExp(QSortFilterProxyModel* self, struct miqt_string* pattern) {
	QString pattern_QString = QString::fromUtf8(&pattern->data, pattern->len);
	self->setFilterRegExp(pattern_QString);
}

void QSortFilterProxyModel_SetFilterRegExpWithRegExp(QSortFilterProxyModel* self, QRegExp* regExp) {
	self->setFilterRegExp(*regExp);
}

void QSortFilterProxyModel_SetFilterRegularExpression(QSortFilterProxyModel* self, struct miqt_string* pattern) {
	QString pattern_QString = QString::fromUtf8(&pattern->data, pattern->len);
	self->setFilterRegularExpression(pattern_QString);
}

void QSortFilterProxyModel_SetFilterRegularExpressionWithRegularExpression(QSortFilterProxyModel* self, QRegularExpression* regularExpression) {
	self->setFilterRegularExpression(*regularExpression);
}

void QSortFilterProxyModel_SetFilterWildcard(QSortFilterProxyModel* self, struct miqt_string* pattern) {
	QString pattern_QString = QString::fromUtf8(&pattern->data, pattern->len);
	self->setFilterWildcard(pattern_QString);
}

void QSortFilterProxyModel_SetFilterFixedString(QSortFilterProxyModel* self, struct miqt_string* pattern) {
	QString pattern_QString = QString::fromUtf8(&pattern->data, pattern->len);
	self->setFilterFixedString(pattern_QString);
}

void QSortFilterProxyModel_Clear(QSortFilterProxyModel* self) {
	self->clear();
}

void QSortFilterProxyModel_Invalidate(QSortFilterProxyModel* self) {
	self->invalidate();
}

QModelIndex* QSortFilterProxyModel_Index(const QSortFilterProxyModel* self, int row, int column) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column)));
}

QModelIndex* QSortFilterProxyModel_Parent(const QSortFilterProxyModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

QModelIndex* QSortFilterProxyModel_Sibling(const QSortFilterProxyModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

int QSortFilterProxyModel_RowCount(const QSortFilterProxyModel* self) {
	return self->rowCount();
}

int QSortFilterProxyModel_ColumnCount(const QSortFilterProxyModel* self) {
	return self->columnCount();
}

bool QSortFilterProxyModel_HasChildren(const QSortFilterProxyModel* self) {
	return self->hasChildren();
}

QVariant* QSortFilterProxyModel_Data(const QSortFilterProxyModel* self, QModelIndex* index) {
	return new QVariant(self->data(*index));
}

bool QSortFilterProxyModel_SetData(QSortFilterProxyModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

QVariant* QSortFilterProxyModel_HeaderData(const QSortFilterProxyModel* self, int section, uintptr_t orientation) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation)));
}

bool QSortFilterProxyModel_SetHeaderData(QSortFilterProxyModel* self, int section, uintptr_t orientation, QVariant* value) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value);
}

QMimeData* QSortFilterProxyModel_MimeData(const QSortFilterProxyModel* self, struct miqt_array* /* of QModelIndex* */ indexes) {
	QList<QModelIndex> indexes_QList;
	indexes_QList.reserve(indexes->len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes->data);
	for(size_t i = 0; i < indexes->len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
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

bool QSortFilterProxyModel_CanFetchMore(const QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

int QSortFilterProxyModel_Flags(const QSortFilterProxyModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

QModelIndex* QSortFilterProxyModel_Buddy(const QSortFilterProxyModel* self, QModelIndex* index) {
	return new QModelIndex(self->buddy(*index));
}

struct miqt_array* QSortFilterProxyModel_Match(const QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value) {
	QModelIndexList _ret = self->match(*start, static_cast<int>(role), *value);
	// Convert QList<> from C++ memory to manually-managed C memory
	QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QModelIndex(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QSize* QSortFilterProxyModel_Span(const QSortFilterProxyModel* self, QModelIndex* index) {
	return new QSize(self->span(*index));
}

void QSortFilterProxyModel_Sort(QSortFilterProxyModel* self, int column) {
	self->sort(static_cast<int>(column));
}

struct miqt_array* QSortFilterProxyModel_MimeTypes(const QSortFilterProxyModel* self) {
	QStringList _ret = self->mimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

int QSortFilterProxyModel_SupportedDropActions(const QSortFilterProxyModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

void QSortFilterProxyModel_DynamicSortFilterChanged(QSortFilterProxyModel* self, bool dynamicSortFilter) {
	self->dynamicSortFilterChanged(dynamicSortFilter);
}

void QSortFilterProxyModel_connect_DynamicSortFilterChanged(QSortFilterProxyModel* self, void* slot) {
	QSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::dynamicSortFilterChanged), self, [=](bool dynamicSortFilter) {
		bool sigval1 = dynamicSortFilter;
		miqt_exec_callback_QSortFilterProxyModel_DynamicSortFilterChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, uintptr_t filterCaseSensitivity) {
	self->filterCaseSensitivityChanged(static_cast<Qt::CaseSensitivity>(filterCaseSensitivity));
}

void QSortFilterProxyModel_connect_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, void* slot) {
	QSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(Qt::CaseSensitivity)>(&QSortFilterProxyModel::filterCaseSensitivityChanged), self, [=](Qt::CaseSensitivity filterCaseSensitivity) {
		Qt::CaseSensitivity filterCaseSensitivity_ret = filterCaseSensitivity;
		uintptr_t sigval1 = static_cast<uintptr_t>(filterCaseSensitivity_ret);
		miqt_exec_callback_QSortFilterProxyModel_FilterCaseSensitivityChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_SortCaseSensitivityChanged(QSortFilterProxyModel* self, uintptr_t sortCaseSensitivity) {
	self->sortCaseSensitivityChanged(static_cast<Qt::CaseSensitivity>(sortCaseSensitivity));
}

void QSortFilterProxyModel_connect_SortCaseSensitivityChanged(QSortFilterProxyModel* self, void* slot) {
	QSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(Qt::CaseSensitivity)>(&QSortFilterProxyModel::sortCaseSensitivityChanged), self, [=](Qt::CaseSensitivity sortCaseSensitivity) {
		Qt::CaseSensitivity sortCaseSensitivity_ret = sortCaseSensitivity;
		uintptr_t sigval1 = static_cast<uintptr_t>(sortCaseSensitivity_ret);
		miqt_exec_callback_QSortFilterProxyModel_SortCaseSensitivityChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_SortLocaleAwareChanged(QSortFilterProxyModel* self, bool sortLocaleAware) {
	self->sortLocaleAwareChanged(sortLocaleAware);
}

void QSortFilterProxyModel_connect_SortLocaleAwareChanged(QSortFilterProxyModel* self, void* slot) {
	QSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::sortLocaleAwareChanged), self, [=](bool sortLocaleAware) {
		bool sigval1 = sortLocaleAware;
		miqt_exec_callback_QSortFilterProxyModel_SortLocaleAwareChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_SortRoleChanged(QSortFilterProxyModel* self, int sortRole) {
	self->sortRoleChanged(static_cast<int>(sortRole));
}

void QSortFilterProxyModel_connect_SortRoleChanged(QSortFilterProxyModel* self, void* slot) {
	QSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(int)>(&QSortFilterProxyModel::sortRoleChanged), self, [=](int sortRole) {
		int sigval1 = sortRole;
		miqt_exec_callback_QSortFilterProxyModel_SortRoleChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_FilterRoleChanged(QSortFilterProxyModel* self, int filterRole) {
	self->filterRoleChanged(static_cast<int>(filterRole));
}

void QSortFilterProxyModel_connect_FilterRoleChanged(QSortFilterProxyModel* self, void* slot) {
	QSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(int)>(&QSortFilterProxyModel::filterRoleChanged), self, [=](int filterRole) {
		int sigval1 = filterRole;
		miqt_exec_callback_QSortFilterProxyModel_FilterRoleChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, bool recursiveFilteringEnabled) {
	self->recursiveFilteringEnabledChanged(recursiveFilteringEnabled);
}

void QSortFilterProxyModel_connect_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, void* slot) {
	QSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::recursiveFilteringEnabledChanged), self, [=](bool recursiveFilteringEnabled) {
		bool sigval1 = recursiveFilteringEnabled;
		miqt_exec_callback_QSortFilterProxyModel_RecursiveFilteringEnabledChanged(slot, sigval1);
	});
}

struct miqt_string* QSortFilterProxyModel_Tr2(const char* s, const char* c) {
	QString _ret = QSortFilterProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSortFilterProxyModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSortFilterProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSortFilterProxyModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QSortFilterProxyModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSortFilterProxyModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSortFilterProxyModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QModelIndex* QSortFilterProxyModel_Index3(const QSortFilterProxyModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

int QSortFilterProxyModel_RowCount1(const QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QSortFilterProxyModel_ColumnCount1(const QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

bool QSortFilterProxyModel_HasChildren1(const QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QVariant* QSortFilterProxyModel_Data2(const QSortFilterProxyModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QSortFilterProxyModel_SetData3(QSortFilterProxyModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QSortFilterProxyModel_HeaderData3(const QSortFilterProxyModel* self, int section, uintptr_t orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
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

struct miqt_array* QSortFilterProxyModel_Match4(const QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits) {
	QModelIndexList _ret = self->match(*start, static_cast<int>(role), *value, static_cast<int>(hits));
	// Convert QList<> from C++ memory to manually-managed C memory
	QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QModelIndex(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QSortFilterProxyModel_Match5(const QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = self->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QModelIndex(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QSortFilterProxyModel_Sort2(QSortFilterProxyModel* self, int column, uintptr_t order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QSortFilterProxyModel_Delete(QSortFilterProxyModel* self) {
	delete self;
}

