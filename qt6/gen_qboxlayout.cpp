#include <QBoxLayout>
#include <QChildEvent>
#include <QHBoxLayout>
#include <QLayout>
#include <QLayoutItem>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVBoxLayout>
#include <QWidget>
#include <qboxlayout.h>
#include "gen_qboxlayout.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QBoxLayout_AddItem(void*, intptr_t, QLayoutItem*);
int miqt_exec_callback_QBoxLayout_Spacing(void*, intptr_t);
void miqt_exec_callback_QBoxLayout_SetSpacing(void*, intptr_t, int);
QSize* miqt_exec_callback_QBoxLayout_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QBoxLayout_MinimumSize(void*, intptr_t);
QSize* miqt_exec_callback_QBoxLayout_MaximumSize(void*, intptr_t);
bool miqt_exec_callback_QBoxLayout_HasHeightForWidth(void*, intptr_t);
int miqt_exec_callback_QBoxLayout_HeightForWidth(void*, intptr_t, int);
int miqt_exec_callback_QBoxLayout_MinimumHeightForWidth(void*, intptr_t, int);
int miqt_exec_callback_QBoxLayout_ExpandingDirections(void*, intptr_t);
void miqt_exec_callback_QBoxLayout_Invalidate(void*, intptr_t);
QLayoutItem* miqt_exec_callback_QBoxLayout_ItemAt(void*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QBoxLayout_TakeAt(void*, intptr_t, int);
int miqt_exec_callback_QBoxLayout_Count(void*, intptr_t);
void miqt_exec_callback_QBoxLayout_SetGeometry(void*, intptr_t, QRect*);
QRect* miqt_exec_callback_QBoxLayout_Geometry(void*, intptr_t);
int miqt_exec_callback_QBoxLayout_IndexOf(void*, intptr_t, QWidget*);
bool miqt_exec_callback_QBoxLayout_IsEmpty(void*, intptr_t);
int miqt_exec_callback_QBoxLayout_ControlTypes(void*, intptr_t);
QLayoutItem* miqt_exec_callback_QBoxLayout_ReplaceWidget(void*, intptr_t, QWidget*, QWidget*, int);
QLayout* miqt_exec_callback_QBoxLayout_Layout(void*, intptr_t);
void miqt_exec_callback_QBoxLayout_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QHBoxLayout_AddItem(void*, intptr_t, QLayoutItem*);
int miqt_exec_callback_QHBoxLayout_Spacing(void*, intptr_t);
void miqt_exec_callback_QHBoxLayout_SetSpacing(void*, intptr_t, int);
QSize* miqt_exec_callback_QHBoxLayout_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QHBoxLayout_MinimumSize(void*, intptr_t);
QSize* miqt_exec_callback_QHBoxLayout_MaximumSize(void*, intptr_t);
bool miqt_exec_callback_QHBoxLayout_HasHeightForWidth(void*, intptr_t);
int miqt_exec_callback_QHBoxLayout_HeightForWidth(void*, intptr_t, int);
int miqt_exec_callback_QHBoxLayout_MinimumHeightForWidth(void*, intptr_t, int);
int miqt_exec_callback_QHBoxLayout_ExpandingDirections(void*, intptr_t);
void miqt_exec_callback_QHBoxLayout_Invalidate(void*, intptr_t);
QLayoutItem* miqt_exec_callback_QHBoxLayout_ItemAt(void*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QHBoxLayout_TakeAt(void*, intptr_t, int);
int miqt_exec_callback_QHBoxLayout_Count(void*, intptr_t);
void miqt_exec_callback_QHBoxLayout_SetGeometry(void*, intptr_t, QRect*);
void miqt_exec_callback_QVBoxLayout_AddItem(void*, intptr_t, QLayoutItem*);
int miqt_exec_callback_QVBoxLayout_Spacing(void*, intptr_t);
void miqt_exec_callback_QVBoxLayout_SetSpacing(void*, intptr_t, int);
QSize* miqt_exec_callback_QVBoxLayout_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QVBoxLayout_MinimumSize(void*, intptr_t);
QSize* miqt_exec_callback_QVBoxLayout_MaximumSize(void*, intptr_t);
bool miqt_exec_callback_QVBoxLayout_HasHeightForWidth(void*, intptr_t);
int miqt_exec_callback_QVBoxLayout_HeightForWidth(void*, intptr_t, int);
int miqt_exec_callback_QVBoxLayout_MinimumHeightForWidth(void*, intptr_t, int);
int miqt_exec_callback_QVBoxLayout_ExpandingDirections(void*, intptr_t);
void miqt_exec_callback_QVBoxLayout_Invalidate(void*, intptr_t);
QLayoutItem* miqt_exec_callback_QVBoxLayout_ItemAt(void*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QVBoxLayout_TakeAt(void*, intptr_t, int);
int miqt_exec_callback_QVBoxLayout_Count(void*, intptr_t);
void miqt_exec_callback_QVBoxLayout_SetGeometry(void*, intptr_t, QRect*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQBoxLayout final : public QBoxLayout {
public:

	MiqtVirtualQBoxLayout(QBoxLayout::Direction param1): QBoxLayout(param1) {};
	MiqtVirtualQBoxLayout(QBoxLayout::Direction param1, QWidget* parent): QBoxLayout(param1, parent) {};

	virtual ~MiqtVirtualQBoxLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AddItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* param1) override {
		if (handle__AddItem == 0) {
			QBoxLayout::addItem(param1);
			return;
		}
		
		QLayoutItem* sigval1 = param1;

		miqt_exec_callback_QBoxLayout_AddItem(this, handle__AddItem, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_AddItem(QLayoutItem* param1) {

		QBoxLayout::addItem(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Spacing = 0;

	// Subclass to allow providing a Go implementation
	virtual int spacing() const override {
		if (handle__Spacing == 0) {
			return QBoxLayout::spacing();
		}
		

		int callback_return_value = miqt_exec_callback_QBoxLayout_Spacing(const_cast<MiqtVirtualQBoxLayout*>(this), handle__Spacing);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Spacing() const {

		return QBoxLayout::spacing();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSpacing = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSpacing(int spacing) override {
		if (handle__SetSpacing == 0) {
			QBoxLayout::setSpacing(spacing);
			return;
		}
		
		int sigval1 = spacing;

		miqt_exec_callback_QBoxLayout_SetSpacing(this, handle__SetSpacing, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSpacing(int spacing) {

		QBoxLayout::setSpacing(static_cast<int>(spacing));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QBoxLayout::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QBoxLayout_SizeHint(const_cast<MiqtVirtualQBoxLayout*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QBoxLayout::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (handle__MinimumSize == 0) {
			return QBoxLayout::minimumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QBoxLayout_MinimumSize(const_cast<MiqtVirtualQBoxLayout*>(this), handle__MinimumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSize() const {

		return new QSize(QBoxLayout::minimumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MaximumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (handle__MaximumSize == 0) {
			return QBoxLayout::maximumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QBoxLayout_MaximumSize(const_cast<MiqtVirtualQBoxLayout*>(this), handle__MaximumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MaximumSize() const {

		return new QSize(QBoxLayout::maximumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QBoxLayout::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QBoxLayout_HasHeightForWidth(const_cast<MiqtVirtualQBoxLayout*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QBoxLayout::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QBoxLayout::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QBoxLayout_HeightForWidth(const_cast<MiqtVirtualQBoxLayout*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QBoxLayout::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (handle__MinimumHeightForWidth == 0) {
			return QBoxLayout::minimumHeightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QBoxLayout_MinimumHeightForWidth(const_cast<MiqtVirtualQBoxLayout*>(this), handle__MinimumHeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_MinimumHeightForWidth(int param1) const {

		return QBoxLayout::minimumHeightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ExpandingDirections = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (handle__ExpandingDirections == 0) {
			return QBoxLayout::expandingDirections();
		}
		

		int callback_return_value = miqt_exec_callback_QBoxLayout_ExpandingDirections(const_cast<MiqtVirtualQBoxLayout*>(this), handle__ExpandingDirections);

		return static_cast<Qt::Orientations>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ExpandingDirections() const {

		Qt::Orientations _ret = QBoxLayout::expandingDirections();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__Invalidate == 0) {
			QBoxLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QBoxLayout_Invalidate(this, handle__Invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Invalidate() {

		QBoxLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int param1) const override {
		if (handle__ItemAt == 0) {
			return QBoxLayout::itemAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QBoxLayout_ItemAt(const_cast<MiqtVirtualQBoxLayout*>(this), handle__ItemAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_ItemAt(int param1) const {

		return QBoxLayout::itemAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TakeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int param1) override {
		if (handle__TakeAt == 0) {
			return QBoxLayout::takeAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QBoxLayout_TakeAt(this, handle__TakeAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_TakeAt(int param1) {

		return QBoxLayout::takeAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__Count == 0) {
			return QBoxLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QBoxLayout_Count(const_cast<MiqtVirtualQBoxLayout*>(this), handle__Count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Count() const {

		return QBoxLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& geometry) override {
		if (handle__SetGeometry == 0) {
			QBoxLayout::setGeometry(geometry);
			return;
		}
		
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);

		miqt_exec_callback_QBoxLayout_SetGeometry(this, handle__SetGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetGeometry(QRect* geometry) {

		QBoxLayout::setGeometry(*geometry);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Geometry = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (handle__Geometry == 0) {
			return QBoxLayout::geometry();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QBoxLayout_Geometry(const_cast<MiqtVirtualQBoxLayout*>(this), handle__Geometry);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_Geometry() const {

		return new QRect(QBoxLayout::geometry());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(const QWidget* param1) const override {
		if (handle__IndexOf == 0) {
			return QBoxLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = (QWidget*) param1;

		int callback_return_value = miqt_exec_callback_QBoxLayout_IndexOf(const_cast<MiqtVirtualQBoxLayout*>(this), handle__IndexOf, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndexOf(QWidget* param1) const {

		return QBoxLayout::indexOf(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__IsEmpty == 0) {
			return QBoxLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QBoxLayout_IsEmpty(const_cast<MiqtVirtualQBoxLayout*>(this), handle__IsEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEmpty() const {

		return QBoxLayout::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ControlTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (handle__ControlTypes == 0) {
			return QBoxLayout::controlTypes();
		}
		

		int callback_return_value = miqt_exec_callback_QBoxLayout_ControlTypes(const_cast<MiqtVirtualQBoxLayout*>(this), handle__ControlTypes);

		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ControlTypes() const {

		QSizePolicy::ControlTypes _ret = QBoxLayout::controlTypes();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReplaceWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
		if (handle__ReplaceWidget == 0) {
			return QBoxLayout::replaceWidget(from, to, options);
		}
		
		QWidget* sigval1 = from;
		QWidget* sigval2 = to;
		Qt::FindChildOptions options_ret = options;
		int sigval3 = static_cast<int>(options_ret);

		QLayoutItem* callback_return_value = miqt_exec_callback_QBoxLayout_ReplaceWidget(this, handle__ReplaceWidget, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_ReplaceWidget(QWidget* from, QWidget* to, int options) {

		return QBoxLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Layout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (handle__Layout == 0) {
			return QBoxLayout::layout();
		}
		

		QLayout* callback_return_value = miqt_exec_callback_QBoxLayout_Layout(this, handle__Layout);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayout* virtualbase_Layout() {

		return QBoxLayout::layout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (handle__ChildEvent == 0) {
			QBoxLayout::childEvent(e);
			return;
		}
		
		QChildEvent* sigval1 = e;

		miqt_exec_callback_QBoxLayout_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* e) {

		QBoxLayout::childEvent(e);

	}

};

QBoxLayout* QBoxLayout_new(int param1) {
	return new MiqtVirtualQBoxLayout(static_cast<QBoxLayout::Direction>(param1));
}

QBoxLayout* QBoxLayout_new2(int param1, QWidget* parent) {
	return new MiqtVirtualQBoxLayout(static_cast<QBoxLayout::Direction>(param1), parent);
}

void QBoxLayout_virtbase(QBoxLayout* src, QLayout** outptr_QLayout) {
	*outptr_QLayout = static_cast<QLayout*>(src);
}

QMetaObject* QBoxLayout_MetaObject(const QBoxLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QBoxLayout_Metacast(QBoxLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QBoxLayout_Tr(const char* s) {
	QString _ret = QBoxLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QBoxLayout_Direction(const QBoxLayout* self) {
	QBoxLayout::Direction _ret = self->direction();
	return static_cast<int>(_ret);
}

void QBoxLayout_SetDirection(QBoxLayout* self, int direction) {
	self->setDirection(static_cast<QBoxLayout::Direction>(direction));
}

void QBoxLayout_AddSpacing(QBoxLayout* self, int size) {
	self->addSpacing(static_cast<int>(size));
}

void QBoxLayout_AddStretch(QBoxLayout* self) {
	self->addStretch();
}

void QBoxLayout_AddSpacerItem(QBoxLayout* self, QSpacerItem* spacerItem) {
	self->addSpacerItem(spacerItem);
}

void QBoxLayout_AddWidget(QBoxLayout* self, QWidget* param1) {
	self->addWidget(param1);
}

void QBoxLayout_AddLayout(QBoxLayout* self, QLayout* layout) {
	self->addLayout(layout);
}

void QBoxLayout_AddStrut(QBoxLayout* self, int param1) {
	self->addStrut(static_cast<int>(param1));
}

void QBoxLayout_AddItem(QBoxLayout* self, QLayoutItem* param1) {
	self->addItem(param1);
}

void QBoxLayout_InsertSpacing(QBoxLayout* self, int index, int size) {
	self->insertSpacing(static_cast<int>(index), static_cast<int>(size));
}

void QBoxLayout_InsertStretch(QBoxLayout* self, int index) {
	self->insertStretch(static_cast<int>(index));
}

void QBoxLayout_InsertSpacerItem(QBoxLayout* self, int index, QSpacerItem* spacerItem) {
	self->insertSpacerItem(static_cast<int>(index), spacerItem);
}

void QBoxLayout_InsertWidget(QBoxLayout* self, int index, QWidget* widget) {
	self->insertWidget(static_cast<int>(index), widget);
}

void QBoxLayout_InsertLayout(QBoxLayout* self, int index, QLayout* layout) {
	self->insertLayout(static_cast<int>(index), layout);
}

void QBoxLayout_InsertItem(QBoxLayout* self, int index, QLayoutItem* param2) {
	self->insertItem(static_cast<int>(index), param2);
}

int QBoxLayout_Spacing(const QBoxLayout* self) {
	return self->spacing();
}

void QBoxLayout_SetSpacing(QBoxLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

bool QBoxLayout_SetStretchFactor(QBoxLayout* self, QWidget* w, int stretch) {
	return self->setStretchFactor(w, static_cast<int>(stretch));
}

bool QBoxLayout_SetStretchFactor2(QBoxLayout* self, QLayout* l, int stretch) {
	return self->setStretchFactor(l, static_cast<int>(stretch));
}

void QBoxLayout_SetStretch(QBoxLayout* self, int index, int stretch) {
	self->setStretch(static_cast<int>(index), static_cast<int>(stretch));
}

int QBoxLayout_Stretch(const QBoxLayout* self, int index) {
	return self->stretch(static_cast<int>(index));
}

QSize* QBoxLayout_SizeHint(const QBoxLayout* self) {
	return new QSize(self->sizeHint());
}

QSize* QBoxLayout_MinimumSize(const QBoxLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QBoxLayout_MaximumSize(const QBoxLayout* self) {
	return new QSize(self->maximumSize());
}

bool QBoxLayout_HasHeightForWidth(const QBoxLayout* self) {
	return self->hasHeightForWidth();
}

int QBoxLayout_HeightForWidth(const QBoxLayout* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

int QBoxLayout_MinimumHeightForWidth(const QBoxLayout* self, int param1) {
	return self->minimumHeightForWidth(static_cast<int>(param1));
}

int QBoxLayout_ExpandingDirections(const QBoxLayout* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

void QBoxLayout_Invalidate(QBoxLayout* self) {
	self->invalidate();
}

QLayoutItem* QBoxLayout_ItemAt(const QBoxLayout* self, int param1) {
	return self->itemAt(static_cast<int>(param1));
}

QLayoutItem* QBoxLayout_TakeAt(QBoxLayout* self, int param1) {
	return self->takeAt(static_cast<int>(param1));
}

int QBoxLayout_Count(const QBoxLayout* self) {
	return self->count();
}

void QBoxLayout_SetGeometry(QBoxLayout* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

struct miqt_string QBoxLayout_Tr2(const char* s, const char* c) {
	QString _ret = QBoxLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBoxLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QBoxLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QBoxLayout_AddStretch1(QBoxLayout* self, int stretch) {
	self->addStretch(static_cast<int>(stretch));
}

void QBoxLayout_AddWidget2(QBoxLayout* self, QWidget* param1, int stretch) {
	self->addWidget(param1, static_cast<int>(stretch));
}

void QBoxLayout_AddWidget3(QBoxLayout* self, QWidget* param1, int stretch, int alignment) {
	self->addWidget(param1, static_cast<int>(stretch), static_cast<Qt::Alignment>(alignment));
}

void QBoxLayout_AddLayout2(QBoxLayout* self, QLayout* layout, int stretch) {
	self->addLayout(layout, static_cast<int>(stretch));
}

void QBoxLayout_InsertStretch2(QBoxLayout* self, int index, int stretch) {
	self->insertStretch(static_cast<int>(index), static_cast<int>(stretch));
}

void QBoxLayout_InsertWidget3(QBoxLayout* self, int index, QWidget* widget, int stretch) {
	self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch));
}

void QBoxLayout_InsertWidget4(QBoxLayout* self, int index, QWidget* widget, int stretch, int alignment) {
	self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch), static_cast<Qt::Alignment>(alignment));
}

void QBoxLayout_InsertLayout3(QBoxLayout* self, int index, QLayout* layout, int stretch) {
	self->insertLayout(static_cast<int>(index), layout, static_cast<int>(stretch));
}

void QBoxLayout_override_virtual_AddItem(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__AddItem = slot;
}

void QBoxLayout_virtualbase_AddItem(void* self, QLayoutItem* param1) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_AddItem(param1);
}

void QBoxLayout_override_virtual_Spacing(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__Spacing = slot;
}

int QBoxLayout_virtualbase_Spacing(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_Spacing();
}

void QBoxLayout_override_virtual_SetSpacing(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__SetSpacing = slot;
}

void QBoxLayout_virtualbase_SetSpacing(void* self, int spacing) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_SetSpacing(spacing);
}

void QBoxLayout_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__SizeHint = slot;
}

QSize* QBoxLayout_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_SizeHint();
}

void QBoxLayout_override_virtual_MinimumSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__MinimumSize = slot;
}

QSize* QBoxLayout_virtualbase_MinimumSize(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_MinimumSize();
}

void QBoxLayout_override_virtual_MaximumSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__MaximumSize = slot;
}

QSize* QBoxLayout_virtualbase_MaximumSize(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_MaximumSize();
}

void QBoxLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__HasHeightForWidth = slot;
}

bool QBoxLayout_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_HasHeightForWidth();
}

void QBoxLayout_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__HeightForWidth = slot;
}

int QBoxLayout_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_HeightForWidth(param1);
}

void QBoxLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__MinimumHeightForWidth = slot;
}

int QBoxLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_MinimumHeightForWidth(param1);
}

void QBoxLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__ExpandingDirections = slot;
}

int QBoxLayout_virtualbase_ExpandingDirections(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_ExpandingDirections();
}

void QBoxLayout_override_virtual_Invalidate(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__Invalidate = slot;
}

void QBoxLayout_virtualbase_Invalidate(void* self) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_Invalidate();
}

void QBoxLayout_override_virtual_ItemAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__ItemAt = slot;
}

QLayoutItem* QBoxLayout_virtualbase_ItemAt(const void* self, int param1) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_ItemAt(param1);
}

void QBoxLayout_override_virtual_TakeAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__TakeAt = slot;
}

QLayoutItem* QBoxLayout_virtualbase_TakeAt(void* self, int param1) {
	return ( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_TakeAt(param1);
}

void QBoxLayout_override_virtual_Count(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__Count = slot;
}

int QBoxLayout_virtualbase_Count(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_Count();
}

void QBoxLayout_override_virtual_SetGeometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__SetGeometry = slot;
}

void QBoxLayout_virtualbase_SetGeometry(void* self, QRect* geometry) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_SetGeometry(geometry);
}

void QBoxLayout_override_virtual_Geometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__Geometry = slot;
}

QRect* QBoxLayout_virtualbase_Geometry(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_Geometry();
}

void QBoxLayout_override_virtual_IndexOf(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__IndexOf = slot;
}

int QBoxLayout_virtualbase_IndexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_IndexOf(param1);
}

void QBoxLayout_override_virtual_IsEmpty(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__IsEmpty = slot;
}

bool QBoxLayout_virtualbase_IsEmpty(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_IsEmpty();
}

void QBoxLayout_override_virtual_ControlTypes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__ControlTypes = slot;
}

int QBoxLayout_virtualbase_ControlTypes(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_ControlTypes();
}

void QBoxLayout_override_virtual_ReplaceWidget(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__ReplaceWidget = slot;
}

QLayoutItem* QBoxLayout_virtualbase_ReplaceWidget(void* self, QWidget* from, QWidget* to, int options) {
	return ( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_ReplaceWidget(from, to, options);
}

void QBoxLayout_override_virtual_Layout(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__Layout = slot;
}

QLayout* QBoxLayout_virtualbase_Layout(void* self) {
	return ( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_Layout();
}

void QBoxLayout_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) )->handle__ChildEvent = slot;
}

void QBoxLayout_virtualbase_ChildEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_ChildEvent(e);
}

void QBoxLayout_Delete(QBoxLayout* self) {
	delete self;
}

class MiqtVirtualQHBoxLayout final : public QHBoxLayout {
public:

	MiqtVirtualQHBoxLayout(QWidget* parent): QHBoxLayout(parent) {};
	MiqtVirtualQHBoxLayout(): QHBoxLayout() {};

	virtual ~MiqtVirtualQHBoxLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AddItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* param1) override {
		if (handle__AddItem == 0) {
			QHBoxLayout::addItem(param1);
			return;
		}
		
		QLayoutItem* sigval1 = param1;

		miqt_exec_callback_QHBoxLayout_AddItem(this, handle__AddItem, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_AddItem(QLayoutItem* param1) {

		QHBoxLayout::addItem(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Spacing = 0;

	// Subclass to allow providing a Go implementation
	virtual int spacing() const override {
		if (handle__Spacing == 0) {
			return QHBoxLayout::spacing();
		}
		

		int callback_return_value = miqt_exec_callback_QHBoxLayout_Spacing(const_cast<MiqtVirtualQHBoxLayout*>(this), handle__Spacing);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Spacing() const {

		return QHBoxLayout::spacing();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSpacing = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSpacing(int spacing) override {
		if (handle__SetSpacing == 0) {
			QHBoxLayout::setSpacing(spacing);
			return;
		}
		
		int sigval1 = spacing;

		miqt_exec_callback_QHBoxLayout_SetSpacing(this, handle__SetSpacing, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSpacing(int spacing) {

		QHBoxLayout::setSpacing(static_cast<int>(spacing));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QHBoxLayout::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QHBoxLayout_SizeHint(const_cast<MiqtVirtualQHBoxLayout*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QHBoxLayout::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (handle__MinimumSize == 0) {
			return QHBoxLayout::minimumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QHBoxLayout_MinimumSize(const_cast<MiqtVirtualQHBoxLayout*>(this), handle__MinimumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSize() const {

		return new QSize(QHBoxLayout::minimumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MaximumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (handle__MaximumSize == 0) {
			return QHBoxLayout::maximumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QHBoxLayout_MaximumSize(const_cast<MiqtVirtualQHBoxLayout*>(this), handle__MaximumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MaximumSize() const {

		return new QSize(QHBoxLayout::maximumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QHBoxLayout::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QHBoxLayout_HasHeightForWidth(const_cast<MiqtVirtualQHBoxLayout*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QHBoxLayout::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QHBoxLayout::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QHBoxLayout_HeightForWidth(const_cast<MiqtVirtualQHBoxLayout*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QHBoxLayout::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (handle__MinimumHeightForWidth == 0) {
			return QHBoxLayout::minimumHeightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QHBoxLayout_MinimumHeightForWidth(const_cast<MiqtVirtualQHBoxLayout*>(this), handle__MinimumHeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_MinimumHeightForWidth(int param1) const {

		return QHBoxLayout::minimumHeightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ExpandingDirections = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (handle__ExpandingDirections == 0) {
			return QHBoxLayout::expandingDirections();
		}
		

		int callback_return_value = miqt_exec_callback_QHBoxLayout_ExpandingDirections(const_cast<MiqtVirtualQHBoxLayout*>(this), handle__ExpandingDirections);

		return static_cast<Qt::Orientations>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ExpandingDirections() const {

		Qt::Orientations _ret = QHBoxLayout::expandingDirections();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__Invalidate == 0) {
			QHBoxLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QHBoxLayout_Invalidate(this, handle__Invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Invalidate() {

		QHBoxLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int param1) const override {
		if (handle__ItemAt == 0) {
			return QHBoxLayout::itemAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QHBoxLayout_ItemAt(const_cast<MiqtVirtualQHBoxLayout*>(this), handle__ItemAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_ItemAt(int param1) const {

		return QHBoxLayout::itemAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TakeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int param1) override {
		if (handle__TakeAt == 0) {
			return QHBoxLayout::takeAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QHBoxLayout_TakeAt(this, handle__TakeAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_TakeAt(int param1) {

		return QHBoxLayout::takeAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__Count == 0) {
			return QHBoxLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QHBoxLayout_Count(const_cast<MiqtVirtualQHBoxLayout*>(this), handle__Count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Count() const {

		return QHBoxLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& geometry) override {
		if (handle__SetGeometry == 0) {
			QHBoxLayout::setGeometry(geometry);
			return;
		}
		
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);

		miqt_exec_callback_QHBoxLayout_SetGeometry(this, handle__SetGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetGeometry(QRect* geometry) {

		QHBoxLayout::setGeometry(*geometry);

	}

};

QHBoxLayout* QHBoxLayout_new(QWidget* parent) {
	return new MiqtVirtualQHBoxLayout(parent);
}

QHBoxLayout* QHBoxLayout_new2() {
	return new MiqtVirtualQHBoxLayout();
}

void QHBoxLayout_virtbase(QHBoxLayout* src, QBoxLayout** outptr_QBoxLayout) {
	*outptr_QBoxLayout = static_cast<QBoxLayout*>(src);
}

QMetaObject* QHBoxLayout_MetaObject(const QHBoxLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHBoxLayout_Metacast(QHBoxLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHBoxLayout_Tr(const char* s) {
	QString _ret = QHBoxLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHBoxLayout_Tr2(const char* s, const char* c) {
	QString _ret = QHBoxLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHBoxLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHBoxLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QHBoxLayout_override_virtual_AddItem(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) )->handle__AddItem = slot;
}

void QHBoxLayout_virtualbase_AddItem(void* self, QLayoutItem* param1) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_AddItem(param1);
}

void QHBoxLayout_override_virtual_Spacing(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) )->handle__Spacing = slot;
}

int QHBoxLayout_virtualbase_Spacing(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_Spacing();
}

void QHBoxLayout_override_virtual_SetSpacing(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) )->handle__SetSpacing = slot;
}

void QHBoxLayout_virtualbase_SetSpacing(void* self, int spacing) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_SetSpacing(spacing);
}

void QHBoxLayout_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) )->handle__SizeHint = slot;
}

QSize* QHBoxLayout_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_SizeHint();
}

void QHBoxLayout_override_virtual_MinimumSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) )->handle__MinimumSize = slot;
}

QSize* QHBoxLayout_virtualbase_MinimumSize(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_MinimumSize();
}

void QHBoxLayout_override_virtual_MaximumSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) )->handle__MaximumSize = slot;
}

QSize* QHBoxLayout_virtualbase_MaximumSize(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_MaximumSize();
}

void QHBoxLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) )->handle__HasHeightForWidth = slot;
}

bool QHBoxLayout_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_HasHeightForWidth();
}

void QHBoxLayout_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) )->handle__HeightForWidth = slot;
}

int QHBoxLayout_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_HeightForWidth(param1);
}

void QHBoxLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) )->handle__MinimumHeightForWidth = slot;
}

int QHBoxLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_MinimumHeightForWidth(param1);
}

void QHBoxLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) )->handle__ExpandingDirections = slot;
}

int QHBoxLayout_virtualbase_ExpandingDirections(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_ExpandingDirections();
}

void QHBoxLayout_override_virtual_Invalidate(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) )->handle__Invalidate = slot;
}

void QHBoxLayout_virtualbase_Invalidate(void* self) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_Invalidate();
}

void QHBoxLayout_override_virtual_ItemAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) )->handle__ItemAt = slot;
}

QLayoutItem* QHBoxLayout_virtualbase_ItemAt(const void* self, int param1) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_ItemAt(param1);
}

void QHBoxLayout_override_virtual_TakeAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) )->handle__TakeAt = slot;
}

QLayoutItem* QHBoxLayout_virtualbase_TakeAt(void* self, int param1) {
	return ( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_TakeAt(param1);
}

void QHBoxLayout_override_virtual_Count(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) )->handle__Count = slot;
}

int QHBoxLayout_virtualbase_Count(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_Count();
}

void QHBoxLayout_override_virtual_SetGeometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) )->handle__SetGeometry = slot;
}

void QHBoxLayout_virtualbase_SetGeometry(void* self, QRect* geometry) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_SetGeometry(geometry);
}

void QHBoxLayout_Delete(QHBoxLayout* self) {
	delete self;
}

class MiqtVirtualQVBoxLayout final : public QVBoxLayout {
public:

	MiqtVirtualQVBoxLayout(QWidget* parent): QVBoxLayout(parent) {};
	MiqtVirtualQVBoxLayout(): QVBoxLayout() {};

	virtual ~MiqtVirtualQVBoxLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AddItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* param1) override {
		if (handle__AddItem == 0) {
			QVBoxLayout::addItem(param1);
			return;
		}
		
		QLayoutItem* sigval1 = param1;

		miqt_exec_callback_QVBoxLayout_AddItem(this, handle__AddItem, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_AddItem(QLayoutItem* param1) {

		QVBoxLayout::addItem(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Spacing = 0;

	// Subclass to allow providing a Go implementation
	virtual int spacing() const override {
		if (handle__Spacing == 0) {
			return QVBoxLayout::spacing();
		}
		

		int callback_return_value = miqt_exec_callback_QVBoxLayout_Spacing(const_cast<MiqtVirtualQVBoxLayout*>(this), handle__Spacing);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Spacing() const {

		return QVBoxLayout::spacing();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSpacing = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSpacing(int spacing) override {
		if (handle__SetSpacing == 0) {
			QVBoxLayout::setSpacing(spacing);
			return;
		}
		
		int sigval1 = spacing;

		miqt_exec_callback_QVBoxLayout_SetSpacing(this, handle__SetSpacing, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSpacing(int spacing) {

		QVBoxLayout::setSpacing(static_cast<int>(spacing));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QVBoxLayout::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QVBoxLayout_SizeHint(const_cast<MiqtVirtualQVBoxLayout*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QVBoxLayout::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (handle__MinimumSize == 0) {
			return QVBoxLayout::minimumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QVBoxLayout_MinimumSize(const_cast<MiqtVirtualQVBoxLayout*>(this), handle__MinimumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSize() const {

		return new QSize(QVBoxLayout::minimumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MaximumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (handle__MaximumSize == 0) {
			return QVBoxLayout::maximumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QVBoxLayout_MaximumSize(const_cast<MiqtVirtualQVBoxLayout*>(this), handle__MaximumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MaximumSize() const {

		return new QSize(QVBoxLayout::maximumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QVBoxLayout::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QVBoxLayout_HasHeightForWidth(const_cast<MiqtVirtualQVBoxLayout*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QVBoxLayout::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QVBoxLayout::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QVBoxLayout_HeightForWidth(const_cast<MiqtVirtualQVBoxLayout*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QVBoxLayout::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (handle__MinimumHeightForWidth == 0) {
			return QVBoxLayout::minimumHeightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QVBoxLayout_MinimumHeightForWidth(const_cast<MiqtVirtualQVBoxLayout*>(this), handle__MinimumHeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_MinimumHeightForWidth(int param1) const {

		return QVBoxLayout::minimumHeightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ExpandingDirections = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (handle__ExpandingDirections == 0) {
			return QVBoxLayout::expandingDirections();
		}
		

		int callback_return_value = miqt_exec_callback_QVBoxLayout_ExpandingDirections(const_cast<MiqtVirtualQVBoxLayout*>(this), handle__ExpandingDirections);

		return static_cast<Qt::Orientations>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ExpandingDirections() const {

		Qt::Orientations _ret = QVBoxLayout::expandingDirections();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__Invalidate == 0) {
			QVBoxLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QVBoxLayout_Invalidate(this, handle__Invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Invalidate() {

		QVBoxLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int param1) const override {
		if (handle__ItemAt == 0) {
			return QVBoxLayout::itemAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QVBoxLayout_ItemAt(const_cast<MiqtVirtualQVBoxLayout*>(this), handle__ItemAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_ItemAt(int param1) const {

		return QVBoxLayout::itemAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TakeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int param1) override {
		if (handle__TakeAt == 0) {
			return QVBoxLayout::takeAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QVBoxLayout_TakeAt(this, handle__TakeAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_TakeAt(int param1) {

		return QVBoxLayout::takeAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__Count == 0) {
			return QVBoxLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QVBoxLayout_Count(const_cast<MiqtVirtualQVBoxLayout*>(this), handle__Count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Count() const {

		return QVBoxLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& geometry) override {
		if (handle__SetGeometry == 0) {
			QVBoxLayout::setGeometry(geometry);
			return;
		}
		
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);

		miqt_exec_callback_QVBoxLayout_SetGeometry(this, handle__SetGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetGeometry(QRect* geometry) {

		QVBoxLayout::setGeometry(*geometry);

	}

};

QVBoxLayout* QVBoxLayout_new(QWidget* parent) {
	return new MiqtVirtualQVBoxLayout(parent);
}

QVBoxLayout* QVBoxLayout_new2() {
	return new MiqtVirtualQVBoxLayout();
}

void QVBoxLayout_virtbase(QVBoxLayout* src, QBoxLayout** outptr_QBoxLayout) {
	*outptr_QBoxLayout = static_cast<QBoxLayout*>(src);
}

QMetaObject* QVBoxLayout_MetaObject(const QVBoxLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVBoxLayout_Metacast(QVBoxLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVBoxLayout_Tr(const char* s) {
	QString _ret = QVBoxLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVBoxLayout_Tr2(const char* s, const char* c) {
	QString _ret = QVBoxLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVBoxLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVBoxLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVBoxLayout_override_virtual_AddItem(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) )->handle__AddItem = slot;
}

void QVBoxLayout_virtualbase_AddItem(void* self, QLayoutItem* param1) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_AddItem(param1);
}

void QVBoxLayout_override_virtual_Spacing(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) )->handle__Spacing = slot;
}

int QVBoxLayout_virtualbase_Spacing(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_Spacing();
}

void QVBoxLayout_override_virtual_SetSpacing(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) )->handle__SetSpacing = slot;
}

void QVBoxLayout_virtualbase_SetSpacing(void* self, int spacing) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_SetSpacing(spacing);
}

void QVBoxLayout_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) )->handle__SizeHint = slot;
}

QSize* QVBoxLayout_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_SizeHint();
}

void QVBoxLayout_override_virtual_MinimumSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) )->handle__MinimumSize = slot;
}

QSize* QVBoxLayout_virtualbase_MinimumSize(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_MinimumSize();
}

void QVBoxLayout_override_virtual_MaximumSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) )->handle__MaximumSize = slot;
}

QSize* QVBoxLayout_virtualbase_MaximumSize(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_MaximumSize();
}

void QVBoxLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) )->handle__HasHeightForWidth = slot;
}

bool QVBoxLayout_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_HasHeightForWidth();
}

void QVBoxLayout_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) )->handle__HeightForWidth = slot;
}

int QVBoxLayout_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_HeightForWidth(param1);
}

void QVBoxLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) )->handle__MinimumHeightForWidth = slot;
}

int QVBoxLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_MinimumHeightForWidth(param1);
}

void QVBoxLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) )->handle__ExpandingDirections = slot;
}

int QVBoxLayout_virtualbase_ExpandingDirections(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_ExpandingDirections();
}

void QVBoxLayout_override_virtual_Invalidate(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) )->handle__Invalidate = slot;
}

void QVBoxLayout_virtualbase_Invalidate(void* self) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_Invalidate();
}

void QVBoxLayout_override_virtual_ItemAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) )->handle__ItemAt = slot;
}

QLayoutItem* QVBoxLayout_virtualbase_ItemAt(const void* self, int param1) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_ItemAt(param1);
}

void QVBoxLayout_override_virtual_TakeAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) )->handle__TakeAt = slot;
}

QLayoutItem* QVBoxLayout_virtualbase_TakeAt(void* self, int param1) {
	return ( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_TakeAt(param1);
}

void QVBoxLayout_override_virtual_Count(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) )->handle__Count = slot;
}

int QVBoxLayout_virtualbase_Count(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_Count();
}

void QVBoxLayout_override_virtual_SetGeometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) )->handle__SetGeometry = slot;
}

void QVBoxLayout_virtualbase_SetGeometry(void* self, QRect* geometry) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_SetGeometry(geometry);
}

void QVBoxLayout_Delete(QVBoxLayout* self) {
	delete self;
}

