#include <QAbstractSpinBox>
#include <QActionEvent>
#include <QByteArray>
#include <QCalendar>
#include <QCalendarWidget>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDate>
#include <QDateEdit>
#include <QDateTime>
#include <QDateTimeEdit>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
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
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTime>
#include <QTimeEdit>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qdatetimeedit.h>
#include "gen_qdatetimeedit.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDateTimeEdit_DateTimeChanged(intptr_t, QDateTime*);
void miqt_exec_callback_QDateTimeEdit_TimeChanged(intptr_t, QTime*);
void miqt_exec_callback_QDateTimeEdit_DateChanged(intptr_t, QDate*);
QSize* miqt_exec_callback_QDateTimeEdit_SizeHint(const QDateTimeEdit*, intptr_t);
void miqt_exec_callback_QDateTimeEdit_Clear(QDateTimeEdit*, intptr_t);
void miqt_exec_callback_QDateTimeEdit_StepBy(QDateTimeEdit*, intptr_t, int);
bool miqt_exec_callback_QDateTimeEdit_Event(QDateTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateTimeEdit_KeyPressEvent(QDateTimeEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDateTimeEdit_WheelEvent(QDateTimeEdit*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDateTimeEdit_FocusInEvent(QDateTimeEdit*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QDateTimeEdit_FocusNextPrevChild(QDateTimeEdit*, intptr_t, bool);
int miqt_exec_callback_QDateTimeEdit_Validate(const QDateTimeEdit*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QDateTimeEdit_Fixup(const QDateTimeEdit*, intptr_t, struct miqt_string);
QDateTime* miqt_exec_callback_QDateTimeEdit_DateTimeFromText(const QDateTimeEdit*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QDateTimeEdit_TextFromDateTime(const QDateTimeEdit*, intptr_t, QDateTime*);
int miqt_exec_callback_QDateTimeEdit_StepEnabled(const QDateTimeEdit*, intptr_t);
void miqt_exec_callback_QDateTimeEdit_MousePressEvent(QDateTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateTimeEdit_PaintEvent(QDateTimeEdit*, intptr_t, QPaintEvent*);
QSize* miqt_exec_callback_QDateTimeEdit_MinimumSizeHint(const QDateTimeEdit*, intptr_t);
QVariant* miqt_exec_callback_QDateTimeEdit_InputMethodQuery(const QDateTimeEdit*, intptr_t, int);
void miqt_exec_callback_QDateTimeEdit_ResizeEvent(QDateTimeEdit*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDateTimeEdit_KeyReleaseEvent(QDateTimeEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDateTimeEdit_FocusOutEvent(QDateTimeEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDateTimeEdit_ContextMenuEvent(QDateTimeEdit*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDateTimeEdit_ChangeEvent(QDateTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateTimeEdit_CloseEvent(QDateTimeEdit*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDateTimeEdit_HideEvent(QDateTimeEdit*, intptr_t, QHideEvent*);
void miqt_exec_callback_QDateTimeEdit_MouseReleaseEvent(QDateTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateTimeEdit_MouseMoveEvent(QDateTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateTimeEdit_TimerEvent(QDateTimeEdit*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDateTimeEdit_ShowEvent(QDateTimeEdit*, intptr_t, QShowEvent*);
int miqt_exec_callback_QDateTimeEdit_DevType(const QDateTimeEdit*, intptr_t);
void miqt_exec_callback_QDateTimeEdit_SetVisible(QDateTimeEdit*, intptr_t, bool);
int miqt_exec_callback_QDateTimeEdit_HeightForWidth(const QDateTimeEdit*, intptr_t, int);
bool miqt_exec_callback_QDateTimeEdit_HasHeightForWidth(const QDateTimeEdit*, intptr_t);
QPaintEngine* miqt_exec_callback_QDateTimeEdit_PaintEngine(const QDateTimeEdit*, intptr_t);
void miqt_exec_callback_QDateTimeEdit_MouseDoubleClickEvent(QDateTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateTimeEdit_EnterEvent(QDateTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateTimeEdit_LeaveEvent(QDateTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateTimeEdit_MoveEvent(QDateTimeEdit*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDateTimeEdit_TabletEvent(QDateTimeEdit*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDateTimeEdit_ActionEvent(QDateTimeEdit*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDateTimeEdit_DragEnterEvent(QDateTimeEdit*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDateTimeEdit_DragMoveEvent(QDateTimeEdit*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDateTimeEdit_DragLeaveEvent(QDateTimeEdit*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDateTimeEdit_DropEvent(QDateTimeEdit*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QDateTimeEdit_NativeEvent(QDateTimeEdit*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QDateTimeEdit_Metric(const QDateTimeEdit*, intptr_t, int);
void miqt_exec_callback_QDateTimeEdit_InitPainter(const QDateTimeEdit*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDateTimeEdit_Redirected(const QDateTimeEdit*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDateTimeEdit_SharedPainter(const QDateTimeEdit*, intptr_t);
void miqt_exec_callback_QDateTimeEdit_InputMethodEvent(QDateTimeEdit*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QDateTimeEdit_EventFilter(QDateTimeEdit*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDateTimeEdit_ChildEvent(QDateTimeEdit*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDateTimeEdit_CustomEvent(QDateTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateTimeEdit_ConnectNotify(QDateTimeEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDateTimeEdit_DisconnectNotify(QDateTimeEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTimeEdit_UserTimeChanged(intptr_t, QTime*);
QSize* miqt_exec_callback_QTimeEdit_SizeHint(const QTimeEdit*, intptr_t);
void miqt_exec_callback_QTimeEdit_Clear(QTimeEdit*, intptr_t);
void miqt_exec_callback_QTimeEdit_StepBy(QTimeEdit*, intptr_t, int);
bool miqt_exec_callback_QTimeEdit_Event(QTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QTimeEdit_KeyPressEvent(QTimeEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTimeEdit_WheelEvent(QTimeEdit*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QTimeEdit_FocusInEvent(QTimeEdit*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QTimeEdit_FocusNextPrevChild(QTimeEdit*, intptr_t, bool);
int miqt_exec_callback_QTimeEdit_Validate(const QTimeEdit*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QTimeEdit_Fixup(const QTimeEdit*, intptr_t, struct miqt_string);
QDateTime* miqt_exec_callback_QTimeEdit_DateTimeFromText(const QTimeEdit*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QTimeEdit_TextFromDateTime(const QTimeEdit*, intptr_t, QDateTime*);
int miqt_exec_callback_QTimeEdit_StepEnabled(const QTimeEdit*, intptr_t);
void miqt_exec_callback_QTimeEdit_MousePressEvent(QTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTimeEdit_PaintEvent(QTimeEdit*, intptr_t, QPaintEvent*);
QSize* miqt_exec_callback_QTimeEdit_MinimumSizeHint(const QTimeEdit*, intptr_t);
QVariant* miqt_exec_callback_QTimeEdit_InputMethodQuery(const QTimeEdit*, intptr_t, int);
void miqt_exec_callback_QTimeEdit_ResizeEvent(QTimeEdit*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTimeEdit_KeyReleaseEvent(QTimeEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTimeEdit_FocusOutEvent(QTimeEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTimeEdit_ContextMenuEvent(QTimeEdit*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTimeEdit_ChangeEvent(QTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QTimeEdit_CloseEvent(QTimeEdit*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTimeEdit_HideEvent(QTimeEdit*, intptr_t, QHideEvent*);
void miqt_exec_callback_QTimeEdit_MouseReleaseEvent(QTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTimeEdit_MouseMoveEvent(QTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTimeEdit_TimerEvent(QTimeEdit*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTimeEdit_ShowEvent(QTimeEdit*, intptr_t, QShowEvent*);
int miqt_exec_callback_QTimeEdit_DevType(const QTimeEdit*, intptr_t);
void miqt_exec_callback_QTimeEdit_SetVisible(QTimeEdit*, intptr_t, bool);
int miqt_exec_callback_QTimeEdit_HeightForWidth(const QTimeEdit*, intptr_t, int);
bool miqt_exec_callback_QTimeEdit_HasHeightForWidth(const QTimeEdit*, intptr_t);
QPaintEngine* miqt_exec_callback_QTimeEdit_PaintEngine(const QTimeEdit*, intptr_t);
void miqt_exec_callback_QTimeEdit_MouseDoubleClickEvent(QTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTimeEdit_EnterEvent(QTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QTimeEdit_LeaveEvent(QTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QTimeEdit_MoveEvent(QTimeEdit*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTimeEdit_TabletEvent(QTimeEdit*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTimeEdit_ActionEvent(QTimeEdit*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTimeEdit_DragEnterEvent(QTimeEdit*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTimeEdit_DragMoveEvent(QTimeEdit*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QTimeEdit_DragLeaveEvent(QTimeEdit*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTimeEdit_DropEvent(QTimeEdit*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QTimeEdit_NativeEvent(QTimeEdit*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QTimeEdit_Metric(const QTimeEdit*, intptr_t, int);
void miqt_exec_callback_QTimeEdit_InitPainter(const QTimeEdit*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTimeEdit_Redirected(const QTimeEdit*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTimeEdit_SharedPainter(const QTimeEdit*, intptr_t);
void miqt_exec_callback_QTimeEdit_InputMethodEvent(QTimeEdit*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QTimeEdit_EventFilter(QTimeEdit*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTimeEdit_ChildEvent(QTimeEdit*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTimeEdit_CustomEvent(QTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QTimeEdit_ConnectNotify(QTimeEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTimeEdit_DisconnectNotify(QTimeEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDateEdit_UserDateChanged(intptr_t, QDate*);
QSize* miqt_exec_callback_QDateEdit_SizeHint(const QDateEdit*, intptr_t);
void miqt_exec_callback_QDateEdit_Clear(QDateEdit*, intptr_t);
void miqt_exec_callback_QDateEdit_StepBy(QDateEdit*, intptr_t, int);
bool miqt_exec_callback_QDateEdit_Event(QDateEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateEdit_KeyPressEvent(QDateEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDateEdit_WheelEvent(QDateEdit*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDateEdit_FocusInEvent(QDateEdit*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QDateEdit_FocusNextPrevChild(QDateEdit*, intptr_t, bool);
int miqt_exec_callback_QDateEdit_Validate(const QDateEdit*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QDateEdit_Fixup(const QDateEdit*, intptr_t, struct miqt_string);
QDateTime* miqt_exec_callback_QDateEdit_DateTimeFromText(const QDateEdit*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QDateEdit_TextFromDateTime(const QDateEdit*, intptr_t, QDateTime*);
int miqt_exec_callback_QDateEdit_StepEnabled(const QDateEdit*, intptr_t);
void miqt_exec_callback_QDateEdit_MousePressEvent(QDateEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateEdit_PaintEvent(QDateEdit*, intptr_t, QPaintEvent*);
QSize* miqt_exec_callback_QDateEdit_MinimumSizeHint(const QDateEdit*, intptr_t);
QVariant* miqt_exec_callback_QDateEdit_InputMethodQuery(const QDateEdit*, intptr_t, int);
void miqt_exec_callback_QDateEdit_ResizeEvent(QDateEdit*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDateEdit_KeyReleaseEvent(QDateEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDateEdit_FocusOutEvent(QDateEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDateEdit_ContextMenuEvent(QDateEdit*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDateEdit_ChangeEvent(QDateEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateEdit_CloseEvent(QDateEdit*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDateEdit_HideEvent(QDateEdit*, intptr_t, QHideEvent*);
void miqt_exec_callback_QDateEdit_MouseReleaseEvent(QDateEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateEdit_MouseMoveEvent(QDateEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateEdit_TimerEvent(QDateEdit*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDateEdit_ShowEvent(QDateEdit*, intptr_t, QShowEvent*);
int miqt_exec_callback_QDateEdit_DevType(const QDateEdit*, intptr_t);
void miqt_exec_callback_QDateEdit_SetVisible(QDateEdit*, intptr_t, bool);
int miqt_exec_callback_QDateEdit_HeightForWidth(const QDateEdit*, intptr_t, int);
bool miqt_exec_callback_QDateEdit_HasHeightForWidth(const QDateEdit*, intptr_t);
QPaintEngine* miqt_exec_callback_QDateEdit_PaintEngine(const QDateEdit*, intptr_t);
void miqt_exec_callback_QDateEdit_MouseDoubleClickEvent(QDateEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateEdit_EnterEvent(QDateEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateEdit_LeaveEvent(QDateEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateEdit_MoveEvent(QDateEdit*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDateEdit_TabletEvent(QDateEdit*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDateEdit_ActionEvent(QDateEdit*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDateEdit_DragEnterEvent(QDateEdit*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDateEdit_DragMoveEvent(QDateEdit*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDateEdit_DragLeaveEvent(QDateEdit*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDateEdit_DropEvent(QDateEdit*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QDateEdit_NativeEvent(QDateEdit*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QDateEdit_Metric(const QDateEdit*, intptr_t, int);
void miqt_exec_callback_QDateEdit_InitPainter(const QDateEdit*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDateEdit_Redirected(const QDateEdit*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDateEdit_SharedPainter(const QDateEdit*, intptr_t);
void miqt_exec_callback_QDateEdit_InputMethodEvent(QDateEdit*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QDateEdit_EventFilter(QDateEdit*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDateEdit_ChildEvent(QDateEdit*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDateEdit_CustomEvent(QDateEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateEdit_ConnectNotify(QDateEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDateEdit_DisconnectNotify(QDateEdit*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDateTimeEdit final : public QDateTimeEdit {
public:

	MiqtVirtualQDateTimeEdit(QWidget* parent): QDateTimeEdit(parent) {};
	MiqtVirtualQDateTimeEdit(): QDateTimeEdit() {};
	MiqtVirtualQDateTimeEdit(const QDateTime& dt): QDateTimeEdit(dt) {};
	MiqtVirtualQDateTimeEdit(const QDate& d): QDateTimeEdit(d) {};
	MiqtVirtualQDateTimeEdit(const QTime& t): QDateTimeEdit(t) {};
	MiqtVirtualQDateTimeEdit(const QDateTime& dt, QWidget* parent): QDateTimeEdit(dt, parent) {};
	MiqtVirtualQDateTimeEdit(const QDate& d, QWidget* parent): QDateTimeEdit(d, parent) {};
	MiqtVirtualQDateTimeEdit(const QTime& t, QWidget* parent): QDateTimeEdit(t, parent) {};

	virtual ~MiqtVirtualQDateTimeEdit() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QDateTimeEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDateTimeEdit_SizeHint(this, handle__SizeHint);

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

		int callback_return_value = miqt_exec_callback_QDateTimeEdit_Validate(this, handle__Validate, sigval1, sigval2);

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

		miqt_exec_callback_QDateTimeEdit_Fixup(this, handle__Fixup, sigval1);

		
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

		QDateTime* callback_return_value = miqt_exec_callback_QDateTimeEdit_DateTimeFromText(this, handle__DateTimeFromText, sigval1);

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

		struct miqt_string callback_return_value = miqt_exec_callback_QDateTimeEdit_TextFromDateTime(this, handle__TextFromDateTime, sigval1);
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
		

		int callback_return_value = miqt_exec_callback_QDateTimeEdit_StepEnabled(this, handle__StepEnabled);

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
		

		QSize* callback_return_value = miqt_exec_callback_QDateTimeEdit_MinimumSizeHint(this, handle__MinimumSizeHint);

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

		QVariant* callback_return_value = miqt_exec_callback_QDateTimeEdit_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QDateTimeEdit::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QDateTimeEdit_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QDateTimeEdit::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QDateTimeEdit::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QDateTimeEdit_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QDateTimeEdit::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QDateTimeEdit::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QDateTimeEdit_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QDateTimeEdit::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QDateTimeEdit::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QDateTimeEdit_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QDateTimeEdit::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QDateTimeEdit::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QDateTimeEdit_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QDateTimeEdit::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QDateTimeEdit::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QDateTimeEdit::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QDateTimeEdit::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QDateTimeEdit::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QDateTimeEdit::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QDateTimeEdit::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QDateTimeEdit::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QDateTimeEdit::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QDateTimeEdit::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QDateTimeEdit::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QDateTimeEdit::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QDateTimeEdit::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QDateTimeEdit::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QDateTimeEdit::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QDateTimeEdit::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QDateTimeEdit::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QDateTimeEdit::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QDateTimeEdit::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QDateTimeEdit::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QDateTimeEdit::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QDateTimeEdit::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QDateTimeEdit_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QDateTimeEdit::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QDateTimeEdit::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QDateTimeEdit_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QDateTimeEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QDateTimeEdit::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QDateTimeEdit_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QDateTimeEdit::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QDateTimeEdit::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QDateTimeEdit_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QDateTimeEdit::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QDateTimeEdit::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QDateTimeEdit_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QDateTimeEdit::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QDateTimeEdit::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QDateTimeEdit_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QDateTimeEdit::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QDateTimeEdit::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDateTimeEdit_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QDateTimeEdit::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QDateTimeEdit::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QDateTimeEdit::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QDateTimeEdit::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QDateTimeEdit::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QDateTimeEdit::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDateTimeEdit_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QDateTimeEdit::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QDateTimeEdit::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDateTimeEdit_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QDateTimeEdit::disconnectNotify(*signal);

	}

};

QDateTimeEdit* QDateTimeEdit_new(QWidget* parent) {
	return new MiqtVirtualQDateTimeEdit(parent);
}

QDateTimeEdit* QDateTimeEdit_new2() {
	return new MiqtVirtualQDateTimeEdit();
}

QDateTimeEdit* QDateTimeEdit_new3(QDateTime* dt) {
	return new MiqtVirtualQDateTimeEdit(*dt);
}

QDateTimeEdit* QDateTimeEdit_new4(QDate* d) {
	return new MiqtVirtualQDateTimeEdit(*d);
}

QDateTimeEdit* QDateTimeEdit_new5(QTime* t) {
	return new MiqtVirtualQDateTimeEdit(*t);
}

QDateTimeEdit* QDateTimeEdit_new6(QDateTime* dt, QWidget* parent) {
	return new MiqtVirtualQDateTimeEdit(*dt, parent);
}

QDateTimeEdit* QDateTimeEdit_new7(QDate* d, QWidget* parent) {
	return new MiqtVirtualQDateTimeEdit(*d, parent);
}

QDateTimeEdit* QDateTimeEdit_new8(QTime* t, QWidget* parent) {
	return new MiqtVirtualQDateTimeEdit(*t, parent);
}

void QDateTimeEdit_virtbase(QDateTimeEdit* src, QAbstractSpinBox** outptr_QAbstractSpinBox) {
	*outptr_QAbstractSpinBox = static_cast<QAbstractSpinBox*>(src);
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

bool QDateTimeEdit_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QDateTimeEdit_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_SizeHint();
}

bool QDateTimeEdit_override_virtual_Clear(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clear = slot;
	return true;
}

void QDateTimeEdit_virtualbase_Clear(void* self) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_Clear();
}

bool QDateTimeEdit_override_virtual_StepBy(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StepBy = slot;
	return true;
}

void QDateTimeEdit_virtualbase_StepBy(void* self, int steps) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_StepBy(steps);
}

bool QDateTimeEdit_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QDateTimeEdit_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_Event(event);
}

bool QDateTimeEdit_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QDateTimeEdit_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_WheelEvent(event);
}

bool QDateTimeEdit_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_FocusInEvent(event);
}

bool QDateTimeEdit_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QDateTimeEdit_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QDateTimeEdit_override_virtual_Validate(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Validate = slot;
	return true;
}

int QDateTimeEdit_virtualbase_Validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_Validate(input, pos);
}

bool QDateTimeEdit_override_virtual_Fixup(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Fixup = slot;
	return true;
}

void QDateTimeEdit_virtualbase_Fixup(const void* self, struct miqt_string input) {
	( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_Fixup(input);
}

bool QDateTimeEdit_override_virtual_DateTimeFromText(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DateTimeFromText = slot;
	return true;
}

QDateTime* QDateTimeEdit_virtualbase_DateTimeFromText(const void* self, struct miqt_string text) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_DateTimeFromText(text);
}

bool QDateTimeEdit_override_virtual_TextFromDateTime(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TextFromDateTime = slot;
	return true;
}

struct miqt_string QDateTimeEdit_virtualbase_TextFromDateTime(const void* self, QDateTime* dt) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_TextFromDateTime(dt);
}

bool QDateTimeEdit_override_virtual_StepEnabled(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StepEnabled = slot;
	return true;
}

int QDateTimeEdit_virtualbase_StepEnabled(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_StepEnabled();
}

bool QDateTimeEdit_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_MousePressEvent(event);
}

bool QDateTimeEdit_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_PaintEvent(event);
}

bool QDateTimeEdit_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QDateTimeEdit_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_MinimumSizeHint();
}

bool QDateTimeEdit_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QDateTimeEdit_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QDateTimeEdit_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_ResizeEvent(event);
}

bool QDateTimeEdit_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QDateTimeEdit_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QDateTimeEdit_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QDateTimeEdit_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_ChangeEvent(event);
}

bool QDateTimeEdit_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_CloseEvent(event);
}

bool QDateTimeEdit_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_HideEvent(event);
}

bool QDateTimeEdit_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QDateTimeEdit_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QDateTimeEdit_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_TimerEvent(event);
}

bool QDateTimeEdit_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_ShowEvent(event);
}

bool QDateTimeEdit_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QDateTimeEdit_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_DevType();
}

bool QDateTimeEdit_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QDateTimeEdit_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_SetVisible(visible);
}

bool QDateTimeEdit_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QDateTimeEdit_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QDateTimeEdit_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QDateTimeEdit_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_HasHeightForWidth();
}

bool QDateTimeEdit_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QDateTimeEdit_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_PaintEngine();
}

bool QDateTimeEdit_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QDateTimeEdit_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_EnterEvent(event);
}

bool QDateTimeEdit_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_LeaveEvent(event);
}

bool QDateTimeEdit_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_MoveEvent(event);
}

bool QDateTimeEdit_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_TabletEvent(event);
}

bool QDateTimeEdit_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_ActionEvent(event);
}

bool QDateTimeEdit_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QDateTimeEdit_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QDateTimeEdit_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QDateTimeEdit_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_DropEvent(event);
}

bool QDateTimeEdit_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QDateTimeEdit_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QDateTimeEdit_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QDateTimeEdit_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_Metric(param1);
}

bool QDateTimeEdit_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QDateTimeEdit_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_InitPainter(painter);
}

bool QDateTimeEdit_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QDateTimeEdit_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_Redirected(offset);
}

bool QDateTimeEdit_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QDateTimeEdit_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_SharedPainter();
}

bool QDateTimeEdit_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QDateTimeEdit_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QDateTimeEdit_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QDateTimeEdit_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_ChildEvent(event);
}

bool QDateTimeEdit_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_CustomEvent(event);
}

bool QDateTimeEdit_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QDateTimeEdit_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QDateTimeEdit_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QDateTimeEdit_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QDateTimeEdit_Delete(QDateTimeEdit* self) {
	delete self;
}

class MiqtVirtualQTimeEdit final : public QTimeEdit {
public:

	MiqtVirtualQTimeEdit(QWidget* parent): QTimeEdit(parent) {};
	MiqtVirtualQTimeEdit(): QTimeEdit() {};
	MiqtVirtualQTimeEdit(const QTime& time): QTimeEdit(time) {};
	MiqtVirtualQTimeEdit(const QTime& time, QWidget* parent): QTimeEdit(time, parent) {};

	virtual ~MiqtVirtualQTimeEdit() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QTimeEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTimeEdit_SizeHint(this, handle__SizeHint);

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

		int callback_return_value = miqt_exec_callback_QTimeEdit_Validate(this, handle__Validate, sigval1, sigval2);

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

		miqt_exec_callback_QTimeEdit_Fixup(this, handle__Fixup, sigval1);

		
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

		QDateTime* callback_return_value = miqt_exec_callback_QTimeEdit_DateTimeFromText(this, handle__DateTimeFromText, sigval1);

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

		struct miqt_string callback_return_value = miqt_exec_callback_QTimeEdit_TextFromDateTime(this, handle__TextFromDateTime, sigval1);
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
		

		int callback_return_value = miqt_exec_callback_QTimeEdit_StepEnabled(this, handle__StepEnabled);

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QTimeEdit::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTimeEdit_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QTimeEdit::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QTimeEdit::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTimeEdit_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QTimeEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QTimeEdit::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QTimeEdit::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QTimeEdit::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QTimeEdit::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QTimeEdit::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QTimeEdit::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QTimeEdit::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QTimeEdit::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QTimeEdit::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QTimeEdit::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QTimeEdit::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QTimeEdit::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QTimeEdit::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QTimeEdit::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QTimeEdit::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QTimeEdit::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QTimeEdit::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QTimeEdit::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QTimeEdit::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QTimeEdit::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QTimeEdit::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QTimeEdit::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QTimeEdit::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QTimeEdit_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QTimeEdit::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QTimeEdit::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QTimeEdit_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QTimeEdit::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QTimeEdit::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QTimeEdit_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QTimeEdit::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QTimeEdit::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QTimeEdit_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QTimeEdit::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QTimeEdit::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QTimeEdit_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QTimeEdit::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QTimeEdit::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QTimeEdit::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QTimeEdit::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QTimeEdit::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QTimeEdit::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QTimeEdit::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QTimeEdit::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QTimeEdit::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QTimeEdit::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QTimeEdit::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QTimeEdit::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QTimeEdit::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QTimeEdit::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QTimeEdit::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QTimeEdit::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QTimeEdit::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QTimeEdit::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QTimeEdit::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QTimeEdit::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QTimeEdit::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QTimeEdit::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QTimeEdit_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QTimeEdit::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QTimeEdit::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QTimeEdit_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QTimeEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QTimeEdit::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QTimeEdit_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QTimeEdit::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QTimeEdit::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QTimeEdit_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QTimeEdit::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QTimeEdit::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QTimeEdit_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QTimeEdit::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QTimeEdit::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QTimeEdit_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QTimeEdit::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QTimeEdit::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTimeEdit_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QTimeEdit::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QTimeEdit::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QTimeEdit::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QTimeEdit::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QTimeEdit::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QTimeEdit::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTimeEdit_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QTimeEdit::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QTimeEdit::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTimeEdit_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QTimeEdit::disconnectNotify(*signal);

	}

};

QTimeEdit* QTimeEdit_new(QWidget* parent) {
	return new MiqtVirtualQTimeEdit(parent);
}

QTimeEdit* QTimeEdit_new2() {
	return new MiqtVirtualQTimeEdit();
}

QTimeEdit* QTimeEdit_new3(QTime* time) {
	return new MiqtVirtualQTimeEdit(*time);
}

QTimeEdit* QTimeEdit_new4(QTime* time, QWidget* parent) {
	return new MiqtVirtualQTimeEdit(*time, parent);
}

void QTimeEdit_virtbase(QTimeEdit* src, QDateTimeEdit** outptr_QDateTimeEdit) {
	*outptr_QDateTimeEdit = static_cast<QDateTimeEdit*>(src);
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

bool QTimeEdit_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QTimeEdit_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_SizeHint();
}

bool QTimeEdit_override_virtual_Clear(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clear = slot;
	return true;
}

void QTimeEdit_virtualbase_Clear(void* self) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_Clear();
}

bool QTimeEdit_override_virtual_StepBy(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StepBy = slot;
	return true;
}

void QTimeEdit_virtualbase_StepBy(void* self, int steps) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_StepBy(steps);
}

bool QTimeEdit_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QTimeEdit_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_Event(event);
}

bool QTimeEdit_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QTimeEdit_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_WheelEvent(event);
}

bool QTimeEdit_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_FocusInEvent(event);
}

bool QTimeEdit_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QTimeEdit_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QTimeEdit_override_virtual_Validate(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Validate = slot;
	return true;
}

int QTimeEdit_virtualbase_Validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_Validate(input, pos);
}

bool QTimeEdit_override_virtual_Fixup(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Fixup = slot;
	return true;
}

void QTimeEdit_virtualbase_Fixup(const void* self, struct miqt_string input) {
	( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_Fixup(input);
}

bool QTimeEdit_override_virtual_DateTimeFromText(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DateTimeFromText = slot;
	return true;
}

QDateTime* QTimeEdit_virtualbase_DateTimeFromText(const void* self, struct miqt_string text) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_DateTimeFromText(text);
}

bool QTimeEdit_override_virtual_TextFromDateTime(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TextFromDateTime = slot;
	return true;
}

struct miqt_string QTimeEdit_virtualbase_TextFromDateTime(const void* self, QDateTime* dt) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_TextFromDateTime(dt);
}

bool QTimeEdit_override_virtual_StepEnabled(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StepEnabled = slot;
	return true;
}

int QTimeEdit_virtualbase_StepEnabled(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_StepEnabled();
}

bool QTimeEdit_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_MousePressEvent(event);
}

bool QTimeEdit_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_PaintEvent(event);
}

bool QTimeEdit_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QTimeEdit_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_MinimumSizeHint();
}

bool QTimeEdit_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QTimeEdit_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QTimeEdit_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_ResizeEvent(event);
}

bool QTimeEdit_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QTimeEdit_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QTimeEdit_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QTimeEdit_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_ChangeEvent(event);
}

bool QTimeEdit_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_CloseEvent(event);
}

bool QTimeEdit_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_HideEvent(event);
}

bool QTimeEdit_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QTimeEdit_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QTimeEdit_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_TimerEvent(event);
}

bool QTimeEdit_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_ShowEvent(event);
}

bool QTimeEdit_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QTimeEdit_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_DevType();
}

bool QTimeEdit_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QTimeEdit_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_SetVisible(visible);
}

bool QTimeEdit_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QTimeEdit_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QTimeEdit_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QTimeEdit_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_HasHeightForWidth();
}

bool QTimeEdit_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QTimeEdit_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_PaintEngine();
}

bool QTimeEdit_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QTimeEdit_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_EnterEvent(event);
}

bool QTimeEdit_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_LeaveEvent(event);
}

bool QTimeEdit_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_MoveEvent(event);
}

bool QTimeEdit_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_TabletEvent(event);
}

bool QTimeEdit_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_ActionEvent(event);
}

bool QTimeEdit_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QTimeEdit_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QTimeEdit_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QTimeEdit_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_DropEvent(event);
}

bool QTimeEdit_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QTimeEdit_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QTimeEdit_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QTimeEdit_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_Metric(param1);
}

bool QTimeEdit_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QTimeEdit_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_InitPainter(painter);
}

bool QTimeEdit_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QTimeEdit_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_Redirected(offset);
}

bool QTimeEdit_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QTimeEdit_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_SharedPainter();
}

bool QTimeEdit_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QTimeEdit_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QTimeEdit_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QTimeEdit_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_ChildEvent(event);
}

bool QTimeEdit_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_CustomEvent(event);
}

bool QTimeEdit_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QTimeEdit_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QTimeEdit_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QTimeEdit_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QTimeEdit_Delete(QTimeEdit* self) {
	delete self;
}

class MiqtVirtualQDateEdit final : public QDateEdit {
public:

	MiqtVirtualQDateEdit(QWidget* parent): QDateEdit(parent) {};
	MiqtVirtualQDateEdit(): QDateEdit() {};
	MiqtVirtualQDateEdit(const QDate& date): QDateEdit(date) {};
	MiqtVirtualQDateEdit(const QDate& date, QWidget* parent): QDateEdit(date, parent) {};

	virtual ~MiqtVirtualQDateEdit() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QDateEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDateEdit_SizeHint(this, handle__SizeHint);

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

		int callback_return_value = miqt_exec_callback_QDateEdit_Validate(this, handle__Validate, sigval1, sigval2);

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

		miqt_exec_callback_QDateEdit_Fixup(this, handle__Fixup, sigval1);

		
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

		QDateTime* callback_return_value = miqt_exec_callback_QDateEdit_DateTimeFromText(this, handle__DateTimeFromText, sigval1);

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

		struct miqt_string callback_return_value = miqt_exec_callback_QDateEdit_TextFromDateTime(this, handle__TextFromDateTime, sigval1);
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
		

		int callback_return_value = miqt_exec_callback_QDateEdit_StepEnabled(this, handle__StepEnabled);

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QDateEdit::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDateEdit_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QDateEdit::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QDateEdit::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QDateEdit_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QDateEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QDateEdit::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QDateEdit::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QDateEdit::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QDateEdit::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QDateEdit::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QDateEdit::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QDateEdit::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QDateEdit::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QDateEdit::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QDateEdit::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QDateEdit::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QDateEdit::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QDateEdit::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QDateEdit::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QDateEdit::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QDateEdit::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QDateEdit::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QDateEdit::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QDateEdit::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QDateEdit::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QDateEdit::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QDateEdit::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QDateEdit::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QDateEdit_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QDateEdit::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QDateEdit::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QDateEdit_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QDateEdit::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QDateEdit::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QDateEdit_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QDateEdit::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QDateEdit::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QDateEdit_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QDateEdit::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QDateEdit::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QDateEdit_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QDateEdit::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QDateEdit::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QDateEdit::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QDateEdit::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QDateEdit::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QDateEdit::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QDateEdit::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QDateEdit::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QDateEdit::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QDateEdit::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QDateEdit::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QDateEdit::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QDateEdit::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QDateEdit::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QDateEdit::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QDateEdit::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QDateEdit::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QDateEdit::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QDateEdit::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QDateEdit::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QDateEdit::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QDateEdit::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QDateEdit_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QDateEdit::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QDateEdit::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QDateEdit_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QDateEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QDateEdit::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QDateEdit_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QDateEdit::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QDateEdit::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QDateEdit_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QDateEdit::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QDateEdit::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QDateEdit_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QDateEdit::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QDateEdit::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QDateEdit_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QDateEdit::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QDateEdit::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDateEdit_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QDateEdit::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QDateEdit::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QDateEdit::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QDateEdit::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QDateEdit::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QDateEdit::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDateEdit_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QDateEdit::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QDateEdit::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDateEdit_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QDateEdit::disconnectNotify(*signal);

	}

};

QDateEdit* QDateEdit_new(QWidget* parent) {
	return new MiqtVirtualQDateEdit(parent);
}

QDateEdit* QDateEdit_new2() {
	return new MiqtVirtualQDateEdit();
}

QDateEdit* QDateEdit_new3(QDate* date) {
	return new MiqtVirtualQDateEdit(*date);
}

QDateEdit* QDateEdit_new4(QDate* date, QWidget* parent) {
	return new MiqtVirtualQDateEdit(*date, parent);
}

void QDateEdit_virtbase(QDateEdit* src, QDateTimeEdit** outptr_QDateTimeEdit) {
	*outptr_QDateTimeEdit = static_cast<QDateTimeEdit*>(src);
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

bool QDateEdit_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QDateEdit_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_SizeHint();
}

bool QDateEdit_override_virtual_Clear(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clear = slot;
	return true;
}

void QDateEdit_virtualbase_Clear(void* self) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_Clear();
}

bool QDateEdit_override_virtual_StepBy(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StepBy = slot;
	return true;
}

void QDateEdit_virtualbase_StepBy(void* self, int steps) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_StepBy(steps);
}

bool QDateEdit_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QDateEdit_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDateEdit*)(self) )->virtualbase_Event(event);
}

bool QDateEdit_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QDateEdit_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QDateEdit_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QDateEdit_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_WheelEvent(event);
}

bool QDateEdit_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QDateEdit_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_FocusInEvent(event);
}

bool QDateEdit_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QDateEdit_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQDateEdit*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QDateEdit_override_virtual_Validate(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Validate = slot;
	return true;
}

int QDateEdit_virtualbase_Validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_Validate(input, pos);
}

bool QDateEdit_override_virtual_Fixup(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Fixup = slot;
	return true;
}

void QDateEdit_virtualbase_Fixup(const void* self, struct miqt_string input) {
	( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_Fixup(input);
}

bool QDateEdit_override_virtual_DateTimeFromText(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DateTimeFromText = slot;
	return true;
}

QDateTime* QDateEdit_virtualbase_DateTimeFromText(const void* self, struct miqt_string text) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_DateTimeFromText(text);
}

bool QDateEdit_override_virtual_TextFromDateTime(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TextFromDateTime = slot;
	return true;
}

struct miqt_string QDateEdit_virtualbase_TextFromDateTime(const void* self, QDateTime* dt) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_TextFromDateTime(dt);
}

bool QDateEdit_override_virtual_StepEnabled(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StepEnabled = slot;
	return true;
}

int QDateEdit_virtualbase_StepEnabled(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_StepEnabled();
}

bool QDateEdit_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QDateEdit_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_MousePressEvent(event);
}

bool QDateEdit_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QDateEdit_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_PaintEvent(event);
}

bool QDateEdit_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QDateEdit_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_MinimumSizeHint();
}

bool QDateEdit_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QDateEdit_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QDateEdit_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QDateEdit_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_ResizeEvent(event);
}

bool QDateEdit_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QDateEdit_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QDateEdit_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QDateEdit_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QDateEdit_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QDateEdit_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QDateEdit_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QDateEdit_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_ChangeEvent(event);
}

bool QDateEdit_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QDateEdit_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_CloseEvent(event);
}

bool QDateEdit_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QDateEdit_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_HideEvent(event);
}

bool QDateEdit_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QDateEdit_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QDateEdit_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QDateEdit_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QDateEdit_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QDateEdit_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_TimerEvent(event);
}

bool QDateEdit_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QDateEdit_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_ShowEvent(event);
}

bool QDateEdit_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QDateEdit_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_DevType();
}

bool QDateEdit_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QDateEdit_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_SetVisible(visible);
}

bool QDateEdit_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QDateEdit_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QDateEdit_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QDateEdit_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_HasHeightForWidth();
}

bool QDateEdit_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QDateEdit_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_PaintEngine();
}

bool QDateEdit_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QDateEdit_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QDateEdit_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QDateEdit_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_EnterEvent(event);
}

bool QDateEdit_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QDateEdit_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_LeaveEvent(event);
}

bool QDateEdit_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QDateEdit_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_MoveEvent(event);
}

bool QDateEdit_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QDateEdit_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_TabletEvent(event);
}

bool QDateEdit_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QDateEdit_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_ActionEvent(event);
}

bool QDateEdit_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QDateEdit_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QDateEdit_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QDateEdit_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QDateEdit_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QDateEdit_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QDateEdit_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QDateEdit_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_DropEvent(event);
}

bool QDateEdit_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QDateEdit_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQDateEdit*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QDateEdit_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QDateEdit_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_Metric(param1);
}

bool QDateEdit_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QDateEdit_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_InitPainter(painter);
}

bool QDateEdit_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QDateEdit_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_Redirected(offset);
}

bool QDateEdit_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QDateEdit_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_SharedPainter();
}

bool QDateEdit_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QDateEdit_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QDateEdit_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QDateEdit_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDateEdit*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QDateEdit_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QDateEdit_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_ChildEvent(event);
}

bool QDateEdit_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QDateEdit_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_CustomEvent(event);
}

bool QDateEdit_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QDateEdit_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QDateEdit_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QDateEdit_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QDateEdit_Delete(QDateEdit* self) {
	delete self;
}

