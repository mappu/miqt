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

int miqt_exec_callback_QFormLayout_spacing(const QFormLayout*, intptr_t);
void miqt_exec_callback_QFormLayout_setSpacing(QFormLayout*, intptr_t, int);
void miqt_exec_callback_QFormLayout_addItem(QFormLayout*, intptr_t, QLayoutItem*);
QLayoutItem* miqt_exec_callback_QFormLayout_itemAtWithIndex(const QFormLayout*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QFormLayout_takeAt(QFormLayout*, intptr_t, int);
void miqt_exec_callback_QFormLayout_setGeometry(QFormLayout*, intptr_t, QRect*);
QSize* miqt_exec_callback_QFormLayout_minimumSize(const QFormLayout*, intptr_t);
QSize* miqt_exec_callback_QFormLayout_sizeHint(const QFormLayout*, intptr_t);
void miqt_exec_callback_QFormLayout_invalidate(QFormLayout*, intptr_t);
bool miqt_exec_callback_QFormLayout_hasHeightForWidth(const QFormLayout*, intptr_t);
int miqt_exec_callback_QFormLayout_heightForWidth(const QFormLayout*, intptr_t, int);
int miqt_exec_callback_QFormLayout_expandingDirections(const QFormLayout*, intptr_t);
int miqt_exec_callback_QFormLayout_count(const QFormLayout*, intptr_t);
QRect* miqt_exec_callback_QFormLayout_geometry(const QFormLayout*, intptr_t);
QSize* miqt_exec_callback_QFormLayout_maximumSize(const QFormLayout*, intptr_t);
int miqt_exec_callback_QFormLayout_indexOf(const QFormLayout*, intptr_t, QWidget*);
bool miqt_exec_callback_QFormLayout_isEmpty(const QFormLayout*, intptr_t);
int miqt_exec_callback_QFormLayout_controlTypes(const QFormLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QFormLayout_replaceWidget(QFormLayout*, intptr_t, QWidget*, QWidget*, int);
QLayout* miqt_exec_callback_QFormLayout_layout(QFormLayout*, intptr_t);
void miqt_exec_callback_QFormLayout_childEvent(QFormLayout*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QFormLayout_event(QFormLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QFormLayout_eventFilter(QFormLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFormLayout_timerEvent(QFormLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFormLayout_customEvent(QFormLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QFormLayout_connectNotify(QFormLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFormLayout_disconnectNotify(QFormLayout*, intptr_t, QMetaMethod*);
int miqt_exec_callback_QFormLayout_minimumHeightForWidth(const QFormLayout*, intptr_t, int);
QWidget* miqt_exec_callback_QFormLayout_widget(const QFormLayout*, intptr_t);
QSpacerItem* miqt_exec_callback_QFormLayout_spacerItem(QFormLayout*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFormLayout final : public QFormLayout {
public:

	MiqtVirtualQFormLayout(QWidget* parent): QFormLayout(parent) {};
	MiqtVirtualQFormLayout(): QFormLayout() {};

	virtual ~MiqtVirtualQFormLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__spacing = 0;

	// Subclass to allow providing a Go implementation
	virtual int spacing() const override {
		if (handle__spacing == 0) {
			return QFormLayout::spacing();
		}
		

		int callback_return_value = miqt_exec_callback_QFormLayout_spacing(this, handle__spacing);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_spacing() const {

		return QFormLayout::spacing();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSpacing = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSpacing(int spacing) override {
		if (handle__setSpacing == 0) {
			QFormLayout::setSpacing(spacing);
			return;
		}
		
		int sigval1 = spacing;

		miqt_exec_callback_QFormLayout_setSpacing(this, handle__setSpacing, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSpacing(int spacing) {

		QFormLayout::setSpacing(static_cast<int>(spacing));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* item) override {
		if (handle__addItem == 0) {
			QFormLayout::addItem(item);
			return;
		}
		
		QLayoutItem* sigval1 = item;

		miqt_exec_callback_QFormLayout_addItem(this, handle__addItem, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_addItem(QLayoutItem* item) {

		QFormLayout::addItem(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemAtWithIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int index) const override {
		if (handle__itemAtWithIndex == 0) {
			return QFormLayout::itemAt(index);
		}
		
		int sigval1 = index;

		QLayoutItem* callback_return_value = miqt_exec_callback_QFormLayout_itemAtWithIndex(this, handle__itemAtWithIndex, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_itemAtWithIndex(int index) const {

		return QFormLayout::itemAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__takeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int index) override {
		if (handle__takeAt == 0) {
			return QFormLayout::takeAt(index);
		}
		
		int sigval1 = index;

		QLayoutItem* callback_return_value = miqt_exec_callback_QFormLayout_takeAt(this, handle__takeAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_takeAt(int index) {

		return QFormLayout::takeAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& rect) override {
		if (handle__setGeometry == 0) {
			QFormLayout::setGeometry(rect);
			return;
		}
		
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);

		miqt_exec_callback_QFormLayout_setGeometry(this, handle__setGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setGeometry(QRect* rect) {

		QFormLayout::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (handle__minimumSize == 0) {
			return QFormLayout::minimumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFormLayout_minimumSize(this, handle__minimumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSize() const {

		return new QSize(QFormLayout::minimumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QFormLayout::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFormLayout_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QFormLayout::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__invalidate == 0) {
			QFormLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QFormLayout_invalidate(this, handle__invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_invalidate() {

		QFormLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QFormLayout::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QFormLayout_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QFormLayout::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int width) const override {
		if (handle__heightForWidth == 0) {
			return QFormLayout::heightForWidth(width);
		}
		
		int sigval1 = width;

		int callback_return_value = miqt_exec_callback_QFormLayout_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int width) const {

		return QFormLayout::heightForWidth(static_cast<int>(width));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__expandingDirections = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (handle__expandingDirections == 0) {
			return QFormLayout::expandingDirections();
		}
		

		int callback_return_value = miqt_exec_callback_QFormLayout_expandingDirections(this, handle__expandingDirections);

		return static_cast<Qt::Orientations>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_expandingDirections() const {

		Qt::Orientations _ret = QFormLayout::expandingDirections();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__count == 0) {
			return QFormLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QFormLayout_count(this, handle__count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_count() const {

		return QFormLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__geometry = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (handle__geometry == 0) {
			return QFormLayout::geometry();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QFormLayout_geometry(this, handle__geometry);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_geometry() const {

		return new QRect(QFormLayout::geometry());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__maximumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (handle__maximumSize == 0) {
			return QFormLayout::maximumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFormLayout_maximumSize(this, handle__maximumSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_maximumSize() const {

		return new QSize(QFormLayout::maximumSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(const QWidget* param1) const override {
		if (handle__indexOf == 0) {
			return QFormLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = (QWidget*) param1;

		int callback_return_value = miqt_exec_callback_QFormLayout_indexOf(this, handle__indexOf, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_indexOf(QWidget* param1) const {

		return QFormLayout::indexOf(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__isEmpty == 0) {
			return QFormLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QFormLayout_isEmpty(this, handle__isEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isEmpty() const {

		return QFormLayout::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__controlTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (handle__controlTypes == 0) {
			return QFormLayout::controlTypes();
		}
		

		int callback_return_value = miqt_exec_callback_QFormLayout_controlTypes(this, handle__controlTypes);

		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_controlTypes() const {

		QSizePolicy::ControlTypes _ret = QFormLayout::controlTypes();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__replaceWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
		if (handle__replaceWidget == 0) {
			return QFormLayout::replaceWidget(from, to, options);
		}
		
		QWidget* sigval1 = from;
		QWidget* sigval2 = to;
		Qt::FindChildOptions options_ret = options;
		int sigval3 = static_cast<int>(options_ret);

		QLayoutItem* callback_return_value = miqt_exec_callback_QFormLayout_replaceWidget(this, handle__replaceWidget, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayoutItem* virtualbase_replaceWidget(QWidget* from, QWidget* to, int options) {

		return QFormLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__layout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (handle__layout == 0) {
			return QFormLayout::layout();
		}
		

		QLayout* callback_return_value = miqt_exec_callback_QFormLayout_layout(this, handle__layout);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QLayout* virtualbase_layout() {

		return QFormLayout::layout();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (handle__childEvent == 0) {
			QFormLayout::childEvent(e);
			return;
		}
		
		QChildEvent* sigval1 = e;

		miqt_exec_callback_QFormLayout_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* e) {

		QFormLayout::childEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QFormLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QFormLayout_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QFormLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QFormLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QFormLayout_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QFormLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QFormLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QFormLayout_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QFormLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QFormLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFormLayout_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QFormLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QFormLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFormLayout_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QFormLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QFormLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFormLayout_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QFormLayout::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (handle__minimumHeightForWidth == 0) {
			return QFormLayout::minimumHeightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QFormLayout_minimumHeightForWidth(this, handle__minimumHeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_minimumHeightForWidth(int param1) const {

		return QFormLayout::minimumHeightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() const override {
		if (handle__widget == 0) {
			return QFormLayout::widget();
		}
		

		QWidget* callback_return_value = miqt_exec_callback_QFormLayout_widget(this, handle__widget);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_widget() const {

		return QFormLayout::widget();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__spacerItem = 0;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (handle__spacerItem == 0) {
			return QFormLayout::spacerItem();
		}
		

		QSpacerItem* callback_return_value = miqt_exec_callback_QFormLayout_spacerItem(this, handle__spacerItem);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSpacerItem* virtualbase_spacerItem() {

		return QFormLayout::spacerItem();

	}

	// Wrappers to allow calling protected methods:
	friend void QFormLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
	friend void QFormLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
	friend void QFormLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
	friend bool QFormLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
	friend QRect* QFormLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
	friend QObject* QFormLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QFormLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QFormLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QFormLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QFormLayout_metaObject(const QFormLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFormLayout_metacast(QFormLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFormLayout_tr(const char* s) {
	QString _ret = QFormLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFormLayout_setFieldGrowthPolicy(QFormLayout* self, int policy) {
	self->setFieldGrowthPolicy(static_cast<QFormLayout::FieldGrowthPolicy>(policy));
}

int QFormLayout_fieldGrowthPolicy(const QFormLayout* self) {
	QFormLayout::FieldGrowthPolicy _ret = self->fieldGrowthPolicy();
	return static_cast<int>(_ret);
}

void QFormLayout_setRowWrapPolicy(QFormLayout* self, int policy) {
	self->setRowWrapPolicy(static_cast<QFormLayout::RowWrapPolicy>(policy));
}

int QFormLayout_rowWrapPolicy(const QFormLayout* self) {
	QFormLayout::RowWrapPolicy _ret = self->rowWrapPolicy();
	return static_cast<int>(_ret);
}

void QFormLayout_setLabelAlignment(QFormLayout* self, int alignment) {
	self->setLabelAlignment(static_cast<Qt::Alignment>(alignment));
}

int QFormLayout_labelAlignment(const QFormLayout* self) {
	Qt::Alignment _ret = self->labelAlignment();
	return static_cast<int>(_ret);
}

void QFormLayout_setFormAlignment(QFormLayout* self, int alignment) {
	self->setFormAlignment(static_cast<Qt::Alignment>(alignment));
}

int QFormLayout_formAlignment(const QFormLayout* self) {
	Qt::Alignment _ret = self->formAlignment();
	return static_cast<int>(_ret);
}

void QFormLayout_setHorizontalSpacing(QFormLayout* self, int spacing) {
	self->setHorizontalSpacing(static_cast<int>(spacing));
}

int QFormLayout_horizontalSpacing(const QFormLayout* self) {
	return self->horizontalSpacing();
}

void QFormLayout_setVerticalSpacing(QFormLayout* self, int spacing) {
	self->setVerticalSpacing(static_cast<int>(spacing));
}

int QFormLayout_verticalSpacing(const QFormLayout* self) {
	return self->verticalSpacing();
}

int QFormLayout_spacing(const QFormLayout* self) {
	return self->spacing();
}

void QFormLayout_setSpacing(QFormLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

void QFormLayout_addRow(QFormLayout* self, QWidget* label, QWidget* field) {
	self->addRow(label, field);
}

void QFormLayout_addRow2(QFormLayout* self, QWidget* label, QLayout* field) {
	self->addRow(label, field);
}

void QFormLayout_addRow3(QFormLayout* self, struct miqt_string labelText, QWidget* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	self->addRow(labelText_QString, field);
}

void QFormLayout_addRow4(QFormLayout* self, struct miqt_string labelText, QLayout* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	self->addRow(labelText_QString, field);
}

void QFormLayout_addRowWithWidget(QFormLayout* self, QWidget* widget) {
	self->addRow(widget);
}

void QFormLayout_addRowWithLayout(QFormLayout* self, QLayout* layout) {
	self->addRow(layout);
}

void QFormLayout_insertRow(QFormLayout* self, int row, QWidget* label, QWidget* field) {
	self->insertRow(static_cast<int>(row), label, field);
}

void QFormLayout_insertRow2(QFormLayout* self, int row, QWidget* label, QLayout* field) {
	self->insertRow(static_cast<int>(row), label, field);
}

void QFormLayout_insertRow3(QFormLayout* self, int row, struct miqt_string labelText, QWidget* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	self->insertRow(static_cast<int>(row), labelText_QString, field);
}

void QFormLayout_insertRow4(QFormLayout* self, int row, struct miqt_string labelText, QLayout* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	self->insertRow(static_cast<int>(row), labelText_QString, field);
}

void QFormLayout_insertRow5(QFormLayout* self, int row, QWidget* widget) {
	self->insertRow(static_cast<int>(row), widget);
}

void QFormLayout_insertRow6(QFormLayout* self, int row, QLayout* layout) {
	self->insertRow(static_cast<int>(row), layout);
}

void QFormLayout_removeRow(QFormLayout* self, int row) {
	self->removeRow(static_cast<int>(row));
}

void QFormLayout_removeRowWithWidget(QFormLayout* self, QWidget* widget) {
	self->removeRow(widget);
}

void QFormLayout_removeRowWithLayout(QFormLayout* self, QLayout* layout) {
	self->removeRow(layout);
}

QFormLayout__TakeRowResult* QFormLayout_takeRow(QFormLayout* self, int row) {
	return new QFormLayout::TakeRowResult(self->takeRow(static_cast<int>(row)));
}

QFormLayout__TakeRowResult* QFormLayout_takeRowWithWidget(QFormLayout* self, QWidget* widget) {
	return new QFormLayout::TakeRowResult(self->takeRow(widget));
}

QFormLayout__TakeRowResult* QFormLayout_takeRowWithLayout(QFormLayout* self, QLayout* layout) {
	return new QFormLayout::TakeRowResult(self->takeRow(layout));
}

void QFormLayout_setItem(QFormLayout* self, int row, int role, QLayoutItem* item) {
	self->setItem(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role), item);
}

void QFormLayout_setWidget(QFormLayout* self, int row, int role, QWidget* widget) {
	self->setWidget(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role), widget);
}

void QFormLayout_setLayout(QFormLayout* self, int row, int role, QLayout* layout) {
	self->setLayout(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role), layout);
}

void QFormLayout_setRowVisible(QFormLayout* self, int row, bool on) {
	self->setRowVisible(static_cast<int>(row), on);
}

void QFormLayout_setRowVisible2(QFormLayout* self, QWidget* widget, bool on) {
	self->setRowVisible(widget, on);
}

void QFormLayout_setRowVisible3(QFormLayout* self, QLayout* layout, bool on) {
	self->setRowVisible(layout, on);
}

bool QFormLayout_isRowVisible(const QFormLayout* self, int row) {
	return self->isRowVisible(static_cast<int>(row));
}

bool QFormLayout_isRowVisibleWithWidget(const QFormLayout* self, QWidget* widget) {
	return self->isRowVisible(widget);
}

bool QFormLayout_isRowVisibleWithLayout(const QFormLayout* self, QLayout* layout) {
	return self->isRowVisible(layout);
}

QLayoutItem* QFormLayout_itemAt(const QFormLayout* self, int row, int role) {
	return self->itemAt(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role));
}

QWidget* QFormLayout_labelForField(const QFormLayout* self, QWidget* field) {
	return self->labelForField(field);
}

QWidget* QFormLayout_labelForFieldWithField(const QFormLayout* self, QLayout* field) {
	return self->labelForField(field);
}

void QFormLayout_addItem(QFormLayout* self, QLayoutItem* item) {
	self->addItem(item);
}

QLayoutItem* QFormLayout_itemAtWithIndex(const QFormLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QFormLayout_takeAt(QFormLayout* self, int index) {
	return self->takeAt(static_cast<int>(index));
}

void QFormLayout_setGeometry(QFormLayout* self, QRect* rect) {
	self->setGeometry(*rect);
}

QSize* QFormLayout_minimumSize(const QFormLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QFormLayout_sizeHint(const QFormLayout* self) {
	return new QSize(self->sizeHint());
}

void QFormLayout_invalidate(QFormLayout* self) {
	self->invalidate();
}

bool QFormLayout_hasHeightForWidth(const QFormLayout* self) {
	return self->hasHeightForWidth();
}

int QFormLayout_heightForWidth(const QFormLayout* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

int QFormLayout_expandingDirections(const QFormLayout* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

int QFormLayout_count(const QFormLayout* self) {
	return self->count();
}

int QFormLayout_rowCount(const QFormLayout* self) {
	return self->rowCount();
}

struct miqt_string QFormLayout_tr2(const char* s, const char* c) {
	QString _ret = QFormLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFormLayout_tr3(const char* s, const char* c, int n) {
	QString _ret = QFormLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFormLayout_override_virtual_spacing(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__spacing = slot;
	return true;
}

int QFormLayout_virtualbase_spacing(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_spacing();
}

bool QFormLayout_override_virtual_setSpacing(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSpacing = slot;
	return true;
}

void QFormLayout_virtualbase_setSpacing(void* self, int spacing) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_setSpacing(spacing);
}

bool QFormLayout_override_virtual_addItem(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__addItem = slot;
	return true;
}

void QFormLayout_virtualbase_addItem(void* self, QLayoutItem* item) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_addItem(item);
}

bool QFormLayout_override_virtual_itemAtWithIndex(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemAtWithIndex = slot;
	return true;
}

QLayoutItem* QFormLayout_virtualbase_itemAtWithIndex(const void* self, int index) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_itemAtWithIndex(index);
}

bool QFormLayout_override_virtual_takeAt(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__takeAt = slot;
	return true;
}

QLayoutItem* QFormLayout_virtualbase_takeAt(void* self, int index) {
	return ( (MiqtVirtualQFormLayout*)(self) )->virtualbase_takeAt(index);
}

bool QFormLayout_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setGeometry = slot;
	return true;
}

void QFormLayout_virtualbase_setGeometry(void* self, QRect* rect) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_setGeometry(rect);
}

bool QFormLayout_override_virtual_minimumSize(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSize = slot;
	return true;
}

QSize* QFormLayout_virtualbase_minimumSize(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_minimumSize();
}

bool QFormLayout_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QFormLayout_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_sizeHint();
}

bool QFormLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__invalidate = slot;
	return true;
}

void QFormLayout_virtualbase_invalidate(void* self) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_invalidate();
}

bool QFormLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QFormLayout_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_hasHeightForWidth();
}

bool QFormLayout_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QFormLayout_virtualbase_heightForWidth(const void* self, int width) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_heightForWidth(width);
}

bool QFormLayout_override_virtual_expandingDirections(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__expandingDirections = slot;
	return true;
}

int QFormLayout_virtualbase_expandingDirections(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_expandingDirections();
}

bool QFormLayout_override_virtual_count(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__count = slot;
	return true;
}

int QFormLayout_virtualbase_count(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_count();
}

bool QFormLayout_override_virtual_geometry(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__geometry = slot;
	return true;
}

QRect* QFormLayout_virtualbase_geometry(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_geometry();
}

bool QFormLayout_override_virtual_maximumSize(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__maximumSize = slot;
	return true;
}

QSize* QFormLayout_virtualbase_maximumSize(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_maximumSize();
}

bool QFormLayout_override_virtual_indexOf(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indexOf = slot;
	return true;
}

int QFormLayout_virtualbase_indexOf(const void* self, QWidget* param1) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_indexOf(param1);
}

bool QFormLayout_override_virtual_isEmpty(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isEmpty = slot;
	return true;
}

bool QFormLayout_virtualbase_isEmpty(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_isEmpty();
}

bool QFormLayout_override_virtual_controlTypes(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__controlTypes = slot;
	return true;
}

int QFormLayout_virtualbase_controlTypes(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_controlTypes();
}

bool QFormLayout_override_virtual_replaceWidget(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__replaceWidget = slot;
	return true;
}

QLayoutItem* QFormLayout_virtualbase_replaceWidget(void* self, QWidget* from, QWidget* to, int options) {
	return ( (MiqtVirtualQFormLayout*)(self) )->virtualbase_replaceWidget(from, to, options);
}

bool QFormLayout_override_virtual_layout(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__layout = slot;
	return true;
}

QLayout* QFormLayout_virtualbase_layout(void* self) {
	return ( (MiqtVirtualQFormLayout*)(self) )->virtualbase_layout();
}

bool QFormLayout_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QFormLayout_virtualbase_childEvent(void* self, QChildEvent* e) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_childEvent(e);
}

bool QFormLayout_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QFormLayout_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQFormLayout*)(self) )->virtualbase_event(event);
}

bool QFormLayout_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QFormLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQFormLayout*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QFormLayout_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QFormLayout_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_timerEvent(event);
}

bool QFormLayout_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QFormLayout_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_customEvent(event);
}

bool QFormLayout_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QFormLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_connectNotify(signal);
}

bool QFormLayout_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QFormLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFormLayout*)(self) )->virtualbase_disconnectNotify(signal);
}

bool QFormLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumHeightForWidth = slot;
	return true;
}

int QFormLayout_virtualbase_minimumHeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_minimumHeightForWidth(param1);
}

bool QFormLayout_override_virtual_widget(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__widget = slot;
	return true;
}

QWidget* QFormLayout_virtualbase_widget(const void* self) {
	return ( (const MiqtVirtualQFormLayout*)(self) )->virtualbase_widget();
}

bool QFormLayout_override_virtual_spacerItem(void* self, intptr_t slot) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__spacerItem = slot;
	return true;
}

QSpacerItem* QFormLayout_virtualbase_spacerItem(void* self) {
	return ( (MiqtVirtualQFormLayout*)(self) )->virtualbase_spacerItem();
}

void QFormLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->widgetEvent(param1);

}

void QFormLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildLayout(l);

}

void QFormLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildWidget(w);

}

bool QFormLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->adoptLayout(layout);

}

QRect* QFormLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRect(self_cast->alignmentRect(*param1));

}

QObject* QFormLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QFormLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QFormLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QFormLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QFormLayout_delete(QFormLayout* self) {
	delete self;
}

void QFormLayout__TakeRowResult_delete(QFormLayout__TakeRowResult* self) {
	delete self;
}

