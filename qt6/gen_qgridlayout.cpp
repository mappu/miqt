#include <QChildEvent>
#include <QEvent>
#include <QGridLayout>
#include <QLayout>
#include <QLayoutItem>
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
#include <qgridlayout.h>
#include "gen_qgridlayout.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QGridLayout_SizeHint(const QGridLayout*, intptr_t);
QSize* miqt_exec_callback_QGridLayout_MinimumSize(const QGridLayout*, intptr_t);
QSize* miqt_exec_callback_QGridLayout_MaximumSize(const QGridLayout*, intptr_t);
void miqt_exec_callback_QGridLayout_SetSpacing(QGridLayout*, intptr_t, int);
int miqt_exec_callback_QGridLayout_Spacing(const QGridLayout*, intptr_t);
bool miqt_exec_callback_QGridLayout_HasHeightForWidth(const QGridLayout*, intptr_t);
int miqt_exec_callback_QGridLayout_HeightForWidth(const QGridLayout*, intptr_t, int);
int miqt_exec_callback_QGridLayout_MinimumHeightForWidth(const QGridLayout*, intptr_t, int);
int miqt_exec_callback_QGridLayout_ExpandingDirections(const QGridLayout*, intptr_t);
void miqt_exec_callback_QGridLayout_Invalidate(QGridLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QGridLayout_ItemAt(const QGridLayout*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QGridLayout_TakeAt(QGridLayout*, intptr_t, int);
int miqt_exec_callback_QGridLayout_Count(const QGridLayout*, intptr_t);
void miqt_exec_callback_QGridLayout_SetGeometry(QGridLayout*, intptr_t, QRect*);
void miqt_exec_callback_QGridLayout_AddItemWithQLayoutItem(QGridLayout*, intptr_t, QLayoutItem*);
QRect* miqt_exec_callback_QGridLayout_Geometry(const QGridLayout*, intptr_t);
int miqt_exec_callback_QGridLayout_IndexOf(const QGridLayout*, intptr_t, QWidget*);
bool miqt_exec_callback_QGridLayout_IsEmpty(const QGridLayout*, intptr_t);
int miqt_exec_callback_QGridLayout_ControlTypes(const QGridLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QGridLayout_ReplaceWidget(QGridLayout*, intptr_t, QWidget*, QWidget*, int);
QLayout* miqt_exec_callback_QGridLayout_Layout(QGridLayout*, intptr_t);
void miqt_exec_callback_QGridLayout_ChildEvent(QGridLayout*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QGridLayout_Event(QGridLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QGridLayout_EventFilter(QGridLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGridLayout_TimerEvent(QGridLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGridLayout_CustomEvent(QGridLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QGridLayout_ConnectNotify(QGridLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGridLayout_DisconnectNotify(QGridLayout*, intptr_t, QMetaMethod*);
QWidget* miqt_exec_callback_QGridLayout_Widget(const QGridLayout*, intptr_t);
QSpacerItem* miqt_exec_callback_QGridLayout_SpacerItem(QGridLayout*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGridLayout final : public QGridLayout {
public:

	MiqtVirtualQGridLayout(QWidget* parent): QGridLayout(parent) {};
	MiqtVirtualQGridLayout(): QGridLayout() {};

	virtual ~MiqtVirtualQGridLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QGridLayout::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QGridLayout_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QGridLayout::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (handle__MinimumSize == 0) {
			return QGridLayout::minimumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QGridLayout_MinimumSize(this, handle__MinimumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSize() const {

		return new QSize(QGridLayout::minimumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MaximumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (handle__MaximumSize == 0) {
			return QGridLayout::maximumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QGridLayout_MaximumSize(this, handle__MaximumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MaximumSize() const {

		return new QSize(QGridLayout::maximumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSpacing = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSpacing(int spacing) override {
		if (handle__SetSpacing == 0) {
			QGridLayout::setSpacing(spacing);
			return;
		}
		
		int sigval1 = spacing;

		miqt_exec_callback_QGridLayout_SetSpacing(this, handle__SetSpacing, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSpacing(int spacing) {

		QGridLayout::setSpacing(static_cast<int>(spacing));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Spacing = 0;

	// Subclass to allow providing a Go implementation
	virtual int spacing() const override {
		if (handle__Spacing == 0) {
			return QGridLayout::spacing();
		}
		

		int callback_return_value = miqt_exec_callback_QGridLayout_Spacing(this, handle__Spacing);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Spacing() const {

		return QGridLayout::spacing();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QGridLayout::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QGridLayout_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QGridLayout::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QGridLayout::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QGridLayout_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QGridLayout::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (handle__MinimumHeightForWidth == 0) {
			return QGridLayout::minimumHeightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QGridLayout_MinimumHeightForWidth(this, handle__MinimumHeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_MinimumHeightForWidth(int param1) const {

		return QGridLayout::minimumHeightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ExpandingDirections = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (handle__ExpandingDirections == 0) {
			return QGridLayout::expandingDirections();
		}
		

		int callback_return_value = miqt_exec_callback_QGridLayout_ExpandingDirections(this, handle__ExpandingDirections);

		return static_cast<Qt::Orientations>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ExpandingDirections() const {

		Qt::Orientations _ret = QGridLayout::expandingDirections();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__Invalidate == 0) {
			QGridLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QGridLayout_Invalidate(this, handle__Invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Invalidate() {

		QGridLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int index) const override {
		if (handle__ItemAt == 0) {
			return QGridLayout::itemAt(index);
		}
		
		int sigval1 = index;

		QLayoutItem* callback_return_value = miqt_exec_callback_QGridLayout_ItemAt(this, handle__ItemAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_ItemAt(int index) const {

		return QGridLayout::itemAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TakeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int index) override {
		if (handle__TakeAt == 0) {
			return QGridLayout::takeAt(index);
		}
		
		int sigval1 = index;

		QLayoutItem* callback_return_value = miqt_exec_callback_QGridLayout_TakeAt(this, handle__TakeAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_TakeAt(int index) {

		return QGridLayout::takeAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__Count == 0) {
			return QGridLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QGridLayout_Count(this, handle__Count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Count() const {

		return QGridLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& geometry) override {
		if (handle__SetGeometry == 0) {
			QGridLayout::setGeometry(geometry);
			return;
		}
		
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);

		miqt_exec_callback_QGridLayout_SetGeometry(this, handle__SetGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetGeometry(QRect* geometry) {

		QGridLayout::setGeometry(*geometry);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AddItemWithQLayoutItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* param1) override {
		if (handle__AddItemWithQLayoutItem == 0) {
			QGridLayout::addItem(param1);
			return;
		}
		
		QLayoutItem* sigval1 = param1;

		miqt_exec_callback_QGridLayout_AddItemWithQLayoutItem(this, handle__AddItemWithQLayoutItem, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_AddItemWithQLayoutItem(QLayoutItem* param1) {

		QGridLayout::addItem(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Geometry = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (handle__Geometry == 0) {
			return QGridLayout::geometry();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QGridLayout_Geometry(this, handle__Geometry);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_Geometry() const {

		return new QRect(QGridLayout::geometry());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(const QWidget* param1) const override {
		if (handle__IndexOf == 0) {
			return QGridLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = (QWidget*) param1;

		int callback_return_value = miqt_exec_callback_QGridLayout_IndexOf(this, handle__IndexOf, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndexOf(QWidget* param1) const {

		return QGridLayout::indexOf(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__IsEmpty == 0) {
			return QGridLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QGridLayout_IsEmpty(this, handle__IsEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEmpty() const {

		return QGridLayout::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ControlTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (handle__ControlTypes == 0) {
			return QGridLayout::controlTypes();
		}
		

		int callback_return_value = miqt_exec_callback_QGridLayout_ControlTypes(this, handle__ControlTypes);

		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ControlTypes() const {

		QSizePolicy::ControlTypes _ret = QGridLayout::controlTypes();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReplaceWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
		if (handle__ReplaceWidget == 0) {
			return QGridLayout::replaceWidget(from, to, options);
		}
		
		QWidget* sigval1 = from;
		QWidget* sigval2 = to;
		Qt::FindChildOptions options_ret = options;
		int sigval3 = static_cast<int>(options_ret);

		QLayoutItem* callback_return_value = miqt_exec_callback_QGridLayout_ReplaceWidget(this, handle__ReplaceWidget, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_ReplaceWidget(QWidget* from, QWidget* to, int options) {

		return QGridLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Layout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (handle__Layout == 0) {
			return QGridLayout::layout();
		}
		

		QLayout* callback_return_value = miqt_exec_callback_QGridLayout_Layout(this, handle__Layout);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayout* virtualbase_Layout() {

		return QGridLayout::layout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (handle__ChildEvent == 0) {
			QGridLayout::childEvent(e);
			return;
		}
		
		QChildEvent* sigval1 = e;

		miqt_exec_callback_QGridLayout_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* e) {

		QGridLayout::childEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QGridLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGridLayout_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QGridLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QGridLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGridLayout_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QGridLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QGridLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGridLayout_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QGridLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QGridLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGridLayout_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QGridLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QGridLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGridLayout_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QGridLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QGridLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGridLayout_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QGridLayout::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() const override {
		if (handle__Widget == 0) {
			return QGridLayout::widget();
		}
		

		QWidget* callback_return_value = miqt_exec_callback_QGridLayout_Widget(this, handle__Widget);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_Widget() const {

		return QGridLayout::widget();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SpacerItem = 0;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (handle__SpacerItem == 0) {
			return QGridLayout::spacerItem();
		}
		

		QSpacerItem* callback_return_value = miqt_exec_callback_QGridLayout_SpacerItem(this, handle__SpacerItem);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSpacerItem* virtualbase_SpacerItem() {

		return QGridLayout::spacerItem();

	}

};

QGridLayout* QGridLayout_new(QWidget* parent) {
	return new MiqtVirtualQGridLayout(parent);
}

QGridLayout* QGridLayout_new2() {
	return new MiqtVirtualQGridLayout();
}

void QGridLayout_virtbase(QGridLayout* src, QLayout** outptr_QLayout) {
	*outptr_QLayout = static_cast<QLayout*>(src);
}

QMetaObject* QGridLayout_MetaObject(const QGridLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGridLayout_Metacast(QGridLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGridLayout_Tr(const char* s) {
	QString _ret = QGridLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QGridLayout_SizeHint(const QGridLayout* self) {
	return new QSize(self->sizeHint());
}

QSize* QGridLayout_MinimumSize(const QGridLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QGridLayout_MaximumSize(const QGridLayout* self) {
	return new QSize(self->maximumSize());
}

void QGridLayout_SetHorizontalSpacing(QGridLayout* self, int spacing) {
	self->setHorizontalSpacing(static_cast<int>(spacing));
}

int QGridLayout_HorizontalSpacing(const QGridLayout* self) {
	return self->horizontalSpacing();
}

void QGridLayout_SetVerticalSpacing(QGridLayout* self, int spacing) {
	self->setVerticalSpacing(static_cast<int>(spacing));
}

int QGridLayout_VerticalSpacing(const QGridLayout* self) {
	return self->verticalSpacing();
}

void QGridLayout_SetSpacing(QGridLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

int QGridLayout_Spacing(const QGridLayout* self) {
	return self->spacing();
}

void QGridLayout_SetRowStretch(QGridLayout* self, int row, int stretch) {
	self->setRowStretch(static_cast<int>(row), static_cast<int>(stretch));
}

void QGridLayout_SetColumnStretch(QGridLayout* self, int column, int stretch) {
	self->setColumnStretch(static_cast<int>(column), static_cast<int>(stretch));
}

int QGridLayout_RowStretch(const QGridLayout* self, int row) {
	return self->rowStretch(static_cast<int>(row));
}

int QGridLayout_ColumnStretch(const QGridLayout* self, int column) {
	return self->columnStretch(static_cast<int>(column));
}

void QGridLayout_SetRowMinimumHeight(QGridLayout* self, int row, int minSize) {
	self->setRowMinimumHeight(static_cast<int>(row), static_cast<int>(minSize));
}

void QGridLayout_SetColumnMinimumWidth(QGridLayout* self, int column, int minSize) {
	self->setColumnMinimumWidth(static_cast<int>(column), static_cast<int>(minSize));
}

int QGridLayout_RowMinimumHeight(const QGridLayout* self, int row) {
	return self->rowMinimumHeight(static_cast<int>(row));
}

int QGridLayout_ColumnMinimumWidth(const QGridLayout* self, int column) {
	return self->columnMinimumWidth(static_cast<int>(column));
}

int QGridLayout_ColumnCount(const QGridLayout* self) {
	return self->columnCount();
}

int QGridLayout_RowCount(const QGridLayout* self) {
	return self->rowCount();
}

QRect* QGridLayout_CellRect(const QGridLayout* self, int row, int column) {
	return new QRect(self->cellRect(static_cast<int>(row), static_cast<int>(column)));
}

bool QGridLayout_HasHeightForWidth(const QGridLayout* self) {
	return self->hasHeightForWidth();
}

int QGridLayout_HeightForWidth(const QGridLayout* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

int QGridLayout_MinimumHeightForWidth(const QGridLayout* self, int param1) {
	return self->minimumHeightForWidth(static_cast<int>(param1));
}

int QGridLayout_ExpandingDirections(const QGridLayout* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

void QGridLayout_Invalidate(QGridLayout* self) {
	self->invalidate();
}

void QGridLayout_AddWidget(QGridLayout* self, QWidget* w) {
	self->addWidget(w);
}

void QGridLayout_AddWidget2(QGridLayout* self, QWidget* param1, int row, int column) {
	self->addWidget(param1, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_AddWidget3(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan) {
	self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_AddLayout(QGridLayout* self, QLayout* param1, int row, int column) {
	self->addLayout(param1, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_AddLayout2(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan) {
	self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_SetOriginCorner(QGridLayout* self, int originCorner) {
	self->setOriginCorner(static_cast<Qt::Corner>(originCorner));
}

int QGridLayout_OriginCorner(const QGridLayout* self) {
	Qt::Corner _ret = self->originCorner();
	return static_cast<int>(_ret);
}

QLayoutItem* QGridLayout_ItemAt(const QGridLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QGridLayout_ItemAtPosition(const QGridLayout* self, int row, int column) {
	return self->itemAtPosition(static_cast<int>(row), static_cast<int>(column));
}

QLayoutItem* QGridLayout_TakeAt(QGridLayout* self, int index) {
	return self->takeAt(static_cast<int>(index));
}

int QGridLayout_Count(const QGridLayout* self) {
	return self->count();
}

void QGridLayout_SetGeometry(QGridLayout* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

void QGridLayout_AddItem(QGridLayout* self, QLayoutItem* item, int row, int column) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_SetDefaultPositioning(QGridLayout* self, int n, int orient) {
	self->setDefaultPositioning(static_cast<int>(n), static_cast<Qt::Orientation>(orient));
}

void QGridLayout_GetItemPosition(const QGridLayout* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan) {
	self->getItemPosition(static_cast<int>(idx), static_cast<int*>(row), static_cast<int*>(column), static_cast<int*>(rowSpan), static_cast<int*>(columnSpan));
}

struct miqt_string QGridLayout_Tr2(const char* s, const char* c) {
	QString _ret = QGridLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGridLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGridLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGridLayout_AddWidget4(QGridLayout* self, QWidget* param1, int row, int column, int param4) {
	self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<Qt::Alignment>(param4));
}

void QGridLayout_AddWidget6(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan, int param6) {
	self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(param6));
}

void QGridLayout_AddLayout4(QGridLayout* self, QLayout* param1, int row, int column, int param4) {
	self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<Qt::Alignment>(param4));
}

void QGridLayout_AddLayout6(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan, int param6) {
	self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(param6));
}

void QGridLayout_AddItem4(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan));
}

void QGridLayout_AddItem5(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_AddItem6(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int param6) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(param6));
}

bool QGridLayout_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QGridLayout_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQGridLayout*)(self) )->virtualbase_SizeHint();
}

bool QGridLayout_override_virtual_MinimumSize(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSize = slot;
	return true;
}

QSize* QGridLayout_virtualbase_MinimumSize(const void* self) {
	return ( (const MiqtVirtualQGridLayout*)(self) )->virtualbase_MinimumSize();
}

bool QGridLayout_override_virtual_MaximumSize(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MaximumSize = slot;
	return true;
}

QSize* QGridLayout_virtualbase_MaximumSize(const void* self) {
	return ( (const MiqtVirtualQGridLayout*)(self) )->virtualbase_MaximumSize();
}

bool QGridLayout_override_virtual_SetSpacing(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSpacing = slot;
	return true;
}

void QGridLayout_virtualbase_SetSpacing(void* self, int spacing) {
	( (MiqtVirtualQGridLayout*)(self) )->virtualbase_SetSpacing(spacing);
}

bool QGridLayout_override_virtual_Spacing(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Spacing = slot;
	return true;
}

int QGridLayout_virtualbase_Spacing(const void* self) {
	return ( (const MiqtVirtualQGridLayout*)(self) )->virtualbase_Spacing();
}

bool QGridLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QGridLayout_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQGridLayout*)(self) )->virtualbase_HasHeightForWidth();
}

bool QGridLayout_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QGridLayout_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQGridLayout*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QGridLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumHeightForWidth = slot;
	return true;
}

int QGridLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQGridLayout*)(self) )->virtualbase_MinimumHeightForWidth(param1);
}

bool QGridLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ExpandingDirections = slot;
	return true;
}

int QGridLayout_virtualbase_ExpandingDirections(const void* self) {
	return ( (const MiqtVirtualQGridLayout*)(self) )->virtualbase_ExpandingDirections();
}

bool QGridLayout_override_virtual_Invalidate(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Invalidate = slot;
	return true;
}

void QGridLayout_virtualbase_Invalidate(void* self) {
	( (MiqtVirtualQGridLayout*)(self) )->virtualbase_Invalidate();
}

bool QGridLayout_override_virtual_ItemAt(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemAt = slot;
	return true;
}

QLayoutItem* QGridLayout_virtualbase_ItemAt(const void* self, int index) {
	return ( (const MiqtVirtualQGridLayout*)(self) )->virtualbase_ItemAt(index);
}

bool QGridLayout_override_virtual_TakeAt(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TakeAt = slot;
	return true;
}

QLayoutItem* QGridLayout_virtualbase_TakeAt(void* self, int index) {
	return ( (MiqtVirtualQGridLayout*)(self) )->virtualbase_TakeAt(index);
}

bool QGridLayout_override_virtual_Count(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Count = slot;
	return true;
}

int QGridLayout_virtualbase_Count(const void* self) {
	return ( (const MiqtVirtualQGridLayout*)(self) )->virtualbase_Count();
}

bool QGridLayout_override_virtual_SetGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetGeometry = slot;
	return true;
}

void QGridLayout_virtualbase_SetGeometry(void* self, QRect* geometry) {
	( (MiqtVirtualQGridLayout*)(self) )->virtualbase_SetGeometry(geometry);
}

bool QGridLayout_override_virtual_AddItemWithQLayoutItem(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AddItemWithQLayoutItem = slot;
	return true;
}

void QGridLayout_virtualbase_AddItemWithQLayoutItem(void* self, QLayoutItem* param1) {
	( (MiqtVirtualQGridLayout*)(self) )->virtualbase_AddItemWithQLayoutItem(param1);
}

bool QGridLayout_override_virtual_Geometry(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Geometry = slot;
	return true;
}

QRect* QGridLayout_virtualbase_Geometry(const void* self) {
	return ( (const MiqtVirtualQGridLayout*)(self) )->virtualbase_Geometry();
}

bool QGridLayout_override_virtual_IndexOf(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexOf = slot;
	return true;
}

int QGridLayout_virtualbase_IndexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQGridLayout*)(self) )->virtualbase_IndexOf(param1);
}

bool QGridLayout_override_virtual_IsEmpty(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsEmpty = slot;
	return true;
}

bool QGridLayout_virtualbase_IsEmpty(const void* self) {
	return ( (const MiqtVirtualQGridLayout*)(self) )->virtualbase_IsEmpty();
}

bool QGridLayout_override_virtual_ControlTypes(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ControlTypes = slot;
	return true;
}

int QGridLayout_virtualbase_ControlTypes(const void* self) {
	return ( (const MiqtVirtualQGridLayout*)(self) )->virtualbase_ControlTypes();
}

bool QGridLayout_override_virtual_ReplaceWidget(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReplaceWidget = slot;
	return true;
}

QLayoutItem* QGridLayout_virtualbase_ReplaceWidget(void* self, QWidget* from, QWidget* to, int options) {
	return ( (MiqtVirtualQGridLayout*)(self) )->virtualbase_ReplaceWidget(from, to, options);
}

bool QGridLayout_override_virtual_Layout(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Layout = slot;
	return true;
}

QLayout* QGridLayout_virtualbase_Layout(void* self) {
	return ( (MiqtVirtualQGridLayout*)(self) )->virtualbase_Layout();
}

bool QGridLayout_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QGridLayout_virtualbase_ChildEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQGridLayout*)(self) )->virtualbase_ChildEvent(e);
}

bool QGridLayout_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QGridLayout_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGridLayout*)(self) )->virtualbase_Event(event);
}

bool QGridLayout_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QGridLayout_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGridLayout*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QGridLayout_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QGridLayout_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGridLayout*)(self) )->virtualbase_TimerEvent(event);
}

bool QGridLayout_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QGridLayout_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGridLayout*)(self) )->virtualbase_CustomEvent(event);
}

bool QGridLayout_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QGridLayout_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGridLayout*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QGridLayout_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QGridLayout_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGridLayout*)(self) )->virtualbase_DisconnectNotify(signal);
}

bool QGridLayout_override_virtual_Widget(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Widget = slot;
	return true;
}

QWidget* QGridLayout_virtualbase_Widget(const void* self) {
	return ( (const MiqtVirtualQGridLayout*)(self) )->virtualbase_Widget();
}

bool QGridLayout_override_virtual_SpacerItem(void* self, intptr_t slot) {
	MiqtVirtualQGridLayout* self_cast = dynamic_cast<MiqtVirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SpacerItem = slot;
	return true;
}

QSpacerItem* QGridLayout_virtualbase_SpacerItem(void* self) {
	return ( (MiqtVirtualQGridLayout*)(self) )->virtualbase_SpacerItem();
}

void QGridLayout_Delete(QGridLayout* self) {
	delete self;
}

