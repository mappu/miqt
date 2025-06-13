#include <QActionEvent>
#include <QByteArray>
#include <QCalendar>
#include <QCalendarWidget>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDate>
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
#include <QMap>
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
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTextCharFormat>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qcalendarwidget.h>
#include "gen_qcalendarwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCalendarWidget_selectionChanged(intptr_t);
void miqt_exec_callback_QCalendarWidget_clicked(intptr_t, QDate*);
void miqt_exec_callback_QCalendarWidget_activated(intptr_t, QDate*);
void miqt_exec_callback_QCalendarWidget_currentPageChanged(intptr_t, int, int);
QSize* miqt_exec_callback_QCalendarWidget_sizeHint(const QCalendarWidget*, intptr_t);
QSize* miqt_exec_callback_QCalendarWidget_minimumSizeHint(const QCalendarWidget*, intptr_t);
bool miqt_exec_callback_QCalendarWidget_event(QCalendarWidget*, intptr_t, QEvent*);
bool miqt_exec_callback_QCalendarWidget_eventFilter(QCalendarWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCalendarWidget_mousePressEvent(QCalendarWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCalendarWidget_resizeEvent(QCalendarWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QCalendarWidget_keyPressEvent(QCalendarWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCalendarWidget_paintCell(const QCalendarWidget*, intptr_t, QPainter*, QRect*, QDate*);
int miqt_exec_callback_QCalendarWidget_devType(const QCalendarWidget*, intptr_t);
void miqt_exec_callback_QCalendarWidget_setVisible(QCalendarWidget*, intptr_t, bool);
int miqt_exec_callback_QCalendarWidget_heightForWidth(const QCalendarWidget*, intptr_t, int);
bool miqt_exec_callback_QCalendarWidget_hasHeightForWidth(const QCalendarWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QCalendarWidget_paintEngine(const QCalendarWidget*, intptr_t);
void miqt_exec_callback_QCalendarWidget_mouseReleaseEvent(QCalendarWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCalendarWidget_mouseDoubleClickEvent(QCalendarWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCalendarWidget_mouseMoveEvent(QCalendarWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCalendarWidget_wheelEvent(QCalendarWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QCalendarWidget_keyReleaseEvent(QCalendarWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCalendarWidget_focusInEvent(QCalendarWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCalendarWidget_focusOutEvent(QCalendarWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCalendarWidget_enterEvent(QCalendarWidget*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QCalendarWidget_leaveEvent(QCalendarWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QCalendarWidget_paintEvent(QCalendarWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QCalendarWidget_moveEvent(QCalendarWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QCalendarWidget_closeEvent(QCalendarWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QCalendarWidget_contextMenuEvent(QCalendarWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QCalendarWidget_tabletEvent(QCalendarWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QCalendarWidget_actionEvent(QCalendarWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QCalendarWidget_dragEnterEvent(QCalendarWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QCalendarWidget_dragMoveEvent(QCalendarWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QCalendarWidget_dragLeaveEvent(QCalendarWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QCalendarWidget_dropEvent(QCalendarWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QCalendarWidget_showEvent(QCalendarWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QCalendarWidget_hideEvent(QCalendarWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QCalendarWidget_nativeEvent(QCalendarWidget*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QCalendarWidget_changeEvent(QCalendarWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QCalendarWidget_metric(const QCalendarWidget*, intptr_t, int);
void miqt_exec_callback_QCalendarWidget_initPainter(const QCalendarWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QCalendarWidget_redirected(const QCalendarWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QCalendarWidget_sharedPainter(const QCalendarWidget*, intptr_t);
void miqt_exec_callback_QCalendarWidget_inputMethodEvent(QCalendarWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QCalendarWidget_inputMethodQuery(const QCalendarWidget*, intptr_t, int);
bool miqt_exec_callback_QCalendarWidget_focusNextPrevChild(QCalendarWidget*, intptr_t, bool);
void miqt_exec_callback_QCalendarWidget_timerEvent(QCalendarWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QCalendarWidget_childEvent(QCalendarWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCalendarWidget_customEvent(QCalendarWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QCalendarWidget_connectNotify(QCalendarWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCalendarWidget_disconnectNotify(QCalendarWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCalendarWidget final : public QCalendarWidget {
public:

	MiqtVirtualQCalendarWidget(QWidget* parent): QCalendarWidget(parent) {}
	MiqtVirtualQCalendarWidget(): QCalendarWidget() {}

	virtual ~MiqtVirtualQCalendarWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QCalendarWidget::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QCalendarWidget_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QCalendarWidget_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QCalendarWidget::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QCalendarWidget_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QCalendarWidget_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QCalendarWidget::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QCalendarWidget_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QCalendarWidget_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QCalendarWidget::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QCalendarWidget_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QCalendarWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QCalendarWidget::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QCalendarWidget::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QCalendarWidget::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintCell = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintCell(QPainter* painter, const QRect& rect, QDate date) const override {
		if (handle__paintCell == 0) {
			QCalendarWidget::paintCell(painter, rect, date);
			return;
		}

		QPainter* sigval1 = painter;
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&rect_ret);
		QDate* sigval3 = new QDate(date);
		miqt_exec_callback_QCalendarWidget_paintCell(this, handle__paintCell, sigval1, sigval2, sigval3);

	}

	friend void QCalendarWidget_virtualbase_paintCell(const void* self, QPainter* painter, QRect* rect, QDate* date);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QCalendarWidget::devType();
		}

		int callback_return_value = miqt_exec_callback_QCalendarWidget_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QCalendarWidget_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QCalendarWidget::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QCalendarWidget_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QCalendarWidget_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QCalendarWidget::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QCalendarWidget_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QCalendarWidget_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QCalendarWidget::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QCalendarWidget_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QCalendarWidget_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QCalendarWidget::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QCalendarWidget_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QCalendarWidget_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QCalendarWidget::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QCalendarWidget::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QCalendarWidget::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QCalendarWidget::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QCalendarWidget::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QCalendarWidget::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QCalendarWidget::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QCalendarWidget::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QCalendarWidget::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QCalendarWidget::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QCalendarWidget::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QCalendarWidget::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QCalendarWidget::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QCalendarWidget::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QCalendarWidget::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QCalendarWidget::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QCalendarWidget::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QCalendarWidget::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QCalendarWidget::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QCalendarWidget::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QCalendarWidget::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QCalendarWidget::nativeEvent(eventType, message, result);
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
		bool callback_return_value = miqt_exec_callback_QCalendarWidget_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QCalendarWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QCalendarWidget::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QCalendarWidget_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QCalendarWidget::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QCalendarWidget_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QCalendarWidget_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QCalendarWidget::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QCalendarWidget_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QCalendarWidget_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QCalendarWidget::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QCalendarWidget_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QCalendarWidget_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QCalendarWidget::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QCalendarWidget_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QCalendarWidget_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QCalendarWidget::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QCalendarWidget_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QCalendarWidget::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QCalendarWidget_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QCalendarWidget_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QCalendarWidget::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QCalendarWidget_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QCalendarWidget_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QCalendarWidget::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QCalendarWidget::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QCalendarWidget::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QCalendarWidget_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QCalendarWidget_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QCalendarWidget::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QCalendarWidget_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QCalendarWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QCalendarWidget::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QCalendarWidget_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QCalendarWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QCalendarWidget_protectedbase_updateCell(bool* _dynamic_cast_ok, void* self, QDate* date);
	friend void QCalendarWidget_protectedbase_updateCells(bool* _dynamic_cast_ok, void* self);
	friend void QCalendarWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QCalendarWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QCalendarWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QCalendarWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QCalendarWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QCalendarWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCalendarWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCalendarWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCalendarWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QCalendarWidget* QCalendarWidget_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQCalendarWidget(parent);
}

QCalendarWidget* QCalendarWidget_new2() {
	return new (std::nothrow) MiqtVirtualQCalendarWidget();
}

void QCalendarWidget_virtbase(QCalendarWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QCalendarWidget_metaObject(const QCalendarWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCalendarWidget_metacast(QCalendarWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCalendarWidget_tr(const char* s) {
	QString _ret = QCalendarWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QCalendarWidget_sizeHint(const QCalendarWidget* self) {
	return new QSize(self->sizeHint());
}

QSize* QCalendarWidget_minimumSizeHint(const QCalendarWidget* self) {
	return new QSize(self->minimumSizeHint());
}

QDate* QCalendarWidget_selectedDate(const QCalendarWidget* self) {
	return new QDate(self->selectedDate());
}

int QCalendarWidget_yearShown(const QCalendarWidget* self) {
	return self->yearShown();
}

int QCalendarWidget_monthShown(const QCalendarWidget* self) {
	return self->monthShown();
}

QDate* QCalendarWidget_minimumDate(const QCalendarWidget* self) {
	return new QDate(self->minimumDate());
}

void QCalendarWidget_setMinimumDate(QCalendarWidget* self, QDate* date) {
	self->setMinimumDate(*date);
}

QDate* QCalendarWidget_maximumDate(const QCalendarWidget* self) {
	return new QDate(self->maximumDate());
}

void QCalendarWidget_setMaximumDate(QCalendarWidget* self, QDate* date) {
	self->setMaximumDate(*date);
}

int QCalendarWidget_firstDayOfWeek(const QCalendarWidget* self) {
	Qt::DayOfWeek _ret = self->firstDayOfWeek();
	return static_cast<int>(_ret);
}

void QCalendarWidget_setFirstDayOfWeek(QCalendarWidget* self, int dayOfWeek) {
	self->setFirstDayOfWeek(static_cast<Qt::DayOfWeek>(dayOfWeek));
}

bool QCalendarWidget_isNavigationBarVisible(const QCalendarWidget* self) {
	return self->isNavigationBarVisible();
}

bool QCalendarWidget_isGridVisible(const QCalendarWidget* self) {
	return self->isGridVisible();
}

QCalendar* QCalendarWidget_calendar(const QCalendarWidget* self) {
	return new QCalendar(self->calendar());
}

void QCalendarWidget_setCalendar(QCalendarWidget* self, QCalendar* calendar) {
	self->setCalendar(*calendar);
}

int QCalendarWidget_selectionMode(const QCalendarWidget* self) {
	QCalendarWidget::SelectionMode _ret = self->selectionMode();
	return static_cast<int>(_ret);
}

void QCalendarWidget_setSelectionMode(QCalendarWidget* self, int mode) {
	self->setSelectionMode(static_cast<QCalendarWidget::SelectionMode>(mode));
}

int QCalendarWidget_horizontalHeaderFormat(const QCalendarWidget* self) {
	QCalendarWidget::HorizontalHeaderFormat _ret = self->horizontalHeaderFormat();
	return static_cast<int>(_ret);
}

void QCalendarWidget_setHorizontalHeaderFormat(QCalendarWidget* self, int format) {
	self->setHorizontalHeaderFormat(static_cast<QCalendarWidget::HorizontalHeaderFormat>(format));
}

int QCalendarWidget_verticalHeaderFormat(const QCalendarWidget* self) {
	QCalendarWidget::VerticalHeaderFormat _ret = self->verticalHeaderFormat();
	return static_cast<int>(_ret);
}

void QCalendarWidget_setVerticalHeaderFormat(QCalendarWidget* self, int format) {
	self->setVerticalHeaderFormat(static_cast<QCalendarWidget::VerticalHeaderFormat>(format));
}

QTextCharFormat* QCalendarWidget_headerTextFormat(const QCalendarWidget* self) {
	return new QTextCharFormat(self->headerTextFormat());
}

void QCalendarWidget_setHeaderTextFormat(QCalendarWidget* self, QTextCharFormat* format) {
	self->setHeaderTextFormat(*format);
}

QTextCharFormat* QCalendarWidget_weekdayTextFormat(const QCalendarWidget* self, int dayOfWeek) {
	return new QTextCharFormat(self->weekdayTextFormat(static_cast<Qt::DayOfWeek>(dayOfWeek)));
}

void QCalendarWidget_setWeekdayTextFormat(QCalendarWidget* self, int dayOfWeek, QTextCharFormat* format) {
	self->setWeekdayTextFormat(static_cast<Qt::DayOfWeek>(dayOfWeek), *format);
}

struct miqt_map /* of QDate* to QTextCharFormat* */  QCalendarWidget_dateTextFormat(const QCalendarWidget* self) {
	QMap<QDate, QTextCharFormat> _ret = self->dateTextFormat();
	// Convert QMap<> from C++ memory to manually-managed C memory
	QDate** _karr = static_cast<QDate**>(malloc(sizeof(QDate*) * _ret.size()));
	QTextCharFormat** _varr = static_cast<QTextCharFormat**>(malloc(sizeof(QTextCharFormat*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = new QDate(_itr->first);
		_varr[_ctr] = new QTextCharFormat(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

QTextCharFormat* QCalendarWidget_dateTextFormatWithDate(const QCalendarWidget* self, QDate* date) {
	return new QTextCharFormat(self->dateTextFormat(*date));
}

void QCalendarWidget_setDateTextFormat(QCalendarWidget* self, QDate* date, QTextCharFormat* format) {
	self->setDateTextFormat(*date, *format);
}

bool QCalendarWidget_isDateEditEnabled(const QCalendarWidget* self) {
	return self->isDateEditEnabled();
}

void QCalendarWidget_setDateEditEnabled(QCalendarWidget* self, bool enable) {
	self->setDateEditEnabled(enable);
}

int QCalendarWidget_dateEditAcceptDelay(const QCalendarWidget* self) {
	return self->dateEditAcceptDelay();
}

void QCalendarWidget_setDateEditAcceptDelay(QCalendarWidget* self, int delay) {
	self->setDateEditAcceptDelay(static_cast<int>(delay));
}

void QCalendarWidget_setSelectedDate(QCalendarWidget* self, QDate* date) {
	self->setSelectedDate(*date);
}

void QCalendarWidget_setDateRange(QCalendarWidget* self, QDate* min, QDate* max) {
	self->setDateRange(*min, *max);
}

void QCalendarWidget_setCurrentPage(QCalendarWidget* self, int year, int month) {
	self->setCurrentPage(static_cast<int>(year), static_cast<int>(month));
}

void QCalendarWidget_setGridVisible(QCalendarWidget* self, bool show) {
	self->setGridVisible(show);
}

void QCalendarWidget_setNavigationBarVisible(QCalendarWidget* self, bool visible) {
	self->setNavigationBarVisible(visible);
}

void QCalendarWidget_showNextMonth(QCalendarWidget* self) {
	self->showNextMonth();
}

void QCalendarWidget_showPreviousMonth(QCalendarWidget* self) {
	self->showPreviousMonth();
}

void QCalendarWidget_showNextYear(QCalendarWidget* self) {
	self->showNextYear();
}

void QCalendarWidget_showPreviousYear(QCalendarWidget* self) {
	self->showPreviousYear();
}

void QCalendarWidget_showSelectedDate(QCalendarWidget* self) {
	self->showSelectedDate();
}

void QCalendarWidget_showToday(QCalendarWidget* self) {
	self->showToday();
}

void QCalendarWidget_selectionChanged(QCalendarWidget* self) {
	self->selectionChanged();
}

void QCalendarWidget_connect_selectionChanged(QCalendarWidget* self, intptr_t slot) {
	QCalendarWidget::connect(self, static_cast<void (QCalendarWidget::*)()>(&QCalendarWidget::selectionChanged), self, [=]() {
		miqt_exec_callback_QCalendarWidget_selectionChanged(slot);
	});
}

void QCalendarWidget_clicked(QCalendarWidget* self, QDate* date) {
	self->clicked(*date);
}

void QCalendarWidget_connect_clicked(QCalendarWidget* self, intptr_t slot) {
	QCalendarWidget::connect(self, static_cast<void (QCalendarWidget::*)(QDate)>(&QCalendarWidget::clicked), self, [=](QDate date) {
		QDate* sigval1 = new QDate(date);
		miqt_exec_callback_QCalendarWidget_clicked(slot, sigval1);
	});
}

void QCalendarWidget_activated(QCalendarWidget* self, QDate* date) {
	self->activated(*date);
}

void QCalendarWidget_connect_activated(QCalendarWidget* self, intptr_t slot) {
	QCalendarWidget::connect(self, static_cast<void (QCalendarWidget::*)(QDate)>(&QCalendarWidget::activated), self, [=](QDate date) {
		QDate* sigval1 = new QDate(date);
		miqt_exec_callback_QCalendarWidget_activated(slot, sigval1);
	});
}

void QCalendarWidget_currentPageChanged(QCalendarWidget* self, int year, int month) {
	self->currentPageChanged(static_cast<int>(year), static_cast<int>(month));
}

void QCalendarWidget_connect_currentPageChanged(QCalendarWidget* self, intptr_t slot) {
	QCalendarWidget::connect(self, static_cast<void (QCalendarWidget::*)(int, int)>(&QCalendarWidget::currentPageChanged), self, [=](int year, int month) {
		int sigval1 = year;
		int sigval2 = month;
		miqt_exec_callback_QCalendarWidget_currentPageChanged(slot, sigval1, sigval2);
	});
}

struct miqt_string QCalendarWidget_tr2(const char* s, const char* c) {
	QString _ret = QCalendarWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendarWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QCalendarWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCalendarWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QCalendarWidget_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::sizeHint());
}

bool QCalendarWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QCalendarWidget_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::minimumSizeHint());
}

bool QCalendarWidget_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QCalendarWidget_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::event(event);
}

bool QCalendarWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QCalendarWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::eventFilter(watched, event);
}

bool QCalendarWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::mousePressEvent(event);
}

bool QCalendarWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::resizeEvent(event);
}

bool QCalendarWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::keyPressEvent(event);
}

bool QCalendarWidget_override_virtual_paintCell(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintCell = slot;
	return true;
}

void QCalendarWidget_virtualbase_paintCell(const void* self, QPainter* painter, QRect* rect, QDate* date) {
	static_cast<const MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::paintCell(painter, *rect, *date);
}

bool QCalendarWidget_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QCalendarWidget_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::devType();
}

bool QCalendarWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QCalendarWidget_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::setVisible(visible);
}

bool QCalendarWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QCalendarWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::heightForWidth(static_cast<int>(param1));
}

bool QCalendarWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QCalendarWidget_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::hasHeightForWidth();
}

bool QCalendarWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QCalendarWidget_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::paintEngine();
}

bool QCalendarWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::mouseReleaseEvent(event);
}

bool QCalendarWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::mouseDoubleClickEvent(event);
}

bool QCalendarWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::mouseMoveEvent(event);
}

bool QCalendarWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::wheelEvent(event);
}

bool QCalendarWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::keyReleaseEvent(event);
}

bool QCalendarWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::focusInEvent(event);
}

bool QCalendarWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::focusOutEvent(event);
}

bool QCalendarWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::enterEvent(event);
}

bool QCalendarWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::leaveEvent(event);
}

bool QCalendarWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::paintEvent(event);
}

bool QCalendarWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::moveEvent(event);
}

bool QCalendarWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::closeEvent(event);
}

bool QCalendarWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::contextMenuEvent(event);
}

bool QCalendarWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::tabletEvent(event);
}

bool QCalendarWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::actionEvent(event);
}

bool QCalendarWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::dragEnterEvent(event);
}

bool QCalendarWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::dragMoveEvent(event);
}

bool QCalendarWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::dragLeaveEvent(event);
}

bool QCalendarWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::dropEvent(event);
}

bool QCalendarWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::showEvent(event);
}

bool QCalendarWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::hideEvent(event);
}

bool QCalendarWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QCalendarWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool QCalendarWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::changeEvent(param1);
}

bool QCalendarWidget_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QCalendarWidget_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::metric(static_cast<MiqtVirtualQCalendarWidget::PaintDeviceMetric>(param1));
}

bool QCalendarWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QCalendarWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::initPainter(painter);
}

bool QCalendarWidget_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QCalendarWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::redirected(offset);
}

bool QCalendarWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QCalendarWidget_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::sharedPainter();
}

bool QCalendarWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::inputMethodEvent(param1);
}

bool QCalendarWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QCalendarWidget_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QCalendarWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QCalendarWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::focusNextPrevChild(next);
}

bool QCalendarWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::timerEvent(event);
}

bool QCalendarWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::childEvent(event);
}

bool QCalendarWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::customEvent(event);
}

bool QCalendarWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QCalendarWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::connectNotify(*signal);
}

bool QCalendarWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QCalendarWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQCalendarWidget*>(self)->QCalendarWidget::disconnectNotify(*signal);
}

void QCalendarWidget_protectedbase_updateCell(bool* _dynamic_cast_ok, void* self, QDate* date) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateCell(*date);
}

void QCalendarWidget_protectedbase_updateCells(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateCells();
}

void QCalendarWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QCalendarWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QCalendarWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QCalendarWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QCalendarWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QCalendarWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QCalendarWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QCalendarWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QCalendarWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QCalendarWidget_delete(QCalendarWidget* self) {
	delete self;
}

