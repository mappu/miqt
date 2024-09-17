#include <QList>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringListModel>
#include <QVariant>
#include "qstringlistmodel.h"
#include "gen_qstringlistmodel.h"
#include "_cgo_export.h"

QStringListModel* QStringListModel_new() {
	return new QStringListModel();
}

QStringListModel* QStringListModel_new2(struct miqt_array* /* of struct miqt_string* */ strings) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings->len);
	struct miqt_string** strings_arr = static_cast<struct miqt_string**>(strings->data);
	for(size_t i = 0; i < strings->len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(&strings_arr[i]->data, strings_arr[i]->len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	return new QStringListModel(strings_QList);
}

QStringListModel* QStringListModel_new3(QObject* parent) {
	return new QStringListModel(parent);
}

QStringListModel* QStringListModel_new4(struct miqt_array* /* of struct miqt_string* */ strings, QObject* parent) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings->len);
	struct miqt_string** strings_arr = static_cast<struct miqt_string**>(strings->data);
	for(size_t i = 0; i < strings->len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(&strings_arr[i]->data, strings_arr[i]->len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	return new QStringListModel(strings_QList, parent);
}

QMetaObject* QStringListModel_MetaObject(const QStringListModel* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QStringListModel_Tr(const char* s) {
	QString _ret = QStringListModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStringListModel_TrUtf8(const char* s) {
	QString _ret = QStringListModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QStringListModel_RowCount(const QStringListModel* self) {
	return self->rowCount();
}

QModelIndex* QStringListModel_Sibling(const QStringListModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

QVariant* QStringListModel_Data(const QStringListModel* self, QModelIndex* index) {
	return new QVariant(self->data(*index));
}

bool QStringListModel_SetData(QStringListModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

int QStringListModel_Flags(const QStringListModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

bool QStringListModel_InsertRows(QStringListModel* self, int row, int count) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count));
}

bool QStringListModel_RemoveRows(QStringListModel* self, int row, int count) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count));
}

bool QStringListModel_MoveRows(QStringListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

void QStringListModel_Sort(QStringListModel* self, int column) {
	self->sort(static_cast<int>(column));
}

struct miqt_array* QStringListModel_StringList(const QStringListModel* self) {
	QStringList _ret = self->stringList();
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

void QStringListModel_SetStringList(QStringListModel* self, struct miqt_array* /* of struct miqt_string* */ strings) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings->len);
	struct miqt_string** strings_arr = static_cast<struct miqt_string**>(strings->data);
	for(size_t i = 0; i < strings->len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(&strings_arr[i]->data, strings_arr[i]->len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	self->setStringList(strings_QList);
}

int QStringListModel_SupportedDropActions(const QStringListModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

struct miqt_string* QStringListModel_Tr2(const char* s, const char* c) {
	QString _ret = QStringListModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStringListModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStringListModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStringListModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QStringListModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStringListModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QStringListModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QStringListModel_RowCount1(const QStringListModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

QVariant* QStringListModel_Data2(const QStringListModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QStringListModel_SetData3(QStringListModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

bool QStringListModel_InsertRows3(QStringListModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QStringListModel_RemoveRows3(QStringListModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

void QStringListModel_Sort2(QStringListModel* self, int column, uintptr_t order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QStringListModel_Delete(QStringListModel* self) {
	delete self;
}

