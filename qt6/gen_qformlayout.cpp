#include <QChildEvent>
#include <QFormLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QFormLayout__TakeRowResult
#include <QLayout>
#include <QLayoutItem>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qformlayout.h>
#include "gen_qformlayout.h"
#include "_cgo_export.h"

class MiqtVirtualQFormLayout : public virtual QFormLayout {
public:

	MiqtVirtualQFormLayout(QWidget* parent): QFormLayout(parent) {};
	MiqtVirtualQFormLayout(): QFormLayout() {};

	virtual ~MiqtVirtualQFormLayout() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Spacing = 0;

	// Subclass to allow providing a Go implementation
	virtual int spacing() const override {
		if (handle__Spacing == 0) {
			return QFormLayout::spacing();
		}
		

		int callback_return_value = miqt_exec_callback_QFormLayout_Spacing(const_cast<MiqtVirtualQFormLayout*>(this), handle__Spacing);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Spacing() const {

		return QFormLayout::spacing();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSpacing = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSpacing(int spacing) override {
		if (handle__SetSpacing == 0) {
			QFormLayout::setSpacing(spacing);
			return;
		}
		
		int sigval1 = spacing;

		miqt_exec_callback_QFormLayout_SetSpacing(this, handle__SetSpacing, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSpacing(int spacing) {

		QFormLayout::setSpacing(static_cast<int>(spacing));

	}

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
	virtual int indexOf(const QWidget* param1) const override {
		if (handle__IndexOf == 0) {
			return QFormLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = (QWidget*) param1;

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
	intptr_t handle__ReplaceWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
		if (handle__ReplaceWidget == 0) {
			return QFormLayout::replaceWidget(from, to, options);
		}
		
		QWidget* sigval1 = from;
		QWidget* sigval2 = to;
		Qt::FindChildOptions options_ret = options;
		int sigval3 = static_cast<int>(options_ret);

		QLayoutItem* callback_return_value = miqt_exec_callback_QFormLayout_ReplaceWidget(this, handle__ReplaceWidget, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_ReplaceWidget(QWidget* from, QWidget* to, int options) {

		return QFormLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));

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

};

void QFormLayout_new(QWidget* parent, QFormLayout** outptr_QFormLayout, QLayout** outptr_QLayout, QObject** outptr_QObject, QLayoutItem** outptr_QLayoutItem) {
	MiqtVirtualQFormLayout* ret = new MiqtVirtualQFormLayout(parent);
	*outptr_QFormLayout = ret;
	*outptr_QLayout = static_cast<QLayout*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QLayoutItem = static_cast<QLayoutItem*>(ret);
}

void QFormLayout_new2(QFormLayout** outptr_QFormLayout, QLayout** outptr_QLayout, QObject** outptr_QObject, QLayoutItem** outptr_QLayoutItem) {
	MiqtVirtualQFormLayout* ret = new MiqtVirtualQFormLayout();
	*outptr_QFormLayout = ret;
	*outptr_QLayout = static_cast<QLayout*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QLayoutItem = static_cast<QLayoutItem*>(ret);
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

void QFormLayout_SetRowVisible(QFormLayout* self, int row, bool on) {
	self->setRowVisible(static_cast<int>(row), on);
}

void QFormLayout_SetRowVisible2(QFormLayout* self, QWidget* widget, bool on) {
	self->setRowVisible(widget, on);
}

void QFormLayout_SetRowVisible3(QFormLayout* self, QLayout* layout, bool on) {
	self->setRowVisible(layout, on);
}

bool QFormLayout_IsRowVisible(const QFormLayout* self, int row) {
	return self->isRowVisible(static_cast<int>(row));
}

bool QFormLayout_IsRowVisibleWithWidget(const QFormLayout* self, QWidget* widget) {
	return self->isRowVisible(widget);
}

bool QFormLayout_IsRowVisibleWithLayout(const QFormLayout* self, QLayout* layout) {
	return self->isRowVisible(layout);
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

void QFormLayout_override_virtual_Spacing(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__Spacing = slot;
}

int QFormLayout_virtualbase_Spacing(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_Spacing();
}

void QFormLayout_override_virtual_SetSpacing(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__SetSpacing = slot;
}

void QFormLayout_virtualbase_SetSpacing(void* self, int spacing) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_SetSpacing(spacing);
}

void QFormLayout_override_virtual_AddItem(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__AddItem = slot;
}

void QFormLayout_virtualbase_AddItem(void* self, QLayoutItem* item) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_AddItem(item);
}

void QFormLayout_override_virtual_ItemAtWithIndex(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__ItemAtWithIndex = slot;
}

QLayoutItem* QFormLayout_virtualbase_ItemAtWithIndex(const void* self, int index) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_ItemAtWithIndex(index);
}

void QFormLayout_override_virtual_TakeAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__TakeAt = slot;
}

QLayoutItem* QFormLayout_virtualbase_TakeAt(void* self, int index) {
	return ( (MiqtVirtualQFormLayout*)(self) )->virtualbase_TakeAt(index);
}

void QFormLayout_override_virtual_SetGeometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__SetGeometry = slot;
}

void QFormLayout_virtualbase_SetGeometry(void* self, QRect* rect) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_SetGeometry(rect);
}

void QFormLayout_override_virtual_MinimumSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__MinimumSize = slot;
}

QSize* QFormLayout_virtualbase_MinimumSize(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_MinimumSize();
}

void QFormLayout_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__SizeHint = slot;
}

QSize* QFormLayout_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_SizeHint();
}

void QFormLayout_override_virtual_Invalidate(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__Invalidate = slot;
}

void QFormLayout_virtualbase_Invalidate(void* self) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_Invalidate();
}

void QFormLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__HasHeightForWidth = slot;
}

bool QFormLayout_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_HasHeightForWidth();
}

void QFormLayout_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__HeightForWidth = slot;
}

int QFormLayout_virtualbase_HeightForWidth(const void* self, int width) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_HeightForWidth(width);
}

void QFormLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__ExpandingDirections = slot;
}

int QFormLayout_virtualbase_ExpandingDirections(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_ExpandingDirections();
}

void QFormLayout_override_virtual_Count(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__Count = slot;
}

int QFormLayout_virtualbase_Count(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_Count();
}

void QFormLayout_override_virtual_Geometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__Geometry = slot;
}

QRect* QFormLayout_virtualbase_Geometry(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_Geometry();
}

void QFormLayout_override_virtual_MaximumSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__MaximumSize = slot;
}

QSize* QFormLayout_virtualbase_MaximumSize(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_MaximumSize();
}

void QFormLayout_override_virtual_IndexOf(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__IndexOf = slot;
}

int QFormLayout_virtualbase_IndexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_IndexOf(param1);
}

void QFormLayout_override_virtual_IsEmpty(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__IsEmpty = slot;
}

bool QFormLayout_virtualbase_IsEmpty(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_IsEmpty();
}

void QFormLayout_override_virtual_ControlTypes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__ControlTypes = slot;
}

int QFormLayout_virtualbase_ControlTypes(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_ControlTypes();
}

void QFormLayout_override_virtual_ReplaceWidget(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__ReplaceWidget = slot;
}

QLayoutItem* QFormLayout_virtualbase_ReplaceWidget(void* self, QWidget* from, QWidget* to, int options) {
	return ( (MiqtVirtualQFormLayout*)(self) )->virtualbase_ReplaceWidget(from, to, options);
}

void QFormLayout_override_virtual_Layout(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__Layout = slot;
}

QLayout* QFormLayout_virtualbase_Layout(void* self) {
	return ( (MiqtVirtualQFormLayout*)(self) )->virtualbase_Layout();
}

void QFormLayout_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) )->handle__ChildEvent = slot;
}

void QFormLayout_virtualbase_ChildEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_ChildEvent(e);
}

void QFormLayout_Delete(QFormLayout* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQFormLayout*>( self );
	} else {
		delete self;
	}
}

void QFormLayout__TakeRowResult_Delete(QFormLayout__TakeRowResult* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QFormLayout::TakeRowResult*>( self );
	} else {
		delete self;
	}
}

