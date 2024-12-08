#pragma once
#ifndef MIQT_QT6_GEN_QTEXTTABLE_H
#define MIQT_QT6_GEN_QTEXTTABLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QTextCharFormat;
class QTextCursor;
class QTextDocument;
class QTextFrame;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextFrame__iterator)
typedef QTextFrame::iterator QTextFrame__iterator;
#else
class QTextFrame__iterator;
#endif
class QTextObject;
class QTextTable;
class QTextTableCell;
class QTextTableFormat;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextFrame QTextFrame;
typedef struct QTextFrame__iterator QTextFrame__iterator;
typedef struct QTextObject QTextObject;
typedef struct QTextTable QTextTable;
typedef struct QTextTableCell QTextTableCell;
typedef struct QTextTableFormat QTextTableFormat;
#endif

QTextTableCell* QTextTableCell_new();
QTextTableCell* QTextTableCell_new2(QTextTableCell* o);
void QTextTableCell_OperatorAssign(QTextTableCell* self, QTextTableCell* o);
void QTextTableCell_SetFormat(QTextTableCell* self, QTextCharFormat* format);
QTextCharFormat* QTextTableCell_Format(const QTextTableCell* self);
int QTextTableCell_Row(const QTextTableCell* self);
int QTextTableCell_Column(const QTextTableCell* self);
int QTextTableCell_RowSpan(const QTextTableCell* self);
int QTextTableCell_ColumnSpan(const QTextTableCell* self);
bool QTextTableCell_IsValid(const QTextTableCell* self);
QTextCursor* QTextTableCell_FirstCursorPosition(const QTextTableCell* self);
QTextCursor* QTextTableCell_LastCursorPosition(const QTextTableCell* self);
int QTextTableCell_FirstPosition(const QTextTableCell* self);
int QTextTableCell_LastPosition(const QTextTableCell* self);
bool QTextTableCell_OperatorEqual(const QTextTableCell* self, QTextTableCell* other);
bool QTextTableCell_OperatorNotEqual(const QTextTableCell* self, QTextTableCell* other);
QTextFrame__iterator* QTextTableCell_Begin(const QTextTableCell* self);
QTextFrame__iterator* QTextTableCell_End(const QTextTableCell* self);
int QTextTableCell_TableCellFormatIndex(const QTextTableCell* self);
void QTextTableCell_Delete(QTextTableCell* self, bool isSubclass);

QTextTable* QTextTable_new(QTextDocument* doc);
void QTextTable_virtbase(QTextTable* src, QTextFrame** outptr_QTextFrame);
QMetaObject* QTextTable_MetaObject(const QTextTable* self);
void* QTextTable_Metacast(QTextTable* self, const char* param1);
struct miqt_string QTextTable_Tr(const char* s);
void QTextTable_Resize(QTextTable* self, int rows, int cols);
void QTextTable_InsertRows(QTextTable* self, int pos, int num);
void QTextTable_InsertColumns(QTextTable* self, int pos, int num);
void QTextTable_AppendRows(QTextTable* self, int count);
void QTextTable_AppendColumns(QTextTable* self, int count);
void QTextTable_RemoveRows(QTextTable* self, int pos, int num);
void QTextTable_RemoveColumns(QTextTable* self, int pos, int num);
void QTextTable_MergeCells(QTextTable* self, int row, int col, int numRows, int numCols);
void QTextTable_MergeCellsWithCursor(QTextTable* self, QTextCursor* cursor);
void QTextTable_SplitCell(QTextTable* self, int row, int col, int numRows, int numCols);
int QTextTable_Rows(const QTextTable* self);
int QTextTable_Columns(const QTextTable* self);
QTextTableCell* QTextTable_CellAt(const QTextTable* self, int row, int col);
QTextTableCell* QTextTable_CellAtWithPosition(const QTextTable* self, int position);
QTextTableCell* QTextTable_CellAtWithQTextCursor(const QTextTable* self, QTextCursor* c);
QTextCursor* QTextTable_RowStart(const QTextTable* self, QTextCursor* c);
QTextCursor* QTextTable_RowEnd(const QTextTable* self, QTextCursor* c);
void QTextTable_SetFormat(QTextTable* self, QTextTableFormat* format);
QTextTableFormat* QTextTable_Format(const QTextTable* self);
struct miqt_string QTextTable_Tr2(const char* s, const char* c);
struct miqt_string QTextTable_Tr3(const char* s, const char* c, int n);
void QTextTable_Delete(QTextTable* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
