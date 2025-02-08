#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QDataStream>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFrame>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
#include <QListView>
#include <QListWidget>
#include <QListWidgetItem>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QStyleOptionViewItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qlistwidget.h>
#include "gen_qlistwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

QListWidgetItem* miqt_exec_callback_QListWidgetItem_clone(const QListWidgetItem*, intptr_t);
void miqt_exec_callback_QListWidgetItem_setBackgroundColor(QListWidgetItem*, intptr_t, QColor*);
QVariant* miqt_exec_callback_QListWidgetItem_data(const QListWidgetItem*, intptr_t, int);
void miqt_exec_callback_QListWidgetItem_setData(QListWidgetItem*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QListWidgetItem_operatorLesser(const QListWidgetItem*, intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidgetItem_read(QListWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_QListWidgetItem_write(const QListWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_QListWidget_itemPressed(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_itemClicked(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_itemDoubleClicked(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_itemActivated(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_itemEntered(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_itemChanged(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_currentItemChanged(intptr_t, QListWidgetItem*, QListWidgetItem*);
void miqt_exec_callback_QListWidget_currentTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QListWidget_currentRowChanged(intptr_t, int);
void miqt_exec_callback_QListWidget_itemSelectionChanged(intptr_t);
void miqt_exec_callback_QListWidget_setSelectionModel(QListWidget*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QListWidget_dropEvent(QListWidget*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QListWidget_event(QListWidget*, intptr_t, QEvent*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QListWidget_mimeTypes(const QListWidget*, intptr_t);
QMimeData* miqt_exec_callback_QListWidget_mimeData(const QListWidget*, intptr_t, struct miqt_array /* of QListWidgetItem* */ );
bool miqt_exec_callback_QListWidget_dropMimeData(QListWidget*, intptr_t, int, QMimeData*, int);
int miqt_exec_callback_QListWidget_supportedDropActions(const QListWidget*, intptr_t);
QRect* miqt_exec_callback_QListWidget_visualRect(const QListWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QListWidget_scrollTo(QListWidget*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QListWidget_indexAt(const QListWidget*, intptr_t, QPoint*);
void miqt_exec_callback_QListWidget_doItemsLayout(QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_reset(QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_setRootIndex(QListWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QListWidget_scrollContentsBy(QListWidget*, intptr_t, int, int);
void miqt_exec_callback_QListWidget_dataChanged(QListWidget*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QListWidget_rowsInserted(QListWidget*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QListWidget_rowsAboutToBeRemoved(QListWidget*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QListWidget_mouseMoveEvent(QListWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListWidget_mouseReleaseEvent(QListWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListWidget_wheelEvent(QListWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QListWidget_timerEvent(QListWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QListWidget_resizeEvent(QListWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QListWidget_dragMoveEvent(QListWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QListWidget_dragLeaveEvent(QListWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QListWidget_startDrag(QListWidget*, intptr_t, int);
QStyleOptionViewItem* miqt_exec_callback_QListWidget_viewOptions(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_paintEvent(QListWidget*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QListWidget_horizontalOffset(const QListWidget*, intptr_t);
int miqt_exec_callback_QListWidget_verticalOffset(const QListWidget*, intptr_t);
QModelIndex* miqt_exec_callback_QListWidget_moveCursor(QListWidget*, intptr_t, int, int);
void miqt_exec_callback_QListWidget_setSelection(QListWidget*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QListWidget_visualRegionForSelection(const QListWidget*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QListWidget_selectedIndexes(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_updateGeometries(QListWidget*, intptr_t);
bool miqt_exec_callback_QListWidget_isIndexHidden(const QListWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QListWidget_selectionChanged(QListWidget*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QListWidget_currentChanged(QListWidget*, intptr_t, QModelIndex*, QModelIndex*);
QSize* miqt_exec_callback_QListWidget_viewportSizeHint(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_keyboardSearch(QListWidget*, intptr_t, struct miqt_string);
int miqt_exec_callback_QListWidget_sizeHintForRow(const QListWidget*, intptr_t, int);
int miqt_exec_callback_QListWidget_sizeHintForColumn(const QListWidget*, intptr_t, int);
QVariant* miqt_exec_callback_QListWidget_inputMethodQuery(const QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_selectAll(QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_updateEditorData(QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_updateEditorGeometries(QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_verticalScrollbarAction(QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_horizontalScrollbarAction(QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_verticalScrollbarValueChanged(QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_horizontalScrollbarValueChanged(QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_closeEditor(QListWidget*, intptr_t, QWidget*, int);
void miqt_exec_callback_QListWidget_commitData(QListWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QListWidget_editorDestroyed(QListWidget*, intptr_t, QObject*);
bool miqt_exec_callback_QListWidget_edit2(QListWidget*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QListWidget_selectionCommand(const QListWidget*, intptr_t, QModelIndex*, QEvent*);
bool miqt_exec_callback_QListWidget_focusNextPrevChild(QListWidget*, intptr_t, bool);
bool miqt_exec_callback_QListWidget_viewportEvent(QListWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QListWidget_mousePressEvent(QListWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListWidget_mouseDoubleClickEvent(QListWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListWidget_dragEnterEvent(QListWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QListWidget_focusInEvent(QListWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QListWidget_focusOutEvent(QListWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QListWidget_keyPressEvent(QListWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QListWidget_inputMethodEvent(QListWidget*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QListWidget_eventFilter(QListWidget*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QListWidget_minimumSizeHint(const QListWidget*, intptr_t);
QSize* miqt_exec_callback_QListWidget_sizeHint(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_setupViewport(QListWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QListWidget_contextMenuEvent(QListWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QListWidget_changeEvent(QListWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QListWidget_devType(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_setVisible(QListWidget*, intptr_t, bool);
int miqt_exec_callback_QListWidget_heightForWidth(const QListWidget*, intptr_t, int);
bool miqt_exec_callback_QListWidget_hasHeightForWidth(const QListWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QListWidget_paintEngine(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_keyReleaseEvent(QListWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QListWidget_enterEvent(QListWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QListWidget_leaveEvent(QListWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QListWidget_moveEvent(QListWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QListWidget_closeEvent(QListWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QListWidget_tabletEvent(QListWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QListWidget_actionEvent(QListWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QListWidget_showEvent(QListWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QListWidget_hideEvent(QListWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QListWidget_nativeEvent(QListWidget*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QListWidget_metric(const QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_initPainter(const QListWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QListWidget_redirected(const QListWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QListWidget_sharedPainter(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_childEvent(QListWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QListWidget_customEvent(QListWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QListWidget_connectNotify(QListWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QListWidget_disconnectNotify(QListWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQListWidgetItem final : public QListWidgetItem {
public:

	MiqtVirtualQListWidgetItem(): QListWidgetItem() {};
	MiqtVirtualQListWidgetItem(const QString& text): QListWidgetItem(text) {};
	MiqtVirtualQListWidgetItem(const QIcon& icon, const QString& text): QListWidgetItem(icon, text) {};
	MiqtVirtualQListWidgetItem(const QListWidgetItem& other): QListWidgetItem(other) {};
	MiqtVirtualQListWidgetItem(QListWidget* listview): QListWidgetItem(listview) {};
	MiqtVirtualQListWidgetItem(QListWidget* listview, int type): QListWidgetItem(listview, type) {};
	MiqtVirtualQListWidgetItem(const QString& text, QListWidget* listview): QListWidgetItem(text, listview) {};
	MiqtVirtualQListWidgetItem(const QString& text, QListWidget* listview, int type): QListWidgetItem(text, listview, type) {};
	MiqtVirtualQListWidgetItem(const QIcon& icon, const QString& text, QListWidget* listview): QListWidgetItem(icon, text, listview) {};
	MiqtVirtualQListWidgetItem(const QIcon& icon, const QString& text, QListWidget* listview, int type): QListWidgetItem(icon, text, listview, type) {};

	virtual ~MiqtVirtualQListWidgetItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QListWidgetItem* clone() const override {
		if (handle__clone == 0) {
			return QListWidgetItem::clone();
		}
		

		QListWidgetItem* callback_return_value = miqt_exec_callback_QListWidgetItem_clone(this, handle__clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QListWidgetItem* virtualbase_clone() const {

		return QListWidgetItem::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setBackgroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setBackgroundColor(const QColor& color) override {
		if (handle__setBackgroundColor == 0) {
			QListWidgetItem::setBackgroundColor(color);
			return;
		}
		
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);

		miqt_exec_callback_QListWidgetItem_setBackgroundColor(this, handle__setBackgroundColor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setBackgroundColor(QColor* color) {

		QListWidgetItem::setBackgroundColor(*color);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(int role) const override {
		if (handle__data == 0) {
			return QListWidgetItem::data(role);
		}
		
		int sigval1 = role;

		QVariant* callback_return_value = miqt_exec_callback_QListWidgetItem_data(this, handle__data, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_data(int role) const {

		return new QVariant(QListWidgetItem::data(static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setData(int role, const QVariant& value) override {
		if (handle__setData == 0) {
			QListWidgetItem::setData(role, value);
			return;
		}
		
		int sigval1 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QListWidgetItem_setData(this, handle__setData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setData(int role, QVariant* value) {

		QListWidgetItem::setData(static_cast<int>(role), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__operatorLesser = 0;

	// Subclass to allow providing a Go implementation
	virtual bool operator<(const QListWidgetItem& other) const override {
		if (handle__operatorLesser == 0) {
			return QListWidgetItem::operator<(other);
		}
		
		const QListWidgetItem& other_ret = other;
		// Cast returned reference into pointer
		QListWidgetItem* sigval1 = const_cast<QListWidgetItem*>(&other_ret);

		bool callback_return_value = miqt_exec_callback_QListWidgetItem_operatorLesser(this, handle__operatorLesser, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_operatorLesser(QListWidgetItem* other) const {

		return QListWidgetItem::operator<(*other);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__read = 0;

	// Subclass to allow providing a Go implementation
	virtual void read(QDataStream& in) override {
		if (handle__read == 0) {
			QListWidgetItem::read(in);
			return;
		}
		
		QDataStream& in_ret = in;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &in_ret;

		miqt_exec_callback_QListWidgetItem_read(this, handle__read, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_read(QDataStream* in) {

		QListWidgetItem::read(*in);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__write = 0;

	// Subclass to allow providing a Go implementation
	virtual void write(QDataStream& out) const override {
		if (handle__write == 0) {
			QListWidgetItem::write(out);
			return;
		}
		
		QDataStream& out_ret = out;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &out_ret;

		miqt_exec_callback_QListWidgetItem_write(this, handle__write, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_write(QDataStream* out) const {

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

QListWidgetItem* QListWidgetItem_new6(QListWidget* listview, int type) {
	return new MiqtVirtualQListWidgetItem(listview, static_cast<int>(type));
}

QListWidgetItem* QListWidgetItem_new7(struct miqt_string text, QListWidget* listview) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new8(struct miqt_string text, QListWidget* listview, int type) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(text_QString, listview, static_cast<int>(type));
}

QListWidgetItem* QListWidgetItem_new9(QIcon* icon, struct miqt_string text, QListWidget* listview) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(*icon, text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new10(QIcon* icon, struct miqt_string text, QListWidget* listview, int type) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQListWidgetItem(*icon, text_QString, listview, static_cast<int>(type));
}

QListWidgetItem* QListWidgetItem_clone(const QListWidgetItem* self) {
	return self->clone();
}

QListWidget* QListWidgetItem_listWidget(const QListWidgetItem* self) {
	return self->listWidget();
}

void QListWidgetItem_setSelected(QListWidgetItem* self, bool select) {
	self->setSelected(select);
}

bool QListWidgetItem_isSelected(const QListWidgetItem* self) {
	return self->isSelected();
}

void QListWidgetItem_setHidden(QListWidgetItem* self, bool hide) {
	self->setHidden(hide);
}

bool QListWidgetItem_isHidden(const QListWidgetItem* self) {
	return self->isHidden();
}

int QListWidgetItem_flags(const QListWidgetItem* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QListWidgetItem_setFlags(QListWidgetItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

struct miqt_string QListWidgetItem_text(const QListWidgetItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_setText(QListWidgetItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

QIcon* QListWidgetItem_icon(const QListWidgetItem* self) {
	return new QIcon(self->icon());
}

void QListWidgetItem_setIcon(QListWidgetItem* self, QIcon* icon) {
	self->setIcon(*icon);
}

struct miqt_string QListWidgetItem_statusTip(const QListWidgetItem* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_setStatusTip(QListWidgetItem* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QListWidgetItem_toolTip(const QListWidgetItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_setToolTip(QListWidgetItem* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string QListWidgetItem_whatsThis(const QListWidgetItem* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_setWhatsThis(QListWidgetItem* self, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(whatsThis_QString);
}

QFont* QListWidgetItem_font(const QListWidgetItem* self) {
	return new QFont(self->font());
}

void QListWidgetItem_setFont(QListWidgetItem* self, QFont* font) {
	self->setFont(*font);
}

int QListWidgetItem_textAlignment(const QListWidgetItem* self) {
	return self->textAlignment();
}

void QListWidgetItem_setTextAlignment(QListWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<int>(alignment));
}

QColor* QListWidgetItem_backgroundColor(const QListWidgetItem* self) {
	return new QColor(self->backgroundColor());
}

void QListWidgetItem_setBackgroundColor(QListWidgetItem* self, QColor* color) {
	self->setBackgroundColor(*color);
}

QBrush* QListWidgetItem_background(const QListWidgetItem* self) {
	return new QBrush(self->background());
}

void QListWidgetItem_setBackground(QListWidgetItem* self, QBrush* brush) {
	self->setBackground(*brush);
}

QColor* QListWidgetItem_textColor(const QListWidgetItem* self) {
	return new QColor(self->textColor());
}

void QListWidgetItem_setTextColor(QListWidgetItem* self, QColor* color) {
	self->setTextColor(*color);
}

QBrush* QListWidgetItem_foreground(const QListWidgetItem* self) {
	return new QBrush(self->foreground());
}

void QListWidgetItem_setForeground(QListWidgetItem* self, QBrush* brush) {
	self->setForeground(*brush);
}

int QListWidgetItem_checkState(const QListWidgetItem* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<int>(_ret);
}

void QListWidgetItem_setCheckState(QListWidgetItem* self, int state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QListWidgetItem_sizeHint(const QListWidgetItem* self) {
	return new QSize(self->sizeHint());
}

void QListWidgetItem_setSizeHint(QListWidgetItem* self, QSize* size) {
	self->setSizeHint(*size);
}

QVariant* QListWidgetItem_data(const QListWidgetItem* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QListWidgetItem_setData(QListWidgetItem* self, int role, QVariant* value) {
	self->setData(static_cast<int>(role), *value);
}

bool QListWidgetItem_operatorLesser(const QListWidgetItem* self, QListWidgetItem* other) {
	return (*self < *other);
}

void QListWidgetItem_read(QListWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QListWidgetItem_write(const QListWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QListWidgetItem_operatorAssign(QListWidgetItem* self, QListWidgetItem* other) {
	self->operator=(*other);
}

int QListWidgetItem_type(const QListWidgetItem* self) {
	return self->type();
}

bool QListWidgetItem_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QListWidgetItem* QListWidgetItem_virtualbase_clone(const void* self) {
	return ( (const MiqtVirtualQListWidgetItem*)(self) )->virtualbase_clone();
}

bool QListWidgetItem_override_virtual_setBackgroundColor(void* self, intptr_t slot) {
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setBackgroundColor = slot;
	return true;
}

void QListWidgetItem_virtualbase_setBackgroundColor(void* self, QColor* color) {
	( (MiqtVirtualQListWidgetItem*)(self) )->virtualbase_setBackgroundColor(color);
}

bool QListWidgetItem_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__data = slot;
	return true;
}

QVariant* QListWidgetItem_virtualbase_data(const void* self, int role) {
	return ( (const MiqtVirtualQListWidgetItem*)(self) )->virtualbase_data(role);
}

bool QListWidgetItem_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setData = slot;
	return true;
}

void QListWidgetItem_virtualbase_setData(void* self, int role, QVariant* value) {
	( (MiqtVirtualQListWidgetItem*)(self) )->virtualbase_setData(role, value);
}

bool QListWidgetItem_override_virtual_operatorLesser(void* self, intptr_t slot) {
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__operatorLesser = slot;
	return true;
}

bool QListWidgetItem_virtualbase_operatorLesser(const void* self, QListWidgetItem* other) {
	return ( (const MiqtVirtualQListWidgetItem*)(self) )->virtualbase_operatorLesser(other);
}

bool QListWidgetItem_override_virtual_read(void* self, intptr_t slot) {
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__read = slot;
	return true;
}

void QListWidgetItem_virtualbase_read(void* self, QDataStream* in) {
	( (MiqtVirtualQListWidgetItem*)(self) )->virtualbase_read(in);
}

bool QListWidgetItem_override_virtual_write(void* self, intptr_t slot) {
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__write = slot;
	return true;
}

void QListWidgetItem_virtualbase_write(const void* self, QDataStream* out) {
	( (const MiqtVirtualQListWidgetItem*)(self) )->virtualbase_write(out);
}

void QListWidgetItem_delete(QListWidgetItem* self) {
	delete self;
}

class MiqtVirtualQListWidget final : public QListWidget {
public:

	MiqtVirtualQListWidget(QWidget* parent): QListWidget(parent) {};
	MiqtVirtualQListWidget(): QListWidget() {};

	virtual ~MiqtVirtualQListWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelectionModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (handle__setSelectionModel == 0) {
			QListWidget::setSelectionModel(selectionModel);
			return;
		}
		
		QItemSelectionModel* sigval1 = selectionModel;

		miqt_exec_callback_QListWidget_setSelectionModel(this, handle__setSelectionModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSelectionModel(QItemSelectionModel* selectionModel) {

		QListWidget::setSelectionModel(selectionModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QListWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QListWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QListWidget::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QListWidget_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QListWidget::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QListWidget::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QListWidget_mimeTypes(this, handle__mimeTypes);
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
	struct miqt_array /* of struct miqt_string */  virtualbase_mimeTypes() const {

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
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QList<QListWidgetItem *> items) const override {
		if (handle__mimeData == 0) {
			return QListWidget::mimeData(items);
		}
		
		const QList<QListWidgetItem *> items_ret = items;
		// Convert QList<> from C++ memory to manually-managed C memory
		QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * items_ret.length()));
		for (size_t i = 0, e = items_ret.length(); i < e; ++i) {
			items_arr[i] = items_ret[i];
		}
		struct miqt_array items_out;
		items_out.len = items_ret.length();
		items_out.data = static_cast<void*>(items_arr);
		struct miqt_array /* of QListWidgetItem* */  sigval1 = items_out;

		QMimeData* callback_return_value = miqt_exec_callback_QListWidget_mimeData(this, handle__mimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_mimeData(struct miqt_array /* of QListWidgetItem* */  items) const {
		QList<QListWidgetItem *> items_QList;
		items_QList.reserve(items.len);
		QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(items.data);
		for(size_t i = 0; i < items.len; ++i) {
			items_QList.push_back(items_arr[i]);
		}

		return QListWidget::mimeData(items_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(int index, const QMimeData* data, Qt::DropAction action) override {
		if (handle__dropMimeData == 0) {
			return QListWidget::dropMimeData(index, data, action);
		}
		
		int sigval1 = index;
		QMimeData* sigval2 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval3 = static_cast<int>(action_ret);

		bool callback_return_value = miqt_exec_callback_QListWidget_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_dropMimeData(int index, QMimeData* data, int action) {

		return QListWidget::dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QListWidget::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QListWidget_supportedDropActions(this, handle__supportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDropActions() const {

		Qt::DropActions _ret = QListWidget::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (handle__visualRect == 0) {
			return QListWidget::visualRect(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QRect* callback_return_value = miqt_exec_callback_QListWidget_visualRect(this, handle__visualRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_visualRect(QModelIndex* index) const {

		return new QRect(QListWidget::visualRect(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (handle__scrollTo == 0) {
			QListWidget::scrollTo(index, hint);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QListWidget_scrollTo(this, handle__scrollTo, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollTo(QModelIndex* index, int hint) {

		QListWidget::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (handle__indexAt == 0) {
			return QListWidget::indexAt(p);
		}
		
		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QListWidget_indexAt(this, handle__indexAt, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_indexAt(QPoint* p) const {

		return new QModelIndex(QListWidget::indexAt(*p));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__doItemsLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (handle__doItemsLayout == 0) {
			QListWidget::doItemsLayout();
			return;
		}
		

		miqt_exec_callback_QListWidget_doItemsLayout(this, handle__doItemsLayout);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_doItemsLayout() {

		QListWidget::doItemsLayout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__reset == 0) {
			QListWidget::reset();
			return;
		}
		

		miqt_exec_callback_QListWidget_reset(this, handle__reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reset() {

		QListWidget::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setRootIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (handle__setRootIndex == 0) {
			QListWidget::setRootIndex(index);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QListWidget_setRootIndex(this, handle__setRootIndex, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setRootIndex(QModelIndex* index) {

		QListWidget::setRootIndex(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QListWidget::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QListWidget_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollContentsBy(int dx, int dy) {

		QListWidget::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dataChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (handle__dataChanged == 0) {
			QListWidget::dataChanged(topLeft, bottomRight, roles);
			return;
		}
		
		const QModelIndex& topLeft_ret = topLeft;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
		const QModelIndex& bottomRight_ret = bottomRight;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
		const QVector<int>& roles_ret = roles;
		// Convert QList<> from C++ memory to manually-managed C memory
		int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.length()));
		for (size_t i = 0, e = roles_ret.length(); i < e; ++i) {
			roles_arr[i] = roles_ret[i];
		}
		struct miqt_array roles_out;
		roles_out.len = roles_ret.length();
		roles_out.data = static_cast<void*>(roles_arr);
		struct miqt_array /* of int */  sigval3 = roles_out;

		miqt_exec_callback_QListWidget_dataChanged(this, handle__dataChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dataChanged(QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
		QVector<int> roles_QList;
		roles_QList.reserve(roles.len);
		int* roles_arr = static_cast<int*>(roles.data);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QList.push_back(static_cast<int>(roles_arr[i]));
		}

		QListWidget::dataChanged(*topLeft, *bottomRight, roles_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsInserted == 0) {
			QListWidget::rowsInserted(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QListWidget_rowsInserted(this, handle__rowsInserted, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsInserted(QModelIndex* parent, int start, int end) {

		QListWidget::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowsAboutToBeRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (handle__rowsAboutToBeRemoved == 0) {
			QListWidget::rowsAboutToBeRemoved(parent, start, end);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;

		miqt_exec_callback_QListWidget_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_rowsAboutToBeRemoved(QModelIndex* parent, int start, int end) {

		QListWidget::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__mouseMoveEvent == 0) {
			QListWidget::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* e) {

		QListWidget::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			QListWidget::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* e) {

		QListWidget::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__wheelEvent == 0) {
			QListWidget::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* e) {

		QListWidget::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__timerEvent == 0) {
			QListWidget::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* e) {

		QListWidget::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__resizeEvent == 0) {
			QListWidget::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* e) {

		QListWidget::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__dragMoveEvent == 0) {
			QListWidget::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* e) {

		QListWidget::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__dragLeaveEvent == 0) {
			QListWidget::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* e) {

		QListWidget::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startDrag = 0;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (handle__startDrag == 0) {
			QListWidget::startDrag(supportedActions);
			return;
		}
		
		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);

		miqt_exec_callback_QListWidget_startDrag(this, handle__startDrag, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_startDrag(int supportedActions) {

		QListWidget::startDrag(static_cast<Qt::DropActions>(supportedActions));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (handle__viewOptions == 0) {
			return QListWidget::viewOptions();
		}
		

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QListWidget_viewOptions(this, handle__viewOptions);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QStyleOptionViewItem* virtualbase_viewOptions() const {

		return new QStyleOptionViewItem(QListWidget::viewOptions());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__paintEvent == 0) {
			QListWidget::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QListWidget_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* e) {

		QListWidget::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (handle__horizontalOffset == 0) {
			return QListWidget::horizontalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QListWidget_horizontalOffset(this, handle__horizontalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_horizontalOffset() const {

		return QListWidget::horizontalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalOffset = 0;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (handle__verticalOffset == 0) {
			return QListWidget::verticalOffset();
		}
		

		int callback_return_value = miqt_exec_callback_QListWidget_verticalOffset(this, handle__verticalOffset);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_verticalOffset() const {

		return QListWidget::verticalOffset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (handle__moveCursor == 0) {
			return QListWidget::moveCursor(cursorAction, modifiers);
		}
		
		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QListWidget_moveCursor(this, handle__moveCursor, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_moveCursor(int cursorAction, int modifiers) {

		return new QModelIndex(QListWidget::moveCursor(static_cast<QAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (handle__setSelection == 0) {
			QListWidget::setSelection(rect, command);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QListWidget_setSelection(this, handle__setSelection, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSelection(QRect* rect, int command) {

		QListWidget::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__visualRegionForSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (handle__visualRegionForSelection == 0) {
			return QListWidget::visualRegionForSelection(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QRegion* callback_return_value = miqt_exec_callback_QListWidget_visualRegionForSelection(this, handle__visualRegionForSelection, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRegion* virtualbase_visualRegionForSelection(QItemSelection* selection) const {

		return new QRegion(QListWidget::visualRegionForSelection(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectedIndexes = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (handle__selectedIndexes == 0) {
			return QListWidget::selectedIndexes();
		}
		

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QListWidget_selectedIndexes(this, handle__selectedIndexes);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of QModelIndex* */  virtualbase_selectedIndexes() const {

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
	intptr_t handle__updateGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (handle__updateGeometries == 0) {
			QListWidget::updateGeometries();
			return;
		}
		

		miqt_exec_callback_QListWidget_updateGeometries(this, handle__updateGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateGeometries() {

		QListWidget::updateGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isIndexHidden = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (handle__isIndexHidden == 0) {
			return QListWidget::isIndexHidden(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QListWidget_isIndexHidden(this, handle__isIndexHidden, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isIndexHidden(QModelIndex* index) const {

		return QListWidget::isIndexHidden(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (handle__selectionChanged == 0) {
			QListWidget::selectionChanged(selected, deselected);
			return;
		}
		
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);

		miqt_exec_callback_QListWidget_selectionChanged(this, handle__selectionChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectionChanged(QItemSelection* selected, QItemSelection* deselected) {

		QListWidget::selectionChanged(*selected, *deselected);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (handle__currentChanged == 0) {
			QListWidget::currentChanged(current, previous);
			return;
		}
		
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);

		miqt_exec_callback_QListWidget_currentChanged(this, handle__currentChanged, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_currentChanged(QModelIndex* current, QModelIndex* previous) {

		QListWidget::currentChanged(*current, *previous);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QListWidget::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QListWidget_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_viewportSizeHint() const {

		return new QSize(QListWidget::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyboardSearch = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (handle__keyboardSearch == 0) {
			QListWidget::keyboardSearch(search);
			return;
		}
		
		const QString search_ret = search;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray search_b = search_ret.toUtf8();
		struct miqt_string search_ms;
		search_ms.len = search_b.length();
		search_ms.data = static_cast<char*>(malloc(search_ms.len));
		memcpy(search_ms.data, search_b.data(), search_ms.len);
		struct miqt_string sigval1 = search_ms;

		miqt_exec_callback_QListWidget_keyboardSearch(this, handle__keyboardSearch, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyboardSearch(struct miqt_string search) {
		QString search_QString = QString::fromUtf8(search.data, search.len);

		QListWidget::keyboardSearch(search_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForRow = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (handle__sizeHintForRow == 0) {
			return QListWidget::sizeHintForRow(row);
		}
		
		int sigval1 = row;

		int callback_return_value = miqt_exec_callback_QListWidget_sizeHintForRow(this, handle__sizeHintForRow, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForRow(int row) const {

		return QListWidget::sizeHintForRow(static_cast<int>(row));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHintForColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (handle__sizeHintForColumn == 0) {
			return QListWidget::sizeHintForColumn(column);
		}
		
		int sigval1 = column;

		int callback_return_value = miqt_exec_callback_QListWidget_sizeHintForColumn(this, handle__sizeHintForColumn, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_sizeHintForColumn(int column) const {

		return QListWidget::sizeHintForColumn(static_cast<int>(column));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QListWidget::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QListWidget_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QListWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (handle__selectAll == 0) {
			QListWidget::selectAll();
			return;
		}
		

		miqt_exec_callback_QListWidget_selectAll(this, handle__selectAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_selectAll() {

		QListWidget::selectAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (handle__updateEditorData == 0) {
			QListWidget::updateEditorData();
			return;
		}
		

		miqt_exec_callback_QListWidget_updateEditorData(this, handle__updateEditorData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorData() {

		QListWidget::updateEditorData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateEditorGeometries = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (handle__updateEditorGeometries == 0) {
			QListWidget::updateEditorGeometries();
			return;
		}
		

		miqt_exec_callback_QListWidget_updateEditorGeometries(this, handle__updateEditorGeometries);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateEditorGeometries() {

		QListWidget::updateEditorGeometries();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (handle__verticalScrollbarAction == 0) {
			QListWidget::verticalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QListWidget_verticalScrollbarAction(this, handle__verticalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarAction(int action) {

		QListWidget::verticalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarAction = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (handle__horizontalScrollbarAction == 0) {
			QListWidget::horizontalScrollbarAction(action);
			return;
		}
		
		int sigval1 = action;

		miqt_exec_callback_QListWidget_horizontalScrollbarAction(this, handle__horizontalScrollbarAction, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarAction(int action) {

		QListWidget::horizontalScrollbarAction(static_cast<int>(action));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__verticalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (handle__verticalScrollbarValueChanged == 0) {
			QListWidget::verticalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QListWidget_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_verticalScrollbarValueChanged(int value) {

		QListWidget::verticalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__horizontalScrollbarValueChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (handle__horizontalScrollbarValueChanged == 0) {
			QListWidget::horizontalScrollbarValueChanged(value);
			return;
		}
		
		int sigval1 = value;

		miqt_exec_callback_QListWidget_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_horizontalScrollbarValueChanged(int value) {

		QListWidget::horizontalScrollbarValueChanged(static_cast<int>(value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (handle__closeEditor == 0) {
			QListWidget::closeEditor(editor, hint);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);

		miqt_exec_callback_QListWidget_closeEditor(this, handle__closeEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEditor(QWidget* editor, int hint) {

		QListWidget::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__commitData = 0;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (handle__commitData == 0) {
			QListWidget::commitData(editor);
			return;
		}
		
		QWidget* sigval1 = editor;

		miqt_exec_callback_QListWidget_commitData(this, handle__commitData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_commitData(QWidget* editor) {

		QListWidget::commitData(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__editorDestroyed = 0;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (handle__editorDestroyed == 0) {
			QListWidget::editorDestroyed(editor);
			return;
		}
		
		QObject* sigval1 = editor;

		miqt_exec_callback_QListWidget_editorDestroyed(this, handle__editorDestroyed, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_editorDestroyed(QObject* editor) {

		QListWidget::editorDestroyed(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__edit2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (handle__edit2 == 0) {
			return QListWidget::edit(index, trigger, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;

		bool callback_return_value = miqt_exec_callback_QListWidget_edit2(this, handle__edit2, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_edit2(QModelIndex* index, int trigger, QEvent* event) {

		return QListWidget::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectionCommand = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (handle__selectionCommand == 0) {
			return QListWidget::selectionCommand(index, event);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;

		int callback_return_value = miqt_exec_callback_QListWidget_selectionCommand(this, handle__selectionCommand, sigval1, sigval2);

		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_selectionCommand(QModelIndex* index, QEvent* event) const {

		QItemSelectionModel::SelectionFlags _ret = QListWidget::selectionCommand(*index, event);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QListWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QListWidget_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QListWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__viewportEvent == 0) {
			return QListWidget::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QListWidget_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_viewportEvent(QEvent* event) {

		return QListWidget::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QListWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QListWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QListWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QListWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QListWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QListWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QListWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QListWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QListWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QListWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QListWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QListWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QListWidget::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QListWidget::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QListWidget::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QListWidget_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* object, QEvent* event) {

		return QListWidget::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QListWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QListWidget_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QListWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QListWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QListWidget_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QListWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QListWidget::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QListWidget_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setupViewport(QWidget* viewport) {

		QListWidget::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QListWidget::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QListWidget_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QListWidget::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QListWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QListWidget_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QListWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QListWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QListWidget_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QListWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QListWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QListWidget_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QListWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QListWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QListWidget_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QListWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QListWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QListWidget_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QListWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QListWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QListWidget_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QListWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QListWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QListWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QListWidget::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QListWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QListWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QListWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QListWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QListWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QListWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QListWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QListWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QListWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QListWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QListWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QListWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QListWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QListWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QListWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QListWidget::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QListWidget_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QListWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QListWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QListWidget_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QListWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QListWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QListWidget_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QListWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QListWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QListWidget_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QListWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QListWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QListWidget_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QListWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QListWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QListWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QListWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QListWidget_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QListWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QListWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QListWidget_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QListWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QListWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QListWidget_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QListWidget::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend struct miqt_array /* of QListWidgetItem* */  QListWidget_protectedbase_items(bool* _dynamic_cast_ok, const void* self, QMimeData* data);
	friend QModelIndex* QListWidget_protectedbase_indexFromItem(bool* _dynamic_cast_ok, const void* self, QListWidgetItem* item);
	friend QModelIndex* QListWidget_protectedbase_indexFromItemWithItem(bool* _dynamic_cast_ok, const void* self, QListWidgetItem* item);
	friend QListWidgetItem* QListWidget_protectedbase_itemFromIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
	friend void QListWidget_protectedbase_resizeContents(bool* _dynamic_cast_ok, void* self, int width, int height);
	friend QSize* QListWidget_protectedbase_contentsSize(bool* _dynamic_cast_ok, const void* self);
	friend QRect* QListWidget_protectedbase_rectForIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
	friend void QListWidget_protectedbase_setPositionForIndex(bool* _dynamic_cast_ok, void* self, QPoint* position, QModelIndex* index);
	friend void QListWidget_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QListWidget_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend void QListWidget_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QListWidget_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend int QListWidget_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QListWidget_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QListWidget_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QListWidget_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QListWidget_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QListWidget_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QListWidget_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QListWidget_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QListWidget_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QListWidget_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QListWidget_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QListWidget_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QListWidget_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QListWidget_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QListWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QListWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QListWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QListWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QListWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QListWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QListWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QListWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QListWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QListWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QListWidget_metaObject(const QListWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QListWidget_metacast(QListWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QListWidget_tr(const char* s) {
	QString _ret = QListWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QListWidget_trUtf8(const char* s) {
	QString _ret = QListWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidget_setSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QListWidgetItem* QListWidget_item(const QListWidget* self, int row) {
	return self->item(static_cast<int>(row));
}

int QListWidget_row(const QListWidget* self, QListWidgetItem* item) {
	return self->row(item);
}

void QListWidget_insertItem(QListWidget* self, int row, QListWidgetItem* item) {
	self->insertItem(static_cast<int>(row), item);
}

void QListWidget_insertItem2(QListWidget* self, int row, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->insertItem(static_cast<int>(row), label_QString);
}

void QListWidget_insertItems(QListWidget* self, int row, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->insertItems(static_cast<int>(row), labels_QList);
}

void QListWidget_addItem(QListWidget* self, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->addItem(label_QString);
}

void QListWidget_addItemWithItem(QListWidget* self, QListWidgetItem* item) {
	self->addItem(item);
}

void QListWidget_addItems(QListWidget* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->addItems(labels_QList);
}

QListWidgetItem* QListWidget_takeItem(QListWidget* self, int row) {
	return self->takeItem(static_cast<int>(row));
}

int QListWidget_count(const QListWidget* self) {
	return self->count();
}

QListWidgetItem* QListWidget_currentItem(const QListWidget* self) {
	return self->currentItem();
}

void QListWidget_setCurrentItem(QListWidget* self, QListWidgetItem* item) {
	self->setCurrentItem(item);
}

void QListWidget_setCurrentItem2(QListWidget* self, QListWidgetItem* item, int command) {
	self->setCurrentItem(item, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

int QListWidget_currentRow(const QListWidget* self) {
	return self->currentRow();
}

void QListWidget_setCurrentRow(QListWidget* self, int row) {
	self->setCurrentRow(static_cast<int>(row));
}

void QListWidget_setCurrentRow2(QListWidget* self, int row, int command) {
	self->setCurrentRow(static_cast<int>(row), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

QListWidgetItem* QListWidget_itemAt(const QListWidget* self, QPoint* p) {
	return self->itemAt(*p);
}

QListWidgetItem* QListWidget_itemAt2(const QListWidget* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QListWidget_visualItemRect(const QListWidget* self, QListWidgetItem* item) {
	return new QRect(self->visualItemRect(item));
}

void QListWidget_sortItems(QListWidget* self) {
	self->sortItems();
}

void QListWidget_setSortingEnabled(QListWidget* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QListWidget_isSortingEnabled(const QListWidget* self) {
	return self->isSortingEnabled();
}

void QListWidget_editItem(QListWidget* self, QListWidgetItem* item) {
	self->editItem(item);
}

void QListWidget_openPersistentEditor(QListWidget* self, QListWidgetItem* item) {
	self->openPersistentEditor(item);
}

void QListWidget_closePersistentEditor(QListWidget* self, QListWidgetItem* item) {
	self->closePersistentEditor(item);
}

bool QListWidget_isPersistentEditorOpen(const QListWidget* self, QListWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QListWidget_itemWidget(const QListWidget* self, QListWidgetItem* item) {
	return self->itemWidget(item);
}

void QListWidget_setItemWidget(QListWidget* self, QListWidgetItem* item, QWidget* widget) {
	self->setItemWidget(item, widget);
}

void QListWidget_removeItemWidget(QListWidget* self, QListWidgetItem* item) {
	self->removeItemWidget(item);
}

bool QListWidget_isItemSelected(const QListWidget* self, QListWidgetItem* item) {
	return self->isItemSelected(item);
}

void QListWidget_setItemSelected(QListWidget* self, QListWidgetItem* item, bool select) {
	self->setItemSelected(item, select);
}

struct miqt_array /* of QListWidgetItem* */  QListWidget_selectedItems(const QListWidget* self) {
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

struct miqt_array /* of QListWidgetItem* */  QListWidget_findItems(const QListWidget* self, struct miqt_string text, int flags) {
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

bool QListWidget_isItemHidden(const QListWidget* self, QListWidgetItem* item) {
	return self->isItemHidden(item);
}

void QListWidget_setItemHidden(QListWidget* self, QListWidgetItem* item, bool hide) {
	self->setItemHidden(item, hide);
}

void QListWidget_dropEvent(QListWidget* self, QDropEvent* event) {
	self->dropEvent(event);
}

void QListWidget_scrollToItem(QListWidget* self, QListWidgetItem* item) {
	self->scrollToItem(item);
}

void QListWidget_clear(QListWidget* self) {
	self->clear();
}

void QListWidget_itemPressed(QListWidget* self, QListWidgetItem* item) {
	self->itemPressed(item);
}

void QListWidget_connect_itemPressed(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemPressed), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_itemPressed(slot, sigval1);
	});
}

void QListWidget_itemClicked(QListWidget* self, QListWidgetItem* item) {
	self->itemClicked(item);
}

void QListWidget_connect_itemClicked(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemClicked), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_itemClicked(slot, sigval1);
	});
}

void QListWidget_itemDoubleClicked(QListWidget* self, QListWidgetItem* item) {
	self->itemDoubleClicked(item);
}

void QListWidget_connect_itemDoubleClicked(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemDoubleClicked), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_itemDoubleClicked(slot, sigval1);
	});
}

void QListWidget_itemActivated(QListWidget* self, QListWidgetItem* item) {
	self->itemActivated(item);
}

void QListWidget_connect_itemActivated(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemActivated), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_itemActivated(slot, sigval1);
	});
}

void QListWidget_itemEntered(QListWidget* self, QListWidgetItem* item) {
	self->itemEntered(item);
}

void QListWidget_connect_itemEntered(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemEntered), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_itemEntered(slot, sigval1);
	});
}

void QListWidget_itemChanged(QListWidget* self, QListWidgetItem* item) {
	self->itemChanged(item);
}

void QListWidget_connect_itemChanged(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemChanged), self, [=](QListWidgetItem* item) {
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_itemChanged(slot, sigval1);
	});
}

void QListWidget_currentItemChanged(QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void QListWidget_connect_currentItemChanged(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*, QListWidgetItem*)>(&QListWidget::currentItemChanged), self, [=](QListWidgetItem* current, QListWidgetItem* previous) {
		QListWidgetItem* sigval1 = current;
		QListWidgetItem* sigval2 = previous;
		miqt_exec_callback_QListWidget_currentItemChanged(slot, sigval1, sigval2);
	});
}

void QListWidget_currentTextChanged(QListWidget* self, struct miqt_string currentText) {
	QString currentText_QString = QString::fromUtf8(currentText.data, currentText.len);
	self->currentTextChanged(currentText_QString);
}

void QListWidget_connect_currentTextChanged(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(const QString&)>(&QListWidget::currentTextChanged), self, [=](const QString& currentText) {
		const QString currentText_ret = currentText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray currentText_b = currentText_ret.toUtf8();
		struct miqt_string currentText_ms;
		currentText_ms.len = currentText_b.length();
		currentText_ms.data = static_cast<char*>(malloc(currentText_ms.len));
		memcpy(currentText_ms.data, currentText_b.data(), currentText_ms.len);
		struct miqt_string sigval1 = currentText_ms;
		miqt_exec_callback_QListWidget_currentTextChanged(slot, sigval1);
	});
}

void QListWidget_currentRowChanged(QListWidget* self, int currentRow) {
	self->currentRowChanged(static_cast<int>(currentRow));
}

void QListWidget_connect_currentRowChanged(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)(int)>(&QListWidget::currentRowChanged), self, [=](int currentRow) {
		int sigval1 = currentRow;
		miqt_exec_callback_QListWidget_currentRowChanged(slot, sigval1);
	});
}

void QListWidget_itemSelectionChanged(QListWidget* self) {
	self->itemSelectionChanged();
}

void QListWidget_connect_itemSelectionChanged(QListWidget* self, intptr_t slot) {
	MiqtVirtualQListWidget::connect(self, static_cast<void (QListWidget::*)()>(&QListWidget::itemSelectionChanged), self, [=]() {
		miqt_exec_callback_QListWidget_itemSelectionChanged(slot);
	});
}

struct miqt_string QListWidget_tr2(const char* s, const char* c) {
	QString _ret = QListWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QListWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QListWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QListWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QListWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QListWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QListWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidget_sortItems1(QListWidget* self, int order) {
	self->sortItems(static_cast<Qt::SortOrder>(order));
}

void QListWidget_scrollToItem2(QListWidget* self, QListWidgetItem* item, int hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

bool QListWidget_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelectionModel = slot;
	return true;
}

void QListWidget_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_setSelectionModel(selectionModel);
}

bool QListWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QListWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_dropEvent(event);
}

bool QListWidget_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QListWidget_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_event(e);
}

bool QListWidget_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QListWidget_virtualbase_mimeTypes(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_mimeTypes();
}

bool QListWidget_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QListWidget_virtualbase_mimeData(const void* self, struct miqt_array /* of QListWidgetItem* */  items) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_mimeData(items);
}

bool QListWidget_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QListWidget_virtualbase_dropMimeData(void* self, int index, QMimeData* data, int action) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_dropMimeData(index, data, action);
}

bool QListWidget_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QListWidget_virtualbase_supportedDropActions(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_supportedDropActions();
}

bool QListWidget_override_virtual_visualRect(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRect = slot;
	return true;
}

QRect* QListWidget_virtualbase_visualRect(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_visualRect(index);
}

bool QListWidget_override_virtual_scrollTo(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollTo = slot;
	return true;
}

void QListWidget_virtualbase_scrollTo(void* self, QModelIndex* index, int hint) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_scrollTo(index, hint);
}

bool QListWidget_override_virtual_indexAt(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indexAt = slot;
	return true;
}

QModelIndex* QListWidget_virtualbase_indexAt(const void* self, QPoint* p) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_indexAt(p);
}

bool QListWidget_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__doItemsLayout = slot;
	return true;
}

void QListWidget_virtualbase_doItemsLayout(void* self) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_doItemsLayout();
}

bool QListWidget_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

void QListWidget_virtualbase_reset(void* self) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_reset();
}

bool QListWidget_override_virtual_setRootIndex(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setRootIndex = slot;
	return true;
}

void QListWidget_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_setRootIndex(index);
}

bool QListWidget_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QListWidget_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_scrollContentsBy(dx, dy);
}

bool QListWidget_override_virtual_dataChanged(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dataChanged = slot;
	return true;
}

void QListWidget_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_dataChanged(topLeft, bottomRight, roles);
}

bool QListWidget_override_virtual_rowsInserted(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsInserted = slot;
	return true;
}

void QListWidget_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_rowsInserted(parent, start, end);
}

bool QListWidget_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowsAboutToBeRemoved = slot;
	return true;
}

void QListWidget_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_rowsAboutToBeRemoved(parent, start, end);
}

bool QListWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QListWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_mouseMoveEvent(e);
}

bool QListWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QListWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_mouseReleaseEvent(e);
}

bool QListWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QListWidget_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_wheelEvent(e);
}

bool QListWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QListWidget_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_timerEvent(e);
}

bool QListWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QListWidget_virtualbase_resizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_resizeEvent(e);
}

bool QListWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QListWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_dragMoveEvent(e);
}

bool QListWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QListWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_dragLeaveEvent(e);
}

bool QListWidget_override_virtual_startDrag(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__startDrag = slot;
	return true;
}

void QListWidget_virtualbase_startDrag(void* self, int supportedActions) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_startDrag(supportedActions);
}

bool QListWidget_override_virtual_viewOptions(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewOptions = slot;
	return true;
}

QStyleOptionViewItem* QListWidget_virtualbase_viewOptions(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_viewOptions();
}

bool QListWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QListWidget_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_paintEvent(e);
}

bool QListWidget_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalOffset = slot;
	return true;
}

int QListWidget_virtualbase_horizontalOffset(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_horizontalOffset();
}

bool QListWidget_override_virtual_verticalOffset(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalOffset = slot;
	return true;
}

int QListWidget_virtualbase_verticalOffset(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_verticalOffset();
}

bool QListWidget_override_virtual_moveCursor(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveCursor = slot;
	return true;
}

QModelIndex* QListWidget_virtualbase_moveCursor(void* self, int cursorAction, int modifiers) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_moveCursor(cursorAction, modifiers);
}

bool QListWidget_override_virtual_setSelection(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelection = slot;
	return true;
}

void QListWidget_virtualbase_setSelection(void* self, QRect* rect, int command) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_setSelection(rect, command);
}

bool QListWidget_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__visualRegionForSelection = slot;
	return true;
}

QRegion* QListWidget_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_visualRegionForSelection(selection);
}

bool QListWidget_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectedIndexes = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QListWidget_virtualbase_selectedIndexes(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_selectedIndexes();
}

bool QListWidget_override_virtual_updateGeometries(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometries = slot;
	return true;
}

void QListWidget_virtualbase_updateGeometries(void* self) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_updateGeometries();
}

bool QListWidget_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isIndexHidden = slot;
	return true;
}

bool QListWidget_virtualbase_isIndexHidden(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_isIndexHidden(index);
}

bool QListWidget_override_virtual_selectionChanged(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionChanged = slot;
	return true;
}

void QListWidget_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_selectionChanged(selected, deselected);
}

bool QListWidget_override_virtual_currentChanged(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__currentChanged = slot;
	return true;
}

void QListWidget_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_currentChanged(current, previous);
}

bool QListWidget_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QListWidget_virtualbase_viewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_viewportSizeHint();
}

bool QListWidget_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyboardSearch = slot;
	return true;
}

void QListWidget_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_keyboardSearch(search);
}

bool QListWidget_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForRow = slot;
	return true;
}

int QListWidget_virtualbase_sizeHintForRow(const void* self, int row) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_sizeHintForRow(row);
}

bool QListWidget_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHintForColumn = slot;
	return true;
}

int QListWidget_virtualbase_sizeHintForColumn(const void* self, int column) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_sizeHintForColumn(column);
}

bool QListWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QListWidget_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QListWidget_override_virtual_selectAll(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectAll = slot;
	return true;
}

void QListWidget_virtualbase_selectAll(void* self) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_selectAll();
}

bool QListWidget_override_virtual_updateEditorData(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorData = slot;
	return true;
}

void QListWidget_virtualbase_updateEditorData(void* self) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_updateEditorData();
}

bool QListWidget_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateEditorGeometries = slot;
	return true;
}

void QListWidget_virtualbase_updateEditorGeometries(void* self) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_updateEditorGeometries();
}

bool QListWidget_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarAction = slot;
	return true;
}

void QListWidget_virtualbase_verticalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_verticalScrollbarAction(action);
}

bool QListWidget_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarAction = slot;
	return true;
}

void QListWidget_virtualbase_horizontalScrollbarAction(void* self, int action) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_horizontalScrollbarAction(action);
}

bool QListWidget_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__verticalScrollbarValueChanged = slot;
	return true;
}

void QListWidget_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_verticalScrollbarValueChanged(value);
}

bool QListWidget_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__horizontalScrollbarValueChanged = slot;
	return true;
}

void QListWidget_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_horizontalScrollbarValueChanged(value);
}

bool QListWidget_override_virtual_closeEditor(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEditor = slot;
	return true;
}

void QListWidget_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_closeEditor(editor, hint);
}

bool QListWidget_override_virtual_commitData(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__commitData = slot;
	return true;
}

void QListWidget_virtualbase_commitData(void* self, QWidget* editor) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_commitData(editor);
}

bool QListWidget_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__editorDestroyed = slot;
	return true;
}

void QListWidget_virtualbase_editorDestroyed(void* self, QObject* editor) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_editorDestroyed(editor);
}

bool QListWidget_override_virtual_edit2(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__edit2 = slot;
	return true;
}

bool QListWidget_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_edit2(index, trigger, event);
}

bool QListWidget_override_virtual_selectionCommand(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectionCommand = slot;
	return true;
}

int QListWidget_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_selectionCommand(index, event);
}

bool QListWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QListWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QListWidget_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QListWidget_virtualbase_viewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_viewportEvent(event);
}

bool QListWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QListWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_mousePressEvent(event);
}

bool QListWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QListWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QListWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QListWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QListWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QListWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_focusInEvent(event);
}

bool QListWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QListWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_focusOutEvent(event);
}

bool QListWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QListWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_keyPressEvent(event);
}

bool QListWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QListWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QListWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QListWidget_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_eventFilter(object, event);
}

bool QListWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QListWidget_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_minimumSizeHint();
}

bool QListWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QListWidget_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_sizeHint();
}

bool QListWidget_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void QListWidget_virtualbase_setupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_setupViewport(viewport);
}

bool QListWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QListWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QListWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QListWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_changeEvent(param1);
}

bool QListWidget_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QListWidget_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_devType();
}

bool QListWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QListWidget_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_setVisible(visible);
}

bool QListWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QListWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_heightForWidth(param1);
}

bool QListWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QListWidget_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_hasHeightForWidth();
}

bool QListWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QListWidget_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_paintEngine();
}

bool QListWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QListWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QListWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QListWidget_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_enterEvent(event);
}

bool QListWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QListWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_leaveEvent(event);
}

bool QListWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QListWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_moveEvent(event);
}

bool QListWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QListWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_closeEvent(event);
}

bool QListWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QListWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_tabletEvent(event);
}

bool QListWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QListWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_actionEvent(event);
}

bool QListWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QListWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_showEvent(event);
}

bool QListWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QListWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_hideEvent(event);
}

bool QListWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QListWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQListWidget*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QListWidget_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QListWidget_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_metric(param1);
}

bool QListWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QListWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQListWidget*)(self) )->virtualbase_initPainter(painter);
}

bool QListWidget_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QListWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_redirected(offset);
}

bool QListWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QListWidget_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQListWidget*)(self) )->virtualbase_sharedPainter();
}

bool QListWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QListWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_childEvent(event);
}

bool QListWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QListWidget_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_customEvent(event);
}

bool QListWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QListWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_connectNotify(signal);
}

bool QListWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QListWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQListWidget*)(self) )->virtualbase_disconnectNotify(signal);
}

struct miqt_array /* of QListWidgetItem* */  QListWidget_protectedbase_items(bool* _dynamic_cast_ok, const void* self, QMimeData* data) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}
	
	*_dynamic_cast_ok = true;
	
	QList<QListWidgetItem *> _ret = self_cast->items(data);
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

QModelIndex* QListWidget_protectedbase_indexFromItem(bool* _dynamic_cast_ok, const void* self, QListWidgetItem* item) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->indexFromItem(item));

}

QModelIndex* QListWidget_protectedbase_indexFromItemWithItem(bool* _dynamic_cast_ok, const void* self, QListWidgetItem* item) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->indexFromItem(item));

}

QListWidgetItem* QListWidget_protectedbase_itemFromIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->itemFromIndex(*index);

}

void QListWidget_protectedbase_resizeContents(bool* _dynamic_cast_ok, void* self, int width, int height) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->resizeContents(static_cast<int>(width), static_cast<int>(height));

}

QSize* QListWidget_protectedbase_contentsSize(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QSize(self_cast->contentsSize());

}

QRect* QListWidget_protectedbase_rectForIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRect(self_cast->rectForIndex(*index));

}

void QListWidget_protectedbase_setPositionForIndex(bool* _dynamic_cast_ok, void* self, QPoint* position, QModelIndex* index) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setPositionForIndex(*position, *index);

}

void QListWidget_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setHorizontalStepsPerItem(static_cast<int>(steps));

}

int QListWidget_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->horizontalStepsPerItem();

}

void QListWidget_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setVerticalStepsPerItem(static_cast<int>(steps));

}

int QListWidget_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->verticalStepsPerItem();

}

int QListWidget_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQListWidget::State _ret = self_cast->state();
	return static_cast<int>(_ret);

}

void QListWidget_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setState(static_cast<MiqtVirtualQListWidget::State>(state));

}

void QListWidget_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scheduleDelayedItemsLayout();

}

void QListWidget_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->executeDelayedItemsLayout();

}

void QListWidget_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setDirtyRegion(*region);

}

void QListWidget_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));

}

QPoint* QListWidget_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPoint(self_cast->dirtyRegionOffset());

}

void QListWidget_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->startAutoScroll();

}

void QListWidget_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->stopAutoScroll();

}

void QListWidget_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->doAutoScroll();

}

int QListWidget_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}
	
	*_dynamic_cast_ok = true;
	
	MiqtVirtualQListWidget::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);

}

void QListWidget_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* QListWidget_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void QListWidget_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QListWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QListWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QListWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QListWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QListWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QListWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QListWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QListWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QListWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QListWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QListWidget_delete(QListWidget* self) {
	delete self;
}

