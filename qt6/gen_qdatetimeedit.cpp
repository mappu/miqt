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
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineEdit>
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
#include <QStyleOptionSpinBox>
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

void miqt_exec_callback_QDateTimeEdit_dateTimeChanged(intptr_t, QDateTime*);
void miqt_exec_callback_QDateTimeEdit_timeChanged(intptr_t, QTime*);
void miqt_exec_callback_QDateTimeEdit_dateChanged(intptr_t, QDate*);
QSize* miqt_exec_callback_QDateTimeEdit_sizeHint(const QDateTimeEdit*, intptr_t);
void miqt_exec_callback_QDateTimeEdit_clear(QDateTimeEdit*, intptr_t);
void miqt_exec_callback_QDateTimeEdit_stepBy(QDateTimeEdit*, intptr_t, int);
bool miqt_exec_callback_QDateTimeEdit_event(QDateTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateTimeEdit_keyPressEvent(QDateTimeEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDateTimeEdit_wheelEvent(QDateTimeEdit*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDateTimeEdit_focusInEvent(QDateTimeEdit*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QDateTimeEdit_focusNextPrevChild(QDateTimeEdit*, intptr_t, bool);
int miqt_exec_callback_QDateTimeEdit_validate(const QDateTimeEdit*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QDateTimeEdit_fixup(const QDateTimeEdit*, intptr_t, struct miqt_string);
QDateTime* miqt_exec_callback_QDateTimeEdit_dateTimeFromText(const QDateTimeEdit*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QDateTimeEdit_textFromDateTime(const QDateTimeEdit*, intptr_t, QDateTime*);
int miqt_exec_callback_QDateTimeEdit_stepEnabled(const QDateTimeEdit*, intptr_t);
void miqt_exec_callback_QDateTimeEdit_mousePressEvent(QDateTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateTimeEdit_paintEvent(QDateTimeEdit*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDateTimeEdit_initStyleOption(const QDateTimeEdit*, intptr_t, QStyleOptionSpinBox*);
QSize* miqt_exec_callback_QDateTimeEdit_minimumSizeHint(const QDateTimeEdit*, intptr_t);
QVariant* miqt_exec_callback_QDateTimeEdit_inputMethodQuery(const QDateTimeEdit*, intptr_t, int);
void miqt_exec_callback_QDateTimeEdit_resizeEvent(QDateTimeEdit*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDateTimeEdit_keyReleaseEvent(QDateTimeEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDateTimeEdit_focusOutEvent(QDateTimeEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDateTimeEdit_contextMenuEvent(QDateTimeEdit*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDateTimeEdit_changeEvent(QDateTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateTimeEdit_closeEvent(QDateTimeEdit*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDateTimeEdit_hideEvent(QDateTimeEdit*, intptr_t, QHideEvent*);
void miqt_exec_callback_QDateTimeEdit_mouseReleaseEvent(QDateTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateTimeEdit_mouseMoveEvent(QDateTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateTimeEdit_timerEvent(QDateTimeEdit*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDateTimeEdit_showEvent(QDateTimeEdit*, intptr_t, QShowEvent*);
int miqt_exec_callback_QDateTimeEdit_devType(const QDateTimeEdit*, intptr_t);
void miqt_exec_callback_QDateTimeEdit_setVisible(QDateTimeEdit*, intptr_t, bool);
int miqt_exec_callback_QDateTimeEdit_heightForWidth(const QDateTimeEdit*, intptr_t, int);
bool miqt_exec_callback_QDateTimeEdit_hasHeightForWidth(const QDateTimeEdit*, intptr_t);
QPaintEngine* miqt_exec_callback_QDateTimeEdit_paintEngine(const QDateTimeEdit*, intptr_t);
void miqt_exec_callback_QDateTimeEdit_mouseDoubleClickEvent(QDateTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateTimeEdit_enterEvent(QDateTimeEdit*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QDateTimeEdit_leaveEvent(QDateTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateTimeEdit_moveEvent(QDateTimeEdit*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDateTimeEdit_tabletEvent(QDateTimeEdit*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDateTimeEdit_actionEvent(QDateTimeEdit*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDateTimeEdit_dragEnterEvent(QDateTimeEdit*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDateTimeEdit_dragMoveEvent(QDateTimeEdit*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDateTimeEdit_dragLeaveEvent(QDateTimeEdit*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDateTimeEdit_dropEvent(QDateTimeEdit*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QDateTimeEdit_nativeEvent(QDateTimeEdit*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QDateTimeEdit_metric(const QDateTimeEdit*, intptr_t, int);
void miqt_exec_callback_QDateTimeEdit_initPainter(const QDateTimeEdit*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDateTimeEdit_redirected(const QDateTimeEdit*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDateTimeEdit_sharedPainter(const QDateTimeEdit*, intptr_t);
void miqt_exec_callback_QDateTimeEdit_inputMethodEvent(QDateTimeEdit*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QDateTimeEdit_eventFilter(QDateTimeEdit*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDateTimeEdit_childEvent(QDateTimeEdit*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDateTimeEdit_customEvent(QDateTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateTimeEdit_connectNotify(QDateTimeEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDateTimeEdit_disconnectNotify(QDateTimeEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTimeEdit_userTimeChanged(intptr_t, QTime*);
QSize* miqt_exec_callback_QTimeEdit_sizeHint(const QTimeEdit*, intptr_t);
void miqt_exec_callback_QTimeEdit_clear(QTimeEdit*, intptr_t);
void miqt_exec_callback_QTimeEdit_stepBy(QTimeEdit*, intptr_t, int);
bool miqt_exec_callback_QTimeEdit_event(QTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QTimeEdit_keyPressEvent(QTimeEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTimeEdit_wheelEvent(QTimeEdit*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QTimeEdit_focusInEvent(QTimeEdit*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QTimeEdit_focusNextPrevChild(QTimeEdit*, intptr_t, bool);
int miqt_exec_callback_QTimeEdit_validate(const QTimeEdit*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QTimeEdit_fixup(const QTimeEdit*, intptr_t, struct miqt_string);
QDateTime* miqt_exec_callback_QTimeEdit_dateTimeFromText(const QTimeEdit*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QTimeEdit_textFromDateTime(const QTimeEdit*, intptr_t, QDateTime*);
int miqt_exec_callback_QTimeEdit_stepEnabled(const QTimeEdit*, intptr_t);
void miqt_exec_callback_QTimeEdit_mousePressEvent(QTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTimeEdit_paintEvent(QTimeEdit*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTimeEdit_initStyleOption(const QTimeEdit*, intptr_t, QStyleOptionSpinBox*);
QSize* miqt_exec_callback_QTimeEdit_minimumSizeHint(const QTimeEdit*, intptr_t);
QVariant* miqt_exec_callback_QTimeEdit_inputMethodQuery(const QTimeEdit*, intptr_t, int);
void miqt_exec_callback_QTimeEdit_resizeEvent(QTimeEdit*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTimeEdit_keyReleaseEvent(QTimeEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTimeEdit_focusOutEvent(QTimeEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTimeEdit_contextMenuEvent(QTimeEdit*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTimeEdit_changeEvent(QTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QTimeEdit_closeEvent(QTimeEdit*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTimeEdit_hideEvent(QTimeEdit*, intptr_t, QHideEvent*);
void miqt_exec_callback_QTimeEdit_mouseReleaseEvent(QTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTimeEdit_mouseMoveEvent(QTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTimeEdit_timerEvent(QTimeEdit*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTimeEdit_showEvent(QTimeEdit*, intptr_t, QShowEvent*);
int miqt_exec_callback_QTimeEdit_devType(const QTimeEdit*, intptr_t);
void miqt_exec_callback_QTimeEdit_setVisible(QTimeEdit*, intptr_t, bool);
int miqt_exec_callback_QTimeEdit_heightForWidth(const QTimeEdit*, intptr_t, int);
bool miqt_exec_callback_QTimeEdit_hasHeightForWidth(const QTimeEdit*, intptr_t);
QPaintEngine* miqt_exec_callback_QTimeEdit_paintEngine(const QTimeEdit*, intptr_t);
void miqt_exec_callback_QTimeEdit_mouseDoubleClickEvent(QTimeEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTimeEdit_enterEvent(QTimeEdit*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QTimeEdit_leaveEvent(QTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QTimeEdit_moveEvent(QTimeEdit*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTimeEdit_tabletEvent(QTimeEdit*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTimeEdit_actionEvent(QTimeEdit*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTimeEdit_dragEnterEvent(QTimeEdit*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTimeEdit_dragMoveEvent(QTimeEdit*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QTimeEdit_dragLeaveEvent(QTimeEdit*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTimeEdit_dropEvent(QTimeEdit*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QTimeEdit_nativeEvent(QTimeEdit*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QTimeEdit_metric(const QTimeEdit*, intptr_t, int);
void miqt_exec_callback_QTimeEdit_initPainter(const QTimeEdit*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTimeEdit_redirected(const QTimeEdit*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTimeEdit_sharedPainter(const QTimeEdit*, intptr_t);
void miqt_exec_callback_QTimeEdit_inputMethodEvent(QTimeEdit*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QTimeEdit_eventFilter(QTimeEdit*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTimeEdit_childEvent(QTimeEdit*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTimeEdit_customEvent(QTimeEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QTimeEdit_connectNotify(QTimeEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTimeEdit_disconnectNotify(QTimeEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDateEdit_userDateChanged(intptr_t, QDate*);
QSize* miqt_exec_callback_QDateEdit_sizeHint(const QDateEdit*, intptr_t);
void miqt_exec_callback_QDateEdit_clear(QDateEdit*, intptr_t);
void miqt_exec_callback_QDateEdit_stepBy(QDateEdit*, intptr_t, int);
bool miqt_exec_callback_QDateEdit_event(QDateEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateEdit_keyPressEvent(QDateEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDateEdit_wheelEvent(QDateEdit*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDateEdit_focusInEvent(QDateEdit*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QDateEdit_focusNextPrevChild(QDateEdit*, intptr_t, bool);
int miqt_exec_callback_QDateEdit_validate(const QDateEdit*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QDateEdit_fixup(const QDateEdit*, intptr_t, struct miqt_string);
QDateTime* miqt_exec_callback_QDateEdit_dateTimeFromText(const QDateEdit*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QDateEdit_textFromDateTime(const QDateEdit*, intptr_t, QDateTime*);
int miqt_exec_callback_QDateEdit_stepEnabled(const QDateEdit*, intptr_t);
void miqt_exec_callback_QDateEdit_mousePressEvent(QDateEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateEdit_paintEvent(QDateEdit*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDateEdit_initStyleOption(const QDateEdit*, intptr_t, QStyleOptionSpinBox*);
QSize* miqt_exec_callback_QDateEdit_minimumSizeHint(const QDateEdit*, intptr_t);
QVariant* miqt_exec_callback_QDateEdit_inputMethodQuery(const QDateEdit*, intptr_t, int);
void miqt_exec_callback_QDateEdit_resizeEvent(QDateEdit*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDateEdit_keyReleaseEvent(QDateEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDateEdit_focusOutEvent(QDateEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDateEdit_contextMenuEvent(QDateEdit*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDateEdit_changeEvent(QDateEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateEdit_closeEvent(QDateEdit*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDateEdit_hideEvent(QDateEdit*, intptr_t, QHideEvent*);
void miqt_exec_callback_QDateEdit_mouseReleaseEvent(QDateEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateEdit_mouseMoveEvent(QDateEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateEdit_timerEvent(QDateEdit*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDateEdit_showEvent(QDateEdit*, intptr_t, QShowEvent*);
int miqt_exec_callback_QDateEdit_devType(const QDateEdit*, intptr_t);
void miqt_exec_callback_QDateEdit_setVisible(QDateEdit*, intptr_t, bool);
int miqt_exec_callback_QDateEdit_heightForWidth(const QDateEdit*, intptr_t, int);
bool miqt_exec_callback_QDateEdit_hasHeightForWidth(const QDateEdit*, intptr_t);
QPaintEngine* miqt_exec_callback_QDateEdit_paintEngine(const QDateEdit*, intptr_t);
void miqt_exec_callback_QDateEdit_mouseDoubleClickEvent(QDateEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDateEdit_enterEvent(QDateEdit*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QDateEdit_leaveEvent(QDateEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateEdit_moveEvent(QDateEdit*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDateEdit_tabletEvent(QDateEdit*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDateEdit_actionEvent(QDateEdit*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDateEdit_dragEnterEvent(QDateEdit*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDateEdit_dragMoveEvent(QDateEdit*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDateEdit_dragLeaveEvent(QDateEdit*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDateEdit_dropEvent(QDateEdit*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QDateEdit_nativeEvent(QDateEdit*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QDateEdit_metric(const QDateEdit*, intptr_t, int);
void miqt_exec_callback_QDateEdit_initPainter(const QDateEdit*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDateEdit_redirected(const QDateEdit*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDateEdit_sharedPainter(const QDateEdit*, intptr_t);
void miqt_exec_callback_QDateEdit_inputMethodEvent(QDateEdit*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QDateEdit_eventFilter(QDateEdit*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDateEdit_childEvent(QDateEdit*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDateEdit_customEvent(QDateEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QDateEdit_connectNotify(QDateEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDateEdit_disconnectNotify(QDateEdit*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDateTimeEdit final : public QDateTimeEdit {
public:

	MiqtVirtualQDateTimeEdit(QWidget* parent): QDateTimeEdit(parent) {};
	MiqtVirtualQDateTimeEdit(): QDateTimeEdit() {};
	MiqtVirtualQDateTimeEdit(const QDateTime& dt): QDateTimeEdit(dt) {};
	MiqtVirtualQDateTimeEdit(QDate d): QDateTimeEdit(d) {};
	MiqtVirtualQDateTimeEdit(QTime t): QDateTimeEdit(t) {};
	MiqtVirtualQDateTimeEdit(const QDateTime& dt, QWidget* parent): QDateTimeEdit(dt, parent) {};
	MiqtVirtualQDateTimeEdit(QDate d, QWidget* parent): QDateTimeEdit(d, parent) {};
	MiqtVirtualQDateTimeEdit(QTime t, QWidget* parent): QDateTimeEdit(t, parent) {};

	virtual ~MiqtVirtualQDateTimeEdit() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QDateTimeEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDateTimeEdit_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QDateTimeEdit::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__clear == 0) {
			QDateTimeEdit::clear();
			return;
		}
		

		miqt_exec_callback_QDateTimeEdit_clear(this, handle__clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_clear() {

		QDateTimeEdit::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stepBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void stepBy(int steps) override {
		if (handle__stepBy == 0) {
			QDateTimeEdit::stepBy(steps);
			return;
		}
		
		int sigval1 = steps;

		miqt_exec_callback_QDateTimeEdit_stepBy(this, handle__stepBy, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_stepBy(int steps) {

		QDateTimeEdit::stepBy(static_cast<int>(steps));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDateTimeEdit::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDateTimeEdit_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QDateTimeEdit::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QDateTimeEdit::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QDateTimeEdit::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QDateTimeEdit::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QDateTimeEdit::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QDateTimeEdit::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QDateTimeEdit::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QDateTimeEdit::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QDateTimeEdit_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QDateTimeEdit::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__validate == 0) {
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

		int callback_return_value = miqt_exec_callback_QDateTimeEdit_validate(this, handle__validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QDateTimeEdit::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& input) const override {
		if (handle__fixup == 0) {
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

		miqt_exec_callback_QDateTimeEdit_fixup(this, handle__fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fixup(struct miqt_string input) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QDateTimeEdit::fixup(input_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dateTimeFromText = 0;

	// Subclass to allow providing a Go implementation
	virtual QDateTime dateTimeFromText(const QString& text) const override {
		if (handle__dateTimeFromText == 0) {
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

		QDateTime* callback_return_value = miqt_exec_callback_QDateTimeEdit_dateTimeFromText(this, handle__dateTimeFromText, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QDateTime* virtualbase_dateTimeFromText(struct miqt_string text) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		return new QDateTime(QDateTimeEdit::dateTimeFromText(text_QString));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__textFromDateTime = 0;

	// Subclass to allow providing a Go implementation
	virtual QString textFromDateTime(const QDateTime& dt) const override {
		if (handle__textFromDateTime == 0) {
			return QDateTimeEdit::textFromDateTime(dt);
		}
		
		const QDateTime& dt_ret = dt;
		// Cast returned reference into pointer
		QDateTime* sigval1 = const_cast<QDateTime*>(&dt_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QDateTimeEdit_textFromDateTime(this, handle__textFromDateTime, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_textFromDateTime(QDateTime* dt) const {

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
	intptr_t handle__stepEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
		if (handle__stepEnabled == 0) {
			return QDateTimeEdit::stepEnabled();
		}
		

		int callback_return_value = miqt_exec_callback_QDateTimeEdit_stepEnabled(this, handle__stepEnabled);

		return static_cast<QAbstractSpinBox::StepEnabled>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_stepEnabled() const {

		QAbstractSpinBox::StepEnabled _ret = QDateTimeEdit::stepEnabled();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QDateTimeEdit::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QDateTimeEdit::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QDateTimeEdit::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QDateTimeEdit::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
		if (handle__initStyleOption == 0) {
			QDateTimeEdit::initStyleOption(option);
			return;
		}
		
		QStyleOptionSpinBox* sigval1 = option;

		miqt_exec_callback_QDateTimeEdit_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionSpinBox* option) const {

		QDateTimeEdit::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QDateTimeEdit::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDateTimeEdit_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QDateTimeEdit::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QDateTimeEdit::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QDateTimeEdit_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QDateTimeEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QDateTimeEdit::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QDateTimeEdit::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QDateTimeEdit::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QDateTimeEdit::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QDateTimeEdit::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QDateTimeEdit::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QDateTimeEdit::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QDateTimeEdit::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QDateTimeEdit::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* event) {

		QDateTimeEdit::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QDateTimeEdit::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QDateTimeEdit::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QDateTimeEdit::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QDateTimeEdit::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QDateTimeEdit::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QDateTimeEdit::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QDateTimeEdit::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QDateTimeEdit::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDateTimeEdit::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QDateTimeEdit::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QDateTimeEdit::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QDateTimeEdit::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QDateTimeEdit::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QDateTimeEdit_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QDateTimeEdit::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QDateTimeEdit::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QDateTimeEdit_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QDateTimeEdit::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QDateTimeEdit::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QDateTimeEdit_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QDateTimeEdit::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QDateTimeEdit::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QDateTimeEdit_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QDateTimeEdit::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QDateTimeEdit::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QDateTimeEdit_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QDateTimeEdit::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QDateTimeEdit::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QDateTimeEdit::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QDateTimeEdit::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QDateTimeEdit::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QDateTimeEdit::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QDateTimeEdit::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QDateTimeEdit::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QDateTimeEdit::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QDateTimeEdit::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QDateTimeEdit::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QDateTimeEdit::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QDateTimeEdit::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QDateTimeEdit::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QDateTimeEdit::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QDateTimeEdit::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QDateTimeEdit::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QDateTimeEdit::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QDateTimeEdit::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QDateTimeEdit::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QDateTimeEdit::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QDateTimeEdit::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		qintptr* result_ret = result;
		intptr_t* sigval3 = (intptr_t*)(result_ret);

		bool callback_return_value = miqt_exec_callback_QDateTimeEdit_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QDateTimeEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QDateTimeEdit::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QDateTimeEdit_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QDateTimeEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QDateTimeEdit::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QDateTimeEdit_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QDateTimeEdit::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QDateTimeEdit::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QDateTimeEdit_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QDateTimeEdit::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QDateTimeEdit::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QDateTimeEdit_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QDateTimeEdit::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QDateTimeEdit::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QDateTimeEdit_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QDateTimeEdit::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDateTimeEdit::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDateTimeEdit_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QDateTimeEdit::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDateTimeEdit::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QDateTimeEdit::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDateTimeEdit::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeEdit_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QDateTimeEdit::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDateTimeEdit::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDateTimeEdit_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QDateTimeEdit::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDateTimeEdit::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDateTimeEdit_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QDateTimeEdit::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QLineEdit* QDateTimeEdit_protectedbase_lineEdit(bool* _dynamic_cast_ok, const void* self);
	friend void QDateTimeEdit_protectedbase_setLineEdit(bool* _dynamic_cast_ok, void* self, QLineEdit* edit);
	friend void QDateTimeEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QDateTimeEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QDateTimeEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QDateTimeEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QDateTimeEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QDateTimeEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDateTimeEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDateTimeEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDateTimeEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QDateTimeEdit_metaObject(const QDateTimeEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDateTimeEdit_metacast(QDateTimeEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDateTimeEdit_tr(const char* s) {
	QString _ret = QDateTimeEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QDateTimeEdit_dateTime(const QDateTimeEdit* self) {
	return new QDateTime(self->dateTime());
}

QDate* QDateTimeEdit_date(const QDateTimeEdit* self) {
	return new QDate(self->date());
}

QTime* QDateTimeEdit_time(const QDateTimeEdit* self) {
	return new QTime(self->time());
}

QCalendar* QDateTimeEdit_calendar(const QDateTimeEdit* self) {
	return new QCalendar(self->calendar());
}

void QDateTimeEdit_setCalendar(QDateTimeEdit* self, QCalendar* calendar) {
	self->setCalendar(*calendar);
}

QDateTime* QDateTimeEdit_minimumDateTime(const QDateTimeEdit* self) {
	return new QDateTime(self->minimumDateTime());
}

void QDateTimeEdit_clearMinimumDateTime(QDateTimeEdit* self) {
	self->clearMinimumDateTime();
}

void QDateTimeEdit_setMinimumDateTime(QDateTimeEdit* self, QDateTime* dt) {
	self->setMinimumDateTime(*dt);
}

QDateTime* QDateTimeEdit_maximumDateTime(const QDateTimeEdit* self) {
	return new QDateTime(self->maximumDateTime());
}

void QDateTimeEdit_clearMaximumDateTime(QDateTimeEdit* self) {
	self->clearMaximumDateTime();
}

void QDateTimeEdit_setMaximumDateTime(QDateTimeEdit* self, QDateTime* dt) {
	self->setMaximumDateTime(*dt);
}

void QDateTimeEdit_setDateTimeRange(QDateTimeEdit* self, QDateTime* min, QDateTime* max) {
	self->setDateTimeRange(*min, *max);
}

QDate* QDateTimeEdit_minimumDate(const QDateTimeEdit* self) {
	return new QDate(self->minimumDate());
}

void QDateTimeEdit_setMinimumDate(QDateTimeEdit* self, QDate* min) {
	self->setMinimumDate(*min);
}

void QDateTimeEdit_clearMinimumDate(QDateTimeEdit* self) {
	self->clearMinimumDate();
}

QDate* QDateTimeEdit_maximumDate(const QDateTimeEdit* self) {
	return new QDate(self->maximumDate());
}

void QDateTimeEdit_setMaximumDate(QDateTimeEdit* self, QDate* max) {
	self->setMaximumDate(*max);
}

void QDateTimeEdit_clearMaximumDate(QDateTimeEdit* self) {
	self->clearMaximumDate();
}

void QDateTimeEdit_setDateRange(QDateTimeEdit* self, QDate* min, QDate* max) {
	self->setDateRange(*min, *max);
}

QTime* QDateTimeEdit_minimumTime(const QDateTimeEdit* self) {
	return new QTime(self->minimumTime());
}

void QDateTimeEdit_setMinimumTime(QDateTimeEdit* self, QTime* min) {
	self->setMinimumTime(*min);
}

void QDateTimeEdit_clearMinimumTime(QDateTimeEdit* self) {
	self->clearMinimumTime();
}

QTime* QDateTimeEdit_maximumTime(const QDateTimeEdit* self) {
	return new QTime(self->maximumTime());
}

void QDateTimeEdit_setMaximumTime(QDateTimeEdit* self, QTime* max) {
	self->setMaximumTime(*max);
}

void QDateTimeEdit_clearMaximumTime(QDateTimeEdit* self) {
	self->clearMaximumTime();
}

void QDateTimeEdit_setTimeRange(QDateTimeEdit* self, QTime* min, QTime* max) {
	self->setTimeRange(*min, *max);
}

int QDateTimeEdit_displayedSections(const QDateTimeEdit* self) {
	QDateTimeEdit::Sections _ret = self->displayedSections();
	return static_cast<int>(_ret);
}

int QDateTimeEdit_currentSection(const QDateTimeEdit* self) {
	QDateTimeEdit::Section _ret = self->currentSection();
	return static_cast<int>(_ret);
}

int QDateTimeEdit_sectionAt(const QDateTimeEdit* self, int index) {
	QDateTimeEdit::Section _ret = self->sectionAt(static_cast<int>(index));
	return static_cast<int>(_ret);
}

void QDateTimeEdit_setCurrentSection(QDateTimeEdit* self, int section) {
	self->setCurrentSection(static_cast<QDateTimeEdit::Section>(section));
}

int QDateTimeEdit_currentSectionIndex(const QDateTimeEdit* self) {
	return self->currentSectionIndex();
}

void QDateTimeEdit_setCurrentSectionIndex(QDateTimeEdit* self, int index) {
	self->setCurrentSectionIndex(static_cast<int>(index));
}

QCalendarWidget* QDateTimeEdit_calendarWidget(const QDateTimeEdit* self) {
	return self->calendarWidget();
}

void QDateTimeEdit_setCalendarWidget(QDateTimeEdit* self, QCalendarWidget* calendarWidget) {
	self->setCalendarWidget(calendarWidget);
}

int QDateTimeEdit_sectionCount(const QDateTimeEdit* self) {
	return self->sectionCount();
}

void QDateTimeEdit_setSelectedSection(QDateTimeEdit* self, int section) {
	self->setSelectedSection(static_cast<QDateTimeEdit::Section>(section));
}

struct miqt_string QDateTimeEdit_sectionText(const QDateTimeEdit* self, int section) {
	QString _ret = self->sectionText(static_cast<QDateTimeEdit::Section>(section));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateTimeEdit_displayFormat(const QDateTimeEdit* self) {
	QString _ret = self->displayFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDateTimeEdit_setDisplayFormat(QDateTimeEdit* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->setDisplayFormat(format_QString);
}

bool QDateTimeEdit_calendarPopup(const QDateTimeEdit* self) {
	return self->calendarPopup();
}

void QDateTimeEdit_setCalendarPopup(QDateTimeEdit* self, bool enable) {
	self->setCalendarPopup(enable);
}

int QDateTimeEdit_timeSpec(const QDateTimeEdit* self) {
	Qt::TimeSpec _ret = self->timeSpec();
	return static_cast<int>(_ret);
}

void QDateTimeEdit_setTimeSpec(QDateTimeEdit* self, int spec) {
	self->setTimeSpec(static_cast<Qt::TimeSpec>(spec));
}

QSize* QDateTimeEdit_sizeHint(const QDateTimeEdit* self) {
	return new QSize(self->sizeHint());
}

void QDateTimeEdit_clear(QDateTimeEdit* self) {
	self->clear();
}

void QDateTimeEdit_stepBy(QDateTimeEdit* self, int steps) {
	self->stepBy(static_cast<int>(steps));
}

bool QDateTimeEdit_event(QDateTimeEdit* self, QEvent* event) {
	return self->event(event);
}

void QDateTimeEdit_dateTimeChanged(QDateTimeEdit* self, QDateTime* dateTime) {
	self->dateTimeChanged(*dateTime);
}

void QDateTimeEdit_connect_dateTimeChanged(QDateTimeEdit* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit::connect(self, static_cast<void (QDateTimeEdit::*)(const QDateTime&)>(&QDateTimeEdit::dateTimeChanged), self, [=](const QDateTime& dateTime) {
		const QDateTime& dateTime_ret = dateTime;
		// Cast returned reference into pointer
		QDateTime* sigval1 = const_cast<QDateTime*>(&dateTime_ret);
		miqt_exec_callback_QDateTimeEdit_dateTimeChanged(slot, sigval1);
	});
}

void QDateTimeEdit_timeChanged(QDateTimeEdit* self, QTime* time) {
	self->timeChanged(*time);
}

void QDateTimeEdit_connect_timeChanged(QDateTimeEdit* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit::connect(self, static_cast<void (QDateTimeEdit::*)(QTime)>(&QDateTimeEdit::timeChanged), self, [=](QTime time) {
		QTime* sigval1 = new QTime(time);
		miqt_exec_callback_QDateTimeEdit_timeChanged(slot, sigval1);
	});
}

void QDateTimeEdit_dateChanged(QDateTimeEdit* self, QDate* date) {
	self->dateChanged(*date);
}

void QDateTimeEdit_connect_dateChanged(QDateTimeEdit* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit::connect(self, static_cast<void (QDateTimeEdit::*)(QDate)>(&QDateTimeEdit::dateChanged), self, [=](QDate date) {
		QDate* sigval1 = new QDate(date);
		miqt_exec_callback_QDateTimeEdit_dateChanged(slot, sigval1);
	});
}

void QDateTimeEdit_setDateTime(QDateTimeEdit* self, QDateTime* dateTime) {
	self->setDateTime(*dateTime);
}

void QDateTimeEdit_setDate(QDateTimeEdit* self, QDate* date) {
	self->setDate(*date);
}

void QDateTimeEdit_setTime(QDateTimeEdit* self, QTime* time) {
	self->setTime(*time);
}

struct miqt_string QDateTimeEdit_tr2(const char* s, const char* c) {
	QString _ret = QDateTimeEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateTimeEdit_tr3(const char* s, const char* c, int n) {
	QString _ret = QDateTimeEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDateTimeEdit_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QDateTimeEdit_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_sizeHint();
}

bool QDateTimeEdit_override_virtual_clear(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clear = slot;
	return true;
}

void QDateTimeEdit_virtualbase_clear(void* self) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_clear();
}

bool QDateTimeEdit_override_virtual_stepBy(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__stepBy = slot;
	return true;
}

void QDateTimeEdit_virtualbase_stepBy(void* self, int steps) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_stepBy(steps);
}

bool QDateTimeEdit_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QDateTimeEdit_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_event(event);
}

bool QDateTimeEdit_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_keyPressEvent(event);
}

bool QDateTimeEdit_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_wheelEvent(event);
}

bool QDateTimeEdit_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_focusInEvent(event);
}

bool QDateTimeEdit_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QDateTimeEdit_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QDateTimeEdit_override_virtual_validate(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__validate = slot;
	return true;
}

int QDateTimeEdit_virtualbase_validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_validate(input, pos);
}

bool QDateTimeEdit_override_virtual_fixup(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fixup = slot;
	return true;
}

void QDateTimeEdit_virtualbase_fixup(const void* self, struct miqt_string input) {
	( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_fixup(input);
}

bool QDateTimeEdit_override_virtual_dateTimeFromText(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dateTimeFromText = slot;
	return true;
}

QDateTime* QDateTimeEdit_virtualbase_dateTimeFromText(const void* self, struct miqt_string text) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_dateTimeFromText(text);
}

bool QDateTimeEdit_override_virtual_textFromDateTime(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__textFromDateTime = slot;
	return true;
}

struct miqt_string QDateTimeEdit_virtualbase_textFromDateTime(const void* self, QDateTime* dt) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_textFromDateTime(dt);
}

bool QDateTimeEdit_override_virtual_stepEnabled(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__stepEnabled = slot;
	return true;
}

int QDateTimeEdit_virtualbase_stepEnabled(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_stepEnabled();
}

bool QDateTimeEdit_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_mousePressEvent(event);
}

bool QDateTimeEdit_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_paintEvent(event);
}

bool QDateTimeEdit_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QDateTimeEdit_virtualbase_initStyleOption(const void* self, QStyleOptionSpinBox* option) {
	( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_initStyleOption(option);
}

bool QDateTimeEdit_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QDateTimeEdit_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_minimumSizeHint();
}

bool QDateTimeEdit_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QDateTimeEdit_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QDateTimeEdit_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_resizeEvent(event);
}

bool QDateTimeEdit_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QDateTimeEdit_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_focusOutEvent(event);
}

bool QDateTimeEdit_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QDateTimeEdit_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_changeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_changeEvent(event);
}

bool QDateTimeEdit_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_closeEvent(event);
}

bool QDateTimeEdit_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_hideEvent(event);
}

bool QDateTimeEdit_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QDateTimeEdit_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QDateTimeEdit_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_timerEvent(event);
}

bool QDateTimeEdit_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_showEvent(event);
}

bool QDateTimeEdit_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QDateTimeEdit_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_devType();
}

bool QDateTimeEdit_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QDateTimeEdit_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_setVisible(visible);
}

bool QDateTimeEdit_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QDateTimeEdit_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_heightForWidth(param1);
}

bool QDateTimeEdit_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QDateTimeEdit_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_hasHeightForWidth();
}

bool QDateTimeEdit_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QDateTimeEdit_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_paintEngine();
}

bool QDateTimeEdit_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QDateTimeEdit_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_enterEvent(event);
}

bool QDateTimeEdit_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_leaveEvent(event);
}

bool QDateTimeEdit_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_moveEvent(event);
}

bool QDateTimeEdit_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_tabletEvent(event);
}

bool QDateTimeEdit_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_actionEvent(event);
}

bool QDateTimeEdit_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QDateTimeEdit_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QDateTimeEdit_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QDateTimeEdit_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_dropEvent(event);
}

bool QDateTimeEdit_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QDateTimeEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QDateTimeEdit_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QDateTimeEdit_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_metric(param1);
}

bool QDateTimeEdit_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QDateTimeEdit_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_initPainter(painter);
}

bool QDateTimeEdit_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QDateTimeEdit_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_redirected(offset);
}

bool QDateTimeEdit_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QDateTimeEdit_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_sharedPainter();
}

bool QDateTimeEdit_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QDateTimeEdit_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDateTimeEdit_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QDateTimeEdit_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_childEvent(event);
}

bool QDateTimeEdit_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QDateTimeEdit_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_customEvent(event);
}

bool QDateTimeEdit_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QDateTimeEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_connectNotify(signal);
}

bool QDateTimeEdit_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDateTimeEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDateTimeEdit*)(self) )->virtualbase_disconnectNotify(signal);
}

QLineEdit* QDateTimeEdit_protectedbase_lineEdit(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->lineEdit();

}

void QDateTimeEdit_protectedbase_setLineEdit(bool* _dynamic_cast_ok, void* self, QLineEdit* edit) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLineEdit(edit);

}

void QDateTimeEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QDateTimeEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QDateTimeEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QDateTimeEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QDateTimeEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QDateTimeEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QDateTimeEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QDateTimeEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QDateTimeEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDateTimeEdit* self_cast = dynamic_cast<MiqtVirtualQDateTimeEdit*>( (QDateTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QDateTimeEdit_delete(QDateTimeEdit* self) {
	delete self;
}

class MiqtVirtualQTimeEdit final : public QTimeEdit {
public:

	MiqtVirtualQTimeEdit(QWidget* parent): QTimeEdit(parent) {};
	MiqtVirtualQTimeEdit(): QTimeEdit() {};
	MiqtVirtualQTimeEdit(QTime time): QTimeEdit(time) {};
	MiqtVirtualQTimeEdit(QTime time, QWidget* parent): QTimeEdit(time, parent) {};

	virtual ~MiqtVirtualQTimeEdit() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QTimeEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTimeEdit_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QTimeEdit::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__clear == 0) {
			QTimeEdit::clear();
			return;
		}
		

		miqt_exec_callback_QTimeEdit_clear(this, handle__clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_clear() {

		QTimeEdit::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stepBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void stepBy(int steps) override {
		if (handle__stepBy == 0) {
			QTimeEdit::stepBy(steps);
			return;
		}
		
		int sigval1 = steps;

		miqt_exec_callback_QTimeEdit_stepBy(this, handle__stepBy, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_stepBy(int steps) {

		QTimeEdit::stepBy(static_cast<int>(steps));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTimeEdit::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTimeEdit_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QTimeEdit::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QTimeEdit::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QTimeEdit::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QTimeEdit::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QTimeEdit::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QTimeEdit::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QTimeEdit::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QTimeEdit::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTimeEdit_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QTimeEdit::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__validate == 0) {
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

		int callback_return_value = miqt_exec_callback_QTimeEdit_validate(this, handle__validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QTimeEdit::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& input) const override {
		if (handle__fixup == 0) {
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

		miqt_exec_callback_QTimeEdit_fixup(this, handle__fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fixup(struct miqt_string input) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QTimeEdit::fixup(input_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dateTimeFromText = 0;

	// Subclass to allow providing a Go implementation
	virtual QDateTime dateTimeFromText(const QString& text) const override {
		if (handle__dateTimeFromText == 0) {
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

		QDateTime* callback_return_value = miqt_exec_callback_QTimeEdit_dateTimeFromText(this, handle__dateTimeFromText, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QDateTime* virtualbase_dateTimeFromText(struct miqt_string text) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		return new QDateTime(QTimeEdit::dateTimeFromText(text_QString));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__textFromDateTime = 0;

	// Subclass to allow providing a Go implementation
	virtual QString textFromDateTime(const QDateTime& dt) const override {
		if (handle__textFromDateTime == 0) {
			return QTimeEdit::textFromDateTime(dt);
		}
		
		const QDateTime& dt_ret = dt;
		// Cast returned reference into pointer
		QDateTime* sigval1 = const_cast<QDateTime*>(&dt_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QTimeEdit_textFromDateTime(this, handle__textFromDateTime, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_textFromDateTime(QDateTime* dt) const {

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
	intptr_t handle__stepEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
		if (handle__stepEnabled == 0) {
			return QTimeEdit::stepEnabled();
		}
		

		int callback_return_value = miqt_exec_callback_QTimeEdit_stepEnabled(this, handle__stepEnabled);

		return static_cast<QAbstractSpinBox::StepEnabled>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_stepEnabled() const {

		QAbstractSpinBox::StepEnabled _ret = QTimeEdit::stepEnabled();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QTimeEdit::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QTimeEdit::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QTimeEdit::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QTimeEdit::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
		if (handle__initStyleOption == 0) {
			QTimeEdit::initStyleOption(option);
			return;
		}
		
		QStyleOptionSpinBox* sigval1 = option;

		miqt_exec_callback_QTimeEdit_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionSpinBox* option) const {

		QTimeEdit::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QTimeEdit::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTimeEdit_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QTimeEdit::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QTimeEdit::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTimeEdit_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QTimeEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QTimeEdit::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QTimeEdit::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QTimeEdit::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QTimeEdit::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QTimeEdit::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QTimeEdit::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QTimeEdit::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QTimeEdit::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QTimeEdit::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* event) {

		QTimeEdit::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QTimeEdit::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QTimeEdit::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QTimeEdit::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QTimeEdit::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QTimeEdit::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QTimeEdit::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QTimeEdit::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QTimeEdit::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTimeEdit::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QTimeEdit::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QTimeEdit::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QTimeEdit::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QTimeEdit::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QTimeEdit_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QTimeEdit::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QTimeEdit::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QTimeEdit_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QTimeEdit::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QTimeEdit::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QTimeEdit_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QTimeEdit::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QTimeEdit::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QTimeEdit_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QTimeEdit::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QTimeEdit::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QTimeEdit_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QTimeEdit::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QTimeEdit::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QTimeEdit::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QTimeEdit::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QTimeEdit::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QTimeEdit::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QTimeEdit::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QTimeEdit::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QTimeEdit::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QTimeEdit::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QTimeEdit::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QTimeEdit::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QTimeEdit::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QTimeEdit::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QTimeEdit::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QTimeEdit::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QTimeEdit::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QTimeEdit::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QTimeEdit::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QTimeEdit::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QTimeEdit::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QTimeEdit::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		qintptr* result_ret = result;
		intptr_t* sigval3 = (intptr_t*)(result_ret);

		bool callback_return_value = miqt_exec_callback_QTimeEdit_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QTimeEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QTimeEdit::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QTimeEdit_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QTimeEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QTimeEdit::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QTimeEdit_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QTimeEdit::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QTimeEdit::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QTimeEdit_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QTimeEdit::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QTimeEdit::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QTimeEdit_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QTimeEdit::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QTimeEdit::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QTimeEdit_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QTimeEdit::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTimeEdit::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTimeEdit_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QTimeEdit::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTimeEdit::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTimeEdit::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTimeEdit::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTimeEdit_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTimeEdit::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTimeEdit::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTimeEdit_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTimeEdit::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTimeEdit::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTimeEdit_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTimeEdit::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QLineEdit* QTimeEdit_protectedbase_lineEdit(bool* _dynamic_cast_ok, const void* self);
	friend void QTimeEdit_protectedbase_setLineEdit(bool* _dynamic_cast_ok, void* self, QLineEdit* edit);
	friend void QTimeEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QTimeEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QTimeEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QTimeEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QTimeEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QTimeEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTimeEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTimeEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTimeEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QTimeEdit_metaObject(const QTimeEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTimeEdit_metacast(QTimeEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTimeEdit_tr(const char* s) {
	QString _ret = QTimeEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTimeEdit_userTimeChanged(QTimeEdit* self, QTime* time) {
	self->userTimeChanged(*time);
}

void QTimeEdit_connect_userTimeChanged(QTimeEdit* self, intptr_t slot) {
	MiqtVirtualQTimeEdit::connect(self, static_cast<void (QTimeEdit::*)(QTime)>(&QTimeEdit::userTimeChanged), self, [=](QTime time) {
		QTime* sigval1 = new QTime(time);
		miqt_exec_callback_QTimeEdit_userTimeChanged(slot, sigval1);
	});
}

struct miqt_string QTimeEdit_tr2(const char* s, const char* c) {
	QString _ret = QTimeEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeEdit_tr3(const char* s, const char* c, int n) {
	QString _ret = QTimeEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTimeEdit_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QTimeEdit_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_sizeHint();
}

bool QTimeEdit_override_virtual_clear(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clear = slot;
	return true;
}

void QTimeEdit_virtualbase_clear(void* self) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_clear();
}

bool QTimeEdit_override_virtual_stepBy(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__stepBy = slot;
	return true;
}

void QTimeEdit_virtualbase_stepBy(void* self, int steps) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_stepBy(steps);
}

bool QTimeEdit_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTimeEdit_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_event(event);
}

bool QTimeEdit_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_keyPressEvent(event);
}

bool QTimeEdit_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_wheelEvent(event);
}

bool QTimeEdit_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_focusInEvent(event);
}

bool QTimeEdit_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QTimeEdit_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QTimeEdit_override_virtual_validate(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__validate = slot;
	return true;
}

int QTimeEdit_virtualbase_validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_validate(input, pos);
}

bool QTimeEdit_override_virtual_fixup(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fixup = slot;
	return true;
}

void QTimeEdit_virtualbase_fixup(const void* self, struct miqt_string input) {
	( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_fixup(input);
}

bool QTimeEdit_override_virtual_dateTimeFromText(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dateTimeFromText = slot;
	return true;
}

QDateTime* QTimeEdit_virtualbase_dateTimeFromText(const void* self, struct miqt_string text) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_dateTimeFromText(text);
}

bool QTimeEdit_override_virtual_textFromDateTime(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__textFromDateTime = slot;
	return true;
}

struct miqt_string QTimeEdit_virtualbase_textFromDateTime(const void* self, QDateTime* dt) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_textFromDateTime(dt);
}

bool QTimeEdit_override_virtual_stepEnabled(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__stepEnabled = slot;
	return true;
}

int QTimeEdit_virtualbase_stepEnabled(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_stepEnabled();
}

bool QTimeEdit_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_mousePressEvent(event);
}

bool QTimeEdit_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_paintEvent(event);
}

bool QTimeEdit_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QTimeEdit_virtualbase_initStyleOption(const void* self, QStyleOptionSpinBox* option) {
	( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_initStyleOption(option);
}

bool QTimeEdit_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QTimeEdit_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_minimumSizeHint();
}

bool QTimeEdit_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QTimeEdit_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QTimeEdit_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_resizeEvent(event);
}

bool QTimeEdit_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QTimeEdit_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_focusOutEvent(event);
}

bool QTimeEdit_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QTimeEdit_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_changeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_changeEvent(event);
}

bool QTimeEdit_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_closeEvent(event);
}

bool QTimeEdit_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_hideEvent(event);
}

bool QTimeEdit_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QTimeEdit_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QTimeEdit_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_timerEvent(event);
}

bool QTimeEdit_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_showEvent(event);
}

bool QTimeEdit_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QTimeEdit_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_devType();
}

bool QTimeEdit_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QTimeEdit_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_setVisible(visible);
}

bool QTimeEdit_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QTimeEdit_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_heightForWidth(param1);
}

bool QTimeEdit_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QTimeEdit_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_hasHeightForWidth();
}

bool QTimeEdit_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QTimeEdit_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_paintEngine();
}

bool QTimeEdit_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QTimeEdit_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_enterEvent(event);
}

bool QTimeEdit_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_leaveEvent(event);
}

bool QTimeEdit_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_moveEvent(event);
}

bool QTimeEdit_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_tabletEvent(event);
}

bool QTimeEdit_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_actionEvent(event);
}

bool QTimeEdit_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QTimeEdit_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QTimeEdit_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QTimeEdit_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_dropEvent(event);
}

bool QTimeEdit_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QTimeEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QTimeEdit_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QTimeEdit_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_metric(param1);
}

bool QTimeEdit_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QTimeEdit_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_initPainter(painter);
}

bool QTimeEdit_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QTimeEdit_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_redirected(offset);
}

bool QTimeEdit_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QTimeEdit_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQTimeEdit*)(self) )->virtualbase_sharedPainter();
}

bool QTimeEdit_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QTimeEdit_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTimeEdit_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QTimeEdit_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_childEvent(event);
}

bool QTimeEdit_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTimeEdit_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_customEvent(event);
}

bool QTimeEdit_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTimeEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_connectNotify(signal);
}

bool QTimeEdit_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTimeEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTimeEdit*)(self) )->virtualbase_disconnectNotify(signal);
}

QLineEdit* QTimeEdit_protectedbase_lineEdit(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->lineEdit();

}

void QTimeEdit_protectedbase_setLineEdit(bool* _dynamic_cast_ok, void* self, QLineEdit* edit) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLineEdit(edit);

}

void QTimeEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QTimeEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QTimeEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QTimeEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QTimeEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QTimeEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTimeEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTimeEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTimeEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTimeEdit* self_cast = dynamic_cast<MiqtVirtualQTimeEdit*>( (QTimeEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTimeEdit_delete(QTimeEdit* self) {
	delete self;
}

class MiqtVirtualQDateEdit final : public QDateEdit {
public:

	MiqtVirtualQDateEdit(QWidget* parent): QDateEdit(parent) {};
	MiqtVirtualQDateEdit(): QDateEdit() {};
	MiqtVirtualQDateEdit(QDate date): QDateEdit(date) {};
	MiqtVirtualQDateEdit(QDate date, QWidget* parent): QDateEdit(date, parent) {};

	virtual ~MiqtVirtualQDateEdit() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QDateEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDateEdit_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QDateEdit::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__clear == 0) {
			QDateEdit::clear();
			return;
		}
		

		miqt_exec_callback_QDateEdit_clear(this, handle__clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_clear() {

		QDateEdit::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stepBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void stepBy(int steps) override {
		if (handle__stepBy == 0) {
			QDateEdit::stepBy(steps);
			return;
		}
		
		int sigval1 = steps;

		miqt_exec_callback_QDateEdit_stepBy(this, handle__stepBy, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_stepBy(int steps) {

		QDateEdit::stepBy(static_cast<int>(steps));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDateEdit::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDateEdit_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QDateEdit::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QDateEdit::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QDateEdit::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QDateEdit::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QDateEdit::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QDateEdit::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QDateEdit::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QDateEdit::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QDateEdit_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QDateEdit::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__validate == 0) {
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

		int callback_return_value = miqt_exec_callback_QDateEdit_validate(this, handle__validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QDateEdit::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& input) const override {
		if (handle__fixup == 0) {
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

		miqt_exec_callback_QDateEdit_fixup(this, handle__fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fixup(struct miqt_string input) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QDateEdit::fixup(input_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dateTimeFromText = 0;

	// Subclass to allow providing a Go implementation
	virtual QDateTime dateTimeFromText(const QString& text) const override {
		if (handle__dateTimeFromText == 0) {
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

		QDateTime* callback_return_value = miqt_exec_callback_QDateEdit_dateTimeFromText(this, handle__dateTimeFromText, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QDateTime* virtualbase_dateTimeFromText(struct miqt_string text) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		return new QDateTime(QDateEdit::dateTimeFromText(text_QString));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__textFromDateTime = 0;

	// Subclass to allow providing a Go implementation
	virtual QString textFromDateTime(const QDateTime& dt) const override {
		if (handle__textFromDateTime == 0) {
			return QDateEdit::textFromDateTime(dt);
		}
		
		const QDateTime& dt_ret = dt;
		// Cast returned reference into pointer
		QDateTime* sigval1 = const_cast<QDateTime*>(&dt_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QDateEdit_textFromDateTime(this, handle__textFromDateTime, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_textFromDateTime(QDateTime* dt) const {

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
	intptr_t handle__stepEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
		if (handle__stepEnabled == 0) {
			return QDateEdit::stepEnabled();
		}
		

		int callback_return_value = miqt_exec_callback_QDateEdit_stepEnabled(this, handle__stepEnabled);

		return static_cast<QAbstractSpinBox::StepEnabled>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_stepEnabled() const {

		QAbstractSpinBox::StepEnabled _ret = QDateEdit::stepEnabled();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QDateEdit::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QDateEdit::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QDateEdit::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QDateEdit::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
		if (handle__initStyleOption == 0) {
			QDateEdit::initStyleOption(option);
			return;
		}
		
		QStyleOptionSpinBox* sigval1 = option;

		miqt_exec_callback_QDateEdit_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionSpinBox* option) const {

		QDateEdit::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QDateEdit::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDateEdit_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QDateEdit::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QDateEdit::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QDateEdit_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QDateEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QDateEdit::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QDateEdit::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QDateEdit::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QDateEdit::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QDateEdit::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QDateEdit::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QDateEdit::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QDateEdit::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QDateEdit::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* event) {

		QDateEdit::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QDateEdit::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QDateEdit::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QDateEdit::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QDateEdit::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QDateEdit::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QDateEdit::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QDateEdit::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QDateEdit::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDateEdit::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QDateEdit::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QDateEdit::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QDateEdit::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QDateEdit::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QDateEdit_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QDateEdit::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QDateEdit::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QDateEdit_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QDateEdit::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QDateEdit::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QDateEdit_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QDateEdit::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QDateEdit::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QDateEdit_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QDateEdit::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QDateEdit::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QDateEdit_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QDateEdit::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QDateEdit::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QDateEdit::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QDateEdit::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QDateEdit::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QDateEdit::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QDateEdit::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QDateEdit::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QDateEdit::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QDateEdit::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QDateEdit::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QDateEdit::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QDateEdit::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QDateEdit::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QDateEdit::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QDateEdit::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QDateEdit::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QDateEdit::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QDateEdit::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QDateEdit::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QDateEdit::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QDateEdit::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		qintptr* result_ret = result;
		intptr_t* sigval3 = (intptr_t*)(result_ret);

		bool callback_return_value = miqt_exec_callback_QDateEdit_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QDateEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QDateEdit::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QDateEdit_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QDateEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QDateEdit::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QDateEdit_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QDateEdit::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QDateEdit::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QDateEdit_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QDateEdit::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QDateEdit::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QDateEdit_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QDateEdit::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QDateEdit::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QDateEdit_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QDateEdit::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDateEdit::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDateEdit_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QDateEdit::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDateEdit::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QDateEdit::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDateEdit::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDateEdit_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QDateEdit::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDateEdit::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDateEdit_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QDateEdit::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDateEdit::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDateEdit_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QDateEdit::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QLineEdit* QDateEdit_protectedbase_lineEdit(bool* _dynamic_cast_ok, const void* self);
	friend void QDateEdit_protectedbase_setLineEdit(bool* _dynamic_cast_ok, void* self, QLineEdit* edit);
	friend void QDateEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QDateEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QDateEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QDateEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QDateEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QDateEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDateEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDateEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDateEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QDateEdit_metaObject(const QDateEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDateEdit_metacast(QDateEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDateEdit_tr(const char* s) {
	QString _ret = QDateEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDateEdit_userDateChanged(QDateEdit* self, QDate* date) {
	self->userDateChanged(*date);
}

void QDateEdit_connect_userDateChanged(QDateEdit* self, intptr_t slot) {
	MiqtVirtualQDateEdit::connect(self, static_cast<void (QDateEdit::*)(QDate)>(&QDateEdit::userDateChanged), self, [=](QDate date) {
		QDate* sigval1 = new QDate(date);
		miqt_exec_callback_QDateEdit_userDateChanged(slot, sigval1);
	});
}

struct miqt_string QDateEdit_tr2(const char* s, const char* c) {
	QString _ret = QDateEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateEdit_tr3(const char* s, const char* c, int n) {
	QString _ret = QDateEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDateEdit_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QDateEdit_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_sizeHint();
}

bool QDateEdit_override_virtual_clear(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clear = slot;
	return true;
}

void QDateEdit_virtualbase_clear(void* self) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_clear();
}

bool QDateEdit_override_virtual_stepBy(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__stepBy = slot;
	return true;
}

void QDateEdit_virtualbase_stepBy(void* self, int steps) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_stepBy(steps);
}

bool QDateEdit_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QDateEdit_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDateEdit*)(self) )->virtualbase_event(event);
}

bool QDateEdit_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QDateEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_keyPressEvent(event);
}

bool QDateEdit_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QDateEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_wheelEvent(event);
}

bool QDateEdit_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QDateEdit_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_focusInEvent(event);
}

bool QDateEdit_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QDateEdit_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQDateEdit*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QDateEdit_override_virtual_validate(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__validate = slot;
	return true;
}

int QDateEdit_virtualbase_validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_validate(input, pos);
}

bool QDateEdit_override_virtual_fixup(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fixup = slot;
	return true;
}

void QDateEdit_virtualbase_fixup(const void* self, struct miqt_string input) {
	( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_fixup(input);
}

bool QDateEdit_override_virtual_dateTimeFromText(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dateTimeFromText = slot;
	return true;
}

QDateTime* QDateEdit_virtualbase_dateTimeFromText(const void* self, struct miqt_string text) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_dateTimeFromText(text);
}

bool QDateEdit_override_virtual_textFromDateTime(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__textFromDateTime = slot;
	return true;
}

struct miqt_string QDateEdit_virtualbase_textFromDateTime(const void* self, QDateTime* dt) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_textFromDateTime(dt);
}

bool QDateEdit_override_virtual_stepEnabled(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__stepEnabled = slot;
	return true;
}

int QDateEdit_virtualbase_stepEnabled(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_stepEnabled();
}

bool QDateEdit_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QDateEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_mousePressEvent(event);
}

bool QDateEdit_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QDateEdit_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_paintEvent(event);
}

bool QDateEdit_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QDateEdit_virtualbase_initStyleOption(const void* self, QStyleOptionSpinBox* option) {
	( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_initStyleOption(option);
}

bool QDateEdit_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QDateEdit_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_minimumSizeHint();
}

bool QDateEdit_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QDateEdit_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QDateEdit_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QDateEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_resizeEvent(event);
}

bool QDateEdit_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QDateEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QDateEdit_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QDateEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_focusOutEvent(event);
}

bool QDateEdit_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QDateEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QDateEdit_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QDateEdit_virtualbase_changeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_changeEvent(event);
}

bool QDateEdit_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QDateEdit_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_closeEvent(event);
}

bool QDateEdit_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QDateEdit_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_hideEvent(event);
}

bool QDateEdit_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QDateEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QDateEdit_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QDateEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QDateEdit_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QDateEdit_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_timerEvent(event);
}

bool QDateEdit_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QDateEdit_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_showEvent(event);
}

bool QDateEdit_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QDateEdit_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_devType();
}

bool QDateEdit_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QDateEdit_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_setVisible(visible);
}

bool QDateEdit_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QDateEdit_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_heightForWidth(param1);
}

bool QDateEdit_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QDateEdit_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_hasHeightForWidth();
}

bool QDateEdit_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QDateEdit_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_paintEngine();
}

bool QDateEdit_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QDateEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QDateEdit_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QDateEdit_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_enterEvent(event);
}

bool QDateEdit_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QDateEdit_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_leaveEvent(event);
}

bool QDateEdit_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QDateEdit_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_moveEvent(event);
}

bool QDateEdit_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QDateEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_tabletEvent(event);
}

bool QDateEdit_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QDateEdit_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_actionEvent(event);
}

bool QDateEdit_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QDateEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QDateEdit_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QDateEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QDateEdit_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QDateEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QDateEdit_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QDateEdit_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_dropEvent(event);
}

bool QDateEdit_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QDateEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQDateEdit*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QDateEdit_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QDateEdit_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_metric(param1);
}

bool QDateEdit_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QDateEdit_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_initPainter(painter);
}

bool QDateEdit_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QDateEdit_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_redirected(offset);
}

bool QDateEdit_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QDateEdit_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQDateEdit*)(self) )->virtualbase_sharedPainter();
}

bool QDateEdit_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QDateEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QDateEdit_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDateEdit_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDateEdit*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QDateEdit_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QDateEdit_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_childEvent(event);
}

bool QDateEdit_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QDateEdit_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_customEvent(event);
}

bool QDateEdit_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QDateEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_connectNotify(signal);
}

bool QDateEdit_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDateEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDateEdit*)(self) )->virtualbase_disconnectNotify(signal);
}

QLineEdit* QDateEdit_protectedbase_lineEdit(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->lineEdit();

}

void QDateEdit_protectedbase_setLineEdit(bool* _dynamic_cast_ok, void* self, QLineEdit* edit) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLineEdit(edit);

}

void QDateEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QDateEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QDateEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QDateEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QDateEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QDateEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QDateEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QDateEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QDateEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDateEdit* self_cast = dynamic_cast<MiqtVirtualQDateEdit*>( (QDateEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QDateEdit_delete(QDateEdit* self) {
	delete self;
}

