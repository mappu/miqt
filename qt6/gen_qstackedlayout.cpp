#include <QChildEvent>
#include <QLayout>
#include <QLayoutItem>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QStackedLayout>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qstackedlayout.h>
#include "gen_qstackedlayout.h"
#include "_cgo_export.h"

class MiqtVirtualQStackedLayout : public virtual QStackedLayout {
public:

	MiqtVirtualQStackedLayout(QWidget* parent): QStackedLayout(parent) {};
	MiqtVirtualQStackedLayout(): QStackedLayout() {};
	MiqtVirtualQStackedLayout(QLayout* parentLayout): QStackedLayout(parentLayout) {};

	virtual ~MiqtVirtualQStackedLayout() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__Count == 0) {
			return QStackedLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QStackedLayout_Count(const_cast<MiqtVirtualQStackedLayout*>(this), handle__Count);

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
		

		QSize* callback_return_value = miqt_exec_callback_QStackedLayout_SizeHint(const_cast<MiqtVirtualQStackedLayout*>(this), handle__SizeHint);

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
		

		QSize* callback_return_value = miqt_exec_callback_QStackedLayout_MinimumSize(const_cast<MiqtVirtualQStackedLayout*>(this), handle__MinimumSize);

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

		QLayoutItem* callback_return_value = miqt_exec_callback_QStackedLayout_ItemAt(const_cast<MiqtVirtualQStackedLayout*>(this), handle__ItemAt, sigval1);

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
		

		bool callback_return_value = miqt_exec_callback_QStackedLayout_HasHeightForWidth(const_cast<MiqtVirtualQStackedLayout*>(this), handle__HasHeightForWidth);

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

		int callback_return_value = miqt_exec_callback_QStackedLayout_HeightForWidth(const_cast<MiqtVirtualQStackedLayout*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int width) const {

		return QStackedLayout::heightForWidth(static_cast<int>(width));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Spacing = 0;

	// Subclass to allow providing a Go implementation
	virtual int spacing() const override {
		if (handle__Spacing == 0) {
			return QStackedLayout::spacing();
		}
		

		int callback_return_value = miqt_exec_callback_QStackedLayout_Spacing(const_cast<MiqtVirtualQStackedLayout*>(this), handle__Spacing);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Spacing() const {

		return QStackedLayout::spacing();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSpacing = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSpacing(int spacing) override {
		if (handle__SetSpacing == 0) {
			QStackedLayout::setSpacing(spacing);
			return;
		}
		
		int sigval1 = spacing;

		miqt_exec_callback_QStackedLayout_SetSpacing(this, handle__SetSpacing, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSpacing(int spacing) {

		QStackedLayout::setSpacing(static_cast<int>(spacing));

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
		

		QRect* callback_return_value = miqt_exec_callback_QStackedLayout_Geometry(const_cast<MiqtVirtualQStackedLayout*>(this), handle__Geometry);

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
		

		int callback_return_value = miqt_exec_callback_QStackedLayout_ExpandingDirections(const_cast<MiqtVirtualQStackedLayout*>(this), handle__ExpandingDirections);

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
		

		QSize* callback_return_value = miqt_exec_callback_QStackedLayout_MaximumSize(const_cast<MiqtVirtualQStackedLayout*>(this), handle__MaximumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MaximumSize() const {

		return new QSize(QStackedLayout::maximumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(const QWidget* param1) const override {
		if (handle__IndexOf == 0) {
			return QStackedLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = (QWidget*) param1;

		int callback_return_value = miqt_exec_callback_QStackedLayout_IndexOf(const_cast<MiqtVirtualQStackedLayout*>(this), handle__IndexOf, sigval1);

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
		

		bool callback_return_value = miqt_exec_callback_QStackedLayout_IsEmpty(const_cast<MiqtVirtualQStackedLayout*>(this), handle__IsEmpty);

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
		

		int callback_return_value = miqt_exec_callback_QStackedLayout_ControlTypes(const_cast<MiqtVirtualQStackedLayout*>(this), handle__ControlTypes);

		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ControlTypes() const {

		QSizePolicy::ControlTypes _ret = QStackedLayout::controlTypes();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReplaceWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
		if (handle__ReplaceWidget == 0) {
			return QStackedLayout::replaceWidget(from, to, options);
		}
		
		QWidget* sigval1 = from;
		QWidget* sigval2 = to;
		Qt::FindChildOptions options_ret = options;
		int sigval3 = static_cast<int>(options_ret);

		QLayoutItem* callback_return_value = miqt_exec_callback_QStackedLayout_ReplaceWidget(this, handle__ReplaceWidget, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_ReplaceWidget(QWidget* from, QWidget* to, int options) {

		return QStackedLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));

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

void QStackedLayout_override_virtual_Count(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__Count = slot;
}

int QStackedLayout_virtualbase_Count(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_Count();
}

void QStackedLayout_override_virtual_AddItem(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__AddItem = slot;
}

void QStackedLayout_virtualbase_AddItem(void* self, QLayoutItem* item) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_AddItem(item);
}

void QStackedLayout_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__SizeHint = slot;
}

QSize* QStackedLayout_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_SizeHint();
}

void QStackedLayout_override_virtual_MinimumSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__MinimumSize = slot;
}

QSize* QStackedLayout_virtualbase_MinimumSize(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_MinimumSize();
}

void QStackedLayout_override_virtual_ItemAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__ItemAt = slot;
}

QLayoutItem* QStackedLayout_virtualbase_ItemAt(const void* self, int param1) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_ItemAt(param1);
}

void QStackedLayout_override_virtual_TakeAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__TakeAt = slot;
}

QLayoutItem* QStackedLayout_virtualbase_TakeAt(void* self, int param1) {
	return ( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_TakeAt(param1);
}

void QStackedLayout_override_virtual_SetGeometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__SetGeometry = slot;
}

void QStackedLayout_virtualbase_SetGeometry(void* self, QRect* rect) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_SetGeometry(rect);
}

void QStackedLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__HasHeightForWidth = slot;
}

bool QStackedLayout_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_HasHeightForWidth();
}

void QStackedLayout_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__HeightForWidth = slot;
}

int QStackedLayout_virtualbase_HeightForWidth(const void* self, int width) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_HeightForWidth(width);
}

void QStackedLayout_override_virtual_Spacing(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__Spacing = slot;
}

int QStackedLayout_virtualbase_Spacing(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_Spacing();
}

void QStackedLayout_override_virtual_SetSpacing(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__SetSpacing = slot;
}

void QStackedLayout_virtualbase_SetSpacing(void* self, int spacing) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_SetSpacing(spacing);
}

void QStackedLayout_override_virtual_Invalidate(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__Invalidate = slot;
}

void QStackedLayout_virtualbase_Invalidate(void* self) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_Invalidate();
}

void QStackedLayout_override_virtual_Geometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__Geometry = slot;
}

QRect* QStackedLayout_virtualbase_Geometry(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_Geometry();
}

void QStackedLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__ExpandingDirections = slot;
}

int QStackedLayout_virtualbase_ExpandingDirections(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_ExpandingDirections();
}

void QStackedLayout_override_virtual_MaximumSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__MaximumSize = slot;
}

QSize* QStackedLayout_virtualbase_MaximumSize(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_MaximumSize();
}

void QStackedLayout_override_virtual_IndexOf(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__IndexOf = slot;
}

int QStackedLayout_virtualbase_IndexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_IndexOf(param1);
}

void QStackedLayout_override_virtual_IsEmpty(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__IsEmpty = slot;
}

bool QStackedLayout_virtualbase_IsEmpty(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_IsEmpty();
}

void QStackedLayout_override_virtual_ControlTypes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__ControlTypes = slot;
}

int QStackedLayout_virtualbase_ControlTypes(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_ControlTypes();
}

void QStackedLayout_override_virtual_ReplaceWidget(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__ReplaceWidget = slot;
}

QLayoutItem* QStackedLayout_virtualbase_ReplaceWidget(void* self, QWidget* from, QWidget* to, int options) {
	return ( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_ReplaceWidget(from, to, options);
}

void QStackedLayout_override_virtual_Layout(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__Layout = slot;
}

QLayout* QStackedLayout_virtualbase_Layout(void* self) {
	return ( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_Layout();
}

void QStackedLayout_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) )->handle__ChildEvent = slot;
}

void QStackedLayout_virtualbase_ChildEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_ChildEvent(e);
}

void QStackedLayout_Delete(QStackedLayout* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQStackedLayout*>( self );
	} else {
		delete self;
	}
}

