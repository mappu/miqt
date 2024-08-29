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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QStringListModel* QStringListModel_new() {
	return new QStringListModel();
}

QStringListModel* QStringListModel_new2(char** strings, uint64_t* strings_Lengths, size_t strings_len) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings_len);
	for(size_t i = 0; i < strings_len; ++i) {
		strings_QList.push_back(QString::fromUtf8(strings[i], strings_Lengths[i]));
	}
	return new QStringListModel(strings_QList);
}

QStringListModel* QStringListModel_new3(QObject* parent) {
	return new QStringListModel(parent);
}

QStringListModel* QStringListModel_new4(char** strings, uint64_t* strings_Lengths, size_t strings_len, QObject* parent) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings_len);
	for(size_t i = 0; i < strings_len; ++i) {
		strings_QList.push_back(QString::fromUtf8(strings[i], strings_Lengths[i]));
	}
	return new QStringListModel(strings_QList, parent);
}

QMetaObject* QStringListModel_MetaObject(QStringListModel* self) {
	return (QMetaObject*) const_cast<const QStringListModel*>(self)->metaObject();
}

void QStringListModel_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QStringListModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStringListModel_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QStringListModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QStringListModel_RowCount(QStringListModel* self) {
	return const_cast<const QStringListModel*>(self)->rowCount();
}

QModelIndex* QStringListModel_Sibling(QStringListModel* self, int row, int column, QModelIndex* idx) {
	QModelIndex ret = const_cast<const QStringListModel*>(self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QVariant* QStringListModel_Data(QStringListModel* self, QModelIndex* index) {
	QVariant ret = const_cast<const QStringListModel*>(self)->data(*index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

bool QStringListModel_SetData(QStringListModel* self, QModelIndex* index, QVariant* value) {
	return self->setData(*index, *value);
}

int QStringListModel_Flags(QStringListModel* self, QModelIndex* index) {
	Qt::ItemFlags ret = const_cast<const QStringListModel*>(self)->flags(*index);
	return static_cast<int>(ret);
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

void QStringListModel_StringList(QStringListModel* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QStringListModel*>(self)->stringList();
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

void QStringListModel_SetStringList(QStringListModel* self, char** strings, uint64_t* strings_Lengths, size_t strings_len) {
	QList<QString> strings_QList;
	strings_QList.reserve(strings_len);
	for(size_t i = 0; i < strings_len; ++i) {
		strings_QList.push_back(QString::fromUtf8(strings[i], strings_Lengths[i]));
	}
	self->setStringList(strings_QList);
}

int QStringListModel_SupportedDropActions(QStringListModel* self) {
	Qt::DropActions ret = const_cast<const QStringListModel*>(self)->supportedDropActions();
	return static_cast<int>(ret);
}

void QStringListModel_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStringListModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStringListModel_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStringListModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStringListModel_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStringListModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStringListModel_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStringListModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QStringListModel_RowCount1(QStringListModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

QVariant* QStringListModel_Data2(QStringListModel* self, QModelIndex* index, int role) {
	QVariant ret = self->data(*index, static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
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

