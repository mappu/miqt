#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QBrush>
#include <QColor>
#include <QDataStream>
#include <QDropEvent>
#include <QEvent>
#include <QFont>
#include <QFrame>
#include <QIcon>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QList>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QTableView>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTableWidgetSelectionRange>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qtablewidget.h>
#include "gen_qtablewidget.h"

#ifdef __cplusplus
extern "C" {
#endif

QTableWidgetItem* miqt_exec_callback_QTableWidgetItem_Clone(void*, intptr_t);
QVariant* miqt_exec_callback_QTableWidgetItem_Data(void*, intptr_t, int);
void miqt_exec_callback_QTableWidgetItem_SetData(void*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QTableWidgetItem_OperatorLesser(void*, intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidgetItem_Read(void*, intptr_t, QDataStream*);
void miqt_exec_callback_QTableWidgetItem_Write(void*, intptr_t, QDataStream*);
void miqt_exec_callback_QTableWidget_ItemPressed(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_ItemClicked(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_ItemDoubleClicked(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_ItemActivated(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_ItemEntered(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_ItemChanged(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_CurrentItemChanged(intptr_t, QTableWidgetItem*, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_ItemSelectionChanged(intptr_t);
void miqt_exec_callback_QTableWidget_CellPressed(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_CellClicked(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_CellDoubleClicked(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_CellActivated(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_CellEntered(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_CellChanged(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_CurrentCellChanged(intptr_t, int, int, int, int);
bool miqt_exec_callback_QTableWidget_Event(void*, intptr_t, QEvent*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QTableWidget_MimeTypes(void*, intptr_t);
QMimeData* miqt_exec_callback_QTableWidget_MimeData(void*, intptr_t, struct miqt_array /* of QTableWidgetItem* */ );
bool miqt_exec_callback_QTableWidget_DropMimeData(void*, intptr_t, int, int, QMimeData*, int);
int miqt_exec_callback_QTableWidget_SupportedDropActions(void*, intptr_t);
void miqt_exec_callback_QTableWidget_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTableWidget_SetRootIndex(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableWidget_SetSelectionModel(void*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QTableWidget_DoItemsLayout(void*, intptr_t);
QRect* miqt_exec_callback_QTableWidget_VisualRect(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableWidget_ScrollTo(void*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QTableWidget_IndexAt(void*, intptr_t, QPoint*);
void miqt_exec_callback_QTableWidget_ScrollContentsBy(void*, intptr_t, int, int);
QStyleOptionViewItem* miqt_exec_callback_QTableWidget_ViewOptions(void*, intptr_t);
void miqt_exec_callback_QTableWidget_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTableWidget_TimerEvent(void*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QTableWidget_HorizontalOffset(void*, intptr_t);
int miqt_exec_callback_QTableWidget_VerticalOffset(void*, intptr_t);
QModelIndex* miqt_exec_callback_QTableWidget_MoveCursor(void*, intptr_t, int, int);
void miqt_exec_callback_QTableWidget_SetSelection(void*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QTableWidget_VisualRegionForSelection(void*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QTableWidget_SelectedIndexes(void*, intptr_t);
void miqt_exec_callback_QTableWidget_UpdateGeometries(void*, intptr_t);
QSize* miqt_exec_callback_QTableWidget_ViewportSizeHint(void*, intptr_t);
int miqt_exec_callback_QTableWidget_SizeHintForRow(void*, intptr_t, int);
int miqt_exec_callback_QTableWidget_SizeHintForColumn(void*, intptr_t, int);
void miqt_exec_callback_QTableWidget_VerticalScrollbarAction(void*, intptr_t, int);
void miqt_exec_callback_QTableWidget_HorizontalScrollbarAction(void*, intptr_t, int);
bool miqt_exec_callback_QTableWidget_IsIndexHidden(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableWidget_SelectionChanged(void*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QTableWidget_CurrentChanged(void*, intptr_t, QModelIndex*, QModelIndex*);
#ifdef __cplusplus
} /* extern C */
#endif

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

class MiqtVirtualQTableWidgetItem final : public QTableWidgetItem {
public:

	MiqtVirtualQTableWidgetItem(): QTableWidgetItem() {};
	MiqtVirtualQTableWidgetItem(const QString& text): QTableWidgetItem(text) {};
	MiqtVirtualQTableWidgetItem(const QIcon& icon, const QString& text): QTableWidgetItem(icon, text) {};
	MiqtVirtualQTableWidgetItem(const QTableWidgetItem& other): QTableWidgetItem(other) {};
	MiqtVirtualQTableWidgetItem(int typeVal): QTableWidgetItem(typeVal) {};
	MiqtVirtualQTableWidgetItem(const QString& text, int typeVal): QTableWidgetItem(text, typeVal) {};
	MiqtVirtualQTableWidgetItem(const QIcon& icon, const QString& text, int typeVal): QTableWidgetItem(icon, text, typeVal) {};

	virtual ~MiqtVirtualQTableWidgetItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QTableWidgetItem* clone() const override {
		if (handle__Clone == 0) {
			return QTableWidgetItem::clone();
		}
		

		QTableWidgetItem* callback_return_value = miqt_exec_callback_QTableWidgetItem_Clone(const_cast<MiqtVirtualQTableWidgetItem*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTableWidgetItem* virtualbase_Clone() const {

		return QTableWidgetItem::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(int role) const override {
		if (handle__Data == 0) {
			return QTableWidgetItem::data(role);
		}
		
		int sigval1 = role;

		QVariant* callback_return_value = miqt_exec_callback_QTableWidgetItem_Data(const_cast<MiqtVirtualQTableWidgetItem*>(this), handle__Data, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Data(int role) const {

		return new QVariant(QTableWidgetItem::data(static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setData(int role, const QVariant& value) override {
		if (handle__SetData == 0) {
			QTableWidgetItem::setData(role, value);
			return;
		}
		
		int sigval1 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QTableWidgetItem_SetData(this, handle__SetData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetData(int role, QVariant* value) {

		QTableWidgetItem::setData(static_cast<int>(role), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OperatorLesser = 0;

	// Subclass to allow providing a Go implementation
	virtual bool operator<(const QTableWidgetItem& other) const override {
		if (handle__OperatorLesser == 0) {
			return QTableWidgetItem::operator<(other);
		}
		
		const QTableWidgetItem& other_ret = other;
		// Cast returned reference into pointer
		QTableWidgetItem* sigval1 = const_cast<QTableWidgetItem*>(&other_ret);

		bool callback_return_value = miqt_exec_callback_QTableWidgetItem_OperatorLesser(const_cast<MiqtVirtualQTableWidgetItem*>(this), handle__OperatorLesser, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_OperatorLesser(QTableWidgetItem* other) const {

		return QTableWidgetItem::operator<(*other);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Read = 0;

	// Subclass to allow providing a Go implementation
	virtual void read(QDataStream& in) override {
		if (handle__Read == 0) {
			QTableWidgetItem::read(in);
			return;
		}
		
		QDataStream& in_ret = in;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &in_ret;

		miqt_exec_callback_QTableWidgetItem_Read(this, handle__Read, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Read(QDataStream* in) {

		QTableWidgetItem::read(*in);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Write = 0;

	// Subclass to allow providing a Go implementation
	virtual void write(QDataStream& out) const override {
		if (handle__Write == 0) {
			QTableWidgetItem::write(out);
			return;
		}
		
		QDataStream& out_ret = out;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &out_ret;

		miqt_exec_callback_QTableWidgetItem_Write(const_cast<MiqtVirtualQTableWidgetItem*>(this), handle__Write, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Write(QDataStream* out) const {

		QTableWidgetItem::write(*out);

	}

};

QTableWidgetItem* QTableWidgetItem_new() {
	return new MiqtVirtualQTableWidgetItem();
}

QTableWidgetItem* QTableWidgetItem_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQTableWidgetItem(text_QString);
}

QTableWidgetItem* QTableWidgetItem_new3(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQTableWidgetItem(*icon, text_QString);
}

QTableWidgetItem* QTableWidgetItem_new4(QTableWidgetItem* other) {
	return new MiqtVirtualQTableWidgetItem(*other);
}

QTableWidgetItem* QTableWidgetItem_new5(int typeVal) {
	return new MiqtVirtualQTableWidgetItem(static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_new6(struct miqt_string text, int typeVal) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQTableWidgetItem(text_QString, static_cast<int>(typeVal));
}

QTableWidgetItem* QTableWidgetItem_new7(QIcon* icon, struct miqt_string text, int typeVal) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQTableWidgetItem(*icon, text_QString, static_cast<int>(typeVal));
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

struct miqt_string QTableWidgetItem_Text(const QTableWidgetItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_SetText(QTableWidgetItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

QIcon* QTableWidgetItem_Icon(const QTableWidgetItem* self) {
	return new QIcon(self->icon());
}

void QTableWidgetItem_SetIcon(QTableWidgetItem* self, QIcon* icon) {
	self->setIcon(*icon);
}

struct miqt_string QTableWidgetItem_StatusTip(const QTableWidgetItem* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_SetStatusTip(QTableWidgetItem* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QTableWidgetItem_ToolTip(const QTableWidgetItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_SetToolTip(QTableWidgetItem* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string QTableWidgetItem_WhatsThis(const QTableWidgetItem* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_SetWhatsThis(QTableWidgetItem* self, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
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

int QTableWidgetItem_CheckState(const QTableWidgetItem* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<int>(_ret);
}

void QTableWidgetItem_SetCheckState(QTableWidgetItem* self, int state) {
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
	return (*self < *other);
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

void QTableWidgetItem_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) )->handle__Clone = slot;
}

QTableWidgetItem* QTableWidgetItem_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_Clone();
}

void QTableWidgetItem_override_virtual_Data(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) )->handle__Data = slot;
}

QVariant* QTableWidgetItem_virtualbase_Data(const void* self, int role) {
	return ( (const MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_Data(role);
}

void QTableWidgetItem_override_virtual_SetData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) )->handle__SetData = slot;
}

void QTableWidgetItem_virtualbase_SetData(void* self, int role, QVariant* value) {
	( (MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_SetData(role, value);
}

void QTableWidgetItem_override_virtual_OperatorLesser(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) )->handle__OperatorLesser = slot;
}

bool QTableWidgetItem_virtualbase_OperatorLesser(const void* self, QTableWidgetItem* other) {
	return ( (const MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_OperatorLesser(other);
}

void QTableWidgetItem_override_virtual_Read(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) )->handle__Read = slot;
}

void QTableWidgetItem_virtualbase_Read(void* self, QDataStream* in) {
	( (MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_Read(in);
}

void QTableWidgetItem_override_virtual_Write(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) )->handle__Write = slot;
}

void QTableWidgetItem_virtualbase_Write(const void* self, QDataStream* out) {
	( (const MiqtVirtualQTableWidgetItem*)(self) )->virtualbase_Write(out);
}

void QTableWidgetItem_Delete(QTableWidgetItem* self) {
	delete self;
}

class MiqtVirtualQTableWidget final : public QTableWidget {
public:

	MiqtVirtualQTableWidget(QWidget* parent): QTableWidget(parent) {};
	MiqtVirtualQTableWidget(): QTableWidget() {};
	MiqtVirtualQTableWidget(int rows, int columns): QTableWidget(rows, columns) {};
	MiqtVirtualQTableWidget(int rows, int columns, QWidget* parent): QTableWidget(rows, columns, parent) {};

	virtual ~MiqtVirtualQTableWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QTableWidget::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QTableWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QTableWidget::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__MimeTypes == 0) {
			return QTableWidget::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QTableWidget_MimeTypes(const_cast<MiqtVirtualQTableWidget*>(this), handle__MimeTypes);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of struct miqt_string */  virtualbase_MimeTypes() const {

		QStringList _ret = QTableWidget::mimeTypes();
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
		for (size_t i = 0, e = _ret.length(); i < e; ++i) {
			QString _lv_ret = _ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray _lv_b = _lv_ret.toUtf8();
			struct miqt_string _lv_ms;
			_lv_ms.len = _lv_b.length();
			_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
			memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
			_arr[i] = _lv_ms;
		}
		struct miqt_array _out;
		_out.len = _ret.length();
		_out.data = static_cast<void*>(_arr);
		return _out;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QList<QTableWidgetItem *> items) const override {
		if (handle__MimeData == 0) {
			return QTableWidget::mimeData(items);
		}
		
		const QList<QTableWidgetItem *> items_ret = items;
		// Convert QList<> from C++ memory to manually-managed C memory
		QTableWidgetItem** items_arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * items_ret.length()));
		for (size_t i = 0, e = items_ret.length(); i < e; ++i) {
			items_arr[i] = items_ret[i];
		}
		struct miqt_array items_out;
		items_out.len = items_ret.length();
		items_out.data = static_cast<void*>(items_arr);
		struct miqt_array /* of QTableWidgetItem* */  sigval1 = items_out;

		QMimeData* callback_return_value = miqt_exec_callback_QTableWidget_MimeData(const_cast<MiqtVirtualQTableWidget*>(this), handle__MimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_MimeData(struct miqt_array /* of QTableWidgetItem* */  items) const {
		QList<QTableWidgetItem *> items_QList;
		items_QList.reserve(items.len);
		QTableWidgetItem** items_arr = static_cast<QTableWidgetItem**>(items.data);
		for(size_t i = 0; i < items.len; ++i) {
			items_QList.push_back(items_arr[i]);
		}

		return QTableWidget::mimeData(items_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(int row, int column, const QMimeData* data, Qt::DropAction action) override {
		if (handle__DropMimeData == 0) {
			return QTableWidget::dropMimeData(row, column, data, action);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		QMimeData* sigval3 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval4 = static_cast<int>(action_ret);

		bool callback_return_value = miqt_exec_callback_QTableWidget_DropMimeData(this, handle__DropMimeData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DropMimeData(int row, int column, QMimeData* data, int action) {

		return QTableWidget::dropMimeData(static_cast<int>(row), static_cast<int>(column), data, static_cast<Qt::DropAction>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__SupportedDropActions == 0) {
			return QTableWidget::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QTableWidget_SupportedDropActions(const_cast<MiqtVirtualQTableWidget*>(this), handle__SupportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDropActions() const {

		Qt::DropActions _ret = QTableWidget::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QTableWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QTableWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__SetRootIndex == 0) {
			QTableWidget::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QTableWidget_SetRootIndex(this, handle__SetRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetRootIndex(QModelIndex* index) {

		QTableWidget::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__SetSelectionModel == 0) {
			QTableWidget::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QTableWidget_SetSelectionModel(this, handle__SetSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelectionModel(QItemSelectionModel* selectionModel) {

		QTableWidget::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__DoItemsLayout == 0) {
			QTableWidget::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QTableWidget_DoItemsLayout(this, handle__DoItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoItemsLayout() {

		QTableWidget::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__VisualRect == 0) {
			return QTableWidget::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QTableWidget_VisualRect(const_cast<MiqtVirtualQTableWidget*>(this), handle__VisualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_VisualRect(QModelIndex* index) const {

		return new QRect(QTableWidget::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__ScrollTo == 0) {
			QTableWidget::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QTableWidget_ScrollTo(this, handle__ScrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollTo(QModelIndex* index, int hint) {

		QTableWidget::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__IndexAt == 0) {
			return QTableWidget::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTableWidget_IndexAt(const_cast<MiqtVirtualQTableWidget*>(this), handle__IndexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_IndexAt(QPoint* p) const {

		return new QModelIndex(QTableWidget::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QTableWidget::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QTableWidget_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QTableWidget::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (handle__ViewOptions == 0) {
			return QTableWidget::viewOptions();
		}
		

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QTableWidget_ViewOptions(const_cast<MiqtVirtualQTableWidget*>(this), handle__ViewOptions);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QStyleOptionViewItem* virtualbase_ViewOptions() const {

		return new QStyleOptionViewItem(QTableWidget::viewOptions());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QTableWidget::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QTableWidget_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QTableWidget::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QTableWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTableWidget_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QTableWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__HorizontalOffset == 0) {
			return QTableWidget::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTableWidget_HorizontalOffset(const_cast<MiqtVirtualQTableWidget*>(this), handle__HorizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HorizontalOffset() const {

		return QTableWidget::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__VerticalOffset == 0) {
			return QTableWidget::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QTableWidget_VerticalOffset(const_cast<MiqtVirtualQTableWidget*>(this), handle__VerticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_VerticalOffset() const {

		return QTableWidget::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__MoveCursor == 0) {
			return QTableWidget::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTableWidget_MoveCursor(this, handle__MoveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MoveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QTableWidget::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__SetSelection == 0) {
			QTableWidget::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QTableWidget_SetSelection(this, handle__SetSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelection(QRect* rect, int command) {

		QTableWidget::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__VisualRegionForSelection == 0) {
			return QTableWidget::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QTableWidget_VisualRegionForSelection(const_cast<MiqtVirtualQTableWidget*>(this), handle__VisualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_VisualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QTableWidget::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__SelectedIndexes == 0) {
			return QTableWidget::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QTableWidget_SelectedIndexes(const_cast<MiqtVirtualQTableWidget*>(this), handle__SelectedIndexes);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of QModelIndex* */  virtualbase_SelectedIndexes() const {

		QModelIndexList _ret = QTableWidget::selectedIndexes();
		// Convert QList<> from C++ memory to manually-managed C memory
		QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
		for (size_t i = 0, e = _ret.length(); i < e; ++i) {
			_arr[i] = new QModelIndex(_ret[i]);
		}
		struct miqt_array _out;
		_out.len = _ret.length();
		_out.data = static_cast<void*>(_arr);
		return _out;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__UpdateGeometries == 0) {
			QTableWidget::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QTableWidget_UpdateGeometries(this, handle__UpdateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometries() {

		QTableWidget::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QTableWidget::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTableWidget_ViewportSizeHint(const_cast<MiqtVirtualQTableWidget*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QTableWidget::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__SizeHintForRow == 0) {
			return QTableWidget::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QTableWidget_SizeHintForRow(const_cast<MiqtVirtualQTableWidget*>(this), handle__SizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForRow(int row) const {

		return QTableWidget::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__SizeHintForColumn == 0) {
			return QTableWidget::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QTableWidget_SizeHintForColumn(const_cast<MiqtVirtualQTableWidget*>(this), handle__SizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SizeHintForColumn(int column) const {

		return QTableWidget::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__VerticalScrollbarAction == 0) {
			QTableWidget::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTableWidget_VerticalScrollbarAction(this, handle__VerticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VerticalScrollbarAction(int action) {

		QTableWidget::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__HorizontalScrollbarAction == 0) {
			QTableWidget::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QTableWidget_HorizontalScrollbarAction(this, handle__HorizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HorizontalScrollbarAction(int action) {

		QTableWidget::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__IsIndexHidden == 0) {
			return QTableWidget::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QTableWidget_IsIndexHidden(const_cast<MiqtVirtualQTableWidget*>(this), handle__IsIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsIndexHidden(QModelIndex* index) const {

		return QTableWidget::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__SelectionChanged == 0) {
			QTableWidget::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QTableWidget_SelectionChanged(this, handle__SelectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QTableWidget::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CurrentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__CurrentChanged == 0) {
			QTableWidget::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QTableWidget_CurrentChanged(this, handle__CurrentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CurrentChanged(QModelIndex* current, QModelIndex* previous) {

		QTableWidget::currentChanged(*current, *previous);

	}

};

QTableWidget* QTableWidget_new(QWidget* parent) {
	return new MiqtVirtualQTableWidget(parent);
}

QTableWidget* QTableWidget_new2() {
	return new MiqtVirtualQTableWidget();
}

QTableWidget* QTableWidget_new3(int rows, int columns) {
	return new MiqtVirtualQTableWidget(static_cast<int>(rows), static_cast<int>(columns));
}

QTableWidget* QTableWidget_new4(int rows, int columns, QWidget* parent) {
	return new MiqtVirtualQTableWidget(static_cast<int>(rows), static_cast<int>(columns), parent);
}

void QTableWidget_virtbase(QTableWidget* src, QTableView** outptr_QTableView) {
	*outptr_QTableView = static_cast<QTableView*>(src);
}

QMetaObject* QTableWidget_MetaObject(const QTableWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTableWidget_Metacast(QTableWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTableWidget_Tr(const char* s) {
	QString _ret = QTableWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableWidget_TrUtf8(const char* s) {
	QString _ret = QTableWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

void QTableWidget_SetVerticalHeaderLabels(QTableWidget* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->setVerticalHeaderLabels(labels_QList);
}

void QTableWidget_SetHorizontalHeaderLabels(QTableWidget* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
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

struct miqt_array /* of QTableWidgetSelectionRange* */  QTableWidget_SelectedRanges(const QTableWidget* self) {
	QList<QTableWidgetSelectionRange> _ret = self->selectedRanges();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTableWidgetSelectionRange** _arr = static_cast<QTableWidgetSelectionRange**>(malloc(sizeof(QTableWidgetSelectionRange*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTableWidgetSelectionRange(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QTableWidgetItem* */  QTableWidget_SelectedItems(const QTableWidget* self) {
	QList<QTableWidgetItem *> _ret = self->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QTableWidgetItem* */  QTableWidget_FindItems(const QTableWidget* self, struct miqt_string text, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QList<QTableWidgetItem *> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
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

void QTableWidget_connect_ItemPressed(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemPressed), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemPressed(slot, sigval1);
	});
}

void QTableWidget_ItemClicked(QTableWidget* self, QTableWidgetItem* item) {
	self->itemClicked(item);
}

void QTableWidget_connect_ItemClicked(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemClicked), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemClicked(slot, sigval1);
	});
}

void QTableWidget_ItemDoubleClicked(QTableWidget* self, QTableWidgetItem* item) {
	self->itemDoubleClicked(item);
}

void QTableWidget_connect_ItemDoubleClicked(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemDoubleClicked), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemDoubleClicked(slot, sigval1);
	});
}

void QTableWidget_ItemActivated(QTableWidget* self, QTableWidgetItem* item) {
	self->itemActivated(item);
}

void QTableWidget_connect_ItemActivated(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemActivated), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemActivated(slot, sigval1);
	});
}

void QTableWidget_ItemEntered(QTableWidget* self, QTableWidgetItem* item) {
	self->itemEntered(item);
}

void QTableWidget_connect_ItemEntered(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemEntered), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemEntered(slot, sigval1);
	});
}

void QTableWidget_ItemChanged(QTableWidget* self, QTableWidgetItem* item) {
	self->itemChanged(item);
}

void QTableWidget_connect_ItemChanged(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemChanged), self, [=](QTableWidgetItem* item) {
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_ItemChanged(slot, sigval1);
	});
}

void QTableWidget_CurrentItemChanged(QTableWidget* self, QTableWidgetItem* current, QTableWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QTableWidget_connect_CurrentItemChanged(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*, QTableWidgetItem*)>(&QTableWidget::currentItemChanged), self, [=](QTableWidgetItem* current, QTableWidgetItem* previous) {
		QTableWidgetItem* sigval1 = current;
		QTableWidgetItem* sigval2 = previous;
		miqt_exec_callback_QTableWidget_CurrentItemChanged(slot, sigval1, sigval2);
	});
}

void QTableWidget_ItemSelectionChanged(QTableWidget* self) {
	self->itemSelectionChanged();
}

void QTableWidget_connect_ItemSelectionChanged(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)()>(&QTableWidget::itemSelectionChanged), self, [=]() {
		miqt_exec_callback_QTableWidget_ItemSelectionChanged(slot);
	});
}

void QTableWidget_CellPressed(QTableWidget* self, int row, int column) {
	self->cellPressed(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellPressed(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellPressed), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellPressed(slot, sigval1, sigval2);
	});
}

void QTableWidget_CellClicked(QTableWidget* self, int row, int column) {
	self->cellClicked(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellClicked(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellClicked), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellClicked(slot, sigval1, sigval2);
	});
}

void QTableWidget_CellDoubleClicked(QTableWidget* self, int row, int column) {
	self->cellDoubleClicked(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellDoubleClicked(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellDoubleClicked), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellDoubleClicked(slot, sigval1, sigval2);
	});
}

void QTableWidget_CellActivated(QTableWidget* self, int row, int column) {
	self->cellActivated(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellActivated(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellActivated), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellActivated(slot, sigval1, sigval2);
	});
}

void QTableWidget_CellEntered(QTableWidget* self, int row, int column) {
	self->cellEntered(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellEntered(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellEntered), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellEntered(slot, sigval1, sigval2);
	});
}

void QTableWidget_CellChanged(QTableWidget* self, int row, int column) {
	self->cellChanged(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_connect_CellChanged(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellChanged), self, [=](int row, int column) {
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_CellChanged(slot, sigval1, sigval2);
	});
}

void QTableWidget_CurrentCellChanged(QTableWidget* self, int currentRow, int currentColumn, int previousRow, int previousColumn) {
	self->currentCellChanged(static_cast<int>(currentRow), static_cast<int>(currentColumn), static_cast<int>(previousRow), static_cast<int>(previousColumn));
}

void QTableWidget_connect_CurrentCellChanged(QTableWidget* self, intptr_t slot) {
	MiqtVirtualQTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int, int, int)>(&QTableWidget::currentCellChanged), self, [=](int currentRow, int currentColumn, int previousRow, int previousColumn) {
		int sigval1 = currentRow;
		int sigval2 = currentColumn;
		int sigval3 = previousRow;
		int sigval4 = previousColumn;
		miqt_exec_callback_QTableWidget_CurrentCellChanged(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

struct miqt_string QTableWidget_Tr2(const char* s, const char* c) {
	QString _ret = QTableWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTableWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableWidget_TrUtf82(const char* s, const char* c) {
	QString _ret = QTableWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableWidget_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTableWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidget_SortItems2(QTableWidget* self, int column, int order) {
	self->sortItems(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTableWidget_ScrollToItem2(QTableWidget* self, QTableWidgetItem* item, int hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

void QTableWidget_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__Event = slot;
}

bool QTableWidget_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_Event(e);
}

void QTableWidget_override_virtual_MimeTypes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__MimeTypes = slot;
}

struct miqt_array /* of struct miqt_string */  QTableWidget_virtualbase_MimeTypes(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_MimeTypes();
}

void QTableWidget_override_virtual_MimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__MimeData = slot;
}

QMimeData* QTableWidget_virtualbase_MimeData(const void* self, struct miqt_array /* of QTableWidgetItem* */  items) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_MimeData(items);
}

void QTableWidget_override_virtual_DropMimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__DropMimeData = slot;
}

bool QTableWidget_virtualbase_DropMimeData(void* self, int row, int column, QMimeData* data, int action) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_DropMimeData(row, column, data, action);
}

void QTableWidget_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__SupportedDropActions = slot;
}

int QTableWidget_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_SupportedDropActions();
}

void QTableWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__DropEvent = slot;
}

void QTableWidget_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_DropEvent(event);
}

void QTableWidget_override_virtual_SetRootIndex(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__SetRootIndex = slot;
}

void QTableWidget_virtualbase_SetRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_SetRootIndex(index);
}

void QTableWidget_override_virtual_SetSelectionModel(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__SetSelectionModel = slot;
}

void QTableWidget_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_SetSelectionModel(selectionModel);
}

void QTableWidget_override_virtual_DoItemsLayout(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__DoItemsLayout = slot;
}

void QTableWidget_virtualbase_DoItemsLayout(void* self) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_DoItemsLayout();
}

void QTableWidget_override_virtual_VisualRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__VisualRect = slot;
}

QRect* QTableWidget_virtualbase_VisualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_VisualRect(index);
}

void QTableWidget_override_virtual_ScrollTo(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__ScrollTo = slot;
}

void QTableWidget_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_ScrollTo(index, hint);
}

void QTableWidget_override_virtual_IndexAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__IndexAt = slot;
}

QModelIndex* QTableWidget_virtualbase_IndexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_IndexAt(p);
}

void QTableWidget_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__ScrollContentsBy = slot;
}

void QTableWidget_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

void QTableWidget_override_virtual_ViewOptions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__ViewOptions = slot;
}

QStyleOptionViewItem* QTableWidget_virtualbase_ViewOptions(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_ViewOptions();
}

void QTableWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__PaintEvent = slot;
}

void QTableWidget_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_PaintEvent(e);
}

void QTableWidget_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__TimerEvent = slot;
}

void QTableWidget_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_TimerEvent(event);
}

void QTableWidget_override_virtual_HorizontalOffset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__HorizontalOffset = slot;
}

int QTableWidget_virtualbase_HorizontalOffset(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_HorizontalOffset();
}

void QTableWidget_override_virtual_VerticalOffset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__VerticalOffset = slot;
}

int QTableWidget_virtualbase_VerticalOffset(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_VerticalOffset();
}

void QTableWidget_override_virtual_MoveCursor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__MoveCursor = slot;
}

QModelIndex* QTableWidget_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQTableWidget*)(self) )->virtualbase_MoveCursor(cursorAction, modifiers);
}

void QTableWidget_override_virtual_SetSelection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__SetSelection = slot;
}

void QTableWidget_virtualbase_SetSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_SetSelection(rect, command);
}

void QTableWidget_override_virtual_VisualRegionForSelection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__VisualRegionForSelection = slot;
}

QRegion* QTableWidget_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_VisualRegionForSelection(selection);
}

void QTableWidget_override_virtual_SelectedIndexes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__SelectedIndexes = slot;
}

struct miqt_array /* of QModelIndex* */  QTableWidget_virtualbase_SelectedIndexes(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_SelectedIndexes();
}

void QTableWidget_override_virtual_UpdateGeometries(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__UpdateGeometries = slot;
}

void QTableWidget_virtualbase_UpdateGeometries(void* self) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_UpdateGeometries();
}

void QTableWidget_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__ViewportSizeHint = slot;
}

QSize* QTableWidget_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_ViewportSizeHint();
}

void QTableWidget_override_virtual_SizeHintForRow(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__SizeHintForRow = slot;
}

int QTableWidget_virtualbase_SizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_SizeHintForRow(row);
}

void QTableWidget_override_virtual_SizeHintForColumn(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__SizeHintForColumn = slot;
}

int QTableWidget_virtualbase_SizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_SizeHintForColumn(column);
}

void QTableWidget_override_virtual_VerticalScrollbarAction(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__VerticalScrollbarAction = slot;
}

void QTableWidget_virtualbase_VerticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_VerticalScrollbarAction(action);
}

void QTableWidget_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__HorizontalScrollbarAction = slot;
}

void QTableWidget_virtualbase_HorizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_HorizontalScrollbarAction(action);
}

void QTableWidget_override_virtual_IsIndexHidden(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__IsIndexHidden = slot;
}

bool QTableWidget_virtualbase_IsIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTableWidget*)(self) )->virtualbase_IsIndexHidden(index);
}

void QTableWidget_override_virtual_SelectionChanged(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__SelectionChanged = slot;
}

void QTableWidget_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_SelectionChanged(selected, deselected);
}

void QTableWidget_override_virtual_CurrentChanged(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) )->handle__CurrentChanged = slot;
}

void QTableWidget_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQTableWidget*)(self) )->virtualbase_CurrentChanged(current, previous);
}

void QTableWidget_Delete(QTableWidget* self) {
	delete self;
}

