#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QBrush>
#include <QDataStream>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFont>
#include <QFrame>
#include <QIcon>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QList>
#include <QListView>
#include <QListWidget>
#include <QListWidgetItem>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qlistwidget.h>
#include "gen_qlistwidget.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQListWidgetItem : public virtual QListWidgetItem {
public:

	MiqtVirtualQListWidgetItem(): QListWidgetItem() {};
	MiqtVirtualQListWidgetItem(const QString& text): QListWidgetItem(text) {};
	MiqtVirtualQListWidgetItem(const QIcon& icon, const QString& text): QListWidgetItem(icon, text) {};
	MiqtVirtualQListWidgetItem(const QListWidgetItem& other): QListWidgetItem(other) {};
	MiqtVirtualQListWidgetItem(QListWidget* listview): QListWidgetItem(listview) {};
	MiqtVirtualQListWidgetItem(QListWidget* listview, int typeVal): QListWidgetItem(listview, typeVal) {};
	MiqtVirtualQListWidgetItem(const QString& text, QListWidget* listview): QListWidgetItem(text, listview) {};
	MiqtVirtualQListWidgetItem(const QString& text, QListWidget* listview, int typeVal): QListWidgetItem(text, listview, typeVal) {};
	MiqtVirtualQListWidgetItem(const QIcon& icon, const QString& text, QListWidget* listview): QListWidgetItem(icon, text, listview) {};
	MiqtVirtualQListWidgetItem(const QIcon& icon, const QString& text, QListWidget* listview, int typeVal): QListWidgetItem(icon, text, listview, typeVal) {};

	virtual ~MiqtVirtualQListWidgetItem() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QListWidgetItem* clone() const override {
		if (handle__Clone == 0) {
			return QListWidgetItem::clone();
		}
		

		QListWidgetItem* callback_return_value = miqt_exec_callback_QListWidgetItem_Clone(const_cast<MiqtVirtualQListWidgetItem*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QListWidgetItem* virtualbase_Clone() const {

		return QListWidgetItem::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(int role) const override {
		if (handle__Data == 0) {
			return QListWidgetItem::data(role);
		}
		
		int sigval1 = role;

		QVariant* callback_return_value = miqt_exec_callback_QListWidgetItem_Data(const_cast<MiqtVirtualQListWidgetItem*>(this), handle__Data, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Data(int role) const {

		return new QVariant(QListWidgetItem::data(static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setData(int role, const QVariant& value) override {
		if (handle__SetData == 0) {
			QListWidgetItem::setData(role, value);
			return;
		}
		
		int sigval1 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QListWidgetItem_SetData(this, handle__SetData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetData(int role, QVariant* value) {

		QListWidgetItem::setData(static_cast<int>(role), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OperatorLesser = 0;

	// Subclass to allow providing a Go implementation
	virtual bool operator<(const QListWidgetItem& other) const override {
		if (handle__OperatorLesser == 0) {
			return QListWidgetItem::operator<(other);
		}
		
		const QListWidgetItem& other_ret = other;
		// Cast returned reference into pointer
		QListWidgetItem* sigval1 = const_cast<QListWidgetItem*>(&other_ret);

		bool callback_return_value = miqt_exec_callback_QListWidgetItem_OperatorLesser(const_cast<MiqtVirtualQListWidgetItem*>(this), handle__OperatorLesser, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_OperatorLesser(QListWidgetItem* other) const {

		return QListWidgetItem::operator<(*other);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Read = 0;

	// Subclass to allow providing a Go implementation
	virtual void read(QDataStream& in) override {
		if (handle__Read == 0) {
			QListWidgetItem::read(in);
			return;
		}
		
		QDataStream& in_ret = in;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &in_ret;

		miqt_exec_callback_QListWidgetItem_Read(this, handle__Read, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Read(QDataStream* in) {

		QListWidgetItem::read(*in);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Write = 0;

	// Subclass to allow providing a Go implementation
	virtual void write(QDataStream& out) const override {
		if (handle__Write == 0) {
			QListWidgetItem::write(out);
			return;
		}
		
		QDataStream& out_ret = out;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &out_ret;

		miqt_exec_callback_QListWidgetItem_Write(const_cast<MiqtVirtualQListWidgetItem*>(this), handle__Write, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Write(QDataStream* out) const {

		QListWidgetItem::write(*out);

	}

};

QListWidgetItem* QListWidgetItem_new() {
	return new MiqtVirtualQListWidgetItem();
}

QListWidgetItem* QListWidgetItem_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(text_QString);
}

QListWidgetItem* QListWidgetItem_new3(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(*icon, text_QString);
}

QListWidgetItem* QListWidgetItem_new4(QListWidgetItem* other) {
	return new MiqtVirtualQListWidgetItem(*other);
}

QListWidgetItem* QListWidgetItem_new5(QListWidget* listview) {
	return new MiqtVirtualQListWidgetItem(listview);
}

QListWidgetItem* QListWidgetItem_new6(QListWidget* listview, int typeVal) {
	return new MiqtVirtualQListWidgetItem(listview, static_cast<int>(typeVal));
}

QListWidgetItem* QListWidgetItem_new7(struct miqt_string text, QListWidget* listview) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new8(struct miqt_string text, QListWidget* listview, int typeVal) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(text_QString, listview, static_cast<int>(typeVal));
}

QListWidgetItem* QListWidgetItem_new9(QIcon* icon, struct miqt_string text, QListWidget* listview) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(*icon, text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new10(QIcon* icon, struct miqt_string text, QListWidget* listview, int typeVal) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(*icon, text_QString, listview, static_cast<int>(typeVal));
}

QListWidgetItem* QListWidgetItem_Clone(const QListWidgetItem* self) {
	return self->clone();
}

QListWidget* QListWidgetItem_ListWidget(const QListWidgetItem* self) {
	return self->listWidget();
}

void QListWidgetItem_SetSelected(QListWidgetItem* self, bool selectVal) {
	self->setSelected(selectVal);
}

bool QListWidgetItem_IsSelected(const QListWidgetItem* self) {
	return self->isSelected();
}

void QListWidgetItem_SetHidden(QListWidgetItem* self, bool hide) {
	self->setHidden(hide);
}

bool QListWidgetItem_IsHidden(const QListWidgetItem* self) {
	return self->isHidden();
}

int QListWidgetItem_Flags(const QListWidgetItem* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QListWidgetItem_SetFlags(QListWidgetItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

struct miqt_string QListWidgetItem_Text(const QListWidgetItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_SetText(QListWidgetItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

QIcon* QListWidgetItem_Icon(const QListWidgetItem* self) {
	return new QIcon(self->icon());
}

void QListWidgetItem_SetIcon(QListWidgetItem* self, QIcon* icon) {
	self->setIcon(*icon);
}

struct miqt_string QListWidgetItem_StatusTip(const QListWidgetItem* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_SetStatusTip(QListWidgetItem* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QListWidgetItem_ToolTip(const QListWidgetItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_SetToolTip(QListWidgetItem* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string QListWidgetItem_WhatsThis(const QListWidgetItem* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_SetWhatsThis(QListWidgetItem* self, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(whatsThis_QString);
}

QFont* QListWidgetItem_Font(const QListWidgetItem* self) {
	return new QFont(self->font());
}

void QListWidgetItem_SetFont(QListWidgetItem* self, QFont* font) {
	self->setFont(*font);
}

int QListWidgetItem_TextAlignment(const QListWidgetItem* self) {
	return self->textAlignment();
}

void QListWidgetItem_SetTextAlignment(QListWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<int>(alignment));
}

void QListWidgetItem_SetTextAlignmentWithAlignment(QListWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<Qt::AlignmentFlag>(alignment));
}

void QListWidgetItem_SetTextAlignment2(QListWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<Qt::Alignment>(alignment));
}

QBrush* QListWidgetItem_Background(const QListWidgetItem* self) {
	return new QBrush(self->background());
}

void QListWidgetItem_SetBackground(QListWidgetItem* self, QBrush* brush) {
	self->setBackground(*brush);
}

QBrush* QListWidgetItem_Foreground(const QListWidgetItem* self) {
	return new QBrush(self->foreground());
}

void QListWidgetItem_SetForeground(QListWidgetItem* self, QBrush* brush) {
	self->setForeground(*brush);
}

int QListWidgetItem_CheckState(const QListWidgetItem* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<int>(_ret);
}

void QListWidgetItem_SetCheckState(QListWidgetItem* self, int state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QListWidgetItem_SizeHint(const QListWidgetItem* self) {
	return new QSize(self->sizeHint());
}

void QListWidgetItem_SetSizeHint(QListWidgetItem* self, QSize* size) {
	self->setSizeHint(*size);
}

QVariant* QListWidgetItem_Data(const QListWidgetItem* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QListWidgetItem_SetData(QListWidgetItem* self, int role, QVariant* value) {
	self->setData(static_cast<int>(role), *value);
}

bool QListWidgetItem_OperatorLesser(const QListWidgetItem* self, QListWidgetItem* other) {
	return (*self < *other);
}

void QListWidgetItem_Read(QListWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QListWidgetItem_Write(const QListWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QListWidgetItem_OperatorAssign(QListWidgetItem* self, QListWidgetItem* other) {
	self->operator=(*other);
}

int QListWidgetItem_Type(const QListWidgetItem* self) {
	return self->type();
}

void QListWidgetItem_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) )->handle__Clone = slot;
}

QListWidgetItem* QListWidgetItem_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQListWidgetItem*)(self) )->virtualbase_Clone();
}

void QListWidgetItem_override_virtual_Data(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) )->handle__Data = slot;
}

QVariant* QListWidgetItem_virtualbase_Data(const void* self, int role) {
	return ( (const MiqtVirtualQListWidgetItem*)(self) )->virtualbase_Data(role);
}

void QListWidgetItem_override_virtual_SetData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) )->handle__SetData = slot;
}

void QListWidgetItem_virtualbase_SetData(void* self, int role, QVariant* value) {
	( (MiqtVirtualQListWidgetItem*)(self) )->virtualbase_SetData(role, value);
}

void QListWidgetItem_override_virtual_OperatorLesser(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) )->handle__OperatorLesser = slot;
}

bool QListWidgetItem_virtualbase_OperatorLesser(const void* self, QListWidgetItem* other) {
	return ( (const MiqtVirtualQListWidgetItem*)(self) )->virtualbase_OperatorLesser(other);
}

void QListWidgetItem_override_virtual_Read(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) )->handle__Read = slot;
}

void QListWidgetItem_virtualbase_Read(void* self, QDataStream* in) {
	( (MiqtVirtualQListWidgetItem*)(self) )->virtualbase_Read(in);
}

void QListWidgetItem_override_virtual_Write(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) )->handle__Write = slot;
}

void QListWidgetItem_virtualbase_Write(const void* self, QDataStream* out) {
	( (const MiqtVirtualQListWidgetItem*)(self) )->virtualbase_Write(out);
}

void QListWidgetItem_Delete(QListWidgetItem* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQListWidgetItem*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQListWidget : public virtual QListWidget {
public:

	MiqtVirtualQListWidget(QWidget* parent): QListWidget(parent) {};
	MiqtVirtualQListWidget(): QListWidget() {};

	virtual ~MiqtVirtualQListWidget() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__SetSelectionModel == 0) {
			QListWidget::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QListWidget_SetSelectionModel(this, handle__SetSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelectionModel(QItemSelectionModel* selectionModel) {

		QListWidget::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QListWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QListWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QListWidget::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QListWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QListWidget::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__MimeTypes == 0) {
			return QListWidget::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QListWidget_MimeTypes(const_cast<MiqtVirtualQListWidget*>(this), handle__MimeTypes);
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

		QStringList _ret = QListWidget::mimeTypes();
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
	virtual QMimeData* mimeData(const QList<QListWidgetItem *>& items) const override {
		if (handle__MimeData == 0) {
			return QListWidget::mimeData(items);
		}
		
		const QList<QListWidgetItem *>& items_ret = items;
		// Convert QList<> from C++ memory to manually-managed C memory
		QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * items_ret.length()));
		for (size_t i = 0, e = items_ret.length(); i < e; ++i) {
			items_arr[i] = items_ret[i];
		}
		struct miqt_array items_out;
		items_out.len = items_ret.length();
		items_out.data = static_cast<void*>(items_arr);
		struct miqt_array /* of QListWidgetItem* */  sigval1 = items_out;

		QMimeData* callback_return_value = miqt_exec_callback_QListWidget_MimeData(const_cast<MiqtVirtualQListWidget*>(this), handle__MimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_MimeData(struct miqt_array /* of QListWidgetItem* */  items) const {
		QList<QListWidgetItem *> items_QList;
		items_QList.reserve(items.len);
		QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(items.data);
		for(size_t i = 0; i < items.len; ++i) {
			items_QList.push_back(items_arr[i]);
		}

		return QListWidget::mimeData(items_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(int index, const QMimeData* data, Qt::DropAction action) override {
		if (handle__DropMimeData == 0) {
			return QListWidget::dropMimeData(index, data, action);
		}
		
		int sigval1 = index;
		QMimeData* sigval2 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval3 = static_cast<int>(action_ret);

		bool callback_return_value = miqt_exec_callback_QListWidget_DropMimeData(this, handle__DropMimeData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DropMimeData(int index, QMimeData* data, int action) {

		return QListWidget::dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__SupportedDropActions == 0) {
			return QListWidget::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QListWidget_SupportedDropActions(const_cast<MiqtVirtualQListWidget*>(this), handle__SupportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDropActions() const {

		Qt::DropActions _ret = QListWidget::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__VisualRect == 0) {
			return QListWidget::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QListWidget_VisualRect(const_cast<MiqtVirtualQListWidget*>(this), handle__VisualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_VisualRect(QModelIndex* index) const {

		return new QRect(QListWidget::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__ScrollTo == 0) {
			QListWidget::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QListWidget_ScrollTo(this, handle__ScrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollTo(QModelIndex* index, int hint) {

		QListWidget::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__IndexAt == 0) {
			return QListWidget::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QListWidget_IndexAt(const_cast<MiqtVirtualQListWidget*>(this), handle__IndexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_IndexAt(QPoint* p) const {

		return new QModelIndex(QListWidget::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__DoItemsLayout == 0) {
			QListWidget::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QListWidget_DoItemsLayout(this, handle__DoItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoItemsLayout() {

		QListWidget::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__Reset == 0) {
			QListWidget::reset();
			return;
		}
		

		miqt_exec_callback_QListWidget_Reset(this, handle__Reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reset() {

		QListWidget::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__SetRootIndex == 0) {
			QListWidget::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QListWidget_SetRootIndex(this, handle__SetRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetRootIndex(QModelIndex* index) {

		QListWidget::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QListWidget::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QListWidget_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QListWidget::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
		if (handle__DataChanged == 0) {
			QListWidget::dataChanged(topLeft, bottomRight, roles);
			return;
		}
		
		const QModelIndex& topLeft_ret = topLeft;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
		const QModelIndex& bottomRight_ret = bottomRight;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
		const QList<int>& roles_ret = roles;
		// Convert QList<> from C++ memory to manually-managed C memory
		int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.length()));
		for (size_t i = 0, e = roles_ret.length(); i < e; ++i) {
			roles_arr[i] = roles_ret[i];
		}
		struct miqt_array roles_out;
		roles_out.len = roles_ret.length();
		roles_out.data = static_cast<void*>(roles_arr);
		struct miqt_array /* of int */  sigval3 = roles_out;

		miqt_exec_callback_QListWidget_DataChanged(this, handle__DataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QList<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QListWidget::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsInserted == 0) {
			QListWidget::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QListWidget_RowsInserted(this, handle__RowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsInserted(QModelIndex* parent, int start, int end) {

		QListWidget::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__RowsAboutToBeRemoved == 0) {
			QListWidget::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QListWidget_RowsAboutToBeRemoved(this, handle__RowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QListWidget::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__MouseMoveEvent == 0) {
			QListWidget::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* e) {

		QListWidget::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QListWidget::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QListWidget::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QListWidget::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QListWidget::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__TimerEvent == 0) {
			QListWidget::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* e) {

		QListWidget::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__ResizeEvent == 0) {
			QListWidget::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* e) {

		QListWidget::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__DragMoveEvent == 0) {
			QListWidget::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* e) {

		QListWidget::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__DragLeaveEvent == 0) {
			QListWidget::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* e) {

		QListWidget::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StartDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__StartDrag == 0) {
			QListWidget::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QListWidget_StartDrag(this, handle__StartDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StartDrag(int supportedActions) {

		QListWidget::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitViewItemOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
		if (handle__InitViewItemOption == 0) {
			QListWidget::initViewItemOption(option);
			return;
		}
		
		QStyleOptionViewItem* sigval1 = option;

		miqt_exec_callback_QListWidget_InitViewItemOption(const_cast<MiqtVirtualQListWidget*>(this), handle__InitViewItemOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitViewItemOption(QStyleOptionViewItem* option) const {

		QListWidget::initViewItemOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QListWidget::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QListWidget::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HorizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__HorizontalOffset == 0) {
			return QListWidget::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QListWidget_HorizontalOffset(const_cast<MiqtVirtualQListWidget*>(this), handle__HorizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HorizontalOffset() const {

		return QListWidget::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VerticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__VerticalOffset == 0) {
			return QListWidget::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QListWidget_VerticalOffset(const_cast<MiqtVirtualQListWidget*>(this), handle__VerticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_VerticalOffset() const {

		return QListWidget::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__MoveCursor == 0) {
			return QListWidget::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QListWidget_MoveCursor(this, handle__MoveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MoveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QListWidget::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__SetSelection == 0) {
			QListWidget::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QListWidget_SetSelection(this, handle__SetSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelection(QRect* rect, int command) {

		QListWidget::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__VisualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__VisualRegionForSelection == 0) {
			return QListWidget::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QListWidget_VisualRegionForSelection(const_cast<MiqtVirtualQListWidget*>(this), handle__VisualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_VisualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QListWidget::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__SelectedIndexes == 0) {
			return QListWidget::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QListWidget_SelectedIndexes(const_cast<MiqtVirtualQListWidget*>(this), handle__SelectedIndexes);
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

		QModelIndexList _ret = QListWidget::selectedIndexes();
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
			QListWidget::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QListWidget_UpdateGeometries(this, handle__UpdateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometries() {

		QListWidget::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__IsIndexHidden == 0) {
			return QListWidget::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QListWidget_IsIndexHidden(const_cast<MiqtVirtualQListWidget*>(this), handle__IsIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsIndexHidden(QModelIndex* index) const {

		return QListWidget::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__SelectionChanged == 0) {
			QListWidget::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QListWidget_SelectionChanged(this, handle__SelectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QListWidget::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CurrentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__CurrentChanged == 0) {
			QListWidget::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QListWidget_CurrentChanged(this, handle__CurrentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CurrentChanged(QModelIndex* current, QModelIndex* previous) {

		QListWidget::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QListWidget::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QListWidget_ViewportSizeHint(const_cast<MiqtVirtualQListWidget*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QListWidget::viewportSizeHint());

	}

};

QListWidget* QListWidget_new(QWidget* parent) {
	return new MiqtVirtualQListWidget(parent);
}

QListWidget* QListWidget_new2() {
	return new MiqtVirtualQListWidget();
}

void QListWidget_virtbase(QListWidget* src, QListView** outptr_QListView) {
	*outptr_QListView = static_cast<QListView*>(src);
}

QMetaObject* QListWidget_MetaObject(const QListWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QListWidget_Metacast(QListWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QListWidget_Tr(const char* s) {
	QString _ret = QListWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidget_SetSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QListWidgetItem* QListWidget_Item(const QListWidget* self, int row) {
	return self->item(static_cast<int>(row));
}

int QListWidget_Row(const QListWidget* self, QListWidgetItem* item) {
	return self->row(item);
}

void QListWidget_InsertItem(QListWidget* self, int row, QListWidgetItem* item) {
	self->insertItem(static_cast<int>(row), item);
}

void QListWidget_InsertItem2(QListWidget* self, int row, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->insertItem(static_cast<int>(row), label_QString);
}

void QListWidget_InsertItems(QListWidget* self, int row, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->insertItems(static_cast<int>(row), labels_QList);
}

void QListWidget_AddItem(QListWidget* self, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->addItem(label_QString);
}

void QListWidget_AddItemWithItem(QListWidget* self, QListWidgetItem* item) {
	self->addItem(item);
}

void QListWidget_AddItems(QListWidget* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->addItems(labels_QList);
}

QListWidgetItem* QListWidget_TakeItem(QListWidget* self, int row) {
	return self->takeItem(static_cast<int>(row));
}

int QListWidget_Count(const QListWidget* self) {
	return self->count();
}

QListWidgetItem* QListWidget_CurrentItem(const QListWidget* self) {
	return self->currentItem();
}

void QListWidget_SetCurrentItem(QListWidget* self, QListWidgetItem* item) {
	self->setCurrentItem(item);
}

void QListWidget_SetCurrentItem2(QListWidget* self, QListWidgetItem* item, int command) {
	self->setCurrentItem(item, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

int QListWidget_CurrentRow(const QListWidget* self) {
	return self->currentRow();
}

void QListWidget_SetCurrentRow(QListWidget* self, int row) {
	self->setCurrentRow(static_cast<int>(row));
}

void QListWidget_SetCurrentRow2(QListWidget* self, int row, int command) {
	self->setCurrentRow(static_cast<int>(row), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

QListWidgetItem* QListWidget_ItemAt(const QListWidget* self, QPoint* p) {
	return self->itemAt(*p);
}

QListWidgetItem* QListWidget_ItemAt2(const QListWidget* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QListWidget_VisualItemRect(const QListWidget* self, QListWidgetItem* item) {
	return new QRect(self->visualItemRect(item));
}

void QListWidget_SortItems(QListWidget* self) {
	self->sortItems();
}

void QListWidget_SetSortingEnabled(QListWidget* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QListWidget_IsSortingEnabled(const QListWidget* self) {
	return self->isSortingEnabled();
}

void QListWidget_EditItem(QListWidget* self, QListWidgetItem* item) {
	self->editItem(item);
}

void QListWidget_OpenPersistentEditor(QListWidget* self, QListWidgetItem* item) {
	self->openPersistentEditor(item);
}

void QListWidget_ClosePersistentEditor(QListWidget* self, QListWidgetItem* item) {
	self->closePersistentEditor(item);
}

bool QListWidget_IsPersistentEditorOpen(const QListWidget* self, QListWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QListWidget_ItemWidget(const QListWidget* self, QListWidgetItem* item) {
	return self->itemWidget(item);
}

void QListWidget_SetItemWidget(QListWidget* self, QListWidgetItem* item, QWidget* widget) {
	self->setItemWidget(item, widget);
}

void QListWidget_RemoveItemWidget(QListWidget* self, QListWidgetItem* item) {
	self->removeItemWidget(item);
}

struct miqt_array /* of QListWidgetItem* */  QListWidget_SelectedItems(const QListWidget* self) {
	QList<QListWidgetItem *> _ret = self->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QListWidgetItem* */  QListWidget_FindItems(const QListWidget* self, struct miqt_string text, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QList<QListWidgetItem *> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QListWidgetItem* */  QListWidget_Items(const QListWidget* self, QMimeData* data) {
	QList<QListWidgetItem *> _ret = self->items(data);
	// Convert QList<> from C++ memory to manually-managed C memory
	QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QModelIndex* QListWidget_IndexFromItem(const QListWidget* self, QListWidgetItem* item) {
	return new QModelIndex(self->indexFromItem(item));
}

QListWidgetItem* QListWidget_ItemFromIndex(const QListWidget* self, QModelIndex* index) {
	return self->itemFromIndex(*index);
}

void QListWidget_ScrollToItem(QListWidget* self, QListWidgetItem* item) {
	self->scrollToItem(item);
}

void QListWidget_Clear(QListWidget* self) {
	self->clear();
}

void QListWidget_ItemPressed(QListWidget* self, QListWidgetItem* item) {
	self->itemPressed(item);
}

void QListWidget_connect_ItemPressed(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemPressed), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemPressed(slot, sigval1);
	});
}

void QListWidget_ItemClicked(QListWidget* self, QListWidgetItem* item) {
	self->itemClicked(item);
}

void QListWidget_connect_ItemClicked(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemClicked), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemClicked(slot, sigval1);
	});
}

void QListWidget_ItemDoubleClicked(QListWidget* self, QListWidgetItem* item) {
	self->itemDoubleClicked(item);
}

void QListWidget_connect_ItemDoubleClicked(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemDoubleClicked), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemDoubleClicked(slot, sigval1);
	});
}

void QListWidget_ItemActivated(QListWidget* self, QListWidgetItem* item) {
	self->itemActivated(item);
}

void QListWidget_connect_ItemActivated(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemActivated), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemActivated(slot, sigval1);
	});
}

void QListWidget_ItemEntered(QListWidget* self, QListWidgetItem* item) {
	self->itemEntered(item);
}

void QListWidget_connect_ItemEntered(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemEntered), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemEntered(slot, sigval1);
	});
}

void QListWidget_ItemChanged(QListWidget* self, QListWidgetItem* item) {
	self->itemChanged(item);
}

void QListWidget_connect_ItemChanged(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemChanged), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_ItemChanged(slot, sigval1);
	});
}

void QListWidget_CurrentItemChanged(QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QListWidget_connect_CurrentItemChanged(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*, QListWidgetItem*)>(&QListWidget::currentItemChanged), self, [=](QListWidgetItem* current, QListWidgetItem* previous) {
		QListWidgetItem* sigval1 = current;
		QListWidgetItem* sigval2 = previous;
		miqt_exec_callback_QListWidget_CurrentItemChanged(slot, sigval1, sigval2);
	});
}

void QListWidget_CurrentTextChanged(QListWidget* self, struct miqt_string currentText) {
	QString currentText_QString = QString::fromUtf8(currentText.data, currentText.len);
	self->currentTextChanged(currentText_QString);
}

void QListWidget_connect_CurrentTextChanged(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(const QString&)>(&QListWidget::currentTextChanged), self, [=](const QString& currentText) {
		const QString currentText_ret = currentText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray currentText_b = currentText_ret.toUtf8();
		struct miqt_string currentText_ms;
		currentText_ms.len = currentText_b.length();
		currentText_ms.data = static_cast<char*>(malloc(currentText_ms.len));
		memcpy(currentText_ms.data, currentText_b.data(), currentText_ms.len);
		struct miqt_string sigval1 = currentText_ms;
		miqt_exec_callback_QListWidget_CurrentTextChanged(slot, sigval1);
	});
}

void QListWidget_CurrentRowChanged(QListWidget* self, int currentRow) {
	self->currentRowChanged(static_cast<int>(currentRow));
}

void QListWidget_connect_CurrentRowChanged(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(int)>(&QListWidget::currentRowChanged), self, [=](int currentRow) {
		int sigval1 = currentRow;
		miqt_exec_callback_QListWidget_CurrentRowChanged(slot, sigval1);
	});
}

void QListWidget_ItemSelectionChanged(QListWidget* self) {
	self->itemSelectionChanged();
}

void QListWidget_connect_ItemSelectionChanged(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)()>(&QListWidget::itemSelectionChanged), self, [=]() {
		miqt_exec_callback_QListWidget_ItemSelectionChanged(slot);
	});
}

struct miqt_string QListWidget_Tr2(const char* s, const char* c) {
	QString _ret = QListWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QListWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QListWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidget_SortItems1(QListWidget* self, int order) {
	self->sortItems(static_cast<Qt::SortOrder>(order));
}

void QListWidget_ScrollToItem2(QListWidget* self, QListWidgetItem* item, int hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

void QListWidget_override_virtual_SetSelectionModel(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__SetSelectionModel = slot;
}

void QListWidget_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_SetSelectionModel(selectionModel);
}

void QListWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__DropEvent = slot;
}

void QListWidget_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_DropEvent(event);
}

void QListWidget_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__Event = slot;
}

bool QListWidget_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_Event(e);
}

void QListWidget_override_virtual_MimeTypes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__MimeTypes = slot;
}

struct miqt_array /* of struct miqt_string */  QListWidget_virtualbase_MimeTypes(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_MimeTypes();
}

void QListWidget_override_virtual_MimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__MimeData = slot;
}

QMimeData* QListWidget_virtualbase_MimeData(const void* self, struct miqt_array /* of QListWidgetItem* */  items) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_MimeData(items);
}

void QListWidget_override_virtual_DropMimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__DropMimeData = slot;
}

bool QListWidget_virtualbase_DropMimeData(void* self, int index, QMimeData* data, int action) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_DropMimeData(index, data, action);
}

void QListWidget_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__SupportedDropActions = slot;
}

int QListWidget_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_SupportedDropActions();
}

void QListWidget_override_virtual_VisualRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__VisualRect = slot;
}

QRect* QListWidget_virtualbase_VisualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_VisualRect(index);
}

void QListWidget_override_virtual_ScrollTo(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__ScrollTo = slot;
}

void QListWidget_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_ScrollTo(index, hint);
}

void QListWidget_override_virtual_IndexAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__IndexAt = slot;
}

QModelIndex* QListWidget_virtualbase_IndexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_IndexAt(p);
}

void QListWidget_override_virtual_DoItemsLayout(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__DoItemsLayout = slot;
}

void QListWidget_virtualbase_DoItemsLayout(void* self) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_DoItemsLayout();
}

void QListWidget_override_virtual_Reset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__Reset = slot;
}

void QListWidget_virtualbase_Reset(void* self) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_Reset();
}

void QListWidget_override_virtual_SetRootIndex(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__SetRootIndex = slot;
}

void QListWidget_virtualbase_SetRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_SetRootIndex(index);
}

void QListWidget_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__ScrollContentsBy = slot;
}

void QListWidget_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

void QListWidget_override_virtual_DataChanged(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__DataChanged = slot;
}

void QListWidget_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_DataChanged(topLeft, bottomRight, roles);
}

void QListWidget_override_virtual_RowsInserted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__RowsInserted = slot;
}

void QListWidget_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_RowsInserted(parent, start, end);
}

void QListWidget_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__RowsAboutToBeRemoved = slot;
}

void QListWidget_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_RowsAboutToBeRemoved(parent, start, end);
}

void QListWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__MouseMoveEvent = slot;
}

void QListWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_MouseMoveEvent(e);
}

void QListWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__MouseReleaseEvent = slot;
}

void QListWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_MouseReleaseEvent(e);
}

void QListWidget_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__WheelEvent = slot;
}

void QListWidget_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_WheelEvent(e);
}

void QListWidget_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__TimerEvent = slot;
}

void QListWidget_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_TimerEvent(e);
}

void QListWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__ResizeEvent = slot;
}

void QListWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_ResizeEvent(e);
}

void QListWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__DragMoveEvent = slot;
}

void QListWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_DragMoveEvent(e);
}

void QListWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__DragLeaveEvent = slot;
}

void QListWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_DragLeaveEvent(e);
}

void QListWidget_override_virtual_StartDrag(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__StartDrag = slot;
}

void QListWidget_virtualbase_StartDrag(void* self, int supportedActions) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_StartDrag(supportedActions);
}

void QListWidget_override_virtual_InitViewItemOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__InitViewItemOption = slot;
}

void QListWidget_virtualbase_InitViewItemOption(const void* self, QStyleOptionViewItem* option) {
	( (const MiqtVirtualQListWidget*)(self) )->virtualbase_InitViewItemOption(option);
}

void QListWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__PaintEvent = slot;
}

void QListWidget_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_PaintEvent(e);
}

void QListWidget_override_virtual_HorizontalOffset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__HorizontalOffset = slot;
}

int QListWidget_virtualbase_HorizontalOffset(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_HorizontalOffset();
}

void QListWidget_override_virtual_VerticalOffset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__VerticalOffset = slot;
}

int QListWidget_virtualbase_VerticalOffset(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_VerticalOffset();
}

void QListWidget_override_virtual_MoveCursor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__MoveCursor = slot;
}

QModelIndex* QListWidget_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_MoveCursor(cursorAction, modifiers);
}

void QListWidget_override_virtual_SetSelection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__SetSelection = slot;
}

void QListWidget_virtualbase_SetSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_SetSelection(rect, command);
}

void QListWidget_override_virtual_VisualRegionForSelection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__VisualRegionForSelection = slot;
}

QRegion* QListWidget_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_VisualRegionForSelection(selection);
}

void QListWidget_override_virtual_SelectedIndexes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__SelectedIndexes = slot;
}

struct miqt_array /* of QModelIndex* */  QListWidget_virtualbase_SelectedIndexes(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_SelectedIndexes();
}

void QListWidget_override_virtual_UpdateGeometries(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__UpdateGeometries = slot;
}

void QListWidget_virtualbase_UpdateGeometries(void* self) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_UpdateGeometries();
}

void QListWidget_override_virtual_IsIndexHidden(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__IsIndexHidden = slot;
}

bool QListWidget_virtualbase_IsIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_IsIndexHidden(index);
}

void QListWidget_override_virtual_SelectionChanged(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__SelectionChanged = slot;
}

void QListWidget_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_SelectionChanged(selected, deselected);
}

void QListWidget_override_virtual_CurrentChanged(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__CurrentChanged = slot;
}

void QListWidget_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_CurrentChanged(current, previous);
}

void QListWidget_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) )->handle__ViewportSizeHint = slot;
}

QSize* QListWidget_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_ViewportSizeHint();
}

void QListWidget_Delete(QListWidget* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQListWidget*>( self );
	} else {
		delete self;
	}
}

