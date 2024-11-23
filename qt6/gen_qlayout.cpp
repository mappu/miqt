#include <QChildEvent>
#include <QEvent>
#include <QLayout>
#include <QLayoutItem>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <qlayout.h>
#include "gen_qlayout.h"
#include "_cgo_export.h"

class MiqtVirtualQLayout : public virtual QLayout {
public:

	MiqtVirtualQLayout(QWidget* parent): QLayout(parent) {};
	MiqtVirtualQLayout(): QLayout() {};

	virtual ~MiqtVirtualQLayout() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Spacing = 0;

	// Subclass to allow providing a Go implementation
	virtual int spacing() const override {
		if (handle__Spacing == 0) {
			return QLayout::spacing();
		}
		

		int callback_return_value = miqt_exec_callback_QLayout_Spacing(const_cast<MiqtVirtualQLayout*>(this), handle__Spacing);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Spacing() const {

		return QLayout::spacing();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSpacing = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSpacing(int spacing) override {
		if (handle__SetSpacing == 0) {
			QLayout::setSpacing(spacing);
			return;
		}
		
		int sigval1 = spacing;

		miqt_exec_callback_QLayout_SetSpacing(this, handle__SetSpacing, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSpacing(int spacing) {

		QLayout::setSpacing(static_cast<int>(spacing));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__Invalidate == 0) {
			QLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QLayout_Invalidate(this, handle__Invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Invalidate() {

		QLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Geometry = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (handle__Geometry == 0) {
			return QLayout::geometry();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QLayout_Geometry(const_cast<MiqtVirtualQLayout*>(this), handle__Geometry);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_Geometry() const {

		return new QRect(QLayout::geometry());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AddItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* param1) override {
		if (handle__AddItem == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QLayoutItem* sigval1 = param1;

		miqt_exec_callback_QLayout_AddItem(this, handle__AddItem, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ExpandingDirections = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (handle__ExpandingDirections == 0) {
			return QLayout::expandingDirections();
		}
		

		int callback_return_value = miqt_exec_callback_QLayout_ExpandingDirections(const_cast<MiqtVirtualQLayout*>(this), handle__ExpandingDirections);

		return static_cast<Qt::Orientations>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ExpandingDirections() const {

		Qt::Orientations _ret = QLayout::expandingDirections();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (handle__MinimumSize == 0) {
			return QLayout::minimumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLayout_MinimumSize(const_cast<MiqtVirtualQLayout*>(this), handle__MinimumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSize() const {

		return new QSize(QLayout::minimumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MaximumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (handle__MaximumSize == 0) {
			return QLayout::maximumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLayout_MaximumSize(const_cast<MiqtVirtualQLayout*>(this), handle__MaximumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MaximumSize() const {

		return new QSize(QLayout::maximumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& geometry) override {
		if (handle__SetGeometry == 0) {
			QLayout::setGeometry(geometry);
			return;
		}
		
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);

		miqt_exec_callback_QLayout_SetGeometry(this, handle__SetGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetGeometry(QRect* geometry) {

		QLayout::setGeometry(*geometry);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int index) const override {
		if (handle__ItemAt == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = index;

		QLayoutItem* callback_return_value = miqt_exec_callback_QLayout_ItemAt(const_cast<MiqtVirtualQLayout*>(this), handle__ItemAt, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TakeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int index) override {
		if (handle__TakeAt == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = index;

		QLayoutItem* callback_return_value = miqt_exec_callback_QLayout_TakeAt(this, handle__TakeAt, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(const QWidget* param1) const override {
		if (handle__IndexOf == 0) {
			return QLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = (QWidget*) param1;

		int callback_return_value = miqt_exec_callback_QLayout_IndexOf(const_cast<MiqtVirtualQLayout*>(this), handle__IndexOf, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndexOf(QWidget* param1) const {

		return QLayout::indexOf(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexOfWithQLayoutItem = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(const QLayoutItem* param1) const override {
		if (handle__IndexOfWithQLayoutItem == 0) {
			return QLayout::indexOf(param1);
		}
		
		QLayoutItem* sigval1 = (QLayoutItem*) param1;

		int callback_return_value = miqt_exec_callback_QLayout_IndexOfWithQLayoutItem(const_cast<MiqtVirtualQLayout*>(this), handle__IndexOfWithQLayoutItem, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndexOfWithQLayoutItem(QLayoutItem* param1) const {

		return QLayout::indexOf(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__Count == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QLayout_Count(const_cast<MiqtVirtualQLayout*>(this), handle__Count);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__IsEmpty == 0) {
			return QLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QLayout_IsEmpty(const_cast<MiqtVirtualQLayout*>(this), handle__IsEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEmpty() const {

		return QLayout::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ControlTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (handle__ControlTypes == 0) {
			return QLayout::controlTypes();
		}
		

		int callback_return_value = miqt_exec_callback_QLayout_ControlTypes(const_cast<MiqtVirtualQLayout*>(this), handle__ControlTypes);

		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ControlTypes() const {

		QSizePolicy::ControlTypes _ret = QLayout::controlTypes();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReplaceWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
		if (handle__ReplaceWidget == 0) {
			return QLayout::replaceWidget(from, to, options);
		}
		
		QWidget* sigval1 = from;
		QWidget* sigval2 = to;
		Qt::FindChildOptions options_ret = options;
		int sigval3 = static_cast<int>(options_ret);

		QLayoutItem* callback_return_value = miqt_exec_callback_QLayout_ReplaceWidget(this, handle__ReplaceWidget, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_ReplaceWidget(QWidget* from, QWidget* to, int options) {

		return QLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Layout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (handle__Layout == 0) {
			return QLayout::layout();
		}
		

		QLayout* callback_return_value = miqt_exec_callback_QLayout_Layout(this, handle__Layout);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayout* virtualbase_Layout() {

		return QLayout::layout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (handle__ChildEvent == 0) {
			QLayout::childEvent(e);
			return;
		}
		
		QChildEvent* sigval1 = e;

		miqt_exec_callback_QLayout_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* e) {

		QLayout::childEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QLayout_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QLayout_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QLayout_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLayout_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLayout_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLayout_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QLayout::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QSize(); // Pure virtual, there is no base we can call
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLayout_SizeHint(const_cast<MiqtVirtualQLayout*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QLayout::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QLayout_HasHeightForWidth(const_cast<MiqtVirtualQLayout*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QLayout::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QLayout::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QLayout_HeightForWidth(const_cast<MiqtVirtualQLayout*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QLayout::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (handle__MinimumHeightForWidth == 0) {
			return QLayout::minimumHeightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QLayout_MinimumHeightForWidth(const_cast<MiqtVirtualQLayout*>(this), handle__MinimumHeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_MinimumHeightForWidth(int param1) const {

		return QLayout::minimumHeightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() const override {
		if (handle__Widget == 0) {
			return QLayout::widget();
		}
		

		QWidget* callback_return_value = miqt_exec_callback_QLayout_Widget(const_cast<MiqtVirtualQLayout*>(this), handle__Widget);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_Widget() const {

		return QLayout::widget();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SpacerItem = 0;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (handle__SpacerItem == 0) {
			return QLayout::spacerItem();
		}
		

		QSpacerItem* callback_return_value = miqt_exec_callback_QLayout_SpacerItem(this, handle__SpacerItem);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSpacerItem* virtualbase_SpacerItem() {

		return QLayout::spacerItem();

	}

};

void QLayout_new(QWidget* parent, QLayout** outptr_QLayout, QObject** outptr_QObject, QLayoutItem** outptr_QLayoutItem) {
	MiqtVirtualQLayout* ret = new MiqtVirtualQLayout(parent);
	*outptr_QLayout = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QLayoutItem = static_cast<QLayoutItem*>(ret);
}

void QLayout_new2(QLayout** outptr_QLayout, QObject** outptr_QObject, QLayoutItem** outptr_QLayoutItem) {
	MiqtVirtualQLayout* ret = new MiqtVirtualQLayout();
	*outptr_QLayout = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QLayoutItem = static_cast<QLayoutItem*>(ret);
}

QMetaObject* QLayout_MetaObject(const QLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLayout_Metacast(QLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLayout_Tr(const char* s) {
	QString _ret = QLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QLayout_Spacing(const QLayout* self) {
	return self->spacing();
}

void QLayout_SetSpacing(QLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

void QLayout_SetContentsMargins(QLayout* self, int left, int top, int right, int bottom) {
	self->setContentsMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

void QLayout_SetContentsMarginsWithMargins(QLayout* self, QMargins* margins) {
	self->setContentsMargins(*margins);
}

void QLayout_UnsetContentsMargins(QLayout* self) {
	self->unsetContentsMargins();
}

void QLayout_GetContentsMargins(const QLayout* self, int* left, int* top, int* right, int* bottom) {
	self->getContentsMargins(static_cast<int*>(left), static_cast<int*>(top), static_cast<int*>(right), static_cast<int*>(bottom));
}

QMargins* QLayout_ContentsMargins(const QLayout* self) {
	return new QMargins(self->contentsMargins());
}

QRect* QLayout_ContentsRect(const QLayout* self) {
	return new QRect(self->contentsRect());
}

bool QLayout_SetAlignment(QLayout* self, QWidget* w, int alignment) {
	return self->setAlignment(w, static_cast<Qt::Alignment>(alignment));
}

bool QLayout_SetAlignment2(QLayout* self, QLayout* l, int alignment) {
	return self->setAlignment(l, static_cast<Qt::Alignment>(alignment));
}

void QLayout_SetSizeConstraint(QLayout* self, int sizeConstraint) {
	self->setSizeConstraint(static_cast<QLayout::SizeConstraint>(sizeConstraint));
}

int QLayout_SizeConstraint(const QLayout* self) {
	QLayout::SizeConstraint _ret = self->sizeConstraint();
	return static_cast<int>(_ret);
}

void QLayout_SetMenuBar(QLayout* self, QWidget* w) {
	self->setMenuBar(w);
}

QWidget* QLayout_MenuBar(const QLayout* self) {
	return self->menuBar();
}

QWidget* QLayout_ParentWidget(const QLayout* self) {
	return self->parentWidget();
}

void QLayout_Invalidate(QLayout* self) {
	self->invalidate();
}

QRect* QLayout_Geometry(const QLayout* self) {
	return new QRect(self->geometry());
}

bool QLayout_Activate(QLayout* self) {
	return self->activate();
}

void QLayout_Update(QLayout* self) {
	self->update();
}

void QLayout_AddWidget(QLayout* self, QWidget* w) {
	self->addWidget(w);
}

void QLayout_AddItem(QLayout* self, QLayoutItem* param1) {
	self->addItem(param1);
}

void QLayout_RemoveWidget(QLayout* self, QWidget* w) {
	self->removeWidget(w);
}

void QLayout_RemoveItem(QLayout* self, QLayoutItem* param1) {
	self->removeItem(param1);
}

int QLayout_ExpandingDirections(const QLayout* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

QSize* QLayout_MinimumSize(const QLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QLayout_MaximumSize(const QLayout* self) {
	return new QSize(self->maximumSize());
}

void QLayout_SetGeometry(QLayout* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QLayoutItem* QLayout_ItemAt(const QLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QLayout_TakeAt(QLayout* self, int index) {
	return self->takeAt(static_cast<int>(index));
}

int QLayout_IndexOf(const QLayout* self, QWidget* param1) {
	return self->indexOf(param1);
}

int QLayout_IndexOfWithQLayoutItem(const QLayout* self, QLayoutItem* param1) {
	return self->indexOf(param1);
}

int QLayout_Count(const QLayout* self) {
	return self->count();
}

bool QLayout_IsEmpty(const QLayout* self) {
	return self->isEmpty();
}

int QLayout_ControlTypes(const QLayout* self) {
	QSizePolicy::ControlTypes _ret = self->controlTypes();
	return static_cast<int>(_ret);
}

QLayoutItem* QLayout_ReplaceWidget(QLayout* self, QWidget* from, QWidget* to, int options) {
	return self->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

int QLayout_TotalMinimumHeightForWidth(const QLayout* self, int w) {
	return self->totalMinimumHeightForWidth(static_cast<int>(w));
}

int QLayout_TotalHeightForWidth(const QLayout* self, int w) {
	return self->totalHeightForWidth(static_cast<int>(w));
}

QSize* QLayout_TotalMinimumSize(const QLayout* self) {
	return new QSize(self->totalMinimumSize());
}

QSize* QLayout_TotalMaximumSize(const QLayout* self) {
	return new QSize(self->totalMaximumSize());
}

QSize* QLayout_TotalSizeHint(const QLayout* self) {
	return new QSize(self->totalSizeHint());
}

QLayout* QLayout_Layout(QLayout* self) {
	return self->layout();
}

void QLayout_SetEnabled(QLayout* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QLayout_IsEnabled(const QLayout* self) {
	return self->isEnabled();
}

QSize* QLayout_ClosestAcceptableSize(QWidget* w, QSize* s) {
	return new QSize(QLayout::closestAcceptableSize(w, *s));
}

struct miqt_string QLayout_Tr2(const char* s, const char* c) {
	QString _ret = QLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLayout_override_virtual_Spacing(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__Spacing = slot;
}

int QLayout_virtualbase_Spacing(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_Spacing();
}

void QLayout_override_virtual_SetSpacing(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__SetSpacing = slot;
}

void QLayout_virtualbase_SetSpacing(void* self, int spacing) {
	( (MiqtVirtualQLayout*)(self) )->virtualbase_SetSpacing(spacing);
}

void QLayout_override_virtual_Invalidate(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__Invalidate = slot;
}

void QLayout_virtualbase_Invalidate(void* self) {
	( (MiqtVirtualQLayout*)(self) )->virtualbase_Invalidate();
}

void QLayout_override_virtual_Geometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__Geometry = slot;
}

QRect* QLayout_virtualbase_Geometry(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_Geometry();
}

void QLayout_override_virtual_AddItem(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__AddItem = slot;
}

void QLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__ExpandingDirections = slot;
}

int QLayout_virtualbase_ExpandingDirections(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_ExpandingDirections();
}

void QLayout_override_virtual_MinimumSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__MinimumSize = slot;
}

QSize* QLayout_virtualbase_MinimumSize(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_MinimumSize();
}

void QLayout_override_virtual_MaximumSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__MaximumSize = slot;
}

QSize* QLayout_virtualbase_MaximumSize(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_MaximumSize();
}

void QLayout_override_virtual_SetGeometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__SetGeometry = slot;
}

void QLayout_virtualbase_SetGeometry(void* self, QRect* geometry) {
	( (MiqtVirtualQLayout*)(self) )->virtualbase_SetGeometry(geometry);
}

void QLayout_override_virtual_ItemAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__ItemAt = slot;
}

void QLayout_override_virtual_TakeAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__TakeAt = slot;
}

void QLayout_override_virtual_IndexOf(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__IndexOf = slot;
}

int QLayout_virtualbase_IndexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_IndexOf(param1);
}

void QLayout_override_virtual_IndexOfWithQLayoutItem(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__IndexOfWithQLayoutItem = slot;
}

int QLayout_virtualbase_IndexOfWithQLayoutItem(const void* self, QLayoutItem* param1) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_IndexOfWithQLayoutItem(param1);
}

void QLayout_override_virtual_Count(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__Count = slot;
}

void QLayout_override_virtual_IsEmpty(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__IsEmpty = slot;
}

bool QLayout_virtualbase_IsEmpty(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_IsEmpty();
}

void QLayout_override_virtual_ControlTypes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__ControlTypes = slot;
}

int QLayout_virtualbase_ControlTypes(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_ControlTypes();
}

void QLayout_override_virtual_ReplaceWidget(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__ReplaceWidget = slot;
}

QLayoutItem* QLayout_virtualbase_ReplaceWidget(void* self, QWidget* from, QWidget* to, int options) {
	return ( (MiqtVirtualQLayout*)(self) )->virtualbase_ReplaceWidget(from, to, options);
}

void QLayout_override_virtual_Layout(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__Layout = slot;
}

QLayout* QLayout_virtualbase_Layout(void* self) {
	return ( (MiqtVirtualQLayout*)(self) )->virtualbase_Layout();
}

void QLayout_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__ChildEvent = slot;
}

void QLayout_virtualbase_ChildEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQLayout*)(self) )->virtualbase_ChildEvent(e);
}

void QLayout_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__Event = slot;
}

bool QLayout_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQLayout*)(self) )->virtualbase_Event(event);
}

void QLayout_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__EventFilter = slot;
}

bool QLayout_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQLayout*)(self) )->virtualbase_EventFilter(watched, event);
}

void QLayout_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__TimerEvent = slot;
}

void QLayout_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQLayout*)(self) )->virtualbase_TimerEvent(event);
}

void QLayout_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__CustomEvent = slot;
}

void QLayout_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQLayout*)(self) )->virtualbase_CustomEvent(event);
}

void QLayout_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__ConnectNotify = slot;
}

void QLayout_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLayout*)(self) )->virtualbase_ConnectNotify(signal);
}

void QLayout_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__DisconnectNotify = slot;
}

void QLayout_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLayout*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QLayout_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__SizeHint = slot;
}

void QLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__HasHeightForWidth = slot;
}

bool QLayout_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_HasHeightForWidth();
}

void QLayout_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__HeightForWidth = slot;
}

int QLayout_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_HeightForWidth(param1);
}

void QLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__MinimumHeightForWidth = slot;
}

int QLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_MinimumHeightForWidth(param1);
}

void QLayout_override_virtual_Widget(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__Widget = slot;
}

QWidget* QLayout_virtualbase_Widget(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_Widget();
}

void QLayout_override_virtual_SpacerItem(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) )->handle__SpacerItem = slot;
}

QSpacerItem* QLayout_virtualbase_SpacerItem(void* self) {
	return ( (MiqtVirtualQLayout*)(self) )->virtualbase_SpacerItem();
}

void QLayout_Delete(QLayout* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQLayout*>( self );
	} else {
		delete self;
	}
}

