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

void miqt_exec_callback_QStackedLayout_widgetRemoved(intptr_t, int);
void miqt_exec_callback_QStackedLayout_currentChanged(intptr_t, int);
int miqt_exec_callback_QStackedLayout_count(const QStackedLayout*, intptr_t);
void miqt_exec_callback_QStackedLayout_addItem(QStackedLayout*, intptr_t, QLayoutItem*);
QSize* miqt_exec_callback_QStackedLayout_sizeHint(const QStackedLayout*, intptr_t);
QSize* miqt_exec_callback_QStackedLayout_minimumSize(const QStackedLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QStackedLayout_itemAt(const QStackedLayout*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QStackedLayout_takeAt(QStackedLayout*, intptr_t, int);
void miqt_exec_callback_QStackedLayout_setGeometry(QStackedLayout*, intptr_t, QRect*);
bool miqt_exec_callback_QStackedLayout_hasHeightForWidth(const QStackedLayout*, intptr_t);
int miqt_exec_callback_QStackedLayout_heightForWidth(const QStackedLayout*, intptr_t, int);
void miqt_exec_callback_QStackedLayout_invalidate(QStackedLayout*, intptr_t);
QRect* miqt_exec_callback_QStackedLayout_geometry(const QStackedLayout*, intptr_t);
int miqt_exec_callback_QStackedLayout_expandingDirections(const QStackedLayout*, intptr_t);
QSize* miqt_exec_callback_QStackedLayout_maximumSize(const QStackedLayout*, intptr_t);
int miqt_exec_callback_QStackedLayout_indexOf(const QStackedLayout*, intptr_t, QWidget*);
bool miqt_exec_callback_QStackedLayout_isEmpty(const QStackedLayout*, intptr_t);
int miqt_exec_callback_QStackedLayout_controlTypes(const QStackedLayout*, intptr_t);
QLayout* miqt_exec_callback_QStackedLayout_layout(QStackedLayout*, intptr_t);
void miqt_exec_callback_QStackedLayout_childEvent(QStackedLayout*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QStackedLayout_event(QStackedLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QStackedLayout_eventFilter(QStackedLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QStackedLayout_timerEvent(QStackedLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QStackedLayout_customEvent(QStackedLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QStackedLayout_connectNotify(QStackedLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QStackedLayout_disconnectNotify(QStackedLayout*, intptr_t, QMetaMethod*);
int miqt_exec_callback_QStackedLayout_minimumHeightForWidth(const QStackedLayout*, intptr_t, int);
QWidget* miqt_exec_callback_QStackedLayout_widget(QStackedLayout*, intptr_t);
QSpacerItem* miqt_exec_callback_QStackedLayout_spacerItem(QStackedLayout*, intptr_t);
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
	intptr_t handle__count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__count == 0) {
			return QStackedLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QStackedLayout_count(this, handle__count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_count() const {

		return QStackedLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* item) override {
		if (handle__addItem == 0) {
			QStackedLayout::addItem(item);
			return;
		}
		
		QLayoutItem* sigval1 = item;

		miqt_exec_callback_QStackedLayout_addItem(this, handle__addItem, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_addItem(QLayoutItem* item) {

		QStackedLayout::addItem(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QStackedLayout::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QStackedLayout_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QStackedLayout::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (handle__minimumSize == 0) {
			return QStackedLayout::minimumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QStackedLayout_minimumSize(this, handle__minimumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSize() const {

		return new QSize(QStackedLayout::minimumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int param1) const override {
		if (handle__itemAt == 0) {
			return QStackedLayout::itemAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QStackedLayout_itemAt(this, handle__itemAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_itemAt(int param1) const {

		return QStackedLayout::itemAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__takeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int param1) override {
		if (handle__takeAt == 0) {
			return QStackedLayout::takeAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QStackedLayout_takeAt(this, handle__takeAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_takeAt(int param1) {

		return QStackedLayout::takeAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& rect) override {
		if (handle__setGeometry == 0) {
			QStackedLayout::setGeometry(rect);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);

		miqt_exec_callback_QStackedLayout_setGeometry(this, handle__setGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setGeometry(QRect* rect) {

		QStackedLayout::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QStackedLayout::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QStackedLayout_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QStackedLayout::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int width) const override {
		if (handle__heightForWidth == 0) {
			return QStackedLayout::heightForWidth(width);
		}
		
		int sigval1 = width;

		int callback_return_value = miqt_exec_callback_QStackedLayout_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int width) const {

		return QStackedLayout::heightForWidth(static_cast<int>(width));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__invalidate == 0) {
			QStackedLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QStackedLayout_invalidate(this, handle__invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_invalidate() {

		QStackedLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__geometry = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (handle__geometry == 0) {
			return QStackedLayout::geometry();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QStackedLayout_geometry(this, handle__geometry);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_geometry() const {

		return new QRect(QStackedLayout::geometry());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__expandingDirections = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (handle__expandingDirections == 0) {
			return QStackedLayout::expandingDirections();
		}
		

		int callback_return_value = miqt_exec_callback_QStackedLayout_expandingDirections(this, handle__expandingDirections);

		return static_cast<Qt::Orientations>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_expandingDirections() const {

		Qt::Orientations _ret = QStackedLayout::expandingDirections();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__maximumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (handle__maximumSize == 0) {
			return QStackedLayout::maximumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QStackedLayout_maximumSize(this, handle__maximumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_maximumSize() const {

		return new QSize(QStackedLayout::maximumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(QWidget* param1) const override {
		if (handle__indexOf == 0) {
			return QStackedLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QStackedLayout_indexOf(this, handle__indexOf, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_indexOf(QWidget* param1) const {

		return QStackedLayout::indexOf(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__isEmpty == 0) {
			return QStackedLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QStackedLayout_isEmpty(this, handle__isEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isEmpty() const {

		return QStackedLayout::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__controlTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (handle__controlTypes == 0) {
			return QStackedLayout::controlTypes();
		}
		

		int callback_return_value = miqt_exec_callback_QStackedLayout_controlTypes(this, handle__controlTypes);

		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_controlTypes() const {

		QSizePolicy::ControlTypes _ret = QStackedLayout::controlTypes();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__layout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (handle__layout == 0) {
			return QStackedLayout::layout();
		}
		

		QLayout* callback_return_value = miqt_exec_callback_QStackedLayout_layout(this, handle__layout);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayout* virtualbase_layout() {

		return QStackedLayout::layout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (handle__childEvent == 0) {
			QStackedLayout::childEvent(e);
			return;
		}
		
		QChildEvent* sigval1 = e;

		miqt_exec_callback_QStackedLayout_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* e) {

		QStackedLayout::childEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QStackedLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QStackedLayout_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QStackedLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QStackedLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QStackedLayout_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QStackedLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QStackedLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QStackedLayout_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QStackedLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QStackedLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStackedLayout_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QStackedLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QStackedLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStackedLayout_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QStackedLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QStackedLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStackedLayout_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QStackedLayout::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (handle__minimumHeightForWidth == 0) {
			return QStackedLayout::minimumHeightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QStackedLayout_minimumHeightForWidth(this, handle__minimumHeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_minimumHeightForWidth(int param1) const {

		return QStackedLayout::minimumHeightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() override {
		if (handle__widget == 0) {
			return QStackedLayout::widget();
		}
		

		QWidget* callback_return_value = miqt_exec_callback_QStackedLayout_widget(this, handle__widget);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_widget() {

		return QStackedLayout::widget();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__spacerItem = 0;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (handle__spacerItem == 0) {
			return QStackedLayout::spacerItem();
		}
		

		QSpacerItem* callback_return_value = miqt_exec_callback_QStackedLayout_spacerItem(this, handle__spacerItem);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSpacerItem* virtualbase_spacerItem() {

		return QStackedLayout::spacerItem();

	}

	// Wrappers to allow calling protected methods:
	friend void QStackedLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
	friend void QStackedLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
	friend void QStackedLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
	friend bool QStackedLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
	friend QRect* QStackedLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
	friend QObject* QStackedLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QStackedLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QStackedLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QStackedLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QStackedLayout_metaObject(const QStackedLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStackedLayout_metacast(QStackedLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStackedLayout_tr(const char* s) {
	QString _ret = QStackedLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedLayout_trUtf8(const char* s) {
	QString _ret = QStackedLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QStackedLayout_addWidget(QStackedLayout* self, QWidget* w) {
	return self->addWidget(w);
}

int QStackedLayout_insertWidget(QStackedLayout* self, int index, QWidget* w) {
	return self->insertWidget(static_cast<int>(index), w);
}

QWidget* QStackedLayout_currentWidget(const QStackedLayout* self) {
	return self->currentWidget();
}

int QStackedLayout_currentIndex(const QStackedLayout* self) {
	return self->currentIndex();
}

QWidget* QStackedLayout_widget(const QStackedLayout* self, int param1) {
	return self->widget(static_cast<int>(param1));
}

int QStackedLayout_count(const QStackedLayout* self) {
	return self->count();
}

int QStackedLayout_stackingMode(const QStackedLayout* self) {
	QStackedLayout::StackingMode _ret = self->stackingMode();
	return static_cast<int>(_ret);
}

void QStackedLayout_setStackingMode(QStackedLayout* self, int stackingMode) {
	self->setStackingMode(static_cast<QStackedLayout::StackingMode>(stackingMode));
}

void QStackedLayout_addItem(QStackedLayout* self, QLayoutItem* item) {
	self->addItem(item);
}

QSize* QStackedLayout_sizeHint(const QStackedLayout* self) {
	return new QSize(self->sizeHint());
}

QSize* QStackedLayout_minimumSize(const QStackedLayout* self) {
	return new QSize(self->minimumSize());
}

QLayoutItem* QStackedLayout_itemAt(const QStackedLayout* self, int param1) {
	return self->itemAt(static_cast<int>(param1));
}

QLayoutItem* QStackedLayout_takeAt(QStackedLayout* self, int param1) {
	return self->takeAt(static_cast<int>(param1));
}

void QStackedLayout_setGeometry(QStackedLayout* self, QRect* rect) {
	self->setGeometry(*rect);
}

bool QStackedLayout_hasHeightForWidth(const QStackedLayout* self) {
	return self->hasHeightForWidth();
}

int QStackedLayout_heightForWidth(const QStackedLayout* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

void QStackedLayout_widgetRemoved(QStackedLayout* self, int index) {
	self->widgetRemoved(static_cast<int>(index));
}

void QStackedLayout_connect_widgetRemoved(QStackedLayout* self, intptr_t slot) {
	MiqtVirtualQStackedLayout::connect(self, static_cast<void (QStackedLayout::*)(int)>(&QStackedLayout::widgetRemoved), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QStackedLayout_widgetRemoved(slot, sigval1);
	});
}

void QStackedLayout_currentChanged(QStackedLayout* self, int index) {
	self->currentChanged(static_cast<int>(index));
}

void QStackedLayout_connect_currentChanged(QStackedLayout* self, intptr_t slot) {
	MiqtVirtualQStackedLayout::connect(self, static_cast<void (QStackedLayout::*)(int)>(&QStackedLayout::currentChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QStackedLayout_currentChanged(slot, sigval1);
	});
}

void QStackedLayout_setCurrentIndex(QStackedLayout* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QStackedLayout_setCurrentWidget(QStackedLayout* self, QWidget* w) {
	self->setCurrentWidget(w);
}

struct miqt_string QStackedLayout_tr2(const char* s, const char* c) {
	QString _ret = QStackedLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedLayout_tr3(const char* s, const char* c, int n) {
	QString _ret = QStackedLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedLayout_trUtf82(const char* s, const char* c) {
	QString _ret = QStackedLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedLayout_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QStackedLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QStackedLayout_override_virtual_count(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__count = slot;
	return true;
}

int QStackedLayout_virtualbase_count(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_count();
}

bool QStackedLayout_override_virtual_addItem(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__addItem = slot;
	return true;
}

void QStackedLayout_virtualbase_addItem(void* self, QLayoutItem* item) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_addItem(item);
}

bool QStackedLayout_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QStackedLayout_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_sizeHint();
}

bool QStackedLayout_override_virtual_minimumSize(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSize = slot;
	return true;
}

QSize* QStackedLayout_virtualbase_minimumSize(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_minimumSize();
}

bool QStackedLayout_override_virtual_itemAt(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemAt = slot;
	return true;
}

QLayoutItem* QStackedLayout_virtualbase_itemAt(const void* self, int param1) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_itemAt(param1);
}

bool QStackedLayout_override_virtual_takeAt(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__takeAt = slot;
	return true;
}

QLayoutItem* QStackedLayout_virtualbase_takeAt(void* self, int param1) {
	return ( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_takeAt(param1);
}

bool QStackedLayout_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setGeometry = slot;
	return true;
}

void QStackedLayout_virtualbase_setGeometry(void* self, QRect* rect) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_setGeometry(rect);
}

bool QStackedLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QStackedLayout_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_hasHeightForWidth();
}

bool QStackedLayout_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QStackedLayout_virtualbase_heightForWidth(const void* self, int width) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_heightForWidth(width);
}

bool QStackedLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__invalidate = slot;
	return true;
}

void QStackedLayout_virtualbase_invalidate(void* self) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_invalidate();
}

bool QStackedLayout_override_virtual_geometry(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__geometry = slot;
	return true;
}

QRect* QStackedLayout_virtualbase_geometry(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_geometry();
}

bool QStackedLayout_override_virtual_expandingDirections(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__expandingDirections = slot;
	return true;
}

int QStackedLayout_virtualbase_expandingDirections(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_expandingDirections();
}

bool QStackedLayout_override_virtual_maximumSize(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__maximumSize = slot;
	return true;
}

QSize* QStackedLayout_virtualbase_maximumSize(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_maximumSize();
}

bool QStackedLayout_override_virtual_indexOf(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indexOf = slot;
	return true;
}

int QStackedLayout_virtualbase_indexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_indexOf(param1);
}

bool QStackedLayout_override_virtual_isEmpty(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isEmpty = slot;
	return true;
}

bool QStackedLayout_virtualbase_isEmpty(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_isEmpty();
}

bool QStackedLayout_override_virtual_controlTypes(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__controlTypes = slot;
	return true;
}

int QStackedLayout_virtualbase_controlTypes(const void* self) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_controlTypes();
}

bool QStackedLayout_override_virtual_layout(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__layout = slot;
	return true;
}

QLayout* QStackedLayout_virtualbase_layout(void* self) {
	return ( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_layout();
}

bool QStackedLayout_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QStackedLayout_virtualbase_childEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_childEvent(e);
}

bool QStackedLayout_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QStackedLayout_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_event(event);
}

bool QStackedLayout_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QStackedLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QStackedLayout_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QStackedLayout_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_timerEvent(event);
}

bool QStackedLayout_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QStackedLayout_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_customEvent(event);
}

bool QStackedLayout_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QStackedLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_connectNotify(signal);
}

bool QStackedLayout_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QStackedLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_disconnectNotify(signal);
}

bool QStackedLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumHeightForWidth = slot;
	return true;
}

int QStackedLayout_virtualbase_minimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQStackedLayout*)(self) )->virtualbase_minimumHeightForWidth(param1);
}

bool QStackedLayout_override_virtual_widget(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__widget = slot;
	return true;
}

QWidget* QStackedLayout_virtualbase_widget(void* self) {
	return ( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_widget();
}

bool QStackedLayout_override_virtual_spacerItem(void* self, intptr_t slot) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__spacerItem = slot;
	return true;
}

QSpacerItem* QStackedLayout_virtualbase_spacerItem(void* self) {
	return ( (MiqtVirtualQStackedLayout*)(self) )->virtualbase_spacerItem();
}

void QStackedLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->widgetEvent(param1);

}

void QStackedLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildLayout(l);

}

void QStackedLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildWidget(w);

}

bool QStackedLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->adoptLayout(layout);

}

QRect* QStackedLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRect(self_cast->alignmentRect(*param1));

}

QObject* QStackedLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QStackedLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QStackedLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QStackedLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QStackedLayout_delete(QStackedLayout* self) {
	delete self;
}

