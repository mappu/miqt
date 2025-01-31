#include <QChildEvent>
#include <QEvent>
#include <QLayout>
#include <QLayoutItem>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QStackedLayout>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <qstackedlayout.h>
#include "gen_qstackedlayout.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QStackedLayout_WidgetRemoved(intptr_t, int);
void miqt_exec_callback_QStackedLayout_CurrentChanged(intptr_t, int);
int miqt_exec_callback_QStackedLayout_Count(const QStackedLayout*, intptr_t);
void miqt_exec_callback_QStackedLayout_AddItem(QStackedLayout*, intptr_t, QLayoutItem*);
QSize* miqt_exec_callback_QStackedLayout_SizeHint(const QStackedLayout*, intptr_t);
QSize* miqt_exec_callback_QStackedLayout_MinimumSize(const QStackedLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QStackedLayout_ItemAt(const QStackedLayout*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QStackedLayout_TakeAt(QStackedLayout*, intptr_t, int);
void miqt_exec_callback_QStackedLayout_SetGeometry(QStackedLayout*, intptr_t, QRect*);
bool miqt_exec_callback_QStackedLayout_HasHeightForWidth(const QStackedLayout*, intptr_t);
int miqt_exec_callback_QStackedLayout_HeightForWidth(const QStackedLayout*, intptr_t, int);
void miqt_exec_callback_QStackedLayout_Invalidate(QStackedLayout*, intptr_t);
QRect* miqt_exec_callback_QStackedLayout_Geometry(const QStackedLayout*, intptr_t);
int miqt_exec_callback_QStackedLayout_ExpandingDirections(const QStackedLayout*, intptr_t);
QSize* miqt_exec_callback_QStackedLayout_MaximumSize(const QStackedLayout*, intptr_t);
int miqt_exec_callback_QStackedLayout_IndexOf(const QStackedLayout*, intptr_t, QWidget*);
bool miqt_exec_callback_QStackedLayout_IsEmpty(const QStackedLayout*, intptr_t);
int miqt_exec_callback_QStackedLayout_ControlTypes(const QStackedLayout*, intptr_t);
QLayout* miqt_exec_callback_QStackedLayout_Layout(QStackedLayout*, intptr_t);
void miqt_exec_callback_QStackedLayout_ChildEvent(QStackedLayout*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QStackedLayout_Event(QStackedLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QStackedLayout_EventFilter(QStackedLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QStackedLayout_TimerEvent(QStackedLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QStackedLayout_CustomEvent(QStackedLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QStackedLayout_ConnectNotify(QStackedLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QStackedLayout_DisconnectNotify(QStackedLayout*, intptr_t, QMetaMethod*);
int miqt_exec_callback_QStackedLayout_MinimumHeightForWidth(const QStackedLayout*, intptr_t, int);
QWidget* miqt_exec_callback_QStackedLayout_Widget(QStackedLayout*, intptr_t);
QSpacerItem* miqt_exec_callback_QStackedLayout_SpacerItem(QStackedLayout*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStackedLayout final : public QStackedLayout {
public:

	MiqtVirtualQStackedLayout(QWidget* parent): QStackedLayout(parent) {};
	MiqtVirtualQStackedLayout(): QStackedLayout() {};
	MiqtVirtualQStackedLayout(QLayout* parentLayout): QStackedLayout(parentLayout) {};

	virtual ~MiqtVirtualQStackedLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__Count == 0) {
			return QStackedLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QStackedLayout_Count(this, handle__Count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Count() const {

		return QStackedLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AddItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* item) override {
		if (handle__AddItem == 0) {
			QStackedLayout::addItem(item);
			return;
		}
		
		QLayoutItem* sigval1 = item;

		miqt_exec_callback_QStackedLayout_AddItem(this, handle__AddItem, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_AddItem(QLayoutItem* item) {

		QStackedLayout::addItem(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QStackedLayout::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QStackedLayout_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QStackedLayout::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (handle__MinimumSize == 0) {
			return QStackedLayout::minimumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QStackedLayout_MinimumSize(this, handle__MinimumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSize() const {

		return new QSize(QStackedLayout::minimumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int param1) const override {
		if (handle__ItemAt == 0) {
			return QStackedLayout::itemAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QStackedLayout_ItemAt(this, handle__ItemAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_ItemAt(int param1) const {

		return QStackedLayout::itemAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TakeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int param1) override {
		if (handle__TakeAt == 0) {
			return QStackedLayout::takeAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QStackedLayout_TakeAt(this, handle__TakeAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_TakeAt(int param1) {

		return QStackedLayout::takeAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& rect) override {
		if (handle__SetGeometry == 0) {
			QStackedLayout::setGeometry(rect);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);

		miqt_exec_callback_QStackedLayout_SetGeometry(this, handle__SetGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetGeometry(QRect* rect) {

		QStackedLayout::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QStackedLayout::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QStackedLayout_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QStackedLayout::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int width) const override {
		if (handle__HeightForWidth == 0) {
			return QStackedLayout::heightForWidth(width);
		}
		
		int sigval1 = width;

		int callback_return_value = miqt_exec_callback_QStackedLayout_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int width) const {

		return QStackedLayout::heightForWidth(static_cast<int>(width));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__Invalidate == 0) {
			QStackedLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QStackedLayout_Invalidate(this, handle__Invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Invalidate() {

		QStackedLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Geometry = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (handle__Geometry == 0) {
			return QStackedLayout::geometry();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QStackedLayout_Geometry(this, handle__Geometry);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_Geometry() const {

		return new QRect(QStackedLayout::geometry());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ExpandingDirections = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (handle__ExpandingDirections == 0) {
			return QStackedLayout::expandingDirections();
		}
		

		int callback_return_value = miqt_exec_callback_QStackedLayout_ExpandingDirections(this, handle__ExpandingDirections);

		return static_cast<Qt::Orientations>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ExpandingDirections() const {

		Qt::Orientations _ret = QStackedLayout::expandingDirections();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MaximumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (handle__MaximumSize == 0) {
			return QStackedLayout::maximumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QStackedLayout_MaximumSize(this, handle__MaximumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MaximumSize() const {

		return new QSize(QStackedLayout::maximumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(QWidget* param1) const override {
		if (handle__IndexOf == 0) {
			return QStackedLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QStackedLayout_IndexOf(this, handle__IndexOf, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndexOf(QWidget* param1) const {

		return QStackedLayout::indexOf(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__IsEmpty == 0) {
			return QStackedLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QStackedLayout_IsEmpty(this, handle__IsEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEmpty() const {

		return QStackedLayout::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ControlTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (handle__ControlTypes == 0) {
			return QStackedLayout::controlTypes();
		}
		

		int callback_return_value = miqt_exec_callback_QStackedLayout_ControlTypes(this, handle__ControlTypes);

		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ControlTypes() const {

		QSizePolicy::ControlTypes _ret = QStackedLayout::controlTypes();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Layout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (handle__Layout == 0) {
			return QStackedLayout::layout();
		}
		

		QLayout* callback_return_value = miqt_exec_callback_QStackedLayout_Layout(this, handle__Layout);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayout* virtualbase_Layout() {

		return QStackedLayout::layout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (handle__ChildEvent == 0) {
			QStackedLayout::childEvent(e);
			return;
		}
		
		QChildEvent* sigval1 = e;

		miqt_exec_callback_QStackedLayout_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* e) {

		QStackedLayout::childEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QStackedLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QStackedLayout_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QStackedLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QStackedLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QStackedLayout_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QStackedLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QStackedLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QStackedLayout_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QStackedLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QStackedLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStackedLayout_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QStackedLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QStackedLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStackedLayout_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QStackedLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QStackedLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStackedLayout_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QStackedLayout::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (handle__MinimumHeightForWidth == 0) {
			return QStackedLayout::minimumHeightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QStackedLayout_MinimumHeightForWidth(this, handle__MinimumHeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_MinimumHeightForWidth(int param1) const {

		return QStackedLayout::minimumHeightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() override {
		if (handle__Widget == 0) {
			return QStackedLayout::widget();
		}
		

		QWidget* callback_return_value = miqt_exec_callback_QStackedLayout_Widget(this, handle__Widget);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_Widget() {

		return QStackedLayout::widget();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SpacerItem = 0;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (handle__SpacerItem == 0) {
			return QStackedLayout::spacerItem();
		}
		

		QSpacerItem* callback_return_value = miqt_exec_callback_QStackedLayout_SpacerItem(this, handle__SpacerItem);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSpacerItem* virtualbase_SpacerItem() {

		return QStackedLayout::spacerItem();

	}

};

QStackedLayout* QStackedLayout_new(QWidget* parent) {
	return new MiqtVirtualQStackedLayout(parent);
}

QStackedLayout* QStackedLayout_new2() {
	return new MiqtVirtualQStackedLayout();
}

QStackedLayout* QStackedLayout_new3(QLayout* parentLayout) {
	return new MiqtVirtualQStackedLayout(parentLayout);
}

void QStackedLayout_virtbase(QStackedLayout* src, QLayout** outptr_QLayout) {
	*outptr_QLayout = static_cast<QLayout*>(src);
}

QMetaObject* QStackedLayout_MetaObject(const QStackedLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStackedLayout_Metacast(QStackedLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStackedLayout_Tr(const char* s) {
	QString _ret = QStackedLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedLayout_TrUtf8(const char* s) {
	QString _ret = QStackedLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QStackedLayout_AddWidget(QStackedLayout* self, QWidget* w) {
	return self->addWidget(w);
}

int QStackedLayout_InsertWidget(QStackedLayout* self, int index, QWidget* w) {
	return self->insertWidget(static_cast<int>(index), w);
}

QWidget* QStackedLayout_CurrentWidget(const QStackedLayout* self) {
	return self->currentWidget();
}

int QStackedLayout_CurrentIndex(const QStackedLayout* self) {
	return self->currentIndex();
}

QWidget* QStackedLayout_Widget(const QStackedLayout* self, int param1) {
	return self->widget(static_cast<int>(param1));
}

int QStackedLayout_Count(const QStackedLayout* self) {
	return self->count();
}

int QStackedLayout_StackingMode(const QStackedLayout* self) {
	QStackedLayout::StackingMode _ret = self->stackingMode();
	return static_cast<int>(_ret);
}

void QStackedLayout_SetStackingMode(QStackedLayout* self, int stackingMode) {
	self->setStackingMode(static_cast<QStackedLayout::StackingMode>(stackingMode));
}

void QStackedLayout_AddItem(QStackedLayout* self, QLayoutItem* item) {
	self->addItem(item);
}

QSize* QStackedLayout_SizeHint(const QStackedLayout* self) {
	return new QSize(self->sizeHint());
}

QSize* QStackedLayout_MinimumSize(const QStackedLayout* self) {
	return new QSize(self->minimumSize());
}

QLayoutItem* QStackedLayout_ItemAt(const QStackedLayout* self, int param1) {
	return self->itemAt(static_cast<int>(param1));
}

QLayoutItem* QStackedLayout_TakeAt(QStackedLayout* self, int param1) {
	return self->takeAt(static_cast<int>(param1));
}

void QStackedLayout_SetGeometry(QStackedLayout* self, QRect* rect) {
	self->setGeometry(*rect);
}

bool QStackedLayout_HasHeightForWidth(const QStackedLayout* self) {
	return self->hasHeightForWidth();
}

int QStackedLayout_HeightForWidth(const QStackedLayout* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

void QStackedLayout_WidgetRemoved(QStackedLayout* self, int index) {
	self->widgetRemoved(static_cast<int>(index));
}

void QStackedLayout_connect_WidgetRemoved(QStackedLayout* self, intptr_t slot) {
	MiqtVirtualQStackedLayout::connect(self, static_cast<void (QStackedLayout::*)(int)>(&QStackedLayout::widgetRemoved), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QStackedLayout_WidgetRemoved(slot, sigval1);
	});
}

void QStackedLayout_CurrentChanged(QStackedLayout* self, int index) {
	self->currentChanged(static_cast<int>(index));
}

void QStackedLayout_connect_CurrentChanged(QStackedLayout* self, intptr_t slot) {
	MiqtVirtualQStackedLayout::connect(self, static_cast<void (QStackedLayout::*)(int)>(&QStackedLayout::currentChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QStackedLayout_CurrentChanged(slot, sigval1);
	});
}

void QStackedLayout_SetCurrentIndex(QStackedLayout* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QStackedLayout_SetCurrentWidget(QStackedLayout* self, QWidget* w) {
	self->setCurrentWidget(w);
}

struct miqt_string QStackedLayout_Tr2(const char* s, const char* c) {
	QString _ret = QStackedLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStackedLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedLayout_TrUtf82(const char* s, const char* c) {
	QString _ret = QStackedLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedLayout_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QStackedLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QStackedLayout_override_virtual_Count(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Count = slot;
	return true;
}

int QStackedLayout_virtualbase_Count(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_Count();
}

bool QStackedLayout_override_virtual_AddItem(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AddItem = slot;
	return true;
}

void QStackedLayout_virtualbase_AddItem(void* self, QLayoutItem* item) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_AddItem(item);
}

bool QStackedLayout_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QStackedLayout_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_SizeHint();
}

bool QStackedLayout_override_virtual_MinimumSize(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSize = slot;
	return true;
}

QSize* QStackedLayout_virtualbase_MinimumSize(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_MinimumSize();
}

bool QStackedLayout_override_virtual_ItemAt(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemAt = slot;
	return true;
}

QLayoutItem* QStackedLayout_virtualbase_ItemAt(const void* self, int param1) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_ItemAt(param1);
}

bool QStackedLayout_override_virtual_TakeAt(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TakeAt = slot;
	return true;
}

QLayoutItem* QStackedLayout_virtualbase_TakeAt(void* self, int param1) {
	return ( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_TakeAt(param1);
}

bool QStackedLayout_override_virtual_SetGeometry(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetGeometry = slot;
	return true;
}

void QStackedLayout_virtualbase_SetGeometry(void* self, QRect* rect) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_SetGeometry(rect);
}

bool QStackedLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QStackedLayout_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_HasHeightForWidth();
}

bool QStackedLayout_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QStackedLayout_virtualbase_HeightForWidth(const void* self, int width) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_HeightForWidth(width);
}

bool QStackedLayout_override_virtual_Invalidate(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Invalidate = slot;
	return true;
}

void QStackedLayout_virtualbase_Invalidate(void* self) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_Invalidate();
}

bool QStackedLayout_override_virtual_Geometry(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Geometry = slot;
	return true;
}

QRect* QStackedLayout_virtualbase_Geometry(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_Geometry();
}

bool QStackedLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ExpandingDirections = slot;
	return true;
}

int QStackedLayout_virtualbase_ExpandingDirections(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_ExpandingDirections();
}

bool QStackedLayout_override_virtual_MaximumSize(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MaximumSize = slot;
	return true;
}

QSize* QStackedLayout_virtualbase_MaximumSize(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_MaximumSize();
}

bool QStackedLayout_override_virtual_IndexOf(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexOf = slot;
	return true;
}

int QStackedLayout_virtualbase_IndexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_IndexOf(param1);
}

bool QStackedLayout_override_virtual_IsEmpty(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsEmpty = slot;
	return true;
}

bool QStackedLayout_virtualbase_IsEmpty(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_IsEmpty();
}

bool QStackedLayout_override_virtual_ControlTypes(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ControlTypes = slot;
	return true;
}

int QStackedLayout_virtualbase_ControlTypes(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_ControlTypes();
}

bool QStackedLayout_override_virtual_Layout(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Layout = slot;
	return true;
}

QLayout* QStackedLayout_virtualbase_Layout(void* self) {
	return ( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_Layout();
}

bool QStackedLayout_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QStackedLayout_virtualbase_ChildEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_ChildEvent(e);
}

bool QStackedLayout_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QStackedLayout_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_Event(event);
}

bool QStackedLayout_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QStackedLayout_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QStackedLayout_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QStackedLayout_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_TimerEvent(event);
}

bool QStackedLayout_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QStackedLayout_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_CustomEvent(event);
}

bool QStackedLayout_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QStackedLayout_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QStackedLayout_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QStackedLayout_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_DisconnectNotify(signal);
}

bool QStackedLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumHeightForWidth = slot;
	return true;
}

int QStackedLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_MinimumHeightForWidth(param1);
}

bool QStackedLayout_override_virtual_Widget(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Widget = slot;
	return true;
}

QWidget* QStackedLayout_virtualbase_Widget(void* self) {
	return ( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_Widget();
}

bool QStackedLayout_override_virtual_SpacerItem(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SpacerItem = slot;
	return true;
}

QSpacerItem* QStackedLayout_virtualbase_SpacerItem(void* self) {
	return ( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_SpacerItem();
}

void QStackedLayout_Delete(QStackedLayout* self) {
	delete self;
}

