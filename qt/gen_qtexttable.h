#ifndef GEN_QTEXTTABLE_H
#define GEN_QTEXTTABLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QTextCharFormat;
class QTextCursor;
class QTextDocument;
class QTextTable;
class QTextTableCell;
class QTextTableFormat;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextTable QTextTable;
typedef struct QTextTableCell QTextTableCell;
typedef struct QTextTableFormat QTextTableFormat;
#endif

QTextTableCell* QTextTableCell_new();
QTextTableCell* QTextTableCell_new2(QTextTableCell* o);
void QTextTableCell_OperatorAssign(QTextTableCell* self, QTextTableCell* o);
void QTextTableCell_SetFormat(QTextTableCell* self, QTextCharFormat* format);
QTextCharFormat* QTextTableCell_Format(QTextTableCell* self);
int QTextTableCell_Row(QTextTableCell* self);
int QTextTableCell_Column(QTextTableCell* self);
int QTextTableCell_RowSpan(QTextTableCell* self);
int QTextTableCell_ColumnSpan(QTextTableCell* self);
bool QTextTableCell_IsValid(QTextTableCell* self);
QTextCursor* QTextTableCell_FirstCursorPosition(QTextTableCell* self);
QTextCursor* QTextTableCell_LastCursorPosition(QTextTableCell* self);
int QTextTableCell_FirstPosition(QTextTableCell* self);
int QTextTableCell_LastPosition(QTextTableCell* self);
bool QTextTableCell_OperatorEqual(QTextTableCell* self, QTextTableCell* other);
bool QTextTableCell_OperatorNotEqual(QTextTableCell* self, QTextTableCell* other);
int QTextTableCell_TableCellFormatIndex(QTextTableCell* self);
void QTextTableCell_Delete(QTextTableCell* self);

QTextTable* QTextTable_new(QTextDocument* doc);
QMetaObject* QTextTable_MetaObject(QTextTable* self);
void QTextTable_Tr(char* s, char** _out, int* _out_Strlen);
void QTextTable_TrUtf8(char* s, char** _out, int* _out_Strlen);
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
int QTextTable_Rows(QTextTable* self);
int QTextTable_Columns(QTextTable* self);
QTextTableCell* QTextTable_CellAt(QTextTable* self, int row, int col);
QTextTableCell* QTextTable_CellAtWithPosition(QTextTable* self, int position);
QTextTableCell* QTextTable_CellAtWithQTextCursor(QTextTable* self, QTextCursor* c);
QTextCursor* QTextTable_RowStart(QTextTable* self, QTextCursor* c);
QTextCursor* QTextTable_RowEnd(QTextTable* self, QTextCursor* c);
void QTextTable_SetFormat(QTextTable* self, QTextTableFormat* format);
QTextTableFormat* QTextTable_Format(QTextTable* self);
void QTextTable_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QTextTable_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTextTable_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QTextTable_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTextTable_Delete(QTextTable* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
