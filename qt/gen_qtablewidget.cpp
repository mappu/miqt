#include "gen_qtablewidget.h"
#include "qtablewidget.h"

#include <QBrush>
#include <QColor>
#include <QDataStream>
#include <QFont>
#include <QIcon>
#include <QList>
#include <QMetaObject>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTableWidgetSelectionRange>
#include <QVariant>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new() {
	return new QTableWidgetSelectionRange();
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new2(int top, int left, int bottom, int right) {
	return new QTableWidgetSelectionRange(static_cast<int>(top), static_cast<int>(left), static_cast<int>(bottom), static_cast<int>(right));
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new3(QTableWidgetSelectionRange* other) {
	return new QTableWidgetSelectionRange(*other);
}

void QTableWidgetSelectionRange_OperatorAssign(QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other) {
	self->operator=(*other);
}

int QTableWidgetSelectionRange_TopRow(QTableWidgetSelectionRange* self) {
	return self->topRow();
}

int QTableWidgetSelectionRange_BottomRow(QTableWidgetSelectionRange* self) {
	return self->bottomRow();
}

int QTableWidgetSelectionRange_LeftColumn(QTableWidgetSelectionRange* self) {
	return self->leftColumn();
}

int QTableWidgetSelectionRange_RightColumn(QTableWidgetSelectionRange* self) {
	return self->rightColumn();
}

int QTableWidgetSelectionRange_RowCount(QTableWidgetSelectionRange* self) {
	return self->rowCount();
}

int QTableWidgetSelectionRange_ColumnCount(QTableWidgetSelectionRange* self) {
	return self->columnCount();
}

void QTableWidgetSelectionRange_Delete(QTableWidgetSelectionRange* self) {
	delete self;
}

QTableWidgetItem* QTableWidgetItem_new() {
	return new QTableWidgetItem();
}

QTableWidgetItem* QTableWidgetItem_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QTableWidgetItem(text_QString);
}

QTableWidgetItem* QTableWidgetItem_new3(QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QTableWidgetItem(*icon, text_QString);
}

QTableWidgetItem* QTableWidgetItem_new4(QTableWidgetItem* other) {
	return new QTableWidgetItem(*other);
}

QTableWidgetItem* QTableWidgetItem_new5(int typeVal) {
	return new QTableWidgetItem(static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_new6(const char* text, size_t text_Strlen, int typeVal) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QTableWidgetItem(text_QString, static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_new7(QIcon* icon, const char* text, size_t text_Strlen, int typeVal) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QTableWidgetItem(*icon, text_QString, static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_Clone(QTableWidgetItem* self) {
	return self->clone();
}

QTableWidget* QTableWidgetItem_TableWidget(QTableWidgetItem* self) {
	return self->tableWidget();
}

int QTableWidgetItem_Row(QTableWidgetItem* self) {
	return self->row();
}

int QTableWidgetItem_Column(QTableWidgetItem* self) {
	return self->column();
}

void QTableWidgetItem_SetSelected(QTableWidgetItem* self, bool selectVal) {
	self->setSelected(selectVal);
}

bool QTableWidgetItem_IsSelected(QTableWidgetItem* self) {
	return self->isSelected();
}

void QTableWidgetItem_Text(QTableWidgetItem* self, char** _out, int* _out_Strlen) {
	QString ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableWidgetItem_SetText(QTableWidgetItem* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(text_QString);
}

QIcon* QTableWidgetItem_Icon(QTableWidgetItem* self) {
	QIcon ret = self->icon();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

void QTableWidgetItem_SetIcon(QTableWidgetItem* self, QIcon* icon) {
	self->setIcon(*icon);
}

void QTableWidgetItem_StatusTip(QTableWidgetItem* self, char** _out, int* _out_Strlen) {
	QString ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableWidgetItem_SetStatusTip(QTableWidgetItem* self, const char* statusTip, size_t statusTip_Strlen) {
	QString statusTip_QString = QString::fromUtf8(statusTip, statusTip_Strlen);
	self->setStatusTip(statusTip_QString);
}

void QTableWidgetItem_ToolTip(QTableWidgetItem* self, char** _out, int* _out_Strlen) {
	QString ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableWidgetItem_SetToolTip(QTableWidgetItem* self, const char* toolTip, size_t toolTip_Strlen) {
	QString toolTip_QString = QString::fromUtf8(toolTip, toolTip_Strlen);
	self->setToolTip(toolTip_QString);
}

void QTableWidgetItem_WhatsThis(QTableWidgetItem* self, char** _out, int* _out_Strlen) {
	QString ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableWidgetItem_SetWhatsThis(QTableWidgetItem* self, const char* whatsThis, size_t whatsThis_Strlen) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis, whatsThis_Strlen);
	self->setWhatsThis(whatsThis_QString);
}

QFont* QTableWidgetItem_Font(QTableWidgetItem* self) {
	QFont ret = self->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QTableWidgetItem_SetFont(QTableWidgetItem* self, QFont* font) {
	self->setFont(*font);
}

int QTableWidgetItem_TextAlignment(QTableWidgetItem* self) {
	return self->textAlignment();
}

void QTableWidgetItem_SetTextAlignment(QTableWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<int>(alignment));
}

QColor* QTableWidgetItem_BackgroundColor(QTableWidgetItem* self) {
	QColor ret = self->backgroundColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QTableWidgetItem_SetBackgroundColor(QTableWidgetItem* self, QColor* color) {
	self->setBackgroundColor(*color);
}

QBrush* QTableWidgetItem_Background(QTableWidgetItem* self) {
	QBrush ret = self->background();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTableWidgetItem_SetBackground(QTableWidgetItem* self, QBrush* brush) {
	self->setBackground(*brush);
}

QColor* QTableWidgetItem_TextColor(QTableWidgetItem* self) {
	QColor ret = self->textColor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QTableWidgetItem_SetTextColor(QTableWidgetItem* self, QColor* color) {
	self->setTextColor(*color);
}

QBrush* QTableWidgetItem_Foreground(QTableWidgetItem* self) {
	QBrush ret = self->foreground();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QTableWidgetItem_SetForeground(QTableWidgetItem* self, QBrush* brush) {
	self->setForeground(*brush);
}

QSize* QTableWidgetItem_SizeHint(QTableWidgetItem* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QTableWidgetItem_SetSizeHint(QTableWidgetItem* self, QSize* size) {
	self->setSizeHint(*size);
}

QVariant* QTableWidgetItem_Data(QTableWidgetItem* self, int role) {
	QVariant ret = self->data(static_cast<int>(role));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QTableWidgetItem_SetData(QTableWidgetItem* self, int role, QVariant* value) {
	self->setData(static_cast<int>(role), *value);
}

bool QTableWidgetItem_OperatorLesser(QTableWidgetItem* self, QTableWidgetItem* other) {
	return self->operator<(*other);
}

void QTableWidgetItem_Read(QTableWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QTableWidgetItem_Write(QTableWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QTableWidgetItem_OperatorAssign(QTableWidgetItem* self, QTableWidgetItem* other) {
	self->operator=(*other);
}

int QTableWidgetItem_Type(QTableWidgetItem* self) {
	return self->type();
}

void QTableWidgetItem_Delete(QTableWidgetItem* self) {
	delete self;
}

QTableWidget* QTableWidget_new() {
	return new QTableWidget();
}

QTableWidget* QTableWidget_new2(int rows, int columns) {
	return new QTableWidget(static_cast<int>(rows), static_cast<int>(columns));
}

QTableWidget* QTableWidget_new3(QWidget* parent) {
	return new QTableWidget(parent);
}

QTableWidget* QTableWidget_new4(int rows, int columns, QWidget* parent) {
	return new QTableWidget(static_cast<int>(rows), static_cast<int>(columns), parent);
}

QMetaObject* QTableWidget_MetaObject(QTableWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void QTableWidget_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTableWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableWidget_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTableWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableWidget_SetRowCount(QTableWidget* self, int rows) {
	self->setRowCount(static_cast<int>(rows));
}

int QTableWidget_RowCount(QTableWidget* self) {
	return self->rowCount();
}

void QTableWidget_SetColumnCount(QTableWidget* self, int columns) {
	self->setColumnCount(static_cast<int>(columns));
}

int QTableWidget_ColumnCount(QTableWidget* self) {
	return self->columnCount();
}

int QTableWidget_Row(QTableWidget* self, QTableWidgetItem* item) {
	return self->row(item);
}

int QTableWidget_Column(QTableWidget* self, QTableWidgetItem* item) {
	return self->column(item);
}

QTableWidgetItem* QTableWidget_Item(QTableWidget* self, int row, int column) {
	return self->item(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetItem(QTableWidget* self, int row, int column, QTableWidgetItem* item) {
	self->setItem(static_cast<int>(row), static_cast<int>(column), item);
}

QTableWidgetItem* QTableWidget_TakeItem(QTableWidget* self, int row, int column) {
	return self->takeItem(static_cast<int>(row), static_cast<int>(column));
}

QTableWidgetItem* QTableWidget_VerticalHeaderItem(QTableWidget* self, int row) {
	return self->verticalHeaderItem(static_cast<int>(row));
}

void QTableWidget_SetVerticalHeaderItem(QTableWidget* self, int row, QTableWidgetItem* item) {
	self->setVerticalHeaderItem(static_cast<int>(row), item);
}

QTableWidgetItem* QTableWidget_TakeVerticalHeaderItem(QTableWidget* self, int row) {
	return self->takeVerticalHeaderItem(static_cast<int>(row));
}

QTableWidgetItem* QTableWidget_HorizontalHeaderItem(QTableWidget* self, int column) {
	return self->horizontalHeaderItem(static_cast<int>(column));
}

void QTableWidget_SetHorizontalHeaderItem(QTableWidget* self, int column, QTableWidgetItem* item) {
	self->setHorizontalHeaderItem(static_cast<int>(column), item);
}

QTableWidgetItem* QTableWidget_TakeHorizontalHeaderItem(QTableWidget* self, int column) {
	return self->takeHorizontalHeaderItem(static_cast<int>(column));
}

void QTableWidget_SetVerticalHeaderLabels(QTableWidget* self, char** labels, uint64_t* labels_Lengths, size_t labels_len) {
	QList<QString> labels_QList;
	labels_QList.reserve(labels_len);
	for(size_t i = 0; i < labels_len; ++i) {
		labels_QList.push_back(QString::fromUtf8(labels[i], labels_Lengths[i]));
	}
	self->setVerticalHeaderLabels(labels_QList);
}

void QTableWidget_SetHorizontalHeaderLabels(QTableWidget* self, char** labels, uint64_t* labels_Lengths, size_t labels_len) {
	QList<QString> labels_QList;
	labels_QList.reserve(labels_len);
	for(size_t i = 0; i < labels_len; ++i) {
		labels_QList.push_back(QString::fromUtf8(labels[i], labels_Lengths[i]));
	}
	self->setHorizontalHeaderLabels(labels_QList);
}

int QTableWidget_CurrentRow(QTableWidget* self) {
	return self->currentRow();
}

int QTableWidget_CurrentColumn(QTableWidget* self) {
	return self->currentColumn();
}

QTableWidgetItem* QTableWidget_CurrentItem(QTableWidget* self) {
	return self->currentItem();
}

void QTableWidget_SetCurrentItem(QTableWidget* self, QTableWidgetItem* item) {
	self->setCurrentItem(item);
}

void QTableWidget_SetCurrentCell(QTableWidget* self, int row, int column) {
	self->setCurrentCell(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetSortingEnabled(QTableWidget* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QTableWidget_IsSortingEnabled(QTableWidget* self) {
	return self->isSortingEnabled();
}

void QTableWidget_EditItem(QTableWidget* self, QTableWidgetItem* item) {
	self->editItem(item);
}

void QTableWidget_OpenPersistentEditor(QTableWidget* self, QTableWidgetItem* item) {
	self->openPersistentEditor(item);
}

void QTableWidget_ClosePersistentEditor(QTableWidget* self, QTableWidgetItem* item) {
	self->closePersistentEditor(item);
}

bool QTableWidget_IsPersistentEditorOpen(QTableWidget* self, QTableWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QTableWidget_CellWidget(QTableWidget* self, int row, int column) {
	return self->cellWidget(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetCellWidget(QTableWidget* self, int row, int column, QWidget* widget) {
	self->setCellWidget(static_cast<int>(row), static_cast<int>(column), widget);
}

void QTableWidget_RemoveCellWidget(QTableWidget* self, int row, int column) {
	self->removeCellWidget(static_cast<int>(row), static_cast<int>(column));
}

bool QTableWidget_IsItemSelected(QTableWidget* self, QTableWidgetItem* item) {
	return self->isItemSelected(item);
}

void QTableWidget_SetItemSelected(QTableWidget* self, QTableWidgetItem* item, bool selectVal) {
	self->setItemSelected(item, selectVal);
}

void QTableWidget_SetRangeSelected(QTableWidget* self, QTableWidgetSelectionRange* rangeVal, bool selectVal) {
	self->setRangeSelected(*rangeVal, selectVal);
}

void QTableWidget_SelectedRanges(QTableWidget* self, QTableWidgetSelectionRange*** _out, size_t* _out_len) {
	QList<QTableWidgetSelectionRange> ret = self->selectedRanges();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QTableWidgetSelectionRange** __out = static_cast<QTableWidgetSelectionRange**>(malloc(sizeof(QTableWidgetSelectionRange**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QTableWidgetSelectionRange(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTableWidget_SelectedItems(QTableWidget* self, QTableWidgetItem*** _out, size_t* _out_len) {
	QList<QTableWidgetItem *> ret = self->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTableWidgetItem** __out = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

int QTableWidget_VisualRow(QTableWidget* self, int logicalRow) {
	return self->visualRow(static_cast<int>(logicalRow));
}

int QTableWidget_VisualColumn(QTableWidget* self, int logicalColumn) {
	return self->visualColumn(static_cast<int>(logicalColumn));
}

QTableWidgetItem* QTableWidget_ItemAt(QTableWidget* self, QPoint* p) {
	return self->itemAt(*p);
}

QTableWidgetItem* QTableWidget_ItemAt2(QTableWidget* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QTableWidget_VisualItemRect(QTableWidget* self, QTableWidgetItem* item) {
	QRect ret = self->visualItemRect(item);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QTableWidgetItem* QTableWidget_ItemPrototype(QTableWidget* self) {
	return (QTableWidgetItem*) self->itemPrototype();
}

void QTableWidget_SetItemPrototype(QTableWidget* self, QTableWidgetItem* item) {
	self->setItemPrototype(item);
}

void QTableWidget_InsertRow(QTableWidget* self, int row) {
	self->insertRow(static_cast<int>(row));
}

void QTableWidget_InsertColumn(QTableWidget* self, int column) {
	self->insertColumn(static_cast<int>(column));
}

void QTableWidget_RemoveRow(QTableWidget* self, int row) {
	self->removeRow(static_cast<int>(row));
}

void QTableWidget_RemoveColumn(QTableWidget* self, int column) {
	self->removeColumn(static_cast<int>(column));
}

void QTableWidget_Clear(QTableWidget* self) {
	self->clear();
}

void QTableWidget_ClearContents(QTableWidget* self) {
	self->clearContents();
}

void QTableWidget_ItemPressed(QTableWidget* self, QTableWidgetItem* item) {
	self->itemPressed(item);
}

void QTableWidget_connect_ItemPressed(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemPressed), self, [=](QTableWidgetItem* item) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTableWidget_ItemClicked(QTableWidget* self, QTableWidgetItem* item) {
	self->itemClicked(item);
}

void QTableWidget_connect_ItemClicked(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemClicked), self, [=](QTableWidgetItem* item) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTableWidget_ItemDoubleClicked(QTableWidget* self, QTableWidgetItem* item) {
	self->itemDoubleClicked(item);
}

void QTableWidget_connect_ItemDoubleClicked(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemDoubleClicked), self, [=](QTableWidgetItem* item) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTableWidget_ItemActivated(QTableWidget* self, QTableWidgetItem* item) {
	self->itemActivated(item);
}

void QTableWidget_connect_ItemActivated(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemActivated), self, [=](QTableWidgetItem* item) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTableWidget_ItemEntered(QTableWidget* self, QTableWidgetItem* item) {
	self->itemEntered(item);
}

void QTableWidget_connect_ItemEntered(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemEntered), self, [=](QTableWidgetItem* item) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTableWidget_ItemChanged(QTableWidget* self, QTableWidgetItem* item) {
	self->itemChanged(item);
}

void QTableWidget_connect_ItemChanged(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemChanged), self, [=](QTableWidgetItem* item) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTableWidget_CurrentItemChanged(QTableWidget* self, QTableWidgetItem* current, QTableWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QTableWidget_connect_CurrentItemChanged(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*, QTableWidgetItem*)>(&QTableWidget::currentItemChanged), self, [=](QTableWidgetItem* current, QTableWidgetItem* previous) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTableWidget_ItemSelectionChanged(QTableWidget* self) {
	self->itemSelectionChanged();
}

void QTableWidget_connect_ItemSelectionChanged(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)()>(&QTableWidget::itemSelectionChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTableWidget_CellPressed(QTableWidget* self, int row, int column) {
	self->cellPressed(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellPressed(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellPressed), self, [=](int row, int column) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTableWidget_CellClicked(QTableWidget* self, int row, int column) {
	self->cellClicked(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellClicked(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellClicked), self, [=](int row, int column) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTableWidget_CellDoubleClicked(QTableWidget* self, int row, int column) {
	self->cellDoubleClicked(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellDoubleClicked(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellDoubleClicked), self, [=](int row, int column) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTableWidget_CellActivated(QTableWidget* self, int row, int column) {
	self->cellActivated(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellActivated(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellActivated), self, [=](int row, int column) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTableWidget_CellEntered(QTableWidget* self, int row, int column) {
	self->cellEntered(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellEntered(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellEntered), self, [=](int row, int column) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTableWidget_CellChanged(QTableWidget* self, int row, int column) {
	self->cellChanged(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellChanged(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellChanged), self, [=](int row, int column) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTableWidget_CurrentCellChanged(QTableWidget* self, int currentRow, int currentColumn, int previousRow, int previousColumn) {
	self->currentCellChanged(static_cast<int>(currentRow), static_cast<int>(currentColumn), static_cast<int>(previousRow), static_cast<int>(previousColumn));
}

void QTableWidget_connect_CurrentCellChanged(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int, int, int)>(&QTableWidget::currentCellChanged), self, [=](int currentRow, int currentColumn, int previousRow, int previousColumn) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTableWidget_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTableWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableWidget_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTableWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableWidget_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTableWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableWidget_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTableWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTableWidget_Delete(QTableWidget* self) {
	delete self;
}

