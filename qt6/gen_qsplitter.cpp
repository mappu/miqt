#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QSplitter>
#include <QSplitterHandle>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsplitter.h>
#include "gen_qsplitter.h"
#include "_cgo_export.h"

class MiqtVirtualQSplitter : public virtual QSplitter {
public:

	MiqtVirtualQSplitter(QWidget* parent): QSplitter(parent) {};
	MiqtVirtualQSplitter(): QSplitter() {};
	MiqtVirtualQSplitter(Qt::Orientation param1): QSplitter(param1) {};
	MiqtVirtualQSplitter(Qt::Orientation param1, QWidget* parent): QSplitter(param1, parent) {};

	virtual ~MiqtVirtualQSplitter() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QSplitter::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSplitter_SizeHint(const_cast<MiqtVirtualQSplitter*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QSplitter::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QSplitter::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSplitter_MinimumSizeHint(const_cast<MiqtVirtualQSplitter*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QSplitter::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateHandle = 0;

	// Subclass to allow providing a Go implementation
	virtual QSplitterHandle* createHandle() override {
		if (handle__CreateHandle == 0) {
			return QSplitter::createHandle();
		}
		

		QSplitterHandle* callback_return_value = miqt_exec_callback_QSplitter_CreateHandle(this, handle__CreateHandle);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSplitterHandle* virtualbase_CreateHandle() {

		return QSplitter::createHandle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* param1) override {
		if (handle__ChildEvent == 0) {
			QSplitter::childEvent(param1);
			return;
		}
		
		QChildEvent* sigval1 = param1;

		miqt_exec_callback_QSplitter_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* param1) {

		QSplitter::childEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QSplitter::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QSplitter_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QSplitter::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QSplitter::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QSplitter_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QSplitter::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QSplitter::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QSplitter_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QSplitter::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QSplitter::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QSplitter_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QSplitter::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QSplitter::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QSplitter_InitStyleOption(const_cast<MiqtVirtualQSplitter*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QSplitter::initStyleOption(option);

	}

};

void QSplitter_new(QWidget* parent, QSplitter** outptr_QSplitter, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQSplitter* ret = new MiqtVirtualQSplitter(parent);
	*outptr_QSplitter = ret;
	*outptr_QFrame = static_cast<QFrame*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QSplitter_new2(QSplitter** outptr_QSplitter, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQSplitter* ret = new MiqtVirtualQSplitter();
	*outptr_QSplitter = ret;
	*outptr_QFrame = static_cast<QFrame*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QSplitter_new3(int param1, QSplitter** outptr_QSplitter, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQSplitter* ret = new MiqtVirtualQSplitter(static_cast<Qt::Orientation>(param1));
	*outptr_QSplitter = ret;
	*outptr_QFrame = static_cast<QFrame*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QSplitter_new4(int param1, QWidget* parent, QSplitter** outptr_QSplitter, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQSplitter* ret = new MiqtVirtualQSplitter(static_cast<Qt::Orientation>(param1), parent);
	*outptr_QSplitter = ret;
	*outptr_QFrame = static_cast<QFrame*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

QMetaObject* QSplitter_MetaObject(const QSplitter* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSplitter_Metacast(QSplitter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSplitter_Tr(const char* s) {
	QString _ret = QSplitter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplitter_AddWidget(QSplitter* self, QWidget* widget) {
	self->addWidget(widget);
}

void QSplitter_InsertWidget(QSplitter* self, int index, QWidget* widget) {
	self->insertWidget(static_cast<int>(index), widget);
}

QWidget* QSplitter_ReplaceWidget(QSplitter* self, int index, QWidget* widget) {
	return self->replaceWidget(static_cast<int>(index), widget);
}

void QSplitter_SetOrientation(QSplitter* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QSplitter_Orientation(const QSplitter* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QSplitter_SetChildrenCollapsible(QSplitter* self, bool childrenCollapsible) {
	self->setChildrenCollapsible(childrenCollapsible);
}

bool QSplitter_ChildrenCollapsible(const QSplitter* self) {
	return self->childrenCollapsible();
}

void QSplitter_SetCollapsible(QSplitter* self, int index, bool param2) {
	self->setCollapsible(static_cast<int>(index), param2);
}

bool QSplitter_IsCollapsible(const QSplitter* self, int index) {
	return self->isCollapsible(static_cast<int>(index));
}

void QSplitter_SetOpaqueResize(QSplitter* self) {
	self->setOpaqueResize();
}

bool QSplitter_OpaqueResize(const QSplitter* self) {
	return self->opaqueResize();
}

void QSplitter_Refresh(QSplitter* self) {
	self->refresh();
}

QSize* QSplitter_SizeHint(const QSplitter* self) {
	return new QSize(self->sizeHint());
}

QSize* QSplitter_MinimumSizeHint(const QSplitter* self) {
	return new QSize(self->minimumSizeHint());
}

struct miqt_array /* of int */  QSplitter_Sizes(const QSplitter* self) {
	QList<int> _ret = self->sizes();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSplitter_SetSizes(QSplitter* self, struct miqt_array /* of int */  list) {
	QList<int> list_QList;
	list_QList.reserve(list.len);
	int* list_arr = static_cast<int*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(static_cast<int>(list_arr[i]));
	}
	self->setSizes(list_QList);
}

struct miqt_string QSplitter_SaveState(const QSplitter* self) {
	QByteArray _qb = self->saveState();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QSplitter_RestoreState(QSplitter* self, struct miqt_string state) {
	QByteArray state_QByteArray(state.data, state.len);
	return self->restoreState(state_QByteArray);
}

int QSplitter_HandleWidth(const QSplitter* self) {
	return self->handleWidth();
}

void QSplitter_SetHandleWidth(QSplitter* self, int handleWidth) {
	self->setHandleWidth(static_cast<int>(handleWidth));
}

int QSplitter_IndexOf(const QSplitter* self, QWidget* w) {
	return self->indexOf(w);
}

QWidget* QSplitter_Widget(const QSplitter* self, int index) {
	return self->widget(static_cast<int>(index));
}

int QSplitter_Count(const QSplitter* self) {
	return self->count();
}

void QSplitter_GetRange(const QSplitter* self, int index, int* param2, int* param3) {
	self->getRange(static_cast<int>(index), static_cast<int*>(param2), static_cast<int*>(param3));
}

QSplitterHandle* QSplitter_Handle(const QSplitter* self, int index) {
	return self->handle(static_cast<int>(index));
}

void QSplitter_SetStretchFactor(QSplitter* self, int index, int stretch) {
	self->setStretchFactor(static_cast<int>(index), static_cast<int>(stretch));
}

void QSplitter_SplitterMoved(QSplitter* self, int pos, int index) {
	self->splitterMoved(static_cast<int>(pos), static_cast<int>(index));
}

void QSplitter_connect_SplitterMoved(QSplitter* self, intptr_t slot) {
	MiqtVirtualQSplitter::connect(self, static_cast<void (QSplitter::*)(int, int)>(&QSplitter::splitterMoved), self, [=](int pos, int index) {
		int sigval1 = pos;
		int sigval2 = index;
		miqt_exec_callback_QSplitter_SplitterMoved(slot, sigval1, sigval2);
	});
}

struct miqt_string QSplitter_Tr2(const char* s, const char* c) {
	QString _ret = QSplitter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitter_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSplitter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplitter_SetOpaqueResize1(QSplitter* self, bool opaque) {
	self->setOpaqueResize(opaque);
}

void QSplitter_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) )->handle__SizeHint = slot;
}

QSize* QSplitter_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQSplitter*)(self) )->virtualbase_SizeHint();
}

void QSplitter_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QSplitter_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQSplitter*)(self) )->virtualbase_MinimumSizeHint();
}

void QSplitter_override_virtual_CreateHandle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) )->handle__CreateHandle = slot;
}

QSplitterHandle* QSplitter_virtualbase_CreateHandle(void* self) {
	return ( (MiqtVirtualQSplitter*)(self) )->virtualbase_CreateHandle();
}

void QSplitter_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) )->handle__ChildEvent = slot;
}

void QSplitter_virtualbase_ChildEvent(void* self, QChildEvent* param1) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_ChildEvent(param1);
}

void QSplitter_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) )->handle__Event = slot;
}

bool QSplitter_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQSplitter*)(self) )->virtualbase_Event(param1);
}

void QSplitter_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) )->handle__ResizeEvent = slot;
}

void QSplitter_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_ResizeEvent(param1);
}

void QSplitter_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) )->handle__ChangeEvent = slot;
}

void QSplitter_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_ChangeEvent(param1);
}

void QSplitter_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) )->handle__PaintEvent = slot;
}

void QSplitter_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQSplitter*)(self) )->virtualbase_PaintEvent(param1);
}

void QSplitter_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitter*>( (QSplitter*)(self) )->handle__InitStyleOption = slot;
}

void QSplitter_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQSplitter*)(self) )->virtualbase_InitStyleOption(option);
}

void QSplitter_Delete(QSplitter* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQSplitter*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQSplitterHandle : public virtual QSplitterHandle {
public:

	MiqtVirtualQSplitterHandle(Qt::Orientation o, QSplitter* parent): QSplitterHandle(o, parent) {};

	virtual ~MiqtVirtualQSplitterHandle() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QSplitterHandle::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSplitterHandle_SizeHint(const_cast<MiqtVirtualQSplitterHandle*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QSplitterHandle::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QSplitterHandle::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QSplitterHandle_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QSplitterHandle::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QSplitterHandle::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QSplitterHandle_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QSplitterHandle::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QSplitterHandle::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QSplitterHandle_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QSplitterHandle::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QSplitterHandle::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QSplitterHandle_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QSplitterHandle::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QSplitterHandle::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QSplitterHandle_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QSplitterHandle::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QSplitterHandle::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QSplitterHandle_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QSplitterHandle::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QSplitterHandle::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QSplitterHandle_DevType(const_cast<MiqtVirtualQSplitterHandle*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QSplitterHandle::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QSplitterHandle::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QSplitterHandle_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QSplitterHandle::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QSplitterHandle::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSplitterHandle_MinimumSizeHint(const_cast<MiqtVirtualQSplitterHandle*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QSplitterHandle::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QSplitterHandle::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QSplitterHandle_HeightForWidth(const_cast<MiqtVirtualQSplitterHandle*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QSplitterHandle::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QSplitterHandle::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QSplitterHandle_HasHeightForWidth(const_cast<MiqtVirtualQSplitterHandle*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QSplitterHandle::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QSplitterHandle::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QSplitterHandle_PaintEngine(const_cast<MiqtVirtualQSplitterHandle*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QSplitterHandle::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QSplitterHandle::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QSplitterHandle::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QSplitterHandle::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QSplitterHandle::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QSplitterHandle::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QSplitterHandle::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QSplitterHandle::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QSplitterHandle::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QSplitterHandle::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QSplitterHandle::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QSplitterHandle::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QSplitterHandle::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QSplitterHandle::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QSplitterHandle::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QSplitterHandle::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QSplitterHandle::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QSplitterHandle::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QSplitterHandle::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QSplitterHandle::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QSplitterHandle::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QSplitterHandle::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QSplitterHandle::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QSplitterHandle::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QSplitterHandle::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QSplitterHandle::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QSplitterHandle::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QSplitterHandle::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QSplitterHandle::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QSplitterHandle::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QSplitterHandle::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QSplitterHandle::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QSplitterHandle::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QSplitterHandle::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QSplitterHandle::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QSplitterHandle::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QSplitterHandle::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QSplitterHandle::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QSplitterHandle_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QSplitterHandle::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QSplitterHandle::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		qintptr* result_ret = result;
		intptr_t* sigval3 = static_cast<intptr_t*>(result_ret);

		bool callback_return_value = miqt_exec_callback_QSplitterHandle_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QSplitterHandle::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QSplitterHandle::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QSplitterHandle_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QSplitterHandle::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QSplitterHandle::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QSplitterHandle_Metric(const_cast<MiqtVirtualQSplitterHandle*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QSplitterHandle::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QSplitterHandle::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QSplitterHandle_InitPainter(const_cast<MiqtVirtualQSplitterHandle*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QSplitterHandle::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QSplitterHandle::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QSplitterHandle_Redirected(const_cast<MiqtVirtualQSplitterHandle*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QSplitterHandle::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QSplitterHandle::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QSplitterHandle_SharedPainter(const_cast<MiqtVirtualQSplitterHandle*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QSplitterHandle::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QSplitterHandle::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QSplitterHandle_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QSplitterHandle::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QSplitterHandle::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QSplitterHandle_InputMethodQuery(const_cast<MiqtVirtualQSplitterHandle*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QSplitterHandle::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QSplitterHandle::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QSplitterHandle_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QSplitterHandle::focusNextPrevChild(next);

	}

};

void QSplitterHandle_new(int o, QSplitter* parent, QSplitterHandle** outptr_QSplitterHandle, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQSplitterHandle* ret = new MiqtVirtualQSplitterHandle(static_cast<Qt::Orientation>(o), parent);
	*outptr_QSplitterHandle = ret;
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

QMetaObject* QSplitterHandle_MetaObject(const QSplitterHandle* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSplitterHandle_Metacast(QSplitterHandle* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSplitterHandle_Tr(const char* s) {
	QString _ret = QSplitterHandle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplitterHandle_SetOrientation(QSplitterHandle* self, int o) {
	self->setOrientation(static_cast<Qt::Orientation>(o));
}

int QSplitterHandle_Orientation(const QSplitterHandle* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

bool QSplitterHandle_OpaqueResize(const QSplitterHandle* self) {
	return self->opaqueResize();
}

QSplitter* QSplitterHandle_Splitter(const QSplitterHandle* self) {
	return self->splitter();
}

QSize* QSplitterHandle_SizeHint(const QSplitterHandle* self) {
	return new QSize(self->sizeHint());
}

struct miqt_string QSplitterHandle_Tr2(const char* s, const char* c) {
	QString _ret = QSplitterHandle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSplitterHandle_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSplitterHandle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSplitterHandle_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__SizeHint = slot;
}

QSize* QSplitterHandle_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_SizeHint();
}

void QSplitterHandle_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__PaintEvent = slot;
}

void QSplitterHandle_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_PaintEvent(param1);
}

void QSplitterHandle_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__MouseMoveEvent = slot;
}

void QSplitterHandle_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_MouseMoveEvent(param1);
}

void QSplitterHandle_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__MousePressEvent = slot;
}

void QSplitterHandle_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_MousePressEvent(param1);
}

void QSplitterHandle_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__MouseReleaseEvent = slot;
}

void QSplitterHandle_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

void QSplitterHandle_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__ResizeEvent = slot;
}

void QSplitterHandle_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_ResizeEvent(param1);
}

void QSplitterHandle_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__Event = slot;
}

bool QSplitterHandle_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_Event(param1);
}

void QSplitterHandle_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__DevType = slot;
}

int QSplitterHandle_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_DevType();
}

void QSplitterHandle_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__SetVisible = slot;
}

void QSplitterHandle_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_SetVisible(visible);
}

void QSplitterHandle_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QSplitterHandle_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_MinimumSizeHint();
}

void QSplitterHandle_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__HeightForWidth = slot;
}

int QSplitterHandle_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_HeightForWidth(param1);
}

void QSplitterHandle_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__HasHeightForWidth = slot;
}

bool QSplitterHandle_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_HasHeightForWidth();
}

void QSplitterHandle_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QSplitterHandle_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_PaintEngine();
}

void QSplitterHandle_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QSplitterHandle_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QSplitterHandle_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__WheelEvent = slot;
}

void QSplitterHandle_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_WheelEvent(event);
}

void QSplitterHandle_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__KeyPressEvent = slot;
}

void QSplitterHandle_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_KeyPressEvent(event);
}

void QSplitterHandle_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__KeyReleaseEvent = slot;
}

void QSplitterHandle_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QSplitterHandle_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__FocusInEvent = slot;
}

void QSplitterHandle_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_FocusInEvent(event);
}

void QSplitterHandle_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__FocusOutEvent = slot;
}

void QSplitterHandle_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_FocusOutEvent(event);
}

void QSplitterHandle_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__EnterEvent = slot;
}

void QSplitterHandle_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_EnterEvent(event);
}

void QSplitterHandle_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__LeaveEvent = slot;
}

void QSplitterHandle_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_LeaveEvent(event);
}

void QSplitterHandle_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__MoveEvent = slot;
}

void QSplitterHandle_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_MoveEvent(event);
}

void QSplitterHandle_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__CloseEvent = slot;
}

void QSplitterHandle_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_CloseEvent(event);
}

void QSplitterHandle_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__ContextMenuEvent = slot;
}

void QSplitterHandle_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QSplitterHandle_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__TabletEvent = slot;
}

void QSplitterHandle_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_TabletEvent(event);
}

void QSplitterHandle_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__ActionEvent = slot;
}

void QSplitterHandle_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_ActionEvent(event);
}

void QSplitterHandle_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__DragEnterEvent = slot;
}

void QSplitterHandle_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_DragEnterEvent(event);
}

void QSplitterHandle_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__DragMoveEvent = slot;
}

void QSplitterHandle_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_DragMoveEvent(event);
}

void QSplitterHandle_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__DragLeaveEvent = slot;
}

void QSplitterHandle_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QSplitterHandle_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__DropEvent = slot;
}

void QSplitterHandle_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_DropEvent(event);
}

void QSplitterHandle_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__ShowEvent = slot;
}

void QSplitterHandle_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_ShowEvent(event);
}

void QSplitterHandle_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__HideEvent = slot;
}

void QSplitterHandle_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_HideEvent(event);
}

void QSplitterHandle_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__NativeEvent = slot;
}

bool QSplitterHandle_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QSplitterHandle_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__ChangeEvent = slot;
}

void QSplitterHandle_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_ChangeEvent(param1);
}

void QSplitterHandle_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__Metric = slot;
}

int QSplitterHandle_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_Metric(param1);
}

void QSplitterHandle_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__InitPainter = slot;
}

void QSplitterHandle_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_InitPainter(painter);
}

void QSplitterHandle_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QSplitterHandle_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_Redirected(offset);
}

void QSplitterHandle_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__SharedPainter = slot;
}

QPainter* QSplitterHandle_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_SharedPainter();
}

void QSplitterHandle_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__InputMethodEvent = slot;
}

void QSplitterHandle_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QSplitterHandle_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QSplitterHandle_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQSplitterHandle*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QSplitterHandle_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSplitterHandle*>( (QSplitterHandle*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QSplitterHandle_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQSplitterHandle*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QSplitterHandle_Delete(QSplitterHandle* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQSplitterHandle*>( self );
	} else {
		delete self;
	}
}

