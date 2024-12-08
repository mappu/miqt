#include <QEvent>
#include <QFrame>
#include <QIcon>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QToolBox>
#include <QWidget>
#include <qtoolbox.h>
#include "gen_qtoolbox.h"
#include "_cgo_export.h"

class MiqtVirtualQToolBox : public virtual QToolBox {
public:

	MiqtVirtualQToolBox(QWidget* parent): QToolBox(parent) {};
	MiqtVirtualQToolBox(): QToolBox() {};
	MiqtVirtualQToolBox(QWidget* parent, Qt::WindowFlags f): QToolBox(parent, f) {};

	virtual ~MiqtVirtualQToolBox() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QToolBox::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QToolBox_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QToolBox::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void itemInserted(int index) override {
		if (handle__ItemInserted == 0) {
			QToolBox::itemInserted(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QToolBox_ItemInserted(this, handle__ItemInserted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ItemInserted(int index) {

		QToolBox::itemInserted(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void itemRemoved(int index) override {
		if (handle__ItemRemoved == 0) {
			QToolBox::itemRemoved(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QToolBox_ItemRemoved(this, handle__ItemRemoved, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ItemRemoved(int index) {

		QToolBox::itemRemoved(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* e) override {
		if (handle__ShowEvent == 0) {
			QToolBox::showEvent(e);
			return;
		}
		
		QShowEvent* sigval1 = e;

		miqt_exec_callback_QToolBox_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* e) {

		QToolBox::showEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QToolBox::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QToolBox_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QToolBox::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QToolBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QToolBox_SizeHint(const_cast<MiqtVirtualQToolBox*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QToolBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QToolBox::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QToolBox_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QToolBox::paintEvent(param1);

	}

};

QToolBox* QToolBox_new(QWidget* parent) {
	return new MiqtVirtualQToolBox(parent);
}

QToolBox* QToolBox_new2() {
	return new MiqtVirtualQToolBox();
}

QToolBox* QToolBox_new3(QWidget* parent, int f) {
	return new MiqtVirtualQToolBox(parent, static_cast<Qt::WindowFlags>(f));
}

void QToolBox_virtbase(QToolBox* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QToolBox_MetaObject(const QToolBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QToolBox_Metacast(QToolBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QToolBox_Tr(const char* s) {
	QString _ret = QToolBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBox_TrUtf8(const char* s) {
	QString _ret = QToolBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QToolBox_AddItem(QToolBox* self, QWidget* widget, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addItem(widget, text_QString);
}

int QToolBox_AddItem2(QToolBox* self, QWidget* widget, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addItem(widget, *icon, text_QString);
}

int QToolBox_InsertItem(QToolBox* self, int index, QWidget* widget, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->insertItem(static_cast<int>(index), widget, text_QString);
}

int QToolBox_InsertItem2(QToolBox* self, int index, QWidget* widget, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->insertItem(static_cast<int>(index), widget, *icon, text_QString);
}

void QToolBox_RemoveItem(QToolBox* self, int index) {
	self->removeItem(static_cast<int>(index));
}

void QToolBox_SetItemEnabled(QToolBox* self, int index, bool enabled) {
	self->setItemEnabled(static_cast<int>(index), enabled);
}

bool QToolBox_IsItemEnabled(const QToolBox* self, int index) {
	return self->isItemEnabled(static_cast<int>(index));
}

void QToolBox_SetItemText(QToolBox* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setItemText(static_cast<int>(index), text_QString);
}

struct miqt_string QToolBox_ItemText(const QToolBox* self, int index) {
	QString _ret = self->itemText(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QToolBox_SetItemIcon(QToolBox* self, int index, QIcon* icon) {
	self->setItemIcon(static_cast<int>(index), *icon);
}

QIcon* QToolBox_ItemIcon(const QToolBox* self, int index) {
	return new QIcon(self->itemIcon(static_cast<int>(index)));
}

void QToolBox_SetItemToolTip(QToolBox* self, int index, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setItemToolTip(static_cast<int>(index), toolTip_QString);
}

struct miqt_string QToolBox_ItemToolTip(const QToolBox* self, int index) {
	QString _ret = self->itemToolTip(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QToolBox_CurrentIndex(const QToolBox* self) {
	return self->currentIndex();
}

QWidget* QToolBox_CurrentWidget(const QToolBox* self) {
	return self->currentWidget();
}

QWidget* QToolBox_Widget(const QToolBox* self, int index) {
	return self->widget(static_cast<int>(index));
}

int QToolBox_IndexOf(const QToolBox* self, QWidget* widget) {
	return self->indexOf(widget);
}

int QToolBox_Count(const QToolBox* self) {
	return self->count();
}

void QToolBox_SetCurrentIndex(QToolBox* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QToolBox_SetCurrentWidget(QToolBox* self, QWidget* widget) {
	self->setCurrentWidget(widget);
}

void QToolBox_CurrentChanged(QToolBox* self, int index) {
	self->currentChanged(static_cast<int>(index));
}

void QToolBox_connect_CurrentChanged(QToolBox* self, intptr_t slot) {
	MiqtVirtualQToolBox::connect(self, static_cast<void (QToolBox::*)(int)>(&QToolBox::currentChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QToolBox_CurrentChanged(slot, sigval1);
	});
}

struct miqt_string QToolBox_Tr2(const char* s, const char* c) {
	QString _ret = QToolBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QToolBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QToolBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QToolBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QToolBox_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) )->handle__Event = slot;
}

bool QToolBox_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQToolBox*)(self) )->virtualbase_Event(e);
}

void QToolBox_override_virtual_ItemInserted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) )->handle__ItemInserted = slot;
}

void QToolBox_virtualbase_ItemInserted(void* self, int index) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_ItemInserted(index);
}

void QToolBox_override_virtual_ItemRemoved(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) )->handle__ItemRemoved = slot;
}

void QToolBox_virtualbase_ItemRemoved(void* self, int index) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_ItemRemoved(index);
}

void QToolBox_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) )->handle__ShowEvent = slot;
}

void QToolBox_virtualbase_ShowEvent(void* self, QShowEvent* e) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_ShowEvent(e);
}

void QToolBox_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) )->handle__ChangeEvent = slot;
}

void QToolBox_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_ChangeEvent(param1);
}

void QToolBox_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) )->handle__SizeHint = slot;
}

QSize* QToolBox_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQToolBox*)(self) )->virtualbase_SizeHint();
}

void QToolBox_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) )->handle__PaintEvent = slot;
}

void QToolBox_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_PaintEvent(param1);
}

void QToolBox_Delete(QToolBox* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQToolBox*>( self );
	} else {
		delete self;
	}
}

