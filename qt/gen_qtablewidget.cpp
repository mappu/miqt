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
#include <QByteArray>
#include <cstring>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTableWidgetSelectionRange>
#include <QVariant>
#include <QWidget>
#include "qtablewidget.h"
#include "gen_qtablewidget.h"
#include "_cgo_export.h"

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

int QTableWidgetSelectionRange_TopRow(const QTableWidgetSelectionRange* self) {
	return self->topRow();
}

int QTableWidgetSelectionRange_BottomRow(const QTableWidgetSelectionRange* self) {
	return self->bottomRow();
}

int QTableWidgetSelectionRange_LeftColumn(const QTableWidgetSelectionRange* self) {
	return self->leftColumn();
}

int QTableWidgetSelectionRange_RightColumn(const QTableWidgetSelectionRange* self) {
	return self->rightColumn();
}

int QTableWidgetSelectionRange_RowCount(const QTableWidgetSelectionRange* self) {
	return self->rowCount();
}

int QTableWidgetSelectionRange_ColumnCount(const QTableWidgetSelectionRange* self) {
	return self->columnCount();
}

void QTableWidgetSelectionRange_Delete(QTableWidgetSelectionRange* self) {
	delete self;
}

QTableWidgetItem* QTableWidgetItem_new() {
	return new QTableWidgetItem();
}

QTableWidgetItem* QTableWidgetItem_new2(struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QTableWidgetItem(text_QString);
}

QTableWidgetItem* QTableWidgetItem_new3(QIcon* icon, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QTableWidgetItem(*icon, text_QString);
}

QTableWidgetItem* QTableWidgetItem_new4(QTableWidgetItem* other) {
	return new QTableWidgetItem(*other);
}

QTableWidgetItem* QTableWidgetItem_new5(int typeVal) {
	return new QTableWidgetItem(static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_new6(struct miqt_string* text, int typeVal) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QTableWidgetItem(text_QString, static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_new7(QIcon* icon, struct miqt_string* text, int typeVal) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QTableWidgetItem(*icon, text_QString, static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_Clone(const QTableWidgetItem* self) {
	return self->clone();
}

QTableWidget* QTableWidgetItem_TableWidget(const QTableWidgetItem* self) {
	return self->tableWidget();
}

int QTableWidgetItem_Row(const QTableWidgetItem* self) {
	return self->row();
}

int QTableWidgetItem_Column(const QTableWidgetItem* self) {
	return self->column();
}

void QTableWidgetItem_SetSelected(QTableWidgetItem* self, bool selectVal) {
	self->setSelected(selectVal);
}

bool QTableWidgetItem_IsSelected(const QTableWidgetItem* self) {
	return self->isSelected();
}

int QTableWidgetItem_Flags(const QTableWidgetItem* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QTableWidgetItem_SetFlags(QTableWidgetItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

struct miqt_string* QTableWidgetItem_Text(const QTableWidgetItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTableWidgetItem_SetText(QTableWidgetItem* self, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->setText(text_QString);
}

QIcon* QTableWidgetItem_Icon(const QTableWidgetItem* self) {
	return new QIcon(self->icon());
}

void QTableWidgetItem_SetIcon(QTableWidgetItem* self, QIcon* icon) {
	self->setIcon(*icon);
}

struct miqt_string* QTableWidgetItem_StatusTip(const QTableWidgetItem* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTableWidgetItem_SetStatusTip(QTableWidgetItem* self, struct miqt_string* statusTip) {
	QString statusTip_QString = QString::fromUtf8(&statusTip->data, statusTip->len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string* QTableWidgetItem_ToolTip(const QTableWidgetItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTableWidgetItem_SetToolTip(QTableWidgetItem* self, struct miqt_string* toolTip) {
	QString toolTip_QString = QString::fromUtf8(&toolTip->data, toolTip->len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string* QTableWidgetItem_WhatsThis(const QTableWidgetItem* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTableWidgetItem_SetWhatsThis(QTableWidgetItem* self, struct miqt_string* whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(&whatsThis->data, whatsThis->len);
	self->setWhatsThis(whatsThis_QString);
}

QFont* QTableWidgetItem_Font(const QTableWidgetItem* self) {
	return new QFont(self->font());
}

void QTableWidgetItem_SetFont(QTableWidgetItem* self, QFont* font) {
	self->setFont(*font);
}

int QTableWidgetItem_TextAlignment(const QTableWidgetItem* self) {
	return self->textAlignment();
}

void QTableWidgetItem_SetTextAlignment(QTableWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<int>(alignment));
}

QColor* QTableWidgetItem_BackgroundColor(const QTableWidgetItem* self) {
	return new QColor(self->backgroundColor());
}

void QTableWidgetItem_SetBackgroundColor(QTableWidgetItem* self, QColor* color) {
	self->setBackgroundColor(*color);
}

QBrush* QTableWidgetItem_Background(const QTableWidgetItem* self) {
	return new QBrush(self->background());
}

void QTableWidgetItem_SetBackground(QTableWidgetItem* self, QBrush* brush) {
	self->setBackground(*brush);
}

QColor* QTableWidgetItem_TextColor(const QTableWidgetItem* self) {
	return new QColor(self->textColor());
}

void QTableWidgetItem_SetTextColor(QTableWidgetItem* self, QColor* color) {
	self->setTextColor(*color);
}

QBrush* QTableWidgetItem_Foreground(const QTableWidgetItem* self) {
	return new QBrush(self->foreground());
}

void QTableWidgetItem_SetForeground(QTableWidgetItem* self, QBrush* brush) {
	self->setForeground(*brush);
}

uintptr_t QTableWidgetItem_CheckState(const QTableWidgetItem* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<uintptr_t>(_ret);
}

void QTableWidgetItem_SetCheckState(QTableWidgetItem* self, uintptr_t state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QTableWidgetItem_SizeHint(const QTableWidgetItem* self) {
	return new QSize(self->sizeHint());
}

void QTableWidgetItem_SetSizeHint(QTableWidgetItem* self, QSize* size) {
	self->setSizeHint(*size);
}

QVariant* QTableWidgetItem_Data(const QTableWidgetItem* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QTableWidgetItem_SetData(QTableWidgetItem* self, int role, QVariant* value) {
	self->setData(static_cast<int>(role), *value);
}

bool QTableWidgetItem_OperatorLesser(const QTableWidgetItem* self, QTableWidgetItem* other) {
	return self->operator<(*other);
}

void QTableWidgetItem_Read(QTableWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QTableWidgetItem_Write(const QTableWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QTableWidgetItem_OperatorAssign(QTableWidgetItem* self, QTableWidgetItem* other) {
	self->operator=(*other);
}

int QTableWidgetItem_Type(const QTableWidgetItem* self) {
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

QMetaObject* QTableWidget_MetaObject(const QTableWidget* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QTableWidget_Tr(const char* s) {
	QString _ret = QTableWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTableWidget_TrUtf8(const char* s) {
	QString _ret = QTableWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTableWidget_SetRowCount(QTableWidget* self, int rows) {
	self->setRowCount(static_cast<int>(rows));
}

int QTableWidget_RowCount(const QTableWidget* self) {
	return self->rowCount();
}

void QTableWidget_SetColumnCount(QTableWidget* self, int columns) {
	self->setColumnCount(static_cast<int>(columns));
}

int QTableWidget_ColumnCount(const QTableWidget* self) {
	return self->columnCount();
}

int QTableWidget_Row(const QTableWidget* self, QTableWidgetItem* item) {
	return self->row(item);
}

int QTableWidget_Column(const QTableWidget* self, QTableWidgetItem* item) {
	return self->column(item);
}

QTableWidgetItem* QTableWidget_Item(const QTableWidget* self, int row, int column) {
	return self->item(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetItem(QTableWidget* self, int row, int column, QTableWidgetItem* item) {
	self->setItem(static_cast<int>(row), static_cast<int>(column), item);
}

QTableWidgetItem* QTableWidget_TakeItem(QTableWidget* self, int row, int column) {
	return self->takeItem(static_cast<int>(row), static_cast<int>(column));
}

QTableWidgetItem* QTableWidget_VerticalHeaderItem(const QTableWidget* self, int row) {
	return self->verticalHeaderItem(static_cast<int>(row));
}

void QTableWidget_SetVerticalHeaderItem(QTableWidget* self, int row, QTableWidgetItem* item) {
	self->setVerticalHeaderItem(static_cast<int>(row), item);
}

QTableWidgetItem* QTableWidget_TakeVerticalHeaderItem(QTableWidget* self, int row) {
	return self->takeVerticalHeaderItem(static_cast<int>(row));
}

QTableWidgetItem* QTableWidget_HorizontalHeaderItem(const QTableWidget* self, int column) {
	return self->horizontalHeaderItem(static_cast<int>(column));
}

void QTableWidget_SetHorizontalHeaderItem(QTableWidget* self, int column, QTableWidgetItem* item) {
	self->setHorizontalHeaderItem(static_cast<int>(column), item);
}

QTableWidgetItem* QTableWidget_TakeHorizontalHeaderItem(QTableWidget* self, int column) {
	return self->takeHorizontalHeaderItem(static_cast<int>(column));
}

void QTableWidget_SetVerticalHeaderLabels(QTableWidget* self, struct miqt_array* /* of struct miqt_string* */ labels) {
	QList<QString> labels_QList;
	labels_QList.reserve(labels->len);
	struct miqt_string** labels_arr = static_cast<struct miqt_string**>(labels->data);
	for(size_t i = 0; i < labels->len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(&labels_arr[i]->data, labels_arr[i]->len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->setVerticalHeaderLabels(labels_QList);
}

void QTableWidget_SetHorizontalHeaderLabels(QTableWidget* self, struct miqt_array* /* of struct miqt_string* */ labels) {
	QList<QString> labels_QList;
	labels_QList.reserve(labels->len);
	struct miqt_string** labels_arr = static_cast<struct miqt_string**>(labels->data);
	for(size_t i = 0; i < labels->len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(&labels_arr[i]->data, labels_arr[i]->len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->setHorizontalHeaderLabels(labels_QList);
}

int QTableWidget_CurrentRow(const QTableWidget* self) {
	return self->currentRow();
}

int QTableWidget_CurrentColumn(const QTableWidget* self) {
	return self->currentColumn();
}

QTableWidgetItem* QTableWidget_CurrentItem(const QTableWidget* self) {
	return self->currentItem();
}

void QTableWidget_SetCurrentItem(QTableWidget* self, QTableWidgetItem* item) {
	self->setCurrentItem(item);
}

void QTableWidget_SetCurrentItem2(QTableWidget* self, QTableWidgetItem* item, int command) {
	self->setCurrentItem(item, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QTableWidget_SetCurrentCell(QTableWidget* self, int row, int column) {
	self->setCurrentCell(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetCurrentCell2(QTableWidget* self, int row, int column, int command) {
	self->setCurrentCell(static_cast<int>(row), static_cast<int>(column), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QTableWidget_SortItems(QTableWidget* self, int column) {
	self->sortItems(static_cast<int>(column));
}

void QTableWidget_SetSortingEnabled(QTableWidget* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QTableWidget_IsSortingEnabled(const QTableWidget* self) {
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

bool QTableWidget_IsPersistentEditorOpen(const QTableWidget* self, QTableWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QTableWidget_CellWidget(const QTableWidget* self, int row, int column) {
	return self->cellWidget(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_SetCellWidget(QTableWidget* self, int row, int column, QWidget* widget) {
	self->setCellWidget(static_cast<int>(row), static_cast<int>(column), widget);
}

void QTableWidget_RemoveCellWidget(QTableWidget* self, int row, int column) {
	self->removeCellWidget(static_cast<int>(row), static_cast<int>(column));
}

bool QTableWidget_IsItemSelected(const QTableWidget* self, QTableWidgetItem* item) {
	return self->isItemSelected(item);
}

void QTableWidget_SetItemSelected(QTableWidget* self, QTableWidgetItem* item, bool selectVal) {
	self->setItemSelected(item, selectVal);
}

void QTableWidget_SetRangeSelected(QTableWidget* self, QTableWidgetSelectionRange* rangeVal, bool selectVal) {
	self->setRangeSelected(*rangeVal, selectVal);
}

struct miqt_array* QTableWidget_SelectedRanges(const QTableWidget* self) {
	QList<QTableWidgetSelectionRange> _ret = self->selectedRanges();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTableWidgetSelectionRange** _arr = static_cast<QTableWidgetSelectionRange**>(malloc(sizeof(QTableWidgetSelectionRange*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTableWidgetSelectionRange(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QTableWidget_SelectedItems(const QTableWidget* self) {
	QList<QTableWidgetItem*> _ret = self->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QTableWidget_FindItems(const QTableWidget* self, struct miqt_string* text, int flags) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QList<QTableWidgetItem*> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

int QTableWidget_VisualRow(const QTableWidget* self, int logicalRow) {
	return self->visualRow(static_cast<int>(logicalRow));
}

int QTableWidget_VisualColumn(const QTableWidget* self, int logicalColumn) {
	return self->visualColumn(static_cast<int>(logicalColumn));
}

QTableWidgetItem* QTableWidget_ItemAt(const QTableWidget* self, QPoint* p) {
	return self->itemAt(*p);
}

QTableWidgetItem* QTableWidget_ItemAt2(const QTableWidget* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QTableWidget_VisualItemRect(const QTableWidget* self, QTableWidgetItem* item) {
	return new QRect(self->visualItemRect(item));
}

QTableWidgetItem* QTableWidget_ItemPrototype(const QTableWidget* self) {
	return (QTableWidgetItem*) self->itemPrototype();
}

void QTableWidget_SetItemPrototype(QTableWidget* self, QTableWidgetItem* item) {
	self->setItemPrototype(item);
}

void QTableWidget_ScrollToItem(QTableWidget* self, QTableWidgetItem* item) {
	self->scrollToItem(item);
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
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemPressed(slot, sigval1);
	});
}

void QTableWidget_ItemClicked(QTableWidget* self, QTableWidgetItem* item) {
	self->itemClicked(item);
}

void QTableWidget_connect_ItemClicked(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemClicked), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemClicked(slot, sigval1);
	});
}

void QTableWidget_ItemDoubleClicked(QTableWidget* self, QTableWidgetItem* item) {
	self->itemDoubleClicked(item);
}

void QTableWidget_connect_ItemDoubleClicked(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemDoubleClicked), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemDoubleClicked(slot, sigval1);
	});
}

void QTableWidget_ItemActivated(QTableWidget* self, QTableWidgetItem* item) {
	self->itemActivated(item);
}

void QTableWidget_connect_ItemActivated(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemActivated), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemActivated(slot, sigval1);
	});
}

void QTableWidget_ItemEntered(QTableWidget* self, QTableWidgetItem* item) {
	self->itemEntered(item);
}

void QTableWidget_connect_ItemEntered(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemEntered), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemEntered(slot, sigval1);
	});
}

void QTableWidget_ItemChanged(QTableWidget* self, QTableWidgetItem* item) {
	self->itemChanged(item);
}

void QTableWidget_connect_ItemChanged(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemChanged), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemChanged(slot, sigval1);
	});
}

void QTableWidget_CurrentItemChanged(QTableWidget* self, QTableWidgetItem* current, QTableWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QTableWidget_connect_CurrentItemChanged(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*, QTableWidgetItem*)>(&QTableWidget::currentItemChanged), self, [=](QTableWidgetItem* current, QTableWidgetItem* previous) {
		QTableWidgetItem* sigval1 = current;
		QTableWidgetItem* sigval2 = previous;
		miqt_exec_callback_QTableWidget_CurrentItemChanged(slot, sigval1, sigval2);
	});
}

void QTableWidget_ItemSelectionChanged(QTableWidget* self) {
	self->itemSelectionChanged();
}

void QTableWidget_connect_ItemSelectionChanged(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)()>(&QTableWidget::itemSelectionChanged), self, [=]() {
		miqt_exec_callback_QTableWidget_ItemSelectionChanged(slot);
	});
}

void QTableWidget_CellPressed(QTableWidget* self, int row, int column) {
	self->cellPressed(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellPressed(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellPressed), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellPressed(slot, sigval1, sigval2);
	});
}

void QTableWidget_CellClicked(QTableWidget* self, int row, int column) {
	self->cellClicked(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellClicked(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellClicked), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellClicked(slot, sigval1, sigval2);
	});
}

void QTableWidget_CellDoubleClicked(QTableWidget* self, int row, int column) {
	self->cellDoubleClicked(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellDoubleClicked(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellDoubleClicked), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellDoubleClicked(slot, sigval1, sigval2);
	});
}

void QTableWidget_CellActivated(QTableWidget* self, int row, int column) {
	self->cellActivated(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellActivated(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellActivated), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellActivated(slot, sigval1, sigval2);
	});
}

void QTableWidget_CellEntered(QTableWidget* self, int row, int column) {
	self->cellEntered(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellEntered(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellEntered), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellEntered(slot, sigval1, sigval2);
	});
}

void QTableWidget_CellChanged(QTableWidget* self, int row, int column) {
	self->cellChanged(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellChanged(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellChanged), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellChanged(slot, sigval1, sigval2);
	});
}

void QTableWidget_CurrentCellChanged(QTableWidget* self, int currentRow, int currentColumn, int previousRow, int previousColumn) {
	self->currentCellChanged(static_cast<int>(currentRow), static_cast<int>(currentColumn), static_cast<int>(previousRow), static_cast<int>(previousColumn));
}

void QTableWidget_connect_CurrentCellChanged(QTableWidget* self, void* slot) {
	QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int, int, int)>(&QTableWidget::currentCellChanged), self, [=](int currentRow, int currentColumn, int previousRow, int previousColumn) {
		int sigval1 = currentRow;
		int sigval2 = currentColumn;
		int sigval3 = previousRow;
		int sigval4 = previousColumn;
		miqt_exec_callback_QTableWidget_CurrentCellChanged(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

struct miqt_string* QTableWidget_Tr2(const char* s, const char* c) {
	QString _ret = QTableWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTableWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTableWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTableWidget_TrUtf82(const char* s, const char* c) {
	QString _ret = QTableWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTableWidget_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTableWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTableWidget_SortItems2(QTableWidget* self, int column, uintptr_t order) {
	self->sortItems(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTableWidget_ScrollToItem2(QTableWidget* self, QTableWidgetItem* item, uintptr_t hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

void QTableWidget_Delete(QTableWidget* self) {
	delete self;
}

