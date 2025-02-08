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

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QLayout_invalidate(QLayout*, intptr_t);
QRect* miqt_exec_callback_QLayout_geometry(const QLayout*, intptr_t);
void miqt_exec_callback_QLayout_addItem(QLayout*, intptr_t, QLayoutItem*);
int miqt_exec_callback_QLayout_expandingDirections(const QLayout*, intptr_t);
QSize* miqt_exec_callback_QLayout_minimumSize(const QLayout*, intptr_t);
QSize* miqt_exec_callback_QLayout_maximumSize(const QLayout*, intptr_t);
void miqt_exec_callback_QLayout_setGeometry(QLayout*, intptr_t, QRect*);
QLayoutItem* miqt_exec_callback_QLayout_itemAt(const QLayout*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QLayout_takeAt(QLayout*, intptr_t, int);
int miqt_exec_callback_QLayout_indexOf(const QLayout*, intptr_t, QWidget*);
int miqt_exec_callback_QLayout_count(const QLayout*, intptr_t);
bool miqt_exec_callback_QLayout_isEmpty(const QLayout*, intptr_t);
int miqt_exec_callback_QLayout_controlTypes(const QLayout*, intptr_t);
QLayout* miqt_exec_callback_QLayout_layout(QLayout*, intptr_t);
void miqt_exec_callback_QLayout_childEvent(QLayout*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QLayout_event(QLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QLayout_eventFilter(QLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QLayout_timerEvent(QLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QLayout_customEvent(QLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QLayout_connectNotify(QLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QLayout_disconnectNotify(QLayout*, intptr_t, QMetaMethod*);
QSize* miqt_exec_callback_QLayout_sizeHint(const QLayout*, intptr_t);
bool miqt_exec_callback_QLayout_hasHeightForWidth(const QLayout*, intptr_t);
int miqt_exec_callback_QLayout_heightForWidth(const QLayout*, intptr_t, int);
int miqt_exec_callback_QLayout_minimumHeightForWidth(const QLayout*, intptr_t, int);
QWidget* miqt_exec_callback_QLayout_widget(QLayout*, intptr_t);
QSpacerItem* miqt_exec_callback_QLayout_spacerItem(QLayout*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQLayout final : public QLayout {
public:

	MiqtVirtualQLayout(QWidget* parent): QLayout(parent) {};
	MiqtVirtualQLayout(): QLayout() {};

	virtual ~MiqtVirtualQLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__invalidate == 0) {
			QLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QLayout_invalidate(this, handle__invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_invalidate() {

		QLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__geometry = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (handle__geometry == 0) {
			return QLayout::geometry();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QLayout_geometry(this, handle__geometry);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_geometry() const {

		return new QRect(QLayout::geometry());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* param1) override {
		if (handle__addItem == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QLayoutItem* sigval1 = param1;

		miqt_exec_callback_QLayout_addItem(this, handle__addItem, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__expandingDirections = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (handle__expandingDirections == 0) {
			return QLayout::expandingDirections();
		}
		

		int callback_return_value = miqt_exec_callback_QLayout_expandingDirections(this, handle__expandingDirections);

		return static_cast<Qt::Orientations>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_expandingDirections() const {

		Qt::Orientations _ret = QLayout::expandingDirections();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (handle__minimumSize == 0) {
			return QLayout::minimumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLayout_minimumSize(this, handle__minimumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSize() const {

		return new QSize(QLayout::minimumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__maximumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (handle__maximumSize == 0) {
			return QLayout::maximumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLayout_maximumSize(this, handle__maximumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_maximumSize() const {

		return new QSize(QLayout::maximumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& geometry) override {
		if (handle__setGeometry == 0) {
			QLayout::setGeometry(geometry);
			return;
		}
		
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);

		miqt_exec_callback_QLayout_setGeometry(this, handle__setGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setGeometry(QRect* geometry) {

		QLayout::setGeometry(*geometry);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int index) const override {
		if (handle__itemAt == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = index;

		QLayoutItem* callback_return_value = miqt_exec_callback_QLayout_itemAt(this, handle__itemAt, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__takeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int index) override {
		if (handle__takeAt == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = index;

		QLayoutItem* callback_return_value = miqt_exec_callback_QLayout_takeAt(this, handle__takeAt, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(QWidget* param1) const override {
		if (handle__indexOf == 0) {
			return QLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QLayout_indexOf(this, handle__indexOf, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_indexOf(QWidget* param1) const {

		return QLayout::indexOf(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__count == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QLayout_count(this, handle__count);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__isEmpty == 0) {
			return QLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QLayout_isEmpty(this, handle__isEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isEmpty() const {

		return QLayout::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__controlTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (handle__controlTypes == 0) {
			return QLayout::controlTypes();
		}
		

		int callback_return_value = miqt_exec_callback_QLayout_controlTypes(this, handle__controlTypes);

		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_controlTypes() const {

		QSizePolicy::ControlTypes _ret = QLayout::controlTypes();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__layout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (handle__layout == 0) {
			return QLayout::layout();
		}
		

		QLayout* callback_return_value = miqt_exec_callback_QLayout_layout(this, handle__layout);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayout* virtualbase_layout() {

		return QLayout::layout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (handle__childEvent == 0) {
			QLayout::childEvent(e);
			return;
		}
		
		QChildEvent* sigval1 = e;

		miqt_exec_callback_QLayout_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* e) {

		QLayout::childEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QLayout_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QLayout_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QLayout_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLayout_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLayout_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLayout_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QLayout::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QSize(); // Pure virtual, there is no base we can call
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLayout_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QLayout::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QLayout_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QLayout::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QLayout::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QLayout_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QLayout::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (handle__minimumHeightForWidth == 0) {
			return QLayout::minimumHeightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QLayout_minimumHeightForWidth(this, handle__minimumHeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_minimumHeightForWidth(int param1) const {

		return QLayout::minimumHeightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() override {
		if (handle__widget == 0) {
			return QLayout::widget();
		}
		

		QWidget* callback_return_value = miqt_exec_callback_QLayout_widget(this, handle__widget);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_widget() {

		return QLayout::widget();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__spacerItem = 0;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (handle__spacerItem == 0) {
			return QLayout::spacerItem();
		}
		

		QSpacerItem* callback_return_value = miqt_exec_callback_QLayout_spacerItem(this, handle__spacerItem);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSpacerItem* virtualbase_spacerItem() {

		return QLayout::spacerItem();

	}

	// Wrappers to allow calling protected methods:
	friend void QLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
	friend void QLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
	friend void QLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
	friend bool QLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
	friend QRect* QLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
	friend QObject* QLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QLayout* QLayout_new(QWidget* parent) {
	return new MiqtVirtualQLayout(parent);
}

QLayout* QLayout_new2() {
	return new MiqtVirtualQLayout();
}

void QLayout_virtbase(QLayout* src, QObject** outptr_QObject, QLayoutItem** outptr_QLayoutItem) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QLayoutItem = static_cast<QLayoutItem*>(src);
}

QMetaObject* QLayout_metaObject(const QLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLayout_metacast(QLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLayout_tr(const char* s) {
	QString _ret = QLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLayout_trUtf8(const char* s) {
	QString _ret = QLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QLayout_margin(const QLayout* self) {
	return self->margin();
}

void QLayout_setMargin(QLayout* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

int QLayout_spacing(const QLayout* self) {
	return self->spacing();
}

void QLayout_setSpacing(QLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

void QLayout_setContentsMargins(QLayout* self, int left, int top, int right, int bottom) {
	self->setContentsMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

void QLayout_setContentsMarginsWithMargins(QLayout* self, QMargins* margins) {
	self->setContentsMargins(*margins);
}

void QLayout_getContentsMargins(const QLayout* self, int* left, int* top, int* right, int* bottom) {
	self->getContentsMargins(static_cast<int*>(left), static_cast<int*>(top), static_cast<int*>(right), static_cast<int*>(bottom));
}

QMargins* QLayout_contentsMargins(const QLayout* self) {
	return new QMargins(self->contentsMargins());
}

QRect* QLayout_contentsRect(const QLayout* self) {
	return new QRect(self->contentsRect());
}

bool QLayout_setAlignment(QLayout* self, QWidget* w, int alignment) {
	return self->setAlignment(w, static_cast<Qt::Alignment>(alignment));
}

bool QLayout_setAlignment2(QLayout* self, QLayout* l, int alignment) {
	return self->setAlignment(l, static_cast<Qt::Alignment>(alignment));
}

void QLayout_setSizeConstraint(QLayout* self, int sizeConstraint) {
	self->setSizeConstraint(static_cast<QLayout::SizeConstraint>(sizeConstraint));
}

int QLayout_sizeConstraint(const QLayout* self) {
	QLayout::SizeConstraint _ret = self->sizeConstraint();
	return static_cast<int>(_ret);
}

void QLayout_setMenuBar(QLayout* self, QWidget* w) {
	self->setMenuBar(w);
}

QWidget* QLayout_menuBar(const QLayout* self) {
	return self->menuBar();
}

QWidget* QLayout_parentWidget(const QLayout* self) {
	return self->parentWidget();
}

void QLayout_invalidate(QLayout* self) {
	self->invalidate();
}

QRect* QLayout_geometry(const QLayout* self) {
	return new QRect(self->geometry());
}

bool QLayout_activate(QLayout* self) {
	return self->activate();
}

void QLayout_update(QLayout* self) {
	self->update();
}

void QLayout_addWidget(QLayout* self, QWidget* w) {
	self->addWidget(w);
}

void QLayout_addItem(QLayout* self, QLayoutItem* param1) {
	self->addItem(param1);
}

void QLayout_removeWidget(QLayout* self, QWidget* w) {
	self->removeWidget(w);
}

void QLayout_removeItem(QLayout* self, QLayoutItem* param1) {
	self->removeItem(param1);
}

int QLayout_expandingDirections(const QLayout* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

QSize* QLayout_minimumSize(const QLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QLayout_maximumSize(const QLayout* self) {
	return new QSize(self->maximumSize());
}

void QLayout_setGeometry(QLayout* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QLayoutItem* QLayout_itemAt(const QLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QLayout_takeAt(QLayout* self, int index) {
	return self->takeAt(static_cast<int>(index));
}

int QLayout_indexOf(const QLayout* self, QWidget* param1) {
	return self->indexOf(param1);
}

int QLayout_indexOfWithQLayoutItem(const QLayout* self, QLayoutItem* param1) {
	return self->indexOf(param1);
}

int QLayout_count(const QLayout* self) {
	return self->count();
}

bool QLayout_isEmpty(const QLayout* self) {
	return self->isEmpty();
}

int QLayout_controlTypes(const QLayout* self) {
	QSizePolicy::ControlTypes _ret = self->controlTypes();
	return static_cast<int>(_ret);
}

QLayoutItem* QLayout_replaceWidget(QLayout* self, QWidget* from, QWidget* to) {
	return self->replaceWidget(from, to);
}

int QLayout_totalHeightForWidth(const QLayout* self, int w) {
	return self->totalHeightForWidth(static_cast<int>(w));
}

QSize* QLayout_totalMinimumSize(const QLayout* self) {
	return new QSize(self->totalMinimumSize());
}

QSize* QLayout_totalMaximumSize(const QLayout* self) {
	return new QSize(self->totalMaximumSize());
}

QSize* QLayout_totalSizeHint(const QLayout* self) {
	return new QSize(self->totalSizeHint());
}

QLayout* QLayout_layout(QLayout* self) {
	return self->layout();
}

void QLayout_setEnabled(QLayout* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QLayout_isEnabled(const QLayout* self) {
	return self->isEnabled();
}

QSize* QLayout_closestAcceptableSize(QWidget* w, QSize* s) {
	return new QSize(QLayout::closestAcceptableSize(w, *s));
}

struct miqt_string QLayout_tr2(const char* s, const char* c) {
	QString _ret = QLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLayout_tr3(const char* s, const char* c, int n) {
	QString _ret = QLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLayout_trUtf82(const char* s, const char* c) {
	QString _ret = QLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLayout_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QLayoutItem* QLayout_replaceWidget3(QLayout* self, QWidget* from, QWidget* to, int options) {
	return self->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

bool QLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__invalidate = slot;
	return true;
}

void QLayout_virtualbase_invalidate(void* self) {
	( (MiqtVirtualQLayout*)(self) )->virtualbase_invalidate();
}

bool QLayout_override_virtual_geometry(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__geometry = slot;
	return true;
}

QRect* QLayout_virtualbase_geometry(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_geometry();
}

bool QLayout_override_virtual_addItem(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__addItem = slot;
	return true;
}

bool QLayout_override_virtual_expandingDirections(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__expandingDirections = slot;
	return true;
}

int QLayout_virtualbase_expandingDirections(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_expandingDirections();
}

bool QLayout_override_virtual_minimumSize(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSize = slot;
	return true;
}

QSize* QLayout_virtualbase_minimumSize(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_minimumSize();
}

bool QLayout_override_virtual_maximumSize(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__maximumSize = slot;
	return true;
}

QSize* QLayout_virtualbase_maximumSize(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_maximumSize();
}

bool QLayout_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setGeometry = slot;
	return true;
}

void QLayout_virtualbase_setGeometry(void* self, QRect* geometry) {
	( (MiqtVirtualQLayout*)(self) )->virtualbase_setGeometry(geometry);
}

bool QLayout_override_virtual_itemAt(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemAt = slot;
	return true;
}

bool QLayout_override_virtual_takeAt(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__takeAt = slot;
	return true;
}

bool QLayout_override_virtual_indexOf(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indexOf = slot;
	return true;
}

int QLayout_virtualbase_indexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_indexOf(param1);
}

bool QLayout_override_virtual_count(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__count = slot;
	return true;
}

bool QLayout_override_virtual_isEmpty(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isEmpty = slot;
	return true;
}

bool QLayout_virtualbase_isEmpty(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_isEmpty();
}

bool QLayout_override_virtual_controlTypes(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__controlTypes = slot;
	return true;
}

int QLayout_virtualbase_controlTypes(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_controlTypes();
}

bool QLayout_override_virtual_layout(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__layout = slot;
	return true;
}

QLayout* QLayout_virtualbase_layout(void* self) {
	return ( (MiqtVirtualQLayout*)(self) )->virtualbase_layout();
}

bool QLayout_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QLayout_virtualbase_childEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQLayout*)(self) )->virtualbase_childEvent(e);
}

bool QLayout_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QLayout_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQLayout*)(self) )->virtualbase_event(event);
}

bool QLayout_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQLayout*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QLayout_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QLayout_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQLayout*)(self) )->virtualbase_timerEvent(event);
}

bool QLayout_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QLayout_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQLayout*)(self) )->virtualbase_customEvent(event);
}

bool QLayout_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLayout*)(self) )->virtualbase_connectNotify(signal);
}

bool QLayout_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLayout*)(self) )->virtualbase_disconnectNotify(signal);
}

bool QLayout_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

bool QLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QLayout_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_hasHeightForWidth();
}

bool QLayout_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QLayout_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_heightForWidth(param1);
}

bool QLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumHeightForWidth = slot;
	return true;
}

int QLayout_virtualbase_minimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQLayout*)(self) )->virtualbase_minimumHeightForWidth(param1);
}

bool QLayout_override_virtual_widget(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__widget = slot;
	return true;
}

QWidget* QLayout_virtualbase_widget(void* self) {
	return ( (MiqtVirtualQLayout*)(self) )->virtualbase_widget();
}

bool QLayout_override_virtual_spacerItem(void* self, intptr_t slot) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__spacerItem = slot;
	return true;
}

QSpacerItem* QLayout_virtualbase_spacerItem(void* self) {
	return ( (MiqtVirtualQLayout*)(self) )->virtualbase_spacerItem();
}

void QLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->widgetEvent(param1);

}

void QLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildLayout(l);

}

void QLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildWidget(w);

}

bool QLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->adoptLayout(layout);

}

QRect* QLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRect(self_cast->alignmentRect(*param1));

}

QObject* QLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQLayout* self_cast = dynamic_cast<MiqtVirtualQLayout*>( (QLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QLayout_delete(QLayout* self) {
	delete self;
}

