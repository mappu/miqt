#include <QBoxLayout>
#include <QChildEvent>
#include <QEvent>
#include <QHBoxLayout>
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
#include <QVBoxLayout>
#include <QWidget>
#include <qboxlayout.h>
#include "gen_qboxlayout.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QBoxLayout_addItem(QBoxLayout*, intptr_t, QLayoutItem*);
QSize* miqt_exec_callback_QBoxLayout_sizeHint(const QBoxLayout*, intptr_t);
QSize* miqt_exec_callback_QBoxLayout_minimumSize(const QBoxLayout*, intptr_t);
QSize* miqt_exec_callback_QBoxLayout_maximumSize(const QBoxLayout*, intptr_t);
bool miqt_exec_callback_QBoxLayout_hasHeightForWidth(const QBoxLayout*, intptr_t);
int miqt_exec_callback_QBoxLayout_heightForWidth(const QBoxLayout*, intptr_t, int);
int miqt_exec_callback_QBoxLayout_minimumHeightForWidth(const QBoxLayout*, intptr_t, int);
int miqt_exec_callback_QBoxLayout_expandingDirections(const QBoxLayout*, intptr_t);
void miqt_exec_callback_QBoxLayout_invalidate(QBoxLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QBoxLayout_itemAt(const QBoxLayout*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QBoxLayout_takeAt(QBoxLayout*, intptr_t, int);
int miqt_exec_callback_QBoxLayout_count(const QBoxLayout*, intptr_t);
void miqt_exec_callback_QBoxLayout_setGeometry(QBoxLayout*, intptr_t, QRect*);
QRect* miqt_exec_callback_QBoxLayout_geometry(const QBoxLayout*, intptr_t);
int miqt_exec_callback_QBoxLayout_indexOf(const QBoxLayout*, intptr_t, QWidget*);
bool miqt_exec_callback_QBoxLayout_isEmpty(const QBoxLayout*, intptr_t);
int miqt_exec_callback_QBoxLayout_controlTypes(const QBoxLayout*, intptr_t);
QLayout* miqt_exec_callback_QBoxLayout_layout(QBoxLayout*, intptr_t);
void miqt_exec_callback_QBoxLayout_childEvent(QBoxLayout*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QBoxLayout_event(QBoxLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QBoxLayout_eventFilter(QBoxLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QBoxLayout_timerEvent(QBoxLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QBoxLayout_customEvent(QBoxLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QBoxLayout_connectNotify(QBoxLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QBoxLayout_disconnectNotify(QBoxLayout*, intptr_t, QMetaMethod*);
QWidget* miqt_exec_callback_QBoxLayout_widget(QBoxLayout*, intptr_t);
QSpacerItem* miqt_exec_callback_QBoxLayout_spacerItem(QBoxLayout*, intptr_t);
void miqt_exec_callback_QHBoxLayout_addItem(QHBoxLayout*, intptr_t, QLayoutItem*);
QSize* miqt_exec_callback_QHBoxLayout_sizeHint(const QHBoxLayout*, intptr_t);
QSize* miqt_exec_callback_QHBoxLayout_minimumSize(const QHBoxLayout*, intptr_t);
QSize* miqt_exec_callback_QHBoxLayout_maximumSize(const QHBoxLayout*, intptr_t);
bool miqt_exec_callback_QHBoxLayout_hasHeightForWidth(const QHBoxLayout*, intptr_t);
int miqt_exec_callback_QHBoxLayout_heightForWidth(const QHBoxLayout*, intptr_t, int);
int miqt_exec_callback_QHBoxLayout_minimumHeightForWidth(const QHBoxLayout*, intptr_t, int);
int miqt_exec_callback_QHBoxLayout_expandingDirections(const QHBoxLayout*, intptr_t);
void miqt_exec_callback_QHBoxLayout_invalidate(QHBoxLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QHBoxLayout_itemAt(const QHBoxLayout*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QHBoxLayout_takeAt(QHBoxLayout*, intptr_t, int);
int miqt_exec_callback_QHBoxLayout_count(const QHBoxLayout*, intptr_t);
void miqt_exec_callback_QHBoxLayout_setGeometry(QHBoxLayout*, intptr_t, QRect*);
QRect* miqt_exec_callback_QHBoxLayout_geometry(const QHBoxLayout*, intptr_t);
int miqt_exec_callback_QHBoxLayout_indexOf(const QHBoxLayout*, intptr_t, QWidget*);
bool miqt_exec_callback_QHBoxLayout_isEmpty(const QHBoxLayout*, intptr_t);
int miqt_exec_callback_QHBoxLayout_controlTypes(const QHBoxLayout*, intptr_t);
QLayout* miqt_exec_callback_QHBoxLayout_layout(QHBoxLayout*, intptr_t);
void miqt_exec_callback_QHBoxLayout_childEvent(QHBoxLayout*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QHBoxLayout_event(QHBoxLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QHBoxLayout_eventFilter(QHBoxLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QHBoxLayout_timerEvent(QHBoxLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHBoxLayout_customEvent(QHBoxLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QHBoxLayout_connectNotify(QHBoxLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QHBoxLayout_disconnectNotify(QHBoxLayout*, intptr_t, QMetaMethod*);
QWidget* miqt_exec_callback_QHBoxLayout_widget(QHBoxLayout*, intptr_t);
QSpacerItem* miqt_exec_callback_QHBoxLayout_spacerItem(QHBoxLayout*, intptr_t);
void miqt_exec_callback_QVBoxLayout_addItem(QVBoxLayout*, intptr_t, QLayoutItem*);
QSize* miqt_exec_callback_QVBoxLayout_sizeHint(const QVBoxLayout*, intptr_t);
QSize* miqt_exec_callback_QVBoxLayout_minimumSize(const QVBoxLayout*, intptr_t);
QSize* miqt_exec_callback_QVBoxLayout_maximumSize(const QVBoxLayout*, intptr_t);
bool miqt_exec_callback_QVBoxLayout_hasHeightForWidth(const QVBoxLayout*, intptr_t);
int miqt_exec_callback_QVBoxLayout_heightForWidth(const QVBoxLayout*, intptr_t, int);
int miqt_exec_callback_QVBoxLayout_minimumHeightForWidth(const QVBoxLayout*, intptr_t, int);
int miqt_exec_callback_QVBoxLayout_expandingDirections(const QVBoxLayout*, intptr_t);
void miqt_exec_callback_QVBoxLayout_invalidate(QVBoxLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QVBoxLayout_itemAt(const QVBoxLayout*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QVBoxLayout_takeAt(QVBoxLayout*, intptr_t, int);
int miqt_exec_callback_QVBoxLayout_count(const QVBoxLayout*, intptr_t);
void miqt_exec_callback_QVBoxLayout_setGeometry(QVBoxLayout*, intptr_t, QRect*);
QRect* miqt_exec_callback_QVBoxLayout_geometry(const QVBoxLayout*, intptr_t);
int miqt_exec_callback_QVBoxLayout_indexOf(const QVBoxLayout*, intptr_t, QWidget*);
bool miqt_exec_callback_QVBoxLayout_isEmpty(const QVBoxLayout*, intptr_t);
int miqt_exec_callback_QVBoxLayout_controlTypes(const QVBoxLayout*, intptr_t);
QLayout* miqt_exec_callback_QVBoxLayout_layout(QVBoxLayout*, intptr_t);
void miqt_exec_callback_QVBoxLayout_childEvent(QVBoxLayout*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QVBoxLayout_event(QVBoxLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QVBoxLayout_eventFilter(QVBoxLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QVBoxLayout_timerEvent(QVBoxLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QVBoxLayout_customEvent(QVBoxLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QVBoxLayout_connectNotify(QVBoxLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QVBoxLayout_disconnectNotify(QVBoxLayout*, intptr_t, QMetaMethod*);
QWidget* miqt_exec_callback_QVBoxLayout_widget(QVBoxLayout*, intptr_t);
QSpacerItem* miqt_exec_callback_QVBoxLayout_spacerItem(QVBoxLayout*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQBoxLayout final : public QBoxLayout {
public:

	MiqtVirtualQBoxLayout(QBoxLayout::Direction param1): QBoxLayout(param1) {};
	MiqtVirtualQBoxLayout(QBoxLayout::Direction param1, QWidget* parent): QBoxLayout(param1, parent) {};

	virtual ~MiqtVirtualQBoxLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* param1) override {
		if (handle__addItem == 0) {
			QBoxLayout::addItem(param1);
			return;
		}
		
		QLayoutItem* sigval1 = param1;

		miqt_exec_callback_QBoxLayout_addItem(this, handle__addItem, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_addItem(QLayoutItem* param1) {

		QBoxLayout::addItem(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QBoxLayout::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QBoxLayout_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QBoxLayout::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (handle__minimumSize == 0) {
			return QBoxLayout::minimumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QBoxLayout_minimumSize(this, handle__minimumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSize() const {

		return new QSize(QBoxLayout::minimumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__maximumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (handle__maximumSize == 0) {
			return QBoxLayout::maximumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QBoxLayout_maximumSize(this, handle__maximumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_maximumSize() const {

		return new QSize(QBoxLayout::maximumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QBoxLayout::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QBoxLayout_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QBoxLayout::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QBoxLayout::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QBoxLayout_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QBoxLayout::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (handle__minimumHeightForWidth == 0) {
			return QBoxLayout::minimumHeightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QBoxLayout_minimumHeightForWidth(this, handle__minimumHeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_minimumHeightForWidth(int param1) const {

		return QBoxLayout::minimumHeightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__expandingDirections = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (handle__expandingDirections == 0) {
			return QBoxLayout::expandingDirections();
		}
		

		int callback_return_value = miqt_exec_callback_QBoxLayout_expandingDirections(this, handle__expandingDirections);

		return static_cast<Qt::Orientations>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_expandingDirections() const {

		Qt::Orientations _ret = QBoxLayout::expandingDirections();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__invalidate == 0) {
			QBoxLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QBoxLayout_invalidate(this, handle__invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_invalidate() {

		QBoxLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int param1) const override {
		if (handle__itemAt == 0) {
			return QBoxLayout::itemAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QBoxLayout_itemAt(this, handle__itemAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_itemAt(int param1) const {

		return QBoxLayout::itemAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__takeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int param1) override {
		if (handle__takeAt == 0) {
			return QBoxLayout::takeAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QBoxLayout_takeAt(this, handle__takeAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_takeAt(int param1) {

		return QBoxLayout::takeAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__count == 0) {
			return QBoxLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QBoxLayout_count(this, handle__count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_count() const {

		return QBoxLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& geometry) override {
		if (handle__setGeometry == 0) {
			QBoxLayout::setGeometry(geometry);
			return;
		}
		
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);

		miqt_exec_callback_QBoxLayout_setGeometry(this, handle__setGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setGeometry(QRect* geometry) {

		QBoxLayout::setGeometry(*geometry);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__geometry = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (handle__geometry == 0) {
			return QBoxLayout::geometry();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QBoxLayout_geometry(this, handle__geometry);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_geometry() const {

		return new QRect(QBoxLayout::geometry());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(QWidget* param1) const override {
		if (handle__indexOf == 0) {
			return QBoxLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QBoxLayout_indexOf(this, handle__indexOf, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_indexOf(QWidget* param1) const {

		return QBoxLayout::indexOf(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__isEmpty == 0) {
			return QBoxLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QBoxLayout_isEmpty(this, handle__isEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isEmpty() const {

		return QBoxLayout::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__controlTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (handle__controlTypes == 0) {
			return QBoxLayout::controlTypes();
		}
		

		int callback_return_value = miqt_exec_callback_QBoxLayout_controlTypes(this, handle__controlTypes);

		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_controlTypes() const {

		QSizePolicy::ControlTypes _ret = QBoxLayout::controlTypes();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__layout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (handle__layout == 0) {
			return QBoxLayout::layout();
		}
		

		QLayout* callback_return_value = miqt_exec_callback_QBoxLayout_layout(this, handle__layout);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayout* virtualbase_layout() {

		return QBoxLayout::layout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (handle__childEvent == 0) {
			QBoxLayout::childEvent(e);
			return;
		}
		
		QChildEvent* sigval1 = e;

		miqt_exec_callback_QBoxLayout_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* e) {

		QBoxLayout::childEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QBoxLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QBoxLayout_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QBoxLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QBoxLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QBoxLayout_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QBoxLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QBoxLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QBoxLayout_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QBoxLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QBoxLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QBoxLayout_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QBoxLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QBoxLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QBoxLayout_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QBoxLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QBoxLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QBoxLayout_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QBoxLayout::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() override {
		if (handle__widget == 0) {
			return QBoxLayout::widget();
		}
		

		QWidget* callback_return_value = miqt_exec_callback_QBoxLayout_widget(this, handle__widget);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_widget() {

		return QBoxLayout::widget();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__spacerItem = 0;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (handle__spacerItem == 0) {
			return QBoxLayout::spacerItem();
		}
		

		QSpacerItem* callback_return_value = miqt_exec_callback_QBoxLayout_spacerItem(this, handle__spacerItem);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSpacerItem* virtualbase_spacerItem() {

		return QBoxLayout::spacerItem();

	}

	// Wrappers to allow calling protected methods:
	friend void QBoxLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
	friend void QBoxLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
	friend void QBoxLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
	friend bool QBoxLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
	friend QRect* QBoxLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
	friend QObject* QBoxLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QBoxLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QBoxLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QBoxLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QBoxLayout_metaObject(const QBoxLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QBoxLayout_metacast(QBoxLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QBoxLayout_tr(const char* s) {
	QString _ret = QBoxLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBoxLayout_trUtf8(const char* s) {
	QString _ret = QBoxLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QBoxLayout_direction(const QBoxLayout* self) {
	QBoxLayout::Direction _ret = self->direction();
	return static_cast<int>(_ret);
}

void QBoxLayout_setDirection(QBoxLayout* self, int direction) {
	self->setDirection(static_cast<QBoxLayout::Direction>(direction));
}

void QBoxLayout_addSpacing(QBoxLayout* self, int size) {
	self->addSpacing(static_cast<int>(size));
}

void QBoxLayout_addStretch(QBoxLayout* self) {
	self->addStretch();
}

void QBoxLayout_addSpacerItem(QBoxLayout* self, QSpacerItem* spacerItem) {
	self->addSpacerItem(spacerItem);
}

void QBoxLayout_addWidget(QBoxLayout* self, QWidget* param1) {
	self->addWidget(param1);
}

void QBoxLayout_addLayout(QBoxLayout* self, QLayout* layout) {
	self->addLayout(layout);
}

void QBoxLayout_addStrut(QBoxLayout* self, int param1) {
	self->addStrut(static_cast<int>(param1));
}

void QBoxLayout_addItem(QBoxLayout* self, QLayoutItem* param1) {
	self->addItem(param1);
}

void QBoxLayout_insertSpacing(QBoxLayout* self, int index, int size) {
	self->insertSpacing(static_cast<int>(index), static_cast<int>(size));
}

void QBoxLayout_insertStretch(QBoxLayout* self, int index) {
	self->insertStretch(static_cast<int>(index));
}

void QBoxLayout_insertSpacerItem(QBoxLayout* self, int index, QSpacerItem* spacerItem) {
	self->insertSpacerItem(static_cast<int>(index), spacerItem);
}

void QBoxLayout_insertWidget(QBoxLayout* self, int index, QWidget* widget) {
	self->insertWidget(static_cast<int>(index), widget);
}

void QBoxLayout_insertLayout(QBoxLayout* self, int index, QLayout* layout) {
	self->insertLayout(static_cast<int>(index), layout);
}

void QBoxLayout_insertItem(QBoxLayout* self, int index, QLayoutItem* param2) {
	self->insertItem(static_cast<int>(index), param2);
}

int QBoxLayout_spacing(const QBoxLayout* self) {
	return self->spacing();
}

void QBoxLayout_setSpacing(QBoxLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

bool QBoxLayout_setStretchFactor(QBoxLayout* self, QWidget* w, int stretch) {
	return self->setStretchFactor(w, static_cast<int>(stretch));
}

bool QBoxLayout_setStretchFactor2(QBoxLayout* self, QLayout* l, int stretch) {
	return self->setStretchFactor(l, static_cast<int>(stretch));
}

void QBoxLayout_setStretch(QBoxLayout* self, int index, int stretch) {
	self->setStretch(static_cast<int>(index), static_cast<int>(stretch));
}

int QBoxLayout_stretch(const QBoxLayout* self, int index) {
	return self->stretch(static_cast<int>(index));
}

QSize* QBoxLayout_sizeHint(const QBoxLayout* self) {
	return new QSize(self->sizeHint());
}

QSize* QBoxLayout_minimumSize(const QBoxLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QBoxLayout_maximumSize(const QBoxLayout* self) {
	return new QSize(self->maximumSize());
}

bool QBoxLayout_hasHeightForWidth(const QBoxLayout* self) {
	return self->hasHeightForWidth();
}

int QBoxLayout_heightForWidth(const QBoxLayout* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

int QBoxLayout_minimumHeightForWidth(const QBoxLayout* self, int param1) {
	return self->minimumHeightForWidth(static_cast<int>(param1));
}

int QBoxLayout_expandingDirections(const QBoxLayout* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

void QBoxLayout_invalidate(QBoxLayout* self) {
	self->invalidate();
}

QLayoutItem* QBoxLayout_itemAt(const QBoxLayout* self, int param1) {
	return self->itemAt(static_cast<int>(param1));
}

QLayoutItem* QBoxLayout_takeAt(QBoxLayout* self, int param1) {
	return self->takeAt(static_cast<int>(param1));
}

int QBoxLayout_count(const QBoxLayout* self) {
	return self->count();
}

void QBoxLayout_setGeometry(QBoxLayout* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

struct miqt_string QBoxLayout_tr2(const char* s, const char* c) {
	QString _ret = QBoxLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBoxLayout_tr3(const char* s, const char* c, int n) {
	QString _ret = QBoxLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBoxLayout_trUtf82(const char* s, const char* c) {
	QString _ret = QBoxLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBoxLayout_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QBoxLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QBoxLayout_addStretch1(QBoxLayout* self, int stretch) {
	self->addStretch(static_cast<int>(stretch));
}

void QBoxLayout_addWidget2(QBoxLayout* self, QWidget* param1, int stretch) {
	self->addWidget(param1, static_cast<int>(stretch));
}

void QBoxLayout_addWidget3(QBoxLayout* self, QWidget* param1, int stretch, int alignment) {
	self->addWidget(param1, static_cast<int>(stretch), static_cast<Qt::Alignment>(alignment));
}

void QBoxLayout_addLayout2(QBoxLayout* self, QLayout* layout, int stretch) {
	self->addLayout(layout, static_cast<int>(stretch));
}

void QBoxLayout_insertStretch2(QBoxLayout* self, int index, int stretch) {
	self->insertStretch(static_cast<int>(index), static_cast<int>(stretch));
}

void QBoxLayout_insertWidget3(QBoxLayout* self, int index, QWidget* widget, int stretch) {
	self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch));
}

void QBoxLayout_insertWidget4(QBoxLayout* self, int index, QWidget* widget, int stretch, int alignment) {
	self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch), static_cast<Qt::Alignment>(alignment));
}

void QBoxLayout_insertLayout3(QBoxLayout* self, int index, QLayout* layout, int stretch) {
	self->insertLayout(static_cast<int>(index), layout, static_cast<int>(stretch));
}

bool QBoxLayout_override_virtual_addItem(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__addItem = slot;
	return true;
}

void QBoxLayout_virtualbase_addItem(void* self, QLayoutItem* param1) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_addItem(param1);
}

bool QBoxLayout_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QBoxLayout_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_sizeHint();
}

bool QBoxLayout_override_virtual_minimumSize(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSize = slot;
	return true;
}

QSize* QBoxLayout_virtualbase_minimumSize(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_minimumSize();
}

bool QBoxLayout_override_virtual_maximumSize(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__maximumSize = slot;
	return true;
}

QSize* QBoxLayout_virtualbase_maximumSize(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_maximumSize();
}

bool QBoxLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QBoxLayout_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_hasHeightForWidth();
}

bool QBoxLayout_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QBoxLayout_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_heightForWidth(param1);
}

bool QBoxLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumHeightForWidth = slot;
	return true;
}

int QBoxLayout_virtualbase_minimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_minimumHeightForWidth(param1);
}

bool QBoxLayout_override_virtual_expandingDirections(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__expandingDirections = slot;
	return true;
}

int QBoxLayout_virtualbase_expandingDirections(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_expandingDirections();
}

bool QBoxLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__invalidate = slot;
	return true;
}

void QBoxLayout_virtualbase_invalidate(void* self) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_invalidate();
}

bool QBoxLayout_override_virtual_itemAt(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemAt = slot;
	return true;
}

QLayoutItem* QBoxLayout_virtualbase_itemAt(const void* self, int param1) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_itemAt(param1);
}

bool QBoxLayout_override_virtual_takeAt(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__takeAt = slot;
	return true;
}

QLayoutItem* QBoxLayout_virtualbase_takeAt(void* self, int param1) {
	return ( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_takeAt(param1);
}

bool QBoxLayout_override_virtual_count(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__count = slot;
	return true;
}

int QBoxLayout_virtualbase_count(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_count();
}

bool QBoxLayout_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setGeometry = slot;
	return true;
}

void QBoxLayout_virtualbase_setGeometry(void* self, QRect* geometry) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_setGeometry(geometry);
}

bool QBoxLayout_override_virtual_geometry(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__geometry = slot;
	return true;
}

QRect* QBoxLayout_virtualbase_geometry(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_geometry();
}

bool QBoxLayout_override_virtual_indexOf(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indexOf = slot;
	return true;
}

int QBoxLayout_virtualbase_indexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_indexOf(param1);
}

bool QBoxLayout_override_virtual_isEmpty(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isEmpty = slot;
	return true;
}

bool QBoxLayout_virtualbase_isEmpty(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_isEmpty();
}

bool QBoxLayout_override_virtual_controlTypes(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__controlTypes = slot;
	return true;
}

int QBoxLayout_virtualbase_controlTypes(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_controlTypes();
}

bool QBoxLayout_override_virtual_layout(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__layout = slot;
	return true;
}

QLayout* QBoxLayout_virtualbase_layout(void* self) {
	return ( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_layout();
}

bool QBoxLayout_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QBoxLayout_virtualbase_childEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_childEvent(e);
}

bool QBoxLayout_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QBoxLayout_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_event(event);
}

bool QBoxLayout_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QBoxLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QBoxLayout_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QBoxLayout_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_timerEvent(event);
}

bool QBoxLayout_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QBoxLayout_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_customEvent(event);
}

bool QBoxLayout_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QBoxLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_connectNotify(signal);
}

bool QBoxLayout_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QBoxLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_disconnectNotify(signal);
}

bool QBoxLayout_override_virtual_widget(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__widget = slot;
	return true;
}

QWidget* QBoxLayout_virtualbase_widget(void* self) {
	return ( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_widget();
}

bool QBoxLayout_override_virtual_spacerItem(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__spacerItem = slot;
	return true;
}

QSpacerItem* QBoxLayout_virtualbase_spacerItem(void* self) {
	return ( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_spacerItem();
}

void QBoxLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->widgetEvent(param1);

}

void QBoxLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildLayout(l);

}

void QBoxLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildWidget(w);

}

bool QBoxLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->adoptLayout(layout);

}

QRect* QBoxLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRect(self_cast->alignmentRect(*param1));

}

QObject* QBoxLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QBoxLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QBoxLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QBoxLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QBoxLayout_delete(QBoxLayout* self) {
	delete self;
}

class MiqtVirtualQHBoxLayout final : public QHBoxLayout {
public:

	MiqtVirtualQHBoxLayout(QWidget* parent): QHBoxLayout(parent) {};
	MiqtVirtualQHBoxLayout(): QHBoxLayout() {};

	virtual ~MiqtVirtualQHBoxLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* param1) override {
		if (handle__addItem == 0) {
			QHBoxLayout::addItem(param1);
			return;
		}
		
		QLayoutItem* sigval1 = param1;

		miqt_exec_callback_QHBoxLayout_addItem(this, handle__addItem, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_addItem(QLayoutItem* param1) {

		QHBoxLayout::addItem(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QHBoxLayout::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QHBoxLayout_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QHBoxLayout::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (handle__minimumSize == 0) {
			return QHBoxLayout::minimumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QHBoxLayout_minimumSize(this, handle__minimumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSize() const {

		return new QSize(QHBoxLayout::minimumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__maximumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (handle__maximumSize == 0) {
			return QHBoxLayout::maximumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QHBoxLayout_maximumSize(this, handle__maximumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_maximumSize() const {

		return new QSize(QHBoxLayout::maximumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QHBoxLayout::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QHBoxLayout_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QHBoxLayout::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QHBoxLayout::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QHBoxLayout_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QHBoxLayout::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (handle__minimumHeightForWidth == 0) {
			return QHBoxLayout::minimumHeightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QHBoxLayout_minimumHeightForWidth(this, handle__minimumHeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_minimumHeightForWidth(int param1) const {

		return QHBoxLayout::minimumHeightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__expandingDirections = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (handle__expandingDirections == 0) {
			return QHBoxLayout::expandingDirections();
		}
		

		int callback_return_value = miqt_exec_callback_QHBoxLayout_expandingDirections(this, handle__expandingDirections);

		return static_cast<Qt::Orientations>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_expandingDirections() const {

		Qt::Orientations _ret = QHBoxLayout::expandingDirections();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__invalidate == 0) {
			QHBoxLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QHBoxLayout_invalidate(this, handle__invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_invalidate() {

		QHBoxLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int param1) const override {
		if (handle__itemAt == 0) {
			return QHBoxLayout::itemAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QHBoxLayout_itemAt(this, handle__itemAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_itemAt(int param1) const {

		return QHBoxLayout::itemAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__takeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int param1) override {
		if (handle__takeAt == 0) {
			return QHBoxLayout::takeAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QHBoxLayout_takeAt(this, handle__takeAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_takeAt(int param1) {

		return QHBoxLayout::takeAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__count == 0) {
			return QHBoxLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QHBoxLayout_count(this, handle__count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_count() const {

		return QHBoxLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& geometry) override {
		if (handle__setGeometry == 0) {
			QHBoxLayout::setGeometry(geometry);
			return;
		}
		
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);

		miqt_exec_callback_QHBoxLayout_setGeometry(this, handle__setGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setGeometry(QRect* geometry) {

		QHBoxLayout::setGeometry(*geometry);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__geometry = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (handle__geometry == 0) {
			return QHBoxLayout::geometry();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QHBoxLayout_geometry(this, handle__geometry);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_geometry() const {

		return new QRect(QHBoxLayout::geometry());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(QWidget* param1) const override {
		if (handle__indexOf == 0) {
			return QHBoxLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QHBoxLayout_indexOf(this, handle__indexOf, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_indexOf(QWidget* param1) const {

		return QHBoxLayout::indexOf(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__isEmpty == 0) {
			return QHBoxLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QHBoxLayout_isEmpty(this, handle__isEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isEmpty() const {

		return QHBoxLayout::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__controlTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (handle__controlTypes == 0) {
			return QHBoxLayout::controlTypes();
		}
		

		int callback_return_value = miqt_exec_callback_QHBoxLayout_controlTypes(this, handle__controlTypes);

		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_controlTypes() const {

		QSizePolicy::ControlTypes _ret = QHBoxLayout::controlTypes();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__layout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (handle__layout == 0) {
			return QHBoxLayout::layout();
		}
		

		QLayout* callback_return_value = miqt_exec_callback_QHBoxLayout_layout(this, handle__layout);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayout* virtualbase_layout() {

		return QHBoxLayout::layout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (handle__childEvent == 0) {
			QHBoxLayout::childEvent(e);
			return;
		}
		
		QChildEvent* sigval1 = e;

		miqt_exec_callback_QHBoxLayout_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* e) {

		QHBoxLayout::childEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QHBoxLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QHBoxLayout_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QHBoxLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QHBoxLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QHBoxLayout_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QHBoxLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QHBoxLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QHBoxLayout_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QHBoxLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QHBoxLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QHBoxLayout_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QHBoxLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QHBoxLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHBoxLayout_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QHBoxLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QHBoxLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHBoxLayout_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QHBoxLayout::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() override {
		if (handle__widget == 0) {
			return QHBoxLayout::widget();
		}
		

		QWidget* callback_return_value = miqt_exec_callback_QHBoxLayout_widget(this, handle__widget);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_widget() {

		return QHBoxLayout::widget();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__spacerItem = 0;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (handle__spacerItem == 0) {
			return QHBoxLayout::spacerItem();
		}
		

		QSpacerItem* callback_return_value = miqt_exec_callback_QHBoxLayout_spacerItem(this, handle__spacerItem);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSpacerItem* virtualbase_spacerItem() {

		return QHBoxLayout::spacerItem();

	}

	// Wrappers to allow calling protected methods:
	friend void QHBoxLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
	friend void QHBoxLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
	friend void QHBoxLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
	friend bool QHBoxLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
	friend QRect* QHBoxLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
	friend QObject* QHBoxLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QHBoxLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QHBoxLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QHBoxLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QHBoxLayout_metaObject(const QHBoxLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHBoxLayout_metacast(QHBoxLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHBoxLayout_tr(const char* s) {
	QString _ret = QHBoxLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHBoxLayout_trUtf8(const char* s) {
	QString _ret = QHBoxLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHBoxLayout_tr2(const char* s, const char* c) {
	QString _ret = QHBoxLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHBoxLayout_tr3(const char* s, const char* c, int n) {
	QString _ret = QHBoxLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHBoxLayout_trUtf82(const char* s, const char* c) {
	QString _ret = QHBoxLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHBoxLayout_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QHBoxLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QHBoxLayout_override_virtual_addItem(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__addItem = slot;
	return true;
}

void QHBoxLayout_virtualbase_addItem(void* self, QLayoutItem* param1) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_addItem(param1);
}

bool QHBoxLayout_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QHBoxLayout_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_sizeHint();
}

bool QHBoxLayout_override_virtual_minimumSize(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSize = slot;
	return true;
}

QSize* QHBoxLayout_virtualbase_minimumSize(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_minimumSize();
}

bool QHBoxLayout_override_virtual_maximumSize(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__maximumSize = slot;
	return true;
}

QSize* QHBoxLayout_virtualbase_maximumSize(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_maximumSize();
}

bool QHBoxLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QHBoxLayout_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_hasHeightForWidth();
}

bool QHBoxLayout_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QHBoxLayout_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_heightForWidth(param1);
}

bool QHBoxLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumHeightForWidth = slot;
	return true;
}

int QHBoxLayout_virtualbase_minimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_minimumHeightForWidth(param1);
}

bool QHBoxLayout_override_virtual_expandingDirections(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__expandingDirections = slot;
	return true;
}

int QHBoxLayout_virtualbase_expandingDirections(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_expandingDirections();
}

bool QHBoxLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__invalidate = slot;
	return true;
}

void QHBoxLayout_virtualbase_invalidate(void* self) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_invalidate();
}

bool QHBoxLayout_override_virtual_itemAt(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemAt = slot;
	return true;
}

QLayoutItem* QHBoxLayout_virtualbase_itemAt(const void* self, int param1) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_itemAt(param1);
}

bool QHBoxLayout_override_virtual_takeAt(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__takeAt = slot;
	return true;
}

QLayoutItem* QHBoxLayout_virtualbase_takeAt(void* self, int param1) {
	return ( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_takeAt(param1);
}

bool QHBoxLayout_override_virtual_count(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__count = slot;
	return true;
}

int QHBoxLayout_virtualbase_count(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_count();
}

bool QHBoxLayout_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setGeometry = slot;
	return true;
}

void QHBoxLayout_virtualbase_setGeometry(void* self, QRect* geometry) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_setGeometry(geometry);
}

bool QHBoxLayout_override_virtual_geometry(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__geometry = slot;
	return true;
}

QRect* QHBoxLayout_virtualbase_geometry(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_geometry();
}

bool QHBoxLayout_override_virtual_indexOf(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indexOf = slot;
	return true;
}

int QHBoxLayout_virtualbase_indexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_indexOf(param1);
}

bool QHBoxLayout_override_virtual_isEmpty(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isEmpty = slot;
	return true;
}

bool QHBoxLayout_virtualbase_isEmpty(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_isEmpty();
}

bool QHBoxLayout_override_virtual_controlTypes(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__controlTypes = slot;
	return true;
}

int QHBoxLayout_virtualbase_controlTypes(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_controlTypes();
}

bool QHBoxLayout_override_virtual_layout(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__layout = slot;
	return true;
}

QLayout* QHBoxLayout_virtualbase_layout(void* self) {
	return ( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_layout();
}

bool QHBoxLayout_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QHBoxLayout_virtualbase_childEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_childEvent(e);
}

bool QHBoxLayout_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QHBoxLayout_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_event(event);
}

bool QHBoxLayout_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QHBoxLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QHBoxLayout_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QHBoxLayout_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_timerEvent(event);
}

bool QHBoxLayout_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QHBoxLayout_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_customEvent(event);
}

bool QHBoxLayout_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QHBoxLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_connectNotify(signal);
}

bool QHBoxLayout_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QHBoxLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_disconnectNotify(signal);
}

bool QHBoxLayout_override_virtual_widget(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__widget = slot;
	return true;
}

QWidget* QHBoxLayout_virtualbase_widget(void* self) {
	return ( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_widget();
}

bool QHBoxLayout_override_virtual_spacerItem(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__spacerItem = slot;
	return true;
}

QSpacerItem* QHBoxLayout_virtualbase_spacerItem(void* self) {
	return ( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_spacerItem();
}

void QHBoxLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->widgetEvent(param1);

}

void QHBoxLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildLayout(l);

}

void QHBoxLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildWidget(w);

}

bool QHBoxLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->adoptLayout(layout);

}

QRect* QHBoxLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRect(self_cast->alignmentRect(*param1));

}

QObject* QHBoxLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QHBoxLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QHBoxLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QHBoxLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QHBoxLayout_delete(QHBoxLayout* self) {
	delete self;
}

class MiqtVirtualQVBoxLayout final : public QVBoxLayout {
public:

	MiqtVirtualQVBoxLayout(QWidget* parent): QVBoxLayout(parent) {};
	MiqtVirtualQVBoxLayout(): QVBoxLayout() {};

	virtual ~MiqtVirtualQVBoxLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* param1) override {
		if (handle__addItem == 0) {
			QVBoxLayout::addItem(param1);
			return;
		}
		
		QLayoutItem* sigval1 = param1;

		miqt_exec_callback_QVBoxLayout_addItem(this, handle__addItem, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_addItem(QLayoutItem* param1) {

		QVBoxLayout::addItem(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QVBoxLayout::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QVBoxLayout_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QVBoxLayout::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (handle__minimumSize == 0) {
			return QVBoxLayout::minimumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QVBoxLayout_minimumSize(this, handle__minimumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSize() const {

		return new QSize(QVBoxLayout::minimumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__maximumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (handle__maximumSize == 0) {
			return QVBoxLayout::maximumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QVBoxLayout_maximumSize(this, handle__maximumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_maximumSize() const {

		return new QSize(QVBoxLayout::maximumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QVBoxLayout::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QVBoxLayout_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QVBoxLayout::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QVBoxLayout::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QVBoxLayout_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QVBoxLayout::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (handle__minimumHeightForWidth == 0) {
			return QVBoxLayout::minimumHeightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QVBoxLayout_minimumHeightForWidth(this, handle__minimumHeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_minimumHeightForWidth(int param1) const {

		return QVBoxLayout::minimumHeightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__expandingDirections = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (handle__expandingDirections == 0) {
			return QVBoxLayout::expandingDirections();
		}
		

		int callback_return_value = miqt_exec_callback_QVBoxLayout_expandingDirections(this, handle__expandingDirections);

		return static_cast<Qt::Orientations>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_expandingDirections() const {

		Qt::Orientations _ret = QVBoxLayout::expandingDirections();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__invalidate == 0) {
			QVBoxLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QVBoxLayout_invalidate(this, handle__invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_invalidate() {

		QVBoxLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int param1) const override {
		if (handle__itemAt == 0) {
			return QVBoxLayout::itemAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QVBoxLayout_itemAt(this, handle__itemAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_itemAt(int param1) const {

		return QVBoxLayout::itemAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__takeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int param1) override {
		if (handle__takeAt == 0) {
			return QVBoxLayout::takeAt(param1);
		}
		
		int sigval1 = param1;

		QLayoutItem* callback_return_value = miqt_exec_callback_QVBoxLayout_takeAt(this, handle__takeAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_takeAt(int param1) {

		return QVBoxLayout::takeAt(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__count == 0) {
			return QVBoxLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QVBoxLayout_count(this, handle__count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_count() const {

		return QVBoxLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& geometry) override {
		if (handle__setGeometry == 0) {
			QVBoxLayout::setGeometry(geometry);
			return;
		}
		
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);

		miqt_exec_callback_QVBoxLayout_setGeometry(this, handle__setGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setGeometry(QRect* geometry) {

		QVBoxLayout::setGeometry(*geometry);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__geometry = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (handle__geometry == 0) {
			return QVBoxLayout::geometry();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QVBoxLayout_geometry(this, handle__geometry);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_geometry() const {

		return new QRect(QVBoxLayout::geometry());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(QWidget* param1) const override {
		if (handle__indexOf == 0) {
			return QVBoxLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QVBoxLayout_indexOf(this, handle__indexOf, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_indexOf(QWidget* param1) const {

		return QVBoxLayout::indexOf(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__isEmpty == 0) {
			return QVBoxLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QVBoxLayout_isEmpty(this, handle__isEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isEmpty() const {

		return QVBoxLayout::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__controlTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (handle__controlTypes == 0) {
			return QVBoxLayout::controlTypes();
		}
		

		int callback_return_value = miqt_exec_callback_QVBoxLayout_controlTypes(this, handle__controlTypes);

		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_controlTypes() const {

		QSizePolicy::ControlTypes _ret = QVBoxLayout::controlTypes();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__layout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (handle__layout == 0) {
			return QVBoxLayout::layout();
		}
		

		QLayout* callback_return_value = miqt_exec_callback_QVBoxLayout_layout(this, handle__layout);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayout* virtualbase_layout() {

		return QVBoxLayout::layout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (handle__childEvent == 0) {
			QVBoxLayout::childEvent(e);
			return;
		}
		
		QChildEvent* sigval1 = e;

		miqt_exec_callback_QVBoxLayout_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* e) {

		QVBoxLayout::childEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QVBoxLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QVBoxLayout_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QVBoxLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QVBoxLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QVBoxLayout_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QVBoxLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QVBoxLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QVBoxLayout_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QVBoxLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QVBoxLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QVBoxLayout_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QVBoxLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QVBoxLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVBoxLayout_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QVBoxLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QVBoxLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVBoxLayout_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QVBoxLayout::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() override {
		if (handle__widget == 0) {
			return QVBoxLayout::widget();
		}
		

		QWidget* callback_return_value = miqt_exec_callback_QVBoxLayout_widget(this, handle__widget);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_widget() {

		return QVBoxLayout::widget();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__spacerItem = 0;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (handle__spacerItem == 0) {
			return QVBoxLayout::spacerItem();
		}
		

		QSpacerItem* callback_return_value = miqt_exec_callback_QVBoxLayout_spacerItem(this, handle__spacerItem);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSpacerItem* virtualbase_spacerItem() {

		return QVBoxLayout::spacerItem();

	}

	// Wrappers to allow calling protected methods:
	friend void QVBoxLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
	friend void QVBoxLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
	friend void QVBoxLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
	friend bool QVBoxLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
	friend QRect* QVBoxLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
	friend QObject* QVBoxLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QVBoxLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QVBoxLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QVBoxLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QVBoxLayout_metaObject(const QVBoxLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVBoxLayout_metacast(QVBoxLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVBoxLayout_tr(const char* s) {
	QString _ret = QVBoxLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVBoxLayout_trUtf8(const char* s) {
	QString _ret = QVBoxLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVBoxLayout_tr2(const char* s, const char* c) {
	QString _ret = QVBoxLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVBoxLayout_tr3(const char* s, const char* c, int n) {
	QString _ret = QVBoxLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVBoxLayout_trUtf82(const char* s, const char* c) {
	QString _ret = QVBoxLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVBoxLayout_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QVBoxLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVBoxLayout_override_virtual_addItem(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__addItem = slot;
	return true;
}

void QVBoxLayout_virtualbase_addItem(void* self, QLayoutItem* param1) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_addItem(param1);
}

bool QVBoxLayout_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QVBoxLayout_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_sizeHint();
}

bool QVBoxLayout_override_virtual_minimumSize(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSize = slot;
	return true;
}

QSize* QVBoxLayout_virtualbase_minimumSize(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_minimumSize();
}

bool QVBoxLayout_override_virtual_maximumSize(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__maximumSize = slot;
	return true;
}

QSize* QVBoxLayout_virtualbase_maximumSize(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_maximumSize();
}

bool QVBoxLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QVBoxLayout_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_hasHeightForWidth();
}

bool QVBoxLayout_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QVBoxLayout_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_heightForWidth(param1);
}

bool QVBoxLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumHeightForWidth = slot;
	return true;
}

int QVBoxLayout_virtualbase_minimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_minimumHeightForWidth(param1);
}

bool QVBoxLayout_override_virtual_expandingDirections(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__expandingDirections = slot;
	return true;
}

int QVBoxLayout_virtualbase_expandingDirections(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_expandingDirections();
}

bool QVBoxLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__invalidate = slot;
	return true;
}

void QVBoxLayout_virtualbase_invalidate(void* self) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_invalidate();
}

bool QVBoxLayout_override_virtual_itemAt(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemAt = slot;
	return true;
}

QLayoutItem* QVBoxLayout_virtualbase_itemAt(const void* self, int param1) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_itemAt(param1);
}

bool QVBoxLayout_override_virtual_takeAt(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__takeAt = slot;
	return true;
}

QLayoutItem* QVBoxLayout_virtualbase_takeAt(void* self, int param1) {
	return ( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_takeAt(param1);
}

bool QVBoxLayout_override_virtual_count(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__count = slot;
	return true;
}

int QVBoxLayout_virtualbase_count(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_count();
}

bool QVBoxLayout_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setGeometry = slot;
	return true;
}

void QVBoxLayout_virtualbase_setGeometry(void* self, QRect* geometry) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_setGeometry(geometry);
}

bool QVBoxLayout_override_virtual_geometry(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__geometry = slot;
	return true;
}

QRect* QVBoxLayout_virtualbase_geometry(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_geometry();
}

bool QVBoxLayout_override_virtual_indexOf(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indexOf = slot;
	return true;
}

int QVBoxLayout_virtualbase_indexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_indexOf(param1);
}

bool QVBoxLayout_override_virtual_isEmpty(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isEmpty = slot;
	return true;
}

bool QVBoxLayout_virtualbase_isEmpty(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_isEmpty();
}

bool QVBoxLayout_override_virtual_controlTypes(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__controlTypes = slot;
	return true;
}

int QVBoxLayout_virtualbase_controlTypes(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_controlTypes();
}

bool QVBoxLayout_override_virtual_layout(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__layout = slot;
	return true;
}

QLayout* QVBoxLayout_virtualbase_layout(void* self) {
	return ( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_layout();
}

bool QVBoxLayout_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QVBoxLayout_virtualbase_childEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_childEvent(e);
}

bool QVBoxLayout_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QVBoxLayout_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_event(event);
}

bool QVBoxLayout_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QVBoxLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QVBoxLayout_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QVBoxLayout_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_timerEvent(event);
}

bool QVBoxLayout_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QVBoxLayout_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_customEvent(event);
}

bool QVBoxLayout_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QVBoxLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_connectNotify(signal);
}

bool QVBoxLayout_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QVBoxLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_disconnectNotify(signal);
}

bool QVBoxLayout_override_virtual_widget(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__widget = slot;
	return true;
}

QWidget* QVBoxLayout_virtualbase_widget(void* self) {
	return ( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_widget();
}

bool QVBoxLayout_override_virtual_spacerItem(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__spacerItem = slot;
	return true;
}

QSpacerItem* QVBoxLayout_virtualbase_spacerItem(void* self) {
	return ( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_spacerItem();
}

void QVBoxLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->widgetEvent(param1);

}

void QVBoxLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildLayout(l);

}

void QVBoxLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildWidget(w);

}

bool QVBoxLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->adoptLayout(layout);

}

QRect* QVBoxLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRect(self_cast->alignmentRect(*param1));

}

QObject* QVBoxLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QVBoxLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QVBoxLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QVBoxLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QVBoxLayout_delete(QVBoxLayout* self) {
	delete self;
}

