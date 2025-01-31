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

void miqt_exec_callback_QBoxLayout_AddItem(QBoxLayout*, intptr_t, QLayoutItem*);
int miqt_exec_callback_QBoxLayout_Spacing(const QBoxLayout*, intptr_t);
void miqt_exec_callback_QBoxLayout_SetSpacing(QBoxLayout*, intptr_t, int);
QSize* miqt_exec_callback_QBoxLayout_SizeHint(const QBoxLayout*, intptr_t);
QSize* miqt_exec_callback_QBoxLayout_MinimumSize(const QBoxLayout*, intptr_t);
QSize* miqt_exec_callback_QBoxLayout_MaximumSize(const QBoxLayout*, intptr_t);
bool miqt_exec_callback_QBoxLayout_HasHeightForWidth(const QBoxLayout*, intptr_t);
int miqt_exec_callback_QBoxLayout_HeightForWidth(const QBoxLayout*, intptr_t, int);
int miqt_exec_callback_QBoxLayout_MinimumHeightForWidth(const QBoxLayout*, intptr_t, int);
int miqt_exec_callback_QBoxLayout_ExpandingDirections(const QBoxLayout*, intptr_t);
void miqt_exec_callback_QBoxLayout_Invalidate(QBoxLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QBoxLayout_ItemAt(const QBoxLayout*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QBoxLayout_TakeAt(QBoxLayout*, intptr_t, int);
int miqt_exec_callback_QBoxLayout_Count(const QBoxLayout*, intptr_t);
void miqt_exec_callback_QBoxLayout_SetGeometry(QBoxLayout*, intptr_t, QRect*);
QRect* miqt_exec_callback_QBoxLayout_Geometry(const QBoxLayout*, intptr_t);
int miqt_exec_callback_QBoxLayout_IndexOf(const QBoxLayout*, intptr_t, QWidget*);
bool miqt_exec_callback_QBoxLayout_IsEmpty(const QBoxLayout*, intptr_t);
int miqt_exec_callback_QBoxLayout_ControlTypes(const QBoxLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QBoxLayout_ReplaceWidget(QBoxLayout*, intptr_t, QWidget*, QWidget*, int);
QLayout* miqt_exec_callback_QBoxLayout_Layout(QBoxLayout*, intptr_t);
void miqt_exec_callback_QBoxLayout_ChildEvent(QBoxLayout*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QBoxLayout_Event(QBoxLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QBoxLayout_EventFilter(QBoxLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QBoxLayout_TimerEvent(QBoxLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QBoxLayout_CustomEvent(QBoxLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QBoxLayout_ConnectNotify(QBoxLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QBoxLayout_DisconnectNotify(QBoxLayout*, intptr_t, QMetaMethod*);
QWidget* miqt_exec_callback_QBoxLayout_Widget(const QBoxLayout*, intptr_t);
QSpacerItem* miqt_exec_callback_QBoxLayout_SpacerItem(QBoxLayout*, intptr_t);
void miqt_exec_callback_QHBoxLayout_AddItem(QHBoxLayout*, intptr_t, QLayoutItem*);
int miqt_exec_callback_QHBoxLayout_Spacing(const QHBoxLayout*, intptr_t);
void miqt_exec_callback_QHBoxLayout_SetSpacing(QHBoxLayout*, intptr_t, int);
QSize* miqt_exec_callback_QHBoxLayout_SizeHint(const QHBoxLayout*, intptr_t);
QSize* miqt_exec_callback_QHBoxLayout_MinimumSize(const QHBoxLayout*, intptr_t);
QSize* miqt_exec_callback_QHBoxLayout_MaximumSize(const QHBoxLayout*, intptr_t);
bool miqt_exec_callback_QHBoxLayout_HasHeightForWidth(const QHBoxLayout*, intptr_t);
int miqt_exec_callback_QHBoxLayout_HeightForWidth(const QHBoxLayout*, intptr_t, int);
int miqt_exec_callback_QHBoxLayout_MinimumHeightForWidth(const QHBoxLayout*, intptr_t, int);
int miqt_exec_callback_QHBoxLayout_ExpandingDirections(const QHBoxLayout*, intptr_t);
void miqt_exec_callback_QHBoxLayout_Invalidate(QHBoxLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QHBoxLayout_ItemAt(const QHBoxLayout*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QHBoxLayout_TakeAt(QHBoxLayout*, intptr_t, int);
int miqt_exec_callback_QHBoxLayout_Count(const QHBoxLayout*, intptr_t);
void miqt_exec_callback_QHBoxLayout_SetGeometry(QHBoxLayout*, intptr_t, QRect*);
QRect* miqt_exec_callback_QHBoxLayout_Geometry(const QHBoxLayout*, intptr_t);
int miqt_exec_callback_QHBoxLayout_IndexOf(const QHBoxLayout*, intptr_t, QWidget*);
bool miqt_exec_callback_QHBoxLayout_IsEmpty(const QHBoxLayout*, intptr_t);
int miqt_exec_callback_QHBoxLayout_ControlTypes(const QHBoxLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QHBoxLayout_ReplaceWidget(QHBoxLayout*, intptr_t, QWidget*, QWidget*, int);
QLayout* miqt_exec_callback_QHBoxLayout_Layout(QHBoxLayout*, intptr_t);
void miqt_exec_callback_QHBoxLayout_ChildEvent(QHBoxLayout*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QHBoxLayout_Event(QHBoxLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QHBoxLayout_EventFilter(QHBoxLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QHBoxLayout_TimerEvent(QHBoxLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHBoxLayout_CustomEvent(QHBoxLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QHBoxLayout_ConnectNotify(QHBoxLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QHBoxLayout_DisconnectNotify(QHBoxLayout*, intptr_t, QMetaMethod*);
QWidget* miqt_exec_callback_QHBoxLayout_Widget(const QHBoxLayout*, intptr_t);
QSpacerItem* miqt_exec_callback_QHBoxLayout_SpacerItem(QHBoxLayout*, intptr_t);
void miqt_exec_callback_QVBoxLayout_AddItem(QVBoxLayout*, intptr_t, QLayoutItem*);
int miqt_exec_callback_QVBoxLayout_Spacing(const QVBoxLayout*, intptr_t);
void miqt_exec_callback_QVBoxLayout_SetSpacing(QVBoxLayout*, intptr_t, int);
QSize* miqt_exec_callback_QVBoxLayout_SizeHint(const QVBoxLayout*, intptr_t);
QSize* miqt_exec_callback_QVBoxLayout_MinimumSize(const QVBoxLayout*, intptr_t);
QSize* miqt_exec_callback_QVBoxLayout_MaximumSize(const QVBoxLayout*, intptr_t);
bool miqt_exec_callback_QVBoxLayout_HasHeightForWidth(const QVBoxLayout*, intptr_t);
int miqt_exec_callback_QVBoxLayout_HeightForWidth(const QVBoxLayout*, intptr_t, int);
int miqt_exec_callback_QVBoxLayout_MinimumHeightForWidth(const QVBoxLayout*, intptr_t, int);
int miqt_exec_callback_QVBoxLayout_ExpandingDirections(const QVBoxLayout*, intptr_t);
void miqt_exec_callback_QVBoxLayout_Invalidate(QVBoxLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QVBoxLayout_ItemAt(const QVBoxLayout*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QVBoxLayout_TakeAt(QVBoxLayout*, intptr_t, int);
int miqt_exec_callback_QVBoxLayout_Count(const QVBoxLayout*, intptr_t);
void miqt_exec_callback_QVBoxLayout_SetGeometry(QVBoxLayout*, intptr_t, QRect*);
QRect* miqt_exec_callback_QVBoxLayout_Geometry(const QVBoxLayout*, intptr_t);
int miqt_exec_callback_QVBoxLayout_IndexOf(const QVBoxLayout*, intptr_t, QWidget*);
bool miqt_exec_callback_QVBoxLayout_IsEmpty(const QVBoxLayout*, intptr_t);
int miqt_exec_callback_QVBoxLayout_ControlTypes(const QVBoxLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QVBoxLayout_ReplaceWidget(QVBoxLayout*, intptr_t, QWidget*, QWidget*, int);
QLayout* miqt_exec_callback_QVBoxLayout_Layout(QVBoxLayout*, intptr_t);
void miqt_exec_callback_QVBoxLayout_ChildEvent(QVBoxLayout*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QVBoxLayout_Event(QVBoxLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QVBoxLayout_EventFilter(QVBoxLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QVBoxLayout_TimerEvent(QVBoxLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QVBoxLayout_CustomEvent(QVBoxLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QVBoxLayout_ConnectNotify(QVBoxLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QVBoxLayout_DisconnectNotify(QVBoxLayout*, intptr_t, QMetaMethod*);
QWidget* miqt_exec_callback_QVBoxLayout_Widget(const QVBoxLayout*, intptr_t);
QSpacerItem* miqt_exec_callback_QVBoxLayout_SpacerItem(QVBoxLayout*, intptr_t);
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
		

		int callback_return_value = miqt_exec_callback_QBoxLayout_Spacing(this, handle__Spacing);

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
		

		QSize* callback_return_value = miqt_exec_callback_QBoxLayout_SizeHint(this, handle__SizeHint);

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
		

		QSize* callback_return_value = miqt_exec_callback_QBoxLayout_MinimumSize(this, handle__MinimumSize);

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
		

		QSize* callback_return_value = miqt_exec_callback_QBoxLayout_MaximumSize(this, handle__MaximumSize);

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
		

		bool callback_return_value = miqt_exec_callback_QBoxLayout_HasHeightForWidth(this, handle__HasHeightForWidth);

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

		int callback_return_value = miqt_exec_callback_QBoxLayout_HeightForWidth(this, handle__HeightForWidth, sigval1);

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

		int callback_return_value = miqt_exec_callback_QBoxLayout_MinimumHeightForWidth(this, handle__MinimumHeightForWidth, sigval1);

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
		

		int callback_return_value = miqt_exec_callback_QBoxLayout_ExpandingDirections(this, handle__ExpandingDirections);

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

		QLayoutItem* callback_return_value = miqt_exec_callback_QBoxLayout_ItemAt(this, handle__ItemAt, sigval1);

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
		

		int callback_return_value = miqt_exec_callback_QBoxLayout_Count(this, handle__Count);

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
		

		QRect* callback_return_value = miqt_exec_callback_QBoxLayout_Geometry(this, handle__Geometry);

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

		int callback_return_value = miqt_exec_callback_QBoxLayout_IndexOf(this, handle__IndexOf, sigval1);

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
		

		bool callback_return_value = miqt_exec_callback_QBoxLayout_IsEmpty(this, handle__IsEmpty);

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
		

		int callback_return_value = miqt_exec_callback_QBoxLayout_ControlTypes(this, handle__ControlTypes);

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QBoxLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QBoxLayout_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QBoxLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QBoxLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QBoxLayout_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QBoxLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QBoxLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QBoxLayout_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QBoxLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QBoxLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QBoxLayout_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QBoxLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QBoxLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QBoxLayout_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QBoxLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QBoxLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QBoxLayout_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QBoxLayout::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() const override {
		if (handle__Widget == 0) {
			return QBoxLayout::widget();
		}
		

		QWidget* callback_return_value = miqt_exec_callback_QBoxLayout_Widget(this, handle__Widget);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_Widget() const {

		return QBoxLayout::widget();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SpacerItem = 0;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (handle__SpacerItem == 0) {
			return QBoxLayout::spacerItem();
		}
		

		QSpacerItem* callback_return_value = miqt_exec_callback_QBoxLayout_SpacerItem(this, handle__SpacerItem);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSpacerItem* virtualbase_SpacerItem() {

		return QBoxLayout::spacerItem();

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

bool QBoxLayout_override_virtual_AddItem(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AddItem = slot;
	return true;
}

void QBoxLayout_virtualbase_AddItem(void* self, QLayoutItem* param1) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_AddItem(param1);
}

bool QBoxLayout_override_virtual_Spacing(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Spacing = slot;
	return true;
}

int QBoxLayout_virtualbase_Spacing(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_Spacing();
}

bool QBoxLayout_override_virtual_SetSpacing(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSpacing = slot;
	return true;
}

void QBoxLayout_virtualbase_SetSpacing(void* self, int spacing) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_SetSpacing(spacing);
}

bool QBoxLayout_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QBoxLayout_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_SizeHint();
}

bool QBoxLayout_override_virtual_MinimumSize(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSize = slot;
	return true;
}

QSize* QBoxLayout_virtualbase_MinimumSize(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_MinimumSize();
}

bool QBoxLayout_override_virtual_MaximumSize(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MaximumSize = slot;
	return true;
}

QSize* QBoxLayout_virtualbase_MaximumSize(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_MaximumSize();
}

bool QBoxLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QBoxLayout_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_HasHeightForWidth();
}

bool QBoxLayout_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QBoxLayout_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QBoxLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumHeightForWidth = slot;
	return true;
}

int QBoxLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_MinimumHeightForWidth(param1);
}

bool QBoxLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ExpandingDirections = slot;
	return true;
}

int QBoxLayout_virtualbase_ExpandingDirections(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_ExpandingDirections();
}

bool QBoxLayout_override_virtual_Invalidate(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Invalidate = slot;
	return true;
}

void QBoxLayout_virtualbase_Invalidate(void* self) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_Invalidate();
}

bool QBoxLayout_override_virtual_ItemAt(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemAt = slot;
	return true;
}

QLayoutItem* QBoxLayout_virtualbase_ItemAt(const void* self, int param1) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_ItemAt(param1);
}

bool QBoxLayout_override_virtual_TakeAt(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TakeAt = slot;
	return true;
}

QLayoutItem* QBoxLayout_virtualbase_TakeAt(void* self, int param1) {
	return ( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_TakeAt(param1);
}

bool QBoxLayout_override_virtual_Count(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Count = slot;
	return true;
}

int QBoxLayout_virtualbase_Count(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_Count();
}

bool QBoxLayout_override_virtual_SetGeometry(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetGeometry = slot;
	return true;
}

void QBoxLayout_virtualbase_SetGeometry(void* self, QRect* geometry) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_SetGeometry(geometry);
}

bool QBoxLayout_override_virtual_Geometry(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Geometry = slot;
	return true;
}

QRect* QBoxLayout_virtualbase_Geometry(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_Geometry();
}

bool QBoxLayout_override_virtual_IndexOf(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexOf = slot;
	return true;
}

int QBoxLayout_virtualbase_IndexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_IndexOf(param1);
}

bool QBoxLayout_override_virtual_IsEmpty(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsEmpty = slot;
	return true;
}

bool QBoxLayout_virtualbase_IsEmpty(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_IsEmpty();
}

bool QBoxLayout_override_virtual_ControlTypes(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ControlTypes = slot;
	return true;
}

int QBoxLayout_virtualbase_ControlTypes(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_ControlTypes();
}

bool QBoxLayout_override_virtual_ReplaceWidget(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReplaceWidget = slot;
	return true;
}

QLayoutItem* QBoxLayout_virtualbase_ReplaceWidget(void* self, QWidget* from, QWidget* to, int options) {
	return ( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_ReplaceWidget(from, to, options);
}

bool QBoxLayout_override_virtual_Layout(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Layout = slot;
	return true;
}

QLayout* QBoxLayout_virtualbase_Layout(void* self) {
	return ( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_Layout();
}

bool QBoxLayout_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QBoxLayout_virtualbase_ChildEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_ChildEvent(e);
}

bool QBoxLayout_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QBoxLayout_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_Event(event);
}

bool QBoxLayout_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QBoxLayout_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QBoxLayout_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QBoxLayout_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_TimerEvent(event);
}

bool QBoxLayout_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QBoxLayout_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_CustomEvent(event);
}

bool QBoxLayout_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QBoxLayout_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QBoxLayout_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QBoxLayout_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_DisconnectNotify(signal);
}

bool QBoxLayout_override_virtual_Widget(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Widget = slot;
	return true;
}

QWidget* QBoxLayout_virtualbase_Widget(const void* self) {
	return ( (const MiqtVirtualQBoxLayout*)(self) )->virtualbase_Widget();
}

bool QBoxLayout_override_virtual_SpacerItem(void* self, intptr_t slot) {
	MiqtVirtualQBoxLayout* self_cast = dynamic_cast<MiqtVirtualQBoxLayout*>( (QBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SpacerItem = slot;
	return true;
}

QSpacerItem* QBoxLayout_virtualbase_SpacerItem(void* self) {
	return ( (MiqtVirtualQBoxLayout*)(self) )->virtualbase_SpacerItem();
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
		

		int callback_return_value = miqt_exec_callback_QHBoxLayout_Spacing(this, handle__Spacing);

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
		

		QSize* callback_return_value = miqt_exec_callback_QHBoxLayout_SizeHint(this, handle__SizeHint);

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
		

		QSize* callback_return_value = miqt_exec_callback_QHBoxLayout_MinimumSize(this, handle__MinimumSize);

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
		

		QSize* callback_return_value = miqt_exec_callback_QHBoxLayout_MaximumSize(this, handle__MaximumSize);

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
		

		bool callback_return_value = miqt_exec_callback_QHBoxLayout_HasHeightForWidth(this, handle__HasHeightForWidth);

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

		int callback_return_value = miqt_exec_callback_QHBoxLayout_HeightForWidth(this, handle__HeightForWidth, sigval1);

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

		int callback_return_value = miqt_exec_callback_QHBoxLayout_MinimumHeightForWidth(this, handle__MinimumHeightForWidth, sigval1);

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
		

		int callback_return_value = miqt_exec_callback_QHBoxLayout_ExpandingDirections(this, handle__ExpandingDirections);

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

		QLayoutItem* callback_return_value = miqt_exec_callback_QHBoxLayout_ItemAt(this, handle__ItemAt, sigval1);

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
		

		int callback_return_value = miqt_exec_callback_QHBoxLayout_Count(this, handle__Count);

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Geometry = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (handle__Geometry == 0) {
			return QHBoxLayout::geometry();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QHBoxLayout_Geometry(this, handle__Geometry);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_Geometry() const {

		return new QRect(QHBoxLayout::geometry());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(const QWidget* param1) const override {
		if (handle__IndexOf == 0) {
			return QHBoxLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = (QWidget*) param1;

		int callback_return_value = miqt_exec_callback_QHBoxLayout_IndexOf(this, handle__IndexOf, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndexOf(QWidget* param1) const {

		return QHBoxLayout::indexOf(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__IsEmpty == 0) {
			return QHBoxLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QHBoxLayout_IsEmpty(this, handle__IsEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEmpty() const {

		return QHBoxLayout::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ControlTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (handle__ControlTypes == 0) {
			return QHBoxLayout::controlTypes();
		}
		

		int callback_return_value = miqt_exec_callback_QHBoxLayout_ControlTypes(this, handle__ControlTypes);

		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ControlTypes() const {

		QSizePolicy::ControlTypes _ret = QHBoxLayout::controlTypes();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReplaceWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
		if (handle__ReplaceWidget == 0) {
			return QHBoxLayout::replaceWidget(from, to, options);
		}
		
		QWidget* sigval1 = from;
		QWidget* sigval2 = to;
		Qt::FindChildOptions options_ret = options;
		int sigval3 = static_cast<int>(options_ret);

		QLayoutItem* callback_return_value = miqt_exec_callback_QHBoxLayout_ReplaceWidget(this, handle__ReplaceWidget, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_ReplaceWidget(QWidget* from, QWidget* to, int options) {

		return QHBoxLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Layout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (handle__Layout == 0) {
			return QHBoxLayout::layout();
		}
		

		QLayout* callback_return_value = miqt_exec_callback_QHBoxLayout_Layout(this, handle__Layout);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayout* virtualbase_Layout() {

		return QHBoxLayout::layout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (handle__ChildEvent == 0) {
			QHBoxLayout::childEvent(e);
			return;
		}
		
		QChildEvent* sigval1 = e;

		miqt_exec_callback_QHBoxLayout_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* e) {

		QHBoxLayout::childEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QHBoxLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QHBoxLayout_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QHBoxLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QHBoxLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QHBoxLayout_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QHBoxLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QHBoxLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QHBoxLayout_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QHBoxLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QHBoxLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QHBoxLayout_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QHBoxLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QHBoxLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHBoxLayout_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QHBoxLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QHBoxLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHBoxLayout_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QHBoxLayout::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() const override {
		if (handle__Widget == 0) {
			return QHBoxLayout::widget();
		}
		

		QWidget* callback_return_value = miqt_exec_callback_QHBoxLayout_Widget(this, handle__Widget);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_Widget() const {

		return QHBoxLayout::widget();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SpacerItem = 0;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (handle__SpacerItem == 0) {
			return QHBoxLayout::spacerItem();
		}
		

		QSpacerItem* callback_return_value = miqt_exec_callback_QHBoxLayout_SpacerItem(this, handle__SpacerItem);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSpacerItem* virtualbase_SpacerItem() {

		return QHBoxLayout::spacerItem();

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

bool QHBoxLayout_override_virtual_AddItem(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AddItem = slot;
	return true;
}

void QHBoxLayout_virtualbase_AddItem(void* self, QLayoutItem* param1) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_AddItem(param1);
}

bool QHBoxLayout_override_virtual_Spacing(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Spacing = slot;
	return true;
}

int QHBoxLayout_virtualbase_Spacing(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_Spacing();
}

bool QHBoxLayout_override_virtual_SetSpacing(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSpacing = slot;
	return true;
}

void QHBoxLayout_virtualbase_SetSpacing(void* self, int spacing) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_SetSpacing(spacing);
}

bool QHBoxLayout_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QHBoxLayout_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_SizeHint();
}

bool QHBoxLayout_override_virtual_MinimumSize(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSize = slot;
	return true;
}

QSize* QHBoxLayout_virtualbase_MinimumSize(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_MinimumSize();
}

bool QHBoxLayout_override_virtual_MaximumSize(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MaximumSize = slot;
	return true;
}

QSize* QHBoxLayout_virtualbase_MaximumSize(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_MaximumSize();
}

bool QHBoxLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QHBoxLayout_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_HasHeightForWidth();
}

bool QHBoxLayout_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QHBoxLayout_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QHBoxLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumHeightForWidth = slot;
	return true;
}

int QHBoxLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_MinimumHeightForWidth(param1);
}

bool QHBoxLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ExpandingDirections = slot;
	return true;
}

int QHBoxLayout_virtualbase_ExpandingDirections(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_ExpandingDirections();
}

bool QHBoxLayout_override_virtual_Invalidate(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Invalidate = slot;
	return true;
}

void QHBoxLayout_virtualbase_Invalidate(void* self) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_Invalidate();
}

bool QHBoxLayout_override_virtual_ItemAt(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemAt = slot;
	return true;
}

QLayoutItem* QHBoxLayout_virtualbase_ItemAt(const void* self, int param1) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_ItemAt(param1);
}

bool QHBoxLayout_override_virtual_TakeAt(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TakeAt = slot;
	return true;
}

QLayoutItem* QHBoxLayout_virtualbase_TakeAt(void* self, int param1) {
	return ( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_TakeAt(param1);
}

bool QHBoxLayout_override_virtual_Count(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Count = slot;
	return true;
}

int QHBoxLayout_virtualbase_Count(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_Count();
}

bool QHBoxLayout_override_virtual_SetGeometry(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetGeometry = slot;
	return true;
}

void QHBoxLayout_virtualbase_SetGeometry(void* self, QRect* geometry) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_SetGeometry(geometry);
}

bool QHBoxLayout_override_virtual_Geometry(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Geometry = slot;
	return true;
}

QRect* QHBoxLayout_virtualbase_Geometry(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_Geometry();
}

bool QHBoxLayout_override_virtual_IndexOf(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexOf = slot;
	return true;
}

int QHBoxLayout_virtualbase_IndexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_IndexOf(param1);
}

bool QHBoxLayout_override_virtual_IsEmpty(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsEmpty = slot;
	return true;
}

bool QHBoxLayout_virtualbase_IsEmpty(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_IsEmpty();
}

bool QHBoxLayout_override_virtual_ControlTypes(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ControlTypes = slot;
	return true;
}

int QHBoxLayout_virtualbase_ControlTypes(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_ControlTypes();
}

bool QHBoxLayout_override_virtual_ReplaceWidget(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReplaceWidget = slot;
	return true;
}

QLayoutItem* QHBoxLayout_virtualbase_ReplaceWidget(void* self, QWidget* from, QWidget* to, int options) {
	return ( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_ReplaceWidget(from, to, options);
}

bool QHBoxLayout_override_virtual_Layout(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Layout = slot;
	return true;
}

QLayout* QHBoxLayout_virtualbase_Layout(void* self) {
	return ( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_Layout();
}

bool QHBoxLayout_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QHBoxLayout_virtualbase_ChildEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_ChildEvent(e);
}

bool QHBoxLayout_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QHBoxLayout_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_Event(event);
}

bool QHBoxLayout_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QHBoxLayout_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QHBoxLayout_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QHBoxLayout_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_TimerEvent(event);
}

bool QHBoxLayout_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QHBoxLayout_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_CustomEvent(event);
}

bool QHBoxLayout_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QHBoxLayout_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QHBoxLayout_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QHBoxLayout_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_DisconnectNotify(signal);
}

bool QHBoxLayout_override_virtual_Widget(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Widget = slot;
	return true;
}

QWidget* QHBoxLayout_virtualbase_Widget(const void* self) {
	return ( (const MiqtVirtualQHBoxLayout*)(self) )->virtualbase_Widget();
}

bool QHBoxLayout_override_virtual_SpacerItem(void* self, intptr_t slot) {
	MiqtVirtualQHBoxLayout* self_cast = dynamic_cast<MiqtVirtualQHBoxLayout*>( (QHBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SpacerItem = slot;
	return true;
}

QSpacerItem* QHBoxLayout_virtualbase_SpacerItem(void* self) {
	return ( (MiqtVirtualQHBoxLayout*)(self) )->virtualbase_SpacerItem();
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
		

		int callback_return_value = miqt_exec_callback_QVBoxLayout_Spacing(this, handle__Spacing);

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
		

		QSize* callback_return_value = miqt_exec_callback_QVBoxLayout_SizeHint(this, handle__SizeHint);

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
		

		QSize* callback_return_value = miqt_exec_callback_QVBoxLayout_MinimumSize(this, handle__MinimumSize);

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
		

		QSize* callback_return_value = miqt_exec_callback_QVBoxLayout_MaximumSize(this, handle__MaximumSize);

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
		

		bool callback_return_value = miqt_exec_callback_QVBoxLayout_HasHeightForWidth(this, handle__HasHeightForWidth);

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

		int callback_return_value = miqt_exec_callback_QVBoxLayout_HeightForWidth(this, handle__HeightForWidth, sigval1);

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

		int callback_return_value = miqt_exec_callback_QVBoxLayout_MinimumHeightForWidth(this, handle__MinimumHeightForWidth, sigval1);

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
		

		int callback_return_value = miqt_exec_callback_QVBoxLayout_ExpandingDirections(this, handle__ExpandingDirections);

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

		QLayoutItem* callback_return_value = miqt_exec_callback_QVBoxLayout_ItemAt(this, handle__ItemAt, sigval1);

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
		

		int callback_return_value = miqt_exec_callback_QVBoxLayout_Count(this, handle__Count);

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Geometry = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (handle__Geometry == 0) {
			return QVBoxLayout::geometry();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QVBoxLayout_Geometry(this, handle__Geometry);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_Geometry() const {

		return new QRect(QVBoxLayout::geometry());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(const QWidget* param1) const override {
		if (handle__IndexOf == 0) {
			return QVBoxLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = (QWidget*) param1;

		int callback_return_value = miqt_exec_callback_QVBoxLayout_IndexOf(this, handle__IndexOf, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndexOf(QWidget* param1) const {

		return QVBoxLayout::indexOf(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__IsEmpty == 0) {
			return QVBoxLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QVBoxLayout_IsEmpty(this, handle__IsEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEmpty() const {

		return QVBoxLayout::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ControlTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (handle__ControlTypes == 0) {
			return QVBoxLayout::controlTypes();
		}
		

		int callback_return_value = miqt_exec_callback_QVBoxLayout_ControlTypes(this, handle__ControlTypes);

		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ControlTypes() const {

		QSizePolicy::ControlTypes _ret = QVBoxLayout::controlTypes();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReplaceWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
		if (handle__ReplaceWidget == 0) {
			return QVBoxLayout::replaceWidget(from, to, options);
		}
		
		QWidget* sigval1 = from;
		QWidget* sigval2 = to;
		Qt::FindChildOptions options_ret = options;
		int sigval3 = static_cast<int>(options_ret);

		QLayoutItem* callback_return_value = miqt_exec_callback_QVBoxLayout_ReplaceWidget(this, handle__ReplaceWidget, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_ReplaceWidget(QWidget* from, QWidget* to, int options) {

		return QVBoxLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Layout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (handle__Layout == 0) {
			return QVBoxLayout::layout();
		}
		

		QLayout* callback_return_value = miqt_exec_callback_QVBoxLayout_Layout(this, handle__Layout);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayout* virtualbase_Layout() {

		return QVBoxLayout::layout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (handle__ChildEvent == 0) {
			QVBoxLayout::childEvent(e);
			return;
		}
		
		QChildEvent* sigval1 = e;

		miqt_exec_callback_QVBoxLayout_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* e) {

		QVBoxLayout::childEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QVBoxLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QVBoxLayout_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QVBoxLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QVBoxLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QVBoxLayout_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QVBoxLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QVBoxLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QVBoxLayout_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QVBoxLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QVBoxLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QVBoxLayout_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QVBoxLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QVBoxLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVBoxLayout_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QVBoxLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QVBoxLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVBoxLayout_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QVBoxLayout::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() const override {
		if (handle__Widget == 0) {
			return QVBoxLayout::widget();
		}
		

		QWidget* callback_return_value = miqt_exec_callback_QVBoxLayout_Widget(this, handle__Widget);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_Widget() const {

		return QVBoxLayout::widget();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SpacerItem = 0;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (handle__SpacerItem == 0) {
			return QVBoxLayout::spacerItem();
		}
		

		QSpacerItem* callback_return_value = miqt_exec_callback_QVBoxLayout_SpacerItem(this, handle__SpacerItem);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSpacerItem* virtualbase_SpacerItem() {

		return QVBoxLayout::spacerItem();

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

bool QVBoxLayout_override_virtual_AddItem(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AddItem = slot;
	return true;
}

void QVBoxLayout_virtualbase_AddItem(void* self, QLayoutItem* param1) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_AddItem(param1);
}

bool QVBoxLayout_override_virtual_Spacing(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Spacing = slot;
	return true;
}

int QVBoxLayout_virtualbase_Spacing(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_Spacing();
}

bool QVBoxLayout_override_virtual_SetSpacing(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSpacing = slot;
	return true;
}

void QVBoxLayout_virtualbase_SetSpacing(void* self, int spacing) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_SetSpacing(spacing);
}

bool QVBoxLayout_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QVBoxLayout_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_SizeHint();
}

bool QVBoxLayout_override_virtual_MinimumSize(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSize = slot;
	return true;
}

QSize* QVBoxLayout_virtualbase_MinimumSize(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_MinimumSize();
}

bool QVBoxLayout_override_virtual_MaximumSize(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MaximumSize = slot;
	return true;
}

QSize* QVBoxLayout_virtualbase_MaximumSize(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_MaximumSize();
}

bool QVBoxLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QVBoxLayout_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_HasHeightForWidth();
}

bool QVBoxLayout_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QVBoxLayout_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QVBoxLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumHeightForWidth = slot;
	return true;
}

int QVBoxLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_MinimumHeightForWidth(param1);
}

bool QVBoxLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ExpandingDirections = slot;
	return true;
}

int QVBoxLayout_virtualbase_ExpandingDirections(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_ExpandingDirections();
}

bool QVBoxLayout_override_virtual_Invalidate(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Invalidate = slot;
	return true;
}

void QVBoxLayout_virtualbase_Invalidate(void* self) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_Invalidate();
}

bool QVBoxLayout_override_virtual_ItemAt(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemAt = slot;
	return true;
}

QLayoutItem* QVBoxLayout_virtualbase_ItemAt(const void* self, int param1) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_ItemAt(param1);
}

bool QVBoxLayout_override_virtual_TakeAt(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TakeAt = slot;
	return true;
}

QLayoutItem* QVBoxLayout_virtualbase_TakeAt(void* self, int param1) {
	return ( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_TakeAt(param1);
}

bool QVBoxLayout_override_virtual_Count(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Count = slot;
	return true;
}

int QVBoxLayout_virtualbase_Count(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_Count();
}

bool QVBoxLayout_override_virtual_SetGeometry(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetGeometry = slot;
	return true;
}

void QVBoxLayout_virtualbase_SetGeometry(void* self, QRect* geometry) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_SetGeometry(geometry);
}

bool QVBoxLayout_override_virtual_Geometry(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Geometry = slot;
	return true;
}

QRect* QVBoxLayout_virtualbase_Geometry(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_Geometry();
}

bool QVBoxLayout_override_virtual_IndexOf(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndexOf = slot;
	return true;
}

int QVBoxLayout_virtualbase_IndexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_IndexOf(param1);
}

bool QVBoxLayout_override_virtual_IsEmpty(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsEmpty = slot;
	return true;
}

bool QVBoxLayout_virtualbase_IsEmpty(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_IsEmpty();
}

bool QVBoxLayout_override_virtual_ControlTypes(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ControlTypes = slot;
	return true;
}

int QVBoxLayout_virtualbase_ControlTypes(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_ControlTypes();
}

bool QVBoxLayout_override_virtual_ReplaceWidget(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReplaceWidget = slot;
	return true;
}

QLayoutItem* QVBoxLayout_virtualbase_ReplaceWidget(void* self, QWidget* from, QWidget* to, int options) {
	return ( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_ReplaceWidget(from, to, options);
}

bool QVBoxLayout_override_virtual_Layout(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Layout = slot;
	return true;
}

QLayout* QVBoxLayout_virtualbase_Layout(void* self) {
	return ( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_Layout();
}

bool QVBoxLayout_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QVBoxLayout_virtualbase_ChildEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_ChildEvent(e);
}

bool QVBoxLayout_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QVBoxLayout_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_Event(event);
}

bool QVBoxLayout_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QVBoxLayout_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QVBoxLayout_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QVBoxLayout_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_TimerEvent(event);
}

bool QVBoxLayout_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QVBoxLayout_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_CustomEvent(event);
}

bool QVBoxLayout_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QVBoxLayout_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QVBoxLayout_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QVBoxLayout_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_DisconnectNotify(signal);
}

bool QVBoxLayout_override_virtual_Widget(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Widget = slot;
	return true;
}

QWidget* QVBoxLayout_virtualbase_Widget(const void* self) {
	return ( (const MiqtVirtualQVBoxLayout*)(self) )->virtualbase_Widget();
}

bool QVBoxLayout_override_virtual_SpacerItem(void* self, intptr_t slot) {
	MiqtVirtualQVBoxLayout* self_cast = dynamic_cast<MiqtVirtualQVBoxLayout*>( (QVBoxLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SpacerItem = slot;
	return true;
}

QSpacerItem* QVBoxLayout_virtualbase_SpacerItem(void* self) {
	return ( (MiqtVirtualQVBoxLayout*)(self) )->virtualbase_SpacerItem();
}

void QVBoxLayout_Delete(QVBoxLayout* self) {
	delete self;
}

