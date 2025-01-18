#include <QEvent>
#include <QFrame>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QSize>
#include <QStackedWidget>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QWidget>
#include <qstackedwidget.h>
#include "gen_qstackedwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QStackedWidget_CurrentChanged(intptr_t, int);
void miqt_exec_callback_QStackedWidget_WidgetRemoved(intptr_t, int);
bool miqt_exec_callback_QStackedWidget_Event(void*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QStackedWidget_SizeHint(void*, intptr_t);
void miqt_exec_callback_QStackedWidget_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QStackedWidget_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QStackedWidget_InitStyleOption(void*, intptr_t, QStyleOptionFrame*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStackedWidget final : public QStackedWidget {
public:

	MiqtVirtualQStackedWidget(QWidget* parent): QStackedWidget(parent) {};
	MiqtVirtualQStackedWidget(): QStackedWidget() {};

	virtual ~MiqtVirtualQStackedWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QStackedWidget::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QStackedWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QStackedWidget::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QStackedWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QStackedWidget_SizeHint(const_cast<MiqtVirtualQStackedWidget*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QStackedWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QStackedWidget::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QStackedWidget_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QStackedWidget::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QStackedWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QStackedWidget_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QStackedWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QStackedWidget::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QStackedWidget_InitStyleOption(const_cast<MiqtVirtualQStackedWidget*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QStackedWidget::initStyleOption(option);

	}

};

QStackedWidget* QStackedWidget_new(QWidget* parent) {
	return new MiqtVirtualQStackedWidget(parent);
}

QStackedWidget* QStackedWidget_new2() {
	return new MiqtVirtualQStackedWidget();
}

void QStackedWidget_virtbase(QStackedWidget* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QStackedWidget_MetaObject(const QStackedWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStackedWidget_Metacast(QStackedWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStackedWidget_Tr(const char* s) {
	QString _ret = QStackedWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QStackedWidget_AddWidget(QStackedWidget* self, QWidget* w) {
	return self->addWidget(w);
}

int QStackedWidget_InsertWidget(QStackedWidget* self, int index, QWidget* w) {
	return self->insertWidget(static_cast<int>(index), w);
}

void QStackedWidget_RemoveWidget(QStackedWidget* self, QWidget* w) {
	self->removeWidget(w);
}

QWidget* QStackedWidget_CurrentWidget(const QStackedWidget* self) {
	return self->currentWidget();
}

int QStackedWidget_CurrentIndex(const QStackedWidget* self) {
	return self->currentIndex();
}

int QStackedWidget_IndexOf(const QStackedWidget* self, QWidget* param1) {
	return self->indexOf(param1);
}

QWidget* QStackedWidget_Widget(const QStackedWidget* self, int param1) {
	return self->widget(static_cast<int>(param1));
}

int QStackedWidget_Count(const QStackedWidget* self) {
	return self->count();
}

void QStackedWidget_SetCurrentIndex(QStackedWidget* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QStackedWidget_SetCurrentWidget(QStackedWidget* self, QWidget* w) {
	self->setCurrentWidget(w);
}

void QStackedWidget_CurrentChanged(QStackedWidget* self, int param1) {
	self->currentChanged(static_cast<int>(param1));
}

void QStackedWidget_connect_CurrentChanged(QStackedWidget* self, intptr_t slot) {
	MiqtVirtualQStackedWidget::connect(self, static_cast<void (QStackedWidget::*)(int)>(&QStackedWidget::currentChanged), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QStackedWidget_CurrentChanged(slot, sigval1);
	});
}

void QStackedWidget_WidgetRemoved(QStackedWidget* self, int index) {
	self->widgetRemoved(static_cast<int>(index));
}

void QStackedWidget_connect_WidgetRemoved(QStackedWidget* self, intptr_t slot) {
	MiqtVirtualQStackedWidget::connect(self, static_cast<void (QStackedWidget::*)(int)>(&QStackedWidget::widgetRemoved), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QStackedWidget_WidgetRemoved(slot, sigval1);
	});
}

struct miqt_string QStackedWidget_Tr2(const char* s, const char* c) {
	QString _ret = QStackedWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStackedWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QStackedWidget_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QStackedWidget_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_Event(e);
}

bool QStackedWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QStackedWidget_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQStackedWidget*)(self) )->virtualbase_SizeHint();
}

bool QStackedWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_PaintEvent(param1);
}

bool QStackedWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QStackedWidget_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QStackedWidget_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQStackedWidget*)(self) )->virtualbase_InitStyleOption(option);
}

void QStackedWidget_Delete(QStackedWidget* self) {
	delete self;
}

