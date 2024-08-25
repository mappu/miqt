#ifndef GEN_QTABLEWIDGET_H
#define GEN_QTABLEWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QColor;
class QDataStream;
class QFont;
class QIcon;
class QMetaObject;
class QPoint;
class QRect;
class QSize;
class QTableWidget;
class QTableWidgetItem;
class QTableWidgetSelectionRange;
class QVariant;
class QWidget;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QDataStream QDataStream;
typedef struct QFont QFont;
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QTableWidget QTableWidget;
typedef struct QTableWidgetItem QTableWidgetItem;
typedef struct QTableWidgetSelectionRange QTableWidgetSelectionRange;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new();
QTableWidgetSelectionRange* QTableWidgetSelectionRange_new2(int top, int left, int bottom, int right);
QTableWidgetSelectionRange* QTableWidgetSelectionRange_new3(QTableWidgetSelectionRange* other);
void QTableWidgetSelectionRange_OperatorAssign(QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other);
int QTableWidgetSelectionRange_TopRow(QTableWidgetSelectionRange* self);
int QTableWidgetSelectionRange_BottomRow(QTableWidgetSelectionRange* self);
int QTableWidgetSelectionRange_LeftColumn(QTableWidgetSelectionRange* self);
int QTableWidgetSelectionRange_RightColumn(QTableWidgetSelectionRange* self);
int QTableWidgetSelectionRange_RowCount(QTableWidgetSelectionRange* self);
int QTableWidgetSelectionRange_ColumnCount(QTableWidgetSelectionRange* self);
void QTableWidgetSelectionRange_Delete(QTableWidgetSelectionRange* self);

QTableWidgetItem* QTableWidgetItem_new();
QTableWidgetItem* QTableWidgetItem_new2(const char* text, size_t text_Strlen);
QTableWidgetItem* QTableWidgetItem_new3(QIcon* icon, const char* text, size_t text_Strlen);
QTableWidgetItem* QTableWidgetItem_new4(QTableWidgetItem* other);
QTableWidgetItem* QTableWidgetItem_new5(int typeVal);
QTableWidgetItem* QTableWidgetItem_new6(const char* text, size_t text_Strlen, int typeVal);
QTableWidgetItem* QTableWidgetItem_new7(QIcon* icon, const char* text, size_t text_Strlen, int typeVal);
QTableWidgetItem* QTableWidgetItem_Clone(QTableWidgetItem* self);
QTableWidget* QTableWidgetItem_TableWidget(QTableWidgetItem* self);
int QTableWidgetItem_Row(QTableWidgetItem* self);
int QTableWidgetItem_Column(QTableWidgetItem* self);
void QTableWidgetItem_SetSelected(QTableWidgetItem* self, bool selectVal);
bool QTableWidgetItem_IsSelected(QTableWidgetItem* self);
void QTableWidgetItem_Text(QTableWidgetItem* self, char** _out, int* _out_Strlen);
void QTableWidgetItem_SetText(QTableWidgetItem* self, const char* text, size_t text_Strlen);
QIcon* QTableWidgetItem_Icon(QTableWidgetItem* self);
void QTableWidgetItem_SetIcon(QTableWidgetItem* self, QIcon* icon);
void QTableWidgetItem_StatusTip(QTableWidgetItem* self, char** _out, int* _out_Strlen);
void QTableWidgetItem_SetStatusTip(QTableWidgetItem* self, const char* statusTip, size_t statusTip_Strlen);
void QTableWidgetItem_ToolTip(QTableWidgetItem* self, char** _out, int* _out_Strlen);
void QTableWidgetItem_SetToolTip(QTableWidgetItem* self, const char* toolTip, size_t toolTip_Strlen);
void QTableWidgetItem_WhatsThis(QTableWidgetItem* self, char** _out, int* _out_Strlen);
void QTableWidgetItem_SetWhatsThis(QTableWidgetItem* self, const char* whatsThis, size_t whatsThis_Strlen);
QFont* QTableWidgetItem_Font(QTableWidgetItem* self);
void QTableWidgetItem_SetFont(QTableWidgetItem* self, QFont* font);
int QTableWidgetItem_TextAlignment(QTableWidgetItem* self);
void QTableWidgetItem_SetTextAlignment(QTableWidgetItem* self, int alignment);
QColor* QTableWidgetItem_BackgroundColor(QTableWidgetItem* self);
void QTableWidgetItem_SetBackgroundColor(QTableWidgetItem* self, QColor* color);
QBrush* QTableWidgetItem_Background(QTableWidgetItem* self);
void QTableWidgetItem_SetBackground(QTableWidgetItem* self, QBrush* brush);
QColor* QTableWidgetItem_TextColor(QTableWidgetItem* self);
void QTableWidgetItem_SetTextColor(QTableWidgetItem* self, QColor* color);
QBrush* QTableWidgetItem_Foreground(QTableWidgetItem* self);
void QTableWidgetItem_SetForeground(QTableWidgetItem* self, QBrush* brush);
QSize* QTableWidgetItem_SizeHint(QTableWidgetItem* self);
void QTableWidgetItem_SetSizeHint(QTableWidgetItem* self, QSize* size);
QVariant* QTableWidgetItem_Data(QTableWidgetItem* self, int role);
void QTableWidgetItem_SetData(QTableWidgetItem* self, int role, QVariant* value);
bool QTableWidgetItem_OperatorLesser(QTableWidgetItem* self, QTableWidgetItem* other);
void QTableWidgetItem_Read(QTableWidgetItem* self, QDataStream* in);
void QTableWidgetItem_Write(QTableWidgetItem* self, QDataStream* out);
void QTableWidgetItem_OperatorAssign(QTableWidgetItem* self, QTableWidgetItem* other);
int QTableWidgetItem_Type(QTableWidgetItem* self);
void QTableWidgetItem_Delete(QTableWidgetItem* self);

QTableWidget* QTableWidget_new();
QTableWidget* QTableWidget_new2(int rows, int columns);
QTableWidget* QTableWidget_new3(QWidget* parent);
QTableWidget* QTableWidget_new4(int rows, int columns, QWidget* parent);
QMetaObject* QTableWidget_MetaObject(QTableWidget* self);
void QTableWidget_Tr(char* s, char** _out, int* _out_Strlen);
void QTableWidget_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QTableWidget_SetRowCount(QTableWidget* self, int rows);
int QTableWidget_RowCount(QTableWidget* self);
void QTableWidget_SetColumnCount(QTableWidget* self, int columns);
int QTableWidget_ColumnCount(QTableWidget* self);
int QTableWidget_Row(QTableWidget* self, QTableWidgetItem* item);
int QTableWidget_Column(QTableWidget* self, QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_Item(QTableWidget* self, int row, int column);
void QTableWidget_SetItem(QTableWidget* self, int row, int column, QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_TakeItem(QTableWidget* self, int row, int column);
QTableWidgetItem* QTableWidget_VerticalHeaderItem(QTableWidget* self, int row);
void QTableWidget_SetVerticalHeaderItem(QTableWidget* self, int row, QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_TakeVerticalHeaderItem(QTableWidget* self, int row);
QTableWidgetItem* QTableWidget_HorizontalHeaderItem(QTableWidget* self, int column);
void QTableWidget_SetHorizontalHeaderItem(QTableWidget* self, int column, QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_TakeHorizontalHeaderItem(QTableWidget* self, int column);
void QTableWidget_SetVerticalHeaderLabels(QTableWidget* self, char** labels, uint64_t* labels_Lengths, size_t labels_len);
void QTableWidget_SetHorizontalHeaderLabels(QTableWidget* self, char** labels, uint64_t* labels_Lengths, size_t labels_len);
int QTableWidget_CurrentRow(QTableWidget* self);
int QTableWidget_CurrentColumn(QTableWidget* self);
QTableWidgetItem* QTableWidget_CurrentItem(QTableWidget* self);
void QTableWidget_SetCurrentItem(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_SetCurrentCell(QTableWidget* self, int row, int column);
void QTableWidget_SetSortingEnabled(QTableWidget* self, bool enable);
bool QTableWidget_IsSortingEnabled(QTableWidget* self);
void QTableWidget_EditItem(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_OpenPersistentEditor(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_ClosePersistentEditor(QTableWidget* self, QTableWidgetItem* item);
bool QTableWidget_IsPersistentEditorOpen(QTableWidget* self, QTableWidgetItem* item);
QWidget* QTableWidget_CellWidget(QTableWidget* self, int row, int column);
void QTableWidget_SetCellWidget(QTableWidget* self, int row, int column, QWidget* widget);
void QTableWidget_RemoveCellWidget(QTableWidget* self, int row, int column);
bool QTableWidget_IsItemSelected(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_SetItemSelected(QTableWidget* self, QTableWidgetItem* item, bool selectVal);
void QTableWidget_SetRangeSelected(QTableWidget* self, QTableWidgetSelectionRange* rangeVal, bool selectVal);
void QTableWidget_SelectedRanges(QTableWidget* self, QTableWidgetSelectionRange*** _out, size_t* _out_len);
void QTableWidget_SelectedItems(QTableWidget* self, QTableWidgetItem*** _out, size_t* _out_len);
int QTableWidget_VisualRow(QTableWidget* self, int logicalRow);
int QTableWidget_VisualColumn(QTableWidget* self, int logicalColumn);
QTableWidgetItem* QTableWidget_ItemAt(QTableWidget* self, QPoint* p);
QTableWidgetItem* QTableWidget_ItemAt2(QTableWidget* self, int x, int y);
QRect* QTableWidget_VisualItemRect(QTableWidget* self, QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_ItemPrototype(QTableWidget* self);
void QTableWidget_SetItemPrototype(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_InsertRow(QTableWidget* self, int row);
void QTableWidget_InsertColumn(QTableWidget* self, int column);
void QTableWidget_RemoveRow(QTableWidget* self, int row);
void QTableWidget_RemoveColumn(QTableWidget* self, int column);
void QTableWidget_Clear(QTableWidget* self);
void QTableWidget_ClearContents(QTableWidget* self);
void QTableWidget_ItemPressed(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_connect_ItemPressed(QTableWidget* self, void* slot);
void QTableWidget_ItemClicked(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_connect_ItemClicked(QTableWidget* self, void* slot);
void QTableWidget_ItemDoubleClicked(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_connect_ItemDoubleClicked(QTableWidget* self, void* slot);
void QTableWidget_ItemActivated(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_connect_ItemActivated(QTableWidget* self, void* slot);
void QTableWidget_ItemEntered(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_connect_ItemEntered(QTableWidget* self, void* slot);
void QTableWidget_ItemChanged(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_connect_ItemChanged(QTableWidget* self, void* slot);
void QTableWidget_CurrentItemChanged(QTableWidget* self, QTableWidgetItem* current, QTableWidgetItem* previous);
void QTableWidget_connect_CurrentItemChanged(QTableWidget* self, void* slot);
void QTableWidget_ItemSelectionChanged(QTableWidget* self);
void QTableWidget_connect_ItemSelectionChanged(QTableWidget* self, void* slot);
void QTableWidget_CellPressed(QTableWidget* self, int row, int column);
void QTableWidget_connect_CellPressed(QTableWidget* self, void* slot);
void QTableWidget_CellClicked(QTableWidget* self, int row, int column);
void QTableWidget_connect_CellClicked(QTableWidget* self, void* slot);
void QTableWidget_CellDoubleClicked(QTableWidget* self, int row, int column);
void QTableWidget_connect_CellDoubleClicked(QTableWidget* self, void* slot);
void QTableWidget_CellActivated(QTableWidget* self, int row, int column);
void QTableWidget_connect_CellActivated(QTableWidget* self, void* slot);
void QTableWidget_CellEntered(QTableWidget* self, int row, int column);
void QTableWidget_connect_CellEntered(QTableWidget* self, void* slot);
void QTableWidget_CellChanged(QTableWidget* self, int row, int column);
void QTableWidget_connect_CellChanged(QTableWidget* self, void* slot);
void QTableWidget_CurrentCellChanged(QTableWidget* self, int currentRow, int currentColumn, int previousRow, int previousColumn);
void QTableWidget_connect_CurrentCellChanged(QTableWidget* self, void* slot);
void QTableWidget_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QTableWidget_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTableWidget_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QTableWidget_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTableWidget_Delete(QTableWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
