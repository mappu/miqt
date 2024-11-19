#include <QAbstractSpinBox>
#include <QCalendar>
#include <QCalendarWidget>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDate>
#include <QDateEdit>
#include <QDateTime>
#include <QDateTimeEdit>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QKeyEvent>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTime>
#include <QTimeEdit>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qdatetimeedit.h>
#include "gen_qdatetimeedit.h"
#include "_cgo_export.h"

class MiqtVirtualQDateTimeEdit : public virtual QDateTimeEdit {
public:

	MiqtVirtualQDateTimeEdit(QWidget* parent): QDateTimeEdit(parent) {};
	MiqtVirtualQDateTimeEdit(): QDateTimeEdit() {};
	MiqtVirtualQDateTimeEdit(const QDateTime& dt): QDateTimeEdit(dt) {};
	MiqtVirtualQDateTimeEdit(const QDate& d): QDateTimeEdit(d) {};
	MiqtVirtualQDateTimeEdit(const QTime& t): QDateTimeEdit(t) {};
	MiqtVirtualQDateTimeEdit(const QDateTime& dt, QWidget* parent): QDateTimeEdit(dt, parent) {};
	MiqtVirtualQDateTimeEdit(const QDate& d, QWidget* parent): QDateTimeEdit(d, parent) {};
	MiqtVirtualQDateTimeEdit(const QTime& t, QWidget* parent): QDateTimeEdit(t, parent) {};

	virtual ~MiqtVirtualQDateTimeEdit() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QDateTimeEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDateTimeEdit_SizeHint(const_cast<MiqtVirtualQDateTimeEdit*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QDateTimeEdit::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__Clear == 0) {
			QDateTimeEdit::clear();
			return;
		}
		

		miqt_exec_callback_QDateTimeEdit_Clear(this, handle__Clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Clear() {

		QDateTimeEdit::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StepBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void stepBy(int steps) override {
		if (handle__StepBy == 0) {
			QDateTimeEdit::stepBy(steps);
			return;
		}
		
		int sigval1 = steps;

		miqt_exec_callback_QDateTimeEdit_StepBy(this, handle__StepBy, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StepBy(int steps) {

		QDateTimeEdit::stepBy(static_cast<int>(steps));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QDateTimeEdit::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDateTimeEdit_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QDateTimeEdit::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QDateTimeEdit::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QDateTimeEdit::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QDateTimeEdit::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QDateTimeEdit::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QDateTimeEdit::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QDateTimeEdit::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QDateTimeEdit::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QDateTimeEdit_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QDateTimeEdit::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__Validate == 0) {
			return QDateTimeEdit::validate(input, pos);
		}
		
		QString input_ret = input;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray input_b = input_ret.toUtf8();
		struct miqt_string input_ms;
		input_ms.len = input_b.length();
		input_ms.data = static_cast<char*>(malloc(input_ms.len));
		memcpy(input_ms.data, input_b.data(), input_ms.len);
		struct miqt_string sigval1 = input_ms;
		int* sigval2 = &pos;

		int callback_return_value = miqt_exec_callback_QDateTimeEdit_Validate(const_cast<MiqtVirtualQDateTimeEdit*>(this), handle__Validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QDateTimeEdit::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& input) const override {
		if (handle__Fixup == 0) {
			QDateTimeEdit::fixup(input);
			return;
		}
		
		QString input_ret = input;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray input_b = input_ret.toUtf8();
		struct miqt_string input_ms;
		input_ms.len = input_b.length();
		input_ms.data = static_cast<char*>(malloc(input_ms.len));
		memcpy(input_ms.data, input_b.data(), input_ms.len);
		struct miqt_string sigval1 = input_ms;

		miqt_exec_callback_QDateTimeEdit_Fixup(const_cast<MiqtVirtualQDateTimeEdit*>(this), handle__Fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Fixup(struct miqt_string input) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QDateTimeEdit::fixup(input_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DateTimeFromText = 0;

	// Subclass to allow providing a Go implementation
	virtual QDateTime dateTimeFromText(const QString& text) const override {
		if (handle__DateTimeFromText == 0) {
			return QDateTimeEdit::dateTimeFromText(text);
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		QDateTime* callback_return_value = miqt_exec_callback_QDateTimeEdit_DateTimeFromText(const_cast<MiqtVirtualQDateTimeEdit*>(this), handle__DateTimeFromText, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QDateTime* virtualbase_DateTimeFromText(struct miqt_string text) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		return new QDateTime(QDateTimeEdit::dateTimeFromText(text_QString));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TextFromDateTime = 0;

	// Subclass to allow providing a Go implementation
	virtual QString textFromDateTime(const QDateTime& dt) const override {
		if (handle__TextFromDateTime == 0) {
			return QDateTimeEdit::textFromDateTime(dt);
		}
		
		const QDateTime& dt_ret = dt;
		// Cast returned reference into pointer
		QDateTime* sigval1 = const_cast<QDateTime*>(&dt_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QDateTimeEdit_TextFromDateTime(const_cast<MiqtVirtualQDateTimeEdit*>(this), handle__TextFromDateTime, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_TextFromDateTime(QDateTime* dt) const {

		QString _ret = QDateTimeEdit::textFromDateTime(*dt);
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StepEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
		if (handle__StepEnabled == 0) {
			return QDateTimeEdit::stepEnabled();
		}
		

		int callback_return_value = miqt_exec_callback_QDateTimeEdit_StepEnabled(const_cast<MiqtVirtualQDateTimeEdit*>(this), handle__StepEnabled);

		return static_cast<QAbstractSpinBox::StepEnabled>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StepEnabled() const {

		QAbstractSpinBox::StepEnabled _ret = QDateTimeEdit::stepEnabled();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QDateTimeEdit::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QDateTimeEdit::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QDateTimeEdit::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QDateTimeEdit::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QDateTimeEdit::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDateTimeEdit_MinimumSizeHint(const_cast<MiqtVirtualQDateTimeEdit*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QDateTimeEdit::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QDateTimeEdit::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QDateTimeEdit_InputMethodQuery(const_cast<MiqtVirtualQDateTimeEdit*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QDateTimeEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QDateTimeEdit::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QDateTimeEdit::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QDateTimeEdit::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QDateTimeEdit::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QDateTimeEdit::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QDateTimeEdit::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QDateTimeEdit::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QDateTimeEdit::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QDateTimeEdit::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QDateTimeEdit::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QDateTimeEdit::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QDateTimeEdit::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QDateTimeEdit::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QDateTimeEdit::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QDateTimeEdit::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QDateTimeEdit::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QDateTimeEdit::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QDateTimeEdit::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QDateTimeEdit::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QDateTimeEdit::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QDateTimeEdit::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QDateTimeEdit::showEvent(event);

	}

};

void QDateTimeEdit_new(QWidget* parent, QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQDateTimeEdit* ret = new MiqtVirtualQDateTimeEdit(parent);
	*outptr_QDateTimeEdit = ret;
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QDateTimeEdit_new2(QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQDateTimeEdit* ret = new MiqtVirtualQDateTimeEdit();
	*outptr_QDateTimeEdit = ret;
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QDateTimeEdit_new3(QDateTime* dt, QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQDateTimeEdit* ret = new MiqtVirtualQDateTimeEdit(*dt);
	*outptr_QDateTimeEdit = ret;
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QDateTimeEdit_new4(QDate* d, QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQDateTimeEdit* ret = new MiqtVirtualQDateTimeEdit(*d);
	*outptr_QDateTimeEdit = ret;
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QDateTimeEdit_new5(QTime* t, QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQDateTimeEdit* ret = new MiqtVirtualQDateTimeEdit(*t);
	*outptr_QDateTimeEdit = ret;
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QDateTimeEdit_new6(QDateTime* dt, QWidget* parent, QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQDateTimeEdit* ret = new MiqtVirtualQDateTimeEdit(*dt, parent);
	*outptr_QDateTimeEdit = ret;
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QDateTimeEdit_new7(QDate* d, QWidget* parent, QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQDateTimeEdit* ret = new MiqtVirtualQDateTimeEdit(*d, parent);
	*outptr_QDateTimeEdit = ret;
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QDateTimeEdit_new8(QTime* t, QWidget* parent, QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQDateTimeEdit* ret = new MiqtVirtualQDateTimeEdit(*t, parent);
	*outptr_QDateTimeEdit = ret;
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

QMetaObject* QDateTimeEdit_MetaObject(const QDateTimeEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDateTimeEdit_Metacast(QDateTimeEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDateTimeEdit_Tr(const char* s) {
	QString _ret = QDateTimeEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateTimeEdit_TrUtf8(const char* s) {
	QString _ret = QDateTimeEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QDateTimeEdit_DateTime(const QDateTimeEdit* self) {
	return new QDateTime(self->dateTime());
}

QDate* QDateTimeEdit_Date(const QDateTimeEdit* self) {
	return new QDate(self->date());
}

QTime* QDateTimeEdit_Time(const QDateTimeEdit* self) {
	return new QTime(self->time());
}

QCalendar* QDateTimeEdit_Calendar(const QDateTimeEdit* self) {
	return new QCalendar(self->calendar());
}

void QDateTimeEdit_SetCalendar(QDateTimeEdit* self, QCalendar* calendar) {
	self->setCalendar(*calendar);
}

QDateTime* QDateTimeEdit_MinimumDateTime(const QDateTimeEdit* self) {
	return new QDateTime(self->minimumDateTime());
}

void QDateTimeEdit_ClearMinimumDateTime(QDateTimeEdit* self) {
	self->clearMinimumDateTime();
}

void QDateTimeEdit_SetMinimumDateTime(QDateTimeEdit* self, QDateTime* dt) {
	self->setMinimumDateTime(*dt);
}

QDateTime* QDateTimeEdit_MaximumDateTime(const QDateTimeEdit* self) {
	return new QDateTime(self->maximumDateTime());
}

void QDateTimeEdit_ClearMaximumDateTime(QDateTimeEdit* self) {
	self->clearMaximumDateTime();
}

void QDateTimeEdit_SetMaximumDateTime(QDateTimeEdit* self, QDateTime* dt) {
	self->setMaximumDateTime(*dt);
}

void QDateTimeEdit_SetDateTimeRange(QDateTimeEdit* self, QDateTime* min, QDateTime* max) {
	self->setDateTimeRange(*min, *max);
}

QDate* QDateTimeEdit_MinimumDate(const QDateTimeEdit* self) {
	return new QDate(self->minimumDate());
}

void QDateTimeEdit_SetMinimumDate(QDateTimeEdit* self, QDate* min) {
	self->setMinimumDate(*min);
}

void QDateTimeEdit_ClearMinimumDate(QDateTimeEdit* self) {
	self->clearMinimumDate();
}

QDate* QDateTimeEdit_MaximumDate(const QDateTimeEdit* self) {
	return new QDate(self->maximumDate());
}

void QDateTimeEdit_SetMaximumDate(QDateTimeEdit* self, QDate* max) {
	self->setMaximumDate(*max);
}

void QDateTimeEdit_ClearMaximumDate(QDateTimeEdit* self) {
	self->clearMaximumDate();
}

void QDateTimeEdit_SetDateRange(QDateTimeEdit* self, QDate* min, QDate* max) {
	self->setDateRange(*min, *max);
}

QTime* QDateTimeEdit_MinimumTime(const QDateTimeEdit* self) {
	return new QTime(self->minimumTime());
}

void QDateTimeEdit_SetMinimumTime(QDateTimeEdit* self, QTime* min) {
	self->setMinimumTime(*min);
}

void QDateTimeEdit_ClearMinimumTime(QDateTimeEdit* self) {
	self->clearMinimumTime();
}

QTime* QDateTimeEdit_MaximumTime(const QDateTimeEdit* self) {
	return new QTime(self->maximumTime());
}

void QDateTimeEdit_SetMaximumTime(QDateTimeEdit* self, QTime* max) {
	self->setMaximumTime(*max);
}

void QDateTimeEdit_ClearMaximumTime(QDateTimeEdit* self) {
	self->clearMaximumTime();
}

void QDateTimeEdit_SetTimeRange(QDateTimeEdit* self, QTime* min, QTime* max) {
	self->setTimeRange(*min, *max);
}

int QDateTimeEdit_DisplayedSections(const QDateTimeEdit* self) {
	QDateTimeEdit::Sections _ret = self->displayedSections();
	return static_cast<int>(_ret);
}

int QDateTimeEdit_CurrentSection(const QDateTimeEdit* self) {
	QDateTimeEdit::Section _ret = self->currentSection();
	return static_cast<int>(_ret);
}

int QDateTimeEdit_SectionAt(const QDateTimeEdit* self, int index) {
	QDateTimeEdit::Section _ret = self->sectionAt(static_cast<int>(index));
	return static_cast<int>(_ret);
}

void QDateTimeEdit_SetCurrentSection(QDateTimeEdit* self, int section) {
	self->setCurrentSection(static_cast<QDateTimeEdit::Section>(section));
}

int QDateTimeEdit_CurrentSectionIndex(const QDateTimeEdit* self) {
	return self->currentSectionIndex();
}

void QDateTimeEdit_SetCurrentSectionIndex(QDateTimeEdit* self, int index) {
	self->setCurrentSectionIndex(static_cast<int>(index));
}

QCalendarWidget* QDateTimeEdit_CalendarWidget(const QDateTimeEdit* self) {
	return self->calendarWidget();
}

void QDateTimeEdit_SetCalendarWidget(QDateTimeEdit* self, QCalendarWidget* calendarWidget) {
	self->setCalendarWidget(calendarWidget);
}

int QDateTimeEdit_SectionCount(const QDateTimeEdit* self) {
	return self->sectionCount();
}

void QDateTimeEdit_SetSelectedSection(QDateTimeEdit* self, int section) {
	self->setSelectedSection(static_cast<QDateTimeEdit::Section>(section));
}

struct miqt_string QDateTimeEdit_SectionText(const QDateTimeEdit* self, int section) {
	QString _ret = self->sectionText(static_cast<QDateTimeEdit::Section>(section));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateTimeEdit_DisplayFormat(const QDateTimeEdit* self) {
	QString _ret = self->displayFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDateTimeEdit_SetDisplayFormat(QDateTimeEdit* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->setDisplayFormat(format_QString);
}

bool QDateTimeEdit_CalendarPopup(const QDateTimeEdit* self) {
	return self->calendarPopup();
}

void QDateTimeEdit_SetCalendarPopup(QDateTimeEdit* self, bool enable) {
	self->setCalendarPopup(enable);
}

int QDateTimeEdit_TimeSpec(const QDateTimeEdit* self) {
	Qt::TimeSpec _ret = self->timeSpec();
	return static_cast<int>(_ret);
}

void QDateTimeEdit_SetTimeSpec(QDateTimeEdit* self, int spec) {
	self->setTimeSpec(static_cast<Qt::TimeSpec>(spec));
}

QSize* QDateTimeEdit_SizeHint(const QDateTimeEdit* self) {
	return new QSize(self->sizeHint());
}

void QDateTimeEdit_Clear(QDateTimeEdit* self) {
	self->clear();
}

void QDateTimeEdit_StepBy(QDateTimeEdit* self, int steps) {
	self->stepBy(static_cast<int>(steps));
}

bool QDateTimeEdit_Event(QDateTimeEdit* self, QEvent* event) {
	return self->event(event);
}

void QDateTimeEdit_DateTimeChanged(QDateTimeEdit* self, QDateTime* dateTime) {
	self->dateTimeChanged(*dateTime);
}

void QDateTimeEdit_connect_DateTimeChanged(QDateTimeEdit* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit::connect(self, static_cast<void (QDateTimeEdit::*)(const QDateTime&)>(&QDateTimeEdit::dateTimeChanged), self, [=](const QDateTime& dateTime) {
		const QDateTime& dateTime_ret = dateTime;
		// Cast returned reference into pointer
		QDateTime* sigval1 = const_cast<QDateTime*>(&dateTime_ret);
		miqt_exec_callback_QDateTimeEdit_DateTimeChanged(slot, sigval1);
	});
}

void QDateTimeEdit_TimeChanged(QDateTimeEdit* self, QTime* time) {
	self->timeChanged(*time);
}

void QDateTimeEdit_connect_TimeChanged(QDateTimeEdit* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit::connect(self, static_cast<void (QDateTimeEdit::*)(const QTime&)>(&QDateTimeEdit::timeChanged), self, [=](const QTime& time) {
		const QTime& time_ret = time;
		// Cast returned reference into pointer
		QTime* sigval1 = const_cast<QTime*>(&time_ret);
		miqt_exec_callback_QDateTimeEdit_TimeChanged(slot, sigval1);
	});
}

void QDateTimeEdit_DateChanged(QDateTimeEdit* self, QDate* date) {
	self->dateChanged(*date);
}

void QDateTimeEdit_connect_DateChanged(QDateTimeEdit* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit::connect(self, static_cast<void (QDateTimeEdit::*)(const QDate&)>(&QDateTimeEdit::dateChanged), self, [=](const QDate& date) {
		const QDate& date_ret = date;
		// Cast returned reference into pointer
		QDate* sigval1 = const_cast<QDate*>(&date_ret);
		miqt_exec_callback_QDateTimeEdit_DateChanged(slot, sigval1);
	});
}

void QDateTimeEdit_SetDateTime(QDateTimeEdit* self, QDateTime* dateTime) {
	self->setDateTime(*dateTime);
}

void QDateTimeEdit_SetDate(QDateTimeEdit* self, QDate* date) {
	self->setDate(*date);
}

void QDateTimeEdit_SetTime(QDateTimeEdit* self, QTime* time) {
	self->setTime(*time);
}

struct miqt_string QDateTimeEdit_Tr2(const char* s, const char* c) {
	QString _ret = QDateTimeEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateTimeEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDateTimeEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateTimeEdit_TrUtf82(const char* s, const char* c) {
	QString _ret = QDateTimeEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateTimeEdit_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDateTimeEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDateTimeEdit_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__SizeHint = slot;
}

QSize* QDateTimeEdit_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_SizeHint();
}

void QDateTimeEdit_override_virtual_Clear(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__Clear = slot;
}

void QDateTimeEdit_virtualbase_Clear(void* self) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_Clear();
}

void QDateTimeEdit_override_virtual_StepBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__StepBy = slot;
}

void QDateTimeEdit_virtualbase_StepBy(void* self, int steps) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_StepBy(steps);
}

void QDateTimeEdit_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__Event = slot;
}

bool QDateTimeEdit_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_Event(event);
}

void QDateTimeEdit_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__KeyPressEvent = slot;
}

void QDateTimeEdit_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_KeyPressEvent(event);
}

void QDateTimeEdit_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__WheelEvent = slot;
}

void QDateTimeEdit_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_WheelEvent(event);
}

void QDateTimeEdit_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__FocusInEvent = slot;
}

void QDateTimeEdit_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_FocusInEvent(event);
}

void QDateTimeEdit_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QDateTimeEdit_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QDateTimeEdit_override_virtual_Validate(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__Validate = slot;
}

int QDateTimeEdit_virtualbase_Validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_Validate(input, pos);
}

void QDateTimeEdit_override_virtual_Fixup(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__Fixup = slot;
}

void QDateTimeEdit_virtualbase_Fixup(const void* self, struct miqt_string input) {
	( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_Fixup(input);
}

void QDateTimeEdit_override_virtual_DateTimeFromText(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__DateTimeFromText = slot;
}

QDateTime* QDateTimeEdit_virtualbase_DateTimeFromText(const void* self, struct miqt_string text) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_DateTimeFromText(text);
}

void QDateTimeEdit_override_virtual_TextFromDateTime(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__TextFromDateTime = slot;
}

struct miqt_string QDateTimeEdit_virtualbase_TextFromDateTime(const void* self, QDateTime* dt) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_TextFromDateTime(dt);
}

void QDateTimeEdit_override_virtual_StepEnabled(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__StepEnabled = slot;
}

int QDateTimeEdit_virtualbase_StepEnabled(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_StepEnabled();
}

void QDateTimeEdit_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__MousePressEvent = slot;
}

void QDateTimeEdit_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_MousePressEvent(event);
}

void QDateTimeEdit_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__PaintEvent = slot;
}

void QDateTimeEdit_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_PaintEvent(event);
}

void QDateTimeEdit_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QDateTimeEdit_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_MinimumSizeHint();
}

void QDateTimeEdit_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QDateTimeEdit_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QDateTimeEdit_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__ResizeEvent = slot;
}

void QDateTimeEdit_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_ResizeEvent(event);
}

void QDateTimeEdit_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__KeyReleaseEvent = slot;
}

void QDateTimeEdit_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QDateTimeEdit_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__FocusOutEvent = slot;
}

void QDateTimeEdit_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_FocusOutEvent(event);
}

void QDateTimeEdit_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__ContextMenuEvent = slot;
}

void QDateTimeEdit_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QDateTimeEdit_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__ChangeEvent = slot;
}

void QDateTimeEdit_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_ChangeEvent(event);
}

void QDateTimeEdit_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__CloseEvent = slot;
}

void QDateTimeEdit_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_CloseEvent(event);
}

void QDateTimeEdit_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__HideEvent = slot;
}

void QDateTimeEdit_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_HideEvent(event);
}

void QDateTimeEdit_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__MouseReleaseEvent = slot;
}

void QDateTimeEdit_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QDateTimeEdit_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__MouseMoveEvent = slot;
}

void QDateTimeEdit_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QDateTimeEdit_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__TimerEvent = slot;
}

void QDateTimeEdit_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_TimerEvent(event);
}

void QDateTimeEdit_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) )->handle__ShowEvent = slot;
}

void QDateTimeEdit_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_ShowEvent(event);
}

void QDateTimeEdit_Delete(QDateTimeEdit* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQDateTimeEdit*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQTimeEdit : public virtual QTimeEdit {
public:

	MiqtVirtualQTimeEdit(QWidget* parent): QTimeEdit(parent) {};
	MiqtVirtualQTimeEdit(): QTimeEdit() {};
	MiqtVirtualQTimeEdit(const QTime& time): QTimeEdit(time) {};
	MiqtVirtualQTimeEdit(const QTime& time, QWidget* parent): QTimeEdit(time, parent) {};

	virtual ~MiqtVirtualQTimeEdit() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QTimeEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTimeEdit_SizeHint(const_cast<MiqtVirtualQTimeEdit*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QTimeEdit::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__Clear == 0) {
			QTimeEdit::clear();
			return;
		}
		

		miqt_exec_callback_QTimeEdit_Clear(this, handle__Clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Clear() {

		QTimeEdit::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StepBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void stepBy(int steps) override {
		if (handle__StepBy == 0) {
			QTimeEdit::stepBy(steps);
			return;
		}
		
		int sigval1 = steps;

		miqt_exec_callback_QTimeEdit_StepBy(this, handle__StepBy, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StepBy(int steps) {

		QTimeEdit::stepBy(static_cast<int>(steps));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QTimeEdit::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTimeEdit_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QTimeEdit::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QTimeEdit::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QTimeEdit::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QTimeEdit::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QTimeEdit::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QTimeEdit::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QTimeEdit::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QTimeEdit::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTimeEdit_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QTimeEdit::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__Validate == 0) {
			return QTimeEdit::validate(input, pos);
		}
		
		QString input_ret = input;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray input_b = input_ret.toUtf8();
		struct miqt_string input_ms;
		input_ms.len = input_b.length();
		input_ms.data = static_cast<char*>(malloc(input_ms.len));
		memcpy(input_ms.data, input_b.data(), input_ms.len);
		struct miqt_string sigval1 = input_ms;
		int* sigval2 = &pos;

		int callback_return_value = miqt_exec_callback_QTimeEdit_Validate(const_cast<MiqtVirtualQTimeEdit*>(this), handle__Validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QTimeEdit::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& input) const override {
		if (handle__Fixup == 0) {
			QTimeEdit::fixup(input);
			return;
		}
		
		QString input_ret = input;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray input_b = input_ret.toUtf8();
		struct miqt_string input_ms;
		input_ms.len = input_b.length();
		input_ms.data = static_cast<char*>(malloc(input_ms.len));
		memcpy(input_ms.data, input_b.data(), input_ms.len);
		struct miqt_string sigval1 = input_ms;

		miqt_exec_callback_QTimeEdit_Fixup(const_cast<MiqtVirtualQTimeEdit*>(this), handle__Fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Fixup(struct miqt_string input) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QTimeEdit::fixup(input_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DateTimeFromText = 0;

	// Subclass to allow providing a Go implementation
	virtual QDateTime dateTimeFromText(const QString& text) const override {
		if (handle__DateTimeFromText == 0) {
			return QTimeEdit::dateTimeFromText(text);
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		QDateTime* callback_return_value = miqt_exec_callback_QTimeEdit_DateTimeFromText(const_cast<MiqtVirtualQTimeEdit*>(this), handle__DateTimeFromText, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QDateTime* virtualbase_DateTimeFromText(struct miqt_string text) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		return new QDateTime(QTimeEdit::dateTimeFromText(text_QString));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TextFromDateTime = 0;

	// Subclass to allow providing a Go implementation
	virtual QString textFromDateTime(const QDateTime& dt) const override {
		if (handle__TextFromDateTime == 0) {
			return QTimeEdit::textFromDateTime(dt);
		}
		
		const QDateTime& dt_ret = dt;
		// Cast returned reference into pointer
		QDateTime* sigval1 = const_cast<QDateTime*>(&dt_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QTimeEdit_TextFromDateTime(const_cast<MiqtVirtualQTimeEdit*>(this), handle__TextFromDateTime, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_TextFromDateTime(QDateTime* dt) const {

		QString _ret = QTimeEdit::textFromDateTime(*dt);
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StepEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
		if (handle__StepEnabled == 0) {
			return QTimeEdit::stepEnabled();
		}
		

		int callback_return_value = miqt_exec_callback_QTimeEdit_StepEnabled(const_cast<MiqtVirtualQTimeEdit*>(this), handle__StepEnabled);

		return static_cast<QAbstractSpinBox::StepEnabled>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StepEnabled() const {

		QAbstractSpinBox::StepEnabled _ret = QTimeEdit::stepEnabled();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QTimeEdit::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QTimeEdit::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QTimeEdit::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QTimeEdit::paintEvent(event);

	}

};

void QTimeEdit_new(QWidget* parent, QTimeEdit** outptr_QTimeEdit, QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQTimeEdit* ret = new MiqtVirtualQTimeEdit(parent);
	*outptr_QTimeEdit = ret;
	*outptr_QDateTimeEdit = static_cast<QDateTimeEdit*>(ret);
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QTimeEdit_new2(QTimeEdit** outptr_QTimeEdit, QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQTimeEdit* ret = new MiqtVirtualQTimeEdit();
	*outptr_QTimeEdit = ret;
	*outptr_QDateTimeEdit = static_cast<QDateTimeEdit*>(ret);
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QTimeEdit_new3(QTime* time, QTimeEdit** outptr_QTimeEdit, QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQTimeEdit* ret = new MiqtVirtualQTimeEdit(*time);
	*outptr_QTimeEdit = ret;
	*outptr_QDateTimeEdit = static_cast<QDateTimeEdit*>(ret);
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QTimeEdit_new4(QTime* time, QWidget* parent, QTimeEdit** outptr_QTimeEdit, QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQTimeEdit* ret = new MiqtVirtualQTimeEdit(*time, parent);
	*outptr_QTimeEdit = ret;
	*outptr_QDateTimeEdit = static_cast<QDateTimeEdit*>(ret);
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

QMetaObject* QTimeEdit_MetaObject(const QTimeEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTimeEdit_Metacast(QTimeEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTimeEdit_Tr(const char* s) {
	QString _ret = QTimeEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeEdit_TrUtf8(const char* s) {
	QString _ret = QTimeEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTimeEdit_UserTimeChanged(QTimeEdit* self, QTime* time) {
	self->userTimeChanged(*time);
}

void QTimeEdit_connect_UserTimeChanged(QTimeEdit* self, intptr_t slot) {
	MiqtVirtualQTimeEdit::connect(self, static_cast<void (QTimeEdit::*)(const QTime&)>(&QTimeEdit::userTimeChanged), self, [=](const QTime& time) {
		const QTime& time_ret = time;
		// Cast returned reference into pointer
		QTime* sigval1 = const_cast<QTime*>(&time_ret);
		miqt_exec_callback_QTimeEdit_UserTimeChanged(slot, sigval1);
	});
}

struct miqt_string QTimeEdit_Tr2(const char* s, const char* c) {
	QString _ret = QTimeEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTimeEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeEdit_TrUtf82(const char* s, const char* c) {
	QString _ret = QTimeEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeEdit_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTimeEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTimeEdit_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) )->handle__SizeHint = slot;
}

QSize* QTimeEdit_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_SizeHint();
}

void QTimeEdit_override_virtual_Clear(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) )->handle__Clear = slot;
}

void QTimeEdit_virtualbase_Clear(void* self) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_Clear();
}

void QTimeEdit_override_virtual_StepBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) )->handle__StepBy = slot;
}

void QTimeEdit_virtualbase_StepBy(void* self, int steps) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_StepBy(steps);
}

void QTimeEdit_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) )->handle__Event = slot;
}

bool QTimeEdit_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_Event(event);
}

void QTimeEdit_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) )->handle__KeyPressEvent = slot;
}

void QTimeEdit_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_KeyPressEvent(event);
}

void QTimeEdit_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) )->handle__WheelEvent = slot;
}

void QTimeEdit_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_WheelEvent(event);
}

void QTimeEdit_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) )->handle__FocusInEvent = slot;
}

void QTimeEdit_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_FocusInEvent(event);
}

void QTimeEdit_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QTimeEdit_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QTimeEdit_override_virtual_Validate(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) )->handle__Validate = slot;
}

int QTimeEdit_virtualbase_Validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_Validate(input, pos);
}

void QTimeEdit_override_virtual_Fixup(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) )->handle__Fixup = slot;
}

void QTimeEdit_virtualbase_Fixup(const void* self, struct miqt_string input) {
	( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_Fixup(input);
}

void QTimeEdit_override_virtual_DateTimeFromText(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) )->handle__DateTimeFromText = slot;
}

QDateTime* QTimeEdit_virtualbase_DateTimeFromText(const void* self, struct miqt_string text) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_DateTimeFromText(text);
}

void QTimeEdit_override_virtual_TextFromDateTime(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) )->handle__TextFromDateTime = slot;
}

struct miqt_string QTimeEdit_virtualbase_TextFromDateTime(const void* self, QDateTime* dt) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_TextFromDateTime(dt);
}

void QTimeEdit_override_virtual_StepEnabled(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) )->handle__StepEnabled = slot;
}

int QTimeEdit_virtualbase_StepEnabled(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_StepEnabled();
}

void QTimeEdit_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) )->handle__MousePressEvent = slot;
}

void QTimeEdit_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_MousePressEvent(event);
}

void QTimeEdit_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) )->handle__PaintEvent = slot;
}

void QTimeEdit_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_PaintEvent(event);
}

void QTimeEdit_Delete(QTimeEdit* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQTimeEdit*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQDateEdit : public virtual QDateEdit {
public:

	MiqtVirtualQDateEdit(QWidget* parent): QDateEdit(parent) {};
	MiqtVirtualQDateEdit(): QDateEdit() {};
	MiqtVirtualQDateEdit(const QDate& date): QDateEdit(date) {};
	MiqtVirtualQDateEdit(const QDate& date, QWidget* parent): QDateEdit(date, parent) {};

	virtual ~MiqtVirtualQDateEdit() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QDateEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDateEdit_SizeHint(const_cast<MiqtVirtualQDateEdit*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QDateEdit::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__Clear == 0) {
			QDateEdit::clear();
			return;
		}
		

		miqt_exec_callback_QDateEdit_Clear(this, handle__Clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Clear() {

		QDateEdit::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StepBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void stepBy(int steps) override {
		if (handle__StepBy == 0) {
			QDateEdit::stepBy(steps);
			return;
		}
		
		int sigval1 = steps;

		miqt_exec_callback_QDateEdit_StepBy(this, handle__StepBy, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_StepBy(int steps) {

		QDateEdit::stepBy(static_cast<int>(steps));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QDateEdit::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDateEdit_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QDateEdit::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QDateEdit::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QDateEdit::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QDateEdit::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QDateEdit::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QDateEdit::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QDateEdit::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QDateEdit::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QDateEdit_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QDateEdit::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__Validate == 0) {
			return QDateEdit::validate(input, pos);
		}
		
		QString input_ret = input;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray input_b = input_ret.toUtf8();
		struct miqt_string input_ms;
		input_ms.len = input_b.length();
		input_ms.data = static_cast<char*>(malloc(input_ms.len));
		memcpy(input_ms.data, input_b.data(), input_ms.len);
		struct miqt_string sigval1 = input_ms;
		int* sigval2 = &pos;

		int callback_return_value = miqt_exec_callback_QDateEdit_Validate(const_cast<MiqtVirtualQDateEdit*>(this), handle__Validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QDateEdit::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& input) const override {
		if (handle__Fixup == 0) {
			QDateEdit::fixup(input);
			return;
		}
		
		QString input_ret = input;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray input_b = input_ret.toUtf8();
		struct miqt_string input_ms;
		input_ms.len = input_b.length();
		input_ms.data = static_cast<char*>(malloc(input_ms.len));
		memcpy(input_ms.data, input_b.data(), input_ms.len);
		struct miqt_string sigval1 = input_ms;

		miqt_exec_callback_QDateEdit_Fixup(const_cast<MiqtVirtualQDateEdit*>(this), handle__Fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Fixup(struct miqt_string input) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QDateEdit::fixup(input_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DateTimeFromText = 0;

	// Subclass to allow providing a Go implementation
	virtual QDateTime dateTimeFromText(const QString& text) const override {
		if (handle__DateTimeFromText == 0) {
			return QDateEdit::dateTimeFromText(text);
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		QDateTime* callback_return_value = miqt_exec_callback_QDateEdit_DateTimeFromText(const_cast<MiqtVirtualQDateEdit*>(this), handle__DateTimeFromText, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QDateTime* virtualbase_DateTimeFromText(struct miqt_string text) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		return new QDateTime(QDateEdit::dateTimeFromText(text_QString));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TextFromDateTime = 0;

	// Subclass to allow providing a Go implementation
	virtual QString textFromDateTime(const QDateTime& dt) const override {
		if (handle__TextFromDateTime == 0) {
			return QDateEdit::textFromDateTime(dt);
		}
		
		const QDateTime& dt_ret = dt;
		// Cast returned reference into pointer
		QDateTime* sigval1 = const_cast<QDateTime*>(&dt_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QDateEdit_TextFromDateTime(const_cast<MiqtVirtualQDateEdit*>(this), handle__TextFromDateTime, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_TextFromDateTime(QDateTime* dt) const {

		QString _ret = QDateEdit::textFromDateTime(*dt);
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StepEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
		if (handle__StepEnabled == 0) {
			return QDateEdit::stepEnabled();
		}
		

		int callback_return_value = miqt_exec_callback_QDateEdit_StepEnabled(const_cast<MiqtVirtualQDateEdit*>(this), handle__StepEnabled);

		return static_cast<QAbstractSpinBox::StepEnabled>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StepEnabled() const {

		QAbstractSpinBox::StepEnabled _ret = QDateEdit::stepEnabled();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QDateEdit::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QDateEdit::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QDateEdit::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QDateEdit::paintEvent(event);

	}

};

void QDateEdit_new(QWidget* parent, QDateEdit** outptr_QDateEdit, QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQDateEdit* ret = new MiqtVirtualQDateEdit(parent);
	*outptr_QDateEdit = ret;
	*outptr_QDateTimeEdit = static_cast<QDateTimeEdit*>(ret);
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QDateEdit_new2(QDateEdit** outptr_QDateEdit, QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQDateEdit* ret = new MiqtVirtualQDateEdit();
	*outptr_QDateEdit = ret;
	*outptr_QDateTimeEdit = static_cast<QDateTimeEdit*>(ret);
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QDateEdit_new3(QDate* date, QDateEdit** outptr_QDateEdit, QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQDateEdit* ret = new MiqtVirtualQDateEdit(*date);
	*outptr_QDateEdit = ret;
	*outptr_QDateTimeEdit = static_cast<QDateTimeEdit*>(ret);
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QDateEdit_new4(QDate* date, QWidget* parent, QDateEdit** outptr_QDateEdit, QDateTimeEdit** outptr_QDateTimeEdit, QAbstractSpinBox** outptr_QAbstractSpinBox, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQDateEdit* ret = new MiqtVirtualQDateEdit(*date, parent);
	*outptr_QDateEdit = ret;
	*outptr_QDateTimeEdit = static_cast<QDateTimeEdit*>(ret);
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

QMetaObject* QDateEdit_MetaObject(const QDateEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDateEdit_Metacast(QDateEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDateEdit_Tr(const char* s) {
	QString _ret = QDateEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateEdit_TrUtf8(const char* s) {
	QString _ret = QDateEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDateEdit_UserDateChanged(QDateEdit* self, QDate* date) {
	self->userDateChanged(*date);
}

void QDateEdit_connect_UserDateChanged(QDateEdit* self, intptr_t slot) {
	MiqtVirtualQDateEdit::connect(self, static_cast<void (QDateEdit::*)(const QDate&)>(&QDateEdit::userDateChanged), self, [=](const QDate& date) {
		const QDate& date_ret = date;
		// Cast returned reference into pointer
		QDate* sigval1 = const_cast<QDate*>(&date_ret);
		miqt_exec_callback_QDateEdit_UserDateChanged(slot, sigval1);
	});
}

struct miqt_string QDateEdit_Tr2(const char* s, const char* c) {
	QString _ret = QDateEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDateEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateEdit_TrUtf82(const char* s, const char* c) {
	QString _ret = QDateEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateEdit_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDateEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDateEdit_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) )->handle__SizeHint = slot;
}

QSize* QDateEdit_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_SizeHint();
}

void QDateEdit_override_virtual_Clear(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) )->handle__Clear = slot;
}

void QDateEdit_virtualbase_Clear(void* self) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_Clear();
}

void QDateEdit_override_virtual_StepBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) )->handle__StepBy = slot;
}

void QDateEdit_virtualbase_StepBy(void* self, int steps) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_StepBy(steps);
}

void QDateEdit_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) )->handle__Event = slot;
}

bool QDateEdit_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDateEdit*)(self) )->virtualbase_Event(event);
}

void QDateEdit_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) )->handle__KeyPressEvent = slot;
}

void QDateEdit_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_KeyPressEvent(event);
}

void QDateEdit_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) )->handle__WheelEvent = slot;
}

void QDateEdit_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_WheelEvent(event);
}

void QDateEdit_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) )->handle__FocusInEvent = slot;
}

void QDateEdit_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_FocusInEvent(event);
}

void QDateEdit_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QDateEdit_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQDateEdit*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QDateEdit_override_virtual_Validate(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) )->handle__Validate = slot;
}

int QDateEdit_virtualbase_Validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_Validate(input, pos);
}

void QDateEdit_override_virtual_Fixup(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) )->handle__Fixup = slot;
}

void QDateEdit_virtualbase_Fixup(const void* self, struct miqt_string input) {
	( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_Fixup(input);
}

void QDateEdit_override_virtual_DateTimeFromText(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) )->handle__DateTimeFromText = slot;
}

QDateTime* QDateEdit_virtualbase_DateTimeFromText(const void* self, struct miqt_string text) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_DateTimeFromText(text);
}

void QDateEdit_override_virtual_TextFromDateTime(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) )->handle__TextFromDateTime = slot;
}

struct miqt_string QDateEdit_virtualbase_TextFromDateTime(const void* self, QDateTime* dt) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_TextFromDateTime(dt);
}

void QDateEdit_override_virtual_StepEnabled(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) )->handle__StepEnabled = slot;
}

int QDateEdit_virtualbase_StepEnabled(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_StepEnabled();
}

void QDateEdit_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) )->handle__MousePressEvent = slot;
}

void QDateEdit_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_MousePressEvent(event);
}

void QDateEdit_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) )->handle__PaintEvent = slot;
}

void QDateEdit_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_PaintEvent(event);
}

void QDateEdit_Delete(QDateEdit* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQDateEdit*>( self );
	} else {
		delete self;
	}
}

