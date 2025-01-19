#include <QChildEvent>
#include <QEvent>
#include <QFormLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QFormLayout__TakeRowResult
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
#include <qformlayout.h>
#include "gen_qformlayout.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QFormLayout_AddItem(void*, intptr_t, QLayoutItem*);
QLayoutItem* miqt_exec_callback_QFormLayout_ItemAtWithIndex(void*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QFormLayout_TakeAt(void*, intptr_t, int);
void miqt_exec_callback_QFormLayout_SetGeometry(void*, intptr_t, QRect*);
QSize* miqt_exec_callback_QFormLayout_MinimumSize(void*, intptr_t);
QSize* miqt_exec_callback_QFormLayout_SizeHint(void*, intptr_t);
void miqt_exec_callback_QFormLayout_Invalidate(void*, intptr_t);
bool miqt_exec_callback_QFormLayout_HasHeightForWidth(void*, intptr_t);
int miqt_exec_callback_QFormLayout_HeightForWidth(void*, intptr_t, int);
int miqt_exec_callback_QFormLayout_ExpandingDirections(void*, intptr_t);
int miqt_exec_callback_QFormLayout_Count(void*, intptr_t);
QRect* miqt_exec_callback_QFormLayout_Geometry(void*, intptr_t);
QSize* miqt_exec_callback_QFormLayout_MaximumSize(void*, intptr_t);
int miqt_exec_callback_QFormLayout_IndexOf(void*, intptr_t, QWidget*);
bool miqt_exec_callback_QFormLayout_IsEmpty(void*, intptr_t);
int miqt_exec_callback_QFormLayout_ControlTypes(void*, intptr_t);
QLayout* miqt_exec_callback_QFormLayout_Layout(void*, intptr_t);
void miqt_exec_callback_QFormLayout_ChildEvent(void*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QFormLayout_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QFormLayout_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFormLayout_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFormLayout_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFormLayout_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFormLayout_DisconnectNotify(void*, intptr_t, QMetaMethod*);
int miqt_exec_callback_QFormLayout_MinimumHeightForWidth(void*, intptr_t, int);
QWidget* miqt_exec_callback_QFormLayout_Widget(void*, intptr_t);
QSpacerItem* miqt_exec_callback_QFormLayout_SpacerItem(void*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFormLayout final : public QFormLayout {
public:

	MiqtVirtualQFormLayout(QWidget* parent): QFormLayout(parent) {};
	MiqtVirtualQFormLayout(): QFormLayout() {};

	virtual ~MiqtVirtualQFormLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AddItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* item) override {
		if (handle__AddItem == 0) {
			QFormLayout::addItem(item);
			return;
		}
		
		QLayoutItem* sigval1 = item;

		miqt_exec_callback_QFormLayout_AddItem(this, handle__AddItem, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_AddItem(QLayoutItem* item) {

		QFormLayout::addItem(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemAtWithIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int index) const override {
		if (handle__ItemAtWithIndex == 0) {
			return QFormLayout::itemAt(index);
		}
		
		int sigval1 = index;

		QLayoutItem* callback_return_value = miqt_exec_callback_QFormLayout_ItemAtWithIndex(const_cast<MiqtVirtualQFormLayout*>(this), handle__ItemAtWithIndex, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_ItemAtWithIndex(int index) const {

		return QFormLayout::itemAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TakeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int index) override {
		if (handle__TakeAt == 0) {
			return QFormLayout::takeAt(index);
		}
		
		int sigval1 = index;

		QLayoutItem* callback_return_value = miqt_exec_callback_QFormLayout_TakeAt(this, handle__TakeAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_TakeAt(int index) {

		return QFormLayout::takeAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& rect) override {
		if (handle__SetGeometry == 0) {
			QFormLayout::setGeometry(rect);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);

		miqt_exec_callback_QFormLayout_SetGeometry(this, handle__SetGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetGeometry(QRect* rect) {

		QFormLayout::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (handle__MinimumSize == 0) {
			return QFormLayout::minimumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFormLayout_MinimumSize(const_cast<MiqtVirtualQFormLayout*>(this), handle__MinimumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSize() const {

		return new QSize(QFormLayout::minimumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QFormLayout::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFormLayout_SizeHint(const_cast<MiqtVirtualQFormLayout*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QFormLayout::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__Invalidate == 0) {
			QFormLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QFormLayout_Invalidate(this, handle__Invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Invalidate() {

		QFormLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QFormLayout::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QFormLayout_HasHeightForWidth(const_cast<MiqtVirtualQFormLayout*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QFormLayout::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int width) const override {
		if (handle__HeightForWidth == 0) {
			return QFormLayout::heightForWidth(width);
		}
		
		int sigval1 = width;

		int callback_return_value = miqt_exec_callback_QFormLayout_HeightForWidth(const_cast<MiqtVirtualQFormLayout*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int width) const {

		return QFormLayout::heightForWidth(static_cast<int>(width));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ExpandingDirections = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (handle__ExpandingDirections == 0) {
			return QFormLayout::expandingDirections();
		}
		

		int callback_return_value = miqt_exec_callback_QFormLayout_ExpandingDirections(const_cast<MiqtVirtualQFormLayout*>(this), handle__ExpandingDirections);

		return static_cast<Qt::Orientations>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ExpandingDirections() const {

		Qt::Orientations _ret = QFormLayout::expandingDirections();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__Count == 0) {
			return QFormLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QFormLayout_Count(const_cast<MiqtVirtualQFormLayout*>(this), handle__Count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Count() const {

		return QFormLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Geometry = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (handle__Geometry == 0) {
			return QFormLayout::geometry();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QFormLayout_Geometry(const_cast<MiqtVirtualQFormLayout*>(this), handle__Geometry);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_Geometry() const {

		return new QRect(QFormLayout::geometry());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MaximumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (handle__MaximumSize == 0) {
			return QFormLayout::maximumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFormLayout_MaximumSize(const_cast<MiqtVirtualQFormLayout*>(this), handle__MaximumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MaximumSize() const {

		return new QSize(QFormLayout::maximumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(QWidget* param1) const override {
		if (handle__IndexOf == 0) {
			return QFormLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QFormLayout_IndexOf(const_cast<MiqtVirtualQFormLayout*>(this), handle__IndexOf, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndexOf(QWidget* param1) const {

		return QFormLayout::indexOf(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__IsEmpty == 0) {
			return QFormLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QFormLayout_IsEmpty(const_cast<MiqtVirtualQFormLayout*>(this), handle__IsEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEmpty() const {

		return QFormLayout::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ControlTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (handle__ControlTypes == 0) {
			return QFormLayout::controlTypes();
		}
		

		int callback_return_value = miqt_exec_callback_QFormLayout_ControlTypes(const_cast<MiqtVirtualQFormLayout*>(this), handle__ControlTypes);

		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ControlTypes() const {

		QSizePolicy::ControlTypes _ret = QFormLayout::controlTypes();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Layout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (handle__Layout == 0) {
			return QFormLayout::layout();
		}
		

		QLayout* callback_return_value = miqt_exec_callback_QFormLayout_Layout(this, handle__Layout);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayout* virtualbase_Layout() {

		return QFormLayout::layout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (handle__ChildEvent == 0) {
			QFormLayout::childEvent(e);
			return;
		}
		
		QChildEvent* sigval1 = e;

		miqt_exec_callback_QFormLayout_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* e) {

		QFormLayout::childEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QFormLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QFormLayout_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QFormLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QFormLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QFormLayout_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QFormLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QFormLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QFormLayout_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QFormLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QFormLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFormLayout_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QFormLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QFormLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFormLayout_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QFormLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QFormLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFormLayout_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QFormLayout::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (handle__MinimumHeightForWidth == 0) {
			return QFormLayout::minimumHeightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QFormLayout_MinimumHeightForWidth(const_cast<MiqtVirtualQFormLayout*>(this), handle__MinimumHeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_MinimumHeightForWidth(int param1) const {

		return QFormLayout::minimumHeightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() override {
		if (handle__Widget == 0) {
			return QFormLayout::widget();
		}
		

		QWidget* callback_return_value = miqt_exec_callback_QFormLayout_Widget(this, handle__Widget);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_Widget() {

		return QFormLayout::widget();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SpacerItem = 0;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (handle__SpacerItem == 0) {
			return QFormLayout::spacerItem();
		}
		

		QSpacerItem* callback_return_value = miqt_exec_callback_QFormLayout_SpacerItem(this, handle__SpacerItem);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSpacerItem* virtualbase_SpacerItem() {

		return QFormLayout::spacerItem();

	}

};

QFormLayout* QFormLayout_new(QWidget* parent) {
	return new MiqtVirtualQFormLayout(parent);
}

QFormLayout* QFormLayout_new2() {
	return new MiqtVirtualQFormLayout();
}

void QFormLayout_virtbase(QFormLayout* src, QLayout** outptr_QLayout) {
	*outptr_QLayout = static_cast<QLayout*>(src);
}

QMetaObject* QFormLayout_MetaObject(const QFormLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFormLayout_Metacast(QFormLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFormLayout_Tr(const char* s) {
	QString _ret = QFormLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFormLayout_TrUtf8(const char* s) {
	QString _ret = QFormLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFormLayout_SetFieldGrowthPolicy(QFormLayout* self, int policy) {
	self->setFieldGrowthPolicy(static_cast<QFormLayout::FieldGrowthPolicy>(policy));
}

int QFormLayout_FieldGrowthPolicy(const QFormLayout* self) {
	QFormLayout::FieldGrowthPolicy _ret = self->fieldGrowthPolicy();
	return static_cast<int>(_ret);
}

void QFormLayout_SetRowWrapPolicy(QFormLayout* self, int policy) {
	self->setRowWrapPolicy(static_cast<QFormLayout::RowWrapPolicy>(policy));
}

int QFormLayout_RowWrapPolicy(const QFormLayout* self) {
	QFormLayout::RowWrapPolicy _ret = self->rowWrapPolicy();
	return static_cast<int>(_ret);
}

void QFormLayout_SetLabelAlignment(QFormLayout* self, int alignment) {
	self->setLabelAlignment(static_cast<Qt::Alignment>(alignment));
}

int QFormLayout_LabelAlignment(const QFormLayout* self) {
	Qt::Alignment _ret = self->labelAlignment();
	return static_cast<int>(_ret);
}

void QFormLayout_SetFormAlignment(QFormLayout* self, int alignment) {
	self->setFormAlignment(static_cast<Qt::Alignment>(alignment));
}

int QFormLayout_FormAlignment(const QFormLayout* self) {
	Qt::Alignment _ret = self->formAlignment();
	return static_cast<int>(_ret);
}

void QFormLayout_SetHorizontalSpacing(QFormLayout* self, int spacing) {
	self->setHorizontalSpacing(static_cast<int>(spacing));
}

int QFormLayout_HorizontalSpacing(const QFormLayout* self) {
	return self->horizontalSpacing();
}

void QFormLayout_SetVerticalSpacing(QFormLayout* self, int spacing) {
	self->setVerticalSpacing(static_cast<int>(spacing));
}

int QFormLayout_VerticalSpacing(const QFormLayout* self) {
	return self->verticalSpacing();
}

int QFormLayout_Spacing(const QFormLayout* self) {
	return self->spacing();
}

void QFormLayout_SetSpacing(QFormLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

void QFormLayout_AddRow(QFormLayout* self, QWidget* label, QWidget* field) {
	self->addRow(label, field);
}

void QFormLayout_AddRow2(QFormLayout* self, QWidget* label, QLayout* field) {
	self->addRow(label, field);
}

void QFormLayout_AddRow3(QFormLayout* self, struct miqt_string labelText, QWidget* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	self->addRow(labelText_QString, field);
}

void QFormLayout_AddRow4(QFormLayout* self, struct miqt_string labelText, QLayout* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	self->addRow(labelText_QString, field);
}

void QFormLayout_AddRowWithWidget(QFormLayout* self, QWidget* widget) {
	self->addRow(widget);
}

void QFormLayout_AddRowWithLayout(QFormLayout* self, QLayout* layout) {
	self->addRow(layout);
}

void QFormLayout_InsertRow(QFormLayout* self, int row, QWidget* label, QWidget* field) {
	self->insertRow(static_cast<int>(row), label, field);
}

void QFormLayout_InsertRow2(QFormLayout* self, int row, QWidget* label, QLayout* field) {
	self->insertRow(static_cast<int>(row), label, field);
}

void QFormLayout_InsertRow3(QFormLayout* self, int row, struct miqt_string labelText, QWidget* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	self->insertRow(static_cast<int>(row), labelText_QString, field);
}

void QFormLayout_InsertRow4(QFormLayout* self, int row, struct miqt_string labelText, QLayout* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	self->insertRow(static_cast<int>(row), labelText_QString, field);
}

void QFormLayout_InsertRow5(QFormLayout* self, int row, QWidget* widget) {
	self->insertRow(static_cast<int>(row), widget);
}

void QFormLayout_InsertRow6(QFormLayout* self, int row, QLayout* layout) {
	self->insertRow(static_cast<int>(row), layout);
}

void QFormLayout_RemoveRow(QFormLayout* self, int row) {
	self->removeRow(static_cast<int>(row));
}

void QFormLayout_RemoveRowWithWidget(QFormLayout* self, QWidget* widget) {
	self->removeRow(widget);
}

void QFormLayout_RemoveRowWithLayout(QFormLayout* self, QLayout* layout) {
	self->removeRow(layout);
}

QFormLayout__TakeRowResult* QFormLayout_TakeRow(QFormLayout* self, int row) {
	return new QFormLayout::TakeRowResult(self->takeRow(static_cast<int>(row)));
}

QFormLayout__TakeRowResult* QFormLayout_TakeRowWithWidget(QFormLayout* self, QWidget* widget) {
	return new QFormLayout::TakeRowResult(self->takeRow(widget));
}

QFormLayout__TakeRowResult* QFormLayout_TakeRowWithLayout(QFormLayout* self, QLayout* layout) {
	return new QFormLayout::TakeRowResult(self->takeRow(layout));
}

void QFormLayout_SetItem(QFormLayout* self, int row, int role, QLayoutItem* item) {
	self->setItem(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role), item);
}

void QFormLayout_SetWidget(QFormLayout* self, int row, int role, QWidget* widget) {
	self->setWidget(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role), widget);
}

void QFormLayout_SetLayout(QFormLayout* self, int row, int role, QLayout* layout) {
	self->setLayout(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role), layout);
}

QLayoutItem* QFormLayout_ItemAt(const QFormLayout* self, int row, int role) {
	return self->itemAt(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role));
}

QWidget* QFormLayout_LabelForField(const QFormLayout* self, QWidget* field) {
	return self->labelForField(field);
}

QWidget* QFormLayout_LabelForFieldWithField(const QFormLayout* self, QLayout* field) {
	return self->labelForField(field);
}

void QFormLayout_AddItem(QFormLayout* self, QLayoutItem* item) {
	self->addItem(item);
}

QLayoutItem* QFormLayout_ItemAtWithIndex(const QFormLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QFormLayout_TakeAt(QFormLayout* self, int index) {
	return self->takeAt(static_cast<int>(index));
}

void QFormLayout_SetGeometry(QFormLayout* self, QRect* rect) {
	self->setGeometry(*rect);
}

QSize* QFormLayout_MinimumSize(const QFormLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QFormLayout_SizeHint(const QFormLayout* self) {
	return new QSize(self->sizeHint());
}

void QFormLayout_Invalidate(QFormLayout* self) {
	self->invalidate();
}

bool QFormLayout_HasHeightForWidth(const QFormLayout* self) {
	return self->hasHeightForWidth();
}

int QFormLayout_HeightForWidth(const QFormLayout* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

int QFormLayout_ExpandingDirections(const QFormLayout* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

int QFormLayout_Count(const QFormLayout* self) {
	return self->count();
}

int QFormLayout_RowCount(const QFormLayout* self) {
	return self->rowCount();
}

struct miqt_string QFormLayout_Tr2(const char* s, const char* c) {
	QString _ret = QFormLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFormLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFormLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFormLayout_TrUtf82(const char* s, const char* c) {
	QString _ret = QFormLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFormLayout_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QFormLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFormLayout_override_virtual_AddItem(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AddItem = slot;
	return true;
}

void QFormLayout_virtualbase_AddItem(void* self, QLayoutItem* item) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_AddItem(item);
}

bool QFormLayout_override_virtual_ItemAtWithIndex(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemAtWithIndex = slot;
	return true;
}

QLayoutItem* QFormLayout_virtualbase_ItemAtWithIndex(const void* self, int index) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_ItemAtWithIndex(index);
}

bool QFormLayout_override_virtual_TakeAt(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TakeAt = slot;
	return true;
}

QLayoutItem* QFormLayout_virtualbase_TakeAt(void* self, int index) {
	return ( (MiqtVirtualQFormLayout*)(self) )->virtualbase_TakeAt(index);
}

bool QFormLayout_override_virtual_SetGeometry(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetGeometry = slot;
	return true;
}

void QFormLayout_virtualbase_SetGeometry(void* self, QRect* rect) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_SetGeometry(rect);
}

bool QFormLayout_override_virtual_MinimumSize(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSize = slot;
	return true;
}

QSize* QFormLayout_virtualbase_MinimumSize(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_MinimumSize();
}

bool QFormLayout_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QFormLayout_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_SizeHint();
}

bool QFormLayout_override_virtual_Invalidate(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Invalidate = slot;
	return true;
}

void QFormLayout_virtualbase_Invalidate(void* self) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_Invalidate();
}

bool QFormLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QFormLayout_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_HasHeightForWidth();
}

bool QFormLayout_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QFormLayout_virtualbase_HeightForWidth(const void* self, int width) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_HeightForWidth(width);
}

bool QFormLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ExpandingDirections = slot;
	return true;
}

int QFormLayout_virtualbase_ExpandingDirections(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_ExpandingDirections();
}

bool QFormLayout_override_virtual_Count(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Count = slot;
	return true;
}

int QFormLayout_virtualbase_Count(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_Count();
}

bool QFormLayout_override_virtual_Geometry(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Geometry = slot;
	return true;
}

QRect* QFormLayout_virtualbase_Geometry(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_Geometry();
}

bool QFormLayout_override_virtual_MaximumSize(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MaximumSize = slot;
	return true;
}

QSize* QFormLayout_virtualbase_MaximumSize(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_MaximumSize();
}

bool QFormLayout_override_virtual_IndexOf(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexOf = slot;
	return true;
}

int QFormLayout_virtualbase_IndexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_IndexOf(param1);
}

bool QFormLayout_override_virtual_IsEmpty(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsEmpty = slot;
	return true;
}

bool QFormLayout_virtualbase_IsEmpty(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_IsEmpty();
}

bool QFormLayout_override_virtual_ControlTypes(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ControlTypes = slot;
	return true;
}

int QFormLayout_virtualbase_ControlTypes(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_ControlTypes();
}

bool QFormLayout_override_virtual_Layout(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Layout = slot;
	return true;
}

QLayout* QFormLayout_virtualbase_Layout(void* self) {
	return ( (MiqtVirtualQFormLayout*)(self) )->virtualbase_Layout();
}

bool QFormLayout_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QFormLayout_virtualbase_ChildEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_ChildEvent(e);
}

bool QFormLayout_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QFormLayout_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQFormLayout*)(self) )->virtualbase_Event(event);
}

bool QFormLayout_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QFormLayout_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQFormLayout*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QFormLayout_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QFormLayout_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_TimerEvent(event);
}

bool QFormLayout_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QFormLayout_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_CustomEvent(event);
}

bool QFormLayout_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QFormLayout_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QFormLayout_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QFormLayout_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_DisconnectNotify(signal);
}

bool QFormLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumHeightForWidth = slot;
	return true;
}

int QFormLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_MinimumHeightForWidth(param1);
}

bool QFormLayout_override_virtual_Widget(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Widget = slot;
	return true;
}

QWidget* QFormLayout_virtualbase_Widget(void* self) {
	return ( (MiqtVirtualQFormLayout*)(self) )->virtualbase_Widget();
}

bool QFormLayout_override_virtual_SpacerItem(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SpacerItem = slot;
	return true;
}

QSpacerItem* QFormLayout_virtualbase_SpacerItem(void* self) {
	return ( (MiqtVirtualQFormLayout*)(self) )->virtualbase_SpacerItem();
}

void QFormLayout_Delete(QFormLayout* self) {
	delete self;
}

void QFormLayout__TakeRowResult_Delete(QFormLayout__TakeRowResult* self) {
	delete self;
}

