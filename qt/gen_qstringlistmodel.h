#ifndef GEN_QSTRINGLISTMODEL_H
#define GEN_QSTRINGLISTMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QModelIndex;
class QObject;
class QStringListModel;
class QVariant;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QStringListModel QStringListModel;
typedef struct QVariant QVariant;
#endif

QStringListModel* QStringListModel_new();
QStringListModel* QStringListModel_new2(char** strings, uint64_t* strings_Lengths, size_t strings_len);
QStringListModel* QStringListModel_new3(QObject* parent);
QStringListModel* QStringListModel_new4(char** strings, uint64_t* strings_Lengths, size_t strings_len, QObject* parent);
QMetaObject* QStringListModel_MetaObject(const QStringListModel* self);
void QStringListModel_Tr(const char* s, char** _out, int* _out_Strlen);
void QStringListModel_TrUtf8(const char* s, char** _out, int* _out_Strlen);
int QStringListModel_RowCount(const QStringListModel* self);
QModelIndex* QStringListModel_Sibling(const QStringListModel* self, int row, int column, QModelIndex* idx);
QVariant* QStringListModel_Data(const QStringListModel* self, QModelIndex* index);
bool QStringListModel_SetData(QStringListModel* self, QModelIndex* index, QVariant* value);
int QStringListModel_Flags(const QStringListModel* self, QModelIndex* index);
bool QStringListModel_InsertRows(QStringListModel* self, int row, int count);
bool QStringListModel_RemoveRows(QStringListModel* self, int row, int count);
bool QStringListModel_MoveRows(QStringListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
void QStringListModel_Sort(QStringListModel* self, int column);
void QStringListModel_StringList(const QStringListModel* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QStringListModel_SetStringList(QStringListModel* self, char** strings, uint64_t* strings_Lengths, size_t strings_len);
int QStringListModel_SupportedDropActions(const QStringListModel* self);
void QStringListModel_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QStringListModel_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QStringListModel_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QStringListModel_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
int QStringListModel_RowCount1(const QStringListModel* self, QModelIndex* parent);
QVariant* QStringListModel_Data2(const QStringListModel* self, QModelIndex* index, int role);
bool QStringListModel_SetData3(QStringListModel* self, QModelIndex* index, QVariant* value, int role);
bool QStringListModel_InsertRows3(QStringListModel* self, int row, int count, QModelIndex* parent);
bool QStringListModel_RemoveRows3(QStringListModel* self, int row, int count, QModelIndex* parent);
void QStringListModel_Sort2(QStringListModel* self, int column, uintptr_t order);
void QStringListModel_Delete(QStringListModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
